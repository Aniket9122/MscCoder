#include <iostream>
#include <vector>

int can_arrange(const std::vector<int>& arr) {
    // Initialize variables to keep track of the largest index and whether an element was found
    int largest_index = -1;
    bool element_found = false;

    // Iterate over the vector from back to front
    for (int i = arr.size() - 1; i >= 0; --i) {
        // If the current element is greater than or equal to the previous element, set the largest index and break out of the loop
        if (arr[i] >= arr[i - 1]) {
            largest_index = i;
            break;
        }
    }

    return largest_index;
}