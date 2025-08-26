#include <iostream>
#include <vector>

int get_matrix_triples(int n) {
    int count = 0;
    vector<int> a(n);
    for (int i = 1; i <= n; ++i) {
        a[i] = i * i - i + 1;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k <= n; ++k) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }

    return count;
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

    if((get_matrix_triples(5) == 1)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(6) == 4)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(10) == 36)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(100) == 53361)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(5) == 1)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(6) == 4)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(10) == 36)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(100) == 53361)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(1) == false)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(2) == false)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(3) == 0)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(4) == 1)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(7) == 10)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(12) == 60)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(15) == 130)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(20) == 321)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(25) == 736)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(30) == 1260)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(29) == 1089)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(16) == 175)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(19) == 306)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(18) == 240)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(17) == 185)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(21) == 399)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(26) == 764)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(31) == 1450)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(11) == 39)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(22) == 490)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(8) == 11)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(27) == 900)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(24) == 616)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(32) == 1495)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(28) == 1053)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(33) == 1705)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(23) == 511)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(9) == 21)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(14) == 94)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(13) == 88)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(34) == 1936)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(35) == 1991)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(36) == 2244)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(49) == 6016)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(37) == 2520)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(73) == 20448)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(77) == 23425)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(50) == 6136)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(74) == 20724)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(75) == 21900)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(76) == 23125)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(38) == 2586)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(78) == 24700)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(48) == 5520)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(51) == 6664)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(52) == 7225)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(98) == 49136)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(79) == 26026)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(53) == 7361)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(72) == 19320)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(42) == 3640)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(41) == 3289)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(99) == 51216)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(80) == 26351)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(54) == 7956)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(40) == 3211)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(68) == 15961)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(39) == 2886)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(81) == 27729)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(67) == 15730)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(69) == 16951)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(43) == 4018)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(61) == 11800)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(70) == 17986)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(65) == 13881)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(71) == 18239)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(102) == 56100)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(101) == 53889)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(82) == 29160)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(47) == 5055)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(46) == 4950)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(66) == 14784)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(45) == 4515)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(57) == 9405)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(60) == 11020)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(58) == 10108)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(59) == 10279)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(103) == 58378)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(97) == 48640)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(56) == 8739)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(104) == 58939)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(96) == 46624)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(44) == 4109)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(105) == 61285)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(83) == 29511)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(95) == 44671)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(94) == 44206)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(64) == 13671)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(84) == 30996)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(85) == 32536)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(63) == 12810)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(86) == 32914)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(55) == 8586)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(87) == 34510)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(62) == 11990)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(200) == 431211)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(199) == 429066)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(201) == 439989)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(198) == 420420)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(202) == 448900)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(90) == 38280)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(91) == 40050)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(92) == 40485)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(203) == 451111)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(93) == 42315)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(197) == 411905)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(196) == 409825)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(195) == 401440)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(194) == 393184)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(204) == 460156)){ tests_passed++; } total_tests++;

    if((get_matrix_triples(88) == 36163)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


