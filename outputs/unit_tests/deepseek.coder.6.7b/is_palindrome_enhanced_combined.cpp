#include <iostream> // for cout and cin
#include<string> 
using namespace std; 

bool is_palindrome(const string& text){ 
    int len = text.length(); 
  
    if (len == 0) return true; // If the length of the string is 0, return true as it's a palindrome by definition. 
  
    for(int i = 0; i < len/2; i++){ 
        if(text[i] != text[len - 1 - i]) { // If the character at position 'i' is not equal to the character at position 'len-1-i', return false. 
            return false; 
        } 
    } 
  
    return true; 
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

    if((is_palindrome("") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("aba") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("aaaaa") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("zbcd") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("xywyx") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("xywyz") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("xywzx") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("aba") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("aaaaa") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("zbcd") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("xywyx") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("xywyz") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("xywzx") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("a") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("ab") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("racecar") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("radar") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("refer") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("bab") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("aabc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aabca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("reacecar") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("frefer") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abbcc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abbc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abcaabca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("rar") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("babb") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abbbc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aa") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("nXHRf") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("babbabcca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("baabbcbbabcca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aaacaracecar") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("rr") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("baabbcbbbcca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abb") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abbccc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aaaabca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("reefer") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ba") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aaacar") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("babbccaabbcbbabcca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("reefrer") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("racecrar") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("abbbbc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("baabbcbbabcbabbabccaca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("baabbcbbabcbabbcabccaca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("babbbbc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("raaefer") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("babcabccaca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("baracecrarbbccaabbcbbabcca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("reaaefer") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Evil") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("or") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("is") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Step") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canal:") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!@3Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("notj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lilve.at") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("see") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("God?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("li.lve.a.t") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2name1") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Able") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Evistarl") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ord3!@@@2Zz21oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2Zz21oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ere") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("lEvil") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geesea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("parssaw?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("al:") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("eere") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cEvilnot") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geeseaea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("satar") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("on") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Evisttarl") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("man,Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Tacco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("vil") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("TTacco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanamaTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2Zz21nama.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f12zZ2@@@@!3") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pssawd3!@@@@2Zz21oeman,?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("no") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Tlive.Tacco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lWas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("sawa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("TTPanamTacoaTacoacco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZaTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geese") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanamTacoaTac") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("@@@@!33j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@@2Zz21oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZaTcaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("dd3!@@@2DoZz213!@@@2Zz21nama.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Taocco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geeseaa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("gese") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("nottj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZWas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Tac") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2Zz21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("S") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("SS") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("ee") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("SS12zZ2@@@@!@3Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("not") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("of") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("SSS") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("Was") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("sis") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("m1oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("sYvzbv") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geesd3!@@@@2Zz21oeman,aa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("saw?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@z21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lW") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live.at") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panaama") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f12zZ2@@@man,A") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Taococo") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cEvilcnot") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2co") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canal:Able") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("EvElba.name1il") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("EvisttcananWAarl") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("nootj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Elba.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanamTacoaTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("@@@@!3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("m112zZWasoeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wsaw") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2me1") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2Zzeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1Ws") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f12zZ2@") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@@2Zz213oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("livee.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1zZaTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Dd3!@@@2DoZz21o") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanamTaacoaTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("l.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("erecaisnral,Dd3!@@@2DoZz21o") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cEviilnot") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2Zeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ord3!@@@2Zz21oeman,Able") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Tacooo") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("manf12zZ2@@@man,A,Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@@2Zz213dd3!@@@2DoZz213!@@@2Zz21nama.oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("plan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("c") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("cl:") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Tacaot") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Ia") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.sLmxhinkamaor") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("a12zZ2g@eeseaea@@@@!31Tacoman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ges") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pmlan,,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("notefoeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("noc") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live.aZz21oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geseeseaea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2geeseaea@@@@!3Tacoman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Elba.?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("erecainWAsnral,Dd3!@@@2DoZz21o") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!3Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wliveas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ll.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!@3TacPanamTacoaTacan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("iis") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("oTaococo") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("erecaisn@ral,Dd3!@@@2DoZ,z21o") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ll.aGod?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("was") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f12zZ!3") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@@2Zz21oemnamean,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foemplaWasan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("122zZ2") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("petssaw?n,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.d3!@@@2Zz21nama.a!@3Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1WeenWPanama..A") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("saw?petsecaisnral,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("awa") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("orTTacco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cEcvilcnot") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("EvisttcananWAaarl") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("plannWA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama..") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.sLmxhinkmaor") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("si") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Dd3!1o") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canacEvilnlEvilotl:Able") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("n") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("orrTaTacco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("eEvisttcananWAarlere") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.d3!@@@z21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("nnn") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@@2Zz213oemaan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("manf12zZ2@@@amanTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("man,ATacogeesea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.sLmxhinkma") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("llW") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geesd3!@@@noc@2Zz21oeman,aa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1WeAanama..A") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("it") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("no@tj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("livea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.sLmxahink2Zeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1zZczaTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geesd3!@@@noc@2Zz21oea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geesd3!@@@noc@2Zz21oemaaa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("man,ATacoeesea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("eEvisattcanarlere") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pml,an,,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canalA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pannWA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.sLmxad3!@@@Tacocathink2Zeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ofoeman,as") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.sLmxhink,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("I") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.Was") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("iStepis") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.asLmxhinkma") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wssaw") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("LWzOuT") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1ereacaisnral,zZczaTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("planl,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panaaama") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ggese") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Tacogeesea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZaTacco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("petsesaw?n,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanPama") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2@DoZz2") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("erre") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.sLmxhhink,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live.ata") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("parssawa?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("sapw?petsecaisnral,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("@@@@EvTaco!33j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Evivl") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lvEvil") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("petrssaSStep") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lofoeman,W") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("dd3!@@@2DoZz213!@@@2Zz21naPanama.sLmxhinkma.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ld3!@@@2Zz21nama.l.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live.atil") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cEivil") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("gaQLMzyB") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("p12zZ2@d3!@@@Tacocat@@@@A") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Iiere") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("leivee.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live.atn,a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("man,nWA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("r") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.caisnral,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("EvisWas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZZ2") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cEcvilccnot") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("e.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("EDBeGUgzCE") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanamaTaconotS") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("erPanama.Panamalnotre") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ12") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("hpetsecaisnral,122zZ2") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Dere") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("WRiQwNNUK") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("man,ATacoge12zZ2geeseaea@@@@!3Tacoman,efoemord3!@@@2Zz21oeman,AAblean,sea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZaTaccliveo") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panama.d3!@@@2Zzeman,ma.PanamalnotsLmxhink,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@Ta") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("awaa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("2notjWassattar") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pets,f12zZ2@@@man,A") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("a12zZ2geeseaea@@@@!3Tacoman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lofWoeman,W") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ma12zZ2geeseaea@@@@!3Tacoman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!@3TacZz2112zZ2@@@@!@3Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Tacno@tjo") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canalpetssawAbleA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("star") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ca?t") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("a12zZ2geeseaea@@@@z!3Tacoman,aLL") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ca") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f,12zZ2@d3!@@@2eZeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!@@@2DoZz2112zZ2@@@@!@3Taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3!parssaw?@@@2Zz21e") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ld3!Z@@@2Zz21nama.l.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("taco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("md3!@@@2Zeman,Tacoe2notjWassattaresea") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lEvilf12zZ2@@@man,A") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("manf12zZ2@@@manTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("leiv12zZaTaccoee.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("saw?p,etsecaisnriisal,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("!") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("z") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!j3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@3@@!j3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@3@@!jfoeman,3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("A") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@evilj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cat") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("live.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Rats") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lieve.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foem,an,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Aorcatgees,Panamae") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wsaww") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("erel") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZerel") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foemaIn,Step") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("s?aw?") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("AeNO") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foem,acatn,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wsawww") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeem,an,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeem,noan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wswawww") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeem,,an,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("as") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ@@@!j3") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PaaPanama") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Rtats") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("saw?12@zZ2@@@@!3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.ma..") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zPaaPanamaZ2@@@evilj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("saw??") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("car") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!2j3jd3!@@@2Zz21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Do") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("1@2zZ2@@@evilj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panam.a.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ncanal,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("HijEVmHx") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("joOnfO") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("RtatRs") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ncanalfoem,an,,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2it@@2A") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panamano") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("maPa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanPana,manoamano") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("122zPaaPanamael") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2a21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Iba.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("egeese") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("joOngeesefO") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foemaIn,SPanasee.ma.p") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeIem,noan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Ablba.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panasee.ma.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("staTaco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wwas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.ma...") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Ky") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.ma..PaA.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Step12zZ2petssaw@@@@!3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana,mano") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.ma.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f,oe!em,noaan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Was12zZ2@@@@!j3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wsaAeNA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@j@@!j3jd3!@@@2Zz21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("T12zZ2Panama21aco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeman,Step") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ncanalfoem,an,a,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Steman,p12zZ2pets@@@@@!3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foemaaIn,SPanasee.ma.p") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanPana,Pao") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("s?a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Ablba.PA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("joOngeesecacnal,ifO") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2a21erel") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("fofoemaIn,StepeIaem,noan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("staTaTco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!Able") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lieeve.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeem,nor") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeman,Smtep") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Go") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ncanoalfoem,an,,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pa.na.ma..") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("T12zZ2Panama21acoDoe") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2Panama21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("sa??") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.ma.oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("sa???") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.ma.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("liaa.ma..") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome(",PanaPanasee.ma.tsma") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("egeeese") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("o") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZas2@@j@@!j3jd3!@@@2Zz21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2a21ereel") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("R") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("stTco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("fofoeSmaIn,StepeIaem,noan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@j@@!j3jd3!@z@@2Zz2lieveA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ@2@@3@@!j3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("eNO") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12a3") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanamanPaAo") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("manm.,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@@@!@3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ssa???") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("nm.,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("hLSbYVmk") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Kyy") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("122zPaaaPana2mael") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wswaww") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("fIoem,an,I") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Ablbba.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("KyDo") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZas2@@j@@!j3jd3z21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("geeeGse") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("scatPaa???") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.mPa.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zzZ2@@j@@!j3jd3!@@@2Zz21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aPana,mZ2@@Aorcatgees,Panplan,Elbaa.ama12zZ2it@@2Az21,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PAno") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canal12zZ2@") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("manm.,wwas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pnl,an,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.maa.a") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canal12zZ2@@Aor2catgees,Panplan,Elbaa.ama12zZ2it@@2Az21,Kyy") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foem,anm,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lieveA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("d3d!@@@2Zz2!1") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome(",aPanA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panaanama.ma.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canal,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("nama21ets@@@@!3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Elbaa.j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foemaIn,SjoOngeesefOPanasee.ma.p") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("manmcacnal,i.,wwas") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("A.") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2a211") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("saw?1on2@zZ2@@@@!3jj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Aogrcatgees,Panamae") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("man,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pets") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("ws12zZ2@@j@@!j3jd3!@@@2Zz21waww") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("KyDo12zZ2@@@@!2j3jd3!@@@2Zz21") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foemaPanPana,manoamanon,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("S2tep12z12zPaaPanamaZ2@@@2eviljZ3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Aorcatgees,PafoemaIn,SjoOngeesefOPanasee.ma.pnamae") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12@zZ12zZ2@@@@!23j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wswawwere") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("saw?e") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZas2@@j@@!j3jd3!@@@2fIoem,an,I") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("sa????") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f,oe122zPaaPanamael!em,naoaan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("HijEVmHHx") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("fem,an,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foetm,acaton,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("fIoemalieveAn,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("EYk") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@j@@!j312zZas2@@j@@!j3jd3!@@@2Zz21jd3!@z@@2Zz2lieveA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("122zPaaaPannwswawwAa2mael") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("fofoeSmaIn,SteIaem,noan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("RR") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.mao.oeman,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2Panama212@@@@!@3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2Pzanama212@@@@!@3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome(",PanaPanasee.ma.ts") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wsawwww") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("HjiEjEHVmHHx") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("egrykPqA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Pana.ma.on,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("fIoeman,s") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("w?e12zZ2@@j@@!j3jd3!@@@2Zz21Go1aco") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Elba.j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pnnl,an,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wswawwerecar") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("KyDoDoe") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("aas12zZ2@@3@@!jfoeman,3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panasee.ma.ts") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@3@@!j33Able") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wsaAeNT12zZ2Panama2T12zZ2Panama21acoDoe") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("PanPan,Pao") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foaem,an,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wwswaww") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("scatPaa??") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("liaa.ma..fIoeman,2Step12zZ2pjets@@@@!3jI") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("O") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeIemwsaAeNA,noan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("OQdpFdbUIt") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("f,oe!em,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("catPa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foeIemwsaAmanm.,wwaseNA,fIoeman,I") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("wsaAeNAa") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zZ2@@3@@!j3312zZ2@@j@@!j3jd3!@@@2Zz212@@@@lieveAAble") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("cccat") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome(",aPa,nA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("lliKyyeveA") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Panaccat.ma..") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("T12zZ2PaDoe") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("canal12zZ2@@Aorcatgees,PanPana.ma..1Goamae@@!2j3jd3!A@@@2Zz21,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("namZ2pets@@@@!3jI") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("KyD") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("petsPanamaean.,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("feofoeSmaIn,StepeIaem,noan,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("S2tep12@zZ12zZ2@@@@!23j12z12zPaaPanamaZ2@@@2eviljZ3j") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("?sa???") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("g") == true)){ tests_passed++; } total_tests++;

    if((is_palindrome("12zPaaPanamaZ2@P@@evilj") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome(",Pannasee.ma.tsma") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("foemaIn,SPanaseme.ma.p") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("pnl,an,canal12zZ2@@Aorcatgees,PanPana.ma..1Goamae@@!2j3jd3!A@@@2Zz21,") == false)){ tests_passed++; } total_tests++;

    if((is_palindrome("Aorcatgees,PafoemaIn,S12zZ@2@@3@@!j3jjoOngeesefOPanasee.ma.pnamae") == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


