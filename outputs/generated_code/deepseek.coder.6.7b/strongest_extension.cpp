#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Function to calculate strength of extension
int getStrength(const string& ext) {
    int capital = 0;
    int small = 0;
    
    for (char c : ext) {
        if (isupper(c)) capital++;
        else if (islower(c)) small++;
    }
  
    return capital - small;
}

string Strongest_Extension(const string& class_name, const vector<string>& extensions){
  int maxStrength = INT_MIN;
  string strongestExt = "";
    
  for (const auto& ext : extensions) {
      int strength = getStrength(ext);
      
      if ((strength > maxStrength) || (strength == maxStrength && ext < strongestExt)) {
          maxStrength = strength;
          strongestExt = ext;
      }
  }
  
  return class_name + "." + strongestExt;
}