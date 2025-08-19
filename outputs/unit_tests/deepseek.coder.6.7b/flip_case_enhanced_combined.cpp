#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string flip_case(const string& str) { 
    string result = str; // Create a copy to avoid modifying the original string.
    
    transform(result.begin(), result.end(), result.begin(),
        [](unsigned char c){ return isupper(c)? tolower(c): toupper(c); });

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

    if((flip_case("") == "")){ tests_passed++; } total_tests++;

    if((flip_case("Hello!") == "hELLO!")){ tests_passed++; } total_tests++;

    if((flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS")){ tests_passed++; } total_tests++;

    if((flip_case("") == "")){ tests_passed++; } total_tests++;

    if((flip_case("Hello!") == "hELLO!")){ tests_passed++; } total_tests++;

    if((flip_case("123abc") == "123ABC")){ tests_passed++; } total_tests++;

    if((flip_case("1234") == "1234")){ tests_passed++; } total_tests++;

    if((flip_case("Togg") == "tOGG")){ tests_passed++; } total_tests++;

    if((flip_case("Fun") == "fUN")){ tests_passed++; } total_tests++;

    if((flip_case("12134") == "12134")){ tests_passed++; } total_tests++;

    if((flip_case("nbfLDUjAi") == "NBFlduJaI")){ tests_passed++; } total_tests++;

    if((flip_case("112134") == "112134")){ tests_passed++; } total_tests++;

    if((flip_case("112111213434") == "112111213434")){ tests_passed++; } total_tests++;

    if((flip_case("1213112134abc") == "1213112134ABC")){ tests_passed++; } total_tests++;

    if((flip_case("gTogg") == "GtOGG")){ tests_passed++; } total_tests++;

    if((flip_case("JmWn") == "jMwN")){ tests_passed++; } total_tests++;

    if((flip_case("PtoFin") == "pTOfIN")){ tests_passed++; } total_tests++;

    if((flip_case("Fu123abcn") == "fU123ABCN")){ tests_passed++; } total_tests++;

    if((flip_case("gToggg") == "GtOGGG")){ tests_passed++; } total_tests++;

    if((flip_case("totggleme") == "TOTGGLEME")){ tests_passed++; } total_tests++;

    if((flip_case("ttotggl") == "TTOTGGL")){ tests_passed++; } total_tests++;

    if((flip_case("qJzU") == "QjZu")){ tests_passed++; } total_tests++;

    if((flip_case("ggleme") == "GGLEME")){ tests_passed++; } total_tests++;

    if((flip_case("1121PtoGGlE4") == "1121pTOggLe4")){ tests_passed++; } total_tests++;

    if((flip_case("AaBbccDEfFgHiIjJKkLMmnnoOPpqQrRSstTuUVvwWXxyYZz") == "aAbBCCdeFfGhIiJjkKlmMNNOopPQqRrsSTtUuvVWwxXYyzZ")){ tests_passed++; } total_tests++;

    if((flip_case("1234567890") == "1234567890")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((flip_case("Quick") == "qUICK")){ tests_passed++; } total_tests++;

    if((flip_case("1234656890") == "1234656890")){ tests_passed++; } total_tests++;

    if((flip_case("DOGe") == "dogE")){ tests_passed++; } total_tests++;

    if((flip_case("jUMPed") == "JumpED")){ tests_passed++; } total_tests++;

    if((flip_case("jUMePPed") == "JumEppED")){ tests_passed++; } total_tests++;

    if((flip_case("jUeMePP") == "JuEmEpp")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDEFGHIJKLMNOPQRSTUVWtheXYZabcdefghijklmnopqrstuvwxyz") == "abcdefghijklmnopqrstuvwTHExyzABCDEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((flip_case("AaBbccDEfFgHiIjJKkLMmnnoOPtpqQrRSstTuUVvwWXxyYZz") == "aAbBCCdeFfGhIiJjkKlmMNNOopTPQqRrsSTtUuvVWwxXYyzZ")){ tests_passed++; } total_tests++;

    if((flip_case("AaBbccDEfFgHiIjJKkjUMPedLMmnnoOPtpqQrRSstTuUVvwWXxyYZz") == "aAbBCCdeFfGhIiJjkKJumpEDlmMNNOopTPQqRrsSTtUuvVWwxXYyzZ")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDzEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrsz") == "abcdZefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSZ")){ tests_passed++; } total_tests++;

    if((flip_case("sKawvm") == "SkAWVM")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDzEFGHIJKLMNOPQRklmnopqrsz") == "abcdZefghijklmnopqrKLMNOPQRSZ")){ tests_passed++; } total_tests++;

    if((flip_case("Brown") == "bROWN")){ tests_passed++; } total_tests++;

    if((flip_case("dotHe") == "DOThE")){ tests_passed++; } total_tests++;

    if((flip_case("KX") == "kx")){ tests_passed++; } total_tests++;

    if((flip_case("12340656890") == "12340656890")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDzEFGHIJKOPQRSTUVWXYZabcdefghijklmnopqrsz") == "abcdZefghijkopqrstuvwxyzABCDEFGHIJKLMNOPQRSZ")){ tests_passed++; } total_tests++;

    if((flip_case("usted") == "USTED")){ tests_passed++; } total_tests++;

    if((flip_case("ULAZY") == "ulazy")){ tests_passed++; } total_tests++;

    if((flip_case("nl") == "NL")){ tests_passed++; } total_tests++;

    if((flip_case("ULAbROwnZY") == "ulaBroWNzy")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDzEFGHIJKOPQRSTUVWXYZabcdqefghijklmnopqrsz") == "abcdZefghijkopqrstuvwxyzABCDQEFGHIJKLMNOPQRSZ")){ tests_passed++; } total_tests++;

    if((flip_case("The") == "tHE")){ tests_passed++; } total_tests++;

    if((flip_case("AapBbccDEfFgHiIjJKkjUMPedLMmnnoOPtpqQrRSstTuUVvwWXxyYZz") == "aAPbBCCdeFfGhIiJjkKJumpEDlmMNNOopTPQqRrsSTtUuvVWwxXYyzZ")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDEFGHIJnKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "abcdefghijNklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((flip_case("JUMPS") == "jumps")){ tests_passed++; } total_tests++;

    if((flip_case("realmente") == "REALMENTE")){ tests_passed++; } total_tests++;

    if((flip_case("lazy") == "LAZY")){ tests_passed++; } total_tests++;

    if((flip_case("quAapBbccDEfFgHiIjJKkjUMPedLMmnnoOPtpqQrRSstTuUVvwWXxyYZz") == "QUaAPbBCCdeFfGhIiJjkKJumpEDlmMNNOopTPQqRrsSTtUuvVWwxXYyzZ")){ tests_passed++; } total_tests++;

    if((flip_case("10234567890") == "10234567890")){ tests_passed++; } total_tests++;

    if((flip_case("Bnrown") == "bNROWN")){ tests_passed++; } total_tests++;

    if((flip_case("ly") == "LY")){ tests_passed++; } total_tests++;

    if((flip_case("UJPUMPS") == "ujpumps")){ tests_passed++; } total_tests++;

    if((flip_case("612340656890") == "612340656890")){ tests_passed++; } total_tests++;

    if((flip_case("fOOX") == "Foox")){ tests_passed++; } total_tests++;

    if((flip_case("AaBbccDEfFgHiIjJfrRSstTuUVvwWXxyYZz") == "aAbBCCdeFfGhIiJjFRrsSTtUuvVWwxXYyzZ")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDEFGHIJnKLMNOPQRSTUVWXYZabcdefguhijklmnopqrstuvwxyz") == "abcdefghijNklmnopqrstuvwxyzABCDEFGUHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((flip_case("FOX") == "fox")){ tests_passed++; } total_tests++;

    if((flip_case("reamlmente") == "REAMLMENTE")){ tests_passed++; } total_tests++;

    if((flip_case("KXX") == "kxx")){ tests_passed++; } total_tests++;

    if((flip_case("ThTe") == "tHtE")){ tests_passed++; } total_tests++;

    if((flip_case("BrTheown") == "bRtHEOWN")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijkClmnopqrstuvwxyz") == "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKcLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((flip_case("RDOG") == "rdog")){ tests_passed++; } total_tests++;

    if((flip_case("jUeMePPquIcIk") == "JuEmEppQUiCiK")){ tests_passed++; } total_tests++;

    if((flip_case("OX") == "ox")){ tests_passed++; } total_tests++;

    if((flip_case("no.65.62890") == "NO.65.62890")){ tests_passed++; } total_tests++;

    if((flip_case("xwnjQ") == "XWNJq")){ tests_passed++; } total_tests++;

    if((flip_case("XfOOX") == "xFoox")){ tests_passed++; } total_tests++;

    if((flip_case("BrTheowAaBbccDEfFgHiIjJKkLMmnnoOPtpqQrRSstTuUVvwWXxyYZzn") == "bRtHEOWaAbBCCdeFfGhIiJjkKlmMNNOopTPQqRrsSTtUuvVWwxXYyzZN")){ tests_passed++; } total_tests++;

    if((flip_case("dtotHe") == "DTOThE")){ tests_passed++; } total_tests++;

    if((flip_case("Thh") == "tHH")){ tests_passed++; } total_tests++;

    if((flip_case("BroVvwWXxyYZzGHIJnKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwnxyzwn") == "bROvVWwxXYyzZghijNklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWNXYZWN")){ tests_passed++; } total_tests++;

    if((flip_case("AB") == "ab")){ tests_passed++; } total_tests++;

    if((flip_case("xwjQ") == "XWJq")){ tests_passed++; } total_tests++;

    if((flip_case("Browon") == "bROWON")){ tests_passed++; } total_tests++;

    if((flip_case("un") == "UN")){ tests_passed++; } total_tests++;

    if((flip_case("Br") == "bR")){ tests_passed++; } total_tests++;

    if((flip_case("BroVvwWXxyYZzGHIJnKLMNOnPQRSTUVWXYZabcdefghijklmnopqrstuvwnxyzwn") == "bROvVWwxXYyzZghijNklmnoNpqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWNXYZWN")){ tests_passed++; } total_tests++;

    if((flip_case("BrTrrheown") == "bRtRRHEOWN")){ tests_passed++; } total_tests++;

    if((flip_case("DSRMJumt") == "dsrmjUMT")){ tests_passed++; } total_tests++;

    if((flip_case("a") == "A")){ tests_passed++; } total_tests++;

    if((flip_case("trealmente") == "TREALMENTE")){ tests_passed++; } total_tests++;

    if((flip_case("reallazymente") == "REALLAZYMENTE")){ tests_passed++; } total_tests++;

    if((flip_case("no.") == "NO.")){ tests_passed++; } total_tests++;

    if((flip_case("treatlmente") == "TREATLMENTE")){ tests_passed++; } total_tests++;

    if((flip_case("Bunrown") == "bUNROWN")){ tests_passed++; } total_tests++;

    if((flip_case("the") == "THE")){ tests_passed++; } total_tests++;

    if((flip_case("quIck") == "QUiCK")){ tests_passed++; } total_tests++;

    if((flip_case("WNvhUnzb") == "wnVHuNZB")){ tests_passed++; } total_tests++;

    if((flip_case("opoco.") == "OPOCO.")){ tests_passed++; } total_tests++;

    if((flip_case("tHeeZY") == "ThEEzy")){ tests_passed++; } total_tests++;

    if((flip_case("kxF") == "KXf")){ tests_passed++; } total_tests++;

    if((flip_case("ovePr") == "OVEpR")){ tests_passed++; } total_tests++;

    if((flip_case("no..") == "NO..")){ tests_passed++; } total_tests++;

    if((flip_case("realmene") == "REALMENE")){ tests_passed++; } total_tests++;

    if((flip_case("iZvR") == "IzVr")){ tests_passed++; } total_tests++;

    if((flip_case("no...") == "NO...")){ tests_passed++; } total_tests++;

    if((flip_case("ovPePr") == "OVpEpR")){ tests_passed++; } total_tests++;

    if((flip_case("tHe") == "ThE")){ tests_passed++; } total_tests++;

    if((flip_case("DOG") == "dog")){ tests_passed++; } total_tests++;

    if((flip_case("opgoco.") == "OPGOCO.")){ tests_passed++; } total_tests++;

    if((flip_case("Bun") == "bUN")){ tests_passed++; } total_tests++;

    if((flip_case("FkF") == "fKf")){ tests_passed++; } total_tests++;

    if((flip_case("Qf") == "qF")){ tests_passed++; } total_tests++;

    if((flip_case("fOLAZY") == "Folazy")){ tests_passed++; } total_tests++;

    if((flip_case("BuBn") == "bUbN")){ tests_passed++; } total_tests++;

    if((flip_case("ovP") == "OVp")){ tests_passed++; } total_tests++;

    if((flip_case("e") == "E")){ tests_passed++; } total_tests++;

    if((flip_case("jUMPUed") == "JumpuED")){ tests_passed++; } total_tests++;

    if((flip_case("no.no.") == "NO.NO.")){ tests_passed++; } total_tests++;

    if((flip_case("no.nJUMPSo.") == "NO.NjumpsO.")){ tests_passed++; } total_tests++;

    if((flip_case("reamlmene") == "REAMLMENE")){ tests_passed++; } total_tests++;

    if((flip_case("DO") == "do")){ tests_passed++; } total_tests++;

    if((flip_case("QuckLAZY") == "qUCKlazy")){ tests_passed++; } total_tests++;

    if((flip_case("Fk") == "fK")){ tests_passed++; } total_tests++;

    if((flip_case("FF") == "ff")){ tests_passed++; } total_tests++;

    if((flip_case("DOQf") == "doqF")){ tests_passed++; } total_tests++;

    if((flip_case("nbROwn") == "NBroWN")){ tests_passed++; } total_tests++;

    if((flip_case("tHeeZtY") == "ThEEzTy")){ tests_passed++; } total_tests++;

    if((flip_case("PovPePr") == "pOVpEpR")){ tests_passed++; } total_tests++;

    if((flip_case("thee") == "THEE")){ tests_passed++; } total_tests++;

    if((flip_case("kLAZY") == "Klazy")){ tests_passed++; } total_tests++;

    if((flip_case("jUMPeUed") == "JumpEuED")){ tests_passed++; } total_tests++;

    if((flip_case("GDOG") == "gdog")){ tests_passed++; } total_tests++;

    if((flip_case("ABCDEAFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "abcdeafghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((flip_case("SzyYZabcdefghijklmnopqrstuvwxyz,") == "sZYyzABCDEFGHIJKLMNOPQRSTUVWXYZ,")){ tests_passed++; } total_tests++;

    if((flip_case("dKKIqRkw") == "DkkiQrKW")){ tests_passed++; } total_tests++;

    if((flip_case("non.nJUMPSo.") == "NON.NjumpsO.")){ tests_passed++; } total_tests++;

    if((flip_case("O") == "o")){ tests_passed++; } total_tests++;

    if((flip_case("noSo.") == "NOsO.")){ tests_passed++; } total_tests++;

    if((flip_case("f") == "F")){ tests_passed++; } total_tests++;

    if((flip_case("bROwn") == "BroWN")){ tests_passed++; } total_tests++;

    if((flip_case("fThe") == "FtHE")){ tests_passed++; } total_tests++;

    if((flip_case("fOXd") == "FoxD")){ tests_passed++; } total_tests++;

    if((flip_case("Qu") == "qU")){ tests_passed++; } total_tests++;

    if((flip_case("DtheO") == "dTHEo")){ tests_passed++; } total_tests++;

    if((flip_case("LAZY") == "lazy")){ tests_passed++; } total_tests++;

    if((flip_case("feThe") == "FEtHE")){ tests_passed++; } total_tests++;

    if((flip_case("u") == "U")){ tests_passed++; } total_tests++;

    if((flip_case("DteO") == "dTEo")){ tests_passed++; } total_tests++;

    if((flip_case("n") == "N")){ tests_passed++; } total_tests++;

    if((flip_case("Over") == "oVER")){ tests_passed++; } total_tests++;

    if((flip_case("12345678950") == "12345678950")){ tests_passed++; } total_tests++;

    if((flip_case("RnbROwn") == "rNBroWN")){ tests_passed++; } total_tests++;

    if((flip_case("noo.") == "NOO.")){ tests_passed++; } total_tests++;

    if((flip_case("BABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzunrown") == "babcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZUNROWN")){ tests_passed++; } total_tests++;

    if((flip_case("fOX") == "Fox")){ tests_passed++; } total_tests++;

    if((flip_case("bRHabla") == "BrhABLA")){ tests_passed++; } total_tests++;

    if((flip_case("wBunrown") == "WbUNROWN")){ tests_passed++; } total_tests++;

    if((flip_case("no.,,") == "NO.,,")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


