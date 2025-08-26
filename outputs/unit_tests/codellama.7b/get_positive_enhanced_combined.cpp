#include <iostream>
#include <vector>

using namespace std;

vector<float> get_positive(const vector<float>& l) {
    // Initialize a new vector to store the positive numbers
    vector<float> positive;

    // Iterate through the input vector and check if each element is positive
    for (auto& element : l) {
        if (element > 0) {
            positive.push_back(element);
        }
    }

    return positive;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<float> a,vector<float>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
        if (abs(a[i]-b[i])>1e-4) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(get_positive({-1, -2, 4, 5, 6}) , {4, 5, 6} ))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5, 3, -5, 2, 3, 3, 9, 0, 123, 1, -10}) , {5, 3, 2, 3, 3, 9, 123, 1}))){ tests_passed++; } total_tests++;

     if((issame(get_positive({-1, -2}) , {} ))){ tests_passed++; } total_tests++;

     if((issame(get_positive({}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,4,5,6}) , {4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,3,-5,2,3,3,9,0,123,1,-10}) , {5,3,2,3,3,9,123,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,1,-1,2,-2,3,-3,4,-4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,3,-3,4,-4,0}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,0,1,4,5}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,8,10,11,12,15,17,-1}) , {7,8,10,11,12,15,17}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,9,-3,-6,2,3,8,1,0}) , {5,9,2,3,8,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-4,-6,0,2,4,6}) , {2,4,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-15,20,-20,25,-25}) , {10,15,20,25}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,25,-25}) , {10,15,20,25}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-1,-3,-4,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,0,0}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,-4,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,0,1,4}) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,2,-2,3,-3,4,-4,-2}) , {2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,0,1,4,1}) , {1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,1,1,2,-2,3,-3,4,-4}) , {1,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,25,-25,-20}) , {10,15,20,25}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,9,-3,-6,2,3,8,1,1}) , {5,9,2,3,8,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,1,4}) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,8,-1,0,1,4}) , {8,1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,4,4}) , {1,2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,8,11,12,15,17,-1}) , {7,8,11,12,15,17}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,15,-3,20,-20,8,-25}) , {10,15,20,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,17,2,2,4,4}) , {1,17,2,2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,9,0,1,-10,5}) , {9,1,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-5,-4,-1,5,0,4,1}) , {5,4,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-2,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,9,-4,-6,2,8,1,1}) , {5,9,2,8,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-1,-3,-4,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-5,-4,-1,5,0,4,1,4,0}) , {5,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,-4,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,8,-3,-15,-1,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,10,-1}) , {10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,25,-20}) , {10,15,20,25}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,9,-6,2,3,8,0}) , {5,9,2,3,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,-4,-1,-3,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,0,1,4}) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,8,-1,0,4,-5}) , {8,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,8,11,12,15,17,-1,11}) , {7,8,11,12,15,17,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,6,9,-4,-1}) , {6,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,25,-20,-10}) , {10,15,20,25}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,3,4,-4,0}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,3,-3,20,-20,25,-20,-10,3}) , {10,3,20,25,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,8,-1,0,1,4,-1}) , {8,1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-1,-3,-4,-1,-1,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,25,-20,-20,15}) , {10,15,20,25,15}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,3,4,-4,0}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,3,4,-4,0,4}) , {1,2,3,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,9,-3,-6,2,3,10,1}) , {5,9,2,3,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,0}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-20,-5,-4,-1,0,1,4}) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,-3,-6,2,3,10,1,5}) , {5,2,3,10,1,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,15,-3,20,-20,8,-25,20}) , {10,15,20,8,20}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,0,1}) , {1,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,-3,20,-20,25,-20,-10,5,3}) , {3,20,25,5,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,25,-20,-5}) , {10,15,20,25}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,19,25,-20,-5,15}) , {10,15,20,19,25,15}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,10,3,-3,20,-20,25,-20,-10,3}) , {10,10,3,20,25,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,0,4}) , {1,2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,10,-10,15,-15,20,-20,25,-25,25}) , {10,10,15,20,25,25}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,8,1,-1,0,1,4,-1}) , {8,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-5,-4,-1,5,0,-10,1}) , {5,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-1,-1,-3,-4,-1,-1,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,9,-3,-6,2,3,8,1,-4,2}) , {5,9,2,3,8,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,0,4,-3}) , {1,2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,20,-20,25,-20,-10,5,3}) , {20,25,5,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,0,0}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({9,-2,-1,-1,-3,6,9,-4,-1}) , {9,6,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,0,1,5,4,5,4}) , {1,5,4,5,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,-4,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,1,-2,3,-3,4,-5,-4,0}) , {1,1,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-3,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,1,1,4}) , {1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-10,15,-3,20,-20,26,-20,-10}) , {10,15,20,26}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,4,4,-4,0,4}) , {1,2,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-2,-1,0,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,-1,4}) , {1,2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-5,-4,-1,5,0,-10,1,-10}) , {5,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,0,0,0}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-1,0,1,6,1}) , {1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,1,3,-3,4,-5,-4,0}) , {1,1,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,-4,-1,0,1,5,6,1,1,-1}) , {1,5,6,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,2,-2,-3,4,-4,0,-1}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,7,8,11,12,15,17,-1}) , {5,7,8,11,12,15,17}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1,-4,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,5,9,-3,-6,2,3,8,1,1}) , {5,5,9,2,3,8,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,3,4,-4,0,4}) , {1,3,4,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,-5,-4,-1,0,1,4,5}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,8,-3,-15,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,8,-1,0,4}) , {8,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,9,-3,-6,2,3}) , {5,9,2,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-2,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,5,0,6,7,-9,10}) , {5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,2}) , {1,1,1,1,1,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,2,-9,10}) , {1,2,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,-9,10,10}) , {1,2,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,10,6}) , {1,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,1,2}) , {1,1,1,1,1,2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,0,6,7,-9,10,10}) , {1,2,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,6,0,6,7,-9,10}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-7,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,2,2,2,1,2}) , {1,1,1,1,1,1,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,5,-5,6,7,-9,10}) , {5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1}) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,7}) , {6,6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,2,-4,6,0,6,7,-9,10}) , {2,6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-4,6,0,6,7,-9,10,-3}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,2,-9,-4,-4,7,-100,1,0}) , {2,7,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-3,-4,6,0,6,7,-9,8,10}) , {6,6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,-5,0,6,7,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,-4,-5,0,6,7,-9,10}) , {1,2,3,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,-3,-2,-1,-5,-1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,10,-4,6,0,6,7,-9,10,-3}) , {10,6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,2,-1,-5,0,6,7,-9,10}) , {1,1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,-1,-3,-2,-1,-5,-1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,5,-9}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-7,-1,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-4,6,0,6,7,-9,10,-3,-9}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-8,1,1,2,2,2,2,2,2}) , {1,1,1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-5,-1,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,1,2}) , {1,1,1,1,1,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,5,10,-9}) , {6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,-4,-5,0,6,-9,-5,10}) , {1,2,3,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,5}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,2,1,2}) , {1,1,1,1,1,2,2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,-9,10,9}) , {1,2,6,7,10,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,5,-1}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9,-9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-3,-4,-5,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,1,-5,0,0,6,7,-9,10,10}) , {1,2,1,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-3,-2,-1,-5,-1}) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,0,6,7,-9,10,10,6}) , {1,2,6,7,10,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,-3,0,6,7,-9,10,5}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,5,0,6,7,-9}) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9,-9,-9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-4,5,0,5,7,-9}) , {5,5,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,10,-4}) , {1,2,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-8,-2,-1,-5,-1}) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10,-4}) , {1,2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,1,6,7,-9,10}) , {1,2,1,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,10,-4,6,0,6,7,-9,10,-3,-4}) , {10,6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-8,-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,2,-9,-4,-4,7,-100,1,0,2}) , {2,7,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,-5,0,6,7,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,0,-1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,0,6,7,-9,10,7}) , {6,6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,2,-1,-5,11,6,7,-9,10}) , {1,1,2,11,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,1,2,1,1}) , {1,1,1,1,1,2,2,2,1,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,-5,6,-9,10,6}) , {1,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,1,2,6,7,-9,10}) , {1,2,1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-3,6,-2,-1,-5,-1}) , {6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1}) , {1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-2,-5,0,6,7,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,8,-4,6,0,11,-6,-9,10,7,7}) , {8,6,11,10,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,1,2,6,7,-9,10,-5}) , {1,2,1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,-8,2}) , {1,1,1,1,1,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,1}) , {1,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,2,-1,9,-5,0,6,-100,-9,10}) , {1,1,2,9,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,5,10,-5,6,7,-9,7}) , {5,10,6,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,8,-3,6,-2,-1,-4,-1}) , {6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-4,-5,0,1,2,6,7,-9,10}) , {2,1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-3,-4,-5,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,0,6,7,-9,10,10,2}) , {1,2,6,7,10,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-7,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,2,-4,-5,0,1,2,6,7,-9,10}) , {11,2,1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-100,-2,-5,-3,-4,6,0,6,7,-9,10}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-5,0,6,7,2,-9,10}) , {1,2,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,6,5,7,-9,10,7}) , {6,6,5,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,0,-4,6,6,7,-9,10}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,-2,10,6,-9,10}) , {1,2,6,10,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-7}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-1,-2,-5,-3,-4,6,0,6,7,-9,10,5,10,-9}) , {11,6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,-4,-5,0,6,-9,-5,10,-9}) , {1,2,3,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,1}) , {7,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-5,-3,-4,6,0,6,7,-9,10,5,10,-9}) , {6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-3,6,-1,-1,-5,-1}) , {6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,5,10,-9,-1}) , {6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-4,6,0,6,7,-9,10,0}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-4,6,0,6,-5,7,-9,10,-3,-9}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-8,1,1,2,2,2,2,2,2,2}) , {1,1,1,1,1,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,1,2,2}) , {1,1,1,1,1,2,2,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,1,1,-8,1,1,2,2,2,2,2,2,2,2}) , {11,1,1,1,1,2,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-7,-1,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,11,6}) , {1,2,6,11,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,2,-4,-5,0,2,2,6,7,-9,10}) , {10,2,2,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-3,-5,0,0,6,7,-9,10,10,1}) , {1,2,6,7,10,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-100,-1,-5,0,6,7,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-2,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,-2,-5,0,6,7,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-9,-3,-3,-4,6,0,6,7,-9,8,10}) , {6,6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,1,2,-4,-5,0,1,2,6,7,-9,10}) , {11,1,2,1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-5,0,7,6,7,2,-9,10}) , {1,2,7,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,-6,-3,6,-1,-1,-5,-1}) , {6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-100,-1,-5,0,6,7,2}) , {1,2,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,2,6,7,-9,7}) , {1,2,2,6,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-3,6,-1,-5,-1}) , {6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,1,1,1}) , {2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,-1,6,0,6,7,-9,10,5}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,0,1}) , {1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-3,-3,2,-4,6,0,6,7,-9,8,10}) , {2,6,6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,1,0,-1,-1,0}) , {10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,3,6,7,2,-9,10}) , {1,2,3,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,10,-4,6,0,6,7,-9,10,-3,-4,-4}) , {10,6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,5,10,-5,7,-9,7}) , {5,10,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,10,6,-4}) , {1,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,0}) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,3,6,7,2,-9,10,2}) , {1,2,3,6,7,2,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-3,6,-2,-1,6,-4,-1,8}) , {6,8,6,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,-9,10,1,0}) , {1,2,6,7,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,6,7,-9,10,7}) , {6,6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-2,1,1,1,2,2,2,2,2,1,2,2}) , {1,1,1,1,2,2,2,2,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-100,-1,-5,0,6,7,2}) , {1,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-4,6,0,6,-5,7,-9,10,-3,-9,6}) , {6,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,-3,-2,-1,-5}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,0,6,7,-9,10,6}) , {1,3,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,0,-9,10,5,-5}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-8,-4,8,-8,-2,-1,-5,-7}) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-1,-5,-1,6,7,2,-9,10}) , {1,2,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-3,-9,-9}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-3,-9,-8,-9}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,0,-4,6,6,-8,7,-9,10,-2}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,8,-3,6,-2,-1,-4,-1,-1}) , {6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,-5,0,6,7,-9,10}) , {1,2,3,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-2,-5,0,6,7,-9,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-4,-7,-3,0,6,7,-9,10,5}) , {6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,3,1,2,2}) , {1,1,1,1,1,2,2,2,3,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({9,-8,-7}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,2,-4,-5,0,2,2,6,6,-9,10,-5}) , {10,2,2,2,6,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,0}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-3,-100,6,-1,-1,-5,-1}) , {6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,-5,-4,-3,-2,-1,-5}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-5,-3,-4,6,0,6,7,-9,-100,10,5,10,-9}) , {6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,3,6,7,2,10,2}) , {1,2,3,6,7,2,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,-1,6,11,0,6,7,-9,10,5,10}) , {6,11,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,2,-4,6,-9,6,7,-9}) , {2,6,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,-1,-3,-4,-1,-5,-1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-4,6,0,7,-9,10,-3}) , {6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,0,6,7,-9,10,6}) , {1,2,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-100,-101,1,1,1}) , {1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-100,-2,-5,-3,-4,6,0,6,7,-9,10,6}) , {6,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-2,-5,0,6,7,-9,-9,10,7}) , {1,2,6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({9,-8,-8}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-4,-7,-3,0,6,7,-9,10,6,-4}) , {6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,7}) , {6,8,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-7,-4,-4,-5,0,6,-9,10,6,-4}) , {1,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-5,-3,5,-1}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-4,-7,-3,0,6,7,-9,10,5,-4}) , {6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,10,-4,1,0,6,7,-9,10,-3}) , {10,1,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,2,-4,-5,0,1,2,6,7,-9,10,2}) , {11,2,1,2,6,7,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,0,5,-9}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-3,-5,0,0,6,7,-9,10,10,1,10}) , {1,2,6,7,10,10,1,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-4,6,0,6,7,-9,10,5,-7,-9}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,1,2,7,-9,10}) , {1,2,1,2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-100,-1,-5,0,6,2,7,2}) , {1,2,6,2,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,-5,0,6,7,-9,11}) , {1,2,6,7,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,0,6,7,-9,10,6,3}) , {1,3,6,7,10,6,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,9}) , {1,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-2,-3,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,-5,0,6,10}) , {1,2,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-2,-3,-4,-5,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,10,-4,-4}) , {1,2,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-1,-2,-5,-3,-4,6,0,6,7,-3,6,10,5,10,-9}) , {11,6,6,7,6,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-9,2,3,-4,-5,0,6,-9,-5,10,-9}) , {1,2,3,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,3,0,-5,0,6,-9}) , {2,3,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,8,-4,6,0,11,-6,-9,10,7,7,10}) , {8,6,11,10,7,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-100,-101,1,1,1,1}) , {1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-7,-7}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-2,-3,-4,-5,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,5,10,-9,-1,10}) , {6,6,7,10,5,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-4,-101,-7,-1,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,2,-4,-5,0,2,6,7,-9,10}) , {10,2,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,2,-4,-5,0,1,2,6,7,-9,11,2}) , {11,2,1,2,6,7,11,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,-1,-5,0,6,7,1,10,-5}) , {1,6,7,1,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,-2,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,0,0,6,7,-9,10,6,6,-9}) , {1,3,6,7,10,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,6,5,7,-9,10,7,-4}) , {6,6,5,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-6,0,8}) , {8,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-100,-101,1,1,1,1,-101}) , {1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,1,2,-4,-3,-5,0,0,6,7,-10,10,10,1,10,6,6}) , {1,2,6,7,10,10,1,10,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,1,1,2,1,1}) , {2,1,1,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,0,6,7,10,6,6,-9,-5}) , {1,3,6,7,10,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-3,-5,-2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,6,7,-9,10,5,10,-9}) , {6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,-4,-2,0,-3,6,-9,-5,10}) , {1,2,3,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,10,0,-3,0,6,7,-9,10,10}) , {1,2,10,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,1,-4,8,-3,6,-1,-5,-1}) , {6,1,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-5,0,2,2,6,7,-9,10}) , {10,2,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,-100,7,0,-9,10,5,-5,-1}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,11,-1,-3,-4,-1,-5,-1}) , {6,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,6,6,7,-9,6,5,10,-9}) , {6,6,7,6,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,10,9,6}) , {1,2,6,7,10,9,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-4,6,0,6,7,-9,10,0}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,6,0,6,7,-9,10,6}) , {6,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-2,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-7}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-100,-1,-2,-5,0,-5,6,7,2}) , {1,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-1,-3,-4,-5,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,3,-5,-3,-4,6,6,7,-9,10,5,10,-9}) , {3,6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-5,-3,-4,6,6,5,7,-9,10,7,-4,-1}) , {6,6,5,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,5,-5,7,-9,10}) , {5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,10,-4,6,0,6,7,-9,10,-3,-4,-4,-9}) , {10,6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,6,8,-9,-5,10,7}) , {6,6,8,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,0,8,6,7,-9,10,6,3}) , {1,3,8,6,7,10,6,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,2,-4,-3,-5,-100,0,0,6,7,-9,10,10,1}) , {2,2,6,7,10,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,9,1,2,2,2,2,1,2}) , {1,1,1,1,9,1,2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,1,0,1,1}) , {2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-10,-4,6,0,6,-5,-9,10,-3,-9,-2}) , {6,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,-1,-2,-5,-4,6,0,6,7,-9,10,5,-7,-9}) , {5,6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-5,0,6,7,2,-9,10,10}) , {1,2,6,7,2,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,-4,6,7,2,-9,10}) , {1,2,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,2,2,2,1,2}) , {1,1,1,1,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,8,-3,6,-2,-1,-5,-1}) , {8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,6,7,-9,10,5,10,-9,-2,10,-9}) , {6,6,7,10,5,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,0,6,7,-9,10,10,6,3}) , {1,3,6,7,10,10,6,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-10,-7,1,1}) , {2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,-2,5}) , {6,6,7,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,6,6,5,7,-9,10,7,-4}) , {6,6,6,5,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,-5,0,0,6,-9,10,10}) , {1,2,6,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-4,6,0,6,7,-9,10}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,2,-4,-4,-5,0,2,2,6,7,-9,10,0}) , {10,2,2,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,1,-5,0,0,6,7,9,-9,10,10}) , {1,2,1,6,7,9,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,2,-4,1,-5,0,0,6,7,9,-9,10,10}) , {1,2,2,1,6,7,9,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,5,3,-1,-2,-5,0,6,7,10,6,6,-9,-5}) , {1,5,3,6,7,10,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,-5,0,6,7,-9,11,0}) , {1,2,6,7,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-5,6,-2,-1,6,-4,-1,8}) , {6,8,6,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-8,1,2,2,2,2,2,2,-100,2}) , {1,1,1,1,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,7,3,-4,-5,0,6,-9,-5,10,-9}) , {1,7,3,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-3,-5,0,0,6,7,-9,10,10,1,7}) , {1,2,6,7,10,10,1,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,0,-9,-3,-3,-4,6,0,6,7,-9,8,10}) , {6,6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,10,-4,-4,-4}) , {1,2,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,10,1,-5,0,0,6,10,9,-9,10,10,0}) , {1,2,10,1,6,10,9,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-2,5}) , {6,6,7,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,6,5,10,-5,6,7,-9,7}) , {6,5,10,6,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,5,-5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-101,-1,-5,0,6,7,-9,11}) , {1,2,6,7,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-5,-3,-4,6,0,6,7,-9,9,10,10,-9}) , {6,6,7,9,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-3,5,-1}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-5,-4,8,-3,-100,6,-1,-1,-5,-1}) , {6,8,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,-1,11,6}) , {1,2,6,11,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-1,-3,-5,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-3,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,11,-1,-3,-4,-1,-5,-1,11}) , {6,11,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,-8,-6}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,11,-1,-3,-1,-5,-1,11}) , {6,11,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,0}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,-1,-5,0,6,7,1,10,-5,-1}) , {1,6,7,1,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,9,-10,-7,1,1}) , {2,9,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-5,0,6,7,2,-9,10,10,-5}) , {1,2,6,7,2,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-5,6,-2,-1,6,-4,-1,8,-1}) , {6,8,6,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,-4,-3,-2,-1}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,-100,-2,-1,-5,-1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,6,-9,10,6}) , {1,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-100,1,-5,0,0,6,7,9,-9,10,10}) , {1,2,1,6,7,9,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,6,-9,10,6,-4,-9}) , {1,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,11,-1,-3,-4,-1,-5,-1,6}) , {6,11,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,6,0,6,7,-9,10,5,-9}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-5,0,6,7,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-3,-2,-1,-5,-1,-1,-2}) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,-5,0,6,10,2}) , {1,2,6,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,-1,-2,-5,-4,6,0,6,-8,-9,10,5,-7,-9}) , {5,6,6,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-4,-3,-2,-1,-5,-1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-100,-5,0,6,7,2}) , {1,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-1,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,5,-5,2,7,-9,10,10,10}) , {5,2,7,10,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-2,-1,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,0,-4,6,6,7,-7,-9,10,6}) , {6,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,-3,-5,0,6,7,-9,10,5}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-1,-2,-5,-3,-4,6,6,0,6,7,-9,10,5,10,-9}) , {11,6,6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,6,2,-7,-4,-4,-5,0,6,-9,10,6,-4}) , {1,6,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,6,-5,-4,8,-3,-100,6,-1,-1,-5,-1}) , {1,6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,-1,6,0,6,7,-8,10,5}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-8,1,1,11,2,2,2,2,2,2}) , {1,1,1,1,1,11,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-2,-2,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,6,2,-7,-4,-4,0,6,-9,10,6,-4}) , {1,6,2,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,6,8,7}) , {8,6,8,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,7,6,6}) , {6,8,7,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,10,6,0,6,7,-9,10,-3,-4,-4,-1}) , {10,6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-100,-1,-6,-5,0,6,7,2}) , {1,2,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-1,-101,-1,6,7,2,-9,10}) , {1,2,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,1,3,-1,-2,-5,0,0,6,7,-9,10,6,6,-9}) , {3,1,3,6,7,10,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,0,6,7,-9,10,-3}) , {6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-5,0,7,6,7,10,-9,10}) , {1,2,7,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-4,8,-3,6,-1,-5,-1}) , {1,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-9,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-101,-9,-9,-9,-9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-2,-5,6,7,-9,-9,10,7}) , {1,2,6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,-1,-9,10,10}) , {1,2,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,-1,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,-1,-2,-5,-100,6,0,6,-8,-9,10,5,-7,-9}) , {5,6,6,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,0,6,6,7,-9,10}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-100,-5,6,7,2,-100}) , {1,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,2,2,2,1,2,-10}) , {1,1,1,1,1,1,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,2,1}) , {1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,2,-7,1}) , {1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,-3,-100,6,-1,-1,-5,-1,-4}) , {6,8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-100,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-5,1,1,2,2,2,2,2,1}) , {1,1,1,1,1,2,2,2,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-5,-10,-2,-1,6,-4,-1,8}) , {6,8,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,2,-4,1,-5,0,0,3,6,7,9,-9,10,10}) , {1,2,2,1,3,6,7,9,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,-9,10,6,10}) , {1,2,6,10,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,7,7,-9,10,5,10,-9}) , {6,7,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-1,-2,-5,-3,-4,5,6,0,6,7,-9,-9,5,10,-9}) , {11,5,6,6,7,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-4,-3,5,0}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,5,-5,7,-9,10,-3}) , {5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,1,7,1}) , {2,1,7,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,3,1,2,2,2}) , {1,1,1,1,1,2,2,2,3,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,0,-4,6,7,-7,-9,10,6}) , {6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,1,2,1,1,1}) , {1,1,1,1,1,2,2,2,1,2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,4,1,2,2,2}) , {1,1,1,1,1,2,2,2,4,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,0,6,7,-9,10,0,5,-9}) , {6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,0,-7,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-100,-9,10,-4}) , {1,2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-101,1,1,1,1,-101}) , {1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-2,-3,-4,-5,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-6,0,8}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-7,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-4,8,8,-2,-100,6,-100,-1,-1,-5,-1,8,-100}) , {6,8,8,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,0,7,-9,10,7,-3,-9}) , {6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,-1,-2,-5,0,6,-5,7,-9,10,10,6,3}) , {3,6,7,10,10,6,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,8,6,7,7,-9,10,1,0,6}) , {1,2,8,6,7,7,10,1,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,3,-5,0,6,7,-9,11,0}) , {1,2,3,6,7,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,1,3,-1,-5,0,0,6,7,-9,10,6,6,-9}) , {3,1,3,6,7,10,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,2,-9,-4,-1,7,-100,1,0,2}) , {2,7,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,10,-4,6,0,6,-7,7,-9,10,-3,-4,1,0}) , {10,6,6,7,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-5,-10,-2,-1,6,-4,-1,8,-1}) , {6,8,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,6,-7,-100,-4,-4,-4,0,6,-9,10,6,-4}) , {1,6,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-2,-4,6,6,1,7,-9,10,5,10,-9}) , {6,6,1,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-2,1,-2,-1}) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,9,-3,2,-4,-5,0,-100,-9,10,-4}) , {1,9,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,-1,-5,0,6,7,1,10,-5,-1,-1}) , {1,6,7,1,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,0,6,7,-9,10,-3,0}) , {6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,2}) , {1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,2,-4,-5,0,6,7,-9,10,1,0,2,0}) , {7,2,6,7,10,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,2,-9,-4,-1,7,-100,1,0,2,-9,-4}) , {2,7,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,0,6,7,-9,10,10,3}) , {1,2,6,7,10,10,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,-3,0,6,-9,10,-4,-4}) , {1,2,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,-4,6,0,6,7,-9,10,5,10,-9,-4}) , {6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,8,6,7,-9,10,6,3,10}) , {1,3,8,6,7,10,6,3,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,6,-7,-9,-100,-4,-4,-4,0,6,-9,10,6,-4,0}) , {1,6,6,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,-4,6,7,2,10}) , {1,2,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,9,-8,-7}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,6,5}) , {6,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,0,6,7,10,7}) , {6,6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,5,4}) , {7,5,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,-1,-2,-5,0,6,-5,7,-9,10,0,6,3}) , {3,6,7,10,6,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-6,0,8,-6}) , {8,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-5,6,-2,-1,6,-4,-1,8,-5}) , {6,8,6,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,1,-5,0,0,6,7,9,-9,10,10,10}) , {1,2,1,6,7,9,10,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-2,-5,-3,2,-4,6,-9,6,7,-9}) , {2,6,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-4,-5,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-9,-4,8,-2,6,-1,-5,-1,6}) , {6,8,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,-10,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,6,7}) , {8,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-2,-1,-1,-2,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-4,-5,0,2,6,7,-9,10}) , {10,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-3,-5,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,8,6,7,7,-9,10,1,0,6,1}) , {1,2,8,6,7,7,10,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,10,-3,-5,11,-1,-3,-4,-1,-5,-1,11}) , {6,10,11,11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,1,2,-1,1,1,1}) , {1,1,1,1,1,2,2,2,1,2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-3,2,-4,-3,-5,0,0,6,7,-9,10,10,1,10,-3}) , {1,2,6,7,10,10,1,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-4,1,-5,0,0,6,7,-9,10,10}) , {1,2,1,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,6,-2,-1,6,-4,-1,8,-5}) , {6,8,6,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-100,-5,2,6,7,2,-100}) , {1,2,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,2,-4,-5,0,6,2,2,6,6,-9,10,-5,2}) , {10,2,6,2,2,6,6,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-10,-7,1,1,1}) , {2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-1,9,-5,0,6,-100,-9,10}) , {1,2,9,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,2,2,2,1,2,-10,2}) , {1,1,1,1,1,1,2,2,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,2,-9,-4,-1,7,-100,1,0,2,-9,-4,-4}) , {2,7,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,2,3,0,2,1,2,-10}) , {1,1,1,1,1,1,2,3,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-2,-5,0,6,-1,7,-9,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,5,4}) , {11,5,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-8,-1,-3,-5,-3,-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,6,5,10,-5,6,7,-8,7}) , {6,5,10,6,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-2,-5,0,6,7,4,-9,10}) , {1,2,6,7,4,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,6,6,7,-9,-1,5,10,-9}) , {6,6,7,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,1,-4,8,-3,7,6,-1,-5,-1}) , {6,1,8,7,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,1,2,-4,-3,-5,0,0,6,7,-10,10,10,1,10,6}) , {1,2,6,7,10,10,1,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,0,6,6,7,-9,10,-4}) , {6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,0,6,7,10,7,-5,0}) , {6,6,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-6,-5,-4,8,8,-2,-100,6,-100,-1,-1,-5,-1,8,-100,-4}) , {8,8,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,5,0,6,7,-9,10,10}) , {5,6,7,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-2,-1,-1,-2,-1,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-6,-5,-4,8,8,-2,-100,6,-100,-1,-1,-5,-1,8,-100,-4,-2}) , {8,8,6,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-2,-4,6,6,7,-9,10,5,10,-9,-2,10,-9}) , {6,6,7,10,5,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-100,-5,0,6,7}) , {1,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,1,-10,0,1,1}) , {2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,0,-4,6,0,6,7,-9,10,5,10,-9,-1,10,6}) , {6,6,7,10,5,10,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-7,-1,-1,11,-1}) , {11}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-100,-1,-5,0,6,7}) , {1,2,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,2,-4,-5,-2,0,6,2,2,6,6,-9,10,-5,2}) , {10,2,6,2,2,6,6,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,2,-4,-3,-5,-2,0,0,6,7,-9,10,10,1,10}) , {7,2,6,7,10,10,1,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-4,1,-5,-1,0,0,6,7,9,-9,10,10,10}) , {2,1,6,7,9,10,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-5,-1,-4,-100,-2,-1,-5,-1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-4,6,0,6,7,-9,10,6,-9}) , {6,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,0,6,7,-9,10,6}) , {6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,2,-9,-4,-1,7,-100,1,2,-9,-4}) , {2,7,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-3,-5,0,6,6,2,-9,10,10,-5}) , {1,2,6,6,2,10,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1,-2,6}) , {8,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,5,0,-5,7,-9,7}) , {5,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,-4,6,0,6,7,-9,10,-3,-4,-4}) , {10,6,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,-5,8,6,7,-9,10,6,10}) , {1,3,8,6,7,10,6,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-4,-2,-5,-3,-4,6,0,6,7,-9,10,-5,0,5,-9}) , {6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({8,-1}) , {8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-100,-2,-1,-3,-4,6,0,6,7,-9,-3,10,6}) , {6,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3,-5,-3,-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-4,-5,0,2,6,7,-9,7,7}) , {2,2,6,7,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,9,0,-4,6,7,2,-9,10}) , {1,2,9,6,7,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-3,-4,-5,-4,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,11,-3,-4,6,-3,-5,0,6,7,-9,10,5}) , {11,6,6,7,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-3,-5,-2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-9,-1,-3,-3,-4,6,0,6,7,-9,8,10}) , {6,6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,1,0,-1,-1}) , {10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-3,8,-5,6,0,11,-6,-9,10,7,7}) , {8,6,11,10,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-1,-2,-5,-3,-4,6,0,6,7,-9,5,10,-9,0}) , {11,6,6,7,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-8,-10,2,2,2,2,2,2,-100,2,-8}) , {1,1,1,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,1,2,1,1}) , {1,1,1,1,1,2,2,1,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,8,-3,6,-2,-1,6,-4,-1,8,8}) , {6,8,6,6,8,8}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-5,-5,-3,-4,6,6,6,5,7,-9,10,7,-4,7}) , {6,6,6,5,7,10,7,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-5,-4,-7,5,-3,0,6,7,-9,10,6,-4}) , {5,6,7,10,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,-7,2,1,2}) , {1,1,1,1,1,2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,6,7,2,-9}) , {1,2,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,-1,-2,-5,-100,6,0,6,10,-9,10,5,-7,-9,0}) , {5,6,6,10,10,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,-1,-2,7,0,6,7,6,6,-9,-5}) , {1,3,7,6,7,6,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-1,-2,-5,-3,-4,6,0,6,7,-9,10,5,10,-9,-9}) , {11,6,6,7,10,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({10,2,-4,-5,-2,5,0,6,2,2,6,6,-9,10,-5,2,-9}) , {10,2,5,6,2,2,6,6,10,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({11,-1,-2,-5,-3,-4,6,0,7,-2,5,10,-9,0}) , {11,6,7,5,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-100,-5,6,7,2,-101,-100}) , {1,6,7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,0,1,0}) , {1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-100,-5,-8,7,2,-100}) , {7,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,-2,-1,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,4,5,6}) , {1,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,1,2,0,3,4,5,0,0,6,0,7}) , {1,2,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,3,4,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,0,0,0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,2,-1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,1,2,2,2}) , {1,1,1,1,1,2,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10,0}) , {1,2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,1,-3,-3,2,2}) , {1,1,1,1,1,2,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,-3,-3,2,2}) , {1,1,1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,-1,1,-3,-3,2,2}) , {1,1,1,1,1,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,99}) , {98,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,-2,-1,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,99,-1}) , {99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-2,1,99,2,2,2,2,-3,1,-3,2,2}) , {1,1,1,1,99,2,2,2,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,0,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,1,1,2,-1,1,-3,3,-3,2,2}) , {1,2,1,1,1,2,1,3,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-4,5,0,6,7,-9,9}) , {5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-2,-3,-4,9}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,5,0,6,7,-9,10,-9}) , {5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-2,-1,-5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-3,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-6,-3,-4,9}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-5,-3,-4,9}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-1,-2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,-3,-3,2,2,2}) , {1,1,1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,99}) , {99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10,0,1}) , {1,2,7,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-4,-5,0,7,-9,10,0}) , {2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1,-1,5,-1}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10,0,1,-5}) , {1,2,7,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-1,-1,0,5,-1}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,6,-4,5,0,6,7,-9,10}) , {6,5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,99,-1,6,-3,-4,-5}) , {99,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,2,-1,-1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,6}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,0}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,-1,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,0,0}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,2,2,2,2,1,2}) , {1,1,1,1,1,1,2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-2,-1,-5,3}) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,0,99,-1,6,-9,-5}) , {98,99,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,-3,2,-5}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-5,-9,-4,-2,-1,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,7,-2,-3,-4,-2,9}) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10,0,2,1}) , {1,2,7,10,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-2,-3,6,-4,5,0,6,7,-9,10}) , {6,5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,-1,-5,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,2,1}) , {1,1,1,1,1,2,2,2,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,1,-3,-4,5,0,6,7,-9,10}) , {1,5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-2,-9,-3,-6,-4,9}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10,0,3,1,0,-4}) , {1,2,7,10,3,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-3,1,1,1,1,2,2,2,2,2,2}) , {1,1,1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-1,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-3,-8,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10}) , {1,2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-3,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-8,-5,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-5,-5,0,6,7,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,6,7,-9,10,2,1,2}) , {1,2,6,7,10,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,-6,1,1,2,2,2,2,2,2}) , {1,1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9,-5,-4,-3,-2,-1,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,-3,-5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,6,1,2,2,2,2,1,2}) , {1,1,1,1,1,6,1,2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({99,3,-2,-1,-5}) , {99,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,6,1,1,2,1,2,2,2}) , {1,1,1,6,1,1,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,99,2,2,2,-3,2,2}) , {1,1,1,1,99,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,0,-1,-1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,2,-4,0,7,-9,10,0}) , {2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,-3,-4,-5,-3,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-2,-1,-5,4}) , {3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,1,1,1,2,-1,1,-3,3,-3,2,2}) , {1,2,1,1,1,1,2,1,3,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-1,0,-1,0,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,6,1,2,2,2,1,2}) , {1,1,1,1,1,6,1,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,10,0,98,3,1,0,-4}) , {1,2,7,10,98,3,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,-2,10,0,98,3,1,0,-4,3}) , {1,2,7,10,98,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,0,5,-1}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,0,7,-9,10,0,2,1}) , {1,2,7,10,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1,0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,2,2,1,2,2,2}) , {1,1,1,1,2,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-2,1,2,-1,1,-3,-3,2,1,2,1}) , {1,1,1,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-3,-4,-5,-3,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,0,99,-1,6,-9,-6}) , {98,99,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,3,-2,-1,-5,4}) , {2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,99,2,2,2,-3,1,2}) , {1,1,1,1,99,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,0,5,-1,0}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-4,-5,0,7,-9,10,0,1,-5,1,7}) , {2,7,10,1,1,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-3,9}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,0,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,6,7,-9,10,2,1,2,2}) , {1,2,6,7,10,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,-2,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,3,-2,-1,-5,4}) , {5,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,99,0,2,2,2,-3,-5,2,1,2,1}) , {1,1,1,1,99,2,2,2,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-6}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-8,-5,-5,-8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,0,99,-1,6,4,-9,-6}) , {98,99,6,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-2,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,2,2,2,2,2}) , {1,1,1,1,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,3,-1,-5,4}) , {2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,6,1,1,2,1,2,2,2}) , {1,1,6,1,1,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,0,-1,-2,-9,-3,4,-6,-4,7,9}) , {3,4,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,2,2}) , {1,1,1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,-1,-2,2}) , {3,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({5,3,-6,-2,-1,-5,4,-1}) , {5,3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-1,-1,-2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,99,-1,-2,-2}) , {99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-1,-3}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,0,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,99,3,-2,-1,-5,-5}) , {7,99,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,-1,-2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,0,-1,-2,-9,-3,4,-6,-4,7,9,4}) , {3,4,7,9,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,-1,-2,-2,2}) , {3,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,6,1,2,2,2,2,2,1,2}) , {1,1,1,1,1,6,1,2,2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-6,99,-1,99}) , {99,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-6,98,0,99,-2,6,-9,-6}) , {98,99,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,6,1,1,2,1,2,2,2,2}) , {1,1,6,1,1,2,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,6,1,1,2,1,2,2,2,2}) , {1,6,1,1,2,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,0,-1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-5,-9,-4,-9,-2,-1,-5,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-8,-3,-4,-5,-3,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,-9,10,0,98,3,1,0,-4}) , {1,2,10,98,3,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-5,-9,-9,-2,-1,-5,-5,-9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,1,2,-4,-5,0,7,-9,-2,10,0,98,3,1,0,-4,3}) , {1,2,7,10,98,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-1,-1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-3,-4,-5,-3,-4,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,1,1,1,1,2,-1,1,-3,-3,2,2}) , {1,1,1,1,1,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,-3,2,2,2,1,2}) , {1,1,1,1,1,1,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,-1,2,-2,2}) , {3,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,10}) , {10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-4,-4,-1,-5,3}) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-4,5,0,6,7,-9,9}) , {5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,-1,-2,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,99,3,-2,-5,-1,-5,-5}) , {7,99,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,-3,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9,-9,-4,-2,-1,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,2,-2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,1,2,1,2,-1,1,-3,3,-3,2,2}) , {1,2,1,1,2,1,2,1,3,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,-3,2,2,2,2}) , {1,1,1,1,1,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-9,-1,7,-3,-3,-4,-2}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,0,-1,-2,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-6,99,-2,99}) , {99,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,-3,2,-5,-3,-2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,-2,99}) , {98,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,0,-5,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,7,-2,-3,-4,-7,-2,9}) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,1,-3,-3,2,2,2}) , {1,1,1,1,1,2,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-1}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-4,0,7,-9,10,0}) , {2,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-2,4,-5}) , {3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,6,-4,5,0,6,7,-9,10,-1}) , {6,5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-2,-5,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,-1,-2,-5,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,2,2,2,2,2}) , {1,1,1,1,1,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-2,-10,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-6,-1,-1,0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,0,99,-9,6,-9,-5}) , {98,99,6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,0,-1,-2,-9,-3,4,-6,-4,7,9,0}) , {3,4,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-5,-9,-4,-6,-2,-1,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-2,-3,-4,98,9}) , {98,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9,-4,-2,98,-1,-5,-5,-9}) , {98}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,98,-2}) , {98}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9,-4,4,-2,98,-1,-5,-5,-9}) , {4,98}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-10,-4,6,-5,0,7,-9,10,0,1,-5}) , {1,2,6,7,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,0,-1,0,0}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-1,-3,-3}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,-6,1,1,2,2,2,2,2,2,2}) , {1,1,1,1,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,98,99}) , {7,98,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,-2,1,2,-1,1,-3,-3,2,2,2,1}) , {1,1,1,1,2,1,2,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,2,-3,0,7,-9,10,0,1}) , {1,2,2,7,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-4,0,-1,-2,-1,-3,-4,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-2,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,6,1,2,1,2,2,2}) , {1,1,6,1,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,-5,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,0,1,1,1,2,2,1,-3,-3,2,2,2}) , {1,1,1,1,2,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-4,-1,-5,3}) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-9,-1,7,-3,-3,-4,10}) , {7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-1,-1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1,7,-2,-3,-4,-7,-2,9}) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-2,-1,-1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,6,-5,-5}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,0,-1,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,4,-1}) , {2,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-1,-1,-1,-1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,6,1,2,2,2,4,1,2}) , {1,1,1,1,1,6,1,2,2,2,4,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,-3,2,-5,3,-3,-2,2}) , {2,3,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,7}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,2,2,1,2,2,2,2}) , {1,1,1,1,2,2,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-1,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,0,-1,-2,-9,-3,4,-6,-4,7,9,2,4}) , {3,4,7,9,2,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,0,-1,-2,-9,-3,4,-4,9,0}) , {3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,6,1,1,2,1,2,2,2,2,3}) , {1,3,6,1,1,2,1,2,2,2,2,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,98,-1,5,-1}) , {98,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-1,-5,4}) , {3,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,1,1,1,2,-1,1,-3,3,-3,2,2,2}) , {1,2,1,1,1,1,2,1,3,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,4,5}) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-4,5,0,6,7,-9,9,-9}) , {5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-4,5,0,6,7,-9,9,-4}) , {5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-2,0,-9,-3,-6,-4,9}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,99,1,1,6,1,2,2,2,1,2}) , {1,1,1,99,1,1,6,1,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-3,-3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-6,-3,-4,9,-3}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,-6,1,1,2,2,2,10,2,2}) , {1,1,1,1,2,2,2,10,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1,-1,99,5,-1}) , {99,5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,1,4,-3,-4,5,0,6,7,4,10}) , {1,4,5,6,7,4,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,97}) , {7,97}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-1}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,4,-2,-1,-5}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-2,-10,4,-4}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-6,-1,-1,0,0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-4,5,7,0,6,7,-9,9,-4}) , {5,7,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,0,-3,-4,-5,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-9,-6,0,2,1}) , {1,2,7,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,3,-2,97,-1,-5,4}) , {3,97,4}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-2,-3,2,-5,3,-3,-2,2,0}) , {2,3,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1,0,0,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-5,-10,-9,-4,-6,-2,-1,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,-4,-5,0,7,-9,10,0,7}) , {2,7,10,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-2,1,2,-10,-4,6,-5,0,7,-9,10,0,1,-5}) , {1,2,6,7,10,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,-7,-1,-3,-4,-3}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,6,7,-9,10,2,1,2,10}) , {1,2,6,7,10,2,1,2,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-9,-4,7,4,-2,98,-1,-8,-5,-5,-9,-5}) , {7,4,98}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,1,1,1,1,2,-1,-3,3,-3,2,2,2}) , {1,2,1,1,1,1,2,3,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,1,2,2,2,1,1,2}) , {1,1,1,1,1,1,2,2,2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-6,-4,-2,-1,-2,-5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2,1,-5,-5}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,-6,1,2,2,2,2,2,2}) , {1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,1,1,2,2,2,2}) , {1,3,1,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-8,-5,97,-8}) , {97}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,-9,1,1,1,2,2,1,-3,-3,2,2,2}) , {1,1,1,1,2,2,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,-7,1,1,-3,2,2,2,2}) , {1,1,1,1,1,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-9,-1,7,-3,-3,-4,10,-4}) , {7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({3,-2,2}) , {3,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-10,-4,6,-5,0,7,-9,10,0,1,-5,1}) , {1,2,6,7,10,1,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-8,-3,-4,-10,-3,-4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,2,1,-3,-3,2,2,1}) , {1,1,1,1,1,2,2,1,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-2,-10,-4,-9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,-1,-2}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-5,-3,-4,9,-5,-5,0}) , {9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-4,-3,0,-5,-1,-1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,99,1,2,2,1,-3,-3,2,2,2,2}) , {1,1,1,1,99,1,2,2,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-2,-1,-9,-3,-6,-4,-4,0}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({6,99,3,-2,-5,-5}) , {6,99,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,2,-7,1,2,6,5,-1,1,-3,-3,2,2}) , {1,1,1,1,2,1,2,6,5,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,2,1,-3,-3,2,2,1}) , {1,1,1,1,1,2,1,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,-7,99,3,-2,-1,-5,-5}) , {7,99,3}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-4,5,7,0,6,7,-9,-4}) , {5,7,6,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,6,7,-9,10}) , {1,2,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,3,6,1,1,2,1,2,2,2,2,3,1}) , {1,3,6,1,1,2,1,2,2,2,2,3,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,1,98,1,-3,2,2,2}) , {1,1,1,1,1,98,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,-1}) , {98}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1,7,-2,-3,-4,-7,-2,9,7}) , {7,9,7}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,1,1,2,2,2,2,2,2}) , {1,1,1,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({98,-2,99,99}) , {98,99,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({2,0,-1,-2,-9,-3,4,-6,-4,7,9}) , {2,4,7,9}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-1,-2,-3,-4,5,-1,6,7,10}) , {5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,2,-4,-5,0,7,-10,-6,0,2,1}) , {1,2,7,2,1}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-3,5,-2,-5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,98,99,99}) , {7,98,99,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({7,1,99}) , {7,1,99}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-9,-4,-2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({1,1,6,1,1,2,1,2,2,2,0,2}) , {1,1,6,1,1,2,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({0,-1,-1,-1,5,-9}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(get_positive({-5,-2,-10,4,-4,-10}) , {4}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


