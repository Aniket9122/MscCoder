#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result{0, 0}; // Initialize the result vector with 0 for both even and odd palindromes

    // Loop through all possible palindromes from 1 to n
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i); // Convert the current palindrome to a string
        bool isEven = true; // Initialize whether the palindrome is even or not

        // Check if the palindrome is even by reversing it and comparing with the original string
        for (int j = 0; j < s.length() / 2; ++j) {
            if (s[j] != s[s.length() - 1 - j]) {
                isEven = false;
                break;
            }
        }

        // If the palindrome is even, increment the even counter
        if (isEven) {
            result[0]++;
        } else { // Otherwise, increment the odd counter
            result[1]++;
        }
    }

    return result;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<int> a,vector<int>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
    if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(even_odd_palindrome(123) , {8, 13}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(12) , {4, 6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(3) , {1, 2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(63) , {6, 8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(25) , {5, 6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(19) , {4, 6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(9) , {4, 5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(1) , {0, 1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(123) , {8,13}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(12) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(3) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(63) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(25) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(19) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(9) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(1) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(1000) , {48,60}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(500) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(777) , {38,48}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(10) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(15) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(27) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(35) , {5,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(50) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(89) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(201) , {8,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(51) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(11) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(26) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(778) , {38,48}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(88) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(202) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(28) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(200) , {8,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(31) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(30) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(999) , {48,60}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(32) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(36) , {5,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(87) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(779) , {38,48}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(998) , {48,59}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(203) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(86) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(33) , {5,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(14) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(29) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(34) , {5,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(24) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(204) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(13) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(23) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(780) , {38,48}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(85) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(781) , {38,48}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(206) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(16) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(499) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(84) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(207) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(17) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(205) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(997) , {48,59}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(199) , {8,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(498) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(37) , {5,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(776) , {38,47}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(775) , {38,47}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(22) , {5,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(52) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(83) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(774) , {38,47}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(782) , {38,48}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(78) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(21) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(208) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(773) , {38,47}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(98) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(209) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(497) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(772) , {38,47}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(996) , {48,59}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(18) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(8) , {4,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(53) , {6,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(7) , {3,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(38) , {5,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(79) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(90) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(20) , {4,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(771) , {38,47}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(97) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(82) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(6) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(496) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(770) , {38,47}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(77) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(62) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(91) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(783) , {38,48}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(502) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(61) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(210) , {9,20}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(92) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(60) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(93) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(503) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(501) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(76) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(75) , {7,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(59) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(888) , {47,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(555) , {28,36}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(400) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(978) , {48,57}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(505) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(506) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(401) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(979) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(504) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(96) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(556) , {28,36}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(887) , {46,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(507) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(889) , {47,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(508) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(554) , {28,35}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(977) , {48,57}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(402) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(399) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(553) , {28,35}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(95) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(890) , {47,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(398) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(509) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(886) , {46,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(99) , {8,10}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(510) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(511) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(891) , {47,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(94) , {8,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(552) , {28,35}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(551) , {28,35}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(550) , {28,35}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(397) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(885) , {46,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(980) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(396) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(884) , {46,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(100) , {8,10}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(512) , {28,31}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(994) , {48,59}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(995) , {48,59}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(57) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(395) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(892) , {47,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(557) , {28,36}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(982) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(993) , {48,59}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(80) , {7,9}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(883) , {46,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(981) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(983) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(58) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(984) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(403) , {18,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(404) , {19,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(5) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(976) , {48,57}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(974) , {48,57}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(405) , {19,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(985) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(4) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(973) , {48,57}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(975) , {48,57}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(893) , {47,50}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(39) , {5,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(494) , {28,30}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(986) , {48,58}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_palindrome(101) , {8,11}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


