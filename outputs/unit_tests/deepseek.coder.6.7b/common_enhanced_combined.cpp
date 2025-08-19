#include <algorithm>
#include <vector>
using namespace std;

// Function to get unique elements in a vector
void removeDuplicates(vector<int>& vec)  {
    auto it = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(),it)); 
}

vector<int> common(vector<int> l1, vector<int> l2){
    
    // Sort and remove duplicates from both vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    removeDuplicates(l1);
    removeDuplicates(l2);
 
    vector<int> result;
    
    // Find common elements using set_intersection algorithm
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), inserter(result, result.begin()));
  
    return result;
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

    if((issame(common({1, 4, 3, 34, 653, 2, 5}, {5, 7, 1, 5, 9, 653, 121}) , {1, 5, 653}))){ tests_passed++; } total_tests++;

    if((issame(common({5, 3, 2, 8}, {3, 2}) , {2, 3}))){ tests_passed++; } total_tests++;

    if((issame(common({4, 3, 2, 8}, {3, 2, 4}) , {2, 3, 4}))){ tests_passed++; } total_tests++;

    if((issame(common({4, 3, 2, 8}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,3,34,653,2,5}, {5,7,1,5,9,653,121}) , {1,5,653}))){ tests_passed++; } total_tests++;

    if((issame(common({5,3,2,8}, {3,2}) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({4,3,2,8}, {3,2,4}) , {2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({4,3,2,8}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {1,2,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {1,2,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,3,3}, {2,2,3,3,4,4}) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,10}, {5,7,8}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {6,7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,3,3,3,4}, {1,3,5,6}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {1,2,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {1,2,3,4}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2}, {1,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,9,2,1,2}, {1,9,2,1,2}) , {1,2,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,4,5}, {6,7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3}, {1,3}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {1,5,3,4}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,3,3,4,4}, {2,2,3,3,4,4}) , {2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {6,7,8,9,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,3}, {5,7,8}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {1,2,3,4,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({-50,59,-37,5}, {-50,59,-37,5}) , {-50,-37,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,9,2,2,1,2}, {1,9,2,2,1,2}) , {1,2,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,9,5,6}, {1,3,9,5,6}) , {1,3,5,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({5,1,2,3,4}, {5,1,2,3,4}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {1,2,3,5}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({-50,59,3,5}, {-50,59,3,5}) , {-50,3,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,5,3,1,1}, {1,2,2,3,5,3,1,1}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({9,2,2,1,2}, {9,2,2,1,2}) , {1,2,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,3,4}, {1,5,3,4}) , {1,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,5,3,1}, {1,2,2,3,5,3,1}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,7,8}, {6,9,8,7,8}) , {6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,59,3,4}, {1,2,59,3,4}) , {1,2,3,4,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,4,5,4}, {1,2,3,4,4,5,4}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,10}, {10,5,7,8}) , {5,10}))){ tests_passed++; } total_tests++;

    if((issame(common({-50,59,3,5,3}, {-50,59,3,5,3}) , {-50,3,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({5,1,1,2,3,4}, {5,1,1,2,3,4}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({5,1,2,3,4,4}, {5,1,2,3,4,4}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,3,4,2}, {1,1,2,3,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,10,10}, {1,4,10,10}) , {1,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,8,7,8}, {6,8,7,8}) , {6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,9,2,1,2,2}, {1,9,2,1,2,2}) , {1,2,9}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,7,7,3,8,9}, {6,9,8,7,7,3,8,9}) , {3,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,7,8,8}, {6,9,8,7,8,8}) , {6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,10,1}, {1,4,10,1}) , {1,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,59,5,4}, {1,59,5,4}) , {1,4,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,3,10,1}, {1,4,3,10,1}) , {1,3,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,4,10}, {7,4,10}) , {4,7,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,1}, {1,3,1}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(common({9,2,1,2,2}, {9,2,1,2,2}) , {1,2,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,10}, {1,10,10}) , {1,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,59,3}, {5,7}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,11}, {10,5,7,8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {1,2,3,2,4}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,59,2,3,5,3,1}, {1,59,2,3,5,3,1}) , {1,2,3,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5}, {10,5,6,7,8}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({0,2,3,4,3,4}, {0,2,3,4,3,4}) , {0,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,10,10,4}, {1,4,10,10,4}) , {1,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({0,10,10}, {0,10,10}) , {0,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,3,4,4,5,4,3}, {1,3,2,3,4,4,5,4,3}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,2,3}, {1,5,2,3}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,9,5,6}, {1,10,9,5,6}) , {1,5,6,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,9}, {7,9}) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,2,59,3}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,5}, {1,10,5}) , {1,5,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,3,4,0,3,3,4}, {1,3,5,6}) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {1,2,3,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({-50,59,-37,5,59}, {-50,59,-37,5,59}) , {-50,-37,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({3,5,1,3,2,3,8,1,4}, {3,5,1,3,2,3,8,1,4}) , {1,2,3,4,5,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,5,3,1,2}, {1,2,2,3,5,3,1,2}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({59,-37,5,59,59}, {59,-37,5,59,59}) , {-37,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1}, {1}) , {1}))){ tests_passed++; } total_tests++;

    if((issame(common({-51,59,-52,59,-37,5}, {-51,59,-52,59,-37,5}) , {-52,-51,-37,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,3,4}, {1,2,3,4,3,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,5,3,59,3,1,2}, {1,2,2,3,5,3,59,3,1,2}) , {1,2,3,5,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,10,10,10}, {1,10,10,10,10}) , {1,10}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,9,2,2,1,2,2}, {3,1,9,2,2,1,2,2}) , {1,2,3,9}))){ tests_passed++; } total_tests++;

    if((issame(common({7,3,9,5,6,5}, {7,3,9,5,6,5}) , {3,5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {1,2,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,5,11,6}, {1,10,5,11,6}) , {1,5,6,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,9,6,6}, {1,9,6,6}) , {1,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,1,59,3,4}, {2,2,1,59,3,4}) , {1,2,3,4,59}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,4}, {1,3,4}) , {1,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,11}, {1,11}) , {1,11}))){ tests_passed++; } total_tests++;

    if((issame(common({0,-51,10}, {0,-51,10}) , {-51,0,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,9,9}, {1,4,9,9}) , {1,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({10,5,11,6}, {10,5,11,6}) , {5,6,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {6,7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {5,4,3,2,1}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3}, {9,8,7,6,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {3,4,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {4,5,6,7}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9}, {10,11,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {1,2,3,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,8,8,9,10}, {6,8,8,9,10}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,8,9,10}, {6,9,8,8,9,10}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10}, {1,1,3,4,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,1,1,2,2,2,3,3}, {9,8,7,6,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {4,5,6,7,7}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {4,5,7,6,7,7}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,6,5}, {1,1,1,2,2,2,3,3,3}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,4}, {1,2,2,4}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {4,5,6,7}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3}, {3,4,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({4,5}, {4,5}) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,1,1,2,2,2,3,3}, {1,3,1,1,2,2,2,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,4,8,9}, {1,2,3,5,6,4,8,9}) , {1,2,3,4,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,1,8,9}, {1,11,5,5}) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,6,5}, {9,8,7,6,5}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,3}, {1,2,4,3}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,5,7,8,9}, {10,11,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,9,7,6,5}, {9,8,9,7,6,5}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2,4}, {1,2,3,2,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,2,1}, {1,2,3,4,2,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3,9,4,5,2}, {2,3,9,4,5,2}) , {2,3,4,5,9}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,3,4,4}, {8,2,3,4,4}) , {2,3,4,8}))){ tests_passed++; } total_tests++;

    if((issame(common({6,8,9,10}, {1,1,3,4,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,9,10}, {9,6,8,9,10}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,11,5,5,5}, {1,11,5,5,5}) , {1,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2}, {1,2,3,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,1,2,2,2}, {1,1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,2,3,6,8,9}, {1,5,2,3,6,8,9}) , {1,2,3,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,6,8,9}, {1,2,3,6,8,9}) , {1,2,3,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,1,8,9}, {1,11,5}) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,3,9,4,5,4}, {2,2,3,9,4,5,4}) , {2,3,4,5,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,6,9,2}, {1,2,3,6,9,2}) , {1,2,3,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,6,5,5}, {9,8,7,6,5,5}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10}, {1,1,3,4,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,9,7,7,10,6}, {9,9,9,7,7,10,6}) , {6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,5,3}, {1,2,6,3,4,5,3}) , {1,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,11,5,5}, {1,11,5,5}) , {1,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({10,10,3}, {3,4,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,4}, {2,2,4}) , {2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2}, {4,5,6,7,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7}, {1,1,3,4,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,9,10}, {8,8,9,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,4,5,6,5,7,8,9}, {10,11,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,8,9,10}, {7,7,8,9,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,2,2}, {1,1,3,2,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,3,4,4,3}, {8,2,3,4,4,3}) , {2,3,4,8}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10}, {7,8,9,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,4}, {7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({4}, {4}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,1,2,2,2,2}, {1,1,2,1,1,2,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2}, {1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,3}, {1,2,3,4,3}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,8,4,5,4}, {1,2,3,8,4,5,4}) , {1,2,3,4,5,8}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3,12,12}, {10,3,12,12}) , {3,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {4,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({2,10,2,6,4,4}, {2,10,2,6,4,4}) , {2,4,6,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,8}, {2,2,8}) , {2,8}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,10}, {8,9,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,8,9,9,10,10}, {8,7,8,9,9,10,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({11,1,1,1,2}, {11,1,1,1,2}) , {1,2,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,7,3,2,2}, {1,7,3,2,2}) , {1,2,3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,11,5,6,5,5}, {1,11,5,6,5,5}) , {1,5,6,11}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9,10,9}, {8,9,9,10,9}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,1,1,2,2,2,3,3,3}, {9,8,7,6}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7}, {1,1,3,4,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({4,10,11,12}, {4,10,11,12}) , {4,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,11,4}, {7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10,10}, {7,8,9,10,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2}, {1,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,11,5}, {1,2,3,4,11,5}) , {1,2,3,4,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3,10}, {3,4,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3,10,3}, {3,4,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,1,10,10,9,10}, {8,9,1,10,10,9,10}) , {1,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10,10,10}, {7,8,9,10,10,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,8,7,7,10,6}, {9,9,8,7,7,10,6}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,1,2,3,4,5,8,6,5,7,8}, {10,11,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,11,4}, {7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9,10,9,10}, {8,9,9,10,9,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,5}, {2,2,5}) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(common({-45,34}, {35}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,2,3,3,3,2}, {1,1,1,2,2,2,2,3,3,3,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,6,9,2,1}, {1,2,3,6,9,2,1}) , {1,2,3,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,2,2}, {1,2,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7}, {1,1,4,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3}, {3,4,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({2,9,4,4}, {2,9,4,4}) , {2,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,7,6,5,7,7}, {8,9,7,6,5,7,7}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,5,3,4,3}, {1,12,5,3,4,3}) , {1,3,4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {4,5,6}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({4,10,12}, {4,10,12}) , {4,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({12,3}, {3,4,5,3,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,8,7,10,6}, {9,9,8,7,10,6}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,7,7,6,5,5}, {9,7,7,6,5,5}) , {5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,4,2,2}, {1,2,3,4,4,2,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,7,6,5,3,7}, {8,9,7,6,5,3,7}) , {3,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,11,4}, {7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,8,4,5}, {1,2,3,8,4,5}) , {1,2,3,4,5,8}))){ tests_passed++; } total_tests++;

    if((issame(common({7,9,9,9,7,7,10,6}, {7,9,9,9,7,7,10,6}) , {6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,10,10,9}, {8,9,10,10,9}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,1,10,10,9,10,9}, {8,9,1,10,10,9,10,9}) , {1,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({12,3}, {12,3}) , {3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({0,35,3}, {0,35,3}) , {0,3,35}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,0,4,1,2,2,2,2,1}, {1,1,2,1,0,4,1,2,2,2,2,1}) , {0,1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9}, {8,9,9}) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,3,6,9,2,1}, {2,2,3,6,9,2,1}) , {1,2,3,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9,1}, {1,2,3,4,5,6,7,8,9,1}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,9,2}, {1,2,3,9,2}) , {1,2,3,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,1,2,2,2,2,1}, {1,1,2,1,1,2,2,2,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2}, {1,1,1,2,2,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({0,36,3}, {0,36,3}) , {0,3,36}))){ tests_passed++; } total_tests++;

    if((issame(common({11,1,2,3,12,10,8,9}, {11,1,2,3,12,10,8,9}) , {1,2,3,8,9,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,8,10}, {6,9,8,8,10}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,9,3,10}, {8,8,9,3,10}) , {3,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,4}, {7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({3,12,12}, {3,12,12}) , {3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,2,1}, {1,2,4,2,1}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({35,2,6,10,4,5,3}, {35,2,6,10,4,5,3}) , {2,3,4,5,6,10,35}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,2,2,4}, {1,3,2,2,2,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,2,1,1}, {1,2,3,4,2,1,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({7,9,10,9,7}, {7,9,10,9,7}) , {7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,8,9,10,10}, {7,7,8,9,10,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,8,10}, {8,8,8,10}) , {8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,5,3,3}, {9,8,7,6,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,3,4,4,9,3}, {8,2,3,4,4,9,3}) , {2,3,4,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,8,7,6,10,9}, {9,9,8,7,6,10,9}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,2,2,2,4}, {1,1,3,2,2,2,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,5}, {6,7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,9,9,9,7,7,9,6}, {8,7,9,9,9,7,7,9,6}) , {6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,6,9,2,1,1}, {1,2,3,6,9,2,1,1}) , {1,2,3,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,2}, {1,1,1,2,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({2}, {2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(common({4,12,3,4}, {4,12,3,4}) , {3,4,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2,4,4}, {1,2,3,2,4,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,9,9,8,9,7,7,9,6}, {8,7,9,9,8,9,7,7,9,6}) , {6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,0,1,2,2,2,2,1,2}, {1,1,2,1,0,1,2,2,2,2,1,2}) , {0,1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({34,-45,12,34}, {34,-45,12,34}) , {-45,12,34}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2}, {1,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({-1,3}, {-1,3}) , {-1,3}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10,10,10,10}, {7,8,9,10,10,10,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2,8,12}, {1,2,3,2,8,12}) , {1,2,3,8,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({10,10,-45,3}, {3,4,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({4,12,12}, {4,12,12}) , {4,12}))){ tests_passed++; } total_tests++;

    if((issame(common({34,1,2,2,4}, {34,1,2,2,4}) , {1,2,4,34}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,5}, {3,4,5}) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,1,2,2,2,2}, {1,4,1,2,2,2,2}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({34,-45,12,34,12}, {34,-45,12,34,12}) , {-45,12,34}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,2,3,3,3,2}, {1,1,1,2,2,2,3,2,3,3,3,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({9,7,7,7,1,5}, {9,7,7,7,1,5}) , {1,5,7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({35}, {35}) , {35}))){ tests_passed++; } total_tests++;

    if((issame(common({3,2,3,12,12}, {3,2,3,12,12}) , {2,3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10,10,10,9}, {7,8,9,10,10,10,9}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({4,10,12,10}, {4,10,12,10}) , {4,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,8,11,12,10}, {5,4,8,11,12,10}) , {4,5,8,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,12,7,8,9,10,7}, {6,12,7,8,9,10,7}) , {6,7,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({35,1,2,4,2,1,4}, {35,1,2,4,2,1,4}) , {1,2,4,35}))){ tests_passed++; } total_tests++;

    if((issame(common({10,12}, {10,12}) , {10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,0,2}, {1,1,2,2,2,0,2}) , {0,1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,7,2,2,0,2,2}, {1,1,7,2,2,0,2,2}) , {0,1,2,7}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7}, {6,7,8,9,10,7}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9,9,10}, {8,9,9,9,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,9,10,6}, {9,6,8,9,10,6}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10,10,9}, {7,8,9,10,10,9}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,34,3}, {1,2,6,3,4,34,3}) , {1,2,3,4,6,34}))){ tests_passed++; } total_tests++;

    if((issame(common({5,2,2,4,5}, {6,7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,10,8}, {6,9,8,10,8}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,5,5}, {2,2,5,5}) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,9,7,7,10,6,7}, {9,9,9,7,7,10,6,7}) , {6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,0,3,4,2,1,1}, {1,2,0,3,4,2,1,1}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,9,8,7,6,10,9}, {9,9,9,8,7,6,10,9}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({4,1,2}, {4,1,2}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,7,3,2,2,7}, {1,7,3,2,2,7}) , {1,2,3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,9,8,10,8}, {9,6,9,8,10,8}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,9,10,6,10}, {9,6,8,9,10,6,10}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,9,8,8}, {9,6,9,8,8}) , {6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,9,10,6,9}, {9,6,8,9,10,6,9}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,11,3}, {1,2,3,11,3}) , {1,2,3,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,8,2,3,4,2,1}, {1,8,2,3,4,2,1}) , {1,2,3,4,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,36,3,6,9,2,1,1}, {1,2,36,3,6,9,2,1,1}) , {1,2,3,6,9,36}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10,8,8}, {7,8,9,10,8,8}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}) , {1,2,3,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({3,2,12,3,12,12}, {3,2,12,3,12,12}) , {2,3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,36,9,10,6,9,9}, {9,6,36,9,10,6,9,9}) , {6,9,10,36}))){ tests_passed++; } total_tests++;

    if((issame(common({4,3,3,1,1,1,2,2,2,3,3,3,2}, {4,3,3,1,1,1,2,2,2,3,3,3,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,9,9,9,7,7,10,9,6}, {8,7,9,9,9,7,7,10,9,6}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,4,5,4}, {6,7,8,9,10,7,7,7}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({34,1,2,2,4,4}, {34,1,2,2,4,4}) , {1,2,4,34}))){ tests_passed++; } total_tests++;

    if((issame(common({4,12,2,4}, {4,12,2,4}) , {2,4,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,7,2,1,2,0,2,2,0}, {1,1,7,2,1,2,0,2,2,0}) , {0,1,2,7}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2}, {2,2}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(common({6,1,2,3,4,5,8,6,5,7,8,8}, {10,11,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,12,2,4}, {5,4,12,2,4}) , {2,4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({2,1,1,2,2,2,3,2,3,3,3,2,2}, {2,1,1,2,2,2,3,2,3,3,3,2,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,9,8,11,12,10}, {5,4,9,8,11,12,10}) , {4,5,8,9,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,7,1,1}, {1,1,1,2,2,2,7,1,1}) , {1,2,7}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,9,0,10}, {8,8,9,0,10}) , {0,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,2,2}, {1,3,2,2,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,36,11,5}, {1,2,3,36,11,5}) , {1,2,3,5,11,36}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,9,9,9,7,10,9,6,10}, {8,7,9,9,9,7,10,9,6,10}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({10,7,-45,7,6,1,5}, {10,7,-45,7,6,1,5}) , {-45,1,5,6,7,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,9,9,10,8}, {6,9,9,9,10,8}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7}, {2,1,1,4,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1}, {1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2}, {1,1,1,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({2,1,1,2,2,2,3,3,3,3,2,2}, {2,1,1,2,2,2,3,3,3,3,2,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({13,12,3}, {13,12,3}) , {3,12,13}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,1,2,2,2,2,1,2,1}, {1,1,2,1,1,2,2,2,2,1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,4,5,6,5,7,8,9}, {1,2,4,4,5,6,5,7,8,9}) , {1,2,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({-1,2}, {-1,2}) , {-1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,6,9,8,8}, {9,8,6,9,8,8}) , {6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({7,9,10,9,6,7}, {7,9,10,9,6,7}) , {6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,7,2,1,1}, {1,2,3,7,2,1,1}) , {1,2,3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3}, {1,1,2,2,2,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3,1}, {9,8,7,6,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,3,4,3}, {8,2,3,4,3}) , {2,3,4,8}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9,9,10,10,10}, {8,9,9,9,10,10,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,6,12,7,8,9,0,7}, {7,6,12,7,8,9,0,7}) , {0,6,7,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,4}, {7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,2,3,4,5}, {1,5,2,3,4,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,34,4,5,6,7,8,9}, {1,2,3,34,4,5,6,7,8,9}) , {1,2,3,4,5,6,7,8,9,34}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,9,10,6,9,9,9}, {9,8,9,10,6,9,9,9}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,4,2,5}, {1,1,3,4,2,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,9,7,0,10}, {8,8,9,7,0,10}) , {0,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({4,1}, {4,1}) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,6,7,8,9,1,1}, {1,2,3,4,6,7,8,9,1,1}) , {1,2,3,4,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,1}, {1,12,1}) , {1,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,8,3,2}, {3,5,6,7,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {6,2,7,8,9}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9}, {1,11,5}) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,7,2,2,0,2,2}, {1,1,1,7,2,2,0,2,2}) , {0,1,2,7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,9,2,9}, {1,2,3,9,2,9}) , {1,2,3,9}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,10,7}, {6,7,8,10,7}) , {6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({4,5,6,7,4}, {4,5,6,7,4}) , {4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({69,8,35,10,36,8,1,2}, {69,8,35,10,36,8,1,2}) , {1,2,8,10,35,36,69}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,7,4,5,3,6,7,8,3}, {1,2,3,7,4,5,3,6,7,8,3}) , {1,2,3,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({8,10}, {8,10}) , {8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,35,12,12}, {1,35,12,12}) , {1,12,35}))){ tests_passed++; } total_tests++;

    if((issame(common({13,2,5,5,5}, {13,2,5,5,5}) , {2,5,13}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,4,5,6,7,8,9}, {1,10,5}) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,8,3,2}, {3,5,6,7,4,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,8,2}, {1,1,8,2}) , {1,2,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,6,5,3,4,3}, {1,6,5,3,4,3}) , {1,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {6,7,8,9,8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,7,3,2}, {3,6,7,5,4}) , {3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,2,9,2,2,4}, {1,1,3,2,9,2,2,4}) , {1,2,3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,9,8,8,9}, {9,6,9,8,8,9}) , {6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4}, {7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,3}, {3,5,6,7,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,-1}, {5,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,-45,4}, {4,5,8,6,6}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,3,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,8,7,6,5}, {8,9,8,7,6,5}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,10,4}, {8,9,10,8}) , {10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,8,4,4}, {1,2,3,8,4,4}) , {1,2,3,4,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,-45,4}, {4,5,8,6,6,5}) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,36,9,9,7,7,9,6}, {8,7,36,9,9,7,7,9,6}) , {6,7,8,9,36}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,10,10,9,10}, {8,1,10,10,9,10}) , {1,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({12,3,4}, {12,3,4}) , {3,4,12}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,8,8,7,6,10,9}, {9,9,8,8,7,6,10,9}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,5,5,3,5}, {1,12,5,5,3,5}) , {1,3,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,-45,4}, {34,4,5,8,6,6}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3,10,3}, {3,4,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({7,6,12,7,9,0,7}, {7,6,12,7,9,0,7}) , {0,6,7,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,5,6,5,7,8,9}, {10,11,13}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,2}, {8,2,2}) , {2,8}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9,10,10,10,10}, {8,9,9,10,10,10,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3}, {1,1,2,2,2,3,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {12,5,6,7,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,8,11,12,10}, {5,8,11,12,10}) , {5,8,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({7,9,7,7,6,1,5}, {7,9,7,7,6,1,5}) , {1,5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3,11,9,4,5,2}, {2,3,11,9,4,5,2}) , {2,3,4,5,9,11}))){ tests_passed++; } total_tests++;

    if((issame(common({5,7,7,6,6,8}, {5,7,7,6,6,8}) , {5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3,34,4,5,6,7,9,9,7}, {2,3,34,4,5,6,7,9,9,7}) , {2,3,4,5,6,7,9,34}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,2}, {1,1,1,2,1,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,10,7,8}, {8,9,10,7,8}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2}, {1,1,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,7,2,2,0,2,2}, {1,7,2,2,0,2,2}) , {0,1,2,7}))){ tests_passed++; } total_tests++;

    if((issame(common({9,1,3,2,4,2}, {9,1,3,2,4,2}) , {1,2,3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({4,1,4}, {4,1,4}) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(common({34,1,2,3,4,4}, {34,1,2,3,4,4}) , {1,2,3,4,34}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,3,4}, {2,2,3,4}) , {2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,11,10,8}, {6,9,8,11,10,8}) , {6,8,9,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,10,9,10}, {9,6,8,10,9,10}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,8,8,9}, {6,8,8,9}) , {6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({3,5,6,7,4}, {3,5,6,7,4}) , {3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({10,10,3,10}, {3,4,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,2,2,2}, {1,3,2,2,2,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,10,10,6,10}, {9,6,8,10,10,6,10}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,12,4,4}, {5,4,12,4,4}) , {4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,8,4}, {1,2,3,8,4}) , {1,2,3,4,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,11,4}, {7,8,9,7,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,9,34,9,10,8,9,9}, {6,9,9,34,9,10,8,9,9}) , {6,8,9,10,34}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,7,6,5,7,7,6}, {8,9,7,6,5,7,7,6}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({4,3,3,1,1,1,2,2,3,3,3,2}, {4,3,3,1,1,1,2,2,3,3,3,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {1,2,3,13,4,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,10,6,10,9,9}, {8,9,10,6,10,9,9}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,4,5,4}, {6,7,8,9,10,7,7,7,8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,7,7,10,6,7}, {9,9,7,7,10,6,7}) , {6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9}, {6,7,8,9}) , {6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({0,3,2,2,5}, {0,3,2,2,5}) , {0,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,9}, {8,8,9}) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2,4,4,2}, {1,2,3,2,4,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,8,2}, {1,8,2}) , {1,2,8}))){ tests_passed++; } total_tests++;

    if((issame(common({7,6,6,12,7,8,9,0,7}, {7,6,6,12,7,8,9,0,7}) , {0,6,7,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({9,3,9,2,9,9}, {9,3,9,2,9,9}) , {2,3,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,1,2,2,2,2,1}, {1,4,1,2,2,2,2,1}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({36}, {36}) , {36}))){ tests_passed++; } total_tests++;

    if((issame(common({4,2,3,3,1,1,2,2,2,3,3,3,2,1}, {4,2,3,3,1,1,2,2,2,3,3,3,2,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,7,6,8,5,7,7}, {8,9,7,6,8,5,7,7}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,11,4,1}, {7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3,3}, {10,3,3}) , {3,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,6,8,9,10,6,9}, {8,6,8,9,10,6,9}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,4,5,5}, {6,4,5,5}) , {4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7}, {2,1,1,4,2,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({4,7,11,12,10,8}, {4,7,11,12,10,8}) , {4,7,8,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,70,2,3,2,4,4,2}, {1,70,2,3,2,4,4,2}) , {1,2,3,4,70}))){ tests_passed++; } total_tests++;

    if((issame(common({8,6,7,8,9,10,7}, {2,1,1,4,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,8,9,2}, {1,2,3,5,6,8,9,2}) , {1,2,3,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,4,2}, {1,3,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,4}, {1,3,2,4}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,69,10,7,8}, {8,69,10,7,8}) , {7,8,10,69}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,3,2}, {8,2,3,2}) , {2,3,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3}, {1,1,2,2,2,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,6,2,3,8,4,4}, {1,6,2,3,8,4,4}) , {1,2,3,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,9,2,10}, {8,8,9,2,10}) , {2,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {3,4,35,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,7,2,2}, {1,1,1,2,7,2,2}) , {1,2,7}))){ tests_passed++; } total_tests++;

    if((issame(common({6,-1,7,8,9}, {6,-1,7,8,9}) , {-1,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3,1}, {9,8,7,7,6,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,5,3,3}, {3,4,5,3,3}) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,3,36,11,5}, {1,3,3,36,11,5}) , {1,3,5,11,36}))){ tests_passed++; } total_tests++;

    if((issame(common({4,12,12,12}, {4,12,12,12}) , {4,12}))){ tests_passed++; } total_tests++;

    if((issame(common({34,4,1,4}, {34,4,1,4}) , {1,4,34}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,9,2,2,4}, {1,1,2,9,2,2,4}) , {1,2,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3}, {4,5,3,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,2,2,2,1}, {1,3,2,2,2,2,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,4,1,6,5,13,13,7,8,9,4}, {1,2,4,4,1,6,5,13,13,7,8,9,4}) , {1,2,4,5,6,7,8,9,13}))){ tests_passed++; } total_tests++;

    if((issame(common({34,12}, {34,12}) , {12,34}))){ tests_passed++; } total_tests++;

    if((issame(common({1,6,2,3,8,4,4,4}, {1,6,2,3,8,4,4,4}) , {1,2,3,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,34,4,6,6,8,9}, {1,2,3,34,4,6,6,8,9}) , {1,2,3,4,6,8,9,34}))){ tests_passed++; } total_tests++;

    if((issame(common({36,2,3,3,1,1,2,2,2,3,3,3,2,1}, {36,2,3,3,1,1,2,2,2,3,3,3,2,1}) , {1,2,3,36}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,4,9,6,7,8,9,4}, {1,3,4,9,6,7,8,9,4}) , {1,3,4,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,1,1,2,2,2,3,4,3}, {9,8,7,6}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,9,7,7,10,6}, {9,8,9,7,7,10,6}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,10,35}, {6,7,8,10,35}) , {6,7,8,10,35}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7,9}, {2,1,1,4,5,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({11,1,1,2}, {11,1,1,2}) , {1,2,11}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,5,3,3,4}, {3,4,5,3,3,4}) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3,2,3}, {2,3,2,3}) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({3,2,12,3,12}, {3,2,12,3,12}) , {2,3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({35,5,7,8,7,6,6,8}, {35,5,7,8,7,6,6,8}) , {5,6,7,8,35}))){ tests_passed++; } total_tests++;

    if((issame(common({12,12,3}, {12,12,3}) , {3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4}, {1,2,4}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,5,3}, {3,4,5,3}) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,-45,10,9}, {8,9,-45,10,9}) , {-45,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,8,8,8,11,12,10,12}, {5,4,8,8,8,11,12,10,12}) , {4,5,8,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({11,8,1,10,10,9,10}, {11,8,1,10,10,9,10}) , {1,8,9,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,1}, {1,2,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({3,5,5,3}, {3,5,5,3}) , {3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({7,9,9}, {7,9,9}) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,10,4,10}, {8,9,10,8}) , {10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,10,8,9}, {8,9,10,8,9}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,9,10,6,9,9,9,6}, {9,8,9,10,6,9,9,9,6}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,4,1,4}, {6,4,1,4}) , {1,4,6}))){ tests_passed++; } total_tests++;

    if((issame(common({6,6,1,2,3,4,5,8,6,5,7,8}, {6,6,1,2,3,4,5,8,6,5,7,8}) , {1,2,3,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,8,3,6,5,3}, {8,9,8,3,6,5,3}) , {3,5,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,4,5,1}, {1,1,3,4,5,1}) , {1,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({10,2,3}, {3,4,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,4}, {7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({2,10,2,6,4,4,6}, {2,10,2,6,4,4,6}) , {2,4,6,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,9,9,9}, {9,8,9,9,9}) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,7,6,8,5,7,7,5,6}, {8,9,7,6,8,5,7,7,5,6}) , {5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({34,1,4,1,4}, {34,1,4,1,4}) , {1,4,34}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,7,2,1,1,2}, {1,2,3,7,2,1,1,2}) , {1,2,3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({10,3,1,3,10}, {10,3,1,3,10}) , {1,3,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,3,4,9,3}, {8,2,3,4,9,3}) , {2,3,4,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {4,6,7,7}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,9,10,6,10,6}, {9,6,8,9,10,6,10,6}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,8,7,7,11,6}, {9,9,8,7,7,11,6}) , {6,7,8,9,11}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,36,9,9,10,6,9,9}, {9,6,36,9,9,10,6,9,9}) , {6,9,10,36}))){ tests_passed++; } total_tests++;

    if((issame(common({70,6,7,36,9,10}, {70,6,7,36,9,10}) , {6,7,9,10,36,70}))){ tests_passed++; } total_tests++;

    if((issame(common({8,8,9,9,7,10,10}, {8,8,9,9,7,10,10}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({4,0}, {4,0}) , {0,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,5,3,2}, {1,2,6,3,4,5,3,2}) , {1,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,-45,4}, {1,2,-45,4}) , {-45,1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,1,2,2,2,2,2}, {1,4,1,2,2,2,2,2}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9,35,9,10}, {8,9,9,35,9,10}) , {8,9,10,35}))){ tests_passed++; } total_tests++;

    if((issame(common({5,6,7,4}, {5,6,7,4}) , {4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({7,10,8,6,7,6}, {7,10,8,6,7,6}) , {6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,1,5,2,1,2}, {1,4,1,5,2,1,2}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,7,10,7,9,8}, {6,7,8,9,7,10,7,9,8}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3,4,5}, {2,3,4,5}) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,7,5,7,9}, {8,9,7,5,7,9}) , {5,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2,4,1}, {1,2,3,2,4,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,7,3,2}, {3,6,7,69,5,4,6}) , {3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,9,8,9}, {9,6,9,8,9}) , {6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({2,1,1,4,2,5,4}, {2,1,1,4,2,5,4}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,-45,4,5,6,7,8,8}, {10,11,10,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,7,2,2,0,2,2,2}, {1,2,1,7,2,2,0,2,2,2}) , {0,1,2,7}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,9,10,10}, {9,8,9,10,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,70,2,3,2,4,4,1}, {1,70,2,3,2,4,4,1}) , {1,2,3,4,70}))){ tests_passed++; } total_tests++;

    if((issame(common({9,6,8,9,8,10,8,9,9}, {9,6,8,9,8,10,8,9,9}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({2,1,1,4,2,5,4,4}, {2,1,1,4,2,5,4,4}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({10,10,3,10}, {3,35,5,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({8,4,5,3}, {8,4,5,3}) , {3,4,5,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,8,2,8}, {1,1,8,2,8}) , {1,2,8}))){ tests_passed++; } total_tests++;

    if((issame(common({34,1,2}, {34,1,2}) , {1,2,34}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,5,1,1,2}, {1,12,5,1,1,2}) , {1,2,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({7,6,6,12,7,8,9,0,0,7}, {7,6,6,12,7,8,9,0,0,7}) , {0,6,7,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({7,9,9,10}, {1,1,3,4,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,7,3,2,2,7,1}, {1,7,3,2,2,7,1}) , {1,2,3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,11,4,2,5}, {1,1,11,4,2,5}) , {1,2,4,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({12,1,1,2}, {12,1,1,2}) , {1,2,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,2,2,2,2,1,3}, {1,3,2,2,2,2,1,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,35,0,11,9,4,1,2,2,2,2,1}, {1,1,2,35,0,11,9,4,1,2,2,2,2,1}) , {0,1,2,4,9,11,35}))){ tests_passed++; } total_tests++;

    if((issame(common({9,9,9,7,7,10,6,9}, {9,9,9,7,7,10,6,9}) , {6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({2,10,3,6,4,4}, {2,10,3,6,4,4}) , {2,3,4,6,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,36,2,11,5,5}, {1,36,2,11,5,5}) , {1,2,5,11,36}))){ tests_passed++; } total_tests++;

    if((issame(common({6,1,2,3,4,5,8,6,5,7,8,8}, {10,11,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,2,1}, {1,1,1,2,2,2,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({3,5,6}, {3,5,6}) , {3,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,35,5,1}, {1,1,3,35,5,1}) , {1,3,5,35}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,11,4,4}, {7,8,9,7,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({10,8,9,10,9}, {10,8,9,10,9}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,10,35,6}, {8,10,35,6}) , {6,8,10,35}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,9,3,9,8,9,7,7,9,6}, {8,7,9,3,9,8,9,7,7,9,6}) , {3,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,7,5}, {3,4,7,5}) , {3,4,5,7}))){ tests_passed++; } total_tests++;

    if((issame(common({2,7,6,6,12,7,8,9,0,7}, {2,7,6,6,12,7,8,9,0,7}) , {0,2,6,7,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,9,9,10,10}, {8,9,9,9,10,10}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({3,5,6,5}, {3,5,6,5}) , {3,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,7,6,1,5}, {7,7,7,6,1,5}) , {1,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,9,10,7,7}, {7,8,9,10,7,7}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,4,3}, {1,2,6,4,3}) , {1,2,3,4,6}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,10,9}, {8,9,10,9}) , {8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({2,1,1,2,2,2,2,3,3,3,2,2,1}, {2,1,1,2,2,2,2,3,3,3,2,2,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,1,5,2,1,2,1}, {1,4,1,5,2,1,2,1}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({2,1,1,4,2,6,5,4,4}, {2,1,1,4,2,6,5,4,4}) , {1,2,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2,4,5,4}, {1,2,3,2,4,5,4}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,8,2}, {8,2,8,2}) , {2,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,0,3,4}, {1,2,0,3,4}) , {0,1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({9,2,3,6,9,9,2,1}, {9,2,3,6,9,9,2,1}) , {1,2,3,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({36,2,3,3,2,1,1,2,2,2,3,3,3,2,1}, {36,2,3,3,2,1,1,2,2,2,3,3,3,2,1}) , {1,2,3,36}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,1,1,2,2,2,3,3,3,3}, {1,3,1,1,2,2,2,3,3,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,2,-45,4}, {8,1,2,-45,4}) , {-45,1,2,4,8}))){ tests_passed++; } total_tests++;

    if((issame(common({8,12,8,8,4}, {8,12,8,8,4}) , {4,8,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5,2,10,3,10,6,8,9}, {1,5,2,10,3,10,6,8,9}) , {1,2,3,5,6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,4,4}, {1,2,4,4,4}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({8,9,1,10,69,10,9,10}, {8,9,1,10,69,10,9,10}) , {1,8,9,10,69}))){ tests_passed++; } total_tests++;

    if((issame(common({11,8,8,9,10}, {11,8,8,9,10}) , {8,9,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({10,10,-45,3}, {10,10,-45,3}) , {-45,3,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,1,8,9}, {11,5,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,35}, {1,35}) , {1,35}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,1,8,9}, {11,5,5,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({6,9,8,8,3,9}, {6,9,8,8,3,9}) , {3,6,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3}, {3,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({69,8,3,10,36,8,1,2}, {69,8,3,10,36,8,1,2}) , {1,2,3,8,10,36,69}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,6,7,6,1,35,5,6}, {7,7,6,7,6,1,35,5,6}) , {1,5,6,7,35}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,7,9}, {1,1,3,4,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,8,9,2}, {1,2,3,5,8,9,2}) , {1,2,3,5,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,4,11}, {1,2,5,4,11}) , {1,2,4,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,3,4,4,9,8}, {8,2,3,4,4,9,8}) , {2,3,4,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {3,2,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {5,6,7,8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {4,5,6}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,3,3}, {2,2,3,3,4}) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,4,5,5}, {6,7,8,9,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,4,2}, {1,2,3,4,4,2}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9,5}, {10,11,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3}, {1,1,1,2,2,2,3,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,5}, {6,7,8,9,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,1}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({9,99}, {1,2,3,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3}, {9,8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,4,6,5}, {9,8,7,4,6,5}) , {4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3,1}, {9,8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,6,10,5}, {9,8,7,6,10,5}) , {5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3,1}, {9,8,7,6,10,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,1}, {1,1,1,2,2,2,3,3,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({4,5,6,7}, {4,5,6,7}) , {4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,3}, {5,4,3,2,3}) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {6,7,5,8,9,10}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,4,5}, {1,4,4,5}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3}, {9,8,7,6,5,8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9}, {10,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {-46}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5}, {6,5,8,9,10,8}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,7,8,9,5}, {1,2,3,4,5,6,7,7,8,9,5}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,5}, {1,2,5,3,5}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,8}, {1,2,5,3,8}) , {1,2,3,5,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3,1}, {8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3,1}, {8,7,6,11,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,2,2,1}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,4,5}, {1,2,5,3,4,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9,5}, {10,11,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,11,7,8,9}, {1,2,3,4,5,6,11,7,8,9}) , {1,2,3,4,5,6,7,8,9,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5}, {1,2,3,5}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,1}, {1,2,3,4,5}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,7,8,9,5,5}, {1,2,3,4,5,6,7,7,8,9,5,5}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,1,1,2,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,7,8,9,5,3,7}, {1,2,3,4,5,6,7,7,8,9,5,3,7}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,4,5,5}, {6,7,8,9,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,1,2,3,12,3}, {5,1,2,3,12,3}) , {1,2,3,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,4,5}, {6,7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,5,10,5}, {8,7,2,5,10,5}) , {2,5,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9,3,5}, {10,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,1,2,2,3,3,3}, {1,1,1,1,2,2,3,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,2,3,4,4,2}, {1,10,2,3,4,4,2}) , {1,2,3,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,5}, {-46}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,7,9,8,12,9,10}, {6,7,7,9,8,12,9,10}) , {6,7,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,0,8,9,3,5}, {10,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,3,6}, {1,12,3,6}) , {1,3,6,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3,1}, {9,8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,4,5,5}, {6,7,8,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,99,2,3,4,5,6,7,8,9}, {1,2,99,2,3,4,5,6,7,8,9}) , {1,2,3,4,5,6,7,8,9,99}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,1}, {1,2,3,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4}, {3,4}) , {3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,6,2,3,4,5,5}, {1,6,2,3,4,5,5}) , {1,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,4,5,1}, {6,7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,5,10,8,9,10}, {6,7,5,10,8,9,10}) , {5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,11,4,7,8,9,3,7}, {1,2,3,4,5,6,11,4,7,8,9,3,7}) , {1,2,3,4,5,6,7,8,9,11}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,0,2,3}, {5,4,3,0,2,3}) , {0,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9,3,5,4}, {10,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,4}, {1,2,4,4}) , {1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,5,10,8,9,8,6}, {6,7,5,10,8,9,8,6}) , {5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,5}, {6,5,8,9,10,8}) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,4}, {6,7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,6}, {6,7,8,9,6}) , {6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,3,5,5,5,5}, {7,8,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,3,5,5,5,5}, {7,8,10,8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,2,5}, {1,2,5,3,2,5}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,7,8,9,3,5,4}, {1,2,3,5,6,7,8,9,3,5,4}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,5,10,5,10}, {8,7,2,5,10,5,10}) , {2,5,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,2,3,4,3,5}, {5,4,3,2,1}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,3,4,5}, {5,7,8,9,9}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,4,12,5}, {1,4,4,12,5}) , {1,4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,5}, {1,2,6,3,4,5}) , {1,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,10,10}, {6,7,8,9,10,10}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,9,9,10,10}, {6,7,8,9,9,9,10,10}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,4,5,5}, {6,7,8,9,10,10,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3}, {11,8,7,6,5,8}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,0,2,2}, {5,4,3,0,2,2}) , {0,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,1,2,2,3,3,3,1,2}, {1,1,1,2,1,2,2,3,3,3,1,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,0,6,10,12}, {1,1,1,2,2,2,3,3,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,10,5,10,10,11}, {8,7,2,10,5,10,10,11}) , {2,5,7,8,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,3}, {8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,3,2,3}, {5,4,3,2,3,2,3}) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,5,5,5,5}, {12,7,8,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,6,4,3,0,2,3}, {5,6,4,3,0,2,3}) , {0,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,4,5,1,2}, {6,7,8,9,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9,3,5}, {10,12,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({4,4}, {4,4}) , {4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,8,9,3,5}, {10,12,12,12,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,9,9,9,10,10,10}, {6,7,8,9,9,9,10,10,10}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,11,5,6,7,8,9,3,5}, {10,12,12,12,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({4,5,6,8,7}, {4,5,6,8,7}) , {4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,11,4,7,8,6,8,3,7}, {1,2,3,4,5,6,11,4,7,8,6,8,3,7}) , {1,2,3,4,5,6,7,8,11}))){ tests_passed++; } total_tests++;

    if((issame(common({6,8,11,9,10}, {6,8,11,9,10}) , {6,8,9,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({3,5,6,7}, {3,5,6,7}) , {3,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({0,2,3,4,5}, {5,4,3,2,1}) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,6,-46,9,9,10,10}, {6,7,8,6,-46,9,9,10,10}) , {-46,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,4,5,6,7,7,8,9,5,3,7}, {1,2,4,5,6,7,7,8,9,5,3,7}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {3,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,5,5,10}, {8,7,2,5,5,10}) , {2,5,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({5,1,12,3,6}, {5,1,12,3,6}) , {1,3,5,6,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,2,1,4,5,5}, {6,2,1,4,5,5}) , {1,2,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,4,5,6,7,7,8,5,3,7}, {1,1,4,5,6,7,7,8,5,3,7}) , {1,3,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({6,2,1,4,5}, {6,2,1,4,5}) , {1,2,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3,1}, {9,8,7,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,1}, {4,1,2,3,9,7}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({4,3,2,1}, {4,3,2,1}) , {1,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({4,3,2}, {4,3,2}) , {2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,2,2,1}, {1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,5,3}, {4,5,6,7,6}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,4,5,5}, {6,10,8,9,10,10,6}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4}, {0,5,6,7}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({7,1,2,1,3,5,5,5,5}, {7,8,10,11}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,5,10,8,10}, {6,7,5,10,8,10}) , {5,6,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({-46,9,8,7,6,10,5}, {-46,9,8,7,6,10,5}) , {-46,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {-46,-46}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,6,6,10,5,9}, {9,8,7,6,6,10,5,9}) , {5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,4,5}, {6,7,8,9,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,2,8,2,1,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3,1,2}, {9,8,7,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,4,5,4}, {1,4,4,5,4}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,3,2,3,3,3}, {1,1,1,2,2,3,2,3,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,3,3,3,1}, {1,1,2,1,3,3,3,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3}, {9,8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,8,5}, {1,2,5,3,8,5}) , {1,2,3,5,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,1}, {1,1,1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({4,3,5,3,6,8,10}, {4,3,5,3,6,8,10}) , {3,4,5,6,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,5}, {5,4,3,2,1}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,99,2,3,5,4,5,6,7,8,9}, {1,2,99,2,3,5,4,5,6,7,8,9}) , {1,2,3,4,5,6,7,8,9,99}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,4,4,12,5}, {3,1,4,4,12,5}) , {1,3,4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,3,0,5,5,5,5,1}, {1,2,1,3,0,5,5,5,5,1}) , {0,1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,10,8,9,10,10}, {6,7,10,8,9,10,10}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,5,5}, {10,8,9,10,10,6}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,7,0,8,9,3,5}, {10,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({2,5,3,5}, {2,5,3,5}) , {2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,8,5,12,5,8}, {1,8,5,12,5,8}) , {1,5,8,12}))){ tests_passed++; } total_tests++;

    if((issame(common({7,10,8,9,9}, {7,10,8,9,9}) , {7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({0,8,7,4,6,5}, {0,8,7,4,6,5}) , {0,4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,1,2}, {5,4,3,2,1,2}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,8,7,8,9,9,3,5,4}, {10,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({10,8,9,10,10,6}, {10,8,9,10,10,6}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,5,3}, {1,10,3,4,5,3}) , {1,3,4,5,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,1,3,5}, {6,7,5,8,9,10}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,0,2,2,2,2}, {1,0,2,2,2,2}) , {0,1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({-46,4,0,4}, {-46,4,0,4}) , {-46,0,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,4,5,5}, {1,4,4,5,5}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,3,5,5,5,5}, {8,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,5,5}, {5,4,5,5}) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3}, {3,4,3}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,6,5}, {1,2,5,3,6,5}) , {1,2,3,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1}, {1,1,2,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,4,5}, {5,7,8,9,9}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({10,12,12,12,10}, {10,12,12,12,10}) , {10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,-46,2,2,2}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,12,2,4,4}, {8,1,12,2,4,4}) , {1,2,4,8,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,3,9}, {1,12,3,9}) , {1,3,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({9,7,6,5}, {9,7,6,5}) , {5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,3,3,5,5,5}, {1,2,1,3,3,5,5,5}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({5,1,12,3}, {5,1,12,3}) , {1,3,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,3,3,3,1}, {9,8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,99,2,3,5,4,5,6,7,8,9,6}, {1,2,99,2,3,5,4,5,6,7,8,9,6}) , {1,2,3,4,5,6,7,8,9,99}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,7,5,6}, {1,2,5,3,7,5,6}) , {1,2,3,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,6,10,12}, {9,8,7,6,10,12}) , {6,7,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,99}, {6,5,8,9,10,8}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,4,6}, {1,1,1,2,2,2,3,4,6}) , {1,2,3,4,6}))){ tests_passed++; } total_tests++;

    if((issame(common({-46,1,4,4,5,5}, {-46,1,4,4,5,5}) , {-46,1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,7,0,8,9,3,5}, {10,12,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,2,4,5,5}, {6,7,8,-46,10,10,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,6,4,3,-46,0,2,3,-46}, {5,6,4,3,-46,0,2,3,-46}) , {-46,0,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,0,6,6,10,5,9}, {9,8,0,6,6,10,5,9}) , {0,5,6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({5,1,12,6,3}, {5,1,12,6,3}) , {1,3,5,6,12}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,10,6}, {9,8,7,10,6}) , {6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,2,5,5,10}, {7,7,2,5,5,10}) , {2,5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(common({12,12}, {12,12}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(common({7,1,2,1,3,5,5,5,5}, {8,99,7,8,10,9,11,9}) , {7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,7,0,8,9,3,5,9}, {1,2,3,5,6,7,0,8,9,3,5,9}) , {0,1,2,3,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,-46,4,3,5,5}, {1,2,1,-46,4,3,5,5}) , {-46,1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,10,12}, {1,1,2,2,2,3,3,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,6,4,3,-46,0,2,3,2}, {5,6,4,3,-46,0,2,3,2}) , {-46,0,2,3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({12,12,12,12}, {12,12,12,12}) , {12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,7,5,6,2}, {1,2,5,3,7,5,6,2}) , {1,2,3,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({12,3,6}, {12,3,6}) , {3,6,12}))){ tests_passed++; } total_tests++;

    if((issame(common({5,-46,3,2,3,2,3}, {5,-46,3,2,3,2,3}) , {-46,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,2,5,5,10,2}, {7,7,2,5,5,10,2}) , {2,5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,4,5,3,1}, {6,7,8,9,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,-46,7,6,10,12}, {9,-46,7,6,10,12}) , {-46,6,7,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,10,9,10,10,10}, {6,7,10,9,10,10,10}) , {6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,4,5,1}, {1,4,4,5,1}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,10,5,10}, {8,7,2,10,5,10}) , {2,5,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,5,5,5}, {5,4,5,5,5}) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3}, {9,8,7,6,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,9,4,4,4}, {1,2,9,4,4,4}) , {1,2,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,5,3}, {4,1,5,6,7,6}) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,11,5}, {1,11,5}) , {1,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,9,8,12,9,10}, {6,7,9,8,12,9,10}) , {6,7,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,6,4,3,0,2}, {6,6,4,3,0,2}) , {0,2,3,4,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,7,2,3,3,3,1,2}, {1,1,2,7,2,3,3,3,1,2}) , {1,2,3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,5,3,5}, {3,4,5,3,5}) , {3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,8,2,2,1,2}, {1,1,2,1,8,2,2,1,2}) , {1,2,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,1,2,2,3,3,3,2,2}, {1,1,1,2,1,2,2,3,3,3,2,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({0,2,3,4,5}, {5,4,3,2,1,1}) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({9,0,6,4,6,10,5,9,0}, {9,0,6,4,6,10,5,9,0}) , {0,4,5,6,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,3,4,5,6,7,8,9}, {10,11,12,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,5,12,5,8}, {9,8,5,12,5,8}) , {5,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,2,3,4,4,1,3}, {1,10,2,3,4,4,1,3}) , {1,2,3,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({0,2,4,5}, {5,4,3,2,1}) , {2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,5,5}, {6,7,8,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3,1,2}, {1,1,2,2,2,3,3,3,1,2}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,4,4,12,5,12}, {3,1,4,4,12,5,12}) , {1,3,4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,7,7,8,9,5}, {1,2,3,5,6,7,7,8,9,5}) , {1,2,3,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({9,0,7,6,4,6,10,5,0}, {9,0,7,6,4,6,10,5,0}) , {0,4,5,6,7,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({-47,-46,-46}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,4,4,12,5}, {8,1,4,4,12,5}) , {1,4,5,8,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,4,5,5}, {1,2,1,4,5,5}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,1,3,2,2,3,3,3,2,99,2}, {1,1,1,2,1,3,2,2,3,3,3,2,99,2}) , {1,2,3,99}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,2,5,5,10,4,2}, {7,7,2,5,5,10,4,2}) , {2,4,5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(common({12,7,8,8,9,9}, {12,7,8,8,9,9}) , {7,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,2,1,4,5,5,5}, {6,2,1,4,5,5,5}) , {1,2,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({12,13,3,6}, {12,13,3,6}) , {3,6,12,13}))){ tests_passed++; } total_tests++;

    if((issame(common({12,7,8,8,9}, {12,7,8,8,9}) , {7,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,2,7,8,9}, {1,2,3,4,5,6,2,7,8,9}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({2,2,5,3,2,5}, {2,2,5,3,2,5}) , {2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({3,1,4,4,12,5,4}, {3,1,4,4,12,5,4}) , {1,3,4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,9,8,12,9,10,8,9}, {6,7,9,8,12,9,10,8,9}) , {6,7,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({8,0,6,10,12}, {1,1,1,2,2,3,3,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4}, {1,4}) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,1,3,4,99}, {1,2,6,1,3,4,99}) , {1,2,3,4,6,99}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,-46,2,2,2}, {1,1,1,-46,2,2,2}) , {-46,1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,99,2,4,5,6,7,8,9}, {1,2,99,2,4,5,6,7,8,9}) , {1,2,4,5,6,7,8,9,99}))){ tests_passed++; } total_tests++;

    if((issame(common({6,6,4,3,2,0,2}, {6,6,4,3,2,0,2}) , {0,2,3,4,6}))){ tests_passed++; } total_tests++;

    if((issame(common({9,-46,7,6,1,12,6}, {9,-46,7,6,1,12,6}) , {-46,1,6,7,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,7,8,13,8,9,10,10}, {6,7,8,13,8,9,10,10}) , {6,7,8,9,10,13}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3,1}, {9,8,2,6,10,5}) , {2}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,13,2,5,1}, {5,4,3,13,2,5,1}) , {1,2,3,4,5,13}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,3,2,5,3,3}, {1,2,5,3,2,5,3,3}) , {1,2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,4,6,5,8}, {9,8,7,4,6,5,8}) , {4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,2,2}, {3,4,5}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,3,2,3,2,3}, {5,4,3,2,3,2,3,2,3}) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3,1,1}, {1,1,1,2,2,2,3,3,1,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,5,6,5,5}, {5,4,5,6,5,5}) , {4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,9}, {1,2,6,3,4,9}) , {1,2,3,4,6,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,12,6,7,8,9}, {1,2,3,4,5,12,6,7,8,9}) , {1,2,3,4,5,6,7,8,9,12}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,3,4,12,5}, {8,1,3,4,12,5}) , {1,3,4,5,8,12}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,1}, {1,2,4,4,5}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,11,4,7,8,6,8,3,7,1,6}, {1,2,3,4,5,6,11,4,7,8,6,8,3,7,1,6}) , {1,2,3,4,5,6,7,8,11}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,10,11}, {7,8,10,11}) , {7,8,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,1,3,2,2,3,3,2,99,2,1,2}, {1,1,1,2,1,3,2,2,3,3,2,99,2,1,2}) , {1,2,3,99}))){ tests_passed++; } total_tests++;

    if((issame(common({6,4,7,8,9,9,9,10,10,10}, {6,4,7,8,9,9,9,10,10,10}) , {4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({-46,4,-1,0,4}, {-46,4,-1,0,4}) , {-46,-1,0,4}))){ tests_passed++; } total_tests++;

    if((issame(common({-47,8,7,10,12}, {1,1,2,2,2,3,3,3,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({5,5,5,5}, {5,5,5,5}) , {5}))){ tests_passed++; } total_tests++;

    if((issame(common({7,7,2,5,10,5}, {7,7,2,5,10,5}) , {2,5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,4,5,11,5}, {1,4,4,5,11,5}) , {1,4,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,2}, {1,1,2,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({6,12}, {6,12}) , {6,12}))){ tests_passed++; } total_tests++;

    if((issame(common({6,5,8,9,10,10}, {6,5,8,9,10,10}) , {5,6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({0,5,6,7,7,7,7}, {1,2,3,4}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({6,8,9,8,12,9,10}, {6,8,9,8,12,9,10}) , {6,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,5,10,5,10,8}, {8,7,2,5,10,5,10,8}) , {2,5,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({3,-1}, {3,-1}) , {-1,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,10,5,12,6,7,8,9}, {1,2,3,4,10,5,12,6,7,8,9}) , {1,2,3,4,5,6,7,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,9,5,10}, {8,7,2,9,5,10}) , {2,5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({7,-1,7,2,5,5,10,2}, {7,-1,7,2,5,5,10,2}) , {-1,2,5,7,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,6,7,8,9,3,5,4}, {1,2,3,4,6,7,8,9,3,5,4}) , {1,2,3,4,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({10,12,12,12}, {10,12,12,12}) , {10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,2,1}, {1,2,4,5}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,2}, {1,1,1,-46,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({99,1,4,4,5,4}, {99,1,4,4,5,4}) , {1,4,5,99}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,99}, {6,5,6,9,10,8}) , {6}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,1,1,2,2,2,2}, {1,1,6,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,4,5,6,7,7,8,9}, {10,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,3,5,6,7,0,8,9,3,5,6}, {1,2,3,3,5,6,7,0,8,9,3,5,6}) , {0,1,2,3,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({10,11,12,11}, {10,11,12,11}) , {10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,5,6,5,5,5}, {5,4,5,6,5,5,5}) , {4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,13,2,5,1,13}, {5,4,3,13,2,5,1,13}) , {1,2,3,4,5,13}))){ tests_passed++; } total_tests++;

    if((issame(common({1,-46,12,3,-46}, {1,-46,12,3,-46}) , {-46,1,3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,4,5,6,7,7,5,3,7}, {1,1,4,5,6,7,7,5,3,7}) , {1,3,4,5,6,7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,4,2}, {1,10,3,4,4,2}) , {1,2,3,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,11,5,6,7,8,9,3,5,2}, {10,12,12,12,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,9,9,4,4,4,9}, {1,2,9,9,4,4,4,9}) , {1,2,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,3,4,5,1,2}, {1,2,2,3,4,5,1,2}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({12,99,7,8,8,0,9}, {12,99,7,8,8,0,9}) , {0,7,8,9,12,99}))){ tests_passed++; } total_tests++;

    if((issame(common({9,0,7,6,4,6,5,0,6}, {9,0,7,6,4,6,5,0,6}) , {0,4,5,6,7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,3,4,5,6,7,8,9,3,5}, {10,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,5,5}, {11,6,7,8,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,4,2,4}, {1,10,3,4,4,2,4}) , {1,2,3,4,10}))){ tests_passed++; } total_tests++;

    if((issame(common({5,13,1,6,12,3}, {5,13,1,6,12,3}) , {1,3,5,6,12,13}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3,1,2,3}, {1,1,2,2,2,3,3,3,1,2,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,5}, {3,6,5,8,9,10,8}) , {3,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,0,6,6,10,5,9}, {7,8,0,6,6,10,5,9}) , {0,5,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({12,5,4,5,5}, {12,5,4,5,5}) , {4,5,12}))){ tests_passed++; } total_tests++;

    if((issame(common({-46,1,4,4,5,5,1,1}, {-46,1,4,4,5,5,1,1}) , {-46,1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({9,0,6,4,6,10,5,9,0,10}, {9,0,6,4,6,10,5,9,0,10}) , {0,4,5,6,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,5,6,7,1,8,9,3,5,9}, {1,2,3,5,6,7,1,8,9,3,5,9}) , {1,2,3,5,6,7,8,9}))){ tests_passed++; } total_tests++;

    if((issame(common({0,2,3,4,5,5}, {5,4,3,2,1}) , {2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,1,3,8,2,3,3,3,2,99,2}, {1,1,1,2,1,3,8,2,3,3,3,2,99,2}) , {1,2,3,8,99}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,2,3,4,5}, {6,7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,4,3,3,1}, {9,8,7,6,10,5}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({2,5,3,2,11,5}, {2,5,3,2,11,5}) , {2,3,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({8,2,9,5,10}, {8,2,9,5,10}) , {2,5,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({6,6,5,5}, {6,6,5,5}) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({0,3,4}, {0,3,4}) , {0,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({10,8,5,10,10,6}, {10,8,5,10,10,6}) , {5,6,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({5,6,8,6,4,4,2,0,2}, {5,6,8,6,4,4,2,0,2}) , {0,2,4,5,6,8}))){ tests_passed++; } total_tests++;

    if((issame(common({6,10,8,9,10,10,6}, {6,10,8,9,10,10,6}) , {6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({26,-2}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,3,5,5,5,5,1,1}, {1,1,3,5,5,5,5,1,1}) , {1,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2,3,3}, {1,1,1,2,2,2,3,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,2}, {1,1,1,2,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,6,10,11,12}, {9,8,7,6,10,11,12}) , {6,7,8,9,10,11,12}))){ tests_passed++; } total_tests++;

    if((issame(common({4,-1,3,9,7,4}, {4,-1,3,9,7,4}) , {-1,3,4,7,9}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,5,5}, {6,8,8,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({9,0,6,4,6,5,10,5,9,0,10}, {9,0,6,4,6,5,10,5,9,0,10}) , {0,4,5,6,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,10,7,5,10}, {8,7,2,10,7,5,10}) , {2,5,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({8,-46,7,6,10,12}, {8,-46,7,6,10,12}) , {-46,6,7,8,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,-46,2,2,2}, {1,1,-46,2,2,2}) , {-46,1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,7,10,5}, {9,8,7,10,5}) , {5,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({0,4,0}, {0,4,0}) , {0,4}))){ tests_passed++; } total_tests++;

    if((issame(common({4,4,5}, {4,4,5}) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({8,1,1,1,2,2,2,2}, {1,1,7,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,-3,2,2,2,3,3,1,2}, {1,1,-3,2,2,2,3,3,1,2}) , {-3,1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,13,2,5,3,8}, {1,13,2,5,3,8}) , {1,2,3,5,8,13}))){ tests_passed++; } total_tests++;

    if((issame(common({7,2,5,3,2,5}, {7,2,5,3,2,5}) , {2,3,5,7}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,2,4,5}, {1,2,2,4,5}) , {1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,5,7,5,-1}, {1,2,5,7,5,-1}) , {-1,1,2,5,7}))){ tests_passed++; } total_tests++;

    if((issame(common({9,5,8,7,6,10,5}, {1,1,1,2,2,3,3,3,-2}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({0,2,3,4,4,2}, {0,2,3,4,4,2}) , {0,2,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,6,3,4,5,2}, {3,5,8,9,10,8}) , {3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,4,2,1}, {5,4,3,4,2,1}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,3,3,1}, {1,1,2,2,2,3,3,3,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({10,8,9,2,10,6}, {10,8,9,2,10,6}) , {2,6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,12,3,1}, {1,12,3,1}) , {1,3,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,99,2,4,5,1,6,7,8}, {1,2,99,2,4,5,1,6,7,8}) , {1,2,4,5,6,7,8,99}))){ tests_passed++; } total_tests++;

    if((issame(common({7,8,10,8}, {7,8,10,8}) , {7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,-2,3,3,1,2,3}, {1,1,2,2,2,3,-2,3,3,1,2,3}) , {-2,1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({-47,4,4,5,4,4}, {-47,4,4,5,4,4}) , {-47,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,3,4,5,6,7,8,9,3,5}, {10,12,12,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({7,10,8,10,11}, {7,10,8,10,11}) , {7,8,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,2}, {1,1,1,2,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,13,7,2,5,8,5}, {1,13,7,2,5,8,5}) , {1,2,5,7,8,13}))){ tests_passed++; } total_tests++;

    if((issame(common({9,0,6,4,6,10,5,9,0,6}, {9,0,6,4,6,10,5,9,0,6}) , {0,4,5,6,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({1,-3,3,4,5,6,7,7,8,9}, {10,12}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,4,5,4}, {1,3,4,5,4}) , {1,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,3,4,2,1,4}, {5,4,3,4,2,1,4}) , {1,2,3,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({}, {1,2,3,4,1}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,4,4,5,4,1}, {1,4,4,5,4,1}) , {1,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({12,2,99,2,3,5,4,5,6,7,8,9}, {12,2,99,2,3,5,4,5,6,7,8,9}) , {2,3,4,5,6,7,8,9,12,99}))){ tests_passed++; } total_tests++;

    if((issame(common({5,4,5,6,8,7}, {5,4,5,6,8,7}) , {4,5,6,7,8}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,99,2,4,5,6,8,7,8,9,6}, {1,2,99,2,4,5,6,8,7,8,9,6}) , {1,2,4,5,6,7,8,9,99}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,1}, {3,4}) , {3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,11,5,7,8,9,3,5,2,2}, {1,2,3,11,5,7,8,9,3,5,2,2}) , {1,2,3,5,7,8,9,11}))){ tests_passed++; } total_tests++;

    if((issame(common({8,7,2,5,10,5,10,10}, {8,7,2,5,10,5,10,10}) , {2,5,7,8,10}))){ tests_passed++; } total_tests++;

    if((issame(common({-3,6}, {-3,6}) , {-3,6}))){ tests_passed++; } total_tests++;

    if((issame(common({0,4,3,13,2,5,1,13,13}, {0,4,3,13,2,5,1,13,13}) , {0,1,2,3,4,5,13}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3,7}, {2,3,7}) , {2,3,7}))){ tests_passed++; } total_tests++;

    if((issame(common({6,4,7,8,10,9,9,10,10,10}, {6,4,7,8,10,9,9,10,10,10}) , {4,6,7,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({0,6,4,6,10,9,0,6}, {0,6,4,6,10,9,0,6}) , {0,4,6,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,1}, {3,4,1}) , {1,3,4}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,13,4,5,6,1}, {1,2,13,4,5,6,1}) , {1,2,4,5,6,13}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,2,8,2,1,2,1}, {1,1,1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,2,2,3,2,3,3,1}, {1,1,2,2,2,3,2,3,3,1}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({1,11,5,11,5,11}, {1,11,5,11,5,11}) , {1,5,11}))){ tests_passed++; } total_tests++;

    if((issame(common({-87,-50,26,-83,-1}, {-46}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({3,2,3,2,5}, {3,2,3,2,5}) , {2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,4,-83,5}, {6,7,8,10,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({2,1,2,1,1}, {2,1,2,1,1}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,10,3,4,4,11,2,4}, {1,10,3,4,4,11,2,4}) , {1,2,3,4,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({3,4,6,5,5}, {3,4,6,5,5}) , {3,4,5,6}))){ tests_passed++; } total_tests++;

    if((issame(common({9,8,9,7,6,10,12}, {9,8,9,7,6,10,12}) , {6,7,8,9,10,12}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,1,4,-83,5}, {1,2,1,4,-83,5}) , {-83,1,2,4,5}))){ tests_passed++; } total_tests++;

    if((issame(common({1,2,3,1,3,5,5,5,5}, {8,12,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({11,1,2,3,4,5,6,11,4,7,8,6,8,3,7,6}, {11,1,2,3,4,5,6,11,4,7,8,6,8,3,7,6}) , {1,2,3,4,5,6,7,8,11}))){ tests_passed++; } total_tests++;

    if((issame(common({6,5,8,-87,9,10,8}, {6,5,8,-87,9,10,8}) , {-87,5,6,8,9,10}))){ tests_passed++; } total_tests++;

    if((issame(common({10,8,10,11,11,8}, {10,8,10,11,11,8}) , {8,10,11}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,3,5,6,7,8,9}, {10,11,10}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({2,3,4,5}, {6,7,8,9}) , {}))){ tests_passed++; } total_tests++;

    if((issame(common({1,3,9,9,4,4,4,9}, {1,3,9,9,4,4,4,9}) , {1,3,4,9}))){ tests_passed++; } total_tests++;

    if((issame(common({99,2,3,-50,1}, {99,2,3,-50,1}) , {-50,1,2,3,99}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,2,1,2,2,1}, {1,1,1,-1,2,2,2}) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(common({1,1,1,2,2,3,3,3,1,2,3}, {1,1,1,2,2,3,3,3,1,2,3}) , {1,2,3}))){ tests_passed++; } total_tests++;

    if((issame(common({5,5,9,6,8,8}, {5,5,9,6,8,8}) , {5,6,8,9}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


