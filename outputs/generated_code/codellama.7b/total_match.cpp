#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    int sum1 = 0, sum2 = 0;
    for (const string& s : lst1) {
        sum1 += s.size();
    }
    for (const string& s : lst2) {
        sum2 += s.size();
    }
    if (sum1 < sum2) return lst2;
    else if (sum1 > sum2) return lst1;
    else return issame(lst1, lst2) ? lst1 : vector<string>();
}
