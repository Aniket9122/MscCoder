#include<iostream>
using namespace std;

int add(int x, int y){
    return x + y;
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

    if((add(0, 1) == 1)){ tests_passed++; } total_tests++;

    if((add(1, 0) == 1)){ tests_passed++; } total_tests++;

    if((add(2, 3) == 5)){ tests_passed++; } total_tests++;

    if((add(5, 7) == 12)){ tests_passed++; } total_tests++;

    if((add(7, 5) == 12)){ tests_passed++; } total_tests++;

    for (int i=0;i<100;i+=1)
    {
        int x=rand()%1000;
        int y=rand()%1000;
        if((add(x, y) == x + y)){ tests_passed++; } total_tests++;

    }
    if((add(0, 1) == 1)){ tests_passed++; } total_tests++;

    if((add(1, 0) == 1)){ tests_passed++; } total_tests++;

    if((add(2, 3) == 5)){ tests_passed++; } total_tests++;

    if((add(5, 7) == 12)){ tests_passed++; } total_tests++;

    if((add(7, 5) == 12)){ tests_passed++; } total_tests++;

    if((add(480, 593) == 1073)){ tests_passed++; } total_tests++;

    if((add(139, 579) == 718)){ tests_passed++; } total_tests++;

    if((add(300, 77) == 377)){ tests_passed++; } total_tests++;

    if((add(569, 756) == 1325)){ tests_passed++; } total_tests++;

    if((add(911, 703) == 1614)){ tests_passed++; } total_tests++;

    if((add(197, 326) == 523)){ tests_passed++; } total_tests++;

    if((add(123, 102) == 225)){ tests_passed++; } total_tests++;

    if((add(671, 705) == 1376)){ tests_passed++; } total_tests++;

    if((add(101, 721) == 822)){ tests_passed++; } total_tests++;

    if((add(735, 413) == 1148)){ tests_passed++; } total_tests++;

    if((add(923, 369) == 1292)){ tests_passed++; } total_tests++;

    if((add(938, 221) == 1159)){ tests_passed++; } total_tests++;

    if((add(59, 772) == 831)){ tests_passed++; } total_tests++;

    if((add(540, 790) == 1330)){ tests_passed++; } total_tests++;

    if((add(244, 6) == 250)){ tests_passed++; } total_tests++;

    if((add(705, 148) == 853)){ tests_passed++; } total_tests++;

    if((add(890, 180) == 1070)){ tests_passed++; } total_tests++;

    if((add(342, 129) == 471)){ tests_passed++; } total_tests++;

    if((add(946, 559) == 1505)){ tests_passed++; } total_tests++;

    if((add(623, 593) == 1216)){ tests_passed++; } total_tests++;

    if((add(825, 294) == 1119)){ tests_passed++; } total_tests++;

    if((add(124, 732) == 856)){ tests_passed++; } total_tests++;

    if((add(333, 987) == 1320)){ tests_passed++; } total_tests++;

    if((add(269, 347) == 616)){ tests_passed++; } total_tests++;

    if((add(826, 822) == 1648)){ tests_passed++; } total_tests++;

    if((add(157, 479) == 636)){ tests_passed++; } total_tests++;

    if((add(534, 184) == 718)){ tests_passed++; } total_tests++;

    if((add(418, 549) == 967)){ tests_passed++; } total_tests++;

    if((add(855, 765) == 1620)){ tests_passed++; } total_tests++;

    if((add(666, 55) == 721)){ tests_passed++; } total_tests++;

    if((add(428, 315) == 743)){ tests_passed++; } total_tests++;

    if((add(704, 645) == 1349)){ tests_passed++; } total_tests++;

    if((add(183, 272) == 455)){ tests_passed++; } total_tests++;

    if((add(966, 528) == 1494)){ tests_passed++; } total_tests++;

    if((add(571, 697) == 1268)){ tests_passed++; } total_tests++;

    if((add(610, 541) == 1151)){ tests_passed++; } total_tests++;

    if((add(249, 665) == 914)){ tests_passed++; } total_tests++;

    if((add(452, 186) == 638)){ tests_passed++; } total_tests++;

    if((add(421, 529) == 950)){ tests_passed++; } total_tests++;

    if((add(860, 376) == 1236)){ tests_passed++; } total_tests++;

    if((add(172, 601) == 773)){ tests_passed++; } total_tests++;

    if((add(30, 177) == 207)){ tests_passed++; } total_tests++;

    if((add(35, 753) == 788)){ tests_passed++; } total_tests++;

    if((add(818, 902) == 1720)){ tests_passed++; } total_tests++;

    if((add(618, 175) == 793)){ tests_passed++; } total_tests++;

    if((add(165, 302) == 467)){ tests_passed++; } total_tests++;

    if((add(405, 836) == 1241)){ tests_passed++; } total_tests++;

    if((add(574, 555) == 1129)){ tests_passed++; } total_tests++;

    if((add(152, 343) == 495)){ tests_passed++; } total_tests++;

    if((add(882, 225) == 1107)){ tests_passed++; } total_tests++;

    if((add(670, 359) == 1029)){ tests_passed++; } total_tests++;

    if((add(480, 476) == 956)){ tests_passed++; } total_tests++;

    if((add(265, 822) == 1087)){ tests_passed++; } total_tests++;

    if((add(390, 904) == 1294)){ tests_passed++; } total_tests++;

    if((add(570, 503) == 1073)){ tests_passed++; } total_tests++;

    if((add(660, 18) == 678)){ tests_passed++; } total_tests++;

    if((add(457, 319) == 776)){ tests_passed++; } total_tests++;

    if((add(724, 18) == 742)){ tests_passed++; } total_tests++;

    if((add(469, 235) == 704)){ tests_passed++; } total_tests++;

    if((add(91, 322) == 413)){ tests_passed++; } total_tests++;

    if((add(91, 789) == 880)){ tests_passed++; } total_tests++;

    if((add(361, 945) == 1306)){ tests_passed++; } total_tests++;

    if((add(272, 952) == 1224)){ tests_passed++; } total_tests++;

    if((add(567, 768) == 1335)){ tests_passed++; } total_tests++;

    if((add(264, 478) == 742)){ tests_passed++; } total_tests++;

    if((add(57, 615) == 672)){ tests_passed++; } total_tests++;

    if((add(301, 553) == 854)){ tests_passed++; } total_tests++;

    if((add(191, 93) == 284)){ tests_passed++; } total_tests++;

    if((add(125, 119) == 244)){ tests_passed++; } total_tests++;

    if((add(528, 936) == 1464)){ tests_passed++; } total_tests++;

    if((add(314, 7) == 321)){ tests_passed++; } total_tests++;

    if((add(270, 420) == 690)){ tests_passed++; } total_tests++;

    if((add(25, 435) == 460)){ tests_passed++; } total_tests++;

    if((add(876, 389) == 1265)){ tests_passed++; } total_tests++;

    if((add(502, 653) == 1155)){ tests_passed++; } total_tests++;

    if((add(519, 807) == 1326)){ tests_passed++; } total_tests++;

    if((add(345, 523) == 868)){ tests_passed++; } total_tests++;

    if((add(473, 231) == 704)){ tests_passed++; } total_tests++;

    if((add(746, 105) == 851)){ tests_passed++; } total_tests++;

    if((add(18, 434) == 452)){ tests_passed++; } total_tests++;

    if((add(659, 191) == 850)){ tests_passed++; } total_tests++;

    if((add(855, 65) == 920)){ tests_passed++; } total_tests++;

    if((add(843, 872) == 1715)){ tests_passed++; } total_tests++;

    if((add(997, 59) == 1056)){ tests_passed++; } total_tests++;

    if((add(420, 134) == 554)){ tests_passed++; } total_tests++;

    if((add(950, 85) == 1035)){ tests_passed++; } total_tests++;

    if((add(223, 50) == 273)){ tests_passed++; } total_tests++;

    if((add(473, 244) == 717)){ tests_passed++; } total_tests++;

    if((add(994, 169) == 1163)){ tests_passed++; } total_tests++;

    if((add(287, 494) == 781)){ tests_passed++; } total_tests++;

    if((add(528, 830) == 1358)){ tests_passed++; } total_tests++;

    if((add(492, 739) == 1231)){ tests_passed++; } total_tests++;

    if((add(483, 198) == 681)){ tests_passed++; } total_tests++;

    if((add(228, 863) == 1091)){ tests_passed++; } total_tests++;

    if((add(345, 405) == 750)){ tests_passed++; } total_tests++;

    if((add(878, 86) == 964)){ tests_passed++; } total_tests++;

    if((add(841, 854) == 1695)){ tests_passed++; } total_tests++;

    if((add(950, 134) == 1084)){ tests_passed++; } total_tests++;

    if((add(550, 501) == 1051)){ tests_passed++; } total_tests++;

    if((add(371, 167) == 538)){ tests_passed++; } total_tests++;

    if((add(-2, 3) == 1)){ tests_passed++; } total_tests++;

    if((add(0, 0) == 0)){ tests_passed++; } total_tests++;

    if((add(-5, -7) == -12)){ tests_passed++; } total_tests++;

    if((add(10, -15) == -5)){ tests_passed++; } total_tests++;

    if((add(999, 1) == 1000)){ tests_passed++; } total_tests++;

    if((add(-10, 10) == 0)){ tests_passed++; } total_tests++;

    if((add(10000, -1000) == 9000)){ tests_passed++; } total_tests++;

    if((add(1, -1) == 0)){ tests_passed++; } total_tests++;

    if((add(-5, 10) == 5)){ tests_passed++; } total_tests++;

    if((add(-100, -250) == -350)){ tests_passed++; } total_tests++;

    if((add(-250, -1) == -251)){ tests_passed++; } total_tests++;

    if((add(-1, -2) == -3)){ tests_passed++; } total_tests++;

    if((add(-6, -5) == -11)){ tests_passed++; } total_tests++;

    if((add(-5, -8) == -13)){ tests_passed++; } total_tests++;

    if((add(-15, -15) == -30)){ tests_passed++; } total_tests++;

    if((add(-15, -250) == -265)){ tests_passed++; } total_tests++;

    if((add(-10, -5) == -15)){ tests_passed++; } total_tests++;

    if((add(-10, 1) == -9)){ tests_passed++; } total_tests++;

    if((add(-1, -1) == -2)){ tests_passed++; } total_tests++;

    if((add(-2, -2) == -4)){ tests_passed++; } total_tests++;

    if((add(10000, -15) == 9985)){ tests_passed++; } total_tests++;

    if((add(10, 10) == 20)){ tests_passed++; } total_tests++;

    if((add(-15, -2) == -17)){ tests_passed++; } total_tests++;

    if((add(-6, -6) == -12)){ tests_passed++; } total_tests++;

    if((add(-6, -8) == -14)){ tests_passed++; } total_tests++;

    if((add(10000, -16) == 9984)){ tests_passed++; } total_tests++;

    if((add(-1000, 10) == -990)){ tests_passed++; } total_tests++;

    if((add(-3, -2) == -5)){ tests_passed++; } total_tests++;

    if((add(-1000, -251) == -1251)){ tests_passed++; } total_tests++;

    if((add(0, -1) == -1)){ tests_passed++; } total_tests++;

    if((add(-3, -3) == -6)){ tests_passed++; } total_tests++;

    if((add(-15, -249) == -264)){ tests_passed++; } total_tests++;

    if((add(0, -2) == -2)){ tests_passed++; } total_tests++;

    if((add(3, 3) == 6)){ tests_passed++; } total_tests++;

    if((add(-5, -5) == -10)){ tests_passed++; } total_tests++;

    if((add(10000, 1) == 10001)){ tests_passed++; } total_tests++;

    if((add(-5, 1) == -4)){ tests_passed++; } total_tests++;

    if((add(999, -2) == 997)){ tests_passed++; } total_tests++;

    if((add(-10, -250) == -260)){ tests_passed++; } total_tests++;

    if((add(3, -251) == -248)){ tests_passed++; } total_tests++;

    if((add(-16, -249) == -265)){ tests_passed++; } total_tests++;

    if((add(-7, -7) == -14)){ tests_passed++; } total_tests++;

    if((add(9, -15) == -6)){ tests_passed++; } total_tests++;

    if((add(10000, 10000) == 20000)){ tests_passed++; } total_tests++;

    if((add(1, -3) == -2)){ tests_passed++; } total_tests++;

    if((add(-2, -250) == -252)){ tests_passed++; } total_tests++;

    if((add(-1, 9) == 8)){ tests_passed++; } total_tests++;

    if((add(1, -999) == -998)){ tests_passed++; } total_tests++;

    if((add(0, -15) == -15)){ tests_passed++; } total_tests++;

    if((add(-7, -15) == -22)){ tests_passed++; } total_tests++;

    if((add(-5, -6) == -11)){ tests_passed++; } total_tests++;

    if((add(-1, -250) == -251)){ tests_passed++; } total_tests++;

    if((add(10000, 999) == 10999)){ tests_passed++; } total_tests++;

    if((add(-10, -10) == -20)){ tests_passed++; } total_tests++;

    if((add(-1, -249) == -250)){ tests_passed++; } total_tests++;

    if((add(-16, -16) == -32)){ tests_passed++; } total_tests++;

    if((add(0, -250) == -250)){ tests_passed++; } total_tests++;

    if((add(1, -251) == -250)){ tests_passed++; } total_tests++;

    if((add(-3, -100) == -103)){ tests_passed++; } total_tests++;

    if((add(-10, -249) == -259)){ tests_passed++; } total_tests++;

    if((add(-101, -251) == -352)){ tests_passed++; } total_tests++;

    if((add(10000, -7) == 9993)){ tests_passed++; } total_tests++;

    if((add(0, 10000) == 10000)){ tests_passed++; } total_tests++;

    if((add(-998, 10) == -988)){ tests_passed++; } total_tests++;

    if((add(-3, -1000) == -1003)){ tests_passed++; } total_tests++;

    if((add(-101, -15) == -116)){ tests_passed++; } total_tests++;

    if((add(-4, -100) == -104)){ tests_passed++; } total_tests++;

    if((add(10001, 10000) == 20001)){ tests_passed++; } total_tests++;

    if((add(8, -998) == -990)){ tests_passed++; } total_tests++;

    if((add(-1000, -249) == -1249)){ tests_passed++; } total_tests++;

    if((add(-4, 0) == -4)){ tests_passed++; } total_tests++;

    if((add(-100, -100) == -200)){ tests_passed++; } total_tests++;

    if((add(-101, -8) == -109)){ tests_passed++; } total_tests++;

    if((add(-250, -250) == -500)){ tests_passed++; } total_tests++;

    if((add(-249, -249) == -498)){ tests_passed++; } total_tests++;

    if((add(-15, 1) == -14)){ tests_passed++; } total_tests++;

    if((add(-249, -5) == -254)){ tests_passed++; } total_tests++;

    if((add(-100, 3) == -97)){ tests_passed++; } total_tests++;

    if((add(-5, 3) == -2)){ tests_passed++; } total_tests++;

    if((add(-101, 3) == -98)){ tests_passed++; } total_tests++;

    if((add(-4, -5) == -9)){ tests_passed++; } total_tests++;

    if((add(10, -13) == -3)){ tests_passed++; } total_tests++;

    if((add(-1000, 8) == -992)){ tests_passed++; } total_tests++;

    if((add(-4, -4) == -8)){ tests_passed++; } total_tests++;

    if((add(8, 10000) == 10008)){ tests_passed++; } total_tests++;

    if((add(-2, 10001) == 9999)){ tests_passed++; } total_tests++;

    if((add(9, -13) == -4)){ tests_passed++; } total_tests++;

    if((add(-4, -2) == -6)){ tests_passed++; } total_tests++;

    if((add(-249, -10) == -259)){ tests_passed++; } total_tests++;

    if((add(0, 10002) == 10002)){ tests_passed++; } total_tests++;

    if((add(9, -10) == -1)){ tests_passed++; } total_tests++;

    if((add(2, -999) == -997)){ tests_passed++; } total_tests++;

    if((add(10001, 10001) == 20002)){ tests_passed++; } total_tests++;

    if((add(8, -15) == -7)){ tests_passed++; } total_tests++;

    if((add(10, 1) == 11)){ tests_passed++; } total_tests++;

    if((add(-3, 0) == -3)){ tests_passed++; } total_tests++;

    if((add(-13, -15) == -28)){ tests_passed++; } total_tests++;

    if((add(-1001, -1000) == -2001)){ tests_passed++; } total_tests++;

    if((add(-100, -101) == -201)){ tests_passed++; } total_tests++;

    if((add(8, -249) == -241)){ tests_passed++; } total_tests++;

    if((add(-10, 5) == -5)){ tests_passed++; } total_tests++;

    if((add(-99, -99) == -198)){ tests_passed++; } total_tests++;

    if((add(10000, -9999) == 1)){ tests_passed++; } total_tests++;

    if((add(-100, 1000) == 900)){ tests_passed++; } total_tests++;

    if((add(1000000, -999999) == 1)){ tests_passed++; } total_tests++;

    if((add(10000, -10000) == 0)){ tests_passed++; } total_tests++;

    if((add(999998, 999999) == 1999997)){ tests_passed++; } total_tests++;

    if((add(999998, 999998) == 1999996)){ tests_passed++; } total_tests++;

    if((add(-9999, -9999) == -19998)){ tests_passed++; } total_tests++;

    if((add(0, 999998) == 999998)){ tests_passed++; } total_tests++;

    if((add(-9999, -99) == -10098)){ tests_passed++; } total_tests++;

    if((add(1000, 1000) == 2000)){ tests_passed++; } total_tests++;

    if((add(-10000, -99) == -10099)){ tests_passed++; } total_tests++;

    if((add(999999, 999999) == 1999998)){ tests_passed++; } total_tests++;

    if((add(999998, 999997) == 1999995)){ tests_passed++; } total_tests++;

    if((add(999997, 999998) == 1999995)){ tests_passed++; } total_tests++;

    if((add(0, -99) == -99)){ tests_passed++; } total_tests++;

    if((add(1001, 1002) == 2003)){ tests_passed++; } total_tests++;

    if((add(1000000, 1000000) == 2000000)){ tests_passed++; } total_tests++;

    if((add(999999, 999998) == 1999997)){ tests_passed++; } total_tests++;

    if((add(0, -100) == -100)){ tests_passed++; } total_tests++;

    if((add(999998, -9999) == 989999)){ tests_passed++; } total_tests++;

    if((add(1000000, -1000000) == 0)){ tests_passed++; } total_tests++;

    if((add(9998, -10000) == -2)){ tests_passed++; } total_tests++;

    if((add(-9999, -999997) == -1009996)){ tests_passed++; } total_tests++;

    if((add(1000000, -999998) == 2)){ tests_passed++; } total_tests++;

    if((add(999997, 999997) == 1999994)){ tests_passed++; } total_tests++;

    if((add(999997, 999999) == 1999996)){ tests_passed++; } total_tests++;

    if((add(9998, 9998) == 19996)){ tests_passed++; } total_tests++;

    if((add(-10000, -10000) == -20000)){ tests_passed++; } total_tests++;

    if((add(5, 5) == 10)){ tests_passed++; } total_tests++;

    if((add(10002, 10001) == 20003)){ tests_passed++; } total_tests++;

    if((add(1000, -999997) == -998997)){ tests_passed++; } total_tests++;

    if((add(-9999, 10001) == 2)){ tests_passed++; } total_tests++;

    if((add(-9999, -10001) == -20000)){ tests_passed++; } total_tests++;

    if((add(-999998, -98) == -1000096)){ tests_passed++; } total_tests++;

    if((add(999997, -9999) == 989998)){ tests_passed++; } total_tests++;

    if((add(-10000, -999998) == -1009998)){ tests_passed++; } total_tests++;

    if((add(10002, 5) == 10007)){ tests_passed++; } total_tests++;

    if((add(10001, 999998) == 1009999)){ tests_passed++; } total_tests++;

    if((add(999997, 1000000) == 1999997)){ tests_passed++; } total_tests++;

    if((add(1000000, 10001) == 1010001)){ tests_passed++; } total_tests++;

    if((add(7, -999997) == -999990)){ tests_passed++; } total_tests++;

    if((add(5, 1000) == 1005)){ tests_passed++; } total_tests++;

    if((add(-98, -999999) == -1000097)){ tests_passed++; } total_tests++;

    if((add(-9, -10) == -19)){ tests_passed++; } total_tests++;

    if((add(999998, 999996) == 1999994)){ tests_passed++; } total_tests++;

    if((add(-999998, 9999) == -989999)){ tests_passed++; } total_tests++;

    if((add(-999998, -999999) == -1999997)){ tests_passed++; } total_tests++;

    if((add(-9999, -10000) == -19999)){ tests_passed++; } total_tests++;

    if((add(-999996, -999996) == -1999992)){ tests_passed++; } total_tests++;

    if((add(999998, -999996) == 2)){ tests_passed++; } total_tests++;

    if((add(999998, 1002) == 1001000)){ tests_passed++; } total_tests++;

    if((add(-999997, -10000) == -1009997)){ tests_passed++; } total_tests++;

    if((add(-100, 10000) == 9900)){ tests_passed++; } total_tests++;

    if((add(10001, 9997) == 19998)){ tests_passed++; } total_tests++;

    if((add(-10000, -999999) == -1009999)){ tests_passed++; } total_tests++;

    if((add(1002, 1002) == 2004)){ tests_passed++; } total_tests++;

    if((add(-100, -99) == -199)){ tests_passed++; } total_tests++;

    if((add(-99, 1000) == 901)){ tests_passed++; } total_tests++;

    if((add(4, 4) == 8)){ tests_passed++; } total_tests++;

    if((add(10002, 10002) == 20004)){ tests_passed++; } total_tests++;

    if((add(1000001, -10001) == 990000)){ tests_passed++; } total_tests++;

    if((add(-999998, -999998) == -1999996)){ tests_passed++; } total_tests++;

    if((add(-100, 6) == -94)){ tests_passed++; } total_tests++;

    if((add(9999, 9999) == 19998)){ tests_passed++; } total_tests++;

    if((add(1001, 999998) == 1000999)){ tests_passed++; } total_tests++;

    if((add(-10001, -999999) == -1010000)){ tests_passed++; } total_tests++;

    if((add(-999997, -1000000) == -1999997)){ tests_passed++; } total_tests++;

    if((add(1000000, 5) == 1000005)){ tests_passed++; } total_tests++;

    if((add(-999998, -9999) == -1009997)){ tests_passed++; } total_tests++;

    if((add(999998, 1001) == 1000999)){ tests_passed++; } total_tests++;

    if((add(10003, 10001) == 20004)){ tests_passed++; } total_tests++;

    if((add(-99, -98) == -197)){ tests_passed++; } total_tests++;

    if((add(-1000000, -999999) == -1999999)){ tests_passed++; } total_tests++;

    if((add(10003, 5) == 10008)){ tests_passed++; } total_tests++;

    if((add(-97, -98) == -195)){ tests_passed++; } total_tests++;

    if((add(1001, -999996) == -998995)){ tests_passed++; } total_tests++;

    if((add(-99, -10) == -109)){ tests_passed++; } total_tests++;

    if((add(-999999, -999999) == -1999998)){ tests_passed++; } total_tests++;

    if((add(3, 4) == 7)){ tests_passed++; } total_tests++;

    if((add(-97, 10001) == 9904)){ tests_passed++; } total_tests++;

    if((add(-999997, -999996) == -1999993)){ tests_passed++; } total_tests++;

    if((add(999997, 1001) == 1000998)){ tests_passed++; } total_tests++;

    if((add(-1000001, -999998) == -1999999)){ tests_passed++; } total_tests++;

    if((add(-10001, -9999) == -20000)){ tests_passed++; } total_tests++;

    if((add(1000001, 1000001) == 2000002)){ tests_passed++; } total_tests++;

    if((add(10001, 10002) == 20003)){ tests_passed++; } total_tests++;

    if((add(1002, -9999) == -8997)){ tests_passed++; } total_tests++;

    if((add(999996, 999997) == 1999993)){ tests_passed++; } total_tests++;

    if((add(9997, -999999) == -990002)){ tests_passed++; } total_tests++;

    if((add(-1000002, -999999) == -2000001)){ tests_passed++; } total_tests++;

    if((add(-98, 1000001) == 999903)){ tests_passed++; } total_tests++;

    if((add(1000, 1001) == 2001)){ tests_passed++; } total_tests++;

    if((add(-10001, -1000002) == -1010003)){ tests_passed++; } total_tests++;

    if((add(-9, 10000) == 9991)){ tests_passed++; } total_tests++;

    if((add(-999999, -1000002) == -2000001)){ tests_passed++; } total_tests++;

    if((add(-97, -99) == -196)){ tests_passed++; } total_tests++;

    if((add(-99, -100) == -199)){ tests_passed++; } total_tests++;

    if((add(10002, 10003) == 20005)){ tests_passed++; } total_tests++;

    if((add(9997, 9997) == 19994)){ tests_passed++; } total_tests++;

    if((add(999995, 999996) == 1999991)){ tests_passed++; } total_tests++;

    if((add(-1000001, -1000002) == -2000003)){ tests_passed++; } total_tests++;

    if((add(-98, -999998) == -1000096)){ tests_passed++; } total_tests++;

    if((add(1000002, 1000001) == 2000003)){ tests_passed++; } total_tests++;

    if((add(10003, 10003) == 20006)){ tests_passed++; } total_tests++;

    if((add(1000, -100) == 900)){ tests_passed++; } total_tests++;

    if((add(-10000, -9999) == -19999)){ tests_passed++; } total_tests++;

    if((add(1000000, 1001) == 1001001)){ tests_passed++; } total_tests++;

    if((add(-9999, -97) == -10096)){ tests_passed++; } total_tests++;

    if((add(10003, 10002) == 20005)){ tests_passed++; } total_tests++;

    if((add(10001, 999999) == 1010000)){ tests_passed++; } total_tests++;

    if((add(1002, 0) == 1002)){ tests_passed++; } total_tests++;

    if((add(1000001, 1000000) == 2000001)){ tests_passed++; } total_tests++;

    if((add(-98, -99) == -197)){ tests_passed++; } total_tests++;

    if((add(-1, 1) == 0)){ tests_passed++; } total_tests++;

    if((add(-5, 7) == 2)){ tests_passed++; } total_tests++;

    if((add(-68, -577) == -645)){ tests_passed++; } total_tests++;

    if((add(0, -10) == -10)){ tests_passed++; } total_tests++;

    if((add(-1000000, 0) == -1000000)){ tests_passed++; } total_tests++;

    if((add(-9, -999999) == -1000008)){ tests_passed++; } total_tests++;

    if((add(1, 1) == 2)){ tests_passed++; } total_tests++;

    if((add(-2, 0) == -2)){ tests_passed++; } total_tests++;

    if((add(-10, -9) == -19)){ tests_passed++; } total_tests++;

    if((add(-8, -10) == -18)){ tests_passed++; } total_tests++;

    if((add(-999998, -97) == -1000095)){ tests_passed++; } total_tests++;

    if((add(-999999, -9999) == -1009998)){ tests_passed++; } total_tests++;

    if((add(-999999, -9) == -1000008)){ tests_passed++; } total_tests++;

    if((add(-97, -999998) == -1000095)){ tests_passed++; } total_tests++;

    if((add(-9998, -9999) == -19997)){ tests_passed++; } total_tests++;

    if((add(-8, -8) == -16)){ tests_passed++; } total_tests++;

    if((add(99, 2) == 101)){ tests_passed++; } total_tests++;

    if((add(-9999, -2) == -10001)){ tests_passed++; } total_tests++;

    if((add(-97, -1000000) == -1000097)){ tests_passed++; } total_tests++;

    if((add(-98, -97) == -195)){ tests_passed++; } total_tests++;

    if((add(5, 0) == 5)){ tests_passed++; } total_tests++;

    if((add(1, -9999) == -9998)){ tests_passed++; } total_tests++;

    if((add(-999998, -9) == -1000007)){ tests_passed++; } total_tests++;

    if((add(10000, -1000000) == -990000)){ tests_passed++; } total_tests++;

    if((add(-9, 9999) == 9990)){ tests_passed++; } total_tests++;

    if((add(-9998, 1000) == -8998)){ tests_passed++; } total_tests++;

    if((add(-99, -1) == -100)){ tests_passed++; } total_tests++;

    if((add(10000, -999999) == -989999)){ tests_passed++; } total_tests++;

    if((add(-9, -9) == -18)){ tests_passed++; } total_tests++;

    if((add(-97, -97) == -194)){ tests_passed++; } total_tests++;

    if((add(-2, -1000000) == -1000002)){ tests_passed++; } total_tests++;

    if((add(-99, -2) == -101)){ tests_passed++; } total_tests++;

    if((add(-9999, -9998) == -19997)){ tests_passed++; } total_tests++;

    if((add(-2, -999999) == -1000001)){ tests_passed++; } total_tests++;

    if((add(5, -1000000) == -999995)){ tests_passed++; } total_tests++;

    if((add(1000, 9999) == 10999)){ tests_passed++; } total_tests++;

    if((add(2, -8) == -6)){ tests_passed++; } total_tests++;

    if((add(99, -1000000) == -999901)){ tests_passed++; } total_tests++;

    if((add(1000000, -100) == 999900)){ tests_passed++; } total_tests++;

    if((add(-999998, -10) == -1000008)){ tests_passed++; } total_tests++;

    if((add(1000001, -97) == 999904)){ tests_passed++; } total_tests++;

    if((add(1, -99) == -98)){ tests_passed++; } total_tests++;

    if((add(-99, 1000000) == 999901)){ tests_passed++; } total_tests++;

    if((add(-10, 9999) == 9989)){ tests_passed++; } total_tests++;

    if((add(2, 1) == 3)){ tests_passed++; } total_tests++;

    if((add(-2, -10) == -12)){ tests_passed++; } total_tests++;

    if((add(-8, -9999) == -10007)){ tests_passed++; } total_tests++;

    if((add(-1000000, -1000000) == -2000000)){ tests_passed++; } total_tests++;

    if((add(1000001, -999998) == 3)){ tests_passed++; } total_tests++;

    if((add(5, -100) == -95)){ tests_passed++; } total_tests++;

    if((add(4, 5) == 9)){ tests_passed++; } total_tests++;

    if((add(-101, 1000) == 899)){ tests_passed++; } total_tests++;

    if((add(-11, -10) == -21)){ tests_passed++; } total_tests++;

    if((add(5, 1000000) == 1000005)){ tests_passed++; } total_tests++;

    if((add(-9999, -8) == -10007)){ tests_passed++; } total_tests++;

    if((add(-98, -98) == -196)){ tests_passed++; } total_tests++;

    if((add(-1000000, -9999) == -1009999)){ tests_passed++; } total_tests++;

    if((add(-99, 0) == -99)){ tests_passed++; } total_tests++;

    if((add(-9, -11) == -20)){ tests_passed++; } total_tests++;

    if((add(9998, 9999) == 19997)){ tests_passed++; } total_tests++;

    if((add(-10, -97) == -107)){ tests_passed++; } total_tests++;

    if((add(99, 99) == 198)){ tests_passed++; } total_tests++;

    if((add(0, 9998) == 9998)){ tests_passed++; } total_tests++;

    if((add(-103, 1000) == 897)){ tests_passed++; } total_tests++;

    if((add(-2, 1) == -1)){ tests_passed++; } total_tests++;

    if((add(-999999, -11) == -1000010)){ tests_passed++; } total_tests++;

    if((add(-101, -9) == -110)){ tests_passed++; } total_tests++;

    if((add(-100, -1) == -101)){ tests_passed++; } total_tests++;

    if((add(1000001, -2) == 999999)){ tests_passed++; } total_tests++;

    if((add(-999996, -999995) == -1999991)){ tests_passed++; } total_tests++;

    if((add(-98, -9) == -107)){ tests_passed++; } total_tests++;

    if((add(9999, -10) == 9989)){ tests_passed++; } total_tests++;

    if((add(-1, 0) == -1)){ tests_passed++; } total_tests++;

    if((add(99, -99) == 0)){ tests_passed++; } total_tests++;

    if((add(-999997, -10) == -1000007)){ tests_passed++; } total_tests++;

    if((add(-999999, -10000) == -1009999)){ tests_passed++; } total_tests++;

    if((add(-999997, 1000001) == 4)){ tests_passed++; } total_tests++;

    if((add(-2, -102) == -104)){ tests_passed++; } total_tests++;

    if((add(1000001, -98) == 999903)){ tests_passed++; } total_tests++;

    if((add(-99, 1) == -98)){ tests_passed++; } total_tests++;

    if((add(66, 2) == 68)){ tests_passed++; } total_tests++;

    if((add(-98, -1000000) == -1000098)){ tests_passed++; } total_tests++;

    if((add(-97, -999997) == -1000094)){ tests_passed++; } total_tests++;

    if((add(-1000000, -10000) == -1010000)){ tests_passed++; } total_tests++;

    if((add(2, 2) == 4)){ tests_passed++; } total_tests++;

    if((add(1000001, -11) == 999990)){ tests_passed++; } total_tests++;

    if((add(-9997, 1000) == -8997)){ tests_passed++; } total_tests++;

    if((add(69, 70) == 139)){ tests_passed++; } total_tests++;

    if((add(-2, -103) == -105)){ tests_passed++; } total_tests++;

    if((add(4, -98) == -94)){ tests_passed++; } total_tests++;

    if((add(10000, 9999) == 19999)){ tests_passed++; } total_tests++;

    if((add(71, 71) == 142)){ tests_passed++; } total_tests++;

    if((add(99, -9999) == -9900)){ tests_passed++; } total_tests++;

    if((add(-999999, -10) == -1000009)){ tests_passed++; } total_tests++;

    if((add(1, -999999) == -999998)){ tests_passed++; } total_tests++;

    if((add(2, 4) == 6)){ tests_passed++; } total_tests++;

    if((add(-96, -97) == -193)){ tests_passed++; } total_tests++;

    if((add(-999997, -98) == -1000095)){ tests_passed++; } total_tests++;

    if((add(99, 98) == 197)){ tests_passed++; } total_tests++;

    if((add(70, -999999) == -999929)){ tests_passed++; } total_tests++;

    if((add(999999, -100) == 999899)){ tests_passed++; } total_tests++;

    if((add(-11, -2) == -13)){ tests_passed++; } total_tests++;

    if((add(-98, -96) == -194)){ tests_passed++; } total_tests++;

    if((add(-1, -101) == -102)){ tests_passed++; } total_tests++;

    if((add(-9997, -1000000) == -1009997)){ tests_passed++; } total_tests++;

    if((add(99, -10000) == -9901)){ tests_passed++; } total_tests++;

    if((add(-999999, -1000000) == -1999999)){ tests_passed++; } total_tests++;

    if((add(-101, -101) == -202)){ tests_passed++; } total_tests++;

    if((add(-103, -103) == -206)){ tests_passed++; } total_tests++;

    if((add(1000000, -999997) == 3)){ tests_passed++; } total_tests++;

    if((add(66, 66) == 132)){ tests_passed++; } total_tests++;

    if((add(-999998, -8) == -1000006)){ tests_passed++; } total_tests++;

    if((add(67, -99) == -32)){ tests_passed++; } total_tests++;

    if((add(-2, 4) == 2)){ tests_passed++; } total_tests++;

    if((add(-99, 9999) == 9900)){ tests_passed++; } total_tests++;

    if((add(99, 10000) == 10099)){ tests_passed++; } total_tests++;

    if((add(-100, 9998) == 9898)){ tests_passed++; } total_tests++;

    if((add(100, -999999) == -999899)){ tests_passed++; } total_tests++;

    if((add(-9998, 999) == -8999)){ tests_passed++; } total_tests++;

    if((add(-9996, -10) == -10006)){ tests_passed++; } total_tests++;

    if((add(6, 1) == 7)){ tests_passed++; } total_tests++;

    if((add(5, -9996) == -9991)){ tests_passed++; } total_tests++;

    if((add(-8, -999998) == -1000006)){ tests_passed++; } total_tests++;

    if((add(-11, -999996) == -1000007)){ tests_passed++; } total_tests++;

    if((add(-10, -2) == -12)){ tests_passed++; } total_tests++;

    if((add(5, -3) == 2)){ tests_passed++; } total_tests++;

    if((add(-10, -100) == -110)){ tests_passed++; } total_tests++;

    if((add(1000, -9) == 991)){ tests_passed++; } total_tests++;

    if((add(-9997, -9998) == -19995)){ tests_passed++; } total_tests++;

    if((add(-10001, 70) == -9931)){ tests_passed++; } total_tests++;

    if((add(-2, -1) == -3)){ tests_passed++; } total_tests++;

    if((add(69, 69) == 138)){ tests_passed++; } total_tests++;

    if((add(69, 99) == 168)){ tests_passed++; } total_tests++;

    if((add(2, -2) == 0)){ tests_passed++; } total_tests++;

    if((add(-8, -3) == -11)){ tests_passed++; } total_tests++;

    if((add(-99, -9999) == -10098)){ tests_passed++; } total_tests++;

    if((add(1, -2) == -1)){ tests_passed++; } total_tests++;

    if((add(9999, -11) == 9988)){ tests_passed++; } total_tests++;

    if((add(70, 70) == 140)){ tests_passed++; } total_tests++;

    if((add(70, 999) == 1069)){ tests_passed++; } total_tests++;

    if((add(1000000, 0) == 1000000)){ tests_passed++; } total_tests++;

    if((add(-1000000, -999998) == -1999998)){ tests_passed++; } total_tests++;

    if((add(-100, 66) == -34)){ tests_passed++; } total_tests++;

    if((add(-9998, -9997) == -19995)){ tests_passed++; } total_tests++;

    if((add(98, 98) == 196)){ tests_passed++; } total_tests++;

    if((add(-999998, 99) == -999899)){ tests_passed++; } total_tests++;

    if((add(99, 10001) == 10100)){ tests_passed++; } total_tests++;

    if((add(4, 1000) == 1004)){ tests_passed++; } total_tests++;

    if((add(97, 1) == 98)){ tests_passed++; } total_tests++;

    if((add(-10002, 5) == -9997)){ tests_passed++; } total_tests++;

    if((add(1000, 5) == 1005)){ tests_passed++; } total_tests++;

    if((add(-9998, -9998) == -19996)){ tests_passed++; } total_tests++;

    if((add(-10000, -9) == -10009)){ tests_passed++; } total_tests++;

    if((add(97, 96) == 193)){ tests_passed++; } total_tests++;

    if((add(2, 97) == 99)){ tests_passed++; } total_tests++;

    if((add(6, 6) == 12)){ tests_passed++; } total_tests++;

    if((add(-999995, -999995) == -1999990)){ tests_passed++; } total_tests++;

    if((add(-100, 1) == -99)){ tests_passed++; } total_tests++;

    if((add(-96, 70) == -26)){ tests_passed++; } total_tests++;

    if((add(-999997, -8) == -1000005)){ tests_passed++; } total_tests++;

    if((add(1, -9) == -8)){ tests_passed++; } total_tests++;

    if((add(67, 67) == 134)){ tests_passed++; } total_tests++;

    if((add(-3, 1000001) == 999998)){ tests_passed++; } total_tests++;

    if((add(69, 98) == 167)){ tests_passed++; } total_tests++;

    if((add(-999998, 1000) == -998998)){ tests_passed++; } total_tests++;

    if((add(-96, -999998) == -1000094)){ tests_passed++; } total_tests++;

    if((add(-1000000, -1000001) == -2000001)){ tests_passed++; } total_tests++;

    if((add(-100, 96) == -4)){ tests_passed++; } total_tests++;

    if((add(66, -9996) == -9930)){ tests_passed++; } total_tests++;

    if((add(-999997, 9999) == -989998)){ tests_passed++; } total_tests++;

    if((add(99, -10001) == -9902)){ tests_passed++; } total_tests++;

    if((add(-11, -9) == -20)){ tests_passed++; } total_tests++;

    if((add(-9, -98) == -107)){ tests_passed++; } total_tests++;

    if((add(-10001, 1000) == -9001)){ tests_passed++; } total_tests++;

    if((add(-999999, -1) == -1000000)){ tests_passed++; } total_tests++;

    if((add(-12, -12) == -24)){ tests_passed++; } total_tests++;

    if((add(-100, -9999) == -10099)){ tests_passed++; } total_tests++;

    if((add(97, -10) == 87)){ tests_passed++; } total_tests++;

    if((add(-100, -9997) == -10097)){ tests_passed++; } total_tests++;

    if((add(9998, -98) == 9900)){ tests_passed++; } total_tests++;

    if((add(2, -999997) == -999995)){ tests_passed++; } total_tests++;

    if((add(-9996, -1000001) == -1009997)){ tests_passed++; } total_tests++;

    if((add(3, -101) == -98)){ tests_passed++; } total_tests++;

    if((add(-11, 2) == -9)){ tests_passed++; } total_tests++;

    if((add(-10001, -10000) == -20001)){ tests_passed++; } total_tests++;

    if((add(-1000000, -101) == -1000101)){ tests_passed++; } total_tests++;

    if((add(99, -9998) == -9899)){ tests_passed++; } total_tests++;

    if((add(-11, -11) == -22)){ tests_passed++; } total_tests++;

    if((add(4, -999996) == -999992)){ tests_passed++; } total_tests++;

    if((add(99, 100) == 199)){ tests_passed++; } total_tests++;

    if((add(-99, -9996) == -10095)){ tests_passed++; } total_tests++;

    if((add(998, -10002) == -9004)){ tests_passed++; } total_tests++;

    if((add(9998, -100) == 9898)){ tests_passed++; } total_tests++;

    if((add(4, 2) == 6)){ tests_passed++; } total_tests++;

    if((add(97, -999999) == -999902)){ tests_passed++; } total_tests++;

    if((add(999, -1000000) == -999001)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


