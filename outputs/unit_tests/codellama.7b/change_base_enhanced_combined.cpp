#include <string>
#include <iostream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = (remainder >= 0 && remainder <= 9) ? char('0' + remainder) : char('A' + remainder - 10);
        x /= base;
    }
    return result;
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

    if((change_base(8, 3) == "22")){ tests_passed++; } total_tests++;

    if((change_base(9, 3) == "100")){ tests_passed++; } total_tests++;

    if((change_base(234, 2) == "11101010")){ tests_passed++; } total_tests++;

    if((change_base(16, 2) == "10000")){ tests_passed++; } total_tests++;

    if((change_base(8, 2) == "1000")){ tests_passed++; } total_tests++;

    if((change_base(7, 2) == "111")){ tests_passed++; } total_tests++;

    for (int x=2;x<8;x++)
        if((change_base(x, x + 1) == to_string(x))){ tests_passed++; } total_tests++;

    if((change_base(8, 3) == "22")){ tests_passed++; } total_tests++;

    if((change_base(9, 3) == "100")){ tests_passed++; } total_tests++;

    if((change_base(234, 2) == "11101010")){ tests_passed++; } total_tests++;

    if((change_base(16, 2) == "10000")){ tests_passed++; } total_tests++;

    if((change_base(8, 2) == "1000")){ tests_passed++; } total_tests++;

    if((change_base(7, 2) == "111")){ tests_passed++; } total_tests++;

    if((change_base(2, 3) == "2")){ tests_passed++; } total_tests++;

    if((change_base(3, 4) == "3")){ tests_passed++; } total_tests++;

    if((change_base(4, 5) == "4")){ tests_passed++; } total_tests++;

    if((change_base(5, 6) == "5")){ tests_passed++; } total_tests++;

    if((change_base(6, 7) == "6")){ tests_passed++; } total_tests++;

    if((change_base(7, 8) == "7")){ tests_passed++; } total_tests++;

    if((change_base(10, 5) == "20")){ tests_passed++; } total_tests++;

    if((change_base(15, 4) == "33")){ tests_passed++; } total_tests++;

    if((change_base(25, 6) == "41")){ tests_passed++; } total_tests++;

    if((change_base(33, 7) == "45")){ tests_passed++; } total_tests++;

    if((change_base(45, 8) == "55")){ tests_passed++; } total_tests++;

    if((change_base(50, 9) == "55")){ tests_passed++; } total_tests++;

    if((change_base(13, 5) == "23")){ tests_passed++; } total_tests++;

    if((change_base(17, 3) == "122")){ tests_passed++; } total_tests++;

    if((change_base(42, 8) == "52")){ tests_passed++; } total_tests++;

    if((change_base(15, 2) == "1111")){ tests_passed++; } total_tests++;

    if((change_base(8, 4) == "20")){ tests_passed++; } total_tests++;

    if((change_base(17, 8) == "21")){ tests_passed++; } total_tests++;

    if((change_base(9, 5) == "14")){ tests_passed++; } total_tests++;

    if((change_base(7, 6) == "11")){ tests_passed++; } total_tests++;

    if((change_base(5, 8) == "5")){ tests_passed++; } total_tests++;

    if((change_base(45, 7) == "63")){ tests_passed++; } total_tests++;

    if((change_base(4, 9) == "4")){ tests_passed++; } total_tests++;

    if((change_base(3, 3) == "10")){ tests_passed++; } total_tests++;

    if((change_base(8, 8) == "10")){ tests_passed++; } total_tests++;

    if((change_base(2, 8) == "2")){ tests_passed++; } total_tests++;

    if((change_base(15, 7) == "21")){ tests_passed++; } total_tests++;

    if((change_base(50, 5) == "200")){ tests_passed++; } total_tests++;

    if((change_base(8, 7) == "11")){ tests_passed++; } total_tests++;

    if((change_base(25, 5) == "100")){ tests_passed++; } total_tests++;

    if((change_base(17, 9) == "18")){ tests_passed++; } total_tests++;

    if((change_base(5, 9) == "5")){ tests_passed++; } total_tests++;

    if((change_base(2, 6) == "2")){ tests_passed++; } total_tests++;

    if((change_base(9, 9) == "10")){ tests_passed++; } total_tests++;

    if((change_base(4, 4) == "10")){ tests_passed++; } total_tests++;

    if((change_base(7, 7) == "10")){ tests_passed++; } total_tests++;

    if((change_base(5, 4) == "11")){ tests_passed++; } total_tests++;

    if((change_base(3, 7) == "3")){ tests_passed++; } total_tests++;

    if((change_base(13, 7) == "16")){ tests_passed++; } total_tests++;

    if((change_base(15, 3) == "120")){ tests_passed++; } total_tests++;

    if((change_base(2, 2) == "10")){ tests_passed++; } total_tests++;

    if((change_base(17, 7) == "23")){ tests_passed++; } total_tests++;

    if((change_base(7, 5) == "12")){ tests_passed++; } total_tests++;

    if((change_base(10, 8) == "12")){ tests_passed++; } total_tests++;

    if((change_base(3, 6) == "3")){ tests_passed++; } total_tests++;

    if((change_base(16, 8) == "20")){ tests_passed++; } total_tests++;

    if((change_base(18, 2) == "10010")){ tests_passed++; } total_tests++;

    if((change_base(15, 5) == "30")){ tests_passed++; } total_tests++;

    if((change_base(6, 6) == "10")){ tests_passed++; } total_tests++;

    if((change_base(46, 8) == "56")){ tests_passed++; } total_tests++;

    if((change_base(7, 9) == "7")){ tests_passed++; } total_tests++;

    if((change_base(50, 2) == "110010")){ tests_passed++; } total_tests++;

    if((change_base(41, 8) == "51")){ tests_passed++; } total_tests++;

    if((change_base(16, 4) == "100")){ tests_passed++; } total_tests++;

    if((change_base(46, 5) == "141")){ tests_passed++; } total_tests++;

    if((change_base(17, 2) == "10001")){ tests_passed++; } total_tests++;

    if((change_base(3, 2) == "11")){ tests_passed++; } total_tests++;

    if((change_base(3, 9) == "3")){ tests_passed++; } total_tests++;

    if((change_base(13, 8) == "15")){ tests_passed++; } total_tests++;

    if((change_base(9, 6) == "13")){ tests_passed++; } total_tests++;

    if((change_base(42, 7) == "60")){ tests_passed++; } total_tests++;

    if((change_base(10, 4) == "22")){ tests_passed++; } total_tests++;

    if((change_base(45, 6) == "113")){ tests_passed++; } total_tests++;

    if((change_base(15, 8) == "17")){ tests_passed++; } total_tests++;

    if((change_base(43, 7) == "61")){ tests_passed++; } total_tests++;

    if((change_base(5, 5) == "10")){ tests_passed++; } total_tests++;

    if((change_base(3, 5) == "3")){ tests_passed++; } total_tests++;

    if((change_base(4, 3) == "11")){ tests_passed++; } total_tests++;

    if((change_base(13, 9) == "14")){ tests_passed++; } total_tests++;

    if((change_base(9, 8) == "11")){ tests_passed++; } total_tests++;

    if((change_base(33, 9) == "36")){ tests_passed++; } total_tests++;

    if((change_base(6, 3) == "20")){ tests_passed++; } total_tests++;

    if((change_base(10, 7) == "13")){ tests_passed++; } total_tests++;

    if((change_base(8, 9) == "8")){ tests_passed++; } total_tests++;

    if((change_base(18, 7) == "24")){ tests_passed++; } total_tests++;

    if((change_base(19, 7) == "25")){ tests_passed++; } total_tests++;

    if((change_base(43, 5) == "133")){ tests_passed++; } total_tests++;

    if((change_base(46, 7) == "64")){ tests_passed++; } total_tests++;

    if((change_base(8, 5) == "13")){ tests_passed++; } total_tests++;

    if((change_base(16, 7) == "22")){ tests_passed++; } total_tests++;

    if((change_base(34, 3) == "1021")){ tests_passed++; } total_tests++;

    if((change_base(16, 6) == "24")){ tests_passed++; } total_tests++;

    if((change_base(6, 4) == "12")){ tests_passed++; } total_tests++;

    if((change_base(4, 6) == "4")){ tests_passed++; } total_tests++;

    if((change_base(5, 7) == "5")){ tests_passed++; } total_tests++;

    if((change_base(15, 6) == "23")){ tests_passed++; } total_tests++;

    if((change_base(14, 5) == "24")){ tests_passed++; } total_tests++;

    if((change_base(14, 6) == "22")){ tests_passed++; } total_tests++;

    if((change_base(10, 9) == "11")){ tests_passed++; } total_tests++;

    if((change_base(46, 6) == "114")){ tests_passed++; } total_tests++;

    if((change_base(5, 2) == "101")){ tests_passed++; } total_tests++;

    if((change_base(18, 9) == "20")){ tests_passed++; } total_tests++;

    if((change_base(18, 8) == "22")){ tests_passed++; } total_tests++;

    if((change_base(7, 4) == "13")){ tests_passed++; } total_tests++;

    if((change_base(35, 9) == "38")){ tests_passed++; } total_tests++;

    if((change_base(4, 8) == "4")){ tests_passed++; } total_tests++;

    if((change_base(6, 5) == "11")){ tests_passed++; } total_tests++;

    if((change_base(50, 7) == "101")){ tests_passed++; } total_tests++;

    if((change_base(50, 8) == "62")){ tests_passed++; } total_tests++;

    if((change_base(13, 4) == "31")){ tests_passed++; } total_tests++;

    if((change_base(256, 5) == "2011")){ tests_passed++; } total_tests++;

    if((change_base(2019, 3) == "2202210")){ tests_passed++; } total_tests++;

    if((change_base(34567, 9) == "52367")){ tests_passed++; } total_tests++;

    if((change_base(27, 3) == "1000")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 8) == "7267464261")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 9) == "20731370")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 3) == "22121022020212200")){ tests_passed++; } total_tests++;

    if((change_base(2669, 7) == "10532")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 8) == "270174735")){ tests_passed++; } total_tests++;

    if((change_base(245678, 7) == "2042156")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 8) == "46113177")){ tests_passed++; } total_tests++;

    if((change_base(2019, 4) == "133203")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 9) == "2484401020")){ tests_passed++; } total_tests++;

    if((change_base(245678, 8) == "737656")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 8) == "726746425")){ tests_passed++; } total_tests++;

    if((change_base(2019, 9) == "2683")){ tests_passed++; } total_tests++;

    if((change_base(6, 9) == "6")){ tests_passed++; } total_tests++;

    if((change_base(2018, 9) == "2682")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 4) == "13112330310111")){ tests_passed++; } total_tests++;

    if((change_base(2, 4) == "2")){ tests_passed++; } total_tests++;

    if((change_base(34567, 4) == "20130013")){ tests_passed++; } total_tests++;

    if((change_base(9, 4) == "21")){ tests_passed++; } total_tests++;

    if((change_base(256, 9) == "314")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 4) == "2320033213131")){ tests_passed++; } total_tests++;

    if((change_base(245678, 3) == "110111000012")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 9) == "110784027")){ tests_passed++; } total_tests++;

    if((change_base(2669, 4) == "221231")){ tests_passed++; } total_tests++;

    if((change_base(1, 3) == "1")){ tests_passed++; } total_tests++;

    if((change_base(2, 9) == "2")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 4) == "2320033213132")){ tests_passed++; } total_tests++;

    if((change_base(2020, 3) == "2202211")){ tests_passed++; } total_tests++;

    if((change_base(27, 2) == "11011")){ tests_passed++; } total_tests++;

    if((change_base(2669, 8) == "5155")){ tests_passed++; } total_tests++;

    if((change_base(4, 2) == "100")){ tests_passed++; } total_tests++;

    if((change_base(2, 5) == "2")){ tests_passed++; } total_tests++;

    if((change_base(245678, 9) == "414005")){ tests_passed++; } total_tests++;

    if((change_base(9, 7) == "12")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 2) == "10111000001111100111011101")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 6) == "554200143")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 5) == "10024444444")){ tests_passed++; } total_tests++;

    if((change_base(245678, 4) == "323332232")){ tests_passed++; } total_tests++;

    if((change_base(26, 2) == "11010")){ tests_passed++; } total_tests++;

    if((change_base(2020, 4) == "133210")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 3) == "2112211110001000200")){ tests_passed++; } total_tests++;

    if((change_base(2018, 8) == "3742")){ tests_passed++; } total_tests++;

    if((change_base(34568, 9) == "52368")){ tests_passed++; } total_tests++;

    if((change_base(10, 2) == "1010")){ tests_passed++; } total_tests++;

    if((change_base(10, 3) == "101")){ tests_passed++; } total_tests++;

    if((change_base(27, 8) == "33")){ tests_passed++; } total_tests++;

    if((change_base(256, 4) == "10000")){ tests_passed++; } total_tests++;

    if((change_base(257, 4) == "10001")){ tests_passed++; } total_tests++;

    if((change_base(34568, 2) == "1000011100001000")){ tests_passed++; } total_tests++;

    if((change_base(9, 2) == "1001")){ tests_passed++; } total_tests++;

    if((change_base(34569, 2) == "1000011100001001")){ tests_passed++; } total_tests++;

    if((change_base(1, 2) == "1")){ tests_passed++; } total_tests++;

    if((change_base(245678, 5) == "30330203")){ tests_passed++; } total_tests++;

    if((change_base(2670, 7) == "10533")){ tests_passed++; } total_tests++;

    if((change_base(2, 7) == "2")){ tests_passed++; } total_tests++;

    if((change_base(27, 9) == "30")){ tests_passed++; } total_tests++;

    if((change_base(5, 3) == "12")){ tests_passed++; } total_tests++;

    if((change_base(34567, 2) == "1000011100000111")){ tests_passed++; } total_tests++;

    if((change_base(34568, 4) == "20130020")){ tests_passed++; } total_tests++;

    if((change_base(2669, 2) == "101001101101")){ tests_passed++; } total_tests++;

    if((change_base(26, 4) == "122")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 2) == "111010110111100110100010101")){ tests_passed++; } total_tests++;

    if((change_base(2019, 8) == "3743")){ tests_passed++; } total_tests++;

    if((change_base(34569, 9) == "52370")){ tests_passed++; } total_tests++;

    if((change_base(34567, 3) == "1202102021")){ tests_passed++; } total_tests++;

    if((change_base(0, 3) == "0")){ tests_passed++; } total_tests++;

    if((change_base(257, 8) == "401")){ tests_passed++; } total_tests++;

    if((change_base(2669, 3) == "10122212")){ tests_passed++; } total_tests++;

    if((change_base(26, 7) == "35")){ tests_passed++; } total_tests++;

    if((change_base(2019, 5) == "31034")){ tests_passed++; } total_tests++;

    if((change_base(28, 3) == "1001")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 8) == "726746426")){ tests_passed++; } total_tests++;

    if((change_base(34567, 8) == "103407")){ tests_passed++; } total_tests++;

    if((change_base(257, 7) == "515")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 6) == "4443111553")){ tests_passed++; } total_tests++;

    if((change_base(256, 8) == "400")){ tests_passed++; } total_tests++;

    if((change_base(2669, 6) == "20205")){ tests_passed++; } total_tests++;

    if((change_base(26, 6) == "42")){ tests_passed++; } total_tests++;

    if((change_base(34568, 3) == "1202102022")){ tests_passed++; } total_tests++;

    if((change_base(27, 5) == "102")){ tests_passed++; } total_tests++;

    if((change_base(26, 5) == "101")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 4) == "212021121333")){ tests_passed++; } total_tests++;

    if((change_base(48298460, 2) == "10111000001111100111011100")){ tests_passed++; } total_tests++;

    if((change_base(2019, 6) == "13203")){ tests_passed++; } total_tests++;

    if((change_base(48298460, 9) == "110784025")){ tests_passed++; } total_tests++;

    if((change_base(48298463, 6) == "4443111555")){ tests_passed++; } total_tests++;

    if((change_base(48298460, 7) == "1124346560")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 9) == "277266781")){ tests_passed++; } total_tests++;

    if((change_base(48298463, 9) == "110784028")){ tests_passed++; } total_tests++;

    if((change_base(27, 6) == "43")){ tests_passed++; } total_tests++;

    if((change_base(34569, 4) == "20130021")){ tests_passed++; } total_tests++;

    if((change_base(27, 4) == "123")){ tests_passed++; } total_tests++;

    if((change_base(34570, 9) == "52371")){ tests_passed++; } total_tests++;

    if((change_base(256, 3) == "100111")){ tests_passed++; } total_tests++;

    if((change_base(245679, 4) == "323332233")){ tests_passed++; } total_tests++;

    if((change_base(245679, 8) == "737657")){ tests_passed++; } total_tests++;

    if((change_base(257, 9) == "315")){ tests_passed++; } total_tests++;

    if((change_base(26, 3) == "222")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 2) == "100110001001011001111111")){ tests_passed++; } total_tests++;

    if((change_base(1, 6) == "1")){ tests_passed++; } total_tests++;

    if((change_base(48298463, 8) == "270174737")){ tests_passed++; } total_tests++;

    if((change_base(2669, 5) == "41134")){ tests_passed++; } total_tests++;

    if((change_base(123456791, 9) == "277266782")){ tests_passed++; } total_tests++;

    if((change_base(257, 6) == "1105")){ tests_passed++; } total_tests++;

    if((change_base(0, 8) == "0")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 7) == "3026236222")){ tests_passed++; } total_tests++;

    if((change_base(257, 3) == "100112")){ tests_passed++; } total_tests++;

    if((change_base(245679, 9) == "414006")){ tests_passed++; } total_tests++;

    if((change_base(34570, 7) == "202534")){ tests_passed++; } total_tests++;

    if((change_base(1, 5) == "1")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 4) == "13112330310112")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 2) == "10111000001111100111011110")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 7) == "150666342")){ tests_passed++; } total_tests++;

    if((change_base(34569, 3) == "1202102100")){ tests_passed++; } total_tests++;

    if((change_base(123456791, 4) == "13112330310113")){ tests_passed++; } total_tests++;

    if((change_base(255, 5) == "2010")){ tests_passed++; } total_tests++;

    if((change_base(123456788, 4) == "13112330310110")){ tests_passed++; } total_tests++;

    if((change_base(123456792, 4) == "13112330310120")){ tests_passed++; } total_tests++;

    if((change_base(255, 6) == "1103")){ tests_passed++; } total_tests++;

    if((change_base(10000000, 8) == "46113200")){ tests_passed++; } total_tests++;

    if((change_base(255, 9) == "313")){ tests_passed++; } total_tests++;

    if((change_base(8, 6) == "12")){ tests_passed++; } total_tests++;

    if((change_base(123456791, 3) == "22121022020212202")){ tests_passed++; } total_tests++;

    if((change_base(255, 2) == "11111111")){ tests_passed++; } total_tests++;

    if((change_base(1, 8) == "1")){ tests_passed++; } total_tests++;

    if((change_base(34568, 8) == "103410")){ tests_passed++; } total_tests++;

    if((change_base(10000000, 5) == "10030000000")){ tests_passed++; } total_tests++;

    if((change_base(255, 3) == "100110")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 3) == "10100212211000220")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 9) == "110784026")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 3) == "22121022020212201")){ tests_passed++; } total_tests++;

    if((change_base(34569, 7) == "202533")){ tests_passed++; } total_tests++;

    if((change_base(34570, 3) == "1202102101")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 6) == "20130035113")){ tests_passed++; } total_tests++;

    if((change_base(123456788, 3) == "22121022020212122")){ tests_passed++; } total_tests++;

    if((change_base(257, 5) == "2012")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 5) == "4010314414241")){ tests_passed++; } total_tests++;

    if((change_base(2020, 9) == "2684")){ tests_passed++; } total_tests++;

    if((change_base(2018, 6) == "13202")){ tests_passed++; } total_tests++;

    if((change_base(1, 7) == "1")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 5) == "44331022321")){ tests_passed++; } total_tests++;

    if((change_base(6, 8) == "6")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 8) == "270174736")){ tests_passed++; } total_tests++;

    if((change_base(34571, 7) == "202535")){ tests_passed++; } total_tests++;

    if((change_base(0, 7) == "0")){ tests_passed++; } total_tests++;

    if((change_base(34571, 2) == "1000011100001011")){ tests_passed++; } total_tests++;

    if((change_base(28, 7) == "40")){ tests_passed++; } total_tests++;

    if((change_base(34571, 4) == "20130023")){ tests_passed++; } total_tests++;

    if((change_base(257, 2) == "100000001")){ tests_passed++; } total_tests++;

    if((change_base(34569, 5) == "2101234")){ tests_passed++; } total_tests++;

    if((change_base(11, 9) == "12")){ tests_passed++; } total_tests++;

    if((change_base(48298461, 7) == "1124346561")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 6) == "4443111554")){ tests_passed++; } total_tests++;

    if((change_base(245680, 4) == "323332300")){ tests_passed++; } total_tests++;

    if((change_base(11, 6) == "15")){ tests_passed++; } total_tests++;

    if((change_base(34568, 5) == "2101233")){ tests_passed++; } total_tests++;

    if((change_base(10000000, 6) == "554200144")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 3) == "10100212211000221")){ tests_passed++; } total_tests++;

    if((change_base(2018, 3) == "2202202")){ tests_passed++; } total_tests++;

    if((change_base(34569, 8) == "103411")){ tests_passed++; } total_tests++;

    if((change_base(245679, 5) == "30330204")){ tests_passed++; } total_tests++;

    if((change_base(245680, 3) == "110111000021")){ tests_passed++; } total_tests++;

    if((change_base(10000000, 4) == "212021122000")){ tests_passed++; } total_tests++;

    if((change_base(10000000, 7) == "150666343")){ tests_passed++; } total_tests++;

    if((change_base(9999999, 3) == "200211001102100")){ tests_passed++; } total_tests++;

    if((change_base(34571, 6) == "424015")){ tests_passed++; } total_tests++;

    if((change_base(28, 9) == "31")){ tests_passed++; } total_tests++;

    if((change_base(1, 4) == "1")){ tests_passed++; } total_tests++;

    if((change_base(11, 7) == "14")){ tests_passed++; } total_tests++;

    if((change_base(2670, 4) == "221232")){ tests_passed++; } total_tests++;

    if((change_base(0, 5) == "0")){ tests_passed++; } total_tests++;

    if((change_base(123456791, 8) == "726746427")){ tests_passed++; } total_tests++;

    if((change_base(123456788, 2) == "111010110111100110100010100")){ tests_passed++; } total_tests++;

    if((change_base(9999998, 5) == "10024444443")){ tests_passed++; } total_tests++;

    if((change_base(34571, 8) == "103413")){ tests_passed++; } total_tests++;

    if((change_base(245679, 3) == "110111000020")){ tests_passed++; } total_tests++;

    if((change_base(123456792, 7) == "3026236224")){ tests_passed++; } total_tests++;

    if((change_base(34568, 7) == "202532")){ tests_passed++; } total_tests++;

    if((change_base(123456792, 5) == "223101104132")){ tests_passed++; } total_tests++;

    if((change_base(34568, 6) == "424012")){ tests_passed++; } total_tests++;

    if((change_base(123456788, 5) == "223101104123")){ tests_passed++; } total_tests++;

    if((change_base(2020, 2) == "11111100100")){ tests_passed++; } total_tests++;

    if((change_base(2670, 6) == "20210")){ tests_passed++; } total_tests++;

    if((change_base(48298460, 8) == "270174734")){ tests_passed++; } total_tests++;

    if((change_base(245678, 6) == "5133222")){ tests_passed++; } total_tests++;

    if((change_base(9999998, 3) == "200211001102022")){ tests_passed++; } total_tests++;

    if((change_base(34570, 5) == "2101240")){ tests_passed++; } total_tests++;

    if((change_base(48298460, 5) == "44331022320")){ tests_passed++; } total_tests++;

    if((change_base(10000000, 2) == "100110001001011010000000")){ tests_passed++; } total_tests++;

    if((change_base(123456792, 3) == "22121022020212210")){ tests_passed++; } total_tests++;

    if((change_base(2020, 8) == "3744")){ tests_passed++; } total_tests++;

    if((change_base(34571, 3) == "1202102102")){ tests_passed++; } total_tests++;

    if((change_base(245680, 8) == "737660")){ tests_passed++; } total_tests++;

    if((change_base(123456791, 7) == "3026236223")){ tests_passed++; } total_tests++;

    if((change_base(6, 2) == "110")){ tests_passed++; } total_tests++;

    if((change_base(123456788, 8) == "726746424")){ tests_passed++; } total_tests++;

    if((change_base(255, 8) == "377")){ tests_passed++; } total_tests++;

    if((change_base(123456792, 2) == "111010110111100110100011000")){ tests_passed++; } total_tests++;

    if((change_base(258, 5) == "2013")){ tests_passed++; } total_tests++;

    if((change_base(258, 9) == "316")){ tests_passed++; } total_tests++;

    if((change_base(48298463, 3) == "10100212211000222")){ tests_passed++; } total_tests++;

    if((change_base(2671, 2) == "101001101111")){ tests_passed++; } total_tests++;

    if((change_base(245677, 4) == "323332231")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 2) == "100110001001011010000001")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 8) == "46113201")){ tests_passed++; } total_tests++;

    if((change_base(48298463, 4) == "2320033213133")){ tests_passed++; } total_tests++;

    if((change_base(34570, 8) == "103412")){ tests_passed++; } total_tests++;

    if((change_base(34571, 9) == "52372")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 7) == "1124346562")){ tests_passed++; } total_tests++;

    if((change_base(48298460, 4) == "2320033213130")){ tests_passed++; } total_tests++;

    if((change_base(0, 9) == "0")){ tests_passed++; } total_tests++;

    if((change_base(9999998, 2) == "100110001001011001111110")){ tests_passed++; } total_tests++;

    if((change_base(11, 3) == "102")){ tests_passed++; } total_tests++;

    if((change_base(9999998, 6) == "554200142")){ tests_passed++; } total_tests++;

    if((change_base(2671, 4) == "221233")){ tests_passed++; } total_tests++;

    if((change_base(2018, 2) == "11111100010")){ tests_passed++; } total_tests++;

    if((change_base(245676, 5) == "30330201")){ tests_passed++; } total_tests++;

    if((change_base(123456791, 2) == "111010110111100110100010111")){ tests_passed++; } total_tests++;

    if((change_base(9999998, 7) == "150666341")){ tests_passed++; } total_tests++;

    if((change_base(28, 2) == "11100")){ tests_passed++; } total_tests++;

    if((change_base(28, 5) == "103")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 6) == "554200145")){ tests_passed++; } total_tests++;

    if((change_base(34570, 2) == "1000011100001010")){ tests_passed++; } total_tests++;

    if((change_base(245676, 2) == "111011111110101100")){ tests_passed++; } total_tests++;

    if((change_base(11, 5) == "21")){ tests_passed++; } total_tests++;

    if((change_base(2672, 5) == "41142")){ tests_passed++; } total_tests++;

    if((change_base(48298460, 6) == "4443111552")){ tests_passed++; } total_tests++;

    if((change_base(34570, 4) == "20130022")){ tests_passed++; } total_tests++;

    if((change_base(256, 6) == "1104")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 5) == "223101104130")){ tests_passed++; } total_tests++;

    if((change_base(48298464, 4) == "2320033213200")){ tests_passed++; } total_tests++;

    if((change_base(2669, 9) == "3585")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 2) == "111010110111100110100010110")){ tests_passed++; } total_tests++;

    if((change_base(0, 2) == "0")){ tests_passed++; } total_tests++;

    if((change_base(123456790, 6) == "20130035114")){ tests_passed++; } total_tests++;

    if((change_base(245677, 5) == "30330202")){ tests_passed++; } total_tests++;

    if((change_base(2020, 7) == "5614")){ tests_passed++; } total_tests++;

    if((change_base(255, 4) == "3333")){ tests_passed++; } total_tests++;

    if((change_base(2019, 2) == "11111100011")){ tests_passed++; } total_tests++;

    if((change_base(28, 4) == "130")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 7) == "150666344")){ tests_passed++; } total_tests++;

    if((change_base(48298464, 6) == "4443112000")){ tests_passed++; } total_tests++;

    if((change_base(30, 2) == "11110")){ tests_passed++; } total_tests++;

    if((change_base(25, 2) == "11001")){ tests_passed++; } total_tests++;

    if((change_base(123456788, 6) == "20130035112")){ tests_passed++; } total_tests++;

    if((change_base(258, 2) == "100000010")){ tests_passed++; } total_tests++;

    if((change_base(26, 8) == "32")){ tests_passed++; } total_tests++;

    if((change_base(245679, 6) == "5133223")){ tests_passed++; } total_tests++;

    if((change_base(2018, 4) == "133202")){ tests_passed++; } total_tests++;

    if((change_base(0, 4) == "0")){ tests_passed++; } total_tests++;

    if((change_base(34567, 7) == "202531")){ tests_passed++; } total_tests++;

    if((change_base(2018, 5) == "31033")){ tests_passed++; } total_tests++;

    if((change_base(27, 7) == "36")){ tests_passed++; } total_tests++;

    if((change_base(10000000, 9) == "20731371")){ tests_passed++; } total_tests++;

    if((change_base(987654320, 8) == "7267464260")){ tests_passed++; } total_tests++;

    if((change_base(245679, 7) == "2042160")){ tests_passed++; } total_tests++;

    if((change_base(3, 8) == "3")){ tests_passed++; } total_tests++;

    if((change_base(245677, 9) == "414004")){ tests_passed++; } total_tests++;

    if((change_base(34567, 6) == "424011")){ tests_passed++; } total_tests++;

    if((change_base(987654320, 6) == "242000505412")){ tests_passed++; } total_tests++;

    if((change_base(245677, 7) == "2042155")){ tests_passed++; } total_tests++;

    if((change_base(245677, 6) == "5133221")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 6) == "242000505413")){ tests_passed++; } total_tests++;

    if((change_base(28, 8) == "34")){ tests_passed++; } total_tests++;

    if((change_base(987654320, 9) == "2484401018")){ tests_passed++; } total_tests++;

    if((change_base(245677, 8) == "737655")){ tests_passed++; } total_tests++;

    if((change_base(987654320, 7) == "33321631442")){ tests_passed++; } total_tests++;

    if((change_base(987654320, 5) == "4010314414240")){ tests_passed++; } total_tests++;

    if((change_base(4, 7) == "4")){ tests_passed++; } total_tests++;

    if((change_base(245677, 3) == "110111000011")){ tests_passed++; } total_tests++;

    if((change_base(256, 2) == "100000000")){ tests_passed++; } total_tests++;

    if((change_base(245678, 2) == "111011111110101110")){ tests_passed++; } total_tests++;

    if((change_base(26, 9) == "28")){ tests_passed++; } total_tests++;

    if((change_base(245679, 2) == "111011111110101111")){ tests_passed++; } total_tests++;

    if((change_base(2670, 5) == "41140")){ tests_passed++; } total_tests++;

    if((change_base(2670, 8) == "5156")){ tests_passed++; } total_tests++;

    if((change_base(987654322, 6) == "242000505414")){ tests_passed++; } total_tests++;

    if((change_base(987654322, 2) == "111010110111100110100010110010")){ tests_passed++; } total_tests++;

    if((change_base(2017, 3) == "2202201")){ tests_passed++; } total_tests++;

    if((change_base(2020, 5) == "31040")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 4) == "212021122001")){ tests_passed++; } total_tests++;

    if((change_base(0, 6) == "0")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 2) == "111010110111100110100010110001")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 9) == "277266780")){ tests_passed++; } total_tests++;

    if((change_base(10000002, 6) == "554200150")){ tests_passed++; } total_tests++;

    if((change_base(987654323, 2) == "111010110111100110100010110011")){ tests_passed++; } total_tests++;

    if((change_base(10000002, 7) == "150666345")){ tests_passed++; } total_tests++;

    if((change_base(123456788, 9) == "277266778")){ tests_passed++; } total_tests++;

    if((change_base(28, 6) == "44")){ tests_passed++; } total_tests++;

    if((change_base(2017, 7) == "5611")){ tests_passed++; } total_tests++;

    if((change_base(25, 7) == "34")){ tests_passed++; } total_tests++;

    if((change_base(2670, 9) == "3586")){ tests_passed++; } total_tests++;

    if((change_base(987654322, 8) == "7267464262")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 9) == "20731372")){ tests_passed++; } total_tests++;

    if((change_base(987654323, 4) == "322313212202303")){ tests_passed++; } total_tests++;

    if((change_base(25, 3) == "221")){ tests_passed++; } total_tests++;

    if((change_base(29, 2) == "11101")){ tests_passed++; } total_tests++;

    if((change_base(10, 6) == "14")){ tests_passed++; } total_tests++;

    if((change_base(987654323, 7) == "33321631445")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 4) == "322313212202301")){ tests_passed++; } total_tests++;

    if((change_base(29, 3) == "1002")){ tests_passed++; } total_tests++;

    if((change_base(2020, 6) == "13204")){ tests_passed++; } total_tests++;

    if((change_base(987654320, 2) == "111010110111100110100010110000")){ tests_passed++; } total_tests++;

    if((change_base(245676, 3) == "110111000010")){ tests_passed++; } total_tests++;

    if((change_base(9999998, 9) == "20731368")){ tests_passed++; } total_tests++;

    if((change_base(245676, 4) == "323332230")){ tests_passed++; } total_tests++;

    if((change_base(245676, 9) == "414003")){ tests_passed++; } total_tests++;

    if((change_base(2016, 7) == "5610")){ tests_passed++; } total_tests++;

    if((change_base(987654319, 6) == "242000505411")){ tests_passed++; } total_tests++;

    if((change_base(987654319, 8) == "7267464257")){ tests_passed++; } total_tests++;

    if((change_base(10000002, 5) == "10030000002")){ tests_passed++; } total_tests++;

    if((change_base(2671, 6) == "20211")){ tests_passed++; } total_tests++;

    if((change_base(7, 3) == "21")){ tests_passed++; } total_tests++;

    if((change_base(987654319, 4) == "322313212202233")){ tests_passed++; } total_tests++;

    if((change_base(2017, 2) == "11111100001")){ tests_passed++; } total_tests++;

    if((change_base(987654319, 5) == "4010314414234")){ tests_passed++; } total_tests++;

    if((change_base(2670, 3) == "10122220")){ tests_passed++; } total_tests++;

    if((change_base(2018, 7) == "5612")){ tests_passed++; } total_tests++;

    if((change_base(25, 4) == "121")){ tests_passed++; } total_tests++;

    if((change_base(987654319, 7) == "33321631441")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 3) == "200211001102102")){ tests_passed++; } total_tests++;

    if((change_base(256, 7) == "514")){ tests_passed++; } total_tests++;

    if((change_base(2016, 5) == "31031")){ tests_passed++; } total_tests++;

    if((change_base(245677, 2) == "111011111110101101")){ tests_passed++; } total_tests++;

    if((change_base(34567, 5) == "2101232")){ tests_passed++; } total_tests++;

    if((change_base(2017, 6) == "13201")){ tests_passed++; } total_tests++;

    if((change_base(29, 4) == "131")){ tests_passed++; } total_tests++;

    if((change_base(10000001, 5) == "10030000001")){ tests_passed++; } total_tests++;

    if((change_base(29, 9) == "32")){ tests_passed++; } total_tests++;

    if((change_base(48298462, 5) == "44331022322")){ tests_passed++; } total_tests++;

    if((change_base(987654320, 3) == "2112211110001000122")){ tests_passed++; } total_tests++;

    if((change_base(9999998, 8) == "46113176")){ tests_passed++; } total_tests++;

    if((change_base(48298463, 7) == "1124346563")){ tests_passed++; } total_tests++;

    if((change_base(987654323, 3) == "2112211110001000202")){ tests_passed++; } total_tests++;

    if((change_base(2671, 8) == "5157")){ tests_passed++; } total_tests++;

    if((change_base(48298459, 2) == "10111000001111100111011011")){ tests_passed++; } total_tests++;

    if((change_base(10000002, 2) == "100110001001011010000010")){ tests_passed++; } total_tests++;

    if((change_base(987654322, 4) == "322313212202302")){ tests_passed++; } total_tests++;

    if((change_base(987654323, 6) == "242000505415")){ tests_passed++; } total_tests++;

    if((change_base(25, 9) == "27")){ tests_passed++; } total_tests++;

    if((change_base(2016, 4) == "133200")){ tests_passed++; } total_tests++;

    if((change_base(245680, 7) == "2042161")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 7) == "3026236221")){ tests_passed++; } total_tests++;

    if((change_base(2668, 8) == "5154")){ tests_passed++; } total_tests++;

    if((change_base(123456789, 5) == "223101104124")){ tests_passed++; } total_tests++;

    if((change_base(987654322, 3) == "2112211110001000201")){ tests_passed++; } total_tests++;

    if((change_base(245675, 4) == "323332223")){ tests_passed++; } total_tests++;

    if((change_base(2017, 8) == "3741")){ tests_passed++; } total_tests++;

    if((change_base(987654321, 7) == "33321631443")){ tests_passed++; } total_tests++;

    if((change_base(48298463, 5) == "44331022323")){ tests_passed++; } total_tests++;

    if((change_base(48298459, 4) == "2320033213123")){ tests_passed++; } total_tests++;

    if((change_base(987654322, 7) == "33321631444")){ tests_passed++; } total_tests++;

    if((change_base(48298459, 3) == "10100212211000211")){ tests_passed++; } total_tests++;

    if((change_base(12, 9) == "13")){ tests_passed++; } total_tests++;

    if((change_base(2021, 2) == "11111100101")){ tests_passed++; } total_tests++;

    if((change_base(987654323, 8) == "7267464263")){ tests_passed++; } total_tests++;

    if((change_base(12, 8) == "14")){ tests_passed++; } total_tests++;

    if((change_base(987654319, 9) == "2484401017")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


