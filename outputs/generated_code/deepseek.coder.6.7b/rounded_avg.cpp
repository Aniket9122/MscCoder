#include <stdio.h>
#include <math.h>
#include<string>
using namespace std;

int average(int n, int m) {
    if (n > m) return -1;
    double avg = static_cast<double>(m + n) / 2.0;
    return static_cast<int>(avg + 0.5); //rounded to nearest integer
}

string decToBin(unsigned long long n) {
   if (n == 0)
      return "0";
   string result = "";
   while (n != 0) {
      result = to_string(n % 2) + result;
      n = n / 2;
   }
   return result;
}

string rounded_avg(int n, int m){
    int avg = average(n, m);
    if (avg == -1) {
        return "-1";
    } else {
        return decToBin(static_cast<unsigned long long>(avg)); // convert to binary
    } 
}