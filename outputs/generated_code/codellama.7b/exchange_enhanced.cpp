#include <vector>
#include <string>
using namespace std;

string exchange(const vector<int>& lst1, const vector<int>& lst2) {
    // Check if both vectors are empty
    if (lst1.empty() && lst2.empty()) {
        return "NO";
    }

    // Initialize variables to keep track of the number of even and odd elements in both vectors
    int num_even = 0;
    int num_odd = 0;
    for (const auto& elem : lst1) {
        if (elem % 2 == 0) {
            ++num_even;
        } else {
            ++num_odd;
        }
    }
    for (const auto& elem : lst2) {
        if (elem % 2 == 0) {
            ++num_even;
        } else {
            ++num_odd;
        }
    }

    // Check if it is possible to exchange elements between the two vectors without changing their parity
    if (num_even > 0 && num_odd > 0) {
        return "YES";
    }
    return "NO";
}