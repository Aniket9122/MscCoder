#include <string>
#include <cmath>
using namespace std;

int closest_integer(string value){
    double num = stod(value);
    int roundedNum = (int) floor(num + 0.5); //add 0.5 then use floor to get the nearest integer, effectively rounding away from zero for negative numbers.
    
    return roundedNum;
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

    if((closest_integer("10") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("14.5") == 15)){ tests_passed++; } total_tests++;

    if((closest_integer("-15.5") == -16)){ tests_passed++; } total_tests++;

    if((closest_integer("15.3") == 15)){ tests_passed++; } total_tests++;

    if((closest_integer("0") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("10") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("14.5") == 15)){ tests_passed++; } total_tests++;

    if((closest_integer("-15.5") == -16)){ tests_passed++; } total_tests++;

    if((closest_integer("15.3") == 15)){ tests_passed++; } total_tests++;

    if((closest_integer("0") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-2.8") == -3)){ tests_passed++; } total_tests++;

    if((closest_integer("3.6") == 4)){ tests_passed++; } total_tests++;

    if((closest_integer("5.5") == 6)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.5") == -7)){ tests_passed++; } total_tests++;

    if((closest_integer("0.5") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.6") == 2)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.6") == -2)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0003") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("99.99") == 100)){ tests_passed++; } total_tests++;

    if((closest_integer("-99.99") == -100)){ tests_passed++; } total_tests++;

    if((closest_integer("-99.9") == -100)){ tests_passed++; } total_tests++;

    if((closest_integer("00") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("999.99") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer("99.9999") == 100)){ tests_passed++; } total_tests++;

    if((closest_integer("99.999") == 100)){ tests_passed++; } total_tests++;

    if((closest_integer("9.999") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("999.999") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer("000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("09.99900") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("-999.99") == -1000)){ tests_passed++; } total_tests++;

    if((closest_integer("99.9") == 100)){ tests_passed++; } total_tests++;

    if((closest_integer("-99") == -99)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("0900") == 900)){ tests_passed++; } total_tests++;

    if((closest_integer("0000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.00000") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("6") == 6)){ tests_passed++; } total_tests++;

    if((closest_integer("-999") == -999)){ tests_passed++; } total_tests++;

    if((closest_integer("999") == 999)){ tests_passed++; } total_tests++;

    if((closest_integer("11.6") == 12)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.00099900") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("111.6") == 112)){ tests_passed++; } total_tests++;

    if((closest_integer("00900") == 900)){ tests_passed++; } total_tests++;

    if((closest_integer("-66.") == -66)){ tests_passed++; } total_tests++;

    if((closest_integer("11.") == 11)){ tests_passed++; } total_tests++;

    if((closest_integer("-9111.699") == -9112)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.65") == -7)){ tests_passed++; } total_tests++;

    if((closest_integer("5") == 5)){ tests_passed++; } total_tests++;

    if((closest_integer("0009000") == 9000)){ tests_passed++; } total_tests++;

    if((closest_integer("-99.") == -99)){ tests_passed++; } total_tests++;

    if((closest_integer("-9.") == -9)){ tests_passed++; } total_tests++;

    if((closest_integer("-99000") == -99000)){ tests_passed++; } total_tests++;

    if((closest_integer("-5") == -5)){ tests_passed++; } total_tests++;

    if((closest_integer("900.999") == 901)){ tests_passed++; } total_tests++;

    if((closest_integer("911.600") == 912)){ tests_passed++; } total_tests++;

    if((closest_integer("-66666.") == -66666)){ tests_passed++; } total_tests++;

    if((closest_integer("-9111.6919") == -9112)){ tests_passed++; } total_tests++;

    if((closest_integer("999.9999") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer("-090109111.6919") == -90109112)){ tests_passed++; } total_tests++;

    if((closest_integer("-9111.19") == -9111)){ tests_passed++; } total_tests++;

    if((closest_integer("009090") == 9090)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.000999006") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("9999.99") == 10000)){ tests_passed++; } total_tests++;

    if((closest_integer("0009000000") == 9000000)){ tests_passed++; } total_tests++;

    if((closest_integer("-91111.691") == -91112)){ tests_passed++; } total_tests++;

    if((closest_integer("999000.999") == 999001)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.00") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.000999900") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("-090109111.6919999") == -90109112)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.9096") == -7)){ tests_passed++; } total_tests++;

    if((closest_integer("911") == 911)){ tests_passed++; } total_tests++;

    if((closest_integer("-6.000000") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("-666666.") == -666666)){ tests_passed++; } total_tests++;

    if((closest_integer("66666.") == 66666)){ tests_passed++; } total_tests++;

    if((closest_integer("9999.9999") == 10000)){ tests_passed++; } total_tests++;

    if((closest_integer("9.9") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("1") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("999.99999") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer("-699.990") == -700)){ tests_passed++; } total_tests++;

    if((closest_integer("-66.6000") == -67)){ tests_passed++; } total_tests++;

    if((closest_integer("9999") == 9999)){ tests_passed++; } total_tests++;

    if((closest_integer("00090000") == 90000)){ tests_passed++; } total_tests++;

    if((closest_integer("0099090") == 99090)){ tests_passed++; } total_tests++;

    if((closest_integer("00009000") == 9000)){ tests_passed++; } total_tests++;

    if((closest_integer("9") == 9)){ tests_passed++; } total_tests++;

    if((closest_integer("-919") == -919)){ tests_passed++; } total_tests++;

    if((closest_integer("000600") == 600)){ tests_passed++; } total_tests++;

    if((closest_integer("-9900") == -9900)){ tests_passed++; } total_tests++;

    if((closest_integer("00090099990") == 90099990)){ tests_passed++; } total_tests++;

    if((closest_integer("-6666666.") == -6666666)){ tests_passed++; } total_tests++;

    if((closest_integer(".9096") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("00090000000") == 90000000)){ tests_passed++; } total_tests++;

    if((closest_integer("00600") == 600)){ tests_passed++; } total_tests++;

    if((closest_integer("9.9999") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("111.") == 111)){ tests_passed++; } total_tests++;

    if((closest_integer("99") == 99)){ tests_passed++; } total_tests++;

    if((closest_integer("00090000009.999000") == 90000010)){ tests_passed++; } total_tests++;

    if((closest_integer("-6999.99000") == -7000)){ tests_passed++; } total_tests++;

    if((closest_integer("0.000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("000900") == 900)){ tests_passed++; } total_tests++;

    if((closest_integer("-66666666.") == -66666666)){ tests_passed++; } total_tests++;

    if((closest_integer("000900000000") == 900000000)){ tests_passed++; } total_tests++;

    if((closest_integer("-9111191.691") == -9111192)){ tests_passed++; } total_tests++;

    if((closest_integer("99999") == 99999)){ tests_passed++; } total_tests++;

    if((closest_integer("0090900") == 90900)){ tests_passed++; } total_tests++;

    if((closest_integer("-60.00099900") == -60)){ tests_passed++; } total_tests++;

    if((closest_integer("-66966666.") == -66966666)){ tests_passed++; } total_tests++;

    if((closest_integer("-111.900090099990900") == -112)){ tests_passed++; } total_tests++;

    if((closest_integer("-54.9999") == -55)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("12345678.54321") == 12345679)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.12345") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0000000009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("1.234567890000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234567890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-5.5") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2345678900040000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("0.00000000009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("0.000000000009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("0.9") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-787654321.12345") == -787654321)){ tests_passed++; } total_tests++;

    if((closest_integer("1.0001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.01") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.123345") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("4.9999") == 5)){ tests_passed++; } total_tests++;

    if((closest_integer("11") == 11)){ tests_passed++; } total_tests++;

    if((closest_integer("10.2345678900000000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("10.23456789000000000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("1.0") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-187654321.123345") == -187654321)){ tests_passed++; } total_tests++;

    if((closest_integer("1.") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.234567890000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("0.09") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-9") == -9)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.2354567890000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("0.") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("1.001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.011") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.27890000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("5.55") == 6)){ tests_passed++; } total_tests++;

    if((closest_integer("-91.01") == -91)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.212345") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.278900000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234567890000000000091") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("0.000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("11.99") == 12)){ tests_passed++; } total_tests++;

    if((closest_integer("55.5") == 56)){ tests_passed++; } total_tests++;

    if((closest_integer("1.00001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.278590000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("0.00000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("1234567821") == 1234567821)){ tests_passed++; } total_tests++;

    if((closest_integer("111") == 111)){ tests_passed++; } total_tests++;

    if((closest_integer("01") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.1234567890000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("11.9") == 12)){ tests_passed++; } total_tests++;

    if((closest_integer("1.00") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("1111") == 1111)){ tests_passed++; } total_tests++;

    if((closest_integer("00.0000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-599.5") == -600)){ tests_passed++; } total_tests++;

    if((closest_integer("001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("00.00000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("11111") == 11111)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0000000010") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("10.23456789000000000011101") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("911.99") == 912)){ tests_passed++; } total_tests++;

    if((closest_integer("10.23456789000000011111000091") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("111111") == 111111)){ tests_passed++; } total_tests++;

    if((closest_integer("10.00001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("000.000000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.123456789001111100000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("-91.") == -91)){ tests_passed++; } total_tests++;

    if((closest_integer("00000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("10001") == 10001)){ tests_passed++; } total_tests++;

    if((closest_integer("-511.23545678900000500001") == -511)){ tests_passed++; } total_tests++;

    if((closest_integer("-687654321.12345") == -687654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.1223456789001111100000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("-01.234567890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("000.00000000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-687654321.152345") == -687654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-5787.12345") == -5787)){ tests_passed++; } total_tests++;

    if((closest_integer("10.2345678900000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("5.555") == 6)){ tests_passed++; } total_tests++;

    if((closest_integer("1111.") == 1111)){ tests_passed++; } total_tests++;

    if((closest_integer("00.0001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-54.99999") == -55)){ tests_passed++; } total_tests++;

    if((closest_integer("1111111") == 1111111)){ tests_passed++; } total_tests++;

    if((closest_integer("1.1001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.2345678900000002001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("0.011111") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("1.0000011") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("9111.9900") == 9112)){ tests_passed++; } total_tests++;

    if((closest_integer("1000101") == 1000101)){ tests_passed++; } total_tests++;

    if((closest_integer("12345678.521") == 12345679)){ tests_passed++; } total_tests++;

    if((closest_integer("1.0111") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234567890000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("555.5") == 556)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.20000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("101.234567890000001") == 101)){ tests_passed++; } total_tests++;

    if((closest_integer("1.0099") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("911001.99") == 911002)){ tests_passed++; } total_tests++;

    if((closest_integer("-787654321.12") == -787654321)){ tests_passed++; } total_tests++;

    if((closest_integer("1.00111") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-54.999") == -55)){ tests_passed++; } total_tests++;

    if((closest_integer("-191.01") == -191)){ tests_passed++; } total_tests++;

    if((closest_integer("-5780007.12345") == -5780007)){ tests_passed++; } total_tests++;

    if((closest_integer("-7876521.12345") == -7876521)){ tests_passed++; } total_tests++;

    if((closest_integer("-599") == -599)){ tests_passed++; } total_tests++;

    if((closest_integer("0010.234567890000000000091000000") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("1.000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("10.0000000010") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("-687654321.122345") == -687654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-5780017.12345") == -5780017)){ tests_passed++; } total_tests++;

    if((closest_integer("1.10001010") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("100001") == 100001)){ tests_passed++; } total_tests++;

    if((closest_integer("111.9") == 112)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.12340001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234567890000000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("91000000") == 91000000)){ tests_passed++; } total_tests++;

    if((closest_integer("99.99999") == 100)){ tests_passed++; } total_tests++;

    if((closest_integer("10.21") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("9911.99") == 9912)){ tests_passed++; } total_tests++;

    if((closest_integer("-051.278900000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("11100") == 11100)){ tests_passed++; } total_tests++;

    if((closest_integer("-5787.122345") == -5787)){ tests_passed++; } total_tests++;

    if((closest_integer("4.94999") == 5)){ tests_passed++; } total_tests++;

    if((closest_integer("-051.123456789001111100000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234556789000000000011101") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("1.1001010") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("12534567") == 12534567)){ tests_passed++; } total_tests++;

    if((closest_integer("000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-511.235456789000005000001") == -511)){ tests_passed++; } total_tests++;

    if((closest_integer("00.") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.2789000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("101") == 101)){ tests_passed++; } total_tests++;

    if((closest_integer("0101") == 101)){ tests_passed++; } total_tests++;

    if((closest_integer("125345678.521") == 125345679)){ tests_passed++; } total_tests++;

    if((closest_integer("654321.12345") == 654321)){ tests_passed++; } total_tests++;

    if((closest_integer("0111111101") == 111111101)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.123485") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-0051.123456789001111100000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("1.000011011") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.1234001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("11111111") == 11111111)){ tests_passed++; } total_tests++;

    if((closest_integer("-876514321.212345") == -876514321)){ tests_passed++; } total_tests++;

    if((closest_integer("9911.919") == 9912)){ tests_passed++; } total_tests++;

    if((closest_integer("-00.55") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("94.9999") == 95)){ tests_passed++; } total_tests++;

    if((closest_integer("55") == 55)){ tests_passed++; } total_tests++;

    if((closest_integer("000.0000000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("1.00111100015") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-0000921.12345") == -921)){ tests_passed++; } total_tests++;

    if((closest_integer("-5700800.12345") == -5700800)){ tests_passed++; } total_tests++;

    if((closest_integer("00.000001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("111111111") == 111111111)){ tests_passed++; } total_tests++;

    if((closest_integer("9100") == 9100)){ tests_passed++; } total_tests++;

    if((closest_integer("995") == 995)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.279989000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("-0.000000000099599") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("10.2345567890000000000111091001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("10.000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("-876543345") == -876543345)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234556789000000011101") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("-5787.123345") == -5787)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234567890001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("10.2345567189000000000011101") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("0000.0000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("3231.12345") == 3231)){ tests_passed++; } total_tests++;

    if((closest_integer("-876000.000000000000000543345") == -876000)){ tests_passed++; } total_tests++;

    if((closest_integer("94999") == 94999)){ tests_passed++; } total_tests++;

    if((closest_integer("00.000000000000011111") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("1111111111") == 1111111111)){ tests_passed++; } total_tests++;

    if((closest_integer("0.1011111") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("10.2345678900000011") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("10.23456789000000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("100011.0011110001501") == 100011)){ tests_passed++; } total_tests++;

    if((closest_integer("12345678.543211") == 12345679)){ tests_passed++; } total_tests++;

    if((closest_integer("-55.5") == -56)){ tests_passed++; } total_tests++;

    if((closest_integer("011") == 11)){ tests_passed++; } total_tests++;

    if((closest_integer("0010.234567890000000601111111101345000091000000") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("11.1011") == 11)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654") == -87654)){ tests_passed++; } total_tests++;

    if((closest_integer("-9599.5") == -9600)){ tests_passed++; } total_tests++;

    if((closest_integer("0101.234567890000001") == 101)){ tests_passed++; } total_tests++;

    if((closest_integer("109100") == 109100)){ tests_passed++; } total_tests++;

    if((closest_integer("-5787.123") == -5787)){ tests_passed++; } total_tests++;

    if((closest_integer("10.23000091") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("990.001") == 990)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.1213485") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("111.10111") == 111)){ tests_passed++; } total_tests++;

    if((closest_integer("111.5510111") == 112)){ tests_passed++; } total_tests++;

    if((closest_integer("9955") == 9955)){ tests_passed++; } total_tests++;

    if((closest_integer("-574321.12345") == -574321)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.02789000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("-5.55") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("-8761.0154") == -8761)){ tests_passed++; } total_tests++;

    if((closest_integer("1911.9925345678221") == 1912)){ tests_passed++; } total_tests++;

    if((closest_integer("11.00001000") == 11)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.2785900000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("9995100") == 9995100)){ tests_passed++; } total_tests++;

    if((closest_integer("123475678.521") == 123475679)){ tests_passed++; } total_tests++;

    if((closest_integer("0.000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("000.") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-59654321.12345") == -59654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-278900000") == -278900000)){ tests_passed++; } total_tests++;

    if((closest_integer("1000.00000000000000001111") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer("5.5125345678215555") == 6)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.1234567890011111000000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("4.994999") == 5)){ tests_passed++; } total_tests++;

    if((closest_integer("1.00111101") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("494.9999") == 495)){ tests_passed++; } total_tests++;

    if((closest_integer("94.99999") == 95)){ tests_passed++; } total_tests++;

    if((closest_integer("654321.123345") == 654321)){ tests_passed++; } total_tests++;

    if((closest_integer(".12345") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-9999955") == -9999955)){ tests_passed++; } total_tests++;

    if((closest_integer("-57121.12345") == -57121)){ tests_passed++; } total_tests++;

    if((closest_integer("-99999955") == -99999955)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.23456789000000002001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("654321.122345") == 654321)){ tests_passed++; } total_tests++;

    if((closest_integer("111.1") == 111)){ tests_passed++; } total_tests++;

    if((closest_integer("-57121.125345") == -57121)){ tests_passed++; } total_tests++;

    if((closest_integer("604555.55") == 604556)){ tests_passed++; } total_tests++;

    if((closest_integer("000.0001253456700000000000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-151.0279000") == -151)){ tests_passed++; } total_tests++;

    if((closest_integer("1001") == 1001)){ tests_passed++; } total_tests++;

    if((closest_integer("10.001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("-9999995") == -9999995)){ tests_passed++; } total_tests++;

    if((closest_integer("0010.2345678900000000091000000") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("00125345678.521000000") == 125345679)){ tests_passed++; } total_tests++;

    if((closest_integer("10.2300") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("-99999995") == -99999995)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.12314567890011111000500001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("0000.") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("1100010.234567890001") == 1100010)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0111011") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-00009121.12345") == -9121)){ tests_passed++; } total_tests++;

    if((closest_integer("5.5551") == 6)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.1234567890011511100000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("11001") == 11001)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234569100000078900000000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("99501015") == 99501015)){ tests_passed++; } total_tests++;

    if((closest_integer("0000.00000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.27859000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("-268555.576542345") == -268556)){ tests_passed++; } total_tests++;

    if((closest_integer("10.234100015678900000011") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("1111.5510111") == 1112)){ tests_passed++; } total_tests++;

    if((closest_integer("-0.00000099599") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("00000.0000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-.27859000000001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-154.949990") == -155)){ tests_passed++; } total_tests++;

    if((closest_integer("1.0011110") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("1000.000125345670000000000000011111") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer("12345678.5251") == 12345679)){ tests_passed++; } total_tests++;

    if((closest_integer("1100010.2934567890001") == 1100010)){ tests_passed++; } total_tests++;

    if((closest_integer("1111.11011") == 1111)){ tests_passed++; } total_tests++;

    if((closest_integer("5.51253345678215555") == 6)){ tests_passed++; } total_tests++;

    if((closest_integer("94.99991111119") == 95)){ tests_passed++; } total_tests++;

    if((closest_integer("111.511") == 112)){ tests_passed++; } total_tests++;

    if((closest_integer("0.00000099550009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("00.00001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("99.001") == 99)){ tests_passed++; } total_tests++;

    if((closest_integer("0.011") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("110.00001") == 110)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0000000000099") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("10001011") == 10001011)){ tests_passed++; } total_tests++;

    if((closest_integer("0.00000000010") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.202789000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("12345678.5431") == 12345679)){ tests_passed++; } total_tests++;

    if((closest_integer("111001") == 111001)){ tests_passed++; } total_tests++;

    if((closest_integer("10.230") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("-91.011") == -91)){ tests_passed++; } total_tests++;

    if((closest_integer("1911.99253452678221") == 1912)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.2729989000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("110010.9") == 110011)){ tests_passed++; } total_tests++;

    if((closest_integer("9911.999") == 9912)){ tests_passed++; } total_tests++;

    if((closest_integer("11.000001000") == 11)){ tests_passed++; } total_tests++;

    if((closest_integer("9911999") == 9911999)){ tests_passed++; } total_tests++;

    if((closest_integer("6045555.55") == 6045556)){ tests_passed++; } total_tests++;

    if((closest_integer("01111111101") == 1111111101)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.2789000000001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("-9991.011") == -9991)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-187654321.1345") == -187654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-268765410.000001245") == -268765410)){ tests_passed++; } total_tests++;

    if((closest_integer("1000101.0011110001501") == 1000101)){ tests_passed++; } total_tests++;

    if((closest_integer("10.2341006015678900000011") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("9499") == 9499)){ tests_passed++; } total_tests++;

    if((closest_integer("19111.99253452678221") == 19112)){ tests_passed++; } total_tests++;

    if((closest_integer("10.12345678900000000001") == 10)){ tests_passed++; } total_tests++;

    if((closest_integer("1111.50111") == 1112)){ tests_passed++; } total_tests++;

    if((closest_integer("-876514321.21234") == -876514321)){ tests_passed++; } total_tests++;

    if((closest_integer("789000001.123345") == 789000001)){ tests_passed++; } total_tests++;

    if((closest_integer("-051.02789000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("10011") == 10011)){ tests_passed++; } total_tests++;

    if((closest_integer("9911.9999") == 9912)){ tests_passed++; } total_tests++;

    if((closest_integer("-5787.1233") == -5787)){ tests_passed++; } total_tests++;

    if((closest_integer("1909100") == 1909100)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.23001") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("1000.000000000000000001111") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer(".011") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-51.027890000") == -51)){ tests_passed++; } total_tests++;

    if((closest_integer("-268765421.0000145") == -268765421)){ tests_passed++; } total_tests++;

    if((closest_integer("-999.011") == -999)){ tests_passed++; } total_tests++;

    if((closest_integer("100.001") == 100)){ tests_passed++; } total_tests++;

    if((closest_integer("-999999955") == -999999955)){ tests_passed++; } total_tests++;

    if((closest_integer("0.000000000000000000000000000000000000000000000000000000000000000000000000000001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-0.000000000000000000000000000000000000000000000000000000000000000000000000000000001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-0") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-0.5") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("0.00001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23405678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-8761.12345") == -8761)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-454.9999") == -455)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2345607890000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201345678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013456789000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-876544321.12345") == -876544321)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2345678900000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-876654321.12345") == -876654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20134560789000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.23456078900000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-8765421.12345") == -8765421)){ tests_passed++; } total_tests++;

    if((closest_integer("-2345") == -2345)){ tests_passed++; } total_tests++;

    if((closest_integer("-234") == -234)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2345607890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("0.000001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654432.12345") == -87654432)){ tests_passed++; } total_tests++;

    if((closest_integer("-1") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20134567890000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-54.9") == -55)){ tests_passed++; } total_tests++;

    if((closest_integer("-454.59999") == -455)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234056789000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20134567899000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013945678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20345672890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("12678.54321") == 12679)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234055670001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer(".5") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-24345") == -24345)){ tests_passed++; } total_tests++;

    if((closest_integer("12678.254321") == 12678)){ tests_passed++; } total_tests++;

    if((closest_integer("12678.543251") == 12679)){ tests_passed++; } total_tests++;

    if((closest_integer("-2334") == -2334)){ tests_passed++; } total_tests++;

    if((closest_integer("-23") == -23)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2340567890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-87565421.12345") == -87565421)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20304567890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567890001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201345678900000000000091") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-243545") == -243545)){ tests_passed++; } total_tests++;

    if((closest_integer("-11.234055670001") == -11)){ tests_passed++; } total_tests++;

    if((closest_integer("1.230456789000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.230304567890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-21.23456789000000000013") == -21)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201394567890000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20134567899000000000") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-454.") == -454)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23405567000") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.203045678900000000901") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("00.0000000009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.203456728900000000401") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-234523") == -234523)){ tests_passed++; } total_tests++;

    if((closest_integer("126784.2544321") == 126784)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234560789000000000010000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-41.20134560789000000000001") == -41)){ tests_passed++; } total_tests++;

    if((closest_integer("-245") == -245)){ tests_passed++; } total_tests++;

    if((closest_integer("-2344") == -2344)){ tests_passed++; } total_tests++;

    if((closest_integer("1.237890000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("9999.99999") == 10000)){ tests_passed++; } total_tests++;

    if((closest_integer("-2234") == -2234)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.121345") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("1.234560789000000000091") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013456780900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013456078900000300") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("00.00000000009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2303045678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-875654221.12345") == -875654221)){ tests_passed++; } total_tests++;

    if((closest_integer("12678.5432") == 12679)){ tests_passed++; } total_tests++;

    if((closest_integer("-2435545") == -2435545)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0000001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-22234") == -22234)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2345607890000000000100000700001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2303045067890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23456078900100000000100000700001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-222324") == -222324)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20134567809000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.230304501") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-2") == -2)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2030456708900000000901") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.123450000000") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-876654321.125345") == -876654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-2312678.54325134") == -2312679)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2345678900000050001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("123456678.54321") == 123456679)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23405670001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.203456724890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201345678900000000000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-2223224") == -2223224)){ tests_passed++; } total_tests++;

    if((closest_integer("99999.99999") == 100000)){ tests_passed++; } total_tests++;

    if((closest_integer("-200.00000000009") == -200)){ tests_passed++; } total_tests++;

    if((closest_integer("-24") == -24)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23400000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.1213435") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("999999999") == 999999999)){ tests_passed++; } total_tests++;

    if((closest_integer("-8745") == -8745)){ tests_passed++; } total_tests++;

    if((closest_integer("-23434") == -23434)){ tests_passed++; } total_tests++;

    if((closest_integer("-22324") == -22324)){ tests_passed++; } total_tests++;

    if((closest_integer("-323") == -323)){ tests_passed++; } total_tests++;

    if((closest_integer("-22434") == -22434)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20139456789000000050001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("0.000000009009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-541.234567890000000000199999") == -541)){ tests_passed++; } total_tests++;

    if((closest_integer("00005") == 5)){ tests_passed++; } total_tests++;

    if((closest_integer("-2312678.543251334") == -2312679)){ tests_passed++; } total_tests++;

    if((closest_integer("999999.99999") == 1000000)){ tests_passed++; } total_tests++;

    if((closest_integer("-10.00001") == -10)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("123456678.543221") == 123456679)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23456078900000050001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-22") == -22)){ tests_passed++; } total_tests++;

    if((closest_integer("99.999999") == 100)){ tests_passed++; } total_tests++;

    if((closest_integer("-31.2303045067890000000001") == -31)){ tests_passed++; } total_tests++;

    if((closest_integer("999999.999999") == 1000000)){ tests_passed++; } total_tests++;

    if((closest_integer("00999.999990001") == 1000)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20131") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.234560789000000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654432.1234") == -87654432)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2345607890000000000091") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("1234566678.543221") == 1234566679)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654432.212345") == -87654432)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234056711") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-299.9999992434") == -300)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23030450678900000030001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23456078900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-454.59") == -455)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567289000200000401") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234105678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-5.555") == -6)){ tests_passed++; } total_tests++;

    if((closest_integer("-87654321.12145") == -87654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-877654321.12345") == -877654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201345670809000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-11.201") == -11)){ tests_passed++; } total_tests++;

    if((closest_integer("-224") == -224)){ tests_passed++; } total_tests++;

    if((closest_integer("-544.95999") == -545)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2101") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013456708090008000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-243554500") == -243554500)){ tests_passed++; } total_tests++;

    if((closest_integer("-876754321.12134335") == -876754321)){ tests_passed++; } total_tests++;

    if((closest_integer("-5944.95999") == -5945)){ tests_passed++; } total_tests++;

    if((closest_integer("1.23456078900000000000091") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("000.00000000009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-41.0000001") == -41)){ tests_passed++; } total_tests++;

    if((closest_integer("1.234560578900000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-24341") == -24341)){ tests_passed++; } total_tests++;

    if((closest_integer("1.234560789000000000000091") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23030567890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2345060578900000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013435678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.230305678890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.234500000") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-875654221.123445") == -875654221)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2341050678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201394567890") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2021345678900000000000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.23457890000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567289") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-876543211.121345") == -876543211)){ tests_passed++; } total_tests++;

    if((closest_integer("1.23435678900000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.230405670001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-5000054.99999") == -5000055)){ tests_passed++; } total_tests++;

    if((closest_integer("-872654321.121345") == -872654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.203456728890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013645678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-2222324") == -2222324)){ tests_passed++; } total_tests++;

    if((closest_integer("-5941.23450000095999") == -5941)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2304567890000000901") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-13.234056789000000000001") == -13)){ tests_passed++; } total_tests++;

    if((closest_integer("01.23456078900000000") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-45554.59") == -45555)){ tests_passed++; } total_tests++;

    if((closest_integer("12678.85432") == 12679)){ tests_passed++; } total_tests++;

    if((closest_integer("-2312678.5432511334") == -2312679)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20345678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-2424345") == -2424345)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2134560789000000000010000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("0000000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("000001.234560789000000000000911") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-454.99") == -455)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23456001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-871.12345") == -871)){ tests_passed++; } total_tests++;

    if((closest_integer("1.234560789000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234560789001000000001000007600001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23030456789000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-8765421.122345") == -8765421)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201345678909000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-812345") == -812345)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.203045607890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-594.9999") == -595)){ tests_passed++; } total_tests++;

    if((closest_integer("-001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-594.9") == -595)){ tests_passed++; } total_tests++;

    if((closest_integer("-876654321.142345") == -876654321)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23456078900000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("9999999") == 9999999)){ tests_passed++; } total_tests++;

    if((closest_integer("-871.125") == -871)){ tests_passed++; } total_tests++;

    if((closest_integer("-21.234567890000000003") == -21)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013456789000000000000091") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-5944.959999") == -5945)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2345300000") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-11.2343055670001") == -11)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034560728900000000401") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("61.23435678900000000001") == 61)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20134569078900000300") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567248900005000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("999999") == 999999)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.20345672890000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("012678.543210") == 12679)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.203456789000000100001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567248900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("00.000000000009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-455554.59") == -455555)){ tests_passed++; } total_tests++;

    if((closest_integer("-29999934") == -29999934)){ tests_passed++; } total_tests++;

    if((closest_integer("-244") == -244)){ tests_passed++; } total_tests++;

    if((closest_integer("-11.234305567004301") == -11)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.234000000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-876543211.1215") == -876543211)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201394567890000000000") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("0.00000010001") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201394567890000000050001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-23126578.54325134") == -23126579)){ tests_passed++; } total_tests++;

    if((closest_integer("1234566178.54321") == 1234566179)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013945678900000000050001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("1234566781.543221") == 1234566782)){ tests_passed++; } total_tests++;

    if((closest_integer("-5944.995999") == -5945)){ tests_passed++; } total_tests++;

    if((closest_integer("0000000001.2345607890000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("991.23453000009999999") == 991)){ tests_passed++; } total_tests++;

    if((closest_integer("-000052") == -52)){ tests_passed++; } total_tests++;

    if((closest_integer("1.23045678900000901") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("-594.99949") == -595)){ tests_passed++; } total_tests++;

    if((closest_integer("-10.0000") == -10)){ tests_passed++; } total_tests++;

    if((closest_integer("-23126781.543251334") == -23126782)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013456789090000000900001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.23141050678900000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-45.59") == -46)){ tests_passed++; } total_tests++;

    if((closest_integer("54.9") == 55)){ tests_passed++; } total_tests++;

    if((closest_integer("00000") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2011") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-22312678.543251334") == -22312679)){ tests_passed++; } total_tests++;

    if((closest_integer("-5954.9999") == -5955)){ tests_passed++; } total_tests++;

    if((closest_integer("0.0009") == 0)){ tests_passed++; } total_tests++;

    if((closest_integer("-991.23453000009999999001") == -991)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.21345607890000000000100000000011") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.201345670809000000000999999001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("100901") == 100901)){ tests_passed++; } total_tests++;

    if((closest_integer("1.2304567890000000001") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("1.23400091") == 1)){ tests_passed++; } total_tests++;

    if((closest_integer("123456378.54321") == 123456379)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.203045670890000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2013456750809000000000001") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567890") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2034567289000000000401") == -1)){ tests_passed++; } total_tests++;

    if((closest_integer("-1.2345678900000000001") == -1)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


