#include <vector>
#include <cmath>

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess){
    std::vector<int> result;
    
    for (unsigned int i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    
    return result;
}