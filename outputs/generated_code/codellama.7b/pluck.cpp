#include <vector>

std::vector<int> pluck(const std::vector<int>& nodes) {
    // Initialize variables to keep track of the smallest even value and its index
    int smallest_even_value = INT_MAX;
    int smallest_index = -1;

    // Iterate through the nodes and find the smallest even value
    for (int i = 0; i < nodes.size(); ++i) {
        if (nodes[i] % 2 == 0 && nodes[i] < smallest_even_value) {
            smallest_even_value = nodes[i];
            smallest_index = i;
        }
    }

    // Return the smallest even value and its index in a vector
    return {smallest_even_value, smallest_index};
}