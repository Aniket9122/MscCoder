#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define the mapping between GPA and letter grade
const map<float, string> gpaToLetterGrade {
    {4.0, "A+"},
    {3.7, "A"},
    {3.3, "A-"},
    {3.0, "B+"},
    {2.7, "B"},
    {2.3, "B-"},
    {2.0, "C+"},
    {1.7, "C"},
    {1.3, "C-"},
    {1.0, "D+"},
    {0.7, "D"},
    {0.0, "E"}
};

vector<string> numerical_letter_grade(const vector<float>& grades) {
    vector<string> letterGrades;

    for (auto& grade : grades) {
        // Find the closest match in the mapping using upper_bound()
        auto it = gpaToLetterGrade.upper_bound(grade);

        // If the iterator is not at the beginning of the map,
        // subtract 1 from the iterator to get the previous entry
        if (it != gpaToLetterGrade.begin()) {
            --it;
        }

        letterGrades.push_back(it->second);
    }

    return letterGrades;
}
