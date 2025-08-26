#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    
    for (auto row : grid)
        for (auto cell : row) 
            total += cell;
            
    return (total + capacity - 1) / capacity;  
}