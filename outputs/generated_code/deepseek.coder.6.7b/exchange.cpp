#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());
    
    for (size_t i = 0; i < lst1.size(); ++i){
        if ((lst1[i] % 2) != 0 && (lst2[i] % 2) == 0){
            swap(lst1[i], lst2[i]);
            ++i;
        }
    }
    
    for(size_t i = 0; i < lst1.size(); ++i){
        if((lst1[i] % 2) != 0){
            return "NO";
        }
    }
    
    return "YES";
}