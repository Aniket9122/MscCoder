#include <vector>
#include <algorithm>
using namespace std;

// Function to find all occurrences of an integer in a vector
vector<pair<int, int>> get_row(vector<vector<int>> lst, int x) {
    // Create the output vector
    vector<pair<int, int>> res;
    
    for (size_t i = 0; i < lst.size(); ++i) {
        auto& row = lst[i];
        
        // Sort row in descending order
        sort(row.begin(), row.end(), greater<int>());
        
        // Find all occurrences of x and store the coordinates
        for (size_t j = 0; j < row.size(); ++j) {
            if (row[j] == x) {
                res.push_back({i, j});
            }
        }
    }
    
    // Sort the result by rows in ascending order and then by columns in descending order
    sort(res.begin(), res.end());
    
    return res;
}