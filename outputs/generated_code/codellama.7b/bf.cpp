#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    // Initialize an empty vector to store the result
    vector<string> result;

    // Check if both planet names are valid
    if (planet1 == "Mercury" || planet1 == "Venus" || planet1 == "Earth" || planet1 == "Mars" || planet1 == "Jupiter" || planet1 == "Saturn" || planet1 == "Uranus" || planet1 == "Neptune") {
        if (planet2 == "Mercury" || planet2 == "Venus" || planet2 == "Earth" || planet2 == "Mars" || planet2 == "Jupiter" || planet2 == "Saturn" || planet2 == "Uranus" || planet2 == "Neptune") {
            // If both names are valid, check which planets are between the orbits of planet1 and planet2
            if (planet1 == planet2) {
                // If both names are the same, return an empty vector
                result.clear();
            } else {
                // Check which planets are in between the orbits of planet1 and planet2
                for (int i = 0; i < 8; i++) {
                    if (planetNames[i] == planet1) {
                        int j = i + 1;
                        while (j < 8 && planetNames[j] != planet2) {
                            result.push_back(planetNames[j]);
                            j++;
                        }
                    }
                }
            }
        } else {
            // If planet2 is not a valid name, return an empty vector
            result.clear();
        }
    } else {
        // If planet1 is not a valid name, return an empty vector
        result.clear();
    }

    // Return the resulting vector of planets between the orbits of planet1 and planet2
    return result;
}

