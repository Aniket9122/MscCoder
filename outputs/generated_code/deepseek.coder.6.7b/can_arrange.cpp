#include<iostream>
#include<vector>
using namespace std;
int can_arrange(vector<int> arr){
    int maxIndex = -1;
    for (unsigned int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] >= arr[i + 1]) {
            maxIndex = i+1; // +1 because index starts from 0 in C++
            break;
        }
   <｜begin▁of▁sentence｜>}
    return maxIndex;}