#include<iostream>
#include<string>
using namespace std;

bool check_if_last_char_is_a_letter(const string& txt){
    if (txt.empty() || !isalpha(txt[txt.length()-1])){ // ensure the string is not empty and last character is a letter
        return false; 
      } else {
         size_t pos = txt.find_last_not_of(" ");   // find position of last non-space character
         if (pos == string::npos || txt[pos] != ' '){   // check if there is no non-space characters or the second last character is not space
             return true;  
           }
        }
     return false;
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

    if((check_if_last_char_is_a_letter("apple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("apple pi e") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("eeeee") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("A") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Pumpkin pie ") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Pumpkin pie 1") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("eeeee e ") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("apple pie") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("apple pi e ") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("apple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("eeeee") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("A") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pUMPKPIE") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pUMPK") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("jpBTU") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("OPxQV") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pPUMPK") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("OPxQVV") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("food") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("The") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Apple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pi") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("p") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("brown") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("KeBambuP") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("over") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("a") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("dogs") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ap") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foofd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("thApple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fooffd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fofooffdod") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ovoer") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ofoofd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ff") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fox") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("or") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foxx") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ee") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("quick") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("lazy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("jl") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("favorite") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("jumps") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Tehe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("id") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("bnnrown") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("MMy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("it") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ppi") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fofx") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("n") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("applpi") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appl") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fooffoxxd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pp") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("eveni") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("bnnrobwn") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appfisl") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("hWwY") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("oovoer") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("dogsn") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("d") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ffof") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("nTehe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("zLkykywysmc") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("swims") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("zLkykwysmc") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foooffd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("OqmEHnVTg") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fooapppl") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("MM") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("t") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Hel") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ffff") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("szLkykywysmc") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("thAppl") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fven") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("oo") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ii") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("i") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("apThe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("iE") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("doogsn") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("orver") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("is") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foxk") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("zbrown") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fffof") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ae") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fooofd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ipiapple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("iit") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("dosgs") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("bbnnrown") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Apidple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("sUwxpM") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fmJnMBo") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fmJfnMBo") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ipialpple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ffooffd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ipialnTeheple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("even") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("rovoer") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fie") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("iQVJS") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("apppl") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fewims") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foxkk") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Zrm") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("aa") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("applMy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fooapppllazy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("idn") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("udoogsn") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ethApple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ftood") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("favoriitte") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("eapple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ffoofffd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("wn") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Z") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("aeiou") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("AEIOU") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("quickover") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("My") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pie") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foox") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qkuicky") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("nGwMUkIwSw") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pifoox") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("quiover") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foxMy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Myy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qkuickky") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("e") == true)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appapplApple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("dgs") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("browwn") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("quickk") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("though") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("eeThe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("piti") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("br") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("broapple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("YRtcLsP") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qick") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("applx") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("jumsps") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("jumpus") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("favotrite") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("bron") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("quck") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("aThe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("aT") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("applefavoritte") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("pifoeleox") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("vXshDwOJiX") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("favoritee") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foxver") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("TThe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("feover") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ps") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qkuickkypifoox") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appfavoritequickapple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("iee") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("Meleyy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("hh") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("MeapeepleAppleleyy") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qupick") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("thhough") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("eee") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("faveoritee") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("quickthough") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("foood") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("quickapple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("bTrown") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appplapp") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("fd") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("YIjGPAGiyb") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("aaT") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("rbro") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("ppapplApple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("aqkuickyThe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("MyjThe") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("doguick") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("RcRJCoSsej") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qupickapple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("rbo") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("MeapeepleAppleleyey") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("hquickthough") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("appplejump") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("REVTbqcIZ") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("the") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qupicekapple") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("qucqqk") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("le") == false)){ tests_passed++; } total_tests++;

    if((check_if_last_char_is_a_letter("jusmps") == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


