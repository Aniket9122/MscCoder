#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// Function to sort the vector and reverse it
void sort_reverse(vector<int>& arr) {
  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());
}

// Function to replace each digit with its corresponding name from the map
void replace_digits(vector<int>& arr, const map<int, string>& digit_names) {
  for (auto& digit : arr) {
    if (digit_names.find(digit) != digit_names.end()) {
      digit = digit_names[digit];
    }
  }
}

// Function to return the sorted, reversed vector of names
vector<string> by_length(const vector<int>& arr) {
  // Create a map to store the digit-name pair
  map<int, string> digit_names {
    {1, "One"},
    {2, "Two"},
    {3, "Three"},
    {4, "Four"},
    {5, "Five"},
    {6, "Six"},
    {7, "Seven"},
    {8, "Eight"},
    {9, "Nine"}
  };

  // Sort the vector and reverse it
  sort_reverse(arr);

  // Replace each digit with its corresponding name from the map
  replace_digits(arr, digit_names);

  return arr;
}
