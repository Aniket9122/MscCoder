#include<vector>
#include<unordered_map>
using namespace std;

int search(const vector<int>& lst){
    unordered_map<int, int> freqs;
    for (auto num : lst) {
        if(freqs.find(num) == freqs.end()) 
            freqs[num] = 1;
        else 
            ++freqs[num];
    }
    
    for (int i = *max_element(lst.begin(), lst.end()); i > 0; --i) {
        if (freqs.find(i) != freqs.end() && freqs[i] >= i){
            return i; 
        }
    }
    
    return -1;
}