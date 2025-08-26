#include <iostream>
#include <string>
#include <map>
using namespace std;

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return false;

    bool all_lowercase = true;
    bool all_uppercase = true;

    for (auto& entry : dict) {
        const string& key = entry.first;
        const string& value = entry.second;

        if (!key.empty() && !value.empty()) {
            if (all_lowercase && !islower(key[0])) all_lowercase = false;
            if (all_uppercase && !isupper(key[0])) all_uppercase = false;
        }
    }

    return all_lowercase || all_uppercase;
}