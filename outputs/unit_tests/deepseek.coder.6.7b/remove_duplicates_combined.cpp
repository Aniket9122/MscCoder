bool isSame(vector<int> v1, vector<int> v2) {
    return v1 == v2;
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

    if((issame(remove_duplicates({}) , {}))){ tests_passed++; } total_tests++;

     if((issame(remove_duplicates({1, 2, 3, 4}) , {1, 2, 3, 4}))){ tests_passed++; } total_tests++;

      if((issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,4,3,5}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,3,4,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,2,2,3,3,4,4,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-1,0,1,0,-1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,6,7,8}) , {1,2,3,4,5,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,9,9,9}) , {1,2,3,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,6,7,8,9}) , {1,2,3,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,6,7,8,9}) , {1,2,3,4,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,7,8,9}) , {1,2,3,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,8,9,9}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,6,8,9}) , {1,2,3,4,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,4}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,-1,7,8,9,8,9,9}) , {1,2,3,4,5,6,-1,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,6,7,8,4,9}) , {1,2,3,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,3,4,6,8,9}) , {2,3,4,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,7,8,9,2}) , {1,3,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,7,9,9,9}) , {1,2,3,4,5,6,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,6,7,8,9,4}) , {1,2,3,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,3,4,4,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,6,1,7,8,9,4}) , {2,3,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,4,6,7,8,2}) , {1,4,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,5,6,7,8,9,8,9,9}) , {1,2,3,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,4,4,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,7,8,3,9,2}) , {1,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,2,2,3,3,4,4,4,1,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,2,3,3,4,4,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,6,8,9,9}) , {1,2,3,4,5,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,9,9}) , {1,2,3,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,6,7,8,9,7,9,9,9}) , {1,2,3,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,3}) , {1,2,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,7,9,9,9,9}) , {1,2,3,4,5,6,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,3,1,1}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,6,7,8,9,7}) , {1,2,3,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,9,9,9,1}) , {2,3,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,6,2,2,3,4,4}) , {6,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,4,5,6,7,8,9,9,4,9}) , {1,3,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({9,1,2,9,3,8,6,8,9}) , {1,2,3,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,3,2,2,3,3,4,4,4,1,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,3,3,4,4,1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,10,6,8,9,9}) , {1,2,3,4,5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,6,8,9,9,8}) , {1,2,3,4,5,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,7,9,7,9,9,9,8}) , {1,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,4,6,7,8}) , {1,2,4,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,4,5,6,-1,7,8,9,8,9,9}) , {1,3,4,5,6,-1,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-1,0,0,-1,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,4,3,4,5,6,7,8,9,6,8,9,9}) , {1,2,3,5,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,3,2,2,3,3,4,3,4,1,3,1,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,2,3,4,4,7,8,2}) , {1,3,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,1,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,4,7,8}) , {1,2,4,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,10,6,8,9,9,9}) , {1,2,3,4,5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,4,9,9,9,9}) , {1,2,3,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,6,8,9,9,9}) , {1,2,3,4,5,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,0,2,2,3,3,4,4}) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-1,0,10,-1,1}) , {0,10,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-1,0,10,-1,-1}) , {0,10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,3,4,5,6,3,7,8,9,9,4,9,5}) , {2,1,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,0,8,9}) , {1,2,3,0,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,3,2,2,3,3,4,4,4,1,3,7,1}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,9,9,9,5}) , {1,2,3,4,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,7,8,9,2,9}) , {1,3,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,3,2,10}) , {3,10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,1,1,1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,7,9,7,9,9,9,8,5}) , {1,2,3,4,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,9,2,3,2,10}) , {9,3,10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,4,3,4,5,6,7,8,9,6,8,9,9,6,3}) , {1,2,5,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,6,8,9,8}) , {1,2,3,4,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,3,6,7,8,9,4}) , {1,2,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,4,5,6,7,8,7,9,7,9,8,9,9,8}) , {1,2,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,6,7,9}) , {1,2,3,4,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,6,1,7,8,3,4}) , {2,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,4,6,7,8,9,8,9,9}) , {1,2,3,6,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-1,3,4,5,6,7,4,9,9,9,9}) , {1,-1,3,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,1,1,3,2,2,3,3,4,3,4,1,3,1,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) , {11,12,13,14,15,16,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30}) , {2,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,10,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,11,13,15,17,19}) , {1,3,5,7,9,11,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,11,13,15,17,19,13}) , {0,1,3,5,7,9,11,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,4,4,5,5,5,2,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,2}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,15,17,19}) , {1,5,7,9,11,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12}) , {8,1,0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,5,4,4,6,5,5,2,5}) , {12,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,4,5,5,4,2,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,5,4,4,6,5,5,2,5,12,1,5,2}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,5,4,2,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,15,17,19,7}) , {1,5,9,11,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,4,5,5,4,2,5,4,5}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,1,2}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({5,0,1,3,5,7,9,11,-5,15,17,19,13}) , {0,1,3,7,9,11,-5,15,17,19,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,4,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12}) , {4,5,8,1,0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,5,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,11,13,15,17,19,7,1}) , {5,12,9,11,13,15,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,12,12,1,0,-5,9,-5,20,20,-30}) , {2,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,1,2,2,3,4,14,4,4,5,5,4,2,5,4,5}) , {-30,3,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,5,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,3,3,4,2,5,4,4,6,5,5,2,5,12,1,5,2}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,5,4,5,5,5,2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,5,2,4}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,5,4,5,5,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,0,2,3,4,2,4,4,5,5,4,2,5,4,2}) , {12,0,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,11,13,15,1000,19,13}) , {0,1,3,5,7,9,11,15,1000,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,1,2,3,3,4,2,5,4,4,6,5,5,2,5,12,5,2}) , {0,1,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,2,5,4,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,1000,4,5,4,5,5,5,2}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,15,3,3,4,4,4,5,5,5,5}) , {15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,5,4,2,5,4,2,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,4,5,5,4,2,5,4,7,5}) , {12,3,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,4,2,5,4,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,11,17,-10,8,12,12,1,0,-5,9,-5,20,20,-30}) , {5,2,11,17,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,2,5,4,5,1}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,20,11,13,15,17,19,13}) , {0,1,3,5,7,9,20,11,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,1,2,2,3,4,14,4,4,5,5,4,2,5,4,5,4}) , {-30,3,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,1000,4,5,4,5,5,5,2,5}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,4,4,5,4,2,5,4,2,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,0,1,1,2,2,2,15,3,3,4,4,4,5,5,5,5}) , {0,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,15,17,19,7,11}) , {1,5,9,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,2,3,3,4,5,4,5,5,5,2,4}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,3,4,2,4,4,5,5,4,2,5,4}) , {12,6,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,2,3,3,4,5,4,5,5,5,2,4,2}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,4,5,5,4,2,5,4,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,5,2,3,4,2,4,4,5,5,4,2,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,4,2,4,3,4,5,5,4,2,5,4,5,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,2,2,3,2}) , {9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,19,5,7,9,11,13,15,17,8,19,13}) , {0,1,5,7,9,11,15,17,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,8,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,13,4,2,5,4,5,1}) , {12,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,5,5,5,4,2,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,4,2,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,4,2,4,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,12}) , {8,1,0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,3,4,5,5,5,2,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,1,2,2,3,4,14,4,4,14,5,4,2,5,4,5,14}) , {-30,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,2,5,4,5}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,4,2,4,2,3,3,4,4,4,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,-10,4,4,5,4,2,4,4,2,2}) , {12,3,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,11,13,15,17,19,7,1,19}) , {5,12,9,11,13,15,17,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,3,3,4,2,5,5,4,6,5,5,2,5,12,1,5,2}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,5,4,4,6,5,5,2,5,12,1,5,3}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,9,11,13,15,17,19,7}) , {1,5,6,9,11,13,15,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2}) , {4,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({13,1,1,2,2,3,3,4,2,5,4,4,6,5,5,2,5}) , {13,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,2,4,4,5,5,4,2,5,4,5,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,3,2,1}) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,4,4,2,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({13,1,1,2,5,2,3,-10,4,5,4,2,4,4,2,2}) , {13,3,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,4,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,2,-30,12}) , {4,5,8,1,0,9,2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,5,4,2,5,4,2,2,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,4,2,5,4,2,12}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,15,3,3,4,4,4,5,5,5,5}) , {15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,2,3,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,18,9,10,3,12,14,16,18,19,20,18,12,7,3,14,16,10,18,19,20,7,10,20,16,18}) , {4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,4,2,4,4,5,5,4,2,5,4,2,5}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,5,2,4,5}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,5,2,4,2,4,4,5,5,4,2,5,4,2,2}) , {12,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,1}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,11,13,15,17,19,13}) , {1,3,5,7,9,11,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,11,12,13,12,14,15,16,17,13,18,19,20}) , {11,14,15,16,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,19,5,7,9,11,13,15,17,8,19,13,19}) , {0,1,5,7,9,11,15,17,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,2,2,3,2}) , {9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,4,4,5,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,15,5,2,4,2,4,4,5,5,4,2,5,4,2,2}) , {12,1,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,5,4,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,1,2,2,3,4,14,4,4,5,5,4,1,5,4,5}) , {-30,3,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,5}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,12,20}) , {8,1,0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,2,3,20,4,5,5,2,5,2}) , {12,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,11,12,13,12,14,15,16,17,13,18,19,20,13}) , {11,14,15,16,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,11,5,5,4,2,5,4,2,6,2,2}) , {12,3,11,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,5,2,4,3}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,12,8,15,17,19,7,11}) , {1,5,9,13,12,8,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,10,10,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,3,2,3,2,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,9,9,9,9,10,11,11,12,11,12,13,13,13,13,14,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,3,3,4,5,4,5,5,5,2,4,3}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,4,2,5,4,2,12,4,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,11,13,15,15,17,19,7,1}) , {5,12,9,11,13,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,3,4,4,4,5,5,6,2}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,4,7,9,11,13,15,17,19}) , {1,3,5,4,7,9,11,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,4,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,8,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,9,2,2,3,2}) , {1,9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,18,9,10,3,12,14,16,18,19,20,18,12,7,3,14,16,10,18,19,20,7,10,20,16,18,16}) , {4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,10}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,4,2,15,3,3,4,4,4,5,5,5,5}) , {15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({11,1,5,12,7,11,13,15,17,19,7,1,19,7}) , {5,12,13,15,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,3,4,12,14,16,18,19,20,18,10,7,3,14,16,10,18,19,20,7,10,20,16,18}) , {5,6,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,9,2,2,3,2}) , {1,9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,1,4,2,3,4,4,4,5,4,2,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,10,11,13,15,15,17,19,7,1}) , {5,12,9,10,11,13,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,3,4,5,5,5,2,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,4,2,4,4,5,5,4,2,5,4,2,5,5}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,2,5,4,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,13,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,5}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,9,11,13,15,17,19,7,5}) , {1,6,9,11,13,15,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,19,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,5}) , {1,2,6,7,8,10,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,12,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,3}) , {1,2,6,7,8,10,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,4,1000,7,9,11,13,15,19}) , {1,3,5,4,1000,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,10,11,11,12,3,12,13,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,5,18,4}) , {-10,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,1,2,3,3,4,2,5,4,4,16,5,5,2,5,12,5,2}) , {0,1,16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,10,15,17,19}) , {1,5,7,9,11,13,10,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,3,4,2,4,4,5,5,4,2,5,4,3}) , {12,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,18,9,11,13,15,15,17,19,7,1}) , {18,9,11,13,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,-30,1,4,-10,5,7,6,17,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18}) , {2,-30,4,-10,5,6,17,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,2,4,4,4,5,5,6,2}) , {3,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,4,4,2,4,4,5,5,4,2,5,4,2}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,1,2,2,3,4,14,4,4,14,5,4,2,5,4,5}) , {-30,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,4,4,4,5,5,11,4,2,5,4,2,5,5}) , {12,3,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,8,18}) , {4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,4,1,1,2,2,3,4,2,4,4,5,5,4,2,5,4,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,3,4,2,4,4,5,5,15,2,5,4}) , {12,6,3,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,11,13,18,15,1000,19,13,11}) , {0,1,3,5,7,9,18,15,1000,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,5,4,0,5,5,5,2}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,2,4,4,5,4,4,2,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,3,4,5,5,5,4,2,5,4,2}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,5,7,9,11,13,15,17,19,13,15,13}) , {1,5,7,9,11,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,4,2,3,4,0,2,4,4,5,5,4,2,5,4,7,5}) , {12,3,0,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,1000,4,5,5,5,5,2,5}) , {1000,4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,2,3,3,4,5,4,5,5,5,2,4,2,2}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,10,1,1,2,2,3,3,4,5,4,5,5,5}) , {10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,3,4,5,5,5,4,2,5,4,2,1}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,5,3,3,4,4,4,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,3,5,2,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,12,12,20,0}) , {8,1,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,5,3,3,4,4,-5,5,5,3}) , {-5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,2,2,3,2,2}) , {9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,2,3,3,4,4,4,5,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,-30,1,4,-10,5,7,6,17,8,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18}) , {2,-30,4,-10,5,6,17,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,0,-5,9,-5,20,20,-30,12,12,20}) , {8,0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,9,11,17,13,15,17,19,7,5}) , {1,6,9,11,13,15,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,4,2,3,4,0,4,4,5,5,4,2,5,4,7,5}) , {12,3,0,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,12,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,3,7}) , {2,6,8,10,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,12,12,1,0,-5,9,-5,20,20,-30,12,12,12,20,0}) , {1,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,5,2,4,3,2}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,2,4,4,5,5,4,2,5,4,5,4,1}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,9,11,13,15,17,7,5,1,13}) , {6,9,11,15,17,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,4,3,4,4,0,2,4,4,5,5,4,2,5,4,7,5}) , {12,3,0,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,5,2,4,2,4,4,5,5,4,2,5,4,2}) , {12,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({5,5,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,12}) , {-10,8,1,0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,13,4,5,4,5,1}) , {12,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,18,9,11,13,12,15,15,17,0,19,7,1}) , {18,9,11,13,12,17,0,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,11,13,15,15,17,19,7,1,15}) , {5,12,9,11,13,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,3,2,3,4,3,5,5,5,2,5}) , {12,4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,2,4,3,4,4,4,5,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,4,1,1,2,2,3,4,2,4,4,5,5,4,20,2,5,4,5,4}) , {12,3,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,5,4,2,5,4,2,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,10,1,1,2,2,3,3,4,5,4,5,5,5,3}) , {10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,11,13,14,1,17,19,19}) , {3,5,7,9,11,13,14,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,5,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,5,3,3,4,4,4,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,1,2,3,3,4,2,5,4,4,6,5,5,2,5,12,5,2,2}) , {0,1,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,3,3,4,2,5,4,4,6,5,5,2,5,12,1,5,2,4}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,17,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,8,10,15,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,9,2,2,3,2,2}) , {1,9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,8,10,12,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,3,7}) , {2,6,10,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,4,5,6,5}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,13,15,17,19,13}) , {1,3,5,7,9,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,1,2,3,3,4,2,5,4,4,16,5,5,2,5,12,5,2,4}) , {0,1,16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,4,2,5,4,5,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,4,3,5,1}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,5,2,3,4,2,4,4,5,5,4,2,5,4,2,1}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,20,11,13,15,17,19,13,7}) , {0,1,3,5,9,20,11,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,2,4,4,5,5,4,2,4,5,4,1}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,4,1,2,4,2,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,18,9,11,13,12,15,15,17,0,19,7,1,18}) , {9,11,13,12,17,0,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,17,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,16,4}) , {1,2,6,7,8,10,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,4,2,3,4,0,4,4,5,5,4,2,5,4,7,5,1}) , {12,3,0,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,5,5,5,4,2,5,-30,4}) , {12,3,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,5,7,9,11,13,15,17,19,8,15,13}) , {1,5,7,9,11,17,19,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,9,4,4,4,5,5,11,4,2,5,5,2,5,5}) , {12,3,9,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,5,4,6,5,5,2,5}) , {12,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({5,1,1,1,2,2,3,3,4,5,4,0,5,5,5,2}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,0,1,1,2,2,2,15,3,3,4,4,4,5,5,5}) , {0,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,19,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,5,12}) , {1,2,6,7,8,10,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,3,4,2,2,4,3,4,5,5,4,4,2,5,4,5}) , {12,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,1,11,17,-10,8,12,12,1,0,-5,9,-5,-9,20,20,-30}) , {5,11,17,8,0,9,-9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,11,13,15,15,17,19,7,1,13}) , {5,12,9,11,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,11,13,15,1,17,19,19}) , {3,5,7,9,11,13,15,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,11,12,13,12,14,15,16,17,13,18,19,20,13,2}) , {11,14,15,16,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,4,5,4,2,5,4,5,1}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,5,2,4,5,5,5,4,2,5,-30,4}) , {12,3,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,4,2,4,2,10,3,3,4,4,4,5}) , {10,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,4,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,-5,3,4,4,5,5,5}) , {-5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,3,2,3,4,2,4,3,4,4,5,4,2,5,4,5,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,1,0,-5,9,-5,21,20,-30,12,12}) , {8,1,0,9,21,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,2,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,8,18}) , {4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,3,7,8,9,10,1,2,3,4,5,6,7,8,9,10,11,12,13,12,14,15,16,17,13,18,19,20,13,2}) , {6,11,14,15,16,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,20,11,13,15,17,19,-9,13,7}) , {0,1,3,5,9,20,11,15,17,19,-9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,4,3,5,4,4,0,2,4,4,5,5,4,2,5,4,7,5}) , {12,3,0,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,16,3,4,2,4,4,5,5,10,15,2,5,4,4}) , {12,6,16,3,10,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,5,2,3,3,2,3,4,3,5,5,2,5,5}) , {12,4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,12,12,1,0,-5,9,5,20,20,-30,12,12,12,20,0}) , {1,-5,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,13,4,5,4,5,1,1}) , {12,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,11,13,15,15,17,19,7,1,13,13}) , {5,12,9,11,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,15,4,2,4,4,5,5,4,2,5,14,2,5,5}) , {12,3,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,2,4,4,5,5,4,4,5,4,1}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,15,4,2,4,4,5,5,4,2,5,14,2,5,5,5,5}) , {12,3,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,19}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,11,2,2,3,3,1000,4,5,4,5,5,5,2,5}) , {11,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,4,2,4,3,4,5,5,4,4,2,4,5}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,11,10,18,15,1000,19,13,11}) , {0,1,3,5,7,9,10,18,15,1000,19,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,11,17,13,-9,18,19,7,5}) , {1,6,11,17,13,-9,18,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,19}) , {2,4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,9,9,9,9,10,11,11,12,11,12,13,13,13,13,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,10,14,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,3,2,2,3,2,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,15,2,2,3,3,4,5,4,5,5,5,2,5,3}) , {15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,0,-5,9,20,20,-30,12,12,20}) , {8,0,-5,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,2,4,4,5,4,4,2,4,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,4,4,5,4,5,-10,5,5,2,5}) , {3,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,5,4,5,5,5,2,5,4,4,1}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,4,2,5,4,5,2}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,11,17,13,-9,18,19,-5,-30,7,5}) , {1,6,11,17,13,-9,18,19,-5,-30,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,6,2,2,3,3,4,4,5,6,2}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,8,12,12,1,0,20,-5,9,-5,20,20,-30,11,12,20}) , {8,1,0,9,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,4,1,2,4,2,3,3,4,4,0,4,5,5,5}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,4,2,4,3,4,5,6,4,4,4,5}) , {12,3,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,5,5,5,3,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,4,4,5,5,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,5,4,2,5,5,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,12,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,3,7}) , {2,6,8,10,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,2,4,3,4,4,4,5,5,5,3,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,11,21,18,15,1000,19,13,11}) , {0,1,3,5,7,9,21,18,15,1000,19,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,12,8,15,18,19,7,11}) , {1,5,9,13,12,8,15,18,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,13,4,5,5,1,1}) , {12,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,2,3,3,4,4,4,4,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,5,4,5,5,5,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,3,3,4,4,4,5,5,5}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,1,3,2,1,4,5,7,6,7,18,9,10,3,12,14,16,18,19,20,18,12,7,3,14,16,10,18,19,20,7,10,20,16,18,16}) , {2,4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,3,4,2,5,4,5,5,5,2,7,5,4,4,1}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,4,4,3,4,5,13,4,2,5,4,5,1}) , {13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,15,4,2,3,4,5,5,4,2,5,2,5,5,5,5,2}) , {12,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,18,9,10,3,12,14,16,18,19,20,18,12,7,3,14,16,10,18,19,20,7,10,20,16,1,18,16,16}) , {4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,4,5,4,5,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,9,11,13,15,15,17,19,7,1}) , {9,11,13,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,12,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,3,7}) , {6,8,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,3,4,2,4,4,5,5,15,2,5,4,12,12}) , {6,3,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,2,5,999,4,5,4}) , {12,3,999}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({5,5,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,0,12}) , {-10,8,1,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,2,3,4,2,4,3,4,5,5,4,5,4,5}) , {12,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,14,5,7,9,11,10,18,15,1000,19,13,11}) , {0,1,14,5,7,9,10,18,15,1000,19,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,7,9,20,11,13,15,17,19,-9,13,7}) , {0,1,3,9,20,11,15,17,19,-9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,2,4,4,5,4,4,2,4,5,4,2,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,1,2,2,3,4,14,4,4,14,5,4,2,5,4,5,14,14}) , {-30,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,14,6,7,8,9,9,9,9,10,11,11,9,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,8,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,1,2,3,3,4,2,4,4,6,4,5,2,5,12,2}) , {0,1,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,11,13,18,15,1000,19,13,11,13}) , {0,1,3,5,7,9,18,15,1000,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,9,1,11,13,15,17,19,7,5}) , {6,9,11,13,15,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,4,7,9,11,13,15,17,19,5,1}) , {3,4,7,9,11,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,18,9,10,3,12,14,16,18,19,20,18,12,7,14,16,10,18,19,20,7,10,20,16,1,18,16,16}) , {4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,4,4,2,4,5}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,4,2,4,5,2}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,3,4,14,2,4,4,5,5,15,2,5,4,12,12}) , {6,3,14,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,18,4}) , {-10,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,2,4,4,8,5,5,6,2}) , {3,8,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,6,13,4,2,5,4,5,4}) , {12,6,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,5,-10,12,13,1,0,-5,9,5,20,20,-30,12,12,12,20,0}) , {13,1,-5,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,0,1,3,5,7,9,20,11,13,15,17,19,13,7}) , {0,1,3,5,9,20,11,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,8,5,7,9,11,8,13,15,17,19,7,11}) , {1,5,9,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,3,3,4,4,19,4,5,5}) , {2,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,2,4,4,5,4,4,5,4,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,14,6,7,8,9,14,9,9,9,10,11,11,9,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,8,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,-30,1,4,-10,5,7,6,17,8,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,3}) , {2,-30,4,-10,5,6,17,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({17,-10,1,1,2,2,3,3,4,5,4,5,5,5,2,4,5,5,5}) , {17,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,4,2,4,2,10,3,4,4,4,4,5}) , {10,3,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,1,2,3,4,2,4,4,5,5,4,2,5,4,7,5,4}) , {12,3,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({5,5,-30,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,12,0}) , {-10,8,1,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,2,4,3,2}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,0,3,4,5,5,5,2,5}) , {12,0,4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,2,4,3,2,2}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,9,9,9,9,10,11,9,11,12,11,12,13,13,13,13,14,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,20,11,13,15,17,19,13,13}) , {0,1,3,5,7,9,20,11,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,5,4,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,16}) , {1,2,6,7,8,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,-1,2,2,3,3,4,5,4,0,5,5,5,2}) , {-1,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({9,10,10,10,10,10,10,10}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,2,2,3,2,2}) , {1,9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,1,2,2,3,4,2,4,4,5,5,4,2,5}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,4,1,1,2,2,3,4,2,4,4,5,5,4,2,5,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,4,1000,3,7,9,11,13,15,19}) , {1,5,4,1000,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,10,10,10,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,18,9,10,3,12,14,16,18,19,20,18,12,7,16,10,18,19,20,7,10,20,16,1,18,16,16}) , {4,5,6,9,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,3,4,2,4,4,5,5,15,2,5,4,12,12,4}) , {6,3,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,2,3,4,5,4,5,5,5,2,4,2}) , {-10,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,4,1,2,4,2,3,3,4,4,4,0,4,5,5,5}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,3,4,4,4,5,5,6,2,2}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,5,5,3,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,1,2,3,3,4,1,5,4,4,16,5,5,2,5,12,5,2,4}) , {0,16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,4,4,4,3,5,2,5,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,-10,1,1,2,2,2,3,3,4,5,4,5,5,5,2,4,2,2}) , {-30,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,5,18,4,4}) , {-10,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,-5,4,4,5,5,5}) , {-5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,1,4,5,7,6,7,8,18,10,9,10,3,12,14,16,18,19,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,19,3}) , {2,4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,4,5,5,16,3,5,3}) , {16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,-30,1,4,-10,5,6,17,8,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18}) , {2,-30,4,-10,5,6,17,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,2,3,4,2,4,4,5,5,4,2,5,4,5}) , {12,1,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,1,4,1,2,4,2,3,3,4,4,0,4,5,5,5,2,4}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,4,2,4,3,4,5,5,4,2,5,4,5,2,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,10,10,10,10,10,10}) , {-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({17,1,5,7,9,11,13,15,17,19,7,9}) , {1,5,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,3,4,2,5,4,5,5,5,2,7,5,4,4,1,1}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,11,-1,10,10,10}) , {11,-1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,12,8,15,17,19,7,11,8}) , {1,5,9,13,12,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,4,2,20,4,5,5}) , {12,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,3,3,4,2,5,5,6,5,5,2,5,12,1,5,2}) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,17,9,9,9,10,11,11,12,12,12,13,13,13,14,14,15,16,17,18,18,19,16,4}) , {1,2,6,7,8,10,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,3,2,3,2,1,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,19,20,7,10,20,16,18}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,5,2,3,4,2,4,4,5,5,4,1,2,5,4,2,2,2}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,20,4,5,7,6,7,8,18,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,8,18}) , {4,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,12,2,2,4,3,4,4,4,5,1,4,5,3,4}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,3,2,4,4,5,5,6,2}) , {3,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({5,0,1,3,5,7,9,11,1,15,17,19,13}) , {0,3,7,9,11,15,17,19,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,6,2,3,4,14,4,4,5,5,15,2,5,4,12,12,4}) , {6,3,14,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,4,5,5,16,3,5,3,4}) , {16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,2,1,5,4,5,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,2,5,999,4,4,4}) , {12,3,999}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,6,4,2,4,4,5,5,4,5,4,2}) , {12,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,4,-9,2,4,2,3,3,4,4,4,0,4,5,4,5}) , {-9,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,11,13,15,17,19,13,19}) , {1,3,5,7,9,11,15,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,12,12,1,-5,-31,9,-5,20,20,-30}) , {2,1,-31,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,-30,-10,8,12,12,1,0,0,-5,9,-5,20,20,-30,12,12,12}) , {5,8,1,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,4,1000,7,9,11,13,15,19}) , {3,5,4,1000,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,1,1,2,2,3,4,14,4,999,14,5,4,2,5,4,5,14}) , {-30,3,999}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,1,4,2,3,4,4,4,5,4,2,5,4,2,5}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,-31,1,1}) , {-31}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,999,4,2,4,3,4,5,4,4,0,4,-10}) , {12,999,5,0,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,4,4,3,4,5,13,5,4,4,2,4,5}) , {12,3,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,10,5,5,6,7,8,3,9,9,9,10,11,11,11,12,12,12,13,13,13,14,14,15,16,17,18,18,19,16,4,12}) , {1,2,6,7,8,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,999,5,18,4,4,1}) , {-10,999,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,4,2,3,4,0,4,4,5,4,2,5,4,7,5,1}) , {12,3,0,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,6}) , {1,2,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,2,5,999,9,4,4}) , {12,3,999,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({13,1,2,2,4,3,5,4,4,0,2,4,4,5,5,4,2,5,4,7,5}) , {13,1,3,0,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,1000,4,4,5,5,3,4}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,9,11,13,15,15,8,17,19,7,1,13}) , {5,12,9,11,8,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,3,4,2,5,4,4,6,5,5,3,2,5,12,1,5,2}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,1,2,3,3,2,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,9,4,4,4,4,5,5,11,4,2,5,5,2,5,5}) , {12,3,9,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,2,1,1,2,2,4,2,4,3,4,5,5,4,2,5,4,5,2,4}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,13,3,2,1}) , {13,3,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,6,2,3,4,2,4,4,5,5,15,2,5,4,12,12,4}) , {6,3,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,2,3,4,2,4,4,5,5,4,2,1,5,4,5}) , {12,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,4,-9,2,4,2,3,3,4,4,4,0,4,5,4,1,5}) , {-9,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,5,2,3,3,2,3,4,3,5,5,2,5,15,5}) , {12,4,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,2,5,0,2,3,4,4,4,5,5,5,11,4,2,5,4,1,5,5,5}) , {12,3,11,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,1,3,2,1,4,5,7,6,7,18,9,10,3,-31,14,16,18,19,20,18,12,7,3,14,16,10,18,19,20,7,10,20,16,18,16}) , {2,4,5,6,9,-31,12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,8,2,2,2,2,1}) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,18,9,11,13,12,15,17,0,19,7,1,18}) , {9,11,13,12,15,17,0,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,4,2,3,4,0,2,4,5,5,4,2,5,4,8,5,4}) , {12,3,0,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,7,9,11,13,10,15,16,19}) , {1,5,7,9,11,13,10,15,16,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,14,14,15,16,17,18,18,19,20,16,9}) , {1,2,6,7,8,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,9,2,2,3,2,2,2}) , {1,9,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,2,3,3,5,4,5,5,5,2,4,2,2}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,19,5,7,9,11,13,15,17,8,6,0,19,13}) , {1,5,7,9,11,15,17,8,6,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,2,2,3,3,4,2,5,5,4,6,5,5,2,5,12,1,5,2,4}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,12,11,13,15,15,17,19,7,1,13,13}) , {5,12,11,17,19,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,13,12,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,3}) , {1,2,6,7,8,10,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,4,4,4,3,5,2,5,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,1,20,4,5,7,6,7,8,18,9,10,3,12,14,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,-10,16,8,18}) , {2,4,5,6,9,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,-5,3,4,4,5,5,5,1}) , {-5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,1000,4,5,4,5,5,5,2,5}) , {3,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,6,16,3,4,2,4,4,5,5,10,15,2,5,4,4}) , {1,6,16,3,10,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,-5,5,5,2,4,5}) , {-10,-5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,3,7,8,9,10,1,2,3,4,5,6,7,8,9,10,11,12,13,12,14,15,16,17,13,18,19,13,2}) , {6,11,14,15,16,17,18,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,5,4,5,6,5,2,4,3}) , {-10,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,7,2,2,3,3,4,2,5,4,4,6,5,5,2,5,12,1,5,3}) , {7,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,5,6,9,11,13,9,17,7,5,1,13}) , {6,11,17,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,3,3,4,2,5,4,5,5,18,4}) , {-10,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,4,1,1,2,3,3,4,19,4,5,5}) , {2,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,4,2,4,3,4,6,5,4,9,2,5,4,5,2}) , {12,3,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,-6,5,5,-10,8,12,12,0,-5,9,-5,20,20,20,12,12,20}) , {-6,8,0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,20,4,5,7,6,7,8,18,9,10,3,15,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,8,18,19}) , {4,5,6,9,15,12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,0,1,2,3,3,4,1,5,4,4,16,5,5,2,5,12,5,2,4,2}) , {0,16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,4,7,9,11,13,11,15,17,19,5,1}) , {3,4,7,9,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,3,4,4,4,5,5,16,3,5,3}) , {16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,15,5,2,9,2,4,4,5,5,4,2,5,4,2,2}) , {12,1,15,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,2,3,3,3,1000,4,4,5,5,3,4,5}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,1,4,5,7,6,7,8,18,10,9,10,3,12,14,16,18,19,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,19,999}) , {2,4,5,6,8,9,999}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,2,3,3,4,5,4,5,5,5,2,4,2,2,5}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,2,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,3,3,5,4,5,5,5,3}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,3,4,2,4,3,4,6,5,4,9,2,5,4,5,2,2}) , {12,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,4,1,1,2,3,3,4,19,4,5,5,5,1}) , {2,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-10,1,1,2,2,4,4,2,5,4,5,5,18,4,4}) , {-10,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-30,10,10,10,10,10}) , {-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,3,1,2,5,2,3,-10,4,4,5,4,2,4,4,2,2}) , {12,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({12,1,1,2,2,3,4,2,4,3,4,5,5,4,4,2,20,4,5,5,20}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,4,4,1000,3,7,9,11,13,15,19,3}) , {1,5,1000,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,11,1000,13,10,1000,19,13,1000}) , {0,1,3,5,7,9,11,10,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,8,1,1,2,2,2,3,3,4,4,4,3,5,1}) , {8,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,21,18,15,19,13,11}) , {0,1,3,5,7,9,21,18,15,19,13,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,6,11,3,5,2,4,4,5,5,15,2,5,4,12,12,4}) , {6,11,3,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,3,2,3,2,1,1,2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,1,3,5,7,9,20,11,13,15,17,19,-9,13,7,11}) , {0,1,3,5,9,20,15,17,19,-9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,4,3,5,5,6,6,7,8,8,8,9,9,9,9}) , {1,4,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-1,-2,3,4,-1,0,-2}) , {3,4,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,-1,0,1,-1,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,0,0,0,0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,2,1,4,4,4,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,9,9,10,11,10}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12}) , {2,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,7,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3}) , {7,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,8,11,13,15,1000,13}) , {1,3,5,7,8,11,15,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,1000,18,18,19,20}) , {1,2,6,7,8,10,15,16,1000,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,18}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,1000,18,18,19,20,11}) , {1,2,6,7,8,10,15,16,1000,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,3,2,2,2,1}) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,10,10,10,10,10}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,13,15,17,19}) , {1,3,5,7,9,13,15,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,9,9,10,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,1}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,10,10,10,9}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,3,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,10,10}) , {11,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,11,13,15,18,19,18}) , {1,3,5,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,2,3,3,3,4,4,4,5,5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,12,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,10,8,10,10,5,10}) , {0,9,8,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,10,8,10,10,5,10,10}) , {0,9,8,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12}) , {6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,0,12}) , {1,2,6,7,8,10,15,16,17,19,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,-10}) , {2,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,7,8,11,13,15,1000,13}) , {1,3,7,8,11,15,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,5,7,9,11,13,15,17,19,19}) , {1,2,5,7,9,11,13,15,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,10,11}) , {13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,20}) , {1,2,6,7,8,11,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,3,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,-10,2}) , {3,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1000,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,1,2}) , {1000,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,10,10}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,0,1}) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11}) , {6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11}) , {6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,9,2,3,3,3,4,4,4,5,5,5}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,18,7,9,11,13,15,18,19,18}) , {1,3,5,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,3,4,5,7,6,7,8,9,10,3,12,15,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12}) , {4,5,6,8,9,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,6}) , {4,5,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,-5,0,-5,9,-5,20,20,7,12}) , {2,8,1,0,9,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,3,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,2}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1000,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,3,2,2,1,2,2}) , {1000,0,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,18,15,16,17,18,18,19,20,12}) , {6,7,8,10,14,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,-5,11,8,10,10,5,10,10,10}) , {0,9,-5,11,8,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,10,10,10,10}) , {0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,18,1}) , {18,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,-5,7,9,11,13,15,18,19,18}) , {1,3,5,-5,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,19,20}) , {1,2,6,7,8,10,15,16,1000,18,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,10}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,13,10,10,10,11,13}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({20,10,10}) , {20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,7,8,9,10,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12}) , {4,5,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,10,11,10}) , {13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,9,10,6,10,10}) , {0,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,4,3,2,2,2,1}) , {4,3,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,11,10,11,10}) , {13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,11,10,10,10}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,11,13,15,18,19,18}) , {3,5,-5,7,9,0,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,10,10,10,9,9,10,11,10}) , {7,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,3,2}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,9,9,11,10,10}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,10,8,10,10,17,0,10,10}) , {9,8,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,9,10,10,10}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,10,10,11,12,12,12,10,13,13,13,13,14,14,15,16,17,18,18,20}) , {1,2,6,7,8,11,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,10,1,2,3,16,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,3}) , {11,12,13,14,15,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,10,10,10,10,10}) , {0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,10,10,10,10,15,10,10}) , {0,9,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,3,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,18,16,17,18,18,19,20}) , {4,6,7,8,10,14,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,9,2,3,3,3,3,3,4,4,5,5,5}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,9,13,10,10,10,11,13}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,10,4,3,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,18,16,17,18,18,19,20}) , {4,6,7,8,14,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,3,2,2,2,3,3,-10,4,4,4,5,5,5}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,8,11,13,13}) , {1,3,5,7,8,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,9,10,10,10,10,9}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,9,10,10,10,10,9,10}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,18,7,9,11,13,15,18,19,16,18}) , {1,3,5,7,9,11,13,15,19,16}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,13,10}) , {13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,1,2}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,18,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,18}) , {1,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,-5,11,8,10,10,5,10,10,10,10}) , {0,9,-5,11,8,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,9}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,9,10,10,10,10,15,10,10}) , {0,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,7,8,11,13,15,1000,10,13}) , {1,3,7,8,11,15,1000,10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,-10}) , {2,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,1001,-10,8,12,12,1,0,-5,9,-5,20,20,-30,-10}) , {2,1001,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1000,10,10,10,10,9,9,11,10,10,11,10}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,20,20}) , {1,2,6,7,8,10,15,16,1000,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,19,20,15}) , {1,2,6,7,8,10,16,1000,18,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,18,11,12,12,12,13,13,13,14,14,15,16,17,18,19,20,18}) , {1,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,-30,10,9,10,8,10,10,17,0,10,10}) , {-30,9,8,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,9,9,11,10,11,10,11}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,13,15,16,5,19}) , {1,3,7,9,13,15,16,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,9,10,9,8,10,10,5,10,10,5}) , {0,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,9,10,10,10,10,15,10,10,10}) , {0,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,5,13,7,9,11,13,15,17,19,19,13}) , {1,2,5,7,9,11,15,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,4,3,4,2,2,2,1}) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,10,8,10,10,17,0,10,10,10}) , {9,8,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,7,8,11,13,10,15,1000,10,13,10,13}) , {1,3,7,8,11,15,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({14,10,11,10,10}) , {14,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,9,10,10,10,10,10,10,10}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1000,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,2,2,2,2,2,3,2,2,1,2}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,20,20,10}) , {1,2,6,7,8,15,16,1000,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20}) , {6,11,12,13,14,15,16,17,18,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,11,10,9,9,10,6,10,10}) , {0,11,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,9,10,11,10,10}) , {13,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,11,10,9,9,10,6,10,10,0}) , {11,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,3,2,2,2,3,-10,4,4,4,5,5,5}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,18,6,12,12,12,13,13,13,14,14,15,16,17,18,19,20,18}) , {1,7,8,10,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,-5,7,9,11,13,15,18,18}) , {1,3,5,-5,7,9,11,13,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,13,15,16,-30,5,19}) , {1,3,7,9,13,15,16,-30,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,16,1,3,4,5,7,6,7,8,9,10,3,12,15,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,19,10,20,18,12}) , {2,4,5,6,8,9,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12}) , {1,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,9,2,3,3,3,3,3,4,4,5,5,5,3,2}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,7,8,11,15,1000,13}) , {1,3,7,8,11,15,1000,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,8,10,13,15,1000,13}) , {1,3,5,7,8,10,15,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,11,10,10,11,10,11,10,10}) , {13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,8,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,3,15,16,17,18,18,19,20,9}) , {1,2,6,7,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1000,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,2,2,2,2,2,3,2,2,1,2,2}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,12,14,16,18,19,20,18,10,12,7,3,14,16,18,19,20,7,10,20,16,18,12}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,-10,10,10,10,9}) , {0,-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,11,4,4,5,5,5,5,6,7,8,9,9,9,9,10,10,11,12,12,12,13,14,13,13,14,14,15,16,17,18,18,20}) , {1,2,6,7,8,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({18,-10,5,2,7,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,1000,-10}) , {18,2,7,8,1,0,9,-30,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,10,-30,12,-10,0}) , {2,8,1,9,20,10,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,6,2,2,2,3,3,3,4,4,4,5,5,5}) , {1,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,10,10,10,10,10,10}) , {0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,12,11,13,15,18,19,18}) , {1,3,5,7,12,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,18,6,12,12,12,13,13,13,14,15,16,17,18,19,20,18,13}) , {1,7,8,10,11,14,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,10,10,10,10,10,9}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,11,-30,13,15,18,19,18,9}) , {3,5,-5,7,0,11,-30,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,9,9,10,10,10,10,15,10,10,10}) , {0,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,7,5,-10,8,12,12,1,0,-5,9,-5,0,20,20,-30,1000,-10}) , {2,7,8,1,9,-30,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,20,11,13,15,18,19,0,18,18}) , {3,5,-5,7,9,20,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,3,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,2,7}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,6,2,-5,3,16,1,3,4,5,7,6,7,8,9,10,3,12,15,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,19,10,20,18,12,16,18}) , {2,-5,4,5,8,9,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,9,6,2,2,2,3,3,3,4,4,4,5,5,5,1}) , {9,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,12,14,16,18,19,20,18,10,12,7,3,14,16,18,19,20,7,10,20,16,18,12,12}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1000,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,1,2,2}) , {1000,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,13,15,16,-30,5,6}) , {1,3,7,9,13,15,16,-30,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,16,1,3,4,5,7,6,7,8,9,10,3,12,15,9,16,18,19,20,18,10,12,7,14,16,10,18,19,3,20,7,19,10,20,18,12}) , {2,4,5,6,8,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,19,5,7,9,11,13,15,-5,19,19}) , {1,2,5,7,9,11,13,15,-5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,18,7,9,11,13,15,18,19,18,18}) , {1,3,5,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,8,9,10,10,10,10,15,10,10,10}) , {0,8,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,1}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,6,2,2,2,3,3,3,4,4,9,5,5,5}) , {1,6,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,4,7,1001,13,15,16,-30,5,19}) , {1,3,4,7,1001,13,15,16,-30,5,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,20,15}) , {1,2,6,7,8,10,16,1000,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,13,10,10,10,11,13,13}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,15,16,17,18,18,19,20}) , {1,6,7,8,10,14,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,3,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,2,3}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,10,10,10}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,1,11,10,11,10,10}) , {13,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,10,10,10}) , {11,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,13,9,13,15,16,-30,5,6}) , {1,3,7,9,15,16,-30,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,10,10,10,9,9,10,11,10,9}) , {7,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,-30,11,10,9,10,8,10,10,17,0,10,10}) , {-30,11,9,8,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,10,10,10,10,10,10}) , {0,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,6,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,20}) , {1,2,7,8,11,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,8,9,10,15,10,10,10,15,10,10,10}) , {0,8}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1000,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,2,2,2,2,2,3,2,2,1,2}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({8,1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,18,6,12,12,12,13,13,13,14,14,15,16,17,18,19,20,18}) , {1,7,10,11,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,3,5,-10,8,12,12,1,-5,9,-5,19,20,-30,12,-10,2}) , {3,8,1,9,19,20,-30,2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,6,10}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,1001,-10,8,12,12,1,0,-5,9,-5,20,-30,-10}) , {2,1001,8,1,0,9,20,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,5,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,2,2}) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,-4,14,-30,12,-10}) , {2,8,1,0,9,20,-4,14,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,1,4,5,7,6,7,8,9,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,6}) , {2,4,5,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,20,20,10,4}) , {1,2,6,7,8,15,16,1000,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({5,2,5,-10,8,12,12,1,0,-5,-5,20,20,-30}) , {2,-10,8,1,0,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,9,2,3,3,3,3,3,4,4,5,5,5,3,2,3,1}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,13,15,16,-30,5,19}) , {1,3,7,13,15,16,-30,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,10,1,2,3,16,5,5,6,7,8,10,11,12,13,14,15,16,17,18,19,20,3}) , {4,9,11,12,13,14,15,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,-4,2,2,2,3,3,3,4,4,4,5,5,5,5}) , {-4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,13,10,10,10,11,9,13}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,6,2,2,2,3,3,3,4,4,4,5,5,5,1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,16,1,3,4,5,7,6,7,8,9,10,3,12,15,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,19,10,20,18,12,3}) , {2,4,5,6,8,9,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,9,9,10,10,10,10,15,10,10}) , {0,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,11,10,12,10}) , {11,12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,6,11,-30,13,15,18,19,18,9}) , {3,5,-5,7,0,6,11,-30,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,19,20,15}) , {1,2,6,7,8,10,16,1000,18,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({999,5,3,5,-10,8,12,12,1,-5,9,-5,19,20,-30,12,-10,2}) , {999,3,8,1,9,19,20,-30,2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,18,7,9,11,11,13,15,18,19,18,18}) , {1,3,5,7,9,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,9,8,11,10,10}) , {9,8,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,20,11,13,16,18,19,0,15,18}) , {3,5,-5,7,9,20,11,13,16,19,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,18,3,2,1,4,5,7,7,8,9,10,12,14,16,18,19,20,18,10,12,3,14,16,10,18,20,7,10,20,16,18,12}) , {2,4,5,8,9,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,1000,18,18,19,20,11,18}) , {1,2,6,7,8,10,15,16,1000,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,20,5}) , {1,2,6,7,8,11,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,9,9,10,11,10,11}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,15,16,17,18,18,19,0,12}) , {1,6,7,8,10,14,15,16,17,19,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,6}) , {7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,6,20,-30,12,-10}) , {2,8,1,0,9,6,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,8,5,10,6,6}) , {7,8,5,10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,19,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,1000,18,18,19,20}) , {1,2,6,7,8,10,15,16,1000,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,6,11,-30,13,15,18,19,18,9,13,0}) , {3,5,-5,7,6,11,-30,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({11,10,3,7,8,11,13,10,15,1000,10,13,10,13}) , {3,7,8,15,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,-4,2,2,2,2,1,2,2,2,2,2,2,3,2}) , {-4,1,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,2,2}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,9,6,2,2,2,3,3,3,4,4,5,5,5,1,9}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,7,5,-10,8,12,12,1,0,-5,9,-5,0,20,20,-30,14,-10,11,-10}) , {2,7,8,1,9,-30,14,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,14,2,2,2,2}) , {14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,10,0,10,9,9,10,10,10,10,9,10}) , {3,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,10,10,10,9,9,10,11,10,9,10,9}) , {7,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,2,2,2,2,2,2,-30,2,2,2,2,2,2,2,2,2,2,2,3,2,2}) , {1,-30,3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,10,10,10,9,9,10,11,10,9,10,9,10}) , {7,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,-30,10,9,10,8,10,10,17,0,10,10,10}) , {-30,9,8,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,-4,6,10,10}) , {-4,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,4,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,18,11,12,12,13,13,13,13,14,14,15,16,17,18,19,20,18,1}) , {6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,5,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,2,2,3}) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11,4}) , {6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,8,13,10,13,15,1000,13}) , {1,3,5,7,8,10,15,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,0,10,11}) , {13,0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,13,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,9,2,3,3,3,3,3,4,4,5,5,5,3,2,3}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11,4,8}) , {6,7,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11,19}) , {6,7,8,10,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,12,11,13,15,18,19,18,18}) , {1,3,5,7,12,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,1,4,5,7,6,7,8,9,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,6,12}) , {2,4,5,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,3,4,6,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,2,7}) , {4,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,12,14,16,18,19,20,18,10,12,7,3,14,16,18,19,20,7,10,20,16,18,12,12,20}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,10,9,9,10,10}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,10,3,12,14,16,18,19,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,11,10,12,10,10,12,11}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,3,4,5,7,6,7,8,9,10,3,12,14,16,18,19,20,18,10,1000,7,3,14,16,10,18,19,20,7,10,20,16,18,12}) , {4,5,6,8,9,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,13,9,13,15,16,-30,5,6,5}) , {1,3,7,9,15,16,-30,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,10,10,11,12,12,12,10,13,13,13,13,14,14,15,16,17,18,18,20,13}) , {1,2,6,7,8,11,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,1,-4,2,2,2,3,3,3,4,4,4,5,5,5,5}) , {-4}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,6,11,-30,8,13,15,18,19,18,9}) , {3,5,-5,7,0,6,11,-30,8,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,6,10}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,-5,0,-5,9,-5,20,20,7,12,-10}) , {2,8,1,0,9,7}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,19,9,9,9,9,10,11,11,12,12,12,13,12,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,5,999,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,2,2,3}) , {1,5,999}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({999,5,3,5,-10,8,12,12,1,-5,5,-5,19,20,-30,12,-10,2}) , {999,3,8,1,19,20,-30,2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,13,18,6,12,12,12,13,13,13,14,15,16,17,18,19,20,18,13}) , {1,7,8,10,11,14,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,9,9,10,10,10,10,10,10}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,1000,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,2,2,2,1,2,2,3,2,2,1,2,2,3}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,11,10,9,9,10,1001,10,10}) , {0,11,1001}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,8,5,10,6}) , {7,8,5,10,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,-5,7,9,11,13,15,18,19,18,13}) , {1,3,5,-5,7,9,11,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,18,6,12,12,12,13,13,13,14,15,16,17,18,19,20,18,13,5}) , {1,7,8,10,11,14,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,1001,-10,8,12,12,1,0,-5,9,-5,20,20,-30,-10,8}) , {2,1001,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,10,10,10,9,9,9,10,11,10,9}) , {7,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,18,7,9,11,11,13,15,18,19,20,18,18,1}) , {3,5,7,9,13,15,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,1,4,5,7,6,7,8,9,12,14,16,18,19,20,10,12,7,3,14,16,10,18,19,20,7,6,10,20,16,18,12,6,12,20,7}) , {2,4,5,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,-5,7,9,3,11,13,15,18,18,18,18}) , {1,5,-5,7,9,11,13,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,6,7,8,11,13,13}) , {1,3,6,7,8,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,11,9,9,10,11,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,10,13,10,10,10,11,10,13}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,19,5,7,9,11,13,15,-5,19,19,13}) , {1,2,5,7,9,11,15,-5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({999,5,3,5,-10,8,12,12,1,-5,5,-5,19,-6,20,-30,12,-10,2}) , {999,3,8,1,19,-6,20,-30,2}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,5,13,7,9,11,13,15,17,19,19,13,11}) , {1,2,5,7,9,15,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,1,4,5,7,6,7,8,9,12,14,16,18,19,20,18,10,12,7,3,14,16,10,18,19,20,7,10,20,16,18,12,6,10,10}) , {4,5,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,9,9,11,10,11,10,11}) , {}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,13,15,16,-30,5,6,9,6}) , {1,3,7,13,15,16,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,13,15,16,-30,5,20}) , {1,3,7,13,15,16,-30,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,6,20,-30,12,-10,5}) , {2,8,1,0,9,6,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,8,11,13,13,13}) , {1,3,5,7,8,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,2,2,4,5,7,6,7,8,9,10,12,14,16,18,19,20,18,10,1,7,3,14,16,18,19,20,7,10,20,16,18,12,12}) , {4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,0,20,11,13,15,18,19,0,18,18,13}) , {3,5,-5,7,9,20,11,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-11,5,2,5,-10,8,12,12,1,0,0,-5,20,20,9,-30,12}) , {-11,2,-10,8,1,-5,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,4,3,4,2,2,2,1,2}) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,9,9,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11,4,8}) , {6,7,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,16,1,3,4,5,7,6,7,8,9,10,3,12,15,16,18,19,20,18,10,12,7,14,16,10,18,19,20,7,19,10,20,18,12}) , {2,4,5,6,8,9,15,14}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,16,4,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,18,1,4,5,7,6,7,8,9,10,12,14,16,18,19,20,18,10,12,7,3,1001,18,16,18,19,20,7,10,20,16,18,12,12}) , {2,4,5,6,8,9,14,1001}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,11,18,6,12,12,12,13,13,13,16,14,15,16,17,18,19,20,18,13,12}) , {1,7,8,10,11,14,15,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,11,11,10,12,10}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,10,8,4,10,10,5,10,10}) , {0,9,8,4,5}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,7,8,11,13,10,15,1000,10,13,10,13,1}) , {3,7,8,11,15,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,21,0,20,11,13,15,18,19,0,18,18,13}) , {3,5,-5,7,9,21,20,11,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,5,13,7,9,11,13,17,19,19,13}) , {1,2,5,7,9,11,17}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,6,7,8,9,9,1001,9,9,10,11,19,6,12,12,12,13,13,13,16,14,15,16,17,18,19,20,18,13,12}) , {1,7,8,1001,10,11,14,15,17,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,6,13,12,12,1,0,-5,9,-5,20,20,-30}) , {2,8,6,13,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,12,11,13,15,19,18,5}) , {1,3,7,12,11,13,15,19,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,1,4,5,7,6,7,8,9,12,14,16,18,19,20,18,10,12,7,3,14,16,8,10,18,19,20,7,10,20,16,18,12,6}) , {2,4,5,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,18,7,9,11,13,15,18,19,18,15}) , {1,3,5,7,9,11,13,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,11,13,19,15,18,19,18}) , {1,3,5,7,9,11,13,15}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,16,4,5,15,5,5,6,7,8,9,9,9,9,10,11,17,11,12,12,13,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,9,9,11,10,10,9}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,4,5,6,7,8,9,9,10,1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) , {6,11,12,13,14,15,16,17,18,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,10,10,10,9,9,10,11,10,9,10,10,9,10,10}) , {7,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,7,7,8,9,9,9,9,10,11,18,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,18}) , {1,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,1001,-10,8,12,12,1,0,9,-5,20,20,-30,-10}) , {2,1001,8,1,0,9,-5,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({3,5,-5,7,9,21,0,20,11,13,15,18,19,0,11,18,18,13}) , {3,5,-5,7,9,21,20,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,13,3,5,7,8,11,13,13,13,5,5}) , {1,3,7,8,11}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,19,3,3,3,4,4,21,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,1000,18,18,19,20}) , {1,2,21,6,7,8,10,15,16,1000,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,10,9,-10,10,10,19,10,9,-10}) , {0,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,6,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12}) , {1,2,6,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,17,5,-5,7,9,11,13,15,18,19,18}) , {1,17,5,-5,7,9,11,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,13,999,10}) , {13,999}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({0,10,-6,11,10,13,10,10,0,10,11}) , {-6,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,10,9,10}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,9,6,2,2,2,3,3,3,4,4,5,5,5,1,9,5,5}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,12,13,13,14,14,15,16,17,18,18,19,20,12,20}) , {1,2,6,7,8,10,15,16,17,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,0,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,14,14,15,16,17,18,18,19,20,12}) , {1,2,0,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,1001,-10,8,12,12,1,0,9,-5,20,20,-30,1,-10,-10}) , {2,1001,8,0,9,-5,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,13,15,16,5,19}) , {1,3,7,13,15,16,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,6,7,8,9,21,9,9,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11,4,8,8}) , {6,7,21,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,8,13,10,13,15,1000,13,15}) , {1,3,5,7,8,10,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,3,2,2,2,2,2,2,-30,2,2,2,2,2,2,2,2,2,2,3,2,2}) , {1,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,1,3,2,2,2,3,-10,4,4,5,5,5}) , {-10}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,2,2,9,2,3,3,4,4,4,5,5,5}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({7,10,10,10,10,9,9,9,10,11,18,10,9}) , {7,11,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,1,3,3,4,4,5,5,5,7,8,9,9,9,9,10,11,12,12,12,13,13,13,13,14,14,15,16,17,18,18,19,20,12,11,4}) , {7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,4,10,9,9,10,6,10,10,0}) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({18,-10,5,2,7,5,-10,12,12,1,0,-5,9,-5,20,20,-30,1000,-10,1}) , {18,2,7,0,9,-30,1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,9,13,15,17,19,17}) , {1,3,5,7,9,13,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,-10,8,12,12,1,0,-5,9,-5,20,20,-30,12,20}) , {2,8,1,0,9,-30}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,15,16,17,-11,18,18,19,20}) , {1,6,7,8,10,14,15,16,17,-11,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,18,13,13,14,14,15,16,17,18,18,19,20}) , {1,2,6,7,8,10,15,16,17,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,8,11,20,12,12,12,13,13,13,13,14,14,15,16,1000,18,4,19,20,15}) , {1,2,6,7,10,11,16,1000,18,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,10,19,10,15,9,10,10}) , {19,15,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,-5,7,9,11,13,15,18,18,15}) , {1,3,5,-5,7,9,11,13}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,2,6}) , {9,6}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,2,3,3,3,4,4,5,5,5,5,6,7,8,9,9,9,9,10,11,11,12,12,12,13,13,13,13,14,14,15,16,1000,18,18,19,20,11,6}) , {1,2,7,8,10,15,16,1000,19,20}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,3,2,2,1,2}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,7,12,11,13,15,20,18,5}) , {1,3,7,12,11,13,15,20,18}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,10,10,9,1000,9,11,10,11,10,11}) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({1,3,5,18,13,9,11,15,18,19,18,5}) , {1,3,13,9,11,15,19}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({10,0,10,9,10,10,10,10,10,9,9}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,2,2,2}) , {4,9}))){ tests_passed++; } total_tests++;

    if((issame(remove_duplicates({-10,5,2,5,1001,-10,8,12,12,1,0,-5,9,-5,20,7,-30,-10}) , {2,1001,8,1,0,9,20,7,-30}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


