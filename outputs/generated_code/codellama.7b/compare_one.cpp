#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return std::max(boost::any_cast<double>(a), boost::any_cast<double>(b));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        auto a_str = boost::any_cast<std::string>(a);
        auto b_str = boost::any_cast<std::string>(b);
        if (a_str == b_str) {
            return "None";
        } else if (a_str > b_str) {
            return a;
        } else {
            return b;
        }
    } else {
        throw std::invalid_argument("Invalid arguments");
    }
}