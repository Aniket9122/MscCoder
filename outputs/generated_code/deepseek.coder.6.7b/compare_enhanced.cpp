#include <vector>
#include <cmath>

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess){
    // Initialize an empty result vector to store the differences.
    std::vector<int> result;
    
    // Iterate over each element in the input vectors.
    for (unsigned int i = 0; i < game.size(); ++i) {
        // Compute the absolute difference between corresponding elements, 
        // and push it into the result vector.
        result.push_back(std::abs(game[i] - guess[i]));
    }
    
    // Return the final result vector after all differences have been computed.
    return result;
}