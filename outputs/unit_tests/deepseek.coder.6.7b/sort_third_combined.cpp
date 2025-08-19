#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) { 
    if (a.size() != b.size()) return false; 
    for (int i = 0; i < a.size(); i++)  
        if (a[i] != b[i]) return false; 
    return true; 
} 

vector<int> sort_third(vector<int> l){
    vector<int> notDivByThree, divByThree;
    
    for(int i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0) {
            divByThree.push_back(l[i]);
        } else {
            notDivByThree.push_back(l[i]);
        }
    }
    
    sort(divByThree.begin(), divByThree.end());
    
    int j = 0; 
    for (int i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0 && j < divByThree.size()) {
            notDivByThree.push_back(divByThree[j++]);
        }
    }
    
    return notDivByThree;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<int> a,vector<int>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
        if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(sort_third({1, 2, 3}) , sort_third({1, 2, 3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10}) , sort_third({5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) , sort_third({5, 8, -12, 4, 23, 2, 3, 11, 12, -10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5, 6, 3, 4, 8, 9, 2}) , {2, 6, 3, 4, 8, 9, 5}))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5, 8, 3, 4, 6, 9, 2}) , {2, 8, 3, 4, 6, 9, 5}))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5, 6, 9, 4, 8, 3, 2}) , {2, 6, 9, 4, 8, 3, 5}))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}) , {2, 6, 3, 4, 8, 9, 5, 1}))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3}), sort_third({1,2,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,3,-5,2,-3,3,9,0,123,1,-10}), sort_third({1,3,-5,2,-3,3,5,0,123,9,-10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,8,-12,4,23,2,3,11,12,-10}), sort_third({-10,8,-12,3,23,2,4,11,12,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,6,3,4,8,9,2}), sort_third({2,6,3,4,8,9,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,8,3,4,6,9,2}), sort_third({2,8,3,4,6,9,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,6,9,4,8,3,2}), sort_third({2,6,9,4,8,3,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,6,3,4,8,9,2,1}), sort_third({2,6,3,4,8,9,5,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,3,8,10,23,7}), sort_third({6,12,15,9,3,8,10,23,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,1,3,7,8,9,10}), sort_third({2,1,3,7,8,9,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}), sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,3,8,13,18,7}), sort_third({6,12,15,9,3,8,13,18,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,10,20,15,18,13,7}), sort_third({2,10,20,7,18,13,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,10,15,20,25,30,35,40,45,50,55,60}), sort_third({5,10,15,20,25,30,35,40,45,50,55,60})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,6,9,12,15,18,21,24,27,30,33,36}), sort_third({3,6,9,12,15,18,21,24,27,30,33,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,66,77,88,99}), sort_third({11,22,33,44,55,66,77,88,99})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({}), sort_third({})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1}), sort_third({1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,7,8,9,10,9}), sort_third({2,3,7,8,9,10,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,1}), sort_third({1,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,66,77,88,32,99,77}), sort_third({11,22,33,44,55,66,77,88,32,99,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,66,77,88,88,32,99,77,77,11}), sort_third({11,22,33,32,55,66,44,88,88,77,99,77,77,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({54,3,7,8,9,10,9}), sort_third({8,3,7,9,9,10,54})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,1,1}), sort_third({27,1,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,3}), sort_third({1,2,3,3,5,6,4,8,9,7,11,12,10,14,15,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,6,9,12,15,24,27,30,33,36}), sort_third({3,6,9,12,15,24,27,30,33,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,66,77,88,32,77}), sort_third({11,22,33,44,55,66,77,88,32,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,35,1,3,7,8,9,10}), sort_third({2,35,1,3,7,8,9,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({46,32,77,22,18,57,88,66,54}), sort_third({22,32,77,46,18,57,88,66,54})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,1,1,27,1}), sort_third({27,1,1,27,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({54,3,7,8,9,10}), sort_third({8,3,7,54,9,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,35,1,3,7,9,10}), sort_third({2,35,1,3,7,9,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({47,32,77,22,18,57,88,66,54}), sort_third({22,32,77,47,18,57,88,66,54})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,3,8,13,18}), sort_third({6,12,15,9,3,8,13,18})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,11,12,13,14,15,3}), sort_third({1,2,3,4,5,6,7,8,9,11,12,13,14,15,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,11,12,13,14,15,3,15}), sort_third({1,2,3,4,5,6,7,8,9,11,12,13,14,15,3,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({54,3,7,8,9,35,10,9}), sort_third({8,3,7,10,9,35,54,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,3,8,10,23,7,23}), sort_third({6,12,15,9,3,8,10,23,7,23})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,3,8,13,18,15}), sort_third({6,12,15,9,3,8,13,18,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,45,9,11,12,14,15,3,13}), sort_third({1,2,3,4,5,6,7,45,9,11,12,14,15,3,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,6,9,12,15,25,27,30,33,36}), sort_third({3,6,9,12,15,25,27,30,33,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,1,1,1,1,27,1}), sort_third({1,1,1,1,1,27,27})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,55,1}), sort_third({27,55,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({32,1,2,3,4,5,6,7,8,9,10,88,11,12,13,14,15}), sort_third({3,1,2,6,4,5,9,7,8,11,10,88,14,12,13,32,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,25,27,30,33}), sort_third({9,12,25,27,30,33})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,45,9,12,14,15,3,13}), sort_third({1,2,3,3,5,6,4,45,9,7,14,15,12,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,4,20,15,18,13,7}), sort_third({2,4,20,7,18,13,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,45,9,12,14,15,21,3,13}), sort_third({1,2,3,4,5,6,7,45,9,12,14,15,21,3,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,27,30,33}), sort_third({9,12,27,30,33})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,6,9,12,15,25,27,30,33,18,36}), sort_third({3,6,9,12,15,25,18,30,33,27,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({8,55,1,1}), sort_third({1,55,1,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,27,55,1}), sort_third({1,27,55,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,6,9,12,15,24,27,30,34,36}), sort_third({3,6,9,12,15,24,27,30,34,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,10,15,20,25,35,40,47,45,50,55,60}), sort_third({5,10,15,20,25,35,40,47,45,50,55,60})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({28,1,1,27,1}), sort_third({27,1,1,28,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,1,2,3,4,5,6,7,45,9,12,14,15,21,3,13}), sort_third({3,1,2,3,4,5,6,7,45,9,12,14,13,21,3,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0}), sort_third({0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,1,7,8,9,10}), sort_third({2,1,7,8,9,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,1,2,3,4,5,6,7,45,10,12,14,15,21,3,13}), sort_third({3,1,2,3,4,5,6,7,45,10,12,14,13,21,3,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,1}), sort_third({2,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,66,77,88,32,77,55}), sort_third({11,22,33,44,55,66,77,88,32,77,55})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,6,20,9,12,15,25,27,30,33,18,60,36}), sort_third({3,6,20,9,12,15,25,27,30,33,18,60,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,18,6,9,12,15,24,27,30,27,36}), sort_third({3,18,6,9,12,15,24,27,30,27,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,55,0}), sort_third({27,55,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,10,15,20,25,30,35,40,50,55,60}), sort_third({5,10,15,20,25,30,35,40,50,55,60})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({46,32,77,22,18,57,77,88,66,54}), sort_third({22,32,77,46,18,57,54,88,66,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,45,9,12,14,21,3,13}), sort_third({1,2,3,3,5,6,4,45,9,7,14,21,12,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({46,32,77,22,18,57,57,88,66,54}), sort_third({22,32,77,46,18,57,54,88,66,57})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({46,40,32,77,22,18,77,57,88,66,54,54,66}), sort_third({46,40,32,66,22,18,66,57,88,77,54,54,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({46,32,77,22,57,23,66,54}), sort_third({22,32,77,46,57,23,66,54})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({22,33,44,55,66,77,88,99}), sort_third({22,33,44,55,66,77,88,99})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,66,77,88,88,32,99,77,77,11,77,66}), sort_third({11,22,33,32,55,66,44,88,88,66,99,77,77,11,77,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,10,15,20,25,30,35,40,45,50,40,55,60}), sort_third({5,10,15,20,25,30,35,40,45,50,40,55,60})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({47,28,1,1,27,1}), sort_third({1,28,1,47,27,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,77,88,32,77,55}), sort_third({11,22,33,44,55,77,55,32,77,88})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,1,1,27}), sort_third({27,1,1,27})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({23,9,12,15,6,3,8,54,18}), sort_third({8,9,12,15,6,3,23,54,18})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,25,27,30,33,25}), sort_third({9,12,25,25,30,33,27})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({69,18}), sort_third({69,18})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,1,1,1,1,4,27,1}), sort_third({1,1,1,27,1,4,27,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,26,6,20,9,12,15,25,27,30,33,18,60,36}), sort_third({3,26,6,15,9,12,20,25,27,30,33,18,60,36})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,2,35,1,3,7,8,9,10}), sort_third({1,2,35,2,3,7,8,9,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({46,32,77,22,18,57,77,88,66,18,54}), sort_third({18,32,77,22,18,57,46,88,66,77,54})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,100,33,44,55,66,77,88,88,32,99,77,77,11}), sort_third({11,22,100,33,44,55,66,77,88,77,32,99,88,77,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,10,20,15,20,25,35,40,47,45,50,55,60}), sort_third({5,10,20,15,20,25,35,40,47,45,50,55,60})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,6,4,5,6,7,8,9,10,11,13,14,57,15}), sort_third({1,2,3,6,4,5,6,7,8,9,10,11,13,14,57,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,21,8,13,26,18,12,13}), sort_third({6,12,15,9,21,8,12,26,18,13,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,22,33,44,55,77,88,99,77}), sort_third({11,22,33,44,55,77,88,99,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,1,1,1,4,27,1}), sort_third({1,1,1,1,4,27,27})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,33,44,55,66,77,88,32,77,11}), sort_third({11,33,44,11,66,77,55,32,77,88})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,8,8,9,10,9}), sort_third({2,3,8,8,9,10,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,21,8,40,26,18,12,13}), sort_third({6,12,15,9,21,8,12,26,18,40,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({27,1,1,1,1,11,4,27,1}), sort_third({1,1,1,4,1,11,27,27,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({33}), sort_third({33})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,23,33,44,55,77,88,99,77}), sort_third({11,23,33,44,55,77,88,99,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({47,32,77,22,18,57,26,66,54}), sort_third({22,32,77,26,18,57,47,66,54})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,8,10,23,7,23,8}), sort_third({6,12,15,8,8,10,9,7,23,23})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,45,9,11,6,12,13,15,3,13}), sort_third({1,2,3,4,5,6,7,45,9,11,6,12,13,15,3,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({47,32,77,22,18,47,57,88,66,54}), sort_third({22,32,77,47,18,47,54,88,66,57})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,15,6,3,9,13,18,7}), sort_third({6,12,15,9,3,9,13,18,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({77,4,20,15,18,13,7}), sort_third({7,4,20,15,18,13,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,1,2,3,4,5,6,7,9,12,14,15,21,3,13,13}), sort_third({3,1,2,3,4,5,6,7,9,12,14,15,13,3,13,21})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,3,5,6,7,45,9,11,6,12,13,15,3,13,3}), sort_third({1,2,3,3,3,5,4,7,45,6,11,6,9,13,15,12,13,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({54,3,11,7,8,9}), sort_third({7,3,11,54,8,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,88,11,12,13,14,15}), sort_third({1,2,3,4,5,6,7,8,9,10,88,11,12,13,14,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,4,66,15,18,13,7}), sort_third({2,4,66,7,18,13,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({11,33,44,55,88,99,77}), sort_third({11,33,44,55,88,99,77})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,-8,9,-12,7,6}), sort_third({-12,2,3,-3,5,1,0,-8,9,1,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,0,1,13,6,-2,19}), sort_third({-2,2,7,1,3,-7,5,8,0,9,13,6,11,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,-6,18,21,30,-9}), sort_third({-3,12,3,6,15,0,9,-6,18,21,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}), sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000}), sort_third({4,500,6,7,8,289,20,-105,-277,104,200,3,300,5,700,800,-200,-901,900,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,6,5,4,3,2,1,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}), sort_third({-9,9,8,-6,6,5,-3,3,2,1,-1,-2,4,-4,-5,7,-7,-8,10,-10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5}), sort_third({5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3,12}), sort_third({3,0,6,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}), sort_third({3,0,2,6,4,5,9,7,8,12,10,11,15,13,14,18,16,17,19,19,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3,12,3}), sort_third({3,0,6,9,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,14,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,0,3}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,0,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,6}), sort_third({-12,2,3,-3,5,1,1,-8,9,16,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,5,1}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,5,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,18,21,30,-9}), sort_third({-3,12,3,6,15,0,9,18,21,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,11}), sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,6,1}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,6,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-1,6,-4,3,12}), sort_third({6,0,-1,9,-4,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-1,6,-4,3,12,3}), sort_third({6,0,-1,9,-4,3,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000}), sort_third({4,500,6,7,8,289,20,-105,-277,104,200,3,300,5,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,1,8,14,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,8,14,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,14,0,6}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,14,0,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,6,1,6}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,6,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,500,3,12,3}), sort_third({3,0,6,9,3,12,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,500,3,12,3}), sort_third({3,6,500,9,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,2,1,8,14,0}), sort_third({-8,7,3,-6,3,0,-4,2,1,8,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,1000,0,-8,6,2,0,1}), sort_third({-8,7,3,-6,1000,0,-4,6,2,0,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-1,6,-4,-5,3,12}), sort_third({3,0,-1,6,-4,-5,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,-8,9,-12,7,6,-12}), sort_third({-3,2,3,1,5,1,6,16,-8,9,-12,7,16,-12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,14,0,4,6}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,6,0,4,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,6,2,1,8,14,0,6,-8}), sort_third({-6,7,3,-4,0,-8,6,2,1,6,14,0,8,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21,20}), sort_third({2,0,-901,5,3,4,8,6,7,11,9,10,14,12,13,17,15,16,19,18,19,21,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,900,-901,800,1000,0,-277}), sort_third({0,500,6,7,8,289,20,-105,-277,104,200,3,300,5,700,900,-901,800,1000,0,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,-8,0}), sort_third({-8,7,3,-8,3,0,-6,6,2,-4,1,8,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,1000,0,-8,6,2,289,1}), sort_third({-8,7,3,-6,1000,0,-4,6,2,289,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-7,5,1,0,-8,9,-12,7,6,6,1}), sort_third({-12,2,3,-7,5,1,0,-8,9,1,7,6,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,19,21,20}), sort_third({2,0,-901,5,3,4,8,6,7,11,9,10,14,12,13,18,15,16,19,19,21,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-901,800,1000,0,-277}), sort_third({-277,500,6,0,8,289,7,-105,-277,20,200,3,104,5,700,300,18,-901,800,1000,0,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,21,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000}), sort_third({4,500,6,7,8,289,21,-105,-277,104,200,3,300,5,700,800,-200,-901,900,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,4,9,-12,7,6}), sort_third({-12,2,3,-3,5,1,0,4,9,1,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,6,16}), sort_third({-12,2,3,-3,5,1,1,-8,9,16,7,6,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,6,1,-12}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,6,7,-12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,6,1,0,-8,9,-12,7,6,5,1,1}), sort_third({-8,2,3,1,1,0,1,9,-12,6,6,5,7,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17,18,19,21,20}), sort_third({2,0,-901,5,3,4,8,6,7,12,10,11,15,13,14,18,16,17,19,19,21,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,1000,0,-8,-6,8,6,2,289,1,7}), sort_third({-8,7,3,-6,1000,0,-4,-6,8,1,2,289,6,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,-8,9,-12,7,6,-12,16}), sort_third({-3,2,3,1,5,1,6,16,-8,9,-12,7,16,-12,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,17,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-901,800,1000,0,-277}), sort_third({-277,500,6,0,8,289,17,-105,-277,20,200,3,104,5,700,300,18,-901,800,1000,0,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,19,20}), sort_third({3,0,2,6,4,5,9,7,8,12,10,11,15,13,14,19,16,18,19,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,11}), sort_third({3,0,2,6,4,5,9,7,8,11,10,11,12,13,14,15,16,17,18,19,20,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,0,-12,7,6,6,1,-12}), sort_third({-12,2,3,-8,1,0,1,9,0,5,7,6,6,1,-12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,11}), sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,-8,16,16,-8,14,9,-12,7,6,-12}), sort_third({-12,2,3,-12,5,1,-8,16,16,-8,14,9,-3,7,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,-5,12}), sort_third({-5,0,8,-1,6,-4,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,-8,9,-12,7,6,-13}), sort_third({-3,2,3,1,5,1,6,16,-8,9,-12,7,16,-13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3,3,12,2}), sort_third({2,0,6,3,3,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,-8,9,-12,7,6,-12,7}), sort_third({-3,2,3,1,5,1,6,16,-8,9,-12,7,16,-12,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000,6}), sort_third({4,500,6,7,8,289,20,-105,-277,104,200,3,300,5,700,800,-200,-901,900,1000,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,-5,3,12,-4}), sort_third({-4,0,3,3,9,-5,9,12,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,3,-3,5,1,16,16,-8,9,-12,7,6,-12}), sort_third({-12,3,-3,-12,1,16,1,-8,9,5,7,6,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,1,8,800,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,8,800,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,0,1,13,6,-2,19,13}), sort_third({-2,2,7,1,3,-7,5,8,0,9,13,6,11,19,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,-5,1,12,-4}), sort_third({-4,0,3,1,9,-5,9,12,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,200,7,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000,6}), sort_third({-901,500,6,-277,200,7,3,20,-105,6,104,200,7,4,5,289,900,-200,300,800,1000,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,289,3,12,900,3}), sort_third({-4,0,3,3,9,289,3,12,900,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,16,7,8,9,10,11,12,14,15,16,17,18,19,21,20}), sort_third({2,0,-901,5,3,4,7,6,16,10,8,9,14,11,12,17,15,16,19,18,19,21,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,1,0,-8,9,-12,7,6,6,1}), sort_third({1,2,3,1,0,-8,6,-12,7,9,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,3,0,-8,2,1,8,14,0}), sort_third({-4,7,3,2,0,-8,3,1,8,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,-5,12,0}), sort_third({-5,0,8,-1,6,-4,9,12,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,11,9,3,-7,11,8,0,1,13,6,-2,19}), sort_third({-7,2,7,0,9,3,6,11,8,11,1,13,900,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,-3,900,18,-901,800,1000,0,-277}), sort_third({-901,500,6,-3,8,289,0,-105,-277,0,200,3,7,5,700,20,900,18,104,800,1000,300,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,5,2,0,1,8,14,0,6}), sort_third({-8,7,3,-6,3,0,-4,5,2,0,1,8,14,0,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,6,2,1,8,14,-1,6,-8,6}), sort_third({-6,7,3,-4,0,-8,6,2,1,6,14,-1,8,-8,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,6,-12,7}), sort_third({-12,2,3,-12,5,1,-3,-8,9,1,7,6,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,2,1,8,14,0,2}), sort_third({-8,7,3,-6,3,0,-4,2,1,2,14,0,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0,0,6,3,12}), sort_third({0,0,6,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,0,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({7,3,-6,3,0,-8,6,2,1,8,14,1}), sort_third({3,3,-6,6,0,-8,7,2,1,8,14,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-6,3,0,-8,6,2,0,1,8,0,3}), sort_third({-4,7,-6,1,0,-8,3,2,0,3,8,0,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,18,19,21,20,6}), sort_third({2,0,-901,5,3,4,6,6,7,8,9,10,11,12,13,14,15,16,17,17,18,19,21,20,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,19,1,8,-200,0,6}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,19,1,6,-200,0,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,500,3,12,20}), sort_third({3,6,500,9,12,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,6,1,-12,-8}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,6,7,-12,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({8,7,3,-6,1000,0,-8,6,2,0,1}), sort_third({-8,7,3,-6,1000,0,0,6,2,8,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,5,2,0,1,8,14,0}), sort_third({-8,7,3,-6,3,0,-4,5,2,0,1,8,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,1,3,-6,3,0,-8,6,2,0,1,8,16,0,4,6,1}), sort_third({-4,7,1,0,-6,3,2,-8,6,3,0,1,4,16,0,8,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,-3,5,1,0,4,9,-12,7,6}), sort_third({1,2,-3,4,1,0,5,9,-12,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,7,2,1,8,14,0,6,-8}), sort_third({-6,7,3,-4,0,-8,6,2,1,7,14,0,8,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,6,5,4,3,2,1,-1,-3,-4,-5,-6,-7,-8,-9,-10}), sort_third({-10,9,8,-7,6,5,-4,3,2,1,-1,-3,4,-5,-6,7,-8,-9,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,21,-105,-277,104,200,4,5,700,900,-200,-901,800,1000}), sort_third({-200,500,6,5,8,289,7,-105,-277,21,200,4,104,700,900,300,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,3,0,-7,1,8,14,0}), sort_third({-4,7,3,0,0,-7,1,8,14,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-10,3,0,-8,6,2,0,1,8,14,0,4,6}), sort_third({-10,7,3,-8,3,0,-4,6,2,0,1,8,6,0,4,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,6,1,16}), sort_third({-12,2,3,-3,5,1,1,-8,9,1,7,6,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,6,1,-13}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,6,7,-13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,4,-12,7}), sort_third({-12,2,3,-12,5,1,-3,-8,9,1,7,4,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,18,4,9,-12,0,7,6}), sort_third({-3,2,3,0,5,1,1,18,4,7,-12,0,9,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,6,1,-13,9}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,6,7,-13,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-5,0,-1,6,-4,-5,3,12,0}), sort_third({-5,-5,0,-1,6,-4,0,3,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,-3,5,1,0,18,4,9,-12,0,7,6}), sort_third({0,-3,5,1,0,18,2,9,-12,4,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-8,9,12,3,6,15,0,-3,-6,18,21,30,-9}), sort_third({-9,9,12,-8,6,15,0,-3,-6,3,21,30,18})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,200,7,289,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000,6}), sort_third({4,500,6,7,200,7,104,-105,-277,289,200,3,300,5,700,800,-200,-901,900,1000,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,-4,6,1,6}), sort_third({-8,2,3,1,1,0,1,9,-12,5,-4,6,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,500,3,11,3}), sort_third({3,6,500,9,11,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,9,3,-7,8,8,0,1,13,6,-2,19}), sort_third({3,2,9,5,-7,8,8,0,1,13,6,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,0,1,-1,13,11,6,-2,104,13}), sort_third({1,2,7,5,3,-7,9,8,0,11,-1,13,11,6,-2,104,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,1000,0,-8,6,290,2,289,1,1000}), sort_third({-8,7,3,-6,1000,0,-4,6,290,2,289,1,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,3,5,1,0,-8,9,-12,7,6,6,1,6}), sort_third({1,3,5,1,0,-8,6,-12,7,6,6,1,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-901,800,1000,0,-277,-277}), sort_third({-277,500,6,0,8,289,7,-105,-277,20,200,3,104,5,700,300,18,-901,800,1000,0,900,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,-7,2,0,1,8,0,0}), sort_third({-8,7,3,-6,3,0,-4,-7,2,0,1,8,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,16,16,-8,9,-12,7,6,-12,16}), sort_third({-12,2,3,-12,1,16,1,-8,9,5,7,6,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,2,1,0,-8,9,-12,7,6}), sort_third({-12,2,3,-3,2,1,0,-8,9,1,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,9,-12,7,6,-12,7}), sort_third({-12,2,3,-12,5,1,-3,16,9,1,7,6,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,289,3,12,3}), sort_third({-4,0,3,3,9,289,9,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,5,1,16,16,-8,9,-12,7,6,-12,16}), sort_third({-12,3,-3,-12,1,16,2,-8,9,5,7,6,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,-105,-277,200,19,3,0,5,700,-3,900,18,-901,800,1000,0,-277}), sort_third({-277,500,6,-105,289,20,5,-277,200,7,3,0,19,700,-3,300,18,-901,800,1000,0,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,1,800,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,1,800,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0,0,300,6,3,12,0}), sort_third({0,0,300,0,3,12,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,0,-12,7,6,6,1,-12,1}), sort_third({-12,2,3,-8,1,0,1,9,0,1,7,6,5,1,-12,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,12}), sort_third({-1,0,8,9,6,-4,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,900,0,-8,6,2,0,1,8}), sort_third({-6,7,3,-4,3,900,0,-8,6,2,0,1,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,30,8,-1,6,-4,-5,12}), sort_third({-4,0,30,8,-1,6,9,-5,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,30,8,-1,6,-3,-4,-5,12}), sort_third({-3,0,30,8,-1,6,9,-4,-5,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,6,5,4,3,2,1,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-6}), sort_third({-9,9,8,-6,6,5,-3,3,2,1,-1,-2,4,-4,-5,7,-7,-8,10,-10,-6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,5,500,3,12}), sort_third({5,0,6,9,500,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,5,1,16,16,-8,9,-12,7,6,-12,16,7}), sort_third({-12,3,-3,-12,1,16,2,-8,9,5,7,6,16,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,16,16,-8,9,-12,7,4,6,-12,16}), sort_third({-12,2,3,1,1,16,5,-8,9,6,7,4,16,-12,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,6,2,1,8,14,0,6,-8,14}), sort_third({-6,7,3,-4,0,-8,6,2,1,6,14,0,8,-8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,3,-4,9,289,3,12,3}), sort_third({3,0,3,3,-4,9,9,3,12,289})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,15,16,9,-12,7,6,-12,7}), sort_third({-3,2,3,1,5,1,6,15,16,9,-12,7,16,-12,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,900,0,-8,6,2,0,1,9}), sort_third({-6,7,3,-4,3,900,0,-8,6,2,0,1,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,-1,-8,9,-12,7,-7,0,6,6,1,16,-8}), sort_third({-8,2,3,1,1,-1,5,9,-12,6,-7,0,7,6,1,16,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,9,-12,7,6,-2,7}), sort_third({-12,2,3,-3,5,1,-2,16,9,1,7,6,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,105,4,5,700,900,-200,-901,800,1000,6}), sort_third({-901,500,6,6,8,289,7,-105,-277,20,200,3,104,4,5,105,900,-200,300,800,1000,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,30,-200,8,-1,-9,-3,-4,-5,12}), sort_third({-200,0,30,-9,8,-1,-5,-3,-4,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,11,9,3,-7,8,0,1,-12,6,-2,19,13}), sort_third({-7,2,7,-2,9,3,1,8,0,11,-12,6,900,19,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,6,2,0,1,8,0,0}), sort_third({-6,7,3,-4,3,0,0,2,0,1,8,0,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,4,9,0,7,6,0}), sort_third({-3,2,3,0,5,1,0,4,9,0,7,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,10,-12,7,6,-2,7}), sort_third({-12,2,3,-3,5,1,-2,16,10,1,7,6,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,11,16}), sort_third({3,0,2,6,4,5,9,7,8,11,10,11,12,13,14,15,16,17,18,19,20,19,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,1,2,3,5,1,0,-8,9,0,-12,7,6,6,1,-12,1}), sort_third({-12,1,2,0,5,1,0,-8,9,1,-12,7,3,6,1,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,21,-6,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000,8}), sort_third({-901,500,6,-277,8,289,3,-6,-105,7,104,200,8,4,5,21,900,-200,300,800,1000,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,14,0,4,6,8}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,6,0,4,14,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,1000,0,6,2,0,1}), sort_third({-6,7,3,-4,1000,0,1,2,0,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,-8,0,5,11,900,18,-901,800,1000,0,-277,-277,500}), sort_third({-277,500,6,0,8,289,7,-105,-277,20,200,-8,104,5,11,300,18,-901,800,1000,0,900,-277,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,105,8,-8,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,105,8,-8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,1,3,-6,3,0,-8,6,2,0,1,16,8,16,0,4,1,0}), sort_third({-4,7,1,0,-6,3,0,-8,6,0,0,1,2,8,16,3,4,1,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,6,5,4,3,2,1,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-8}), sort_third({-9,9,8,-6,6,5,-3,3,2,1,-1,-2,4,-4,-5,7,-7,-8,10,-10,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,7,-8,-7,2,0,1,20,0,0}), sort_third({-6,7,3,-4,3,0,2,-8,-7,7,0,1,20,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-8,-901,800,1000,0,-277}), sort_third({-901,500,6,0,8,289,0,-105,-277,7,200,3,20,5,700,104,18,-8,300,800,1000,900,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,1,8,14}), sort_third({-8,7,3,-6,3,0,-4,6,2,1,8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-5,1,2,-3,5,1,16,16,-8,9,-12,7,6,-12,16,1,5}), sort_third({-5,1,2,-3,5,1,1,16,-8,6,-12,7,9,-12,16,16,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,18,9,-12,0,7,6,3}), sort_third({-12,2,3,-3,5,1,0,18,9,1,0,7,6,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,9,-6,3,0,-8,6,2,0,1,8,14,0,4,6}), sort_third({-8,7,9,-6,3,0,-4,6,2,0,1,8,6,0,4,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,289,-200,8,-1,-9,-3,-4,-5,12,9}), sort_third({-200,0,289,-9,8,-1,-5,-3,-4,9,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,-8,4,9,-12,7,6,-12,16}), sort_third({-3,2,3,1,5,1,4,16,-8,7,9,-12,16,6,-12,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,4,3,4,5,6,7,-9,9,10,11,12,13,14,15,16,17,18,19,20,11,16}), sort_third({-9,0,2,4,3,4,5,6,7,11,9,10,14,12,13,17,15,16,19,18,19,20,11,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,9,-6,3,0,-8,6,2,0,1,8,14,0,4,6,9}), sort_third({-8,7,9,-6,3,0,-4,6,2,0,1,8,6,0,4,14,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,7,-8,-7,2,0,1,20,0,0,1}), sort_third({-6,7,3,-4,3,0,1,-8,-7,2,0,1,7,0,0,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,105,0,-8,7,2,1,8,14,0,6,-8}), sort_third({-4,7,3,6,0,-8,7,2,1,8,14,0,105,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-1,700,-1,6,-4,3,11,3,-1}), sort_third({-1,-1,700,-1,6,-4,3,11,3,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,11,5,1,16,-8,9,-11,7,4,-12,7,7}), sort_third({-12,2,3,-11,5,1,1,-8,9,11,7,4,16,7,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,300,4,9,0,7,6,0}), sort_third({-3,2,3,1,5,300,4,9,0,7,6,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,1,3,-6,3,0,-8,6,2,0,1,16,8,16,0,4,1,0}), sort_third({-8,1,3,-6,3,0,-4,6,2,0,1,16,4,16,0,8,1,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-4,3,12,3}), sort_third({3,0,-4,9,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,18,30,-9,-9}), sort_third({-9,12,3,-3,15,0,6,18,30,9,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,-5,12,0,8}), sort_third({-5,0,8,-1,6,-4,8,12,0,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,-1,5,700,900,-901,800,1000,6,0,-277}), sort_third({-277,500,6,-1,8,289,7,-105,-277,20,200,3,104,5,700,300,-901,800,900,6,0,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,105,2,8,-8,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,105,0,8,-8,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0,-1,6,-4,3,12,-4}), sort_third({-4,-1,6,-4,3,12,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,1,16,16,-8,9,-12,7,6,-12,16,7}), sort_third({-8,3,-3,1,16,16,2,9,-12,7,6,-12,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-3,-4,0,9,-5,3,-4,3}), sort_third({-4,0,3,-3,-4,0,9,-5,3,9,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,0,9,0,7,6,0}), sort_third({-3,2,3,0,5,1,0,0,9,0,7,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,-5,1,12,-4}), sort_third({-4,0,3,9,-5,1,12,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,6,16,9}), sort_third({-12,2,3,-3,5,1,1,-8,9,16,7,6,16,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,6,2,1,8,14,6,6,-8,14}), sort_third({-6,7,3,-4,0,-8,6,2,1,6,14,6,8,-8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,105,3,3,0,7,-8,-2,2,0,1,20,0,0,1}), sort_third({-4,7,105,1,3,0,2,-8,-2,3,0,1,7,0,0,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,9,-6,3,0,6,2,0,1,8,14,0,4,6}), sort_third({-6,7,9,-4,3,0,0,2,0,1,8,14,6,4,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-2,-1,6,-4,13,12,0,8}), sort_third({-4,0,8,-2,-1,6,0,13,12,9,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3,3,2}), sort_third({3,0,6,9,3,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,6,2,1,8,14,6,6,-8,14,0}), sort_third({-6,7,3,-4,0,-8,0,2,1,6,14,6,6,-8,14,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,300,5,9,0,7,6,0}), sort_third({-3,2,3,1,5,300,5,9,0,7,6,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,8,0,4,9,0,7,6,0}), sort_third({-3,2,3,1,5,1,6,0,4,8,0,7,9,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,105,3,14,0,-8,6,2,0,1,8,14,0,6}), sort_third({-8,3,105,-4,14,0,0,6,2,3,1,8,14,0,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,0,-8,6,2,1,8,14,6,6,-8,14,0}), sort_third({-6,8,3,-4,0,-8,0,2,1,6,14,6,6,-8,14,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({30,1,2,3,-3,5,1,16,16,-8,4,9,-12,7,6,-12,16}), sort_third({-12,1,2,-12,-3,5,-8,16,16,1,4,9,3,7,6,30,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,13,0,3,-4,9,289,3,12,900,3}), sort_third({3,13,0,9,-4,9,289,3,12,900,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,-13,3,0,-8,6,2,0,1,8,-8,8}), sort_third({-6,7,3,-4,-13,3,0,-8,6,2,0,1,8,-8,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({16,7,3,-6,3,0,-8,6,2,1,8,14}), sort_third({-8,7,3,-6,3,0,1,6,2,16,8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,1000,0,-8,-6,8,6,2,289,1,7,-8}), sort_third({-8,7,3,-6,1000,0,-4,-6,8,1,2,289,6,7,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,16,-11,16,-8,9,-12,7,6,-12,16}), sort_third({-11,2,3,1,1,16,5,16,-8,6,-12,7,9,-12,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,-3,5,1,0,6,4,9,-12,7,6}), sort_third({-12,2,-3,1,1,0,5,4,9,6,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,15,3,9,15}), sort_third({9,0,6,15,3,9,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-1,6,-4,3,12,-4}), sort_third({6,0,-1,9,-4,3,12,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,4,0,-3,18,30,-9,-9}), sort_third({0,12,3,6,15,4,9,-3,18,30,-9,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,0,9,0,7,0}), sort_third({-3,2,3,0,5,1,0,0,9,1,7,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,500,3,11,16}), sort_third({3,6,500,9,11,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-105,0,30,-200,8,-1,-9,-3,-4,-5,12}), sort_third({-200,0,30,-105,8,-1,-9,-3,-4,-5,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,290,3,-6,3,0,-8,6,2,0,1,8,14,0}), sort_third({-8,290,3,-6,3,0,-4,6,2,0,1,8,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,14,0,6,1}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,1,0,6,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,4,-12,7,7,4}), sort_third({-12,2,3,-12,5,1,-3,-8,9,1,7,4,4,7,7,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,7,6,6,1,104,-13,9}), sort_third({-8,2,3,1,1,0,1,9,-12,5,6,6,7,104,-13,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,1000,700,6,0,1}), sort_third({-6,7,3,-4,1000,700,6,0,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,0,700,1,13,6,-2,19,19,13,9}), sort_third({5,2,7,6,3,-7,9,8,0,11,1,13,19,-2,19,700,13,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,11,9,3,-7,8,0,1,-12,6,200,-2,19,13}), sort_third({-7,2,7,1,9,3,11,8,0,13,-12,6,200,-2,19,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-200,8,-1,-9,-3,-4,-5,12,9}), sort_third({-3,0,-200,8,-1,-9,9,-4,-5,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,105,3,3,0,7,-8,-2,2,0,1,20,0,0,0,1}), sort_third({-4,7,105,0,3,0,2,-8,-2,3,0,1,7,0,0,20,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,-5,1,12,-4,12}), sort_third({-4,0,3,1,9,-5,9,12,-4,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,16,-11,16,-8,9,-12,7,6,-12,16}), sort_third({-12,2,3,-12,16,-11,1,-8,9,5,7,6,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,0,6,3,12,3}), sort_third({3,12,0,6,3,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,14,0,6,1,0,0}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,1,0,6,14,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,19,21,20,2}), sort_third({2,0,-901,5,3,4,8,6,7,11,9,10,14,12,13,17,15,16,19,17,19,21,20,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,0,-8,6,2,1,8,13,6,6,-8,14,-6}), sort_third({-6,8,3,-6,0,-8,-4,2,1,6,13,6,6,-8,14,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-1,6,-4,3,900,3}), sort_third({6,0,-1,9,-4,3,900,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,4,-6,0,-8,6,2,1,8,13,6,6,-8,14,-6,8}), sort_third({-6,8,4,-6,0,-8,-4,2,1,6,13,6,6,-8,14,8,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,500,500,3,12,20,9}), sort_third({9,6,500,20,3,12,500,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,5,2,1,8,14,0,6,-8,14}), sort_third({-6,7,3,-4,0,-8,5,2,1,6,14,0,8,-8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,700,12,3}), sort_third({9,0,6,700,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,0,8,-1,6,-4,-5,12,0}), sort_third({-5,0,8,-1,6,-4,10,12,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,200,-12,7,6,6,1,-13,9}), sort_third({-12,2,3,-8,1,0,1,9,200,5,7,6,6,1,-13,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-7,105,1,0,-8,9,-12,7,6,6,1}), sort_third({-12,2,3,-7,105,1,0,-8,9,1,7,6,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-6,1000,0,-8,6,290,2,289,1,1000}), sort_third({-4,7,-6,6,0,-8,289,290,2,1000,1,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,-8,-7,2,0,1,8,0}), sort_third({-7,7,3,-6,3,-8,-4,2,0,1,8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,-5,12,18,12}), sort_third({-5,0,8,-1,6,-4,9,12,18,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,18,4,9,-12,7,6}), sort_third({-3,2,3,0,5,1,1,18,4,6,-12,7,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,30,-9,-9}), sort_third({-9,12,3,-3,15,0,6,30,-9,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,1,8,14}), sort_third({-8,7,3,-6,3,0,-4,6,1,8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,3,-3,5,1,16,-12,7,4,-12,7}), sort_third({-12,3,-3,-12,1,16,1,7,4,5,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,18,4,9,-12,6}), sort_third({-3,2,3,0,5,1,1,18,4,9,-12,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-5,0,-1,6,19,-5,3,12,0}), sort_third({-5,-5,0,-1,6,19,0,3,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,6,3,3,0,6,2,1,800,0}), sort_third({-4,6,3,0,0,6,2,1,800,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,3,-4,9,-5,1,12,300,-4}), sort_third({9,3,-4,9,-5,1,12,300,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,9,-6,3,11,-8,6,2,-11,1,8,14,0,4,6,9,2,0}), sort_third({-11,7,9,-8,3,11,-6,6,2,-4,1,8,0,0,4,6,9,2,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,18,19,104,20,6}), sort_third({2,0,-901,5,3,4,6,6,7,8,9,10,11,12,13,14,15,16,17,17,18,19,104,20,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,9,-6,3,11,-8,6,2,-11,1,8,14,0,4,6,9,2}), sort_third({-11,7,9,-8,3,11,-6,6,2,-4,1,8,6,0,4,14,9,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,-1,5,700,900,-901,800,1000,6,0,-277,500}), sort_third({-277,500,6,-1,8,289,7,-105,-277,20,200,3,104,5,700,300,-901,800,900,6,0,1000,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,16,7,8,9,10,11,12,14,15,16,17,18,19,21,20,4}), sort_third({2,0,-901,5,3,4,7,6,16,10,8,9,14,11,12,17,15,16,19,18,19,21,20,4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,-10,8,289,20,-105,-277,104,200,3,4,5,-278,700,900,-901,800,1000,-105}), sort_third({-10,500,6,4,8,289,20,-105,-277,104,200,3,300,5,-278,700,900,-901,800,1000,-105})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,12,1,12,-4}), sort_third({-4,0,3,9,12,1,12,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,700,12,15,0}), sort_third({9,6,700,12,15,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-1,6,105,-5,3,12}), sort_third({3,0,-1,6,105,-5,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,21,-105,-277,104,200,4,5,700,900,-200,-901,800,1000,300}), sort_third({-200,500,6,5,8,289,7,-105,-277,21,200,4,104,700,900,300,-901,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,4,5,700,900,-200,-901,800,1000}), sort_third({-200,500,6,5,8,289,7,-105,-277,20,200,4,104,700,900,300,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,1,105,8,-8,0}), sort_third({-8,7,3,-8,3,0,-6,6,2,-4,105,8,1,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,18,7,3,-6,3,0,-8,6,1,8,14,14}), sort_third({-4,18,7,0,-6,3,1,-8,6,3,8,14,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,15,3,0,105,-8,2,1,8,14,0}), sort_third({-8,7,15,-4,0,105,3,2,1,8,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,4,5,700,-200,900,-200,-901,800,1000}), sort_third({5,500,6,7,8,289,20,-105,-277,104,200,4,300,700,-200,800,-200,-901,900,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,5,1,0,-8,9,200,-12,7,6,6,1,-13,7,9}), sort_third({1,3,5,1,0,-8,2,200,-12,7,6,6,9,-13,7,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,-10,8,289,20,-105,-277,104,200,3,4,11,5,-278,700,900,-901,800,1000,-105}), sort_third({-901,500,6,-278,8,289,-105,-105,-277,-10,200,3,4,11,5,20,700,900,104,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,11,9,3,-7,11,0,1,13,6,-2,19,1}), sort_third({-7,2,7,-2,9,3,1,11,0,11,13,6,900,19,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,21,-105,-277,104,200,4,5,700,900,-200,-901,800,1000}), sort_third({-901,500,6,-105,289,21,7,-277,104,200,4,5,300,900,-200,700,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,-7,2,0,1,5,500,0,0,-7,3}), sort_third({-8,7,3,-7,3,0,-6,-7,2,-4,1,5,0,0,0,500,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,1,16,16,-8,9,-12,19,7,6,-12,16,7}), sort_third({-12,3,-3,-8,16,16,1,9,-12,2,7,6,19,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,18,4,5,9,-12,7,6}), sort_third({-3,2,3,0,5,1,1,18,4,5,9,-12,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,6,300,4,9,0,7,6,0,-3}), sort_third({-3,2,3,-3,6,300,1,9,0,4,6,0,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,16,-11,16,-8,9,-12,7,-12,16}), sort_third({-12,2,3,1,16,-11,5,-8,9,16,7,-12,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,8,-12,7,6,2,16}), sort_third({-12,2,3,-3,5,1,1,-8,8,2,7,6,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,14,3,-6,3,0,-8,6,2,0,1,8,-4,7}), sort_third({-4,7,14,0,-6,3,2,-8,6,3,0,1,8,-4,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,-5,1,12,-4,11}), sort_third({-4,0,3,1,9,-5,9,12,-4,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,500,3,1000,11,16}), sort_third({3,6,500,9,1000,11,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,-5,1,17,12,-4,12}), sort_third({-4,0,3,-4,9,-5,1,17,12,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,9,289,3,900,3}), sort_third({-4,0,3,3,9,289,9,900,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,7,11,9,3,-7,11,0,1,13,7,-2,19,1}), sort_third({2,7,11,9,3,-7,11,0,1,13,7,-2,19,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,700,12,3,3,700}), sort_third({3,0,6,9,12,3,700,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,3,5,1,0,-8,9,-12,7,6,6,1,6,1}), sort_third({1,3,5,1,0,-8,6,-12,7,6,6,1,9,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,2,-12,7,7,6,1,16}), sort_third({-3,2,3,1,5,1,2,-8,9,7,-12,7,16,6,1,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,1,3,-6,3,0,-8,6,2,0,1,16,7,16,0,4,1,0}), sort_third({-4,7,1,0,-6,3,0,-8,6,0,0,1,2,7,16,3,4,1,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,13,1,16,16,9,-12,7,6,-2,7}), sort_third({-12,2,3,-3,13,1,-2,16,9,1,7,6,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,30,13,8,-1,-9,-3,-4,-5,12,-3}), sort_third({-9,0,30,-5,8,-1,9,-3,-4,13,12,-3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,14,0,6,8}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,8,0,6,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,200,3,0,5,700,900,18,-901,800,1000,0,289,-277}), sort_third({-277,500,6,5,8,289,7,-105,-277,18,3,0,20,700,900,200,-901,800,300,0,289,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,-105,-277,200,19,3,0,5,700,-3,900,18,-901,800,1001,0,-277}), sort_third({-277,500,6,-105,289,20,5,-277,200,7,3,0,19,700,-3,300,18,-901,800,1001,0,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,17,8,289,20,-105,2,104,200,3,0,5,700,900,18,-901,800,1000,0,-277}), sort_third({-277,500,6,0,8,289,17,-105,2,20,200,3,104,5,700,300,18,-901,800,1000,0,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,-105,-277,200,19,3,699,0,5,700,900,18,-901,800,1001,0,-277}), sort_third({-277,500,6,-105,289,20,0,-277,200,7,3,699,19,5,700,300,18,-901,800,1001,0,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,3,5,1,0,-8,9,-12,7,-4,6,1,6}), sort_third({-4,3,5,1,0,-8,1,-12,7,6,6,1,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,-1,-8,9,-12,7,6,5,1,2}), sort_third({-8,2,3,1,1,-1,1,9,-12,5,6,5,7,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,200,3,0,5,700,900,18,-901,800,1000,0,289,-277,18}), sort_third({-277,500,6,5,8,289,7,-105,-277,18,3,0,20,700,900,200,-901,800,300,0,289,1000,18})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,16,7,8,9,10,11,12,14,15,16,17,18,19,21,20,16}), sort_third({2,0,-901,5,3,4,7,6,16,10,8,9,14,11,12,17,15,16,19,18,19,21,20,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,1,13,6,-2,19,8}), sort_third({5,2,7,9,3,-7,11,8,1,13,6,-2,19,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,9,8,9,10,11,12,13,14,15,16,17,18,19,11}), sort_third({1,2,3,4,5,6,7,9,8,9,10,11,12,13,14,15,16,17,18,19,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,1,16,-8,9,-12,7,6,-12,16,7}), sort_third({1,3,-3,2,16,-8,6,-12,7,7,-12,16,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,19,21,20,200,2}), sort_third({2,0,-901,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,19,19,20,200,21})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-5,0,-1,6,-4,-5,3,3,12,0}), sort_third({-5,-5,0,-1,6,-4,9,3,3,12,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,-6,3,0,-8,2,1,8,14,0,2}), sort_third({-4,3,-6,2,0,-8,3,1,8,14,0,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,10,11,9,12,13,14,15,16,17,18,19,21,20,0}), sort_third({2,0,-901,5,3,4,8,6,7,9,10,11,14,12,13,17,15,16,19,18,19,21,20,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,-4,3,12}), sort_third({-4,0,6,9,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,11,5,1,16,-8,0,9,-11,7,-2,4,-12,7,7}), sort_third({-2,2,3,1,5,1,7,-8,0,9,-11,7,11,4,-12,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,4,5,700,900,-200,-901,800,1000,6}), sort_third({-200,500,6,5,8,289,7,-105,-277,20,200,4,104,700,900,300,-901,800,1000,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,0,-8,6,2,1,8,13,6,6,-8,14,-6,6,13}), sort_third({-6,8,3,-6,0,-8,-4,2,1,6,13,6,6,-8,14,8,6,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,11,5,8,1,16,-8,9,-11,7,4,-12,7,7,7}), sort_third({1,2,3,1,5,8,4,16,-8,7,-11,7,9,-12,7,11,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,1,16,-8,9,-12,7,6,-4,16,7,16}), sort_third({1,3,-3,2,16,-8,6,-12,7,7,-4,16,9,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,1,2,3,5,1,0,-8,9,11,0,-12,7,6,6,1,-12,1,1}), sort_third({0,1,2,1,5,1,1,-8,9,1,0,-12,3,6,6,7,-12,1,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,900,9,3,-7,8,0,1,-12,6,-2,19,13,19}), sort_third({-7,2,7,-2,9,3,1,8,0,19,-12,6,900,19,13,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,6,2,1,8,14,0,6,-8,0}), sort_third({-6,7,3,-4,0,-8,6,2,1,6,14,0,8,-8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-2,-6,3,0,-8,6,0,2,0,1,8,14,-12,4,6}), sort_third({-12,7,3,-4,-6,3,-2,-8,6,0,2,0,0,8,14,1,4,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,0,700,1,13,6,-2,19,19,13,9,13}), sort_third({5,2,7,6,3,-7,9,8,0,11,1,13,13,-2,19,19,13,9,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,10,12}), sort_third({-1,0,8,9,6,-4,10,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({22,9,12,3,6,15,0,-3,18,21,30,-9,22}), sort_third({0,9,12,3,6,15,21,-3,18,22,30,-9,22})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({7,3,3,-7,1,8,14,0}), sort_third({-7,3,3,7,1,8,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-6,3,0,-8,6,2,699,1,8,0,0}), sort_third({-4,7,-6,0,0,-8,1,2,699,3,8,0,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,6,5,4,3,2,1,-1,-2,-3,-4,2,-5,-6,-7,-8,-9,-10}), sort_third({-8,9,8,-5,6,5,-3,3,2,1,-1,-2,4,-4,2,7,-6,-7,10,-9,-10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-3,-4,0,9,-5,-4,3}), sort_third({-3,0,3,3,-4,0,9,-5,-4,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,700,12,699,15,0,0}), sort_third({0,700,12,9,15,0,699})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,289,11,15,0}), sort_third({9,289,11,15,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,-10,10,12,0,-1}), sort_third({-10,0,8,-1,6,-4,0,10,12,9,-1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-1,7,700,-1,6,-4,3,11,3,-1}), sort_third({-4,-1,7,3,-1,6,9,3,11,700,-1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,5,16,-8,9,-12,7,6,16,5}), sort_third({-3,2,3,1,5,1,5,16,-8,6,-12,7,9,16,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,16,7,8,289,21,-105,-277,200,4,5,700,-200,-901,800,1000,300}), sort_third({7,500,16,21,8,289,200,-105,-277,300,4,5,700,-200,-901,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,1,16,-8,9,-12,6,-12,16,7}), sort_third({-12,3,-3,1,16,-8,2,-12,6,9,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,2,-12,7,6,1,16}), sort_third({-3,2,3,1,5,1,2,-8,9,6,-12,7,16,1,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,-5,12,0,-1}), sort_third({-5,0,8,-1,6,-4,-1,12,0,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,5,1,16,16,-8,9,-12,7,-12,-9,16}), sort_third({-12,3,-3,-9,1,16,2,-8,9,5,7,-12,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,0,6,2,1,8,14,6,6,-8,14,0}), sort_third({-8,8,3,-6,0,6,-4,1,8,2,6,6,14,14,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,7,3,-3,5,1,16,-8,9,104,7,6,16,9}), sort_third({-3,7,3,1,5,1,16,-8,9,16,7,6,104,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,4,3,4,5,6,7,-9,9,10,11,12,13,14,15,16,17,18,19,20,11,16,11}), sort_third({-9,0,2,4,3,4,5,6,7,11,9,10,11,12,13,14,15,16,17,18,19,19,11,16,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,1,10,-12,7,6,6,1,-12,-8}), sort_third({-12,2,3,-8,1,0,-8,1,10,1,7,6,5,1,-12,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,499,6,17,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-901,800,1000,0,-277}), sort_third({-277,499,6,0,8,289,17,-105,-277,20,200,3,104,5,700,300,18,-901,800,1000,0,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-6,1000,0,-8,6,290,2,289,1,1000,290}), sort_third({-4,7,-6,6,0,-8,289,290,2,290,1,1000,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,800,700,2,699,12}), sort_third({9,0,800,12,2,699,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,-277,-105,-277,104,200,3,0,5,700,900,18,-901,800,1000,0,-277,-277}), sort_third({-277,500,6,-277,8,289,0,-105,-277,7,200,3,104,5,700,300,18,-901,800,1000,0,900,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-3,-4,0,9,-5,3,-4,3,-4}), sort_third({-4,0,3,-3,-4,0,9,-5,3,9,3,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,16,7,7,9,10,12,14,15,16,17,18,19,21,20,16}), sort_third({2,0,-901,5,3,4,7,6,16,10,7,9,15,12,14,18,16,17,19,19,21,20,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,30,-200,8,-1,-9,-3,-4,-5,12,12}), sort_third({-200,0,30,-9,8,-1,-5,-3,-4,9,12,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,9,-12,7,6,16,3}), sort_third({-12,2,3,-3,5,1,1,-8,9,16,7,6,16,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,-2,1,16,-8,9,-12,7,6,16}), sort_third({-3,2,3,1,5,-2,1,16,-8,6,-12,7,9,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,2,1,8,14,0,2,14}), sort_third({-8,7,3,-6,3,0,-4,2,1,2,14,0,8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,1,3,-6,3,0,-8,6,2,1,16,8,16,0,4,1,0}), sort_third({-8,1,3,-6,3,0,-4,6,2,1,16,8,1,0,4,16,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,200,3,0,5,700,900,18,-901,800,1000,0,289,-277,18,-277}), sort_third({-277,500,6,5,8,289,7,-105,-277,18,3,0,20,700,900,200,-901,800,300,0,289,1000,18,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,20,-8,9,-12,7,6,5,2}), sort_third({-8,2,3,1,1,20,2,9,-12,5,6,5,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-5,200,-8,-7,2,0,1,8,0,-6}), sort_third({-7,7,3,-6,200,-8,-5,2,0,-4,8,0,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,10,-4,9,289,3,12,900,3}), sort_third({-4,0,10,3,9,289,3,12,900,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,16,-8,9,-12,7,6,-12}), sort_third({-12,2,3,-12,5,16,-3,-8,9,1,7,6,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,16,-8,10,-12,7,0,-12}), sort_third({-12,2,3,-12,5,16,-3,-8,10,1,7,0,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,105,3,3,0,7,-8,-2,2,0,12,1,20,0,0,0,1}), sort_third({-4,7,105,0,3,0,1,-8,-2,2,0,12,3,20,0,7,0,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,11,5,8,1,16,-8,9,-12,7,4,-12,7,7,7}), sort_third({1,2,3,1,5,8,4,16,-8,7,-12,7,9,-12,7,11,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,-10,1,16,16,9,-12,7,6,-12,7}), sort_third({-12,2,3,-12,-10,1,-3,16,9,1,7,6,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,-3,900,18,-901,800,1000,0,-277,-277}), sort_third({-901,500,6,-3,8,289,0,-105,-277,0,200,3,7,5,700,20,900,18,104,800,1000,300,-277,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({16,3,-6,3,0,21,6,2,1,8,14}), sort_third({3,3,-6,6,0,21,8,2,1,16,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,6,5,4,3,2,1,-1,-2,-3,-4,2,-5,-6,-7,-8,-9,-10,6}), sort_third({-8,9,8,-5,6,5,-3,3,2,1,-1,-2,4,-4,2,6,-6,-7,7,-9,-10,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,-12,6,-4,6,1,6}), sort_third({-8,2,3,1,1,0,1,9,-12,5,-4,6,6,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,105,-901,800,1000,6,7}), sort_third({-901,500,6,4,8,289,6,-105,-277,7,200,3,20,5,700,104,-200,105,300,800,1000,900,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0,0,3,12}), sort_third({0,0,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,-12,-8,5,2,1,8,14,0,6,-8,14}), sort_third({-6,7,3,-4,-12,-8,5,2,1,6,14,0,8,-8,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,-9,1,0,-8,9,-12,7,-4,6,1,6,3}), sort_third({-12,2,3,0,-9,1,1,-8,9,3,7,-4,5,1,6,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,9,8,9,10,11,12,13,14,15,17,18,19,11,15}), sort_third({1,2,3,4,5,6,7,9,8,9,10,11,12,13,14,15,17,18,19,11,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-8,-901,800,1000,0,-277,-8}), sort_third({-901,500,6,0,8,289,0,-105,-277,7,200,3,20,5,700,104,18,-8,300,800,1000,900,-277,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,200,-12,7,6,6,1,-13,9,6}), sort_third({-12,2,3,-8,1,0,1,9,200,5,7,6,6,1,-13,9,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,11,10}), sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,11,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-4,9,289,3,12,900,3}), sort_third({9,0,-4,9,289,3,12,900,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-3,-4,-5,12}), sort_third({-4,0,8,-1,6,-3,9,-5,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,6,500,3,20}), sort_third({3,6,500,9,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,105,4,5,700,900,-200,-901,800,1000,6,300}), sort_third({-901,500,6,6,8,289,7,-105,-277,20,200,3,104,4,5,105,900,-200,300,800,1000,700,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,-9,1,0,-8,9,-12,7,-4,6,6,1,6,3}), sort_third({-12,2,3,0,-9,1,1,-8,9,5,7,-4,6,6,1,6,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-5,0,-1,6,19,-5,3,9,12,0}), sort_third({-5,-5,0,-1,6,19,9,3,9,12,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,1,2,3,5,1,0,-8,9,0,-12,7,6,6,-12,1}), sort_third({0,1,2,0,5,1,1,-8,9,1,-12,7,3,6,-12,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,17,5,6,7,8,9,10,12,13,14,15,16,18,19,21,20}), sort_third({2,0,-901,7,3,4,10,5,6,14,8,9,17,12,13,18,15,16,19,19,21,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,15,16,-8,10,-12,7,0,-12}), sort_third({-3,2,3,0,5,16,1,16,-8,10,-12,7,15,-12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,2,1,8,14,0,2,-8}), sort_third({-8,7,3,-6,3,0,-4,2,1,2,14,0,8,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,9,-1,6,-4,-5,12,0,8}), sort_third({-4,0,8,0,-1,6,9,-5,12,9,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,12,3,3}), sort_third({9,0,6,12,3,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,9,3,-4,289,3,12,3}), sort_third({3,0,9,3,-4,289,9,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,15,16,9,-12,7,6,-12,7,5}), sort_third({-3,2,3,1,5,1,5,15,16,6,-12,7,9,-12,7,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-1,700,-1,6,-4,3,20,11,17,3,-1}), sort_third({-1,-1,700,3,6,-4,9,20,11,17,3,-1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,289,10,16,0}), sort_third({9,289,10,16,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,14,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,19,21,20,200,2}), sort_third({2,0,-901,4,14,3,7,5,6,10,8,9,13,11,12,16,14,15,19,17,17,19,21,20,200,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,-8,8,-12,7,6,1,16}), sort_third({-12,2,3,-3,5,1,1,-8,8,1,7,6,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,4,300,0,-3,18,30,-9,-9}), sort_third({-9,12,3,6,15,4,9,0,-3,18,30,-9,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-6,3,0,6,2,0,1,8,0,0}), sort_third({-4,7,-6,2,0,6,3,0,1,8,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,10,11,12,14,14,15,16,17,18,19,21,20}), sort_third({2,0,-901,5,3,4,8,6,7,12,10,11,15,14,14,18,16,17,19,19,21,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,18,7,3,-6,3,0,-8,6,0,8,14,14}), sort_third({-4,18,7,0,-6,3,0,-8,6,3,8,14,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,-3,5,1,0,18,4,9,-5,-12,0,7,6}), sort_third({-12,-3,5,1,0,18,2,9,-5,4,0,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,-1,0,7,-8,-7,2,0,1,20,0,0}), sort_third({-7,7,3,-6,3,-1,-4,7,-8,0,2,0,0,20,0,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,7,8,10,11,9,12,13,14,15,11,16,17,18,19,21,20,0}), sort_third({0,0,-901,2,3,4,5,6,7,8,10,11,9,12,13,14,15,11,16,17,18,19,21,20,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,3,0,7,-8,-7,2,0,1,20,0,0}), sort_third({-6,8,3,-4,3,0,2,-8,-7,7,0,1,20,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,16,7,8,289,21,3,-105,-277,200,4,5,700,-200,-901,800,1000,300}), sort_third({-901,500,16,-277,8,289,5,3,-105,7,200,4,21,700,-200,300,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,3,0,-8,6,2,1,800,0,800}), sort_third({-8,8,3,-6,3,0,-4,6,2,1,800,0,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-1,6,3,12,6}), sort_third({6,0,-1,6,3,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-8,1001,-901,800,1000,0,-277,-8,300}), sort_third({-8,500,6,0,8,289,7,-105,-277,20,200,3,104,5,700,300,18,-8,900,-901,800,1000,0,-277,1001,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,3,0,-8,6,799,2,1,800,0,800}), sort_third({-8,8,3,-6,3,0,-4,6,799,0,1,800,2,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({6,300,500,6,7,8,289,20,-105,-277,104,200,3,0,5,700,900,-276,18,-901,800,1000,0,-277}), sort_third({-277,300,500,3,7,8,6,20,-105,6,104,200,18,0,5,289,900,-276,700,-901,800,1000,0,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,-276,4,5,6,16,7,8,9,10,11,12,14,15,16,17,18,19,21,20}), sort_third({2,0,-901,4,3,-276,9,5,6,12,7,8,16,10,11,16,14,15,19,17,18,19,21,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({3,-3,1,16,16,-8,9,-12,7,6,-12,16,7}), sort_third({3,-3,1,6,16,-8,7,-12,7,9,-12,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,13,3,4,-4,9,-5,289,12,3}), sort_third({3,0,13,9,4,-4,9,-5,289,12,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,-277,22,-277,104,200,3,0,5,700,901,18,-901,800,1000,0,-277,-277}), sort_third({-277,500,6,-277,8,289,0,22,-277,7,200,3,104,5,700,300,18,-901,800,1000,0,901,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,105,3,-1,10,14,0,-8,6,2,0,1,8,14,0,6}), sort_third({-4,3,105,0,-1,10,1,0,-8,3,2,0,6,8,14,14,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({7,3,-6,3,0,-8,6,2,2,1,8,14,1,6}), sort_third({1,3,-6,1,0,-8,3,2,2,6,8,14,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,-901,2,3,4,5,6,16,7,8,10,10,11,12,14,15,16,17,18,19,21,20,16}), sort_third({2,0,-901,5,3,4,7,6,16,10,8,10,14,11,12,17,15,16,19,18,19,21,20,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,-4,-5,1,-11,-4,3}), sort_third({-11,0,3,-4,-5,1,9,-4,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,-3,1,0,6,4,9,-12,7,6}), sort_third({1,2,-3,1,0,6,4,9,-12,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,30,-9,-9,3}), sort_third({3,12,3,6,15,0,9,-9,-9,30})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,15,16,-8,10,-12,7,0,-12,5}), sort_third({-3,2,3,0,5,16,1,16,-8,10,-12,7,15,-12,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,105,4,5,700,900,-200,-901,800,1000,6,6}), sort_third({-901,500,6,6,8,289,7,-105,-277,20,200,3,104,4,5,105,900,-200,300,800,1000,700,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,4,-6,0,-8,6,2,1,13,6,6,-8,14,-6,8}), sort_third({-8,8,4,-6,0,-8,-4,2,1,6,6,6,8,14,-6,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-1,700,-1,17,6,-4,3,11,3,-1,9}), sort_third({-4,-1,700,-1,17,6,3,3,11,9,-1,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,14,0,-901,3,4,5,6,7,8,10,11,12,13,14,15,16,17,18,19,21,20,7}), sort_third({-901,14,0,5,3,4,8,6,7,12,10,11,15,13,14,18,16,17,19,19,21,20,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,-278,15,16,-8,10,-12,7,0,-12,5}), sort_third({-278,2,3,-8,5,16,-3,15,16,1,10,-12,5,0,-12,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({6,300,500,6,7,1001,8,289,20,-105,-277,104,200,3,0,5,700,900,-276,18,-901,800,1000,0,-277}), sort_third({-277,300,500,-276,7,1001,-105,289,20,5,-277,104,6,3,0,6,700,900,8,18,-901,200,1000,0,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-5,1,2,-3,5,1,289,16,16,-8,9,-12,7,6,-12,16,1,5,5}), sort_third({-8,1,2,-5,5,1,-3,16,16,5,9,-12,7,6,-12,16,1,5,289})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,1001,20,-105,-277,104,200,3,105,4,5,700,900,-200,-901,800,1000,22,6}), sort_third({-901,500,6,7,8,1001,20,-105,-277,22,200,3,104,4,5,105,900,-200,300,800,1000,700,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,3,-6,3,0,7,-8,-7,2,0,0,1,-7,20,0,0,-7}), sort_third({-6,8,3,-4,3,0,0,-8,-7,1,0,0,2,-7,20,7,0,-7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,-278,15,16,-8,10,-12,7,0,-12,5,10}), sort_third({-278,2,3,-8,5,16,-3,15,16,1,10,-12,5,0,-12,7,10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,18,4,9,-12,7,4}), sort_third({-3,2,3,0,5,1,1,18,4,4,-12,7,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,3,5,1,0,-8,9,-12,105,6,6,1,6}), sort_third({1,3,5,1,0,-8,6,-12,105,6,6,1,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0,8,9,-1,6,-4,-5,12,0,8,0}), sort_third({-5,8,9,-1,6,-4,0,12,0,8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-3,7,3,-6,3,0,-8,6,2,0,901,8,0,0,3}), sort_third({-8,7,3,-6,3,0,-3,6,2,0,901,8,0,0,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({16,7,3,-6,3,0,-8,6,2,1,8,14,8,1}), sort_third({-8,7,3,-6,3,0,1,6,2,8,8,14,16,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,4,9,0,6,6,0}), sort_third({-3,2,3,0,5,1,0,4,9,0,6,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-6,1000,0,-8,-6,8,6,2,289,1,7,-8,-6}), sort_third({-6,7,-6,-4,0,-8,2,8,6,7,289,1,1000,-8,-6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,0,-8,6,2,1,8,14,-1,6,-8,6,8}), sort_third({-6,7,3,-4,0,-8,6,2,1,6,14,-1,8,-8,6,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,9,289,3,12,900,3}), sort_third({9,0,3,9,289,3,12,900,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,0,-8,9,0,-12,-6,6,6,1,-12,1,9}), sort_third({-12,2,3,-8,1,0,1,9,0,1,-6,6,5,1,-12,6,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-6,1000,0,-8,-6,8,6,2,289,1,7,-8,-6,289}), sort_third({-6,7,-6,-4,0,-8,2,8,6,7,289,1,289,-8,-6,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,11,9,3,-7,8,0,1,-12,6,200,-2,19,13,1}), sort_third({-7,2,7,1,9,3,11,8,0,13,-12,6,200,-2,19,900,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,801,7,8,289,20,-105,-277,104,200,3,0,5,700,900,18,-8,-901,800,1000,0,-277,-8}), sort_third({-901,500,801,0,8,289,0,-105,-277,7,200,3,20,5,700,104,18,-8,300,800,1000,900,-277,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,1,-1,-8,9,-12,7,6,5,1,2}), sort_third({1,2,3,1,-1,-8,2,-12,7,6,5,1,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,-10,1,16,16,9,-12,7,1,-12,7}), sort_third({-12,2,3,-12,-10,1,-3,16,9,1,7,1,16,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,6,5,4,3,2,1,-1,-2,-9,-3,-4,-5,-6,-7,-8,-9,-10}), sort_third({-9,9,8,-8,6,5,-5,3,2,1,-1,-2,4,-3,-4,7,-6,-7,10,-9,-10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-2,1,16,-8,9,-12,7,6,-12,16,-7}), sort_third({-7,3,-2,1,16,-8,2,-12,7,6,-12,16,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,4,9,7,6}), sort_third({-3,2,3,0,5,1,1,4,9,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,14,3,-5,3,0,-8,6,2,0,1,8,-4,7}), sort_third({-4,7,14,0,-5,3,2,-8,6,3,0,1,8,-4,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,20,7,3,-6,3,0,-8,6,0,1,105,8,-8,0}), sort_third({-4,20,7,0,-6,3,0,-8,6,3,1,105,8,-8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,900,9,3,-7,8,0,1000,-12,6,-2,19,13,19}), sort_third({-7,2,7,-2,9,3,19,8,0,900,-12,6,900,19,13,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,16,16,-8,9,-12,7,6,-12}), sort_third({-8,2,3,-3,16,16,1,9,-12,7,6,-12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,2,7,900,9,3,-7,8,0,1000,-12,-278,-2,19,13,19}), sort_third({-7,2,7,-2,9,3,19,8,0,900,-12,-278,900,19,13,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0,300,6,3,12,0,300}), sort_third({0,300,6,3,12,0,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,-9,16,16,-8,-12,7,6,-12,7}), sort_third({-9,2,3,-8,5,1,-3,16,16,1,-12,7,6,-12,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-1,-4,7,105,3,3,0,7,-8,-2,2,0,1,20,0,0,1}), sort_third({-2,-4,7,-1,3,3,0,7,-8,0,2,0,1,20,0,105,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,19,21,20,200,2}), sort_third({3,0,2,6,4,5,9,7,8,12,10,11,15,13,14,17,16,17,19,19,21,20,200,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,20,6,3,3,2}), sort_third({2,0,20,6,3,3,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,8,289,20,-105,-277,104,200,3,4,700,5,700,900,-901,800,-11,4}), sort_third({-105,6,7,-11,289,20,8,-277,104,200,3,4,500,5,700,700,-901,800,900,4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,2,7,8,6,-277,22,-277,104,200,3,0,5,901,18,-901,800,1000,0,-277,-277}), sort_third({-277,500,6,-277,7,8,2,-277,22,3,104,200,6,0,5,300,18,-901,800,1000,0,901,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,15,-2,-8,10,-12,7,0,-12,5}), sort_third({-3,2,3,0,5,16,1,-2,-8,10,-12,7,15,-12,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-1,700,-1,17,6,-4,11,3,-1,9}), sort_third({-4,-1,700,-1,17,6,-1,11,3,9,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,21,-105,-277,104,200,4,5,700,900,-200,-901,800,1000,300,6}), sort_third({-200,500,6,5,8,289,7,-105,-277,21,200,4,104,700,900,300,-901,800,1000,300,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,15,-2,-8,10,-12,7,0,5}), sort_third({-3,2,3,0,5,16,1,-2,-8,10,-12,7,15,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3,3}), sort_third({3,0,6,9,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,3,9,289,3,12,900,3,289}), sort_third({9,0,3,9,289,3,12,900,3,289})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({2,3,-3,1,16,-8,9,-12,6,6,-12,16,7}), sort_third({1,3,-3,2,16,-8,6,-12,6,7,-12,16,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,4,-6,3,0,-8,6,2,0,1,8,0,0}), sort_third({-8,7,4,-6,3,0,-4,6,2,0,1,8,0,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({0,3,12}), sort_third({0,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-2,6,-4,10,12}), sort_third({-2,0,8,9,6,-4,10,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({900,1,2,3,-3,5,1,801,4,9,0,6,6,0}), sort_third({1,1,2,3,-3,5,6,801,4,9,0,6,900,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({19,0,2,4,3,4,5,6,7,-9,10,11,12,13,14,15,16,17,18,19,20,11,16,11}), sort_third({-9,0,2,4,3,4,5,6,7,11,10,11,12,13,14,15,16,17,18,19,20,19,16,11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3,4,12}), sort_third({3,0,6,9,4,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,30,-9,-9,3,30,-9}), sort_third({3,12,3,6,15,0,9,-9,-9,30,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,13,2,7,9,3,-7,11,8,0,700,1,13,6,-2,19,19,13,9,13,13}), sort_third({-7,13,2,0,9,3,5,11,8,7,700,1,9,6,-2,13,19,13,19,13,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,3,-3,5,1,16,15,16,9,-12,7,6,-12,7}), sort_third({-12,3,-3,-12,1,16,1,16,9,5,7,6,15,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,0,19}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,0,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,8,-12,-6,4,900,-8,6,799,2,1,800,0,800,-6}), sort_third({-8,8,-12,-6,4,900,-4,6,799,0,1,800,2,800,-6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,3,-4,9,-5,1,12,300,-4,9}), sort_third({9,3,-4,9,-5,1,9,300,-4,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,8,-1,6,-4,-5,12,18,12,-5}), sort_third({-5,0,8,-1,6,-4,9,12,18,12,-5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,18,7,3,-6,3,289,-8,6,1,8,14,14,3}), sort_third({-4,18,7,1,-6,3,3,-8,6,14,8,14,289,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,2,-277,1,8,14,0,2,7}), sort_third({-8,7,3,-6,3,0,-4,2,-277,0,8,14,1,2,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,4,5,700,900,-200,-901,499,1000}), sort_third({-200,500,6,5,8,289,7,-105,-277,20,200,4,104,700,900,300,-901,499,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,4,9,0,6,6,0,0}), sort_third({-3,2,3,0,5,1,0,4,9,0,6,6,1,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-1,6,-4,3,12}), sort_third({-1,6,-4,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,701,900,-200,105,-901,800,1000,6,7}), sort_third({-901,500,6,4,8,289,6,-105,-277,7,200,3,20,5,701,104,-200,105,300,800,1000,900,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,16,16,-8,9,-12,7,6,-12,16,-12}), sort_third({-12,2,3,-3,5,1,1,16,-8,6,-12,7,9,-12,16,16})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,104,200,4,5,700,900,-200,-901,800,1000}), sort_third({4,500,6,7,8,289,20,-105,-277,104,104,200,300,5,700,800,-200,-901,900,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,9,3,-7,8,-8,8,0,1,13,6,-2,19}), sort_third({-8,2,9,-2,-7,8,1,8,0,3,13,6,5,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,10,-4,9,289,3,12,900,3,3}), sort_third({-4,0,10,3,9,289,3,12,900,9,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,200,7,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000,6,-901}), sort_third({-901,500,6,-277,200,7,3,20,-105,6,104,200,7,4,5,289,900,-200,300,800,1000,700,-901})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,15,16,10,-12,7,0,-12,5}), sort_third({-12,2,3,-12,5,16,-3,16,10,1,7,0,15,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,105,3,3,0,7,-8,-2,2,1,1,20,0,0,0,1}), sort_third({-4,7,105,0,3,0,2,-8,-2,3,1,1,7,0,0,20,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,14,6,105,-4,-5,14,3,12}), sort_third({-5,0,14,6,105,-4,9,14,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,16,16,-8,10,-12,7,0,-12,-12}), sort_third({-12,2,3,-12,5,16,-3,-8,10,1,7,0,16,-12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,1,16,-11,16,-8,9,-12,7,6,-12,16,7,9}), sort_third({-11,2,3,1,1,16,5,16,-8,6,-12,7,7,-12,16,9,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,499,6,17,8,289,20,-105,-277,-200,104,200,37,3,0,5,700,900,18,-901,800,1000,0,-277,0}), sort_third({-200,499,6,0,8,289,5,-105,-277,17,104,200,18,3,0,20,700,900,37,-901,800,300,0,-277,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,1,1,-1,-8,9,-12,7,6,5,1,2}), sort_third({-8,2,3,1,1,-1,1,9,-12,1,6,5,7,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,18,7,-6,3,-6,3,0,-8,6,0,8,14,14}), sort_third({-6,18,7,-4,3,-6,3,0,-8,6,0,8,14,14})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({6,9,3,12,15}), sort_third({6,9,3,12,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,4,5,7}), sort_third({1,2,4,5,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,2,3,3,3,4,5}), sort_third({1,2,2,3,3,3,4,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({4,-3,9,-5,0,-7,2}), sort_third({-5,-3,9,2,0,-7,4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,5,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,104,200,3,4,-8,700,900,-901,800,1000}), sort_third({-277,500,6,3,290,8,7,20,104,289,104,200,300,4,-8,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,-5,12}), sort_third({-5,0,6,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,-6,18,21,30,-9,9}), sort_third({-3,12,3,6,15,0,9,-6,18,9,30,-9,21})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,7,6,3,12}), sort_third({6,0,7,9,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,290,3,0,-8,6,2,0,1,8}), sort_third({-8,7,3,-4,3,0,0,6,2,290,1,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3,12,9}), sort_third({3,0,6,9,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000,-901}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,5,700,900,-901,800,1000,-901})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,104,200,-8,700,900,-901,800,1000,290,-8}), sort_third({-901,500,6,-277,290,8,-8,20,104,7,104,200,289,700,900,290,800,1000,300,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,290,3,0,-8,6,2,0,1,-9,8}), sort_third({-8,7,3,-4,3,0,0,6,2,8,1,-9,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,0,-3,-6,18,21,30,-9,9}), sort_third({-6,12,3,6,0,-3,9,18,21,30,-9,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,-901,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000,900}), sort_third({-277,500,6,3,-901,8,7,20,-105,289,104,200,300,4,5,700,900,-901,800,1000,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,-901})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,104}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,-901,104})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({290,5}), sort_third({290,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,104,3}), sort_third({-901,6,7,-901,8,289,4,-105,-277,20,200,3,104,700,900,290,800,1000,300,104,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,-6,-9,21,30,-9}), sort_third({-3,12,3,6,15,0,9,-6,-9,21,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-7,3,-6,3,0,-8,6,2,0,1,8}), sort_third({-4,7,-7,0,-6,3,2,-8,6,3,0,1,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,104,200,-8,700,900,-901,800,1000,290,-8,900}), sort_third({-901,500,6,-277,290,8,-8,20,104,7,104,200,289,700,900,290,800,1000,300,-8,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,300,3,4,5,700,900,-901,800,1000,-901}), sort_third({-901,500,6,-901,290,8,-277,20,-105,5,104,200,7,3,4,289,700,900,300,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,289,290,8,289,20,104,-277,104,200,-8,700,900,-901,800,1000,15,-8,700}), sort_third({-901,500,6,-277,290,8,-8,20,104,15,104,200,289,700,900,289,800,1000,300,-8,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,290,-8}), sort_third({-277,500,6,7,290,8,200,20,104,289,8,104,300,-8,700,900,-901,800,1000,290,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,5,5}), sort_third({5,5,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,7,3,4,5,700,900,-200,-901,800,1000}), sort_third({-901,500,6,3,8,289,7,-105,-277,20,200,7,104,4,5,300,900,-200,700,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({290,290}), sort_third({290,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-1,-2,-3,-4,-1,-5,-6,-7,-8,-9,-11}), sort_third({-9,9,8,-6,6,5,-4,2,1,-1,-2,-3,4,-1,-5,7,-7,-8,500,-11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,289,290,3,0,-8,6,2,0,1,-9,8}), sort_third({-9,7,3,-4,290,3,0,-8,6,2,0,1,289,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,-6,0,1,13,6,-2,19}), sort_third({0,2,7,5,3,-7,6,8,-6,9,1,13,11,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,11,8,-6,0,300,1,13,6,-2,19}), sort_third({0,2,7,5,3,-6,9,8,-6,11,300,1,13,6,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-7,-1,-2,-3,-4,-1,-5,-6,-7,-8,-9,-11}), sort_third({-8,9,8,-7,6,5,-5,2,1,-3,-1,-2,4,-4,-1,7,-6,-7,500,-9,-11})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({8,9,0,0,6,-5,12}), sort_third({0,9,0,8,6,-5,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,500}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,-901,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,289,290,3,0,-8,6,2,0,1,-9,8,7}), sort_third({-9,7,3,-4,290,3,0,-8,6,2,0,1,289,8,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,104}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,104})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,104}), sort_third({-901,6,7,4,8,289,20,-105,-277,104,200,3,104,700,900,290,800,1000,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,7,3,4,5,700,900,-200,-901,800,1000}), sort_third({-901,500,6,3,8,289,7,-105,-277,20,8,7,104,4,5,300,900,-200,700,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,1000}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,-901,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,8,289,20,104,-277,104,200,3,4,-8,700,900,-901,800,1000}), sort_third({4,6,7,20,8,289,104,104,-277,290,200,3,500,-8,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,-4}), sort_third({-8,7,3,-6,3,0,-4,6,2,-4,1,8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,289,290,3,0,-8,6,2,0,8,7}), sort_third({-4,7,3,0,290,3,2,-8,6,7,0,8,289})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,21,7,290,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000,-901}), sort_third({-277,500,21,3,290,8,7,20,-105,289,104,200,300,4,5,700,900,-901,800,1000,-901})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,-901,10,11,12,13,14,15,16,17,18,20,20,7,8}), sort_third({1,2,3,4,5,6,7,8,-901,8,11,12,10,14,15,13,17,18,16,20,7,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,-105,899,-277,104,8,7,3,4,5,19,700,900,-200,-901,800,1000,500}), sort_third({-200,500,6,-105,289,20,3,899,-277,7,8,7,19,4,5,104,700,900,300,-901,800,1000,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,-901,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000}), sort_third({-277,500,6,3,-901,8,7,20,-105,289,104,200,300,4,5,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,20,104,-277,104,200,3,4,-8,700,-2,-901,800,1000}), sort_third({-277,6,7,3,3,8,289,20,104,290,104,200,500,4,-8,700,-2,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000,-277}), sort_third({-200,6,7,-105,289,20,5,-277,104,8,3,4,200,700,900,500,-901,800,1000,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,0,-8,-7,9,-12,7,6}), sort_third({-12,2,3,-8,5,0,-3,-7,9,1,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,8,-6,0,300,1,13,6,-2,19}), sort_third({5,2,7,6,3,-6,8,-6,0,9,1,13,300,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,7}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,1,8,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,291,8,-3,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,290,-8}), sort_third({-8,500,6,-3,291,8,7,289,20,104,-277,8,104,200,-8,300,900,-901,700,1000,290,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,1000,18,21,30,-9}), sort_third({-3,12,3,6,15,0,9,1000,18,21,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,-6,18,29,21,30,-9,3}), sort_third({-9,12,3,-3,15,0,6,-6,18,9,21,30,29,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,289,290,3,0,-8,899,2,0,8,7}), sort_third({-8,3,289,-4,3,0,0,899,2,290,8,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-104,-901,800,1000}), sort_third({-901,500,6,4,8,289,7,-105,-277,20,200,3,104,5,700,300,-200,-104,900,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,-2,8,289,20,-105,-277,104,200,3,4,5,10,700,900,-200,-901,800,1000,-277}), sort_third({-901,6,7,-277,8,289,-2,-105,-277,4,200,3,20,5,10,104,900,-200,500,800,1000,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,289,290,3,0,-8,6,2,0,8,7,2,3}), sort_third({-4,7,3,0,290,3,2,-8,6,7,0,8,289,2,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,-8,9,-12,7}), sort_third({-8,2,3,-3,5,1,1,9,-12,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,3,3}), sort_third({-901,6,7,-901,8,289,4,-105,-277,20,200,3,104,700,900,290,800,1000,300,3,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,105}), sort_third({-901,6,7,4,8,289,20,-105,-277,104,200,3,105,700,900,290,800,1000,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,15,3,7,-7,11,8,0,1,13,6,-2,19,5}), sort_third({5,2,7,7,15,3,8,-7,11,9,0,1,13,6,-2,19,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,20,104,-277,104,200,3,4,-8,700,-2,-901,800,1000,7}), sort_third({-277,6,7,3,3,8,289,20,104,290,104,200,500,4,-8,700,-2,-901,800,1000,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,291,800,1000,105,290}), sort_third({-901,6,7,4,8,289,20,-105,-277,104,200,3,290,700,900,500,291,800,1000,105,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-7,-3,5,0,-8,-7,9,-12,7,6}), sort_third({-7,2,3,0,-3,5,1,-8,-7,6,-12,7,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,11,3,6,15,0,-3,1000,18,21,30,-9}), sort_third({-3,11,3,6,15,0,9,1000,18,21,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-104,-901,800}), sort_third({-901,500,6,4,8,289,7,-105,-277,20,200,3,104,5,700,300,-200,-104,900,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,5,-200,-104,-901,800}), sort_third({-104,500,6,4,8,289,7,-105,-277,20,200,3,104,5,700,300,5,-200,900,-901,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,-901,8,289,-105,-277,11,200,3,4,5,700,900,-901,800,1000}), sort_third({4,500,6,7,-901,8,11,-105,-277,289,200,3,300,5,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,900,0,6,12,3,12}), sort_third({6,900,0,9,12,3,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-5,-6,12}), sort_third({-6,0,-5,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,8,900,-901,800,1000,-901,1000}), sort_third({-277,500,6,3,290,8,7,20,-105,8,104,200,289,4,700,300,900,-901,800,1000,-901,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,3}), sort_third({3,0,6,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000,-277}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,5,700,900,-901,800,1000,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,291,8,-3,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,290,-8,6}), sort_third({-8,500,6,-3,291,8,7,289,20,104,-277,8,104,200,-8,300,900,-901,700,1000,290,800,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,0,3,6}), sort_third({-901,6,7,-901,8,289,4,-105,-277,6,200,3,20,700,900,104,800,1000,290,0,3,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,800,1000,-277,7}), sort_third({-200,6,7,-105,289,20,5,-277,104,8,3,4,200,700,900,500,-901,800,1000,-277,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,-901,8,289,20,-105,-277,104,5,200,3,4,5,700,900,-901,800,1000,900}), sort_third({-901,500,6,-277,-901,8,5,20,-105,7,104,5,200,3,4,289,700,900,300,800,1000,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-5,-6,12,9}), sort_third({-6,0,-5,9,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,291,8,-3,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,104,290,-8}), sort_third({-3,500,6,7,291,8,104,289,20,104,-277,8,290,200,-8,300,900,-901,700,1000,104,800,-8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,-2,8,289,20,-105,-277,104,200,3,4,5,11,700,-200,-901,800,1000,-277}), sort_third({-2,6,7,4,8,289,20,-105,-277,104,200,3,500,5,11,700,-200,-901,800,1000,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17,18,20,20,7,8}), sort_third({1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17,18,20,20,7,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,104,3}), sort_third({-901,6,7,4,8,289,20,-105,-277,104,200,3,104,700,900,290,800,1000,300,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,-6,0,6,1,13,6,-2,19}), sort_third({0,2,7,5,3,-7,9,8,-6,11,6,1,13,6,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-104,-901,800,1000,5}), sort_third({-901,500,6,4,8,289,5,-105,-277,7,200,3,20,5,700,104,-200,-104,300,800,1000,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,300,7,3,289,290,0,-8,6,2,0,8,7,2,3,3}), sort_third({-4,300,7,0,289,290,2,-8,6,3,0,8,3,2,3,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,10,11,12,13,14,11,16,17,18,20,20,7,8}), sort_third({1,2,3,4,5,6,7,8,10,11,12,13,14,11,16,17,18,20,20,7,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,801,1000,-277,7}), sort_third({-200,6,7,-105,289,20,5,-277,104,8,3,4,200,700,900,500,-901,801,1000,-277,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,-9,700,900,-901,800,1000,-901,104,899,17,3}), sort_third({4,6,7,20,8,289,104,-105,-277,290,200,3,300,-9,700,899,-901,800,900,-901,104,1000,17,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,0,-5,-6,12,-5}), sort_third({-6,0,-5,1,12,-5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-277,104,200,3,4,700,900,-901,800,1000,-901}), sort_third({-901,500,6,-901,290,8,4,20,-277,7,200,3,104,700,900,289,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-7,-3,5,0,-8,-7,1,-12,7,6}), sort_third({-7,2,3,0,-3,5,1,-8,-7,1,-12,7,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-8,-901,800,1000,-277}), sort_third({-105,6,7,-8,289,20,5,-277,104,8,3,4,200,700,900,500,-901,800,1000,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,-9,-9}), sort_third({5,-9,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,15,2,3,4,5,6,7,8,10,11,1000,12,13,14,15,16,17,18,20,20,7,8}), sort_third({1,15,2,3,4,5,6,7,8,7,11,1000,10,13,14,12,16,17,15,20,20,18,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,291,8,-3,289,20,104,-277,8,200,-8,700,900,-901,800,1000,290,-8,200}), sort_third({-3,500,6,7,291,8,104,289,20,200,-277,8,200,-8,700,300,-901,800,900,290,-8,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,7,3,12,4,5,700,900,-200,-901,800,1000}), sort_third({-200,500,6,3,8,289,5,-105,-277,7,8,7,20,12,4,104,700,900,300,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,-2,8,289,20,-105,-277,104,200,3,4,11,700,-200,-901,800,1000,-277}), sort_third({-200,6,7,-2,8,289,4,-105,-277,20,200,3,104,11,700,500,-901,800,1000,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,-104,-200,-104,-901,800,1000}), sort_third({-901,500,6,-104,8,289,4,-105,-277,7,200,3,20,5,700,104,-200,-104,300,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,300,6,289,290,8,289,20,104,-277,104,200,-8,700,900,-901,800,1000,15,-8,700}), sort_third({6,500,300,8,289,290,104,289,20,200,-277,104,300,-8,700,700,-901,800,900,15,-8,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,29,3,0,-8,6,2,0,1,8}), sort_third({-6,7,3,-4,29,3,0,-8,6,2,0,1,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,6,8,289,20,-105,-277,104,200,3,20,4,5,700,900,-200,-901,800,1000,-277}), sort_third({-105,6,6,4,289,20,8,-277,104,200,3,20,500,5,700,800,-200,-901,900,1000,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,-6,0,300,1,13,6,-2,19}), sort_third({-6,2,7,-2,3,-6,1,0,300,5,13,6,9,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,15,7,3,12,4,5,700,900,799,-200,-901,800,1000,5,8}), sort_third({-901,500,6,4,8,289,5,-105,-277,7,8,15,7,3,12,20,5,700,104,799,-200,300,800,1000,900,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,-4,3,4,700,900,-901,800,1000,-901}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,-4,300,4,700,900,-901,800,1000,-901})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,-6,0,1,6,-2,19}), sort_third({-2,2,7,0,3,-7,5,8,-6,9,1,6,11,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,9,12,3,6,15,0,-3,1000,18,30,-9}), sort_third({0,9,12,1,6,15,3,-3,1000,18,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,104,7,8,289,20,-105,-277,104,8,9,3,4,5,700,900,-200,-901,800,1000}), sort_third({-277,500,6,-200,7,8,5,20,-105,9,104,8,104,3,4,289,700,900,300,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-4,6,-5,12}), sort_third({6,0,-4,9,-5,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,290,3,0,-8,6,2,0,1,-9,8,0}), sort_third({-8,7,3,-4,3,0,0,6,2,8,1,-9,290,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-7,-1,-3,-4,800,-5,-6,-7,-8,-9,-11,-2}), sort_third({-9,9,8,-7,6,5,-6,2,1,-4,-1,-3,4,800,-5,7,-7,-8,500,-11,-2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-3,104,200,3,4,700,900,-901,800,1000,-901,290}), sort_third({-3,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,-901,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-276,104,200,3,4,700,900,-901,800,1000,-901,1000}), sort_third({-276,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,-901,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,20,3,6,8}), sort_third({-901,6,7,-901,8,289,4,-105,-277,6,200,3,20,700,900,104,800,1000,290,20,3,300,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,15,3,7,-7,11,8,0,1,13,6,-2,19,5,15}), sort_third({5,2,7,7,15,3,8,-7,11,9,0,1,13,6,-2,19,5,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,9,8,7,7,5,4,3,2,1,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}), sort_third({-9,9,8,-6,7,5,-3,3,2,1,-1,-2,4,-4,-5,7,-7,-8,10,-10})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,3,-7,11,8,-6,0,6,1,13,6,-2,19}), sort_third({3,2,7,5,-7,11,6,-6,0,6,1,13,8,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,-901,0,1000,104}), sort_third({-901,500,6,-277,290,8,3,20,-105,7,104,200,104,4,700,289,0,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,9,3,-7,11,8,-6,0,6,1,13,6,-2,19}), sort_third({3,2,9,5,-7,11,6,-6,0,6,1,13,8,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,8,899,20,-105,-277,104,200,3,4,700,900,-901,291,800,1000,105,290}), sort_third({-901,6,7,4,8,899,20,-105,-277,104,200,3,290,700,900,500,291,800,1000,105,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,1001,290,3,8,289,20,104,-277,104,200,3,4,-8,700,-2,-901,800,1000}), sort_third({-901,6,7,-8,290,3,8,289,20,104,-277,104,200,3,4,500,700,-2,1001,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,7,3,12,4,5,700,900,799,6,-200,-901,800,1000,5,8}), sort_third({-901,500,6,3,8,289,5,-105,-277,5,8,7,7,12,4,20,700,900,104,6,-200,300,800,1000,799,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,6,8,289,20,8,-277,104,200,3,20,300,4,5,700,900,-200,-901,800,1000,-277}), sort_third({-901,6,6,-277,289,20,8,-277,104,8,3,20,200,4,5,300,900,-200,500,800,1000,700})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,104,7,8,289,20,-105,-277,104,8,9,3,9,5,700,900,-200,-901,800,1000,-105}), sort_third({-277,500,6,-200,7,8,5,20,-105,9,104,8,104,3,9,289,700,900,300,-901,800,1000,-105})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-902,800,1000,103,3}), sort_third({-902,6,7,4,8,289,20,-105,-277,103,200,3,104,700,900,290,800,1000,300,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,12,1,8,7}), sort_third({-8,7,3,-6,3,0,-4,6,2,0,12,1,8,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,9,11,8,-6,0,300,1,13,6,-2,19}), sort_third({-6,2,7,-2,3,-6,1,11,8,5,0,300,9,13,6,9,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,2,0,-8,9,-12,7,6,-3}), sort_third({-12,2,3,-3,5,2,-3,-8,9,0,7,6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,8,289,-105,-277,11,3,4,5,700,900,-901,800,1000}), sort_third({-277,500,6,4,289,-105,8,11,3,300,5,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({290,5,5}), sort_third({290,5,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({301,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,1000,20}), sort_third({-277,500,6,3,290,8,7,20,-105,20,104,200,289,4,700,301,-901,800,900,-901,1000,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,-199,200,3,4,5,700,900,-200,-901,800,1000}), sort_third({-901,500,6,3,8,289,7,-105,-277,20,-199,200,104,4,5,300,900,-200,700,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,289,290,3,0,-8,6,2,0,8,2,7}), sort_third({-4,7,3,0,290,3,2,-8,6,2,0,8,289,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,5,0,-5,-6,12,9,9}), sort_third({-5,5,0,9,-6,12,9,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,10,3,289,290,3,0,-8,6,2,0,8,7,2,3}), sort_third({-4,7,10,3,289,290,3,0,-8,3,2,0,6,7,2,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,-901,10,11,12,13,14,15,-276,17,18,20,20,7,8}), sort_third({-276,2,3,1,5,6,4,8,-901,7,11,12,8,14,15,10,17,18,13,20,7,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,-105,-277,104,200,3,4,5,700,900,-200,-104,-901,800,1000,5}), sort_third({-200,500,6,-105,289,20,5,-277,104,7,3,4,200,700,900,300,-104,-901,800,1000,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,5,0,-5,-6,12,9,9,-6}), sort_third({-5,5,0,9,-6,12,9,9,-6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,20,104,-277,104,200,3,2,-8,700,-2,-901,800,1000,7}), sort_third({-277,6,7,3,3,8,289,20,104,290,104,200,500,2,-8,700,-2,-901,800,1000,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,-2,8,289,20,-105,-277,104,200,3,4,5,11,700,-200,-901,800,1000,-277,289}), sort_third({-2,6,7,4,8,289,20,-105,-277,104,200,3,289,5,11,500,-200,-901,700,1000,-277,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,-105,-277,104,200,3,4,5,700,900,-200,-104,-901,800,29,5}), sort_third({-200,500,6,-105,289,20,5,-277,104,7,3,4,200,700,900,300,-104,-901,800,29,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,-4,-11,3,4,700,900,-901,800,1000}), sort_third({-277,500,6,-11,290,8,7,20,-105,289,104,-4,300,3,4,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,1,5,2,0,-8,9,-12,7,6,-3}), sort_third({-3,2,3,1,1,5,2,0,-8,6,-12,7,9,-3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,15,7,3,4,5,700,900,799,-200,-901,800,1000,5,8,5}), sort_third({5,500,6,7,8,289,7,-105,-277,8,8,15,20,3,4,104,700,900,300,-200,-901,799,1000,5,800,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,290,3,0,-8,6,2,0,8,2,7,7}), sort_third({-8,7,3,-4,3,0,0,6,2,7,8,2,290,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,-9,-9,5}), sort_third({5,-9,-9,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,5,3,12}), sort_third({3,0,5,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,9,12,3,6,15,0,-3,1000,30,-9}), sort_third({0,9,12,1,6,15,3,-3,1000,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,900,0,4,6,12,3,12,9,12}), sort_third({3,900,0,4,6,12,9,12,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,289,290,3,0,-8,6,2,0,1,-9,8}), sort_third({-8,3,289,-4,3,0,0,6,2,8,1,-9,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,7,3,12,9}), sort_third({3,0,7,9,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,20,104,-277,104,200,3,4,-8,700,-2,-901,18,1000,7}), sort_third({-277,6,7,3,3,8,18,20,104,289,104,200,290,4,-8,500,-2,-901,700,1000,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-5,29,-6,12,9}), sort_third({9,0,-5,9,-6,12,29})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,0,-8,1,13,6,-2,19,13}), sort_third({-8,2,7,5,3,-7,6,8,0,9,1,13,11,-2,19,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,1,5,2,0,-8,9,-12,7,6,-3,9}), sort_third({-3,2,3,1,1,5,2,0,-8,6,-12,7,9,-3,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,289,290,3,0,-8,6,2,0,8,7,2,3,7}), sort_third({-4,7,3,0,290,3,2,-8,6,7,0,8,7,2,3,289})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,16,17,18,19,20}), sort_third({1,2,3,4,5,6,7,8,9,10,11,12,13,14,16,17,18,19,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-5,29,-6,105,9}), sort_third({9,0,-5,9,-6,105,29})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,8,289,20,104,-277,200,3,4,-8,700,-2,-901,800,1000}), sort_third({-901,6,7,-8,8,289,20,104,-277,200,3,4,290,700,-2,500,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,10,6,7,8,10,11,12,13,14,15,16,17,18,19,20,6}), sort_third({1,2,3,4,10,6,7,8,10,11,12,13,14,15,16,17,18,19,20,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,-5,-6,12,-5}), sort_third({1,-5,-6,12,-5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,-901,800,1000,104,3}), sort_third({3,6,7,4,8,289,20,-105,-277,104,200,3,290,700,-901,300,1000,104,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,30,8,289,20,104,-277,104,200,3,4,-8,700,-2,-901,18,1000,7}), sort_third({-277,6,7,3,30,8,18,20,104,289,104,200,290,4,-8,500,-2,-901,700,1000,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,5,6,5}), sort_third({5,5,6,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,15,2,3,4,5,19,6,7,8,10,11,1000,12,13,14,15,16,17,18,20,20,7,8}), sort_third({1,15,2,3,4,5,8,6,7,14,10,11,17,12,13,19,15,16,20,18,20,1000,7,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,7,3,12,4,5,700,900,-901,800,1000}), sort_third({-901,500,6,3,8,289,5,-105,-277,7,8,7,20,12,4,104,700,900,300,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({290,290,290}), sort_third({290,290,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,290,-8,104}), sort_third({-277,500,6,7,290,8,104,20,104,200,8,104,289,-8,700,300,-901,800,900,290,-8,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,290,3,0,-8,6,0,1,-8,8,0}), sort_third({-8,7,3,-4,3,0,0,6,0,1,-8,8,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,500,8,21,-6,0,300,13,6,-2,19}), sort_third({-6,2,7,5,3,-6,9,8,21,13,0,300,19,6,-2,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,290,-8,104,1000}), sort_third({-277,500,6,7,290,8,104,20,104,200,8,104,289,-8,700,300,-901,800,900,290,-8,1000,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,1,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-902,800,1000,103,1001}), sort_third({-902,1,7,4,8,289,20,-105,-277,103,200,3,104,700,900,290,800,1000,300,1001})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,103,20,-105,-277,104,8,7,3,12,4,5,700,900,-901,800,1000}), sort_third({-277,500,6,4,8,289,7,20,-105,7,104,8,103,3,12,300,5,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({299,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,104}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,299,4,700,900,-901,800,1000,-901,104})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-5,29,-6,900,9,29,9}), sort_third({9,0,-5,9,-6,900,29,29,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-2,-5,29,-276,-6,12,9,-6}), sort_third({9,-2,-5,12,-276,-6,29,9,-6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,9,104,200,3,4,5,700,900,-200,-104,-901,800,1000}), sort_third({-104,500,6,3,8,289,7,-105,-277,9,104,200,20,4,5,300,900,-200,700,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,300,-5,-6,12,-5}), sort_third({-6,300,-5,1,12,-5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,8,104,200,-8,700,900,-901,-200,800,1000,290,-8,104,1000}), sort_third({-277,500,6,-8,290,8,7,20,104,200,8,104,289,-8,700,300,-901,-200,800,1000,290,900,104,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,1,5,2,11,0,-8,105,9,-12,7,6,2,-3}), sort_third({-12,2,3,-8,1,5,-3,11,0,1,105,9,2,7,6,2,-3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,8,300,900,-901,800,1000,-901,1000}), sort_third({4,6,7,20,8,289,104,-105,-277,290,200,3,300,700,8,300,900,-901,800,1000,-901,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,15,7,3,4,5,700,900,799,-200,-901,800,1000,4,8,5}), sort_third({5,500,6,7,8,289,7,-105,-277,8,8,15,20,3,4,104,700,900,300,-200,-901,799,1000,4,800,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,-104,-200,-104,-901,800,1000,289}), sort_third({-901,500,6,-104,8,289,4,-105,-277,7,200,3,20,5,700,104,-200,-104,289,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,15,3,7,-7,11,8,0,13,6,-2,19,5,15}), sort_third({5,2,7,5,15,3,6,-7,11,7,0,13,8,-2,19,9,15})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,4,4,5,700,900,-200,-104,-901,800,1000,1000}), sort_third({-901,500,6,4,8,289,7,-105,-277,20,200,4,104,5,700,300,-200,-104,900,800,1000,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({299,500,6,7,290,8,289,20,-105,-277,104,3,4,700,900,-901,800,1000,-901,104}), sort_third({-901,500,6,-901,290,8,-277,20,-105,4,104,3,7,700,900,289,800,1000,299,104})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,104,-199,200,3,4,5,700,900,699,-200,-901,800,1000}), sort_third({-901,500,6,-199,8,289,4,-105,104,7,200,3,20,5,700,300,699,-200,900,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,-276,289,20,-105,-277,104,200,3,4,-9,700,900,-901,800,1000,-901,104,899,17,3}), sort_third({4,6,7,20,-276,289,104,-105,-277,290,200,3,300,-9,700,899,-901,800,900,-901,104,1000,17,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,8,288,20,-105,-277,104,200,3,4,5,700,900,-200,-901,801,1000,-277,7}), sort_third({-200,6,7,-105,288,20,5,-277,104,8,3,4,200,700,900,500,-901,801,1000,-277,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,7,8,289,20,-105,104,200,3,4,5,700,-104,-200,-104,-901,800,1000,289,200}), sort_third({-105,500,7,-104,289,20,3,104,200,8,4,5,300,-104,-200,700,-901,800,1000,289,200})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,0,5,700,-104,-200,-104,-901,800,1000}), sort_third({-104,500,6,4,8,289,7,-105,-277,20,200,3,104,0,5,300,-104,-200,700,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,1000}), sort_third({9,0,6,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-200,-901,800}), sort_third({4,500,6,7,8,289,20,-105,-277,104,200,3,300,5,700,800,-200,-901,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,299,3,-7,11,8,0,1,13,6,-2,19}), sort_third({-2,2,7,1,3,-7,5,8,0,11,13,6,299,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,9,8,289,20,-105,-277,700,103,200,7,3,4,5,700,900,-200,-901,800,1000}), sort_third({-277,500,6,4,9,8,7,20,-105,200,700,103,289,7,3,300,5,700,800,-200,-901,900,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,15,2,3,4,5,19,6,7,8,10,1000,12,13,14,15,16,17,18,20,20,7,8}), sort_third({1,15,2,3,4,5,7,6,7,8,10,1000,12,13,14,15,16,17,18,20,20,19,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-7,-6,3,0,-8,6,2,0,1,8,7}), sort_third({-8,7,-7,-6,3,0,-4,6,2,0,1,8,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-7,6,7,290,8,289,20,104,-277,200,3,4,-8,700,-2,-901,800,1000}), sort_third({-901,6,7,-8,8,289,-7,104,-277,20,3,4,200,700,-2,290,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({290,291,290}), sort_third({290,291,290})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-5,29,-6,105,9,9}), sort_third({9,0,-5,9,-6,105,29,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,-901,20,3,6,8}), sort_third({-901,6,7,4,8,289,8,-105,-277,20,200,3,20,700,900,104,800,-901,290,3,6,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,291,8,-3,289,20,104,-277,8,200,-8,700,900,-901,800,1000,290,-8,200,104}), sort_third({-3,500,6,7,291,8,104,289,20,200,-277,8,200,-8,700,300,-901,800,900,290,-8,1000,104})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,5,2,7,9,3,-7,11,0,1,13,6,-2,8,19}), sort_third({-7,5,2,-2,9,3,1,11,0,1,13,6,7,8,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({6,2,7,9,15,3,7,-7,11,8,0,13,6,-2,19,5,15,5}), sort_third({5,2,7,6,15,3,6,-7,11,7,0,13,8,-2,19,9,15,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,10,3,4,700,900,-901,800,1000,-901,-277}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,10,300,4,700,900,-901,800,1000,-901,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,-6,3,0,-8,6,2,0,1,8,-6}), sort_third({-8,7,3,-6,3,0,-6,6,2,-4,1,8,0})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,7,290,8,289,20,104,-277,900,8,6,200,-8,700,900,-901,800,1000,290,-8,104}), sort_third({20,500,7,104,8,289,200,104,-277,290,8,6,300,-8,700,900,-901,800,900,290,-8,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-7,6,7,290,8,289,104,-277,200,3,4,-8,700,-2,-901,800,1000,1000}), sort_third({-7,6,7,3,8,289,104,-277,200,290,4,-8,700,-2,-901,800,1000,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,3,4,700,900,-901,800,1000,-901,-277}), sort_third({-901,500,6,-901,290,8,-277,20,-105,4,104,3,7,700,900,289,800,1000,300,-277})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,900,0,4,-105,12,3,12,12}), sort_third({3,900,0,4,-105,12,9,12,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,301,7,3,289,290,699,-8,6,2,0,8,7,2,3,3}), sort_third({-4,301,7,2,289,290,3,-8,6,3,0,8,7,2,3,699})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,5,2,0,-8,9,-12,7,6,-3}), sort_third({-8,2,3,1,2,0,5,9,-12,7,6,-3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,7,7,-901,289,-105,-277,11,200,3,4,5,700,900,-901,800,1000,7,7}), sort_third({-901,500,7,-105,-901,289,5,-277,11,7,3,4,7,700,900,200,800,1000,300,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,15,2,3,4,5,19,-276,7,8,10,11,1000,12,13,14,15,16,17,18,20,20,8}), sort_third({1,15,2,3,4,5,8,-276,7,14,10,11,17,12,13,19,15,16,20,18,20,1000,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,-1,9,0,3,-6,9,11,8,-6,0,300,1,13,6,-2,19}), sort_third({-1,2,7,0,9,0,3,-6,9,5,8,-6,11,300,1,13,6,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,290,290,3,0,-8,6,2,0,1,-9}), sort_third({-8,3,290,-4,3,0,0,6,2,290,1,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,-1,9,0,3,-6,9,7,11,8,-6,0,300,1,13,6,-2,19}), sort_third({-6,2,7,-2,9,0,-1,-6,9,1,11,8,3,0,300,5,13,6,7,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,15,3,7,-7,11,8,0,13,6,-2,19,5,15,11,6}), sort_third({5,2,7,5,15,3,6,-7,11,6,0,13,7,-2,19,8,15,11,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,500,-901}), sort_third({-901,500,6,-277,290,8,3,20,-105,7,104,200,289,4,700,300,-901,800,900,-901,500,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,8,7,7,5,4,3,2,1,899,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-4}), sort_third({-9,8,7,-6,5,4,-3,2,1,3,-1,-2,7,-4,-5,10,-7,-8,899,-10,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,3,290,3,0,-8,6,2,0,8,2,19,7}), sort_third({-8,3,3,-4,3,0,0,6,2,19,8,2,290,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,11,8,-6,0,300,5,1,13,6,-2,19}), sort_third({-2,2,7,0,3,-6,1,8,-6,5,300,5,9,13,6,11,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,-5,12,-5}), sort_third({-5,-5,12,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-7,-277,104,200,3,4,700,900,-901,800,1000,-901,1000,289}), sort_third({-277,500,6,3,290,8,7,20,-7,289,104,200,289,4,700,300,-901,800,900,-901,1000,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,700,-901,800,-901,20,3,6,8,8}), sort_third({-901,6,7,4,8,289,6,-105,-277,20,200,3,104,700,900,290,-901,800,300,20,3,700,8,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,8,-6,0,300,1,13,6,-2}), sort_third({5,2,7,6,3,-6,8,-6,0,9,1,13,300,-2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-278,104,200,3,4,700,-901,800,1000,104,3}), sort_third({3,6,7,4,8,289,20,-105,-278,104,200,3,290,700,-901,300,1000,104,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,9,290,200,3,4,5,700,900,-200,-901,800,1000}), sort_third({-901,500,6,3,8,289,7,-105,-277,9,290,200,20,4,5,300,900,-200,700,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,15,0,-3,-6,18,21,30,-9,0}), sort_third({-3,12,3,0,15,0,6,-6,18,9,30,-9,21})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,-1,9,0,3,-6,9,11,8,-6,0,300,13,6,-2,19}), sort_third({-1,2,7,0,9,0,3,-6,9,5,8,-6,6,300,13,11,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,-200,-901,800,200}), sort_third({-200,500,6,4,8,289,7,-105,-277,20,200,3,104,5,700,200,-901,800,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,1001,290,3,8,289,20,104,-277,104,200,3,4,-8,700,-2,-901,1000}), sort_third({-901,6,7,-8,290,3,8,289,20,104,-277,104,200,3,4,500,700,-2,1001,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-6,-1,-3,-4,800,-5,-6,-7,-8,-9,-11,-2,-1}), sort_third({-9,9,8,-6,6,5,-6,2,1,-4,-1,-3,-1,800,-5,4,-7,-8,7,-11,-2,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,9,7,3,12,4,5,700,900,-200,-901,800,1000,7}), sort_third({-200,500,6,3,8,289,5,-105,-277,7,9,7,20,12,4,104,700,900,300,-901,800,1000,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,2,-6,3,0,-8,6,2,0,1,8,-4}), sort_third({-4,7,3,0,-6,3,2,-8,6,2,0,1,8,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,3,289,290,3,0,-8,6,2,0,1,-9,8,7,0}), sort_third({-9,7,3,-4,290,3,0,-8,6,0,0,1,2,8,7,289})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,12,3,6,14,0,-3,-6,18,21,30,-9,0}), sort_third({-3,12,3,0,14,0,6,-6,18,9,30,-9,21})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,-5,12,12}), sort_third({-5,0,6,9,12,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,-5,29,20,-6,105,9}), sort_third({9,0,-5,29,20,-6,105,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-6,-1,-3,-4,800,-5,-7,-8,-9,-11,-2,-1}), sort_third({-11,9,8,-7,6,5,-6,2,1,-4,-1,-3,4,800,-5,7,-8,-9,500,-2,-1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,8,7,7,5,4,3,2,1,899,0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-4}), sort_third({-8,8,7,-5,5,4,-4,2,1,-2,0,-1,3,-3,-4,7,-6,-7,10,-9,-10,899})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,3,290,3,0,-8,6,2,0,8,2,19,7,-4}), sort_third({-8,3,3,-4,3,0,0,6,2,19,8,2,290,7,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,20,8,289,20,-105,-277,700,103,200,7,3,4,5,700,900,-200,-901,800,1000}), sort_third({-277,500,6,4,20,8,7,20,-105,200,700,103,289,7,3,300,5,700,800,-200,-901,900,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,20,104,-277,104,200,3,2,-8,700,-2,-901,800,1000,7,500}), sort_third({-277,6,7,3,3,8,289,20,104,290,104,200,500,2,-8,500,-2,-901,700,1000,7,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,20,104,-277,200,3,4,-8,700,-2,-901,800,1000}), sort_third({-277,6,7,-2,3,8,4,20,104,289,200,3,290,-8,700,500,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,289,20,-105,-277,104,200,3,4,700,900,700,-901,800,-901,20,3,6,8,8}), sort_third({-901,6,7,-105,289,20,8,-277,104,20,3,4,200,900,700,290,800,-901,300,3,6,700,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-5,12,-5}), sort_third({-5,12,-5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,-901,8,289,-105,-277,5,200,3,4,5,700,900,-901,800,1000,801}), sort_third({4,500,6,5,-901,8,7,-105,-277,289,200,3,300,5,700,900,-901,800,1000,801})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-200,899,5,1000}), sort_third({-200,899,5,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-5,29,-276,-6,12,9,-6}), sort_third({-276,-5,29,9,-6,12,9,-6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,0,1,-200,13,6,-2,19,13}), sort_third({1,2,7,5,3,-7,6,8,0,9,-200,13,11,-2,19,13})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({10,8,7,7,5,4,3,2,1,899,0,-1,-2,-4,-6,-7,-8,-9,-10,-4}), sort_third({-10,8,7,-7,5,4,-2,2,1,3,0,-1,7,-4,-6,10,-8,-9,899,-4})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,20,104,-277,104,200,3,4,-8,700,290,-2,-901,18,1000,7,104}), sort_third({-901,6,7,-277,3,8,3,20,104,7,104,200,289,4,-8,290,290,-2,500,18,1000,700,104})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,5,1,0,-8,9,-12,7,6,6}), sort_third({-12,2,3,-3,5,1,0,-8,9,1,7,6,6})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,103,20,-105,104,3,7,3,12,5,700,900,-901,800,1000}), sort_third({3,500,6,7,8,289,103,20,-105,104,3,7,300,12,5,700,900,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,300,8,289,20,-105,-277,104,200,3,4,700,8,900,-901,800,1000,-901,1000}), sort_third({-901,500,6,-901,290,300,-105,289,20,7,-277,104,8,3,4,200,8,900,300,800,1000,700,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,300,-5,-6,12,-5,-5}), sort_third({-6,300,-5,-5,12,-5,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,0,6,-6,12,9}), sort_third({-6,0,6,9,12,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-6,-1,-3,-4,800,-5,-7,-8,-9,-11,-2,-1,-6}), sort_third({-11,9,8,-7,6,5,-6,2,1,-6,-1,-3,-4,800,-5,4,-8,-9,7,-2,-1,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,1,5,2,11,0,-8,105,9,-12,7,6,2,-3,1}), sort_third({-12,2,3,-8,1,5,-3,11,0,1,105,9,2,7,6,2,-3,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,7,3,4,8,700,900,16,-901,800,1000}), sort_third({-901,500,6,3,8,289,7,-105,-277,20,200,7,104,4,8,300,900,16,700,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,4,5,6,7,8,10,11,12,13,14,11,16,17,18,20,20,7,8,6}), sort_third({1,2,3,4,5,6,6,8,10,7,12,13,11,11,16,14,18,20,17,7,8,20})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-276,104,200,3,4,700,800,1000,-901,1000}), sort_third({-276,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,800,1000,-901,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,11,8,-6,-11,0,300,5,1,13,6,19,19}), sort_third({-11,2,7,5,3,-6,5,8,-6,6,0,300,9,1,13,11,19,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,-2,8,289,20,-105,-277,104,200,3,4,5,11,700,-200,-901,800,1000,-277,289,-105}), sort_third({-2,6,7,4,8,289,20,-105,-277,104,200,3,289,5,11,500,-200,-901,700,1000,-277,800,-105})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,-5,-6,-105,12,-5,-5}), sort_third({-105,-5,-6,-5,12,-5,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,-199,7,9,3,-7,11,8,-6,0,1,6,-2,19}), sort_third({-7,2,-199,-6,9,3,5,11,8,6,0,1,7,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,900,0,4,6,13,3,12,9,12}), sort_third({3,900,0,4,6,13,9,12,9,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-7,11,8,-6,0,1,6,19}), sort_third({0,2,7,5,3,-7,9,8,-6,11,1,6,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,8,7,3,12,4,5,700,-5,-200,-901,800,1000}), sort_third({-200,500,6,3,8,289,5,-105,-277,7,8,7,20,12,4,104,700,-5,300,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,3,-3,3,1,5,2,11,0,-8,105,9,-12,7,6,2,-3}), sort_third({-3,2,3,0,3,1,1,2,11,5,-8,105,6,-12,7,9,2,-3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,699,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,19,104,3,-901}), sort_third({-901,6,699,4,8,289,20,-105,-277,104,200,3,104,700,900,290,800,19,300,3,-901})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,699,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,801,19,104,3,-901}), sort_third({-901,6,699,4,8,289,20,-105,-277,104,200,3,104,700,900,290,801,19,300,3,-901})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,800,1000,300}), sort_third({4,500,6,7,8,289,20,-105,-277,104,200,3,300,5,700,900,-901,800,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,-105,-277,104,200,3,4,5,700,5,-200,-104,-901,800,29,5}), sort_third({-200,500,6,-105,289,20,5,-277,104,7,3,4,200,700,5,300,-104,-901,800,29,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,799,6,7,290,8,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,290,-8,104}), sort_third({-277,799,6,7,290,8,104,20,104,200,8,104,289,-8,700,300,-901,800,900,290,-8,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,-5,29,-276,-6,9,-6}), sort_third({-276,-5,29,-6,-6,9,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,-6,288,300,1,13,6,-2,19}), sort_third({-6,2,7,-2,3,-6,1,288,300,5,13,6,9,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,-276,289,20,-105,-277,104,200,3,-8,4,-9,700,900,-901,800,1000,-901,104,899,17,3,7}), sort_third({-8,6,7,3,-276,289,20,-105,-277,104,200,3,104,4,-9,290,900,-901,300,1000,-901,700,899,17,800,7})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,900,0,4,6,12,12,9,12,0}), sort_third({0,900,0,4,6,12,9,9,12,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,289,20,899,-105,-277,104,200,3,4,5,700,900,-200,-104,-901,800,29,5}), sort_third({-901,500,6,4,289,20,5,-105,-277,7,200,3,104,5,700,300,-200,-104,899,800,29,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,104,-277,8,104,200,-8,700,900,-901,800,1000,290,-8,104,800}), sort_third({-277,500,6,7,290,8,104,20,104,200,8,104,289,-8,700,300,-901,800,900,290,-8,1000,800})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({29,9,8,7,6,5,4,2,0,-6,-1,-3,-4,800,-5,-7,-8,-9,-11,-2,-1,-6}), sort_third({-11,9,8,-7,6,5,-6,2,0,-6,-1,-3,-4,800,-5,4,-8,-9,7,-2,-1,29})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,8,289,20,-105,-277,104,200,289,3,4,700,8,300,900,-901,800,1000,-901,1000}), sort_third({-901,6,7,-901,8,289,3,-105,-277,8,200,289,20,4,700,104,300,900,290,800,1000,300,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-1,-2,-4,-1,-5,-6,-7,-8,-9,-11}), sort_third({-11,9,8,-7,6,5,-1,2,1,-1,-2,-4,4,-5,-6,7,-8,-9,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,-5,-6,-5}), sort_third({-5,-5,-6,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,9,8,7,6,5,4,2,1,-7,-1,-2,-3,-4,-1,-6,-6,-7,-8,-9,-11,9,9}), sort_third({-8,9,8,-7,6,5,-6,2,1,-3,-1,-2,4,-4,-1,7,-6,-7,9,-9,-11,500,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-7,6,7,290,8,289,20,-4,104,-277,200,3,4,-8,700,-2,-901,800,1000}), sort_third({-277,6,7,-7,8,289,-2,-4,104,4,200,3,20,-8,700,290,-901,800,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({29,9,8,7,6,5,4,1,0,-6,-1,-3,-4,800,-5,-7,-8,-9,-11,-2,-1,-6,-1}), sort_third({-11,9,8,-7,6,5,-6,1,0,-6,-1,-3,-4,800,-5,4,-8,-9,7,-2,-1,29,-1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,299,3,-7,11,8,0,1,13,6,-2,19,2}), sort_third({-2,2,7,1,3,-7,5,8,0,11,13,6,299,19,2})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,7,-7,11,8,0,1,13,6,-2,19,5}), sort_third({-7,2,7,0,3,7,5,11,8,5,1,13,6,-2,19,9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,104,200,3,4,5,700,900,-901,3,800,1000,300}), sort_third({4,500,6,7,8,289,20,-105,-277,104,200,3,300,5,700,800,-901,3,900,1000,300})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,7,-1,9,0,3,-6,9,7,11,8,-6,0,300,1,13,6,-2,19}), sort_third({0,2,7,5,-1,9,6,3,-6,7,7,11,8,-6,0,9,1,13,300,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,900,0,4,6,3,12,9,-4,12}), sort_third({4,900,0,9,6,3,12,9,-4,12})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,5,5,5}), sort_third({5,5,5,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,9,11,8,0,300,1,13,6,-2,19}), sort_third({0,2,7,5,3,-6,9,11,8,9,300,1,13,6,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,8,289,20,-105,-277,9,104,200,3,4,5,700,900,-200,-104,-901,800,6,1000}), sort_third({-104,500,6,3,8,289,6,-105,-277,7,104,200,9,4,5,20,900,-200,300,-901,800,700,1000})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,290,3,8,289,-9,20,104,-277,104,200,3,4,-8,700,-2,-901,800,1000,7}), sort_third({-901,6,7,-8,3,8,7,-9,20,104,-277,104,200,3,4,289,700,-2,290,800,1000,500})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({5,2,7,9,3,-6,-6,0,300,1,13,1,6,-2,19}), sort_third({-6,2,7,1,3,-6,5,0,300,6,13,1,9,-2,19})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,7,290,8,289,20,-105,-277,104,200,3,4,700,900,-901,800,1000,-901,-9}), sort_third({-277,500,6,3,290,8,7,20,-105,289,104,200,300,4,700,900,-901,800,1000,-901,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,500,6,289,20,-105,-277,104,200,3,4,5,700,5,-200,-104,-901,800,29,5}), sort_third({-277,500,6,-104,20,-105,3,104,200,29,4,5,289,5,-200,300,-901,800,700,5})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,3,289,3,0,-8,6,2,0,1,-9,8}), sort_third({-4,3,289,1,0,-8,3,2,0,6,-9,8})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({500,6,7,8,288,20,-105,-277,104,200,4,3,4,5,700,900,-200,-901,801,1000,-277,7}), sort_third({-105,6,7,4,288,20,7,-277,104,8,4,3,200,5,700,500,-200,-901,801,1000,-277,900})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({9,11,3,6,15,0,-3,1001,21,30,-9}), sort_third({-3,11,3,6,15,0,9,1001,21,30,-9})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({300,6,7,290,-276,289,20,-105,-277,104,200,3,4,-9,700,900,-901,800,1000,-901,104,700,17,3}), sort_third({4,6,7,20,-276,289,104,-105,-277,290,200,3,300,-9,700,700,-901,800,900,-901,104,1000,17,3})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({29,9,8,7,6,5,4,1,0,-6,-1,-3,-4,800,-5,-7,-8,-9,-11,-2,-1,-6,-1,-1}), sort_third({-11,9,8,-7,6,5,-6,1,0,-6,-1,-3,-4,800,-5,4,-8,-9,7,-2,-1,29,-1,-1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({1,2,-11,3,-3,1,5,2,11,0,-8,105,9,-4,-12,7,6,2,-3,1}), sort_third({-3,2,-11,0,-3,1,1,2,11,3,-8,105,5,-4,-12,7,6,2,9,1})))){ tests_passed++; } total_tests++;

    if((issame(sort_third({-4,7,-7,-6,3,8,0,-8,6,2,0,1,8,7,1}), sort_third({-6,7,-7,-4,3,8,0,-8,6,2,0,1,8,7,1})))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


