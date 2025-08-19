#include<bits/stdc++.h>
using namespace std;
bool triples_sum_to_zero(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1 ; i++) {
        unordered_set<int> hashSet;
        for (int j = 0; j < n; j++) {
            if(hashSet.find(-arr[i] - arr[j]) != hashSet.end()) {
                return true;
            } else {
               hashSet.insert(arr[j]);
            }
        }
    }
    return false;
}