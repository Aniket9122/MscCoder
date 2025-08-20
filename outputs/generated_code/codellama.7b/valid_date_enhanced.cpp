#include <iostream>
#include <string>

using namespace std;

bool valid_date(const string& date) {
    // check if the date is not empty
    if (date.empty()) {
        return false;
    }

    // extract the month, day, and year from the date string
    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));

    // check if the month is valid
    if (month < 1 || month > 12) {
        return false;
    }

    // check if the day is valid for the given month
    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
        return false;
    } else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)) {
        return false;
    } else if (month == 2 && (day < 1 || day > 29)) {
        return false;
    }

    // check if the year is valid
    if (year < 0) {
        return false;
    }

    return true;
}

