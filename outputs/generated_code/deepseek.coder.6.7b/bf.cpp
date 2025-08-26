#include<vector>
#include<string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    // Vector of all 8 planets in order of their proximity to the sun.
    vector<string> planets {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    // Finding positions of planet1 and planet2 in the list. If either is not found, return an empty vector.
    auto it1 = find(planets.begin(), planets.end(), planet1);
    if (it1 == planets.end()) 
        return result;
    
    auto it2 = find(planets.begin(), planets.end(), planet2);
    if (it2 == planets.end())
        return result;
        
    // Check which one is further away from the sun
    if (distance(planets.begin(), it1) > distance(planets.begin(), it2)) 
        swap(it1, it2); 
    
    advance(it1, 1); // Skip planet1 to get all planets in between
    while (distance(it1, it2) != 0) {
        result.push_back(*it1);
        advance(it1, 1);
    }
  
    return result;
}