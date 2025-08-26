#include <vector>
#include <boost/any.hpp>
#include <string>
using namespace std;

typedef vector<boost::any> any_vector;

// Helper function to check if the type of an element matches a specific type T
template <typename T>
bool isType(const boost::any& operand) {
    return operand.type() == typeid(T);
}

vector<int> filter_integers(const any_vector& values){
  vector<int> result;
  
  for (auto it = begin(values); it != end(values); ++it) {
    if (isType<int>(*it)) {
        // If the element is of type int, then push back to the result vector
        result.push_back(boost::any_cast<int>(*it));
      }
  }
  
  return result;
}