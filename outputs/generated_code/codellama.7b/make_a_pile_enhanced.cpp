#include <iostream>
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        int stones = (i % 2 == 0) ? i + 2 : i + 2;
        pile.push_back(stones);
    }
    return pile;
}
