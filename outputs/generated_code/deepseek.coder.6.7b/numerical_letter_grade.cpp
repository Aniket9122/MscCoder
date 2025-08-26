#include <vector>
#include <string>
using namespace std;

vector<string> numerical_letter_grade(const vector<float>& grades){
    // Initialize the return vector.
    vector<string> letterGrades;
    
    for (auto grade : grades) {
        if (grade == 4.0) 
            letterGrades.push_back("A+");
        else if(grade >= 3.7)
            letterGrades.push_back("A");
        else if(grade >= 3.3)
            letterGrades.push_back("A-");
        else if(grade >= 3.0)
            letterGrades.push_back("B+");
        else if(grade >= 2.7)
            letterGrades.push_back("B");
        else if(grade >= 2.3)
            letterGrades.push_back("B-");
        else if(grade >= 2.0)
            letterGrades.push_back("C+");
        else if(grade >= 1.7)
            letterGrades.push_back("C");
        else if(grade >= 1.3)
            letterGrades.push_back("C-");
        else if(grade >= 1.0)
            letterGrades.push_back("D+");
        else if(grade >= 0.7)
            letterGrades.push_back("D");
        else if(grade > 0.0)
            letterGrades.push_back("D-");
        else 
            letterGrades.push_back("E");    // grade is less than or equal to 0.0
    }    
    return letterGrades;
}