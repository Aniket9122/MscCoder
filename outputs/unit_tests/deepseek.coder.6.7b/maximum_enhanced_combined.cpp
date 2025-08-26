#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    partial_sort(arr.begin(), arr.begin() + k, arr.end(), greater<int>());   // Sort in descending order using built-in comparator
    return vector<int>(arr.begin(), arr.begin() + k);
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

    if((issame(maximum({-3, -4, 5}, 3) , {-4, -3, 5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4, -4, 4}, 2) , {4, 4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3, 2, 1, 2, -1, -2, 1}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({123, -123, 20, 0 , 1, 2, -3}, 3) , {2, 20, 123}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-123, 20, 0 , 1, 2, -3}, 4) , {0, 1, 2, 20}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5, 15, 0, 3, -13, -8, 0}, 7) , {-13, -8, 0, 0, 3, 5, 15}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1, 0, 2, 5, 3, -10}, 2) , {3, 5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1, 0, 5, -7}, 1) , {5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4, -4}, 2) , {-4, 4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-10, 10}, 2) , {-10, 10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,-4,5}, 3) , {-4,-3,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,-4,4}, 2) , {4,4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,2,1,2,-1,-2,1}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({123,-123,20,0,1,2,-3}, 3) , {2,20,123}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-123,20,0,1,2,-3}, 4) , {0,1,2,20}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,15,0,3,-13,-8,0}, 7) , {-13,-8,0,0,3,5,15}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,0,2,5,3,-10}, 2) , {3,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,0,5,-7}, 1) , {5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,-4}, 2) , {-4,4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-10,10}, 2) , {-10,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,4,5}, 3) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,-4,-5}, 2) , {-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2}, 3) , {2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0,0,0}, 4) , {0,0,0,0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3}, 1) , {3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0}, 1) , {0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,5,10,3,8}, 4) , {3,5,8,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,0,1000}, 3) , {-1000,0,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,2,1}, 1) , {5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,5,4,10,3,8}, 4) , {4,5,8,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2,2}, 3) , {2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,4,4}, 1) , {4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2}, 2) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-3,2}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2,2}, 2) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,1,1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2,2}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,1,1}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3}, 2) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-3,-2,-3,-4,10,-5}, 2) , {-1,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,2,2,2}, 1) , {3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,3}, 1) , {3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,-3,10,-5}, 3) , {-2,-1,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,8,2,2,2}, 2) , {2,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0,0,0,0}, 5) , {0,0,0,0,0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0,0}, 4) , {0,0,0,0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,4,4,4}, 1) , {4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,-3,1,-3}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,2,2,2}, 2) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,-4,-5,-4}, 2) , {-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3}, 2) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0}, 4) , {0,0,0,0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,1}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,1,4,4}, 2) , {4,4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,4,4,1}, 1) , {4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,2,3,4,5}, 3) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-4,-3,1}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,5,4,10,3,8,3}, 3) , {5,8,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,5,4,4,4}, 1) , {5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,2,1}, 2) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,1000,0,0}, 4) , {0,0,0,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,2,3,2}, 2) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2,2,2}, 5) , {2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,10,4,4}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,2,3,2,2}, 2) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,-3,1,-3,-3}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,-3,-3,10,-5}, 4) , {-3,-3,-2,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-3}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,3}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,10,-5}, 3) , {-2,-1,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0,0,0,0}, 4) , {0,0,0,0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,10,-5}, 2) , {-1,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,-999,2}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,1}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,0,1000}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-3,2,2}, 2) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,0,0,0,0,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,10,4}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2,2,2,2}, 4) , {2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,-3,10,10,-5}, 3) , {-1,10,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,-3}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,11,-2,-3,10,-5}, 3) , {-1,10,11}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,-3,-4,-5}, 2) , {-3,-2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0}, 1) , {0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,4}, 1) , {4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,2,3,4,5}, 4) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,5,4,10,3,8,3,8}, 3) , {8,8,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,5,4,10,3,8,3,8,8}, 3) , {8,8,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,-3,10,10,-5}, 5) , {-3,-2,-1,10,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,0,1000,0,0}, 4) , {0,0,1,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-2,-3,8,-5}, 2) , {-1,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,1,3}, 1) , {3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,5,4,10,3,8}, 3) , {5,8,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,4,4,4}, 2) , {4,4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,2,0}, 2) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,2,2,2,2}, 1) , {3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-3,-2}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,4,4,1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,4,5}, 3) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2}, 2) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,2,2,2}, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,2,3,5,2}, 3) , {2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-4,1000}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,1}, 2) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,1,-3}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,-3,-3,10,-5,-5}, 4) , {-3,-3,-2,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,1,-3,1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0,0,1}, 5) , {0,0,0,0,1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,4}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0,0,0,0,0}, 5) , {0,0,0,0,0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 10) , {5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-100,100,-100,100,-100,100,-100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000}, 2) , {-1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,1,-1,1000,-1000,1000,-1000}, 7) , {-1,0,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-399,-400,-400,0}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,-60}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,4,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 11) , {-5,5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000,-1000}, 2) , {-1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,1,-1,1000,-1000,1000,-1000}, 7) , {-1,0,0,1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,1}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,8,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-1000}, 2) , {-1000,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 10) , {5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({11}, 1) , {11}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0,1}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({11,11}, 1) , {11}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0}, 3) , {2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0}, 6) , {-23,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,0,243,-400,-23}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-59}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 6) , {5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0,1}, 3) , {2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,5,5,-5,7,-5,-5,-5,5}, 4) , {5,5,5,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-60,-40,50,-60,-60}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,30,-100,100,-100,100,-100}, 5) , {30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,1}, 8) , {-400,-23,0,1,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,50}, 2) , {50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-1000}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-59,10}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,50}, 3) , {30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,3,-400,-400,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7}, 1) , {7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,-400,-400,0,243,-400,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,-20}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,0,0,1,-1,1000,-1000,1000,-1000}, 7) , {-401,-1,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({11,11}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({998,999,-1000}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({50,1}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,100,-400,-400,0,-400}, 6) , {0,1,2,3,100,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,-399,2,3,-23,243,-400,-400,0,1,3}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,-40}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,8,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,1}, 7) , {-23,0,1,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-100,30,-40,50,-60,-40}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,100,0,1,-1,1000,-1000,1000,-1000}, 8) , {-1000,-401,-1,0,1,100,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,-59,10}, 2) , {50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000,-1000,-1000}, 2) , {-1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,-5,-400,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-60,-40,-40}, 2) , {10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0,1}, 8) , {-400,-400,-23,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,30,-5,-5,-5,-5,-5,5}, 4) , {5,5,5,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,100,8,4}, 3) , {7,8,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,-1000,5,30,-5,-5,-5,-5,-5,5}, 4) , {5,5,5,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,-23,243,-400,-400,0,1}, 2) , {2,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-22,243,-400,-400,0}, 7) , {-400,-22,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,0}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,-40,50,-60}, 3) , {-20,10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,3,-23,243,-400,0,243,-400,-23}, 3) , {100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000,-1000}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,-1,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,243,-400}, 3) , {3,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,50}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,30,-40,50,-60,-40}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-59,-40,-40}, 2) , {10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,1,2,3,-23,243,8,-400,0,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-22,-400,-400,0,-400}, 6) , {-22,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,-1000,-1000}, 1) , {-401}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,30,-40,50,-60,-40}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-40,30,-40,1,-60,-40,-40}, 2) , {1,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({11}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,-400,-400,0,243,-400,-400}, 7) , {0,1,2,3,3,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,-40,50,-59,10}, 2) , {10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,6,30,-40,50,-60}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,-59,10}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-59}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 8) , {5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-20,-1000}, 2) , {-20,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-20,4,243,-400,-400,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,30,50,-60}, 3) , {30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-22,243,-400,-400,0,1}, 6) , {0,1,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,-59,10}, 2) , {10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,30,-100,100,-100,100,-100,30}, 5) , {30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,243,-400,243}, 3) , {243,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,6,30,-40,50,-60,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,5,5,-5,7,-5,-5,-5,5}, 9) , {5,5,5,5,5,5,5,5,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,243,7}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({9,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0,1}, 7) , {-400,-23,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,50}, 4) , {10,30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,-40,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,-22,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 9) , {-5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,1,-1,1000,-1000,1000,-1000}, 6) , {0,0,1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-1000}, 1) , {-1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,244,3,-400,-400,0,243,-400,-400}, 7) , {0,1,2,3,3,243,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,10}, 2) , {10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,30,-40,50,-60,-20}, 4) , {-20,-20,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,10}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({9,2,5,6,6,4,8,4}, 1) , {9}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,243}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,7,4,8,4}, 3) , {5,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,50,6,30,-40,50,-60,-40}, 3) , {30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,243,7,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,6,5,5,-5,-5,-5,-5,-5,5}, 4) , {5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,243}, 9) , {-400,-400,-23,0,1,2,3,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,10}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 10) , {5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-401,2,3,-23,243,-400,0,243,-400,-23}, 3) , {100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-99,100,-100,100,30,-100,100,-100,100,-100}, 5) , {30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-61,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-60,-40}, 2) , {10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,1000,243,-400,-400,0}, 7) , {-400,0,1,2,3,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,243,-400,243}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,-1000,5,30,-5,-5,0,-5,-5,-5,5}, 4) , {5,5,5,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,4,8,4}, 3) , {5,6,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,3,-23,243,-399,-400,-400,0,-23}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-20}, 2) , {-20,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-20,50,-60,-60}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-400,1}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,30,-400,-400,243,-400,243}, 4) , {3,30,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,5,3,-23,243,-400,0,243,-400,-23}, 3) , {100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,7,4,8,4,4}, 3) , {5,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-22,-400,0,0,-400}, 6) , {0,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-61,-20,30,1000,-40,50,-59,10,30}, 2) , {50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,50,-60,49,-21,50}, 4) , {30,49,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-19,999,-20,-1000}, 2) , {-19,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,1,-400}, 8) , {-400,-23,0,1,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,8,-400,0,-401}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 9) , {5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-22,243,-400,-400,0}, 7) , {-400,-400,-22,0,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,8,4}, 4) , {5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,-399,3,-23,243,-61,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({29,10,30,-20,30,1000,-40,50,-59,10}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-400,1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-61,-400,0,1,-400}, 8) , {-61,-23,0,1,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,30,-40,50,-60,50}, 4) , {-20,30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-99,10,30,-40,50,-60,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,1,-1,1000,-1000,1000,-1000,-1}, 8) , {-1,-1,0,0,1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 8) , {5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,3,-400,-400,0,242,-400}, 2) , {242,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-21,10,-20,6,30,-40,50,-60,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-1,-20,30,-40,50,-61,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,29,4,8,4}, 2) , {8,29}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-1000,999}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-22,243,-400,-400,0}, 6) , {-22,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-21,30,-40,50,-60}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,0}, 1) , {0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,243,-1}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-99,100,-100,100,31,30,-100,100,-100,100,-100}, 5) , {31,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,8,-400,0,49}, 2) , {49,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-5,50,-60,-40,-40}, 3) , {-5,10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-59,-40,50,-59}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-401,-40,50,-60,50}, 3) , {30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,30,-40,50,-60,-40,-100}, 3) , {-40,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,-19,3,-23,243,-400,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,5,3,-23,243,-400,0,243,-400,-23}, 5) , {3,5,100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,243,-400,-400,0,243,-400,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,6,100,-40,50,-60}, 3) , {10,50,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,7}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,998,-5,-5,-5,-5,-5,5}, 3) , {5,5,998}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,999,243,-400,-400,0,243,7,-400}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,30,-400,-400,243,-400,243}, 5) , {2,3,30,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,30,50,-60,30,-20}, 3) , {30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,244,3,-400,-400,0,243,-400,-400,3}, 7) , {1,2,3,3,3,243,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,6,7,4,8,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,1,2,3,-23,243,8,-400,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,9,-40,50,-60,-60}, 4) , {9,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-20}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-20,-1000}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,1000,243,-401,-400,-400,0,2}, 7) , {0,1,2,2,3,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,1,2,3,-23,243,8,-400,-400}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-22,243,-400,-400,0}, 6) , {-400,-22,0,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,10}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,1,-1,1000,-1000,1000,-1000}, 7) , {-1000,-1,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,244,3,-400,-400,0,243,-400,-400,50}, 7) , {1,2,3,3,50,243,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,30,-40,50,-60,-40,50}, 2) , {50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,50}, 5) , {-20,10,30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,99,-100,100,-100,100,-100,100,-100,100,-100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-20,999}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-40,30,-40,1,-60,-40,-40,-40}, 2) , {1,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-40,30,-40,1,-60,-40,-40}, 7) , {-60,-40,-40,-40,-40,1,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,99,-100,100,-100,100,-100,100,-100,100,-100,-100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,-40}, 4) , {-40,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,0,30,1,-1,1000,-1000,1000,-1000}, 7) , {-401,-1,0,1,30,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-20,4,243,-400,-400,0,243,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,999,-40,50,-59,10}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,30,50,-60,30,-20}, 3) , {30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,9,30,-40,30,50,-60,30,-20}, 3) , {30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-18,1,-19,3,-23,243,-400,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,0,0,1,-1,1000,-1000,1000,-1000}, 8) , {-1000,-401,-1,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,100,0,1,-1,1000,1000,-1000}, 7) , {-401,-1,0,1,100,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,30,-40,50,-60,-40,50}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,1,-1,1000,-1000,-1,1000,-1000}, 6) , {0,0,1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,0,30,1,-1,1000,-1000,1000,10,-1000}, 7) , {-1,0,1,10,30,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,99,-100,100,-100,100,-100,100,-100,100,-100}, 7) , {-100,99,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,-400,-400,0,243,-400,242,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,3,6,0,243,-400,-23}, 3) , {6,100,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-22,-400,-400,0,-400,-23}, 6) , {-22,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,5,998,-5,-5,-5,-5,-5}, 5) , {5,5,5,5,998}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,1,-1,1000,-1000,1000,-1000,0}, 7) , {-1,0,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-5,50,-60,-40,-59,-40}, 3) , {-5,10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,243}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,-59,10,-40,10,-59}, 2) , {50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,0}, 1) , {0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,5,5,-5,7,-5,-5,-5,5}, 5) , {5,5,5,5,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-99,100,-100,-99,100,31,30,-100,100,-100,100,-100}, 5) , {31,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,243,-20,30,-40,50,10}, 2) , {50,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,6,5,6,5,-5,-5,-5,-5,-5,5}, 4) , {5,5,6,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,244,1,-1,1000,-1000,1000,-1000}, 7) , {-1000,-1,0,1,244,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000,-1000,-1000}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,-1,-40,-60}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,-5,-400,-400,9,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,99,5,5,5,-5,-5,-5,-5,-5,5}, 4) , {5,5,5,99}))){ tests_passed++; } total_tests++;

    if((issame(maximum({9,-20,30,-40,-59}, 3) , {-20,9,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,3,5,6,7,4,8,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,100,8,4}, 4) , {6,7,8,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-59,-40,50,242,50}, 3) , {50,50,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,99,-100,100,-100,100,-100,100,-100,100,-100}, 8) , {-100,-100,99,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,-5,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,1,-1,1000,-1000,1000,-1000,0,1}, 7) , {0,0,0,1,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,1,0,0,1,-1,1000,-1000,1000,-1000}, 6) , {0,1,1,100,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,6,7,4,8,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,1000,243,-401,-400,0,2}, 7) , {0,1,2,2,3,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,243,100,-400,243}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,2,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,29,-60}, 4) , {-20,10,29,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,99,-100,100,-100,100,100,-100,100,-100}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,9,-23,243,-400,-400,243,-400,243}, 3) , {243,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-59,10}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,4,8,4}, 4) , {5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,999}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0}, 7) , {-400,-400,-23,0,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,243,10}, 2) , {243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-59,-40,50,-59,30}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,-59,10}, 3) , {30,50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,1,-400,243}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,1,0,0,1,-1,1000,-1000,1000,-1000}, 2) , {1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,243,2,3,-23,243,-400,-400,0,1,3}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,51,10}, 2) , {30,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-59,-40,-40,30}, 2) , {30,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,6,-5}, 4) , {5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,3,999,243,-400,-400,0,243,7,-400}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4}, 4) , {5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,3,999,243,-400,-400,0,243,998,7,-400}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,50,50}, 4) , {30,50,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-4,-5,-5,5}, 10) , {5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,5,3,-23,243,-400,0,243,-400,-23}, 6) , {2,3,5,100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-61,-400,0,-400}, 8) , {-400,-61,-23,0,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,99,-100,100,-100,100,100,-100,100,-100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20}, 1) , {-20}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,-40}, 5) , {-40,-40,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({30,1,2,3,-23,243,-400,-400,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,-1000,5,30,-5,-5,-5,-5,-5,5,4}, 4) , {5,5,5,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,101,0,1,-1,1000,1000,-1000}, 7) , {-401,-1,0,1,101,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,-400,-400,0,242,-400}, 4) , {3,3,242,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,244,3,-400,-400,0,243,-400,-400,50}, 6) , {2,3,3,50,243,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,-400,243,-400,0}, 7) , {-400,-400,-23,0,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,9,-23,243,-23,-400,-400,243,-400,243}, 4) , {9,243,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-59,-40,-40,30,30}, 2) , {30,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,10,10}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 5) , {5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,998,-5,-5,-5,-5,-5,5,5}, 3) , {5,5,998}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,243,8}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,243,30,-40,50,10}, 2) , {50,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,30,50,-60,30,-20}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,243,3}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,9,243,10,30,10}, 2) , {243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,0,30,-40,50,-59}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0,2,-23}, 3) , {2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-61,-20,30,49,1000,-40,50,-59,10,30}, 2) , {50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,-400,243}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,6,7,4,8,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,9,-21,-40,50,-60,-60}, 4) , {9,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,244,3,2,-399,0,243,-400,-400,50}, 5) , {3,3,50,243,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,-40,-40}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-59,-40,50,242,50,50}, 3) , {50,50,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,99,5,5,5,-5,-5,-5,-5,-5,5,-5}, 4) , {5,5,5,99}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,999,-20}, 2) , {999,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-5,50,-60,-40,-59,-40}, 5) , {-40,-40,-5,10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,30,-400,-400,243,999,243}, 4) , {30,243,243,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,1,-1,1000,-1000,-1,1000,-1000}, 5) , {0,1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-59,50,242,50}, 3) , {50,50,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,-400,0,0,1,-1,1000,-1000,1000,-1000,-1}, 7) , {-1,0,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,50,-60,-40,-40}, 3) , {-40,-5,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 5) , {5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-100,100,-100,100,-100,100,-100}, 7) , {-100,-100,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-21,30,-40,50,-60}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-40,-20,30,999,-40,50,-59,10}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-999,-1000,-1000}, 2) , {-999,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-19,30,-20,50,-60,-60}, 4) , {-19,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,1,2,3,-23,243,8,-400,-400}, 7) , {-23,1,2,3,8,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-61,-40}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5,-5}, 2) , {5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-22,243,-400,-400,1}, 6) , {-22,1,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,1,998,-5,-5,-5,-5,-5,5}, 3) , {5,5,998}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,30,1000,50,9,243,10,30,-59}, 2) , {243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,99,-22,-400,-400,0,-400,-23}, 6) , {0,1,2,3,99,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60}, 5) , {-40,-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,5,-5,-5,-5,6,-5,-5,-5}, 5) , {5,5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,6,5,5,-5,-5,-5,-5,-5,5}, 4) , {5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,30,-40,50,10}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,3,0}, 6) , {0,1,2,3,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-401,101,0,1,-1,1000,-1000}, 7) , {-1000,-401,-1,0,1,101,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-6}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,-59,-40,50,242,50}, 3) , {50,50,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-21}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-61,-20,30,49,1000,-40,50,-59,10,30}, 3) , {49,50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-20,998,999}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-6}, 8) , {5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,2,5,6,7,4,8,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,998,-5,-5,-5,-5,-5,-5,5}, 3) , {5,5,998}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,50,10}, 3) , {30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-41,50,-60,-40}, 4) , {-40,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,30,-399,-100,100,-100,100,-100,30}, 5) , {30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,6,5,5,5,5,5,-5,-5,-5,-5,-5}, 3) , {5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-41,-40,30,50,-60}, 3) , {30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000,-999,1000}, 2) , {1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,243,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,243,0,243,-400,-23}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,0}, 2) , {-5,0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,8,-400,0,-401}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,8,-400,0,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,2,5,6,7,4,-1,8,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-60,-59,-40,-40,30}, 2) , {30,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,1000,243,-400,-400,0}, 8) , {-400,-400,0,1,2,3,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-401,2,-23,243,-400,0,243,-400,-23}, 3) , {100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-5,51,30,-40,-59,-40}, 3) , {10,30,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-6}, 7) , {5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-40,-20,30,999,-40,50,50,10}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,7,4,8,4,7}, 3) , {7,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-5,50,-60,-40,-59,-40}, 6) , {-59,-40,-40,-5,10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,-400,0,243,3}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-400,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-20,50,-60,-60,50}, 4) , {10,30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-19,30,-20,-4,-60,-60}, 4) , {-19,-4,10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,-40,-60}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,-40,50,-60}, 2) , {10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5,-5,5}, 9) , {5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,10,-1000}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,999,243,-400,-400,0,0,243,7,-400,2}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,7,4,8,8,4,4}, 3) , {7,8,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,243}, 4) , {2,3,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-40,-20,30,999,-40,50,50,10}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,244,30,-40,50,-61,-40}, 3) , {30,50,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,243,-1}, 5) , {1,2,3,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,29,-60,10,10}, 4) , {10,10,29,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,-1,1000,-1000,1000,-1000}, 7) , {-1000,-1,0,0,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,100,5,5,2,5,5,243,5,5,5,-5,-5,-5,-5,-5,-5}, 5) , {5,5,5,100,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-59,10}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,3,999,243,-400,-400,0,243,244,998,7,-400}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-60,-40,-39,50,-60,-60}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,3,-23,243,-400,0,243,-400,5}, 3) , {100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,-1,1000,-1000,1000,-1000,1000}, 7) , {-1,0,0,3,1000,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,4,5,5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-4,2,3,1000,243,-400,-400,0,3}, 7) , {-4,0,2,3,3,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,30,-40,50,-60,-40,-20,-100}, 3) , {-20,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,8,4,2}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4}, 1) , {4}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,51,10,-40}, 2) , {30,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,7,4,8,4}, 3) , {4,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 8) , {5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,-400,-400,0,243,-400,242,-400,1}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,-5,5,5,5,-5,-5,-5,-5,-5,-5}, 6) , {5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,-40}, 6) , {-60,-40,-40,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,-23,243,-400,-400,0,1}, 7) , {-400,-23,0,1,3,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,3,-400,-1,-400,0,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,100,5,5,2,5,-4,5,-40,243,5,5,5,-5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,100,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,50,-60,50}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,7,4,100,8,4}, 3) , {7,8,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-21,10,-20,30,-40,50,-60,-40}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,2,5,5,5,5,-5,-5,-5,-5,-5,-5}, 6) , {5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,1}, 4) , {1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,1,-1,1000,-1000,1000,-1000,-1,1}, 7) , {0,0,1,1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,-1,5,5,-22,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 8) , {-1,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,0}, 3) , {2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,-60,6,7,4,100,8,4}, 3) , {7,8,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-19,30,-20,100,-4,-60,-60,10}, 4) , {10,10,30,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,0,-1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-5,50,-60,-399,-40}, 3) , {-5,10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,1,0,1,-1,1000,-1000,1000,-1000}, 6) , {0,1,1,100,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,244,30,50,-40,-40}, 3) , {30,50,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5}, 8) , {5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,-61,50,-60,-1,-40,-60}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,6,30,-40,50,-60}, 4) , {6,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({30,1,2,3,-23,243,-400,-400,0,29,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,50,-60,49,5,-21,50}, 4) , {30,49,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5,5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,49,50,-40,50}, 1) , {50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000,-999,1000,-999}, 2) , {1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,5,30,-40,50,-60}, 5) , {-40,5,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-999,-1000,-1000}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,6,30,-40,50,-60}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-40,-20,30,-40,10,10}, 2) , {10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,243,-400,0}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-60,-40,-40}, 3) , {1,10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-22,243,-400,-400,1}, 7) , {-400,-22,1,1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({998,999,-21}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,5,5,-5,7,-5,-5,-5,5}, 6) , {5,5,5,5,5,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-23,243,3,-400,-400,0,243,-400,243}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-5,50,-60,-40,-40}, 4) , {-40,-5,10,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,1,2,3,-23,243,8,-400,-400}, 4) , {3,8,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,-400,-400,0,243,-400,-400}, 3) , {3,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,-400,-400,0,1}, 7) , {-400,-400,-23,0,1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,-1,5,5,-22,5,5,5,5,-5,-4,-5,-5,-5,-5,-5}, 8) , {-1,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,30,50,-60}, 4) , {10,30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,1,-60,-40,-40,-40}, 1) , {30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,-20,30,-40,50,-60,50,10}, 3) , {30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0}, 4) , {1,2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,1,-400,243,-400}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,3,-400,-400,0,243,-400,-400,3,243}, 3) , {243,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({29,10,30,-20,30,1000,-40,50,-59,10}, 2) , {50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,29,-40,-60,50}, 2) , {29,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 11) , {5,5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,1,0,0,1,-1,1000,-1000,1000}, 2) , {1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,4,5,5,5,5,-1000,5,30,-5,-5,-5,-5,-5,5}, 5) , {5,5,5,5,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,1,0,0}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0,1}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,244,30,-40,-62,50,-61,-40}, 3) , {30,50,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({30,-40,50,-60,51}, 3) , {30,50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,1000,243,-400,-400,0,2}, 7) , {0,1,2,2,3,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,1,2,3,-23,243,8,-400}, 7) , {-23,1,2,3,8,243,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,3,5,3,-23,243,-400,0,243,-400,-23}, 3) , {100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,1,-1,1000,-1000,-1,1000,-1000}, 4) , {1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,51}, 3) , {30,50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-6,10,-20,30,-59,-40,50,-59,30}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,0,-400,-23}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-41,50,-60,-40}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,11,-20,30,-40,50,-60,50,10}, 3) , {30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,-5,-5,-5,-5,5,-5}, 11) , {-5,-5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,2,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 5) , {5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,99,-22,-400,-400,0,-400,-23}, 7) , {-22,0,1,2,3,99,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,243,-400,-400,0,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,-20,4,243,-400,-400,0,243,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({9,-20,30,-40,-59}, 2) , {9,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-99,-1000,-1000,-1000}, 1) , {-99}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,243,10}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 4) , {5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50,-60,-20,-60}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,3}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,3,-400,-1,-400,0,243,-400}, 3) , {3,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,50,-60,51,-40,-40}, 3) , {-5,50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-40,-20,30,999,50,50,10}, 1) , {999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,8,-400,0,-400}, 1) , {243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,51,10,-40}, 4) , {10,10,30,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,-40,50,-59,10,1000}, 2) , {1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,4,5,5,5,5,5,5,-5,7,-5,-5,-5,5}, 6) , {5,5,5,5,5,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,6,5,5,-5,-5,-5,-5,-5,5}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-61,-20,30,1000,-40,50,-59,10,30,30}, 2) , {50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({30,-40,50,-60,51}, 2) , {50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,3,6,0,243,-400,-23,-23}, 3) , {6,100,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,3,-23,243,-399,-400,-400,0,-23}, 5) , {-23,0,1,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,10,6,4,8,4}, 3) , {6,8,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,6,30,-40,51,50,-60}, 3) , {30,50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-61,-20,30,49,1000,-40,50,-59,30}, 2) , {50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-21,244,-1000,-1000}, 2) , {244,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,-23}, 3) , {2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,2,1,3,-23,243,-400,0,243,-400,-23}, 3) , {100,243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,1,-1,1000,-1000,1000,-1000}, 6) , {-1,0,1,3,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-19,999,-20,-1000,-1000}, 2) , {-19,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-59,50,-60,50}, 5) , {-20,10,30,50,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,2,5,5,5,5,-5,-5,-5,-5,-5,-5,5}, 5) , {5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,7,4,100,4}, 3) , {4,7,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,-19,2,-23,243,-400,-400,0,-400}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,0,0,-1,1000,-1000,1000,-1000,1000}, 8) , {-1000,-1,0,0,3,1000,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-20,-40,50,-61,-40}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,-10,-15}, 2) , {-10,-5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,20,30}, 1) , {30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,10,5,7}, 2) , {7,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,0,1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5}, 2) , {5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-3,-4,-1,-2}, 2) , {-2,-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,1000,-999,999}, 2) , {999,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,-10,-15}, 1) , {-5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,243,4,8,4}, 3) , {6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-100,100,-100,100,-100,100,-100,-100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1}, 2) , {-1,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-100,100,-100,100,-100,100,-100,-100}, 6) , {-100,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,999,-999}, 2) , {999,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,4,4}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,-40,50}, 4) , {-20,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,80,3,-23,243,-400,-400,0}, 2) , {80,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,243,4,8,4}, 3) , {6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,-40,-60}, 3) , {-40,10,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,243,4,8,4}, 3) , {6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-100,100,-100,100,-5}, 5) , {-5,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-100,100,-100,100,-100}, 6) , {80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5}, 5) , {-5,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,80}, 2) , {80,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,30,100,-5}, 6) , {-5,30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,999}, 2) , {999,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,9,50,-60}, 3) , {10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,49,-20,30,-40,50,-60}, 3) , {30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,243,4,8,4}, 4) , {5,6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,1,-1,1000,-1000,1000,-1000}, 8) , {-1000,-1,0,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80}, 2) , {80,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,9,49,-60}, 4) , {9,10,30,49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-5}, 5) , {-5,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-60,-1,6,80}, 2) , {6,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-1000,-20,30,-40,50,10}, 4) , {10,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-100,100,-100,100,-100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-60,10,-1,6,80}, 2) , {10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-100,100,-100,100,0}, 6) , {80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,5}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,999}, 5) , {100,100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-40,-1,80}, 2) , {80,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-100,100,-100,100,0}, 7) , {0,80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,9,4,8,4,4}, 3) , {7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,-2}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,-1,-1}, 2) , {-1,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,80}, 2) , {80,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,1,101,-100,30,100,-5}, 6) , {1,30,100,100,100,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-5}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,80,6,80,80}, 2) , {80,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,49}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,49,-20,30,-40,50}, 3) , {30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,-1000,0,1,-1,1000,-1000,1000,-1000}, 8) , {-1000,-1000,-1,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,5,5}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,999,-999}, 3) , {-999,999,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 2) , {5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,4,4,4,4}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({9,49,-20,30,-40,50}, 3) , {30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,5,5,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1000,0,4,1,-1,1000,-1000,1000,-1000}, 8) , {-1000,-1,-1,0,1,4,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,10,-1,6,10,80}, 2) , {10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1}, 1) , {-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,1000,50,-60}, 3) , {30,50,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,-2}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,1,-1,1000,-1000,1000,-1000,0}, 7) , {0,0,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1000,0,5,4,1,-1,1000,-1000,1000,-1000}, 8) , {-1,-1,0,1,4,5,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,243,8,4}, 3) , {6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-5,100}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({11,49,-20,30,-40,50,-60}, 4) , {11,30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,-1,-1}, 3) , {-1,-1,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,-1,6,10,80}, 2) , {10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-100,100,-100,100,-5}, 6) , {-100,-5,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,30,49,-60}, 5) , {-20,10,30,30,49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-100,100,-100,100}, 5) , {-100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,-1,-1}, 4) , {-1,-1,-1,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,5,4,8,4,4,5,5,4}, 2) , {5,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,242,4,8,4}, 4) , {5,6,8,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,5,8,-400,4,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-1,-100,100,-5,100,-100,100,-5,-5,100}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,5,8,-400,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,101,-5,100,-100,-60,100,-5}, 5) , {-5,100,100,100,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,5,4}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,8,-60,-1,6,10,80}, 2) , {10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,51,30,-40,50,-60,50,30}, 4) , {30,50,50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,8,101,-60,-1,6,80}, 2) , {80,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 2) , {5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,4,4}, 2) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,-1}, 3) , {-1,-1,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({79,80,-1,-1}, 3) , {-1,79,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1}, 1) , {-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4}, 4) , {5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-1000,-20,30,50,10}, 4) , {10,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 10) , {-5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,3,243,4,8,4}, 3) , {6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,101,-5,100,-100,-60,100,-5}, 6) , {-5,-5,100,100,100,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,101,-5,100,-100,100,-5}, 5) , {-5,100,100,100,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,-1,-2}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000,1000}, 1) , {1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,10,-1,6,10,80}, 3) , {10,10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-1,-100,100,-5,100,-100,100,-5,-6,100}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-1000,-20,30,-40,50,10,10}, 4) , {10,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-100,100,-100,100,-100,100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-101,100,-5,100,-100,30,100,-5}, 6) , {-5,30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,10,-1,6,10,79}, 3) , {10,10,79}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,9,49,-20,30,-40,50}, 3) , {49,50,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-100,100,-100,100,-100}, 5) , {-100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,5,5,999,5,5,5,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,6,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-99,99,100,-1,-100,100,-5,100,-100,100,-5,-6,100}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-99,-100,100,-100,100,0}, 6) , {80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,0,0}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,99,999}, 5) , {99,100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,242,-100,100,-100,100,-100,100,-100}, 5) , {100,100,100,100,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,8,101,-60,-1,6,80,6}, 2) , {80,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-99,-100,-100,100,0}, 6) , {0,80,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,243,-1,6,80}, 3) , {80,80,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,9,49,-20,29,49,-40,50}, 3) , {49,50,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,8,5,5,5,5,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,6,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,5,5,999,5,5,5,5,-5,-5,-5,-5,-5,5,5}, 9) , {5,5,5,5,5,5,5,6,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-100,100,-100,100,-5,100}, 6) , {-5,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,5,6,7,4,8,4,4}, 1) , {8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-2,-1}, 2) , {-1,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,4,8}, 2) , {8,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,4,4,6}, 2) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({81,-1000}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-101,-1,6,-60,80,81,-2}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,79,-1,-2}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,5,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,79,-1,-2}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,80}, 1) , {80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,49,-20,30,-40,-20,50}, 3) , {30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,2,5,6,7,5,4}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-101,100,-5,-5}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,6,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 4) , {5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,6,80,81,-1,-2}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,-2,-2}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-100,100,-100,100,-5,100}, 7) , {-100,-5,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,0,0,1}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-101,-1,6,-60,80,81,-2,80}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,5,8,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,50,5,5,5,5,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,6,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 10) , {-5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 10) , {-5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,80,-101,-1,6,-60,80,81,-2,80}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,9,49,-20,30,50,-40}, 3) , {49,50,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,-400,4,5,5,5,5,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-100,100,-100,100,-5,100,-100,30,100,-5}, 6) , {-5,30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,0,-5}, 1) , {0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,49,-20,30,-40,-60}, 3) , {10,30,49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-1,-100,100,-5,100,-100,100,-5,-5}, 3) , {100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,10,0,1}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,243,4,8,4}, 2) , {8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,8,101,-60,-1,6,80}, 1) , {101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,1,-1,1000,-1000,1000,-1000,0}, 8) , {-1,0,0,0,0,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,243,4,8,4}, 4) , {5,6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,81,6,7,4,8,4,4,4,8}, 2) , {8,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,8,101,-60,-1,6,80,6,7}, 2) , {80,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,4,4,4,4,4}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,10,-1,6,-1,10,80}, 3) , {10,10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,4}, 9) , {4,4,4,4,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,5,8,-400,4,4,5}, 4) , {5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,4,4,4,5}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,8,5,5,5,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,6,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,29,6,81,-2}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-40,9,49,-20,30,-40,50}, 3) , {30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,-60,-1,6,10,80}, 2) , {10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,244,3,243,4,8,4,4}, 3) , {8,243,244}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,51,4,2,5,6,7,4,4,4,4,4}, 3) , {6,7,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,30,49,-60,30}, 5) , {10,30,30,30,49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-99,-100,-1,-100,100,0}, 6) , {0,80,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-5,100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5}, 1) , {-5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,3,-100,100,999}, 4) , {100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,-2,5,6,7,4,8,4,4,5}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,79,-1,-2}, 6) , {-1,6,79,80,80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({82,-6}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-99,-100,-99,100,-100,100,0}, 6) , {80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-99,-100,-99,100,-100,100,0}, 10) , {-100,-99,-99,0,80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,-5,100,-100,100,-100,100,-100,100,-100,100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,5,5,999,5,5,-101,5,-5,-5,-5,-5,-5}, 9) , {5,5,5,5,5,5,5,6,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,999,100}, 5) , {100,100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-19,30,30,49,-60,30}, 5) , {10,30,30,30,49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,6,80,81,79,-1,-2}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,0,-5}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,10,0,1}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,4,8}, 6) , {4,5,6,7,8,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-100,100,-100,100,-100}, 7) , {-100,80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-1,-4,-100,100,-5,100,999,100,-5,-5,100}, 5) , {100,100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,3,-23,243,-400,-400,0,3}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,242,4,8,4,8}, 4) , {6,8,8,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,-2,5,6,4,8,4,4,5}, 3) , {5,6,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-5,101,-100,100,999,100}, 5) , {100,100,100,101,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,78,-1,-2}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,-2,5,30,6,4,8,4,4,5}, 3) , {6,8,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({243,2,5,6,7,4,8,4,243,4,4}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,5,-100,-5,100,-100,100,-100,100,-100,100,-100,100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,51,4,2,5,6,7,4,4,101,4,4}, 3) , {7,51,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,80,-40,-1,82}, 2) , {80,82}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-100,100,-100,100,-5,100,-100,30,100,-5}, 5) , {30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,6,7,4,8,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,-100,100,100,100,-100}, 7) , {-100,80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,6,7,8,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-101,-100,100,-5,100,3,-100,100,999}, 4) , {100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,5,-5,-5,-5,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-100,999,100,-100,100,-100}, 6) , {100,100,100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,-60,9,49,-20,30,-40,50}, 3) , {49,50,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,5,-100,100,-100,100,-100,100,-100}, 6) , {5,80,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,-2}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,5,2,5,5,4,8,4,4,5,5,4,5}, 2) , {5,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,1,-1,1000,-1000,1000,-1000,1}, 8) , {-1,0,0,0,1,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 10) , {5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,6,7,4,4,4}, 2) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,6,7,4,8,4,4,4}, 9) , {2,4,4,4,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,4,2,5,6,7,4,8,4,4,4}, 9) , {4,4,4,4,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,80,80}, 1) , {80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({49,-20,30,-40,50,-60}, 3) , {30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,49}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-100,100,-100,100,-100,100,-100,100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,10,10,0,1}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,9,4,8,4,4}, 3) , {6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(maximum({79,80,-1,-1,-1}, 3) , {-1,79,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,30,30,49,-60,-20}, 3) , {30,30,49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-100}, 5) , {-5,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({51,100,-100,100,-5,100,-100,30,100,-5}, 6) , {30,51,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,6,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,10,-1,10,79}, 3) , {10,10,79}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,51,10,0,1}, 2) , {10,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,-1,-2}, 3) , {80,80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-999,80,80,-40,-1,82}, 2) , {80,82}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,-5}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-101,100,-5,-5,100}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,78,-1,-2}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,243,3,5,6,7,5,8,4,4,4}, 2) , {8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,-100,100,-100,100,-5,100,-100,30,100,-5,-100}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,5,6,7,5,8,5,-400,4,4,4}, 3) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-101,-100,100,-5,100,3,-100,79,999}, 4) , {100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,81,-1,-1}, 3) , {-1,80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,5,-100,-5,100,-100,100,-100,100,-100,100,-100,100}, 6) , {100,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,5,5}, 11) , {2,4,4,4,4,5,5,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,80,3,-23,243,-400,-400,0,1}, 2) , {80,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,101,-5,100,-100,99,999,999}, 5) , {100,100,101,999,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,3,243,4,8,4}, 4) , {5,6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,49,30,-40,50,30}, 3) , {30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-5}, 3) , {100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,29,2}, 3) , {7,8,29}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,99,100,-100,100,-5,-5}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,51,30,-40,-60,50,30}, 4) , {30,30,50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,5,5,5,999,5,5,5,5,-5,-5,-5,-5,-5}, 8) , {5,5,5,5,5,5,6,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5,5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1,-1}, 2) , {-1,-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,101,101,-100,100,-100,101,-5,100,-100,-60,100,-5}, 4) , {100,101,101,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,-5,0,-5}, 1) , {0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,7,80,81,79,-1,-2}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,5,5}, 5) , {5,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-101,-100,100,-5,100,3,-100,79,999,999}, 4) , {100,100,999,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,5,4,4,4}, 4) , {5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,10,-1,6,10,80}, 6) , {-1,6,8,10,10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1,-1}, 3) , {-1,-1,-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-100,100,-100,100,-5,100,-100,30,100,-5,-5}, 6) , {-5,30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,51,4,2,5,6,7,4,4,4,4,4}, 5) , {4,5,6,7,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,100,-100,99,999}, 5) , {99,100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,3,-23,243,-400,-400,0}, 3) , {2,3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,30,-40,-60,50,30}, 4) , {-20,30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,101,-5}, 4) , {5,5,5,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,-1,1000,-1000,1000,-1000,0}, 8) , {-1000,-1,0,0,0,0,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,2,80,3,243,-400,-400,0}, 2) , {80,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,4,2,5,6,7,4,8,4,4,4,4}, 9) , {4,4,4,4,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,5,6,242,4,8,4}, 4) , {5,6,8,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-1,-100,100,-5,100,-100,100,-5,-6,100}, 3) , {100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,29,2}, 2) , {8,29}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1000,0,4,-1,1000,-1000,1000,-1000}, 8) , {-1000,-1000,-1,-1,0,4,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,81,78,-1}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-20,11,30,-40,50,-60}, 3) , {11,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,30,100,-5,-100}, 3) , {100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,51,30,-40,50,-60,50,-40}, 3) , {50,50,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,6,5,-6,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 5) , {5,5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,99,81,6,2,4,8,4,4,4,8}, 2) , {81,99}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,51,-5,-5,-5,-5,-5,-5}, 10) , {5,5,5,5,5,5,5,5,5,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,4,4,2}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,8,101,101,-60,-1,6,80}, 1) , {101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,-100,100,-100,100,-100,100,-100,100,-100}, 6) , {80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,100,80,-100,100,-100,100,-99,-100,-99,100,-100,100,0,-99}, 6) , {80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,99,-5,100,-100,100,-5}, 5) , {-5,99,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-40,-1000}, 2) , {-1000,-40}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-60,-5,-5,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,30,5,6,7,5,8,-400,4,4}, 3) , {7,8,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,4,4,4,4,4}, 4) , {4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5}, 11) , {-5,5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,-1000}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,7,4,8,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,5,6,243,4,8,4,4}, 4) , {5,6,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,3,-23,243,-400,-400,0,3,3}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,242,4,8,4}, 5) , {4,5,6,8,242}))){ tests_passed++; } total_tests++;

    if((issame(maximum({7,-60,-1,6,10,80}, 3) , {7,10,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,101,-5,100,-101,100,-5,-5}, 4) , {100,100,100,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,5,6,7,4,4,4}, 2) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-100,100,-100,100,-5,100,-100,30,100,-5,-5}, 2) , {100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,6,80,81,-1,-2}, 3) , {80,80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,5,4,4,4,4,4}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-5,100}, 3) , {100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-5,100,-100,100,-5,-5}, 6) , {-5,-5,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-1,-100,100,-5,100,-100,100,-5,-5}, 2) , {100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,0,0,0}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-6,-5}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,5}, 11) , {-5,5,5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,101,-5,100,-100,-60,100,-5,-100}, 6) , {-5,-5,100,100,100,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,-5,-5,-5,5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,5,5}, 10) , {4,4,4,4,5,5,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({6,5,5,4,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 5) , {5,5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-99,-100,-100,100,0,-100}, 6) , {0,80,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,4,5,4,4,4}, 5) , {4,5,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,10,0,1,0}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,80,-1,6,80,81,79,-1,-2}, 1) , {81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({243,2,5,6,83,7,4,8,4,243,29,4,4}, 2) , {243,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,80,-1000}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,6,80,81,-1,-2,-2}, 3) , {80,80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,-99,-100,100,-100,100,0}, 7) , {0,80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,6,80,80,80}, 1) , {80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,-5,5,-5,-5,-5,4,-5,-5}, 3) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,-5,-5,-5,-5,-5,-5,-5}, 10) , {-5,-5,5,5,5,5,5,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,-100,100,-100,100,79,-99,-100,100,-100,100,0}, 6) , {80,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-100,100,-100,100,-5,100,-100,30,100,-5,-5,-5}, 6) , {-5,30,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,-1000,0,4,1,-1,1000,-1000,1000,-1000,0}, 8) , {-1,-1,0,0,1,4,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,10,10,0,100}, 1) , {100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-2,5,6,7,4,8,4,4,5}, 9) , {-2,4,4,4,5,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,1,10,0,1}, 1) , {10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,5,4,4,4}, 1) , {8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-101,-100,100,-5,100,3,-100,79,-99,999}, 4) , {100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,9,100,-101,-100,100,-5,100,3,-100,-99,999,3}, 4) , {100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,80,6,80,81,80,80}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,80,100,-100,100,-100,100,-100,100,-100,100}, 5) , {100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,2,7,5,6,243,8,4}, 3) , {7,8,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-20,30,-40,-60,50,30}, 3) , {30,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,30,9,49,-60}, 4) , {9,10,30,49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,5,2,5,6,7,4,4}, 2) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-100,100,-100,100,-100,100,-100,-100}, 7) , {-100,-100,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,80}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,-100,100,-100,100,-100,100,-100,-100}, 6) , {-100,-100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,30,5,6,7,5,8,4,4}, 3) , {7,8,30}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,-1000,-20,30,-40,50,10,10,10}, 4) , {10,10,30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,6,7,8,4,4,4,7}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,-100,100,-100,100,-6,100}, 6) , {-6,100,100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({49}, 1) , {49}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,6,7,4,8,4,4,4}, 1) , {8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-23,-1,-1,-1}, 2) , {-1,-1}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,10,5,5,5,5,5,5,5,-5,-5,-5,-5,-5}, 10) , {5,5,5,5,5,5,5,5,5,10}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,2,5,6,7,4,8,4,4,5,5,4,8}, 2) , {8,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1,0,4,1,-1,1000,-1000,1000,-1000}, 4) , {1,4,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,-1,-1}, 1) , {80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,79,-1,6,80,80}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1000,999,-999,999,-999}, 2) , {999,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({2,4,2,5,6,7,5,4,4,4,4,4,4}, 3) , {5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,6,7,4,8,5,4,4,4,4}, 2) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-100,100,-100,100,-100,100,-100,100,-100}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({10,49,-20,30,-40,50}, 5) , {-20,10,30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,1,-1,1000,-1000,1000,-1000,1}, 6) , {0,0,1,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,100,101,-5,100,82,-100,99,999,999,-100}, 5) , {100,100,101,999,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,82}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-1000,-100,100,-100,100,-5,100,-100,30,100,-5}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({999,9,49,50,-20,30,-40,50}, 3) , {50,50,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({11,49,-20,30,-40,50,-60}, 7) , {-60,-40,-20,11,30,49,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,-5,-5,-5,6,-5,-5,-5,-5}, 10) , {-5,-5,5,5,5,5,5,5,5,6}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,-100,100,-5,100,-100,100,-5}, 4) , {100,100,100,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,7,4,8,4,4,4}, 3) , {5,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({4,51,4,2,5,6,7,4,4,4,4,4}, 4) , {5,6,7,51}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-59,10,-20,30,9,50,-60}, 2) , {30,50}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,6,80,78,81,79,-1,-2,-1}, 2) , {80,81}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-101,-100,100,-5,100,3,-100,79,999,-100}, 4) , {100,100,100,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({244}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({49,-20,100,-40,50,-60}, 3) , {49,50,100}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-100,100,-100,101,-5,100,-100,-60,100,99,-5}, 6) , {-5,99,100,100,100,101}))){ tests_passed++; } total_tests++;

    if((issame(maximum({5,5,5,5,5,5,5,5,5,5,-5,-5,-5,101,-5}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-1,-2,-1}, 1) , {80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({-5,0,-5,-5,-5}, 1) , {0}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,1,-1,1000,-1000,1000,-1000,1}, 9) , {-1000,-1,0,0,0,1,1,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({100,83,100,-5,101,-100,100,999,100}, 5) , {100,100,100,101,999}))){ tests_passed++; } total_tests++;

    if((issame(maximum({0,0,0,-1,83,1000,-1000,1000,-1000,0,0}, 9) , {-1,0,0,0,0,0,83,1000,1000}))){ tests_passed++; } total_tests++;

    if((issame(maximum({3,3,5,7,4,8,4,4,4}, 4) , {4,5,7,8}))){ tests_passed++; } total_tests++;

    if((issame(maximum({80,-2,-1,-2}, 2) , {-1,80}))){ tests_passed++; } total_tests++;

    if((issame(maximum({1,-6,3,-23,243,-400,-400,3,3}, 2) , {3,243}))){ tests_passed++; } total_tests++;

    if((issame(maximum({8,-60,10,-1,6,10,80}, 7) , {-60,-1,6,8,10,10,80}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


