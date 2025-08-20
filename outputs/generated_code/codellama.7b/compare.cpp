#include <iostream>
#include <vector>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> differences;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            differences.push_back(0);
        } else {
            differences.push_back(abs(game[i] - guess[i]));
        }
    }
    return differences;
}
