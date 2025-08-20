#include <iostream>
#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) { // check if the current character is a letter
            if (islower(s[i])) { // check if the letter is in lowercase
                result += toupper(s[i]); // convert to uppercase
            } else {
                result += tolower(s[i]); // convert to lowercase
            }
        } else {
            result += s[i]; // keep as it is if not a letter
        }
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

    if((solve("AsDf") == "aSdF")){ tests_passed++; } total_tests++;

    if((solve("1234") == "4321")){ tests_passed++; } total_tests++;

    if((solve("ab") == "AB")){ tests_passed++; } total_tests++;

    if((solve("#a@C") == "#A@c")){ tests_passed++; } total_tests++;

    if((solve("#AsdfW^45") == "#aSDFw^45")){ tests_passed++; } total_tests++;

    if((solve("#6@2") == "2@6#")){ tests_passed++; } total_tests++;

    if((solve("#$a^D") == "#$A^d")){ tests_passed++; } total_tests++;

    if((solve("#ccc") == "#CCC")){ tests_passed++; } total_tests++;

    if((solve("AsDf") == "aSdF")){ tests_passed++; } total_tests++;

    if((solve("1234") == "4321")){ tests_passed++; } total_tests++;

    if((solve("ab") == "AB")){ tests_passed++; } total_tests++;

    if((solve("#a@C") == "#A@c")){ tests_passed++; } total_tests++;

    if((solve("#AsdfW^45") == "#aSDFw^45")){ tests_passed++; } total_tests++;

    if((solve("#6@2") == "2@6#")){ tests_passed++; } total_tests++;

    if((solve("#$a^D") == "#$A^d")){ tests_passed++; } total_tests++;

    if((solve("#ccc") == "#CCC")){ tests_passed++; } total_tests++;

    if((solve("") == "")){ tests_passed++; } total_tests++;

    if((solve("ABCDEFG") == "abcdefg")){ tests_passed++; } total_tests++;

    if((solve("racecar") == "RACECAR")){ tests_passed++; } total_tests++;

    if((solve("AbCdEfGhI") == "aBcDeFgHi")){ tests_passed++; } total_tests++;

    if((solve("!!!!1234!!!!") == "!!!!4321!!!!")){ tests_passed++; } total_tests++;

    if((solve("aaBBccDDee") == "AAbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("AbCdEfG") == "aBcDeFg")){ tests_passed++; } total_tests++;

    if((solve("YarraY") == "yARRAy")){ tests_passed++; } total_tests++;

    if((solve("!!34!!!!") == "!!!!43!!")){ tests_passed++; } total_tests++;

    if((solve("!!!!1234!!!3!") == "!3!!!4321!!!!")){ tests_passed++; } total_tests++;

    if((solve("aaABCDEFGBBccDDee") == "AAabcdefgbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("tuTe") == "TUtE")){ tests_passed++; } total_tests++;

    if((solve("tuuTe") == "TUUtE")){ tests_passed++; } total_tests++;

    if((solve("aaaaBBccDDeeABCDEFGBBccDDee") == "AAAAbbCCddEEabcdefgbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("!!!!1!234!!!!!!") == "!!!!!!432!1!!!!")){ tests_passed++; } total_tests++;

    if((solve("!!!!1aaABCDEFGBBccDDee234!!!!") == "!!!!1AAabcdefgbbCCddEE234!!!!")){ tests_passed++; } total_tests++;

    if((solve("Y!!!!1234!!!3!arraY") == "y!!!!1234!!!3!ARRAy")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccDDeeABCDEFGBBccDDee") == "TUUtEAAAAbbCCddEEabcdefgbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("iqe") == "IQE")){ tests_passed++; } total_tests++;

    if((solve("racecacr") == "RACECACR")){ tests_passed++; } total_tests++;

    if((solve("aaaaBBccDDeeABCDEF!!!!1234!!!!e") == "AAAAbbCCddEEabcdef!!!!1234!!!!E")){ tests_passed++; } total_tests++;

    if((solve("DRl") == "drL")){ tests_passed++; } total_tests++;

    if((solve("!!!!") == "!!!!")){ tests_passed++; } total_tests++;

    if((solve("AdEfGhI") == "aDeFgHi")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccDDeeABeCDEFGBBccDDee") == "TUUtEAAAAbbCCddEEabEcdefgbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("rYarraaY") == "RyARRAAy")){ tests_passed++; } total_tests++;

    if((solve("qCjYuVc") == "QcJyUvC")){ tests_passed++; } total_tests++;

    if((solve("ie") == "IE")){ tests_passed++; } total_tests++;

    if((solve("np") == "NP")){ tests_passed++; } total_tests++;

    if((solve("rs") == "RS")){ tests_passed++; } total_tests++;

    if((solve("ii!!34!!!!e") == "II!!34!!!!E")){ tests_passed++; } total_tests++;

    if((solve("!!!!12434!!!3!") == "!3!!!43421!!!!")){ tests_passed++; } total_tests++;

    if((solve("!!!!1aaABCDEFGBBccDDee234!!!aaaaBBccDDeeABCDEF!!!!1234!!!!e!") == "!!!!1AAabcdefgbbCCddEE234!!!AAAAbbCCddEEabcdef!!!!1234!!!!E!")){ tests_passed++; } total_tests++;

    if((solve("AbCbfddEfG") == "aBcBFDDeFg")){ tests_passed++; } total_tests++;

    if((solve("aaaaBBee") == "AAAAbbEE")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccDDeeABCDEFGaaABCDEFGBBccDDeeBBccDDee") == "TUUtEAAAAbbCCddEEabcdefgAAabcdefgbbCCddEEbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaDDee") == "TUUtEAddEE")){ tests_passed++; } total_tests++;

    if((solve("!!!!1aaABCDEFGBBccDDee234!!!aaaaBBccDDeeABCDEF!!!!1234!!e!") == "!!!!1AAabcdefgbbCCddEE234!!!AAAAbbCCddEEabcdef!!!!1234!!E!")){ tests_passed++; } total_tests++;

    if((solve("racectuuTeaaaaBFGBBccDDeear") == "RACECTUUtEAAAAbfgbbCCddEEAR")){ tests_passed++; } total_tests++;

    if((solve("!!!!1aaABCDEFGBBccDDee234!tuTe!!!") == "!!!!1AAabcdefgbbCCddEE234!TUtE!!!")){ tests_passed++; } total_tests++;

    if((solve("aaABCDEFGBBaaaaBBeeccDDee") == "AAabcdefgbbAAAAbbEECCddEE")){ tests_passed++; } total_tests++;

    if((solve("aaABCDEFGBBaaaaBBeeccDDeae") == "AAabcdefgbbAAAAbbEECCddEAE")){ tests_passed++; } total_tests++;

    if((solve("raceccr") == "RACECCR")){ tests_passed++; } total_tests++;

    if((solve("ii!!34!!!!!e") == "II!!34!!!!!E")){ tests_passed++; } total_tests++;

    if((solve("racecacr!!34!!!!") == "RACECACR!!34!!!!")){ tests_passed++; } total_tests++;

    if((solve("raceccrtuuTeaaaaBBccDDeeABCDEFGBBccDDee") == "RACECCRTUUtEAAAAbbCCddEEabcdefgbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("!!!!!1234!!!!!!!1234!!!!") == "!!!!4321!!!!!!!4321!!!!!")){ tests_passed++; } total_tests++;

    if((solve("Y!!!!!1234!!!3!arraY") == "y!!!!!1234!!!3!ARRAy")){ tests_passed++; } total_tests++;

    if((solve("!!!!!!!!1aaABCDEFGBBccDDee234!tuTe!!!") == "!!!!!!!!1AAabcdefgbbCCddEE234!TUtE!!!")){ tests_passed++; } total_tests++;

    if((solve("ii!aaaaBBccDDeeABCDEFGBBccDDee!34!!!!e") == "II!AAAAbbCCddEEabcdefgbbCCddEE!34!!!!E")){ tests_passed++; } total_tests++;

    if((solve("racecacr34!!!!") == "RACECACR34!!!!")){ tests_passed++; } total_tests++;

    if((solve("!ii!!34!!!!e") == "!II!!34!!!!E")){ tests_passed++; } total_tests++;

    if((solve("aaaaaBBccDDeeABCDEF!!!!1234!!!!e") == "AAAAAbbCCddEEabcdef!!!!1234!!!!E")){ tests_passed++; } total_tests++;

    if((solve("DR!!!!1aaABCDEFGBBccDDee234!!!aaaaBBccDDeeABCDEF!!!!1234!!!!e!l") == "dr!!!!1AAabcdefgbbCCddEE234!!!AAAAbbCCddEEabcdef!!!!1234!!!!E!L")){ tests_passed++; } total_tests++;

    if((solve("ii!!34!!!!") == "II!!34!!!!")){ tests_passed++; } total_tests++;

    if((solve("YY") == "yy")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaBBccDDeeBBccDDee") == "TUUtEAAbbCCddEEbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("aaBBcDDee") == "AAbbCddEE")){ tests_passed++; } total_tests++;

    if((solve("racecacr34!!!!!") == "RACECACR34!!!!!")){ tests_passed++; } total_tests++;

    if((solve("Y!!!!1234!!!!1234!!!!!!!3!arraY") == "y!!!!1234!!!!1234!!!!!!!3!ARRAy")){ tests_passed++; } total_tests++;

    if((solve("!!!!!1234!!!!!!1234!!!!") == "!!!!4321!!!!!!4321!!!!!")){ tests_passed++; } total_tests++;

    if((solve("Y!!!!arraY") == "y!!!!ARRAy")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccDDeeABeCDEFGBBctuuTeaaaaBBccDDeeABeCDEFGBBccDDeecDDee") == "TUUtEAAAAbbCCddEEabEcdefgbbCTUUtEAAAAbbCCddEEabEcdefgbbCCddEECddEE")){ tests_passed++; } total_tests++;

    if((solve("!!!!!") == "!!!!!")){ tests_passed++; } total_tests++;

    if((solve("ii!!34!!!!!1234!!!3!!!!") == "II!!34!!!!!1234!!!3!!!!")){ tests_passed++; } total_tests++;

    if((solve("!!!edEfG") == "!!!EDeFg")){ tests_passed++; } total_tests++;

    if((solve("iqeYY") == "IQEyy")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccDDeeABCDEFGaaABCDEFGBBccDDeeBBccDracecacr34!!!!!Dee") == "TUUtEAAAAbbCCddEEabcdefgAAabcdefgbbCCddEEbbCCdRACECACR34!!!!!dEE")){ tests_passed++; } total_tests++;

    if((solve("DRRl") == "drrL")){ tests_passed++; } total_tests++;

    if((solve("!!!EedEfG") == "!!!eEDeFg")){ tests_passed++; } total_tests++;

    if((solve("Y!!!!123tuTe4!!!3!arraY") == "y!!!!123TUtE4!!!3!ARRAy")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccDDeeABCDEFGaaABCDEFGBBccDDeeBBccDracecacr34!!!!!DeeABCDEFG") == "TUUtEAAAAbbCCddEEabcdefgAAabcdefgbbCCddEEbbCCdRACECACR34!!!!!dEEabcdefg")){ tests_passed++; } total_tests++;

    if((solve("!!racecacr34!!!!!!edEfG") == "!!RACECACR34!!!!!!EDeFg")){ tests_passed++; } total_tests++;

    if((solve("raceccr!!!!!1234!!!!!!!!1234!!!!") == "RACECCR!!!!!1234!!!!!!!!1234!!!!")){ tests_passed++; } total_tests++;

    if((solve("AAdEfGhIBCDEFG") == "aaDeFgHibcdefg")){ tests_passed++; } total_tests++;

    if((solve("pnp") == "PNP")){ tests_passed++; } total_tests++;

    if((solve("!ii!!34!!!!e!!!!1aaABCDEFGBBccDDee234!tuTe!!!") == "!II!!34!!!!E!!!!1AAabcdefgbbCCddEE234!TUtE!!!")){ tests_passed++; } total_tests++;

    if((solve("qCjCYujVc") == "QcJcyUJvC")){ tests_passed++; } total_tests++;

    if((solve("ii!!34!!!!!!e") == "II!!34!!!!!!E")){ tests_passed++; } total_tests++;

    if((solve("aaaaBBccDDeeABCDEFGBBccDrsDee") == "AAAAbbCCddEEabcdefgbbCCdRSdEE")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccFGaaABCDEFGBBccDDeeBBccDDee") == "TUUtEAAAAbbCCfgAAabcdefgbbCCddEEbbCCddEE")){ tests_passed++; } total_tests++;

    if((solve("!!3!!1234!!!3!") == "!3!!!4321!!3!!")){ tests_passed++; } total_tests++;

    if((solve("tuuTeaaaaBBccFGaaABCDEFGBBccDDeeBBccDDeerYarraaY") == "TUUtEAAAAbbCCfgAAabcdefgbbCCddEEbbCCddEERyARRAAy")){ tests_passed++; } total_tests++;

    if((solve("iqeraceccr!!!!!1234!!!!!!!!1234!!!!") == "IQERACECCR!!!!!1234!!!!!!!!1234!!!!")){ tests_passed++; } total_tests++;

    if((solve("Y!!!!1234!!!!!!!1234!!!!!!!1234!!!!!3!arraY") == "y!!!!1234!!!!!!!1234!!!!!!!1234!!!!!3!ARRAy")){ tests_passed++; } total_tests++;

    if((solve("lxYMHvkfU") == "LXymhVKFu")){ tests_passed++; } total_tests++;

    if((solve("abcdef") == "ABCDEF")){ tests_passed++; } total_tests++;

    if((solve("lxYMHvkffkU") == "LXymhVKFFKu")){ tests_passed++; } total_tests++;

    if((solve("abf") == "ABF")){ tests_passed++; } total_tests++;

    if((solve("td") == "TD")){ tests_passed++; } total_tests++;

    if((solve("U") == "u")){ tests_passed++; } total_tests++;

    if((solve("abcadabcdefeaf") == "ABCADABCDEFEAF")){ tests_passed++; } total_tests++;

    if((solve("KzhRYfmxwU") == "kZHryFMXWu")){ tests_passed++; } total_tests++;

    if((solve("PdbdDNdG") == "pDBDdnDg")){ tests_passed++; } total_tests++;

    if((solve("URw") == "urW")){ tests_passed++; } total_tests++;

    if((solve("cXMejFdHOM") == "CxmEJfDhom")){ tests_passed++; } total_tests++;

    if((solve("uGrig") == "UgRIG")){ tests_passed++; } total_tests++;

    if((solve("a") == "A")){ tests_passed++; } total_tests++;

    if((solve("ttd") == "TTD")){ tests_passed++; } total_tests++;

    if((solve("tcwMODkf") == "TCWmodKF")){ tests_passed++; } total_tests++;

    if((solve("abbcdef") == "ABBCDEF")){ tests_passed++; } total_tests++;

    if((solve("tcwMODkMf") == "TCWmodKmF")){ tests_passed++; } total_tests++;

    if((solve("tcMMODkMf") == "TCmmodKmF")){ tests_passed++; } total_tests++;

    if((solve("AKBtOxEMV") == "akbToXemv")){ tests_passed++; } total_tests++;

    if((solve("PdNbdDNdG") == "pDnBDdnDg")){ tests_passed++; } total_tests++;

    if((solve("d") == "D")){ tests_passed++; } total_tests++;

    if((solve("twMODkf") == "TWmodKF")){ tests_passed++; } total_tests++;

    if((solve("lxYMHvfvU") == "LXymhVFVu")){ tests_passed++; } total_tests++;

    if((solve("tcwMMODkf") == "TCWmmodKF")){ tests_passed++; } total_tests++;

    if((solve("jUklf") == "JuKLF")){ tests_passed++; } total_tests++;

    if((solve("123") == "321")){ tests_passed++; } total_tests++;

    if((solve("UPPERCASE") == "uppercase")){ tests_passed++; } total_tests++;

    if((solve("lowercase") == "LOWERCASE")){ tests_passed++; } total_tests++;

    if((solve("UPperlOweR") == "upPERLoWEr")){ tests_passed++; } total_tests++;

    if((solve("Punctuation?") == "pUNCTUATION?")){ tests_passed++; } total_tests++;

    if((solve("GJLrr") == "gjlRR")){ tests_passed++; } total_tests++;

    if((solve("abdef") == "ABDEF")){ tests_passed++; } total_tests++;

    if((solve("FX") == "fx")){ tests_passed++; } total_tests++;

    if((solve("FFX") == "ffx")){ tests_passed++; } total_tests++;

    if((solve("fabdef") == "FABDEF")){ tests_passed++; } total_tests++;

    if((solve("rGJLrr") == "RgjlRR")){ tests_passed++; } total_tests++;

    if((solve("fdabde") == "FDABDE")){ tests_passed++; } total_tests++;

    if((solve("FF") == "ff")){ tests_passed++; } total_tests++;

    if((solve("TIfW") == "tiFw")){ tests_passed++; } total_tests++;

    if((solve("TIfWfabdef") == "tiFwFABDEF")){ tests_passed++; } total_tests++;

    if((solve("fdabdef") == "FDABDEF")){ tests_passed++; } total_tests++;

    if((solve("af") == "AF")){ tests_passed++; } total_tests++;

    if((solve("FXjaCQis") == "fxJAcqIS")){ tests_passed++; } total_tests++;

    if((solve("asqhFwaY") == "ASQHfWAy")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


