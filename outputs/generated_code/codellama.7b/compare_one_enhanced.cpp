#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() != b.type()) {
        throw std::invalid_argument("Arguments must have the same type");
    }

    if (a.type() == typeid(int)) {
        return std::max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(double)) {
        return std::max(boost::any_cast<double>(a), boost::any_cast<double>(b));
    } else {
        throw std::invalid_argument("Arguments must be of type int or double");
    }
}