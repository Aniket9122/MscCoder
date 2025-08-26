#include <iostream>
#include <vector>
#include <string>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    // check if both vectors are empty
    if (lst1.empty() && lst2.empty()) {
        return "NO";
    }

    // initialize variables to keep track of the number of even and odd elements in both vectors
    int num_even1 = 0, num_odd1 = 0;
    for (int i : lst1) {
        if (i % 2 == 0) {
            num_even1++;
        } else {
            num_odd1++;
        }
    }

    int num_even2 = 0, num_odd2 = 0;
    for (int i : lst2) {
        if (i % 2 == 0) {
            num_even2++;
        } else {
            num_odd2++;
        }
    }

    // check if both vectors have the same number of even and odd elements
    if (num_even1 != num_even2 || num_odd1 != num_odd2) {
        return "NO";
    }

    // iterate through both vectors and exchange elements until one vector has all even elements
    while (!lst1.empty() && !lst2.empty()) {
        if (lst1[0] % 2 == 0) {
            lst2.insert(lst2.begin(), lst1[0]);
            lst1.erase(lst1.begin());
        } else if (lst2[0] % 2 == 0) {
            lst1.insert(lst1.begin(), lst2[0]);
            lst2.erase(lst2.begin());
        } else {
            break;
        }
    }

    // check if one vector has all even elements
    if (lst1.empty() || lst2.empty()) {
        return "YES";
    } else {
        return "NO";
    }
}