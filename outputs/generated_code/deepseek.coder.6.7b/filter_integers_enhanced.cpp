#include <vector>
#include <boost/any.hpp>
#include <string>
#include <typeindex>
using namespace std;
typedef vector<boost::any> any_vector;

// Helper function to check if the type of an element matches a specific type T
template<typename T>
bool isType(const boost::any& operand) {
    return operand.type() == typeid(T);
}

vector<int> filter_integers(const any_vector& values){
  vector<int> result;
  
  for(const auto& value : values)  // Corrected here by using range-based for loop
    {
      if(isType<int>(value))   // Specified the type as int
        {
          result.push_back(boost::any_cast<int>(value));
        }
    }
  
  return result;
}