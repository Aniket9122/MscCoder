#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// Function to return sorted unique elements in a vector
vector<int> unique(const vector<int>& l) {
    set<int> s; // create a set to store unique elements
    for (auto& x : l) s.insert(x); // iterate through the vector and insert each element in the set
    vector<int> result(s.begin(), s.end()); // convert the set back to a vector
    sort(result.begin(), result.end()); // sort the vector
    return result;
}

// Function to check if two vectors are equal
bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) if (v1[i] != v2[i]) return false;
    return true;
}

// Function to print a vector
void print_vector(const vector<int>& v) {
    for (auto x : v) cout << x << " ";
    cout << endl;
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

    if((issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5, 9, 123}))){ tests_passed++; } total_tests++;

    if((issame(unique({5,3,5,2,3,3,9,0,123}) , {0,2,3,5,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,1,1,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({0,0,0,0}) , {0}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,5,-1,3,5,2,5}) , {-1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({}) , {}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,2,2,2,2,2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,2,5,2,2,2}) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,1,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,2,5,2,2,2,2,2}) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1,1,3,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,1}) , {-1,1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1,1,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1,1,1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,2,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({3,1,1,1}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,1,1,2,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,1,1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,1,0,2,1,1}) , {0,1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,1,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,2,1,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,1,2,1,1}) , {-1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,0,1,1}) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(unique({3,1,2,1,1,3,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,-1,5,2,2,2,2}) , {-1,2,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({3,1,1}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,5,2,2,2}) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,2,2,2,2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(unique({0,1,1}) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-5,5,0,-84,2,-19}) , {-84,-19,-5,-2,0,2,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1,1,-19,1,2,1}) , {-19,1,2}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,-4,8,8,9,9,9,10}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,1,2,1,2,3,4,3,4,3,4,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-4}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,-4,8,8,9,9,9,10,9}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-1}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-5,-4,-6,-1,-2}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-4,-4,-4,-5,-6,-2}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,8,9,9,9,10,7}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,9,10,9}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,8,6,9,9,9,10,7}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,8,6,9,9,9,10,5,7,2,8}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,5,6,7,7,7,8,8,8,9,9,9,10,7}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,-6,9,9,9,10,7}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,0,6,7,7,7,8,-4,8,8,9,9,9,10,9}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,9,10,9,7}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,6,7,7,7,8,8,8,8,9,9,10}) , {1,2,3,4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,8,-4,8,8,9,0,9,10}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,-4,8,8,9,9,9,10,1}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,10,-3,-4,-4,-4,-5,-6,-4,-6}) , {-6,-5,-4,-3,-2,-1,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-5}) , {-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-1,-3,-2}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,7,10,-3,-4,-4,-4,-5,-6,-4,-6}) , {-6,-5,-4,-3,-2,-1,7,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4,3}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-3,-4,-4,-5}) , {-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,5,6,7,7,7,8,-4,6,8,8,9,9,9,10,9}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,0,6,7,7,7,8,-4,8,8,9,3,9,9,10,9}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,9,7,7,7,8,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-3,-6}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,2,3,4,6,4,5,6,7,7,7,8,8,8,9,9,9,10}) , {2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,3,4,5,6,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,7,-3,-4,-4,-4,-5,-6,-4,-6}) , {-6,-5,-4,-3,-2,-1,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,8,6,9,9,10,5,7,2,8}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4,3,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,1,2,1,2,3,4,3,4,3,4,3,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,1,1,2,1,2,3,4,3,4,3,4,3,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,2,3,4,6,4,5,6,7,7,7,8,8,8,9,9,9,10,9}) , {2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,6,7,7,7,8,8,9,9,9,10,9}) , {1,2,3,4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,5,6,7,7,7,8,8,8,9,9,9,10,7,10}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,2,2,3,4,4,4,4,5,6,7,7,7,8,8,8,9,9,9,10,9,4}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,8,-4,8,9,0,9,10}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({7,1,2,2,3,4,4,5,6,7,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({7,1,2,2,3,4,5,6,7,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,10,-3,-4,-4,-4,-5,-6,-4,-6,-4}) , {-6,-5,-4,-3,-2,-1,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,5,6,7,7,7,8,-4,6,8,8,9,9,9,10}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,0,6,7,7,7,8,-5,8,8,9,9,9,10,9}) , {-5,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-3}) , {-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,2,3,4,4,4,5,6,2,7,7,7,8,8,8,9,9,9,10,9,9}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,0,6,7,7,7,10,8,-4,8,8,9,9,9,10,9}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,8,-4,8,8,9,1,9,10}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-4,-5,-4,-5,-3,-6}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({7,1,2,2,3,4,4,5,6,7,7,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,1,2,1,2,2,4,3,4,3,5,3,4,2}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,6,7,7,7,8,-4,6,8,8,9,9,9,10}) , {-4,1,2,3,4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,3,1,2,1,2,2,4,3,4,3,5,3,4,2}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-5,-3}) , {-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,0,1,2,0,1,2,1,2,3,4,4,3,4,3,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,5,3,1,2,1,2,2,4,3,4,3,5,3,4,2}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,-1,7,7,8,8,8,6,9,9,10,5,7,2,8}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,6,7,7,7,8,8,9,9,9,10,-1,9,10,7}) , {-1,1,2,3,4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4,3,1,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,8,-4,8,8,9,9,9,10,4}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,10,-3,-4,-4,-1,-5,-6,-4,-6,-4}) , {-6,-5,-4,-3,-2,-1,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-2,-3,-3,-4,-4,-5,-3}) , {-5,-4,-3,-2}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,-4,8,8,9,9,10}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,1,2,1,2,3,3,4,3,4,2,4,3,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,1,1,2,2,2,3,4,3,4,3,4,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,3,1,2,1,2,2,4,3,4,5,3,4,2}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-5,-6,-1}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-2,-3,-3,-4,-4,-5,-3,-3}) , {-5,-4,-3,-2}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-5,-6,-1,-1}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-4,-5,-4,-5,-7,-3,-6}) , {-7,-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,3,4,3,4,2,4,3,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-3,-3,-4,-4,-5}) , {-5,-4,-3,-2}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,5,7}) , {1,2,3,4,5,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,-4,8,8,9,9,9,10,10}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,4,5,6,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,4,5,6,7,1}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,7,-3,-4,-4,-4,-5,-6,-4,-6,-4}) , {-6,-5,-4,-3,-2,-1,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,0,4,5,6,7,6}) , {0,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,5,-61,3,1,2,1,2,2,4,3,4,3,5,3,4,2}) , {-61,1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,1,1,2,2,2,3,3,4,3,4,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,1,1,2,2,2,3,4,3,4,3,4,1,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,8,6,9,9,10,5,7,2,8,4}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,1,2,1,-6,3,3,4,3,4,3,4}) , {-6,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,4,6,7,7,7,8,8,9,9,10,9}) , {1,2,3,4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,5,4,4,5,6,7,7,7,8,8,8,6,9,9,10,5,7,2,8}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,0,6,-4,7,7,8,-4,8,8,9,9,9,10,9}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-6,1,2,2,3,4,4,5,6,7,7,8,-4,8,9,0,9,10}) , {-6,-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-7,-4,-5,-6,-1,-3,-2}) , {-7,-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-2,-3,-3,-4,-4,-3}) , {-4,-3,-2}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,7,7,7,8,8,8,8,9,9,10}) , {1,2,3,4,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-4,-5,-4,-5,-3,-6,-2}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({3,7,1,2,2,3,4,5,7,7}) , {1,2,3,4,5,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-1,-3,-3,-5,-4,-5,-3,-1}) , {-5,-4,-3,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,7,-3,-4,-4,-4,-1,-4,-6,-4}) , {-6,-4,-3,-2,-1,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-6,-3,-3,-4,-4,-5,-3,-6,-1,-1}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-3,-4,-4,-5}) , {-5,-4,-3,-2}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,10,-3,-4,-4,-4,-5,-6,-4,123,-6}) , {-6,-5,-4,-3,-2,-1,10,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,4,4,5,6,-1,7,7,8,8,8,6,9,9,10,5,7,2,8}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-7,-4,-5,-6,-3,-1,-3,-2,-4}) , {-7,-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,0,6,-4,7,7,8,-4,8,8,9,9,9,10,9,9}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,3,8,4,4,5,6,7,7,7,8,-4,6,8,8,9,9,9,10,9}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,2,4,4,4,5,6,2,7,7,7,8,8,8,9,9,9,10,9,9}) , {1,2,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-1,-3,-2}) , {-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,2,3,4,6,4,5,6,7,7,7,8,8,8,9,9,10}) , {2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-1,-2,-3}) , {-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,1,1,2,2,2,1,3,4,3,4,3,4,1,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,9,1,2,1,-6,3,3,4,3,3,4,3}) , {-6,1,2,3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({7,1,2,2,3,4,4,5,6,7,7,2,7,2}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-6,10,-3,-4,-4,-5,-6,8}) , {-6,-5,-4,-3,-2,-1,8,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,6,7,7,7,8,8,9,9,9,10,-1,10,9,10,7}) , {-1,1,2,3,4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,9,7,7,7,8,-4,8,8,9,9,10}) , {-4,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,8,9,9,9}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,0,-3,-4,-4,-4,-5,-1,-3,-2}) , {-5,-4,-3,-2,-1,0}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,10,-3,-4,-4,8,-1,-5,-6,-4,-6,-4}) , {-6,-5,-4,-3,-2,-1,8,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,-4,4,5,6,7,7,-4,8,9,0,9,10}) , {-4,0,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,8,8,9,9,9,10,7}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,7,10,-3,-4,-4,-4,-5,-6,-6,-3}) , {-6,-5,-4,-3,-2,-1,7,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({7,2,2,3,4,5,6,7}) , {2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,1,1,2,2,2,3,3,4,3,4,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-6,-3,-3,-1,-4,-4,-5,-3,-6,-1,-1}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,4,4,4,5,6,7}) , {1,2,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,1,1,2,1,2,2,4,3,4,3,5,3,4,2}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,9,1,2,-1,-6,3,3,4,3,3,4,3}) , {-6,-1,1,2,3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,1,2,3,4,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(unique({5,5,5,5,5,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,3,4,5,6,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-2,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,3,4,4,4,5,6,7}) , {1,3,4,5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,-1,8,8,9,9,9,10,8,6}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,0,3,4,3,4,2}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,4,7,8,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({64,8,-57,66,4,9,98,28}) , {-57,4,8,9,28,64,66,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,4,-6,-3}) , {-6,-5,-4,-3,-2,-1,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,-4,2,3,4,3,4,5,6,7}) , {-4,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,-1,8,8,9,2,9,9,10,8,6}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,2,4,3,4,5,6,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,0,3,4,3,4,2,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,7,7,-1,8,8,9,9,9,10,8,6}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,65,-4,-4,-4,-5,4,-6,-3}) , {-6,-5,-4,-3,-2,-1,4,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-2,0,-3,-1}) , {-6,-5,-4,-3,-2,-1,0}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,28,4,0,3,4,3,4,2,2}) , {0,1,2,3,4,28}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,-3,5,6,7,7,7,8,8,8,9,9,9,10}) , {-3,1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,-3,5,6,7,7,7,5,8,8,9,9,9,9}) , {-3,1,2,3,4,5,6,7,8,9,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,9,-2,-3,-3,-4,-4,-5,-4,-5,-6}) , {-6,-5,-4,-3,-2,-1,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,28,1,1,2,4,3,4,4,3,4,4}) , {1,2,3,4,28}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-6,-2,0,-3,-1}) , {-6,-4,-3,-2,-1,0}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-4,4,-6,-3}) , {-6,-4,-3,-2,-1,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,4,0,3,4,3,4,2,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,4,4,4,5,6,7}) , {1,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,28,1,1,2,4,3,4,4,4,3,4,4}) , {1,2,3,4,28}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,1,2,1,2,1,2,3,4,3,4,3,4,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,2,4,4,4,5,6,7}) , {1,2,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-3,-3,65,-4,-4,-5,-6,-2}) , {-6,-5,-4,-3,-2,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,9,10,9}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,3,4,3,4,0,3,4,3,4,2,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,0,2,4,3,4,2}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,4,7,8,8,8,9,9,-6,10}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-4,65,0,-2,-3,-3,-4,-4,-4,-4,4,-6,-3,-4}) , {-6,-4,-3,-2,0,4,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,-6,10,6,1}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,0,1,2,1,2,1,2,3,4,3,4,4,0,3,4,3,4,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,2,4,4,5,6,7}) , {1,2,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,0,2,4,3,4,2,3}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,-4,4,0,3,4,3,4,2,4}) , {-4,0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,0,3,4,3,4,2,4,2}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,4,8,8,9,9,9,10,8,6}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,4,-6,0}) , {-6,-5,-4,-3,-2,-1,0,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,-2,2,1,2,1,2,1,2,3,4,3,4,0,3,4,3,4,2}) , {-2,0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,-1,8,8,9,2,9,9,1,8,6}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,1,8,6}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,7,7,4,7,8,8,8,9,9,9,-2,10}) , {-2,1,2,3,4,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,6,7,6,7,8,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,-6,9,4,5,6,7,7,7,-1,8,8,9,9,9,10,8,6,-1}) , {-6,-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,3,-4,4,0,3,4,3,4,2,4}) , {-4,0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,0,2,4,3,4,2,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,4,7,8,8,8,9,9,-6,10,4}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,-4,2,3,6,4,3,1,4,5,6,7}) , {-4,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,4,7,8,8,8,9,9,3,9,9,4}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,5,7,7,4,7,8,8,8,9,3,9,9,4}) , {1,2,3,4,5,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,2,4,4,4,5,6}) , {1,2,4,5,6,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-5,-6,-3,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,-4,2,3,6,4,3,1,4,5,6,7,7}) , {-4,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,4,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,3,4,5,6,7,7,4,7,8,8,8,9,9,-6,10,4}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,9,-2,-3,-3,-4,-4,-4,-5,-4,-5,-6}) , {-6,-5,-4,-3,-2,-1,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,10,8,6,2}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,2,3,4,3,4,0,3,4,3,4,2,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,-1,8,8,9,2,9,9,3,8,6}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,0,3,4,3,4,3,2}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({64,8,-57,66,4,9,28}) , {-57,4,8,9,28,64,66}))){ tests_passed++; } total_tests++;

    if((issame(unique({64,8,-57,66,4,-3,28,66}) , {-57,-3,4,8,28,64,66}))){ tests_passed++; } total_tests++;

    if((issame(unique({10,1,2,2,3,4,4,4,5,7,7,7,8,8,8,9,9,-6,10,6,1}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,4,2,3,4,4,4,5,6,7,7,8,8,8,9,9,9,10,9}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,0,2,4,3,4,2,3,1}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,4,3,4,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4,2,3}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,-4,4,0,3,4,3,4,2,4,1}) , {-4,0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-2,0,-1}) , {-6,-5,-4,-3,-2,-1,0}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,1,9,4,4,5,6,7,7,7,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,4,4,5,6,7}) , {1,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,8,3,4,4,4,5,7,7,4,7,8,8,8,9,9,9,-2,10}) , {-2,1,2,3,4,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,-2,2,1,2,1,2,1,2,3,4,3,4,0,3,4,3,4,2,4}) , {-2,0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,6,7,6,7,8,8,8,9,9,9,10,5}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-5,-6,-3,-6}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,1,2,1,2,1,2,3,4,3,4,-4,4,3,4}) , {-4,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,-6,10,6,1,2}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,2,4,7,4,4,4,5,6,7}) , {1,2,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,-4,2,3,6,4,3,1,4,5,6,7,7,3}) , {-4,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,-6,10,6,1,9}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-3,-3,65,-4,-4,-6,-2}) , {-6,-4,-3,-2,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,-3,2,3,4,3,4,5,6,7}) , {-3,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-5,-6,-3,-3,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-4,-3,-4,-4,-4,-4,-5,-6,-2,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,1,9,4,4,5,6,7,7,7,8,8,9,9,9,10,8}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-2,-4,-4,-5,-6,-3,-3,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,10,8,6,2,9}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-2,-2,-3,-5,-3,-4,-4,-4,-5,-6,-2,-3}) , {-6,-5,-4,-3,-2}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,9,9,10,8,6,2,9}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,3,2,3,4,3,4,0,3,4,3,4,2,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,-4,4,0,3,4,3,4,2,9,4}) , {-4,0,1,2,3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,3,4,4,4,5,6,7,6,7,8,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,3,4,5,6,7,7,4,8,7,8,8,8,9,9,-6,10,4,-6}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,8,4,4,4,5,7,7,4,7,8,8,8,9,9,9,-2,10}) , {-2,1,2,4,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,10,8,6}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,-4,2,3,6,4,3,64,1,4,5,7,6,3}) , {-4,1,2,3,4,5,6,7,64}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,4,4,4,5,6,7,1}) , {1,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({64,8,-57,66,4,9,98,28,98}) , {-57,4,8,9,28,64,66,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,6,7,8,8,8,9,9,-6,10,6,1}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-3,-4,-4,-5,-6,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,0,3,4,3,4,2,4,2,2}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({-4,65,0,-3,-3,-3,-4,-4,-4,-4,4,-6,-3,-4}) , {-6,-4,-3,0,4,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,-6,5,6,7,7,7,8,8,8,9,9,9,10,4}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-2,-4,-6,-6,-3,-3,-3}) , {-6,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({0,-2,-3,-3,-4,-4,-4,-5,-6,-2,0,-1}) , {-6,-5,-4,-3,-2,-1,0}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,8,8,8,9,9,9,10,2}) , {1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,8,-3,3,4,4,4,5,7,7,4,7,8,8,8,9,9,9,-2,10,8}) , {-3,-2,1,2,3,4,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({2,1,2,1,98,2,1,3,2,3,4,3,4,0,3,4,3,4,2,4,2}) , {0,1,2,3,4,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,2,4,4,5,6,7,4}) , {1,2,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,-3,-4,-4,-4,-4,-5,-6,-3}) , {-6,-5,-4,-3,-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-2,-3,7,-3,-4,-4,65,-5,-6,-2,0,-3,-1,-1}) , {-6,-5,-4,-3,-2,-1,0,7,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,4,0,3,4,2,3,4,2,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,7,6,7,8,8,8,9,9,9,10,5}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({-4,65,-5,0,-2,-3,-3,-4,-4,-4,-4,4,-6,-3,-4}) , {-6,-5,-4,-3,-2,0,4,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,5,-4,4,0,3,4,3,4,2,4}) , {-4,0,1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(unique({10,1,2,2,3,4,4,4,5,7,7,7,8,8,8,9,9,-6,10,6,1,-6}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,2,1,2,3,4,3,4,4,3,4,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,10,8,6,9}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,7,-1,8,8,9,2,9,9,3,8,6}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,65,-5,0,-2,-3,-3,-4,-4,-4,-4,4,-6,-3,-4}) , {-6,-5,-4,-3,-2,-1,0,4,65}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,4,8,9,2,9,9,10,8,6,2,9}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,4,7,8,8,9,9,-6,10,4}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,9,-6,-2,-3,-3,-4,-4,-4,-5,-4,-5,-6}) , {-6,-5,-4,-3,-2,-1,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({-1,-3,-3,-4,-4,-4,-5,-6,-3,-6}) , {-6,-5,-4,-3,-1}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,8,3,4,5,6,7,7,4,8,7,8,8,8,9,9,-6,10,4,-6}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,-1,8,8,8,9,2,9,9,1,8,6,5}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,9,10,6,2}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,5,6,7,7,7,8,-3,8,9,9,9,10,9}) , {-3,1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,3,4,4,4,5,0,6,7}) , {0,1,3,4,5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,6,7,6,7,8,8,8,9,9,9,10,8}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,8,3,4,4,4,5,7,7,4,4,7,8,8,8,9,9,9,-2,10}) , {-2,1,2,3,4,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,0,2,0,0,1,3,2,3,4,3,4,3,4,3,10,4,2,4}) , {0,1,2,3,4,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,3,5,6,7,7,4,8,7,8,8,8,9,9,-6,10,4,-6}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,5,6,7,2}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,10,8,6,2,1}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,123,2,4,4,5,6,7,2}) , {1,2,4,5,6,7,9,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,7,7,6,7,8,8,8,9,9,9,10,5,9}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,8,-3,3,4,4,4,5,7,7,4,7,8,8,8,9,9,9,-2,10,8,7}) , {-3,-2,1,2,3,4,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,2,1,2,3,4,3,-4,4,0,4,3,4,2,9,4,3}) , {-4,0,1,2,3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,7,7,-1,8,8,9,2,9,9,3,8,6,5}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,98,2,2,3,4,4,4,5,6,7,6,7,8,8,9,9,9,10}) , {1,2,3,4,5,6,7,8,9,10,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({64,8,-57,66,4,9,98,28,8}) , {-57,4,8,9,28,64,66,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({4,1,2,2,3,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,1,8,6}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,1,2,3,7,4,4,4,5,6,7,7,-1,8,8,9,2,9,9,10,8,6,2,9}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,1,2,1,2,1,2,3,4,3,4,3,4,3,4,2,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(unique({0,-2,-3,-3,-4,-4,-4,-5,-6,-2,0}) , {-6,-5,-4,-3,-2,0}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,8,4,4,4,5,7,7,4,7,8,3,8,8,9,9,9,-2,10}) , {-2,1,2,3,4,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,-3,2,3,3,4,5,6,7}) , {-3,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,-6,4,6,7,7,7,8,8,8,9,9,9,10,4}) , {-6,1,2,3,4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,2,2,3,4,5,4,5,6,7,7,-1,8,4,8,9,2,9,9,10,8,6,2,9}) , {-1,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({64,7,-57,66,4,9,98,28}) , {-57,4,7,9,28,64,66,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,9,2,3,4,5,4,5,6,7,7,-1,8,4,8,9,2,9,9,8,6,2,9}) , {-1,1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(unique({64,8,-57,66,4,8,98,28}) , {-57,4,8,28,64,66,98}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,64,9,123,4,4,5,4,6,7}) , {1,4,5,6,7,9,64,123}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,0,2,0,0,1,3,2,3,4,3,4,3,3,10,4,2,4}) , {0,1,2,3,4,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,4,4,4,5,6,7,7,4,7,8,8,8,9,9,-6,10,8}) , {-6,1,2,3,4,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(unique({1,2,2,3,-1,4,4,5,6,7,2}) , {-1,1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


