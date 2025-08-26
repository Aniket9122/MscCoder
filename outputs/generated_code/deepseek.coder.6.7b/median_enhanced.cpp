#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double median(vector<int> l) {
    if (l.empty()) 
        return 0; // or throw an exception, depending on your use case
    
    sort(l.begin(), l.end());

    int size = l.size();
    if (size % 2 == 0){
        return static_cast<double>((l[size / 2 - 1] + l[size / 2])) / 2;
    } else {
        return static_cast<double>(l[size / 2]);
    }
}
