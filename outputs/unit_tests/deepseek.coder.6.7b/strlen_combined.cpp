#include <string>
using namespace std;

int strlen(const string& str) {
    return str.length();
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

    if((strlen("") == 0)){ tests_passed++; } total_tests++;

    if((strlen("x") == 1)){ tests_passed++; } total_tests++;

     if((strlen("asdasnakj") == 9)){ tests_passed++; } total_tests++;

    if((strlen("") == 0)){ tests_passed++; } total_tests++;

    if((strlen("x") == 1)){ tests_passed++; } total_tests++;

    if((strlen("asdasnakj") == 9)){ tests_passed++; } total_tests++;

    if((strlen("12345") == 5)){ tests_passed++; } total_tests++;

    if((strlen("abcdefghijklmnopqrstuvwxyz") == 26)){ tests_passed++; } total_tests++;

    if((strlen("1234567890") == 10)){ tests_passed++; } total_tests++;

    if((strlen("abcdefgjklmnopqrstuvwxyz") == 24)){ tests_passed++; } total_tests++;

    if((strlen("11234567890") == 11)){ tests_passed++; } total_tests++;

    if((strlen("122345") == 6)){ tests_passed++; } total_tests++;

    if((strlen("123345") == 6)){ tests_passed++; } total_tests++;

    if((strlen("GNDKQyadEb") == 10)){ tests_passed++; } total_tests++;

    if((strlen("M") == 1)){ tests_passed++; } total_tests++;

    if((strlen("NEvG") == 4)){ tests_passed++; } total_tests++;

    if((strlen("1223545") == 7)){ tests_passed++; } total_tests++;

    if((strlen("912345667890") == 12)){ tests_passed++; } total_tests++;

    if((strlen("abcdefgjklmnopqrstuvwxyzive") == 27)){ tests_passed++; } total_tests++;

    if((strlen("oene") == 4)){ tests_passed++; } total_tests++;

    if((strlen("abcdeflghijklmnopqrstuvwxyz") == 27)){ tests_passed++; } total_tests++;

    if((strlen("12333345") == 8)){ tests_passed++; } total_tests++;

    if((strlen("1122345") == 7)){ tests_passed++; } total_tests++;

    if((strlen("Quick") == 5)){ tests_passed++; } total_tests++;

    if((strlen("w1th") == 4)){ tests_passed++; } total_tests++;

    if((strlen("Th!") == 3)){ tests_passed++; } total_tests++;

    if((strlen("Jumps") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Fox") == 3)){ tests_passed++; } total_tests++;

    if((strlen("1t") == 2)){ tests_passed++; } total_tests++;

    if((strlen("Qukick") == 6)){ tests_passed++; } total_tests++;

    if((strlen("Tish!") == 5)){ tests_passed++; } total_tests++;

    if((strlen("ps") == 2)){ tests_passed++; } total_tests++;

    if((strlen("a") == 1)){ tests_passed++; } total_tests++;

    if((strlen("Dog") == 3)){ tests_passed++; } total_tests++;

    if((strlen("4") == 1)){ tests_passed++; } total_tests++;

    if((strlen("is") == 2)){ tests_passed++; } total_tests++;

    if((strlen("Jummtops") == 8)){ tests_passed++; } total_tests++;

    if((strlen("!n") == 2)){ tests_passed++; } total_tests++;

    if((strlen("yLazy") == 5)){ tests_passed++; } total_tests++;

    if((strlen("LqNCZA") == 6)){ tests_passed++; } total_tests++;

    if((strlen("Over") == 4)){ tests_passed++; } total_tests++;

    if((strlen("hyNcJH") == 6)){ tests_passed++; } total_tests++;

    if((strlen("QFoxukick") == 9)){ tests_passed++; } total_tests++;

    if((strlen("!nn") == 3)){ tests_passed++; } total_tests++;

    if((strlen("whyNcJH1th") == 10)){ tests_passed++; } total_tests++;

    if((strlen("TheTe") == 5)){ tests_passed++; } total_tests++;

    if((strlen("QFoQxukick") == 10)){ tests_passed++; } total_tests++;

    if((strlen("tn") == 2)){ tests_passed++; } total_tests++;

    if((strlen("iw1th") == 5)){ tests_passed++; } total_tests++;

    if((strlen("isJumps") == 7)){ tests_passed++; } total_tests++;

    if((strlen("function") == 8)){ tests_passed++; } total_tests++;

    if((strlen("func") == 4)){ tests_passed++; } total_tests++;

    if((strlen("sampl") == 5)){ tests_passed++; } total_tests++;

    if((strlen("funcc") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Lazy") == 4)){ tests_passed++; } total_tests++;

    if((strlen("n") == 1)){ tests_passed++; } total_tests++;

    if((strlen("Doo") == 3)){ tests_passed++; } total_tests++;

    if((strlen("aOver") == 5)){ tests_passed++; } total_tests++;

    if((strlen("str1ng") == 6)){ tests_passed++; } total_tests++;

    if((strlen("cQukick") == 7)){ tests_passed++; } total_tests++;

    if((strlen("QuaOverick") == 10)){ tests_passed++; } total_tests++;

    if((strlen("Te") == 2)){ tests_passed++; } total_tests++;

    if((strlen("QFoxuk") == 6)){ tests_passed++; } total_tests++;

    if((strlen("Jum5ymb0lsmtops") == 15)){ tests_passed++; } total_tests++;

    if((strlen("Th!s40ls") == 8)){ tests_passed++; } total_tests++;

    if((strlen("funnc") == 5)){ tests_passed++; } total_tests++;

    if((strlen("eto") == 3)){ tests_passed++; } total_tests++;

    if((strlen("sample") == 6)){ tests_passed++; } total_tests++;

    if((strlen("Tetn") == 4)){ tests_passed++; } total_tests++;

    if((strlen("mThfGqorZJum5ymb0lsmtops") == 24)){ tests_passed++; } total_tests++;

    if((strlen("str1ngsampl") == 11)){ tests_passed++; } total_tests++;

    if((strlen("iwTish!1th") == 10)){ tests_passed++; } total_tests++;

    if((strlen("test") == 4)){ tests_passed++; } total_tests++;

    if((strlen("TTetn") == 5)){ tests_passed++; } total_tests++;

    if((strlen("ver") == 3)){ tests_passed++; } total_tests++;

    if((strlen("strin") == 5)){ tests_passed++; } total_tests++;

    if((strlen("funthec") == 7)){ tests_passed++; } total_tests++;

    if((strlen("iis") == 3)){ tests_passed++; } total_tests++;

    if((strlen("astr1ngsampl") == 12)){ tests_passed++; } total_tests++;

    if((strlen("QQFoxuk") == 7)){ tests_passed++; } total_tests++;

    if((strlen("functoion") == 9)){ tests_passed++; } total_tests++;

    if((strlen("nFo") == 3)){ tests_passed++; } total_tests++;

    if((strlen("Jum5ymb0lsmfunction") == 19)){ tests_passed++; } total_tests++;

    if((strlen("iiis") == 4)){ tests_passed++; } total_tests++;

    if((strlen("hyNcJ") == 5)){ tests_passed++; } total_tests++;

    if((strlen("fufncc") == 6)){ tests_passed++; } total_tests++;

    if((strlen("p1ss") == 4)){ tests_passed++; } total_tests++;

    if((strlen("wiw1th") == 6)){ tests_passed++; } total_tests++;

    if((strlen("44") == 2)){ tests_passed++; } total_tests++;

    if((strlen("eeTe") == 4)){ tests_passed++; } total_tests++;

    if((strlen("Lazyy") == 5)){ tests_passed++; } total_tests++;

    if((strlen("RLkion") == 6)){ tests_passed++; } total_tests++;

    if((strlen("stricQukickn") == 12)){ tests_passed++; } total_tests++;

    if((strlen("funtht") == 6)){ tests_passed++; } total_tests++;

    if((strlen("TheyLazyTe") == 10)){ tests_passed++; } total_tests++;

    if((strlen("etoo") == 4)){ tests_passed++; } total_tests++;

    if((strlen("FoFxuk") == 6)){ tests_passed++; } total_tests++;

    if((strlen("4!n") == 3)){ tests_passed++; } total_tests++;

    if((strlen("QuiisJumpsck") == 12)){ tests_passed++; } total_tests++;

    if((strlen("!") == 1)){ tests_passed++; } total_tests++;

    if((strlen("TT") == 2)){ tests_passed++; } total_tests++;

    if((strlen("mThftGqorZJum5ymb0lsmtops") == 25)){ tests_passed++; } total_tests++;

    if((strlen("wwtes") == 5)){ tests_passed++; } total_tests++;

    if((strlen("wtest5ymb40ls") == 13)){ tests_passed++; } total_tests++;

    if((strlen("QFoxukcick") == 10)){ tests_passed++; } total_tests++;

    if((strlen("Tis") == 3)){ tests_passed++; } total_tests++;

    if((strlen("fux") == 3)){ tests_passed++; } total_tests++;

    if((strlen("YJvcL") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Qck") == 3)){ tests_passed++; } total_tests++;

    if((strlen("nn") == 2)){ tests_passed++; } total_tests++;

    if((strlen("sTh!s4strinisg05ymb0lsls") == 24)){ tests_passed++; } total_tests++;

    if((strlen("whyNcJH1thfunnc") == 15)){ tests_passed++; } total_tests++;

    if((strlen("why1NcJH1th") == 11)){ tests_passed++; } total_tests++;

    if((strlen("iisTe") == 5)){ tests_passed++; } total_tests++;

    if((strlen("stcricQukDogickn") == 16)){ tests_passed++; } total_tests++;

    if((strlen("ssps") == 4)){ tests_passed++; } total_tests++;

    if((strlen("hy") == 2)){ tests_passed++; } total_tests++;

    if((strlen("strinisg") == 8)){ tests_passed++; } total_tests++;

    if((strlen("why1N") == 5)){ tests_passed++; } total_tests++;

    if((strlen("!s40ls") == 6)){ tests_passed++; } total_tests++;

    if((strlen("Theon") == 5)){ tests_passed++; } total_tests++;

    if((strlen("t1t") == 3)){ tests_passed++; } total_tests++;

    if((strlen("wwwtes") == 6)){ tests_passed++; } total_tests++;

    if((strlen("Tishstrintg4") == 12)){ tests_passed++; } total_tests++;

    if((strlen("to") == 2)){ tests_passed++; } total_tests++;

    if((strlen("tt1t") == 4)){ tests_passed++; } total_tests++;

    if((strlen("LqNCZAtest") == 10)){ tests_passed++; } total_tests++;

    if((strlen("ps1ss") == 5)){ tests_passed++; } total_tests++;

    if((strlen("nF") == 2)){ tests_passed++; } total_tests++;

    if((strlen("wwhyNcJH1thfunnchy1N") == 20)){ tests_passed++; } total_tests++;

    if((strlen("sJummtops") == 9)){ tests_passed++; } total_tests++;

    if((strlen("fuunction") == 9)){ tests_passed++; } total_tests++;

    if((strlen("wtest5ymb0lse") == 13)){ tests_passed++; } total_tests++;

    if((strlen("QQFoTTxuk") == 9)){ tests_passed++; } total_tests++;

    if((strlen("sQuiisJsumpsck") == 14)){ tests_passed++; } total_tests++;

    if((strlen("Brown") == 5)){ tests_passed++; } total_tests++;

    if((strlen("FMc") == 3)){ tests_passed++; } total_tests++;

    if((strlen("p1sBrown") == 8)){ tests_passed++; } total_tests++;

    if((strlen("TlTh!s40lsh!s") == 13)){ tests_passed++; } total_tests++;

    if((strlen("hyisJumpsJ") == 10)){ tests_passed++; } total_tests++;

    if((strlen("OvhyNcJer") == 9)){ tests_passed++; } total_tests++;

    if((strlen("othe") == 4)){ tests_passed++; } total_tests++;

    if((strlen("fuon") == 4)){ tests_passed++; } total_tests++;

    if((strlen("stgrsr1ng") == 9)){ tests_passed++; } total_tests++;

    if((strlen("Jum5ymbops") == 10)){ tests_passed++; } total_tests++;

    if((strlen("The") == 3)){ tests_passed++; } total_tests++;

    if((strlen("tiiiiso") == 7)){ tests_passed++; } total_tests++;

    if((strlen("pFomThfGqorZJum5ymb0lsmtopss") == 28)){ tests_passed++; } total_tests++;

    if((strlen("LqqNCZA") == 7)){ tests_passed++; } total_tests++;

    if((strlen("ncc") == 3)){ tests_passed++; } total_tests++;

    if((strlen("!ncnncc") == 7)){ tests_passed++; } total_tests++;

    if((strlen("string") == 6)){ tests_passed++; } total_tests++;

    if((strlen("4n") == 2)){ tests_passed++; } total_tests++;

    if((strlen("vemThfGqorZJum5ymb0lsmtopsr") == 27)){ tests_passed++; } total_tests++;

    if((strlen("Ove") == 3)){ tests_passed++; } total_tests++;

    if((strlen("FoF1Thisxuk") == 11)){ tests_passed++; } total_tests++;

    if((strlen("B") == 1)){ tests_passed++; } total_tests++;

    if((strlen("sns") == 3)){ tests_passed++; } total_tests++;

    if((strlen("wiw1thstricQukickn") == 18)){ tests_passed++; } total_tests++;

    if((strlen("DogtcricQukDogickn") == 18)){ tests_passed++; } total_tests++;

    if((strlen("Do") == 2)){ tests_passed++; } total_tests++;

    if((strlen("striing") == 7)){ tests_passed++; } total_tests++;

    if((strlen("wteb40ls") == 8)){ tests_passed++; } total_tests++;

    if((strlen("fJumpeuon") == 9)){ tests_passed++; } total_tests++;

    if((strlen("hyNycJ") == 6)){ tests_passed++; } total_tests++;

    if((strlen("mThfGeeTeqorZJum5ymb0lsmtops") == 28)){ tests_passed++; } total_tests++;

    if((strlen("cJH1th") == 6)){ tests_passed++; } total_tests++;

    if((strlen("TTh!s40lsh!s") == 12)){ tests_passed++; } total_tests++;

    if((strlen("fnunnc") == 6)){ tests_passed++; } total_tests++;

    if((strlen("LaazLyy") == 7)){ tests_passed++; } total_tests++;

    if((strlen("stgrsr1ngLqNCZAtest") == 19)){ tests_passed++; } total_tests++;

    if((strlen("Foxx") == 4)){ tests_passed++; } total_tests++;

    if((strlen("og") == 2)){ tests_passed++; } total_tests++;

    if((strlen("str1ngsampaOverl") == 16)){ tests_passed++; } total_tests++;

    if((strlen("This") == 4)){ tests_passed++; } total_tests++;

    if((strlen("funthstr1ng") == 11)){ tests_passed++; } total_tests++;

    if((strlen("tet") == 3)){ tests_passed++; } total_tests++;

    if((strlen("whyNcJH1c") == 9)){ tests_passed++; } total_tests++;

    if((strlen("hTheTe") == 6)){ tests_passed++; } total_tests++;

    if((strlen("funaTh!s") == 8)){ tests_passed++; } total_tests++;

    if((strlen("BB") == 2)){ tests_passed++; } total_tests++;

    if((strlen("mThftGqorZJum5ymb0lsmtstricQukicknops") == 37)){ tests_passed++; } total_tests++;

    if((strlen("str1nb0lse") == 10)){ tests_passed++; } total_tests++;

    if((strlen("nfuntThis") == 9)){ tests_passed++; } total_tests++;

    if((strlen("samplt1t") == 8)){ tests_passed++; } total_tests++;

    if((strlen("wiw1s1th") == 8)){ tests_passed++; } total_tests++;

    if((strlen("p") == 1)){ tests_passed++; } total_tests++;

    if((strlen("FMcc") == 4)){ tests_passed++; } total_tests++;

    if((strlen("BBo") == 3)){ tests_passed++; } total_tests++;

    if((strlen("functionheccc") == 13)){ tests_passed++; } total_tests++;

    if((strlen("Bro") == 3)){ tests_passed++; } total_tests++;

    if((strlen("sTh!s4strinisg05ymb0lslTs") == 25)){ tests_passed++; } total_tests++;

    if((strlen("puobAuk") == 7)){ tests_passed++; } total_tests++;

    if((strlen("Juom5ymbops") == 11)){ tests_passed++; } total_tests++;

    if((strlen("whyNcJH1funnc") == 13)){ tests_passed++; } total_tests++;

    if((strlen("Th") == 2)){ tests_passed++; } total_tests++;

    if((strlen("Jg") == 2)){ tests_passed++; } total_tests++;

    if((strlen("fuwhy1N") == 7)){ tests_passed++; } total_tests++;

    if((strlen("fuuni") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Bro1s") == 5)){ tests_passed++; } total_tests++;

    if((strlen("QQFoTfuuniTxuk") == 14)){ tests_passed++; } total_tests++;

    if((strlen("QFoxucick") == 9)){ tests_passed++; } total_tests++;

    if((strlen("fnuncc") == 6)){ tests_passed++; } total_tests++;

    if((strlen("p1s4Bnrown") == 10)){ tests_passed++; } total_tests++;

    if((strlen("k") == 1)){ tests_passed++; } total_tests++;

    if((strlen("etfuntThisoo") == 12)){ tests_passed++; } total_tests++;

    if((strlen("wDohycJHt") == 9)){ tests_passed++; } total_tests++;

    if((strlen("TtTetn") == 6)){ tests_passed++; } total_tests++;

    if((strlen("isJuis") == 6)){ tests_passed++; } total_tests++;

    if((strlen("Th!s1s") == 6)){ tests_passed++; } total_tests++;

    if((strlen("wiiw1th") == 7)){ tests_passed++; } total_tests++;

    if((strlen("OvOe") == 4)){ tests_passed++; } total_tests++;

    if((strlen("!nirs") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Tsh!s") == 5)){ tests_passed++; } total_tests++;

    if((strlen("RL4") == 3)){ tests_passed++; } total_tests++;

    if((strlen("st1r1ng") == 7)){ tests_passed++; } total_tests++;

    if((strlen("sTtTheTer1stgrsr1ngLqNCZAtestng") == 31)){ tests_passed++; } total_tests++;

    if((strlen("zPyWTI") == 6)){ tests_passed++; } total_tests++;

    if((strlen("aTh!s") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Fow1thF1Thisxuk") == 15)){ tests_passed++; } total_tests++;

    if((strlen("saTh!s40lsmplt1t") == 16)){ tests_passed++; } total_tests++;

    if((strlen("t1") == 2)){ tests_passed++; } total_tests++;

    if((strlen("string4cJH1Jth") == 14)){ tests_passed++; } total_tests++;

    if((strlen("BBro") == 4)){ tests_passed++; } total_tests++;

    if((strlen("nnnp1ss") == 7)){ tests_passed++; } total_tests++;

    if((strlen("BBBo") == 4)){ tests_passed++; } total_tests++;

    if((strlen("TBrownrown") == 10)){ tests_passed++; } total_tests++;

    if((strlen("vemThfGqorZJum5ymb0lsmtstgrsr1ngLqNCZAtestpsr") == 45)){ tests_passed++; } total_tests++;

    if((strlen("wtest5nymb0ls") == 13)){ tests_passed++; } total_tests++;

    if((strlen("whyNcJH1thFox") == 13)){ tests_passed++; } total_tests++;

    if((strlen("1This") == 5)){ tests_passed++; } total_tests++;

    if((strlen("eo") == 2)){ tests_passed++; } total_tests++;

    if((strlen("QQFoTkTxu") == 9)){ tests_passed++; } total_tests++;

    if((strlen("thes") == 4)){ tests_passed++; } total_tests++;

    if((strlen("rBrown") == 6)){ tests_passed++; } total_tests++;

    if((strlen("nnshthes") == 8)){ tests_passed++; } total_tests++;

    if((strlen("wtest5ymb0l") == 11)){ tests_passed++; } total_tests++;

    if((strlen("sQuiisJsmpsck") == 13)){ tests_passed++; } total_tests++;

    if((strlen("o") == 1)){ tests_passed++; } total_tests++;

    if((strlen("OZn") == 3)){ tests_passed++; } total_tests++;

    if((strlen("cJH1t1s") == 7)){ tests_passed++; } total_tests++;

    if((strlen("stgrsr1ngLqNtCZAtest") == 20)){ tests_passed++; } total_tests++;

    if((strlen("yyy") == 3)){ tests_passed++; } total_tests++;

    if((strlen("kRLkion") == 7)){ tests_passed++; } total_tests++;

    if((strlen("hyNJcJ") == 6)){ tests_passed++; } total_tests++;

    if((strlen("iwTish!1Fo") == 10)){ tests_passed++; } total_tests++;

    if((strlen("strinifunctitsg") == 15)){ tests_passed++; } total_tests++;

    if((strlen("44n") == 3)){ tests_passed++; } total_tests++;

    if((strlen("st1r1n") == 6)){ tests_passed++; } total_tests++;

    if((strlen("fuwiw1thstricQukicknnc") == 22)){ tests_passed++; } total_tests++;

    if((strlen("cJH1t1sh") == 8)){ tests_passed++; } total_tests++;

    if((strlen("mThfGeeTebqorZJum5ymb0lsmtops") == 29)){ tests_passed++; } total_tests++;

    if((strlen("wtestm5nTheymb0ls") == 17)){ tests_passed++; } total_tests++;

    if((strlen("iTh!s") == 5)){ tests_passed++; } total_tests++;

    if((strlen("tion") == 4)){ tests_passed++; } total_tests++;

    if((strlen("aOwtest5nymb0lsver") == 18)){ tests_passed++; } total_tests++;

    if((strlen("QQFoTfuuniTxusample") == 19)){ tests_passed++; } total_tests++;

    if((strlen("rstn1r1n") == 8)){ tests_passed++; } total_tests++;

    if((strlen("123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789") == 99)){ tests_passed++; } total_tests++;

    if((strlen("MNhqmCdV") == 8)){ tests_passed++; } total_tests++;

    if((strlen("MNhqmCV") == 7)){ tests_passed++; } total_tests++;

    if((strlen("1s") == 2)){ tests_passed++; } total_tests++;

    if((strlen("sampLazyle") == 10)){ tests_passed++; } total_tests++;

    if((strlen("ttest") == 5)){ tests_passed++; } total_tests++;

    if((strlen("ThTis") == 5)){ tests_passed++; } total_tests++;

    if((strlen("MN!nhqmCCdV") == 11)){ tests_passed++; } total_tests++;

    if((strlen("MNhqThe") == 7)){ tests_passed++; } total_tests++;

    if((strlen("BrownLazy") == 9)){ tests_passed++; } total_tests++;

    if((strlen("samplse") == 7)){ tests_passed++; } total_tests++;

    if((strlen("TTBrownis") == 9)){ tests_passed++; } total_tests++;

    if((strlen("ThTi") == 4)){ tests_passed++; } total_tests++;

    if((strlen("BrownsampBrownleLazy") == 20)){ tests_passed++; } total_tests++;

    if((strlen("CQuick") == 6)){ tests_passed++; } total_tests++;

    if((strlen("testt") == 5)){ tests_passed++; } total_tests++;

    if((strlen("aa") == 2)){ tests_passed++; } total_tests++;

    if((strlen("BrownLazys") == 10)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLazyLazy") == 14)){ tests_passed++; } total_tests++;

    if((strlen("RGTk") == 4)){ tests_passed++; } total_tests++;

    if((strlen("MNhqTMNMNhqThehe") == 16)){ tests_passed++; } total_tests++;

    if((strlen("CQuicJstrOveringumpsk") == 21)){ tests_passed++; } total_tests++;

    if((strlen("thCV") == 4)){ tests_passed++; } total_tests++;

    if((strlen("Jumpes") == 6)){ tests_passed++; } total_tests++;

    if((strlen("ThTTi") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Foxa") == 4)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLaazyLazy") == 15)){ tests_passed++; } total_tests++;

    if((strlen("OverThis") == 8)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLMNhqThehTTi") == 18)){ tests_passed++; } total_tests++;

    if((strlen("oJutesttmps") == 11)){ tests_passed++; } total_tests++;

    if((strlen("functont") == 8)){ tests_passed++; } total_tests++;

    if((strlen("Fstrintogwox") == 12)){ tests_passed++; } total_tests++;

    if((strlen("ic") == 2)){ tests_passed++; } total_tests++;

    if((strlen("bUmvrK") == 6)){ tests_passed++; } total_tests++;

    if((strlen("ThT") == 3)){ tests_passed++; } total_tests++;

    if((strlen("r1ng") == 4)){ tests_passed++; } total_tests++;

    if((strlen("leOvering") == 9)){ tests_passed++; } total_tests++;

    if((strlen("ttV") == 3)){ tests_passed++; } total_tests++;

    if((strlen("TThTi") == 5)){ tests_passed++; } total_tests++;

    if((strlen("MNhq1TMNMNhqThehe") == 17)){ tests_passed++; } total_tests++;

    if((strlen("aaa") == 3)){ tests_passed++; } total_tests++;

    if((strlen("TTBrownisgmCV") == 13)){ tests_passed++; } total_tests++;

    if((strlen("BzyLazy") == 7)){ tests_passed++; } total_tests++;

    if((strlen("s") == 1)){ tests_passed++; } total_tests++;

    if((strlen("tVhCV") == 5)){ tests_passed++; } total_tests++;

    if((strlen("BrownL") == 6)){ tests_passed++; } total_tests++;

    if((strlen("DogmCVering") == 11)){ tests_passed++; } total_tests++;

    if((strlen("DogmCVerinDog") == 13)){ tests_passed++; } total_tests++;

    if((strlen("JumbUmvrKpes") == 12)){ tests_passed++; } total_tests++;

    if((strlen("rstr1ng") == 7)){ tests_passed++; } total_tests++;

    if((strlen("ThTMNei") == 7)){ tests_passed++; } total_tests++;

    if((strlen("g") == 1)){ tests_passed++; } total_tests++;

    if((strlen("thCVeLBrownLazazy") == 17)){ tests_passed++; } total_tests++;

    if((strlen("JuTTBrownismbUmvrKpes") == 21)){ tests_passed++; } total_tests++;

    if((strlen("CQuDogmCVnsampBrownleLazyick") == 28)){ tests_passed++; } total_tests++;

    if((strlen("samp") == 4)){ tests_passed++; } total_tests++;

    if((strlen("rrstr1ng") == 8)){ tests_passed++; } total_tests++;

    if((strlen("Brow") == 4)){ tests_passed++; } total_tests++;

    if((strlen("bUmv") == 4)){ tests_passed++; } total_tests++;

    if((strlen("teestt") == 6)){ tests_passed++; } total_tests++;

    if((strlen("tetest") == 6)){ tests_passed++; } total_tests++;

    if((strlen("DogmCLazyk") == 10)){ tests_passed++; } total_tests++;

    if((strlen("Thi") == 3)){ tests_passed++; } total_tests++;

    if((strlen("aaaaa") == 5)){ tests_passed++; } total_tests++;

    if((strlen("Tntoghis") == 8)){ tests_passed++; } total_tests++;

    if((strlen("1CQuicJstrOveringumpskt") == 23)){ tests_passed++; } total_tests++;

    if((strlen("JumJp") == 5)){ tests_passed++; } total_tests++;

    if((strlen("BBroownLazyLazy") == 15)){ tests_passed++; } total_tests++;

    if((strlen("tVtV") == 4)){ tests_passed++; } total_tests++;

    if((strlen("MNhqmCdCV") == 9)){ tests_passed++; } total_tests++;

    if((strlen("RDogmCLazyGGTk") == 14)){ tests_passed++; } total_tests++;

    if((strlen("FstrintoBrLownLgwox") == 19)){ tests_passed++; } total_tests++;

    if((strlen("BwownLazyLazy") == 13)){ tests_passed++; } total_tests++;

    if((strlen("BrowwnL") == 7)){ tests_passed++; } total_tests++;

    if((strlen("Th!s") == 4)){ tests_passed++; } total_tests++;

    if((strlen("r1g") == 3)){ tests_passed++; } total_tests++;

    if((strlen("stCQuicJstrOveringumpskt") == 24)){ tests_passed++; } total_tests++;

    if((strlen("ickk") == 4)){ tests_passed++; } total_tests++;

    if((strlen("BrozwnLazys") == 11)){ tests_passed++; } total_tests++;

    if((strlen("1tBrownLazys") == 12)){ tests_passed++; } total_tests++;

    if((strlen("z") == 1)){ tests_passed++; } total_tests++;

    if((strlen("i") == 1)){ tests_passed++; } total_tests++;

    if((strlen("CQuDogmCVnsampBrownfunctBwownisLazyLazy") == 39)){ tests_passed++; } total_tests++;

    if((strlen("UcBwDomgmCVownisLazyLazy") == 24)){ tests_passed++; } total_tests++;

    if((strlen("DogmCLazy") == 9)){ tests_passed++; } total_tests++;

    if((strlen("1testt1tt") == 9)){ tests_passed++; } total_tests++;

    if((strlen("sThe") == 4)){ tests_passed++; } total_tests++;

    if((strlen("Jumpsw1This") == 11)){ tests_passed++; } total_tests++;

    if((strlen("QGLWea") == 6)){ tests_passed++; } total_tests++;

    if((strlen("1testt1t") == 8)){ tests_passed++; } total_tests++;

    if((strlen("CCQuicJumpsk") == 12)){ tests_passed++; } total_tests++;

    if((strlen("nction") == 6)){ tests_passed++; } total_tests++;

    if((strlen("TBrowMNhqmnrownisgmCV") == 21)){ tests_passed++; } total_tests++;

    if((strlen("BryownLazys") == 11)){ tests_passed++; } total_tests++;

    if((strlen("ThTiTi") == 6)){ tests_passed++; } total_tests++;

    if((strlen("ntog") == 4)){ tests_passed++; } total_tests++;

    if((strlen("hCV") == 3)){ tests_passed++; } total_tests++;

    if((strlen("samplsme") == 8)){ tests_passed++; } total_tests++;

    if((strlen("on") == 2)){ tests_passed++; } total_tests++;

    if((strlen("sasmplsme") == 9)){ tests_passed++; } total_tests++;

    if((strlen("CQuticJumpsk") == 12)){ tests_passed++; } total_tests++;

    if((strlen("OqvveThT") == 8)){ tests_passed++; } total_tests++;

    if((strlen("C") == 1)){ tests_passed++; } total_tests++;

    if((strlen("sTe") == 3)){ tests_passed++; } total_tests++;

    if((strlen("w1thTTBrownis") == 13)){ tests_passed++; } total_tests++;

    if((strlen("CQuicJumpskg") == 12)){ tests_passed++; } total_tests++;

    if((strlen("!func!ontion") == 12)){ tests_passed++; } total_tests++;

    if((strlen("Jumpsw1Tntoghiss") == 16)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLaayLazy") == 14)){ tests_passed++; } total_tests++;

    if((strlen("saasmplsme") == 10)){ tests_passed++; } total_tests++;

    if((strlen("1seampLazyleat") == 14)){ tests_passed++; } total_tests++;

    if((strlen("ThhT") == 4)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLaayLazystringunction") == 27)){ tests_passed++; } total_tests++;

    if((strlen("UcBwDnomgmCVownisLazyLazy") == 25)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLaayLazystrizngunction") == 28)){ tests_passed++; } total_tests++;

    if((strlen("zz") == 2)){ tests_passed++; } total_tests++;

    if((strlen("qygh") == 4)){ tests_passed++; } total_tests++;

    if((strlen("TheC") == 4)){ tests_passed++; } total_tests++;

    if((strlen("DogmCV") == 6)){ tests_passed++; } total_tests++;

    if((strlen("OverTh") == 6)){ tests_passed++; } total_tests++;

    if((strlen("nctoion") == 7)){ tests_passed++; } total_tests++;

    if((strlen("TTBrown") == 7)){ tests_passed++; } total_tests++;

    if((strlen("str1g") == 5)){ tests_passed++; } total_tests++;

    if((strlen("MNhqm") == 5)){ tests_passed++; } total_tests++;

    if((strlen("JumbstringunctionUmvrKpes") == 25)){ tests_passed++; } total_tests++;

    if((strlen("CCQuicJumt1DomgmCVpsk") == 21)){ tests_passed++; } total_tests++;

    if((strlen("Jumpsw1TntoghiTTBrisss") == 22)){ tests_passed++; } total_tests++;

    if((strlen("UrK") == 3)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLaayLazystringunctionn") == 28)){ tests_passed++; } total_tests++;

    if((strlen("VhCV") == 4)){ tests_passed++; } total_tests++;

    if((strlen("CQuicJstrOveJringumpsk") == 22)){ tests_passed++; } total_tests++;

    if((strlen("OverThisBBrownLaazyLazy") == 23)){ tests_passed++; } total_tests++;

    if((strlen("aCQuDogmCVnsampBrownleLazyickzys") == 32)){ tests_passed++; } total_tests++;

    if((strlen("iii") == 3)){ tests_passed++; } total_tests++;

    if((strlen("testVhCVtt") == 10)){ tests_passed++; } total_tests++;

    if((strlen("DogmCVBrownsampBrownlMNhqThensampBrownleLazy") == 44)){ tests_passed++; } total_tests++;

    if((strlen("TBrowMNhqmnrownisgmCVstrC1ng") == 28)){ tests_passed++; } total_tests++;

    if((strlen("aLLa") == 4)){ tests_passed++; } total_tests++;

    if((strlen("BrownLazuey") == 11)){ tests_passed++; } total_tests++;

    if((strlen("stCQuicJstrOveringumpsktoJutesttmps") == 35)){ tests_passed++; } total_tests++;

    if((strlen("tstr1g") == 6)){ tests_passed++; } total_tests++;

    if((strlen("CQuck") == 5)){ tests_passed++; } total_tests++;

    if((strlen("aLaLBrowTBrowMNhqmnrownisgmCVgna") == 32)){ tests_passed++; } total_tests++;

    if((strlen("BBrownLLazyLazy") == 15)){ tests_passed++; } total_tests++;

    if((strlen("testtt") == 6)){ tests_passed++; } total_tests++;

    if((strlen("DogmCrV") == 7)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


