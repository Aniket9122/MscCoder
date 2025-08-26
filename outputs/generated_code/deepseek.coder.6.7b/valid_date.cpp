#include <iostream>
#include <sstream>
using namespace std;

bool isLeap(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

// Check whether the date string is valid or not.
bool valid_date(string date){
   // check empty string
   if(date.empty())
       return false;
    
   // ensure that the format of input string is mm-dd-yyyy 
   if(date[2] != '-' || date[5] != '-')
      return false;

   stringstream ss(date);
   string temp;
   
   int month, day, year;
   
   // extracting month
   getline(ss, temp, '-'); 
   stringstream(temp) >> month;
    
   if (month < 1 || month > 12) 
       return false;
       
   // extracting day
   getline(ss, temp, '-');
   stringstream(temp) >> day;
   
   int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
   // check if day is in valid range for the month
   if ((day < 1 || day > daysInMonth[month]) && month != 2)
       return false;
   
   //check for February and leap year
   if(month == 2){
      getline(ss, temp);
      stringstream(temp) >> year;
        
      if (day > 29 || (day == 29 && !isLeap(year))) 
          return false;
    } 
    
   // extracting year
   getline(ss, temp, '-');
   stringstream(temp) >> year;
    
   if (year < 1 || year > 3000) 
      return false;
       
   return true;
}
