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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((rounded_avg(1, 5) == "11")){ tests_passed++; } total_tests++;

    if((rounded_avg(7, 13) == "1010")){ tests_passed++; } total_tests++;

    if((rounded_avg(964,977) == "1111001010")){ tests_passed++; } total_tests++;

    if((rounded_avg(996,997) == "1111100100")){ tests_passed++; } total_tests++;

    if((rounded_avg(560,851) == "1011000001")){ tests_passed++; } total_tests++;
  
    if((rounded_avg(185,546) == "101101101")){ tests_passed++; } total_tests++;

    if((rounded_avg(362,496) == "110101101")){ tests_passed++; } total_tests++;

    if((rounded_avg(350,902) == "1001110010")){ tests_passed++; } total_tests++;

    if((rounded_avg(197,233) == "11010111")){ tests_passed++; } total_tests++;

    if((rounded_avg(7, 5) == "-1")){ tests_passed++; } total_tests++;

    if((rounded_avg(5, 1) == "-1")){ tests_passed++; } total_tests++;

    if((rounded_avg(5, 5) == "101")){ tests_passed++; } total_tests++;

    if((rounded_avg(1, 5) == "11")){ tests_passed++; } total_tests++;

    if((rounded_avg(7, 13) == "1010")){ tests_passed++; } total_tests++;

    if((rounded_avg(964, 977) == "1111001010")){ tests_passed++; } total_tests++;

    if((rounded_avg(996, 997) == "1111100100")){ tests_passed++; } total_tests++;

    if((rounded_avg(362, 496) == "110101101")){ tests_passed++; } total_tests++;

    if((rounded_avg(350, 902) == "1001110010")){ tests_passed++; } total_tests++;

    if((rounded_avg(197, 233) == "11010111")){ tests_passed++; } total_tests++;

    if((rounded_avg(5, 5) == "101")){ tests_passed++; } total_tests++;

    if((rounded_avg(1, 1) == "1")){ tests_passed++; } total_tests++;

    if((rounded_avg(3, 9) == "110")){ tests_passed++; } total_tests++;

    if((rounded_avg(25, 35) == "11110")){ tests_passed++; } total_tests++;

    if((rounded_avg(10, 30) == "10100")){ tests_passed++; } total_tests++;

    if((rounded_avg(100, 200) == "10010110")){ tests_passed++; } total_tests++;

    if((rounded_avg(15, 15) == "1111")){ tests_passed++; } total_tests++;

    if((rounded_avg(10, 10) == "1010")){ tests_passed++; } total_tests++;

    if((rounded_avg(50, 100) == "1001011")){ tests_passed++; } total_tests++;

    if((rounded_avg(30, 200) == "1110011")){ tests_passed++; } total_tests++;

    if((rounded_avg(3, 101) == "110100")){ tests_passed++; } total_tests++;

    if((rounded_avg(35, 35) == "100011")){ tests_passed++; } total_tests++;

    if((rounded_avg(50, 50) == "110010")){ tests_passed++; } total_tests++;

    if((rounded_avg(4, 9) == "110")){ tests_passed++; } total_tests++;

    if((rounded_avg(3, 6) == "100")){ tests_passed++; } total_tests++;

    if((rounded_avg(9, 9) == "1001")){ tests_passed++; } total_tests++;

    if((rounded_avg(6, 6) == "110")){ tests_passed++; } total_tests++;

    if((rounded_avg(25, 25) == "11001")){ tests_passed++; } total_tests++;

    if((rounded_avg(1, 200) == "1100100")){ tests_passed++; } total_tests++;

    if((rounded_avg(16, 30) == "10111")){ tests_passed++; } total_tests++;

    if((rounded_avg(6, 7) == "110")){ tests_passed++; } total_tests++;

    if((rounded_avg(14, 15) == "1110")){ tests_passed++; } total_tests++;

    if((rounded_avg(7, 30) == "10010")){ tests_passed++; } total_tests++;

    if((rounded_avg(2, 2) == "10")){ tests_passed++; } total_tests++;

    if((rounded_avg(16, 16) == "10000")){ tests_passed++; } total_tests++;

    if((rounded_avg(49, 49) == "110001")){ tests_passed++; } total_tests++;

    if((rounded_avg(101, 200) == "10010110")){ tests_passed++; } total_tests++;

    if((rounded_avg(201, 201) == "11001001")){ tests_passed++; } total_tests++;

    if((rounded_avg(2, 7) == "100")){ tests_passed++; } total_tests++;

    if((rounded_avg(2, 10) == "110")){ tests_passed++; } total_tests++;

    if((rounded_avg(15, 25) == "10100")){ tests_passed++; } total_tests++;

    if((rounded_avg(4, 4) == "100")){ tests_passed++; } total_tests++;

    if((rounded_avg(14, 32) == "10111")){ tests_passed++; } total_tests++;

    if((rounded_avg(7, 10) == "1000")){ tests_passed++; } total_tests++;

    if((rounded_avg(10000, 12000) == "10101011111000")){ tests_passed++; } total_tests++;

    if((rounded_avg(54321, 98765) == "10010101011111111")){ tests_passed++; } total_tests++;

    if((rounded_avg(123456, 789012) == "1101111011000101010")){ tests_passed++; } total_tests++;

    if((rounded_avg(100, 1000) == "1000100110")){ tests_passed++; } total_tests++;

    if((rounded_avg(3000, 5000) == "111110100000")){ tests_passed++; } total_tests++;

    if((rounded_avg(10000, 20000) == "11101010011000")){ tests_passed++; } total_tests++;

    if((rounded_avg(3000, 20000) == "10110011101100")){ tests_passed++; } total_tests++;

    if((rounded_avg(3000, 1000000) == "1111010011011111100")){ tests_passed++; } total_tests++;

    if((rounded_avg(3000, 3000) == "101110111000")){ tests_passed++; } total_tests++;

    if((rounded_avg(100003, 100003) == "11000011010100011")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


