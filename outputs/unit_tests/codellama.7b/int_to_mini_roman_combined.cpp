#include <iostream>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    string roman;
    while (number > 0) {
        if (number >= 1000) {
            roman += "m";
            number -= 1000;
        } else if (number >= 900) {
            roman += "cm";
            number -= 900;
        } else if (number >= 500) {
            roman += "d";
            number -= 500;
        } else if (number >= 400) {
            roman += "cd";
            number -= 400;
        } else if (number >= 100) {
            roman += "c";
            number -= 100;
        } else if (number >= 90) {
            roman += "xc";
            number -= 90;
        } else if (number >= 50) {
            roman += "l";
            number -= 50;
        } else if (number >= 40) {
            roman += "xl";
            number -= 40;
        } else if (number >= 10) {
            roman += "x";
            number -= 10;
        } else if (number >= 9) {
            roman += "ix";
            number -= 9;
        } else if (number >= 5) {
            roman += "v";
            number -= 5;
        } else if (number >= 4) {
            roman += "iv";
            number -= 4;
        } else {
            roman += "i";
            number -= 1;
        }
    }
    return roman;
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

    if((int_to_mini_romank(19) == "xix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(152) == "clii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(251) == "ccli")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(426) == "cdxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(500) == "d")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(1) == "i")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(4) == "iv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(43) == "xliii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(90) == "xc")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(94) == "xciv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(532) == "dxxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(900) == "cm")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(994) == "cmxciv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(1000) == "m")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(19) == "xix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(152) == "clii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(251) == "ccli")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(426) == "cdxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(500) == "d")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(1) == "i")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(4) == "iv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(43) == "xliii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(90) == "xc")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(94) == "xciv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(532) == "dxxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(900) == "cm")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(994) == "cmxciv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(1000) == "m")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(111) == "cxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(888) == "dccclxxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(2) == "ii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(10) == "x")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(39) == "xxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(100) == "c")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(399) == "cccxcix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(871) == "dccclxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(3) == "iii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(5) == "v")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(37) == "xxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(870) == "dccclxx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(38) == "xxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(889) == "dccclxxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(400) == "cd")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(872) == "dccclxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(110) == "cx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(6) == "vi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(8) == "viii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(7) == "vii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(101) == "ci")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(109) == "cix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(40) == "xl")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(36) == "xxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(41) == "xli")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(35) == "xxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(102) == "cii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(34) == "xxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(112) == "cxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(113) == "cxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(114) == "cxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(9) == "ix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(873) == "dccclxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(874) == "dccclxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(33) == "xxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(891) == "dcccxci")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(103) == "ciii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(42) == "xlii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(108) == "cviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(868) == "dccclxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(11) == "xi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(869) == "dccclxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(99) == "xcix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(22) == "xxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(51) == "li")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(887) == "dccclxxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(52) == "lii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(890) == "dcccxc")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(63) == "lxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(12) == "xii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(62) == "lxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(55) == "lv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(54) == "liv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(14) == "xiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(21) == "xxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(45) == "xlv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(107) == "cvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(13) == "xiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(20) == "xx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(398) == "cccxcviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(106) == "cvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(98) == "xcviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(53) == "liii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(23) == "xxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(115) == "cxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(105) == "cv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(44) == "xliv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(56) == "lvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(32) == "xxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(104) == "civ")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(97) == "xcvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(57) == "lvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(892) == "dcccxcii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(31) == "xxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(397) == "cccxcvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(886) == "dccclxxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(875) == "dccclxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(64) == "lxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(30) == "xxx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(26) == "xxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(50) == "l")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(96) == "xcvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(91) == "xci")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(46) == "xlvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(867) == "dccclxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(885) == "dccclxxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(866) == "dccclxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(18) == "xviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(89) == "lxxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(88) == "lxxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(883) == "dccclxxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(15) == "xv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(884) == "dccclxxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(29) == "xxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(276) == "cclxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(388) == "ccclxxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(877) == "dccclxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(935) == "cmxxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(999) == "cmxcix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(864) == "dccclxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(923) == "cmxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(603) == "dciii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(843) == "dcccxliii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(936) == "cmxxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(934) == "cmxxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(865) == "dccclxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(878) == "dccclxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(937) == "cmxxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(389) == "ccclxxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(933) == "cmxxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(876) == "dccclxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(95) == "xcv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(932) == "cmxxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(998) == "cmxcviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(924) == "cmxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(997) == "cmxcvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(938) == "cmxxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(386) == "ccclxxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(925) == "cmxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(385) == "ccclxxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(922) == "cmxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(387) == "ccclxxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(602) == "dcii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(842) == "dcccxlii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(921) == "cmxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(275) == "cclxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(863) == "dccclxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(840) == "dcccxl")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(277) == "cclxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(931) == "cmxxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(930) == "cmxxx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(844) == "dcccxliv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(274) == "cclxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(927) == "cmxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(384) == "ccclxxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(928) == "cmxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(845) == "dcccxlv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(841) == "dcccxli")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(27) == "xxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(996) == "cmxcvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(926) == "cmxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(28) == "xxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(604) == "dciv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(279) == "cclxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(601) == "dci")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(278) == "cclxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(273) == "cclxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(929) == "cmxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(272) == "cclxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(280) == "cclxxx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(281) == "cclxxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(600) == "dc")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(271) == "cclxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(605) == "dcv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(93) == "xciii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(879) == "dccclxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(24) == "xxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(995) == "cmxcv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(383) == "ccclxxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(25) == "xxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(839) == "dcccxxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(382) == "ccclxxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(606) == "dcvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(390) == "cccxc")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(599) == "dxcix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(598) == "dxcviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(939) == "cmxxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(48) == "xlviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(391) == "cccxci")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(78) == "lxxviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(392) == "cccxcii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(992) == "cmxcii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(79) == "lxxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(76) == "lxxvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(71) == "lxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(862) == "dccclxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(77) == "lxxvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(861) == "dccclxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(75) == "lxxv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(80) == "lxxx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(993) == "cmxciii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(70) == "lxx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(72) == "lxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(61) == "lxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(282) == "cclxxxii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(81) == "lxxxi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(69) == "lxix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(73) == "lxxiii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(859) == "dccclix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(74) == "lxxiv")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(846) == "dcccxlvi")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(393) == "cccxciii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(860) == "dccclx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(920) == "cmxx")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(847) == "dcccxlvii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(858) == "dccclviii")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(49) == "xlix")){ tests_passed++; } total_tests++;

    if((int_to_mini_romank(82) == "lxxxii")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


