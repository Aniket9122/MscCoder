#include <iostream>
#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>

typedef std::list<boost::any> list_any;
using namespace std;

// Improved function signature for issame() to be more consistent with the standard library functions
bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

// Improved function signature for filter_integers() to use a more appropriate type for the parameter and return value
vector<int> filter_integers(const list_any& values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
