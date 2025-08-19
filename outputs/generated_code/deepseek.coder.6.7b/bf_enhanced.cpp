#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Define order of planets in solar system using map 
unordered_map<string, int> planetOrder = { {"Mercury", 1}, {"Venus", 2}, {"Earth", 3}, {"Mars", 4}, 
                                            {"Jupiter", 5}, {"Saturn", 6}, {"Uranus", 7}, {"Neptune", 8} };
                                            
vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    // If either of the planets are not in the map, return an empty vector.
    if (planetOrder.find(planet1) == planetOrder.end() || planetOrder.find(planet2) == planetOrder.end()) 
        return result;
        
    // Check which one is further away from the sun in solar system
    if (planetOrder[planet1] > planetOrder[planet2])
        swap(planet1, planet2);
    
    // Get all planets whose orbits are between that of planet1 and planet2 
    for(auto& it : planetOrder) {
        // Skip current planet if its orbit is less than the one of planet1 or more than the one of planet2
        if((it.second < planetOrder[planet1]) || (it.second > planetOrder[planet2])) continue; 
        
        result.push_back(it.first);
    }
  
    return result;
}