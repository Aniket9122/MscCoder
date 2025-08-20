#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// Function to sort numbers in a string from smallest to largest
string sort_numbers(const string& numbers) {
    // Create a map to store the number and its position in the input string
    map<int, int> numPosMap;
    for (int i = 0; i < numbers.size(); ++i) {
        switch (numbers[i]) {
            case '0':
                numPosMap[0] = i;
                break;
            case '1':
                numPosMap[1] = i;
                break;
            case '2':
                numPosMap[2] = i;
                break;
            case '3':
                numPosMap[3] = i;
                break;
            case '4':
                numPosMap[4] = i;
                break;
            case '5':
                numPosMap[5] = i;
                break;
            case '6':
                numPosMap[6] = i;
                break;
            case '7':
                numPosMap[7] = i;
                break;
            case '8':
                numPosMap[8] = i;
                break;
            case '9':
                numPosMap[9] = i;
                break;
        }
    }

    // Sort the map based on the value (position in the input string)
    auto sortedNumPosMap = numPosMap;
    sort(sortedNumPosMap.begin(), sortedNumPosMap.end(),
            [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.second < b.second;
            });

    // Create the output string
    string output = "";
    for (auto& numPos : sortedNumPosMap) {
        output += to_string(numPos.first);
    }

    return output;
}

