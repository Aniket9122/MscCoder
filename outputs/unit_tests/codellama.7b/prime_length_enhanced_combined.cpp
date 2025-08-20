#include <iostream>
#include <string>

using namespace std;

bool isPrime(const string& str) {
    // Check if the input string is empty
    if (str.empty()) {
        return false;
    }

    int length = str.size();
    bool is_prime = true;
    for (int i = 2; i * i <= length; ++i) {
        // If the length is not divisible by i, it is not a prime number
        if (length % i != 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
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

    if((prime_length("Hello") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdcba") == true)){ tests_passed++; } total_tests++;

    if((prime_length("kittens") == true)){ tests_passed++; } total_tests++;

    if((prime_length("orange") == false)){ tests_passed++; } total_tests++;

    if((prime_length("wow") == true)){ tests_passed++; } total_tests++;

    if((prime_length("world") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MadaM") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wow") == true)){ tests_passed++; } total_tests++;

    if((prime_length("") == false)){ tests_passed++; } total_tests++;

    if((prime_length("HI") == true)){ tests_passed++; } total_tests++;

    if((prime_length("go") == true)){ tests_passed++; } total_tests++;

    if((prime_length("gogo") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Madam") == true)){ tests_passed++; } total_tests++;

    if((prime_length("M") == false)){ tests_passed++; } total_tests++;

    if((prime_length("0") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Hello") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdcba") == true)){ tests_passed++; } total_tests++;

    if((prime_length("kittens") == true)){ tests_passed++; } total_tests++;

    if((prime_length("orange") == false)){ tests_passed++; } total_tests++;

    if((prime_length("wow") == true)){ tests_passed++; } total_tests++;

    if((prime_length("world") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MadaM") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wow") == true)){ tests_passed++; } total_tests++;

    if((prime_length("") == false)){ tests_passed++; } total_tests++;

    if((prime_length("HI") == true)){ tests_passed++; } total_tests++;

    if((prime_length("go") == true)){ tests_passed++; } total_tests++;

    if((prime_length("gogo") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Madam") == true)){ tests_passed++; } total_tests++;

    if((prime_length("M") == false)){ tests_passed++; } total_tests++;

    if((prime_length("0") == false)){ tests_passed++; } total_tests++;

    if((prime_length("a") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ab") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abc") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcd") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcde") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdef") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefgh") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefghi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zyxwvutsrqponmlkjihgfedcba") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcddefghi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefabcddefghi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeabcabcdefgfabcddefghi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefghiab") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeabcabcdeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zyxwvutsrqponmledcba") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcde") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefga") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcddefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeabcddefgfg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdabcdefgadefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabcdeabcddefgaabcbcdefg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("zyxwvutsrqponwmlkjihgfedcba") == false)){ tests_passed++; } total_tests++;

    if((prime_length("phZ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabcdeabcddefgaabcbabcdefghiabefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabcdeabcddefgaeabcbcdefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdabcdabcdefgadefggade") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcabcdddefghi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ababcdefga") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abacdabcdefgadefg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abacdabcdefgeadefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ababcdabcdegabcdefgeadefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Z") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefzyxwvutsrqponmledcbaabcddefghi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabdcdeabcddefgaabcbabcdefghiabefg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcddbefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("acde") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pZ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdabcdabcdefgadefggabcdefabcddefghiadababcdefgae") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pabacdabcdefgadefgZ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("LgdoOsvabcdeabcabcdeabc") == true)){ tests_passed++; } total_tests++;

    if((prime_length("zyxwvupZtsrqponmlkihgfedcba") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdabcdefgadefga") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeaebcddefgfg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdgdefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefgaabcbcdehiab") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeaebcddefabacdabcdefgeadefggfg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdaabcdgdefgbcdefgadefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcddbefabcdefghig") == false)){ tests_passed++; } total_tests++;

    if((prime_length("azyxwvupZtsrqponmlkihgfedcbadeabcddefgfg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeabcdefgag") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pabcdZ") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LgdoOsvabcdeaabcdeaebcddefabacdabcdefgeadefggfgbcabcdeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabcabcddbefgdeabcddefgaeabcbcdefg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dcabcde") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdeaebcddefabacdabcdefgeadefggfgabcddefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcdefgbcdefga") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LfgdoOsvabcdeaabcdeaebcddefabacdabcdefgeadefggfgbcabcdeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("zyxwvutsrqpzyxwvutsrqponwmlkjihgfedcbaonmlkjihgfedcba") == true)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabdcdeabcddefgaabcbabcdefghiabef") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zyxwvutskrqponmlkjihgfedcba") == false)){ tests_passed++; } total_tests++;

    if((prime_length("azyxwvupZtsrqponmlkihgfedcbadeababcdefcddmefegafg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zyxwvutskraqpognmlkjihgfedcba") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefgaaabcdeaebcddefabacdabcdefgeadefggfgabcddefgbcbcdehiab") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abacd") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdabcdefgadefgaZZ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("LfgdoOsvabcdeaabcdeaebcddefzyxwvutskrqponmlkjihgfedcbaabacdabcdefgeadefggfgbcabcdeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dcabacdee") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabcdeabcddefgaabcbabcdefghiabeafg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abacdaadefg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ababcdeabcddefgfgcdefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LaabcbcdeabdcdeabcddefgaabcbabcdefghiabefggdoOsvabcdeabcabcdObeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabcdeabcddefgaabcg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcd") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abccdeabcdef") == false)){ tests_passed++; } total_tests++;

    if((prime_length("apabacdabcdefgadefgZbcdefzyxwvutsrqponmledcbaabcddefgfhi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dcazyxwvupZtsrqponmlkihgfedcbadeababcdefcddmefegafgabcde") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabdcdeabcddefgaabgcbabcdefghiabefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pabacdabfgZ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefgaabcbcdehiabb") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abZabcdabcdegabcdefgeeadefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcdeabcabcdefgfabcddefghibacd") == true)){ tests_passed++; } total_tests++;

    if((prime_length("LfgdoOsvabcdeaabcdeaebcddefzyxwvutskrqponmlkjiLgdoOsvabcdeabcabcdeabchgfedcbaabacdabcdefgeadefggfgbcabcdeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ababcdefa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LfgdoOsvaababcdeabcddefgfgcdefgbcdeaabcdeaebcddefabacdabcdefgeadefggfgbcabcdeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abacdpZ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("pabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LfgdoOsvaababcdeabcdddefgfgcdefgbcdeaabcdeaebcddefabacdabcdefgeadefggfgbcabcdeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abZabcdabcdegabcdaefgeeadefg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LfgdoOsvabcdeazyxwvutsrqponmledcbaabcdeaebcddefzyxwvutskrqponmlkjiLgdoOsvabcdeabcabcdeabchgfedcbaabacdabcdefgeadfgbcabeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aabcbcdeabcdeLgdoOsvabcdeaabcdeaebcddefabacdabcdefgeadefggfgbcabcdeaefg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("LaabcbcdeabdcadeabcddefgaabcbabcdefghiabefggdoOsvabcdeabcabcdObeabc") == true)){ tests_passed++; } total_tests++;

    if((prime_length("p") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abacabLfgdoOsvabcdeazyxwvutsrqponmledcbaabcdeaebcddefzyxwvutskrqponmlkjiLgdoOsvabcdeabcabcdeabchgfedcbaabacdabcdefgeadfgbcabeabccdaabcdgdefgbcdefgadefgd") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcabcdeaebcddefabacdabcdefgeadefggfgabcddefgdeabcdefgag") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LaabcbcdeabdcdeabcddefgaabcbabcdefghiabefggdoOsvabcddefgabcdeabcabcdObeabc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentarianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylophonist") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjmnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzoooooooooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("McVjrwEyLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("haas") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentarilanism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentarilaniism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWxjmnzis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidiThesestablishmentarilanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("fox") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentarilaWxjmnznism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylophoxnist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzooooooooooooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dog.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIoaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("The") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentariWxjmnzanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisesatablishmentarianism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTjpDfmvNaRlsKOThisiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWxjWxjmnzmnzis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablantWxjmnzidisestablishmentarilaWxjmnznismm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("brown") == true)){ tests_passed++; } total_tests++;

    if((prime_length("abrownntidisestablishmentarianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNhaRlKOiVbnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpssoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidiThesestablishmentThisthatarilanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjmnzover") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjmnzoveThis") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnnZIoaethe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("the") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xyloophonist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jumps") == true)){ tests_passed++; } total_tests++;

    if((prime_length("over") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aMcVjrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestsablishmentariWxjmnzanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("TMsYJFEtsgcehuqTjpDfmvNaRlsKOThisiVbnZIoahe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("x") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjmnWz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lahaszy") == true)){ tests_passed++; } total_tests++;

    if((prime_length("brownover") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzooooooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xylnist") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dD") == true)){ tests_passed++; } total_tests++;

    if((prime_length("TThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("brownovelengthr") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xyloophonixst") == true)){ tests_passed++; } total_tests++;

    if((prime_length("prime.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPdog.xBantidisestablishmentarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.the") == true)){ tests_passed++; } total_tests++;

    if((prime_length("eth") == true)){ tests_passed++; } total_tests++;

    if((prime_length("McVjrwEyLttf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydMcVjrwEyLtfogThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ss") == true)){ tests_passed++; } total_tests++;

    if((prime_length("inot") == false)){ tests_passed++; } total_tests++;

    if((prime_length("notThisthat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjjmnzover") == true)){ tests_passed++; } total_tests++;

    if((prime_length("judogis") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThWThisthaaatxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("he") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("PzzzoooooooThistohat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antaidisestablishmexylnistlanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wzxjmnz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisesatablishmentarianissm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIoaetheisestablishmentarilanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dlahaszyog.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjmnzovthe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WdzxdDjmnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("C") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatablishmentasrianism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("laha") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylnisnt") == false)){ tests_passed++; } total_tests++;

    if((prime_length("broWdzxdDjmnznover") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoantidisesatablishmentarianismverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisexstablishmentarilaWxjmnznism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentsarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogTxylophoxnisthequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjjmnzoveThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentsarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa.r") == false)){ tests_passed++; } total_tests++;

    if((prime_length("qulengthickp") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Thisthat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xytlophonist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.xBLWjpDfmvNaRlKOiVbnZIoaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("TMsYJFEtsgcehuqTjpDfmvNaRlsKOThisiVbnZIoahedog.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WiuR") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wzzxjmnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("oinotPzzzoooooooooooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dog.thenotThisthat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidiseantidisestablishmentarilaWxjmnznismstablishmentarilaWxjmnznism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("TheThiss") == false)){ tests_passed++; } total_tests++;

    if((prime_length("sentence") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnoaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Thisthaaat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatabalishmentasrianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("cqO") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WdzxdmDjmnz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("sis") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisesatablishimentarianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xyloophTnhisthatonist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("etheThWxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWxjmnzThe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjmnzoquickver") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xyloophTnhisthatoantidisestablishmentariWMsYJFEtsgcehuqTkrPThenist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatablishmentbasrianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisexssm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthejlazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefghijklmnopqrsvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWThThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazydogThmequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogisthaaatxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("brownoTnhisthat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentsarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmbnZIoa.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzooodlahaszyog.ooooooooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("afMcVjrwEyLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaxylophoexnistriame.RlKOiVbnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatablishmentism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablantWxjmnzidisestablishmentarilaWxjmnzmm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentariWMsYJFEtsgcehuqTkrPThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aMc") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogsthaat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abruownoc") == false)){ tests_passed++; } total_tests++;

    if((prime_length("bThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogTxylophoxnisthequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogrown") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.WxjxmnzoveThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehueqTjpDfmvNaRlsKOThisiVbnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("priamet.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("that") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatablishmenxtbasrianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("do.g.tTnhisthathe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("TMsYJFEtsgcehuqTjpDfmvprime.gisNaRlVbnZIoahe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIlishmentarilanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgbrownovercehuqTkrPxBLWjpDfmvNaRlKOiVbnoaethe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ethemnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("notThistlahaszyhat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("oinotPzzzooooooooooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatablishmentasriantism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MethemnzThesYJFEtsgcehueqTjpDfmvNaRlsKOThisiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWxjWxjmnzmnzi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoantidisesatablishmentarianmverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjyumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdoprime.g.xBantidisestablishmentsarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lahaszhy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xophoxnist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("TheThiThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogsthaatss") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydthelazydog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WddzxdmDjmnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("bMethemnzThesYJFEtsgcehueqTjpDfmvNaRlsKOThisiVbnZIoarownover") == false)){ tests_passed++; } total_tests++;

    if((prime_length("eMsYJFEtsgcehuqsTkrPThe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("inont") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MethemnzTheWiuRsYJFEtsgcehueqITjpDfmvNaRlsKOThisiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidiThesestabhlishmentarilanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgbrownoverKcehuqTkrPxBLWjpDfmvNaRlKOiVbnoaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jumpsThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidiasexstablishmentarilaWxjmnznism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("TMsYJFEtsgcehuqTjpDfmvprime.gisNaRlhVbnZIoahe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("anstablishmentarilaWxjmnznism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("doge.xBLWjpDfmvNaRlKOiVbnZIoaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tnhat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("haasqulengantidMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIlishmentarilanismbrownover") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.xBantidisTMsYJFEtsgcehuqTjpDfmvNaRlsKOThisiVbnZIoaheestablishmentarilaniismLWjpDfmvNaRlKOiVbnZIoaethexjmnzanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ethem") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentsarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoWa.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("judog.ijsMcVjrwEyLttf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoantidisesatablishmentarianmverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjyumpsovogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("W") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.KOiVbnZIoa.h") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYpriamet.JFEtsgbrownovercehuqTkrPxBLWjpDfmvNaRliVbnoaethe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("afMcVjrwMEyLtThisf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hahs") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthejlazyduogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.WxjmonzoveThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrlPxBLWjpDfmvNaxylophoexnistriame.RlKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("TTThe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Thiqulengthickpsthaat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("anstablishmentarizlaWxjmnznism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("quick") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antsexssm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("qulengthicThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogkp") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisesatatblishmentarianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lahayszy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFExtsgcehuqTkrlPxBLWjpDfmvNaxylophoexnistriame.RlKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("mfox") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iiV") == true)){ tests_passed++; } total_tests++;

    if((prime_length("priame.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("PzzzoTheooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("sjumpmjs") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ZqZEoJNg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoantidisesatablishmentarianmverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjyumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentsarRlKOiVgbnZIoaethexBLThWxjmnzTheog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("oover") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThWxjTWzmnzi") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aMclaha") == true)){ tests_passed++; } total_tests++;

    if((prime_length("etheThWxThequickbrownfoxjumpsoantidisesatablishmentarianismverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("anot") == false)){ tests_passed++; } total_tests++;

    if((prime_length("fThis") == true)){ tests_passed++; } total_tests++;

    if((prime_length("jumpsbjThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("shThiMsYJFEtsgcehuqTkrPThehhatriame.as") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WjumpsiuR") == false)){ tests_passed++; } total_tests++;

    if((prime_length("haass") == true)){ tests_passed++; } total_tests++;

    if((prime_length("TMsYJFEtsgcehuqTjpDfmvNaRlsKOThisiVbnZIoahedoxyloophTnhisthatonistg.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa.WxjmnWz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatablishmThiMsYJFThWxjmnzThesarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa.sm") == true)){ tests_passed++; } total_tests++;

    if((prime_length("DfmvNaRlKOiVbnoaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WWxjmnz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("qMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnnZIoaetheuick") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wzzxxjmndog.thez") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jumpss") == false)){ tests_passed++; } total_tests++;

    if((prime_length("is") == true)){ tests_passed++; } total_tests++;

    if((prime_length("qu") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xyabruownoclnist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqfmvNhaRlKiVbnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("rWxjmnzoquickver") == false)){ tests_passed++; } total_tests++;

    if((prime_length("afMcdog.xBLWjpDfmvNaRlKOiVbnZIoaethThisthatVjrwMEyLtThisf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesatablishmenxtbasriantidisesatatblishmentaribMethemnzThesYJFEtsgcehueqTjpDfmvNaRlsKOThisiVbnZIoarownoveranismanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylophoxnistriame.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tnhatnsis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iYQt") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisesatablishmentsarianissm") == true)){ tests_passed++; } total_tests++;

    if((prime_length("TheantidisestablishmentariWxjmnzanism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("not") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xyliophoxnist") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dog.xBLWjpDfmvNaRlafMcVjrwMEyLtThisfKOiVbnZIoaethThisthat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("wVzoldzAUk") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogTyhequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogsthaat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WjumpsiulazxylolazxylophonistxonisctR") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dog.xBantidisTMsYJFEtsgcehuqTjpDfmvNaRlsKOThisiVbnZIoaheestablishmentarilaniismLWjpDfmvNaRlKOiVbnZIoasethexjmnzanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prdog.e.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.gis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgbrPzzzoooooooThistohatownoverKcehuqTkrPxBLWjpDfmvNaRlKOiVbnoaethe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antaidisestablishmsexylnistlanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hahasiedisesatabalisnhmentasrianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("cMdrLDSD") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ethee") == true)){ tests_passed++; } total_tests++;

    if((prime_length("thThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydthelazydoge") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidiThesestablishThWxjWxjmnzmnzimentarilanism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lengtThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentsarRlKOiVgbnZIoaethexBLThWxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("notMsYJFEtsgcehuqTkrPThehatame.as") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iiThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxTnhisthatV") == false)){ tests_passed++; } total_tests++;

    if((prime_length("McVjrwEyLtLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("TheThiThiThequickbrownfoxjumpsovnerthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogsthaatss") == false)){ tests_passed++; } total_tests++;

    if((prime_length("judMsYJFEtsgcehuqTkrPxBLWjpDfmvNhaRlKOiVbnZIoaog.ismnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("eMsYJFEtsgcehuqsTkrPrThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ZqZEJoJNg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("cO") == true)){ tests_passed++; } total_tests++;

    if((prime_length("b") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisexessm") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WxjmnzovePzzzooooooorgy") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesataxylnisntblishmentasrianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmhaassentsarRlKOiVgbnZIoaethexBLThWxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("priame.as") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antheYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIlishmentarilanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("qulengthicThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxZqZEJoJNgjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogkp") == false)){ tests_passed++; } total_tests++;

    if((prime_length("fThislahaszhy") == true)){ tests_passed++; } total_tests++;

    if((prime_length("prpiamet.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("qulengthicThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazyydogThequickbrownfoxZqZEJoJNgjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogkp") == false)){ tests_passed++; } total_tests++;

    if((prime_length("bruown") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pinotriame.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("iiThiThequickbrownfoxjumpsoverthelazydogThequtheickbroiwnfoxjumpsoverthelazydogThequickbrownfoxTnhisthatV") == false)){ tests_passed++; } total_tests++;

    if((prime_length("bruowwn") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lengtThiMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentsarRlKOiVgbnZIoaethexBLThWxjmnzmpsThe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lahaantidisesatablishmentarianismszy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("nohtThistWxjmnzoquiczkverat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WzxjThWThisthaaatxjmnzhThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("qMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbantiedisesatablishmentismnnZIoaThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxTnhisthathetheuick") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lengtThiMsYJFEtsgcehuqTdog.thenotThisthatkrPdog.xBantidisestablishmentsarRlKOiVgbnZIoaethexBLThWxjmnzmpsThe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("notThistat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pjumpsThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxTnhisthat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThWThThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazydogThmequickbrownfoxjumpsoverthelaxylophoxnistzydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogisthaaatxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MetheCmnzTheWiuRsYJFEtsgcehueqITjpDfmvNaRlsKOThisiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antsexantidisestablishmentariWMsYJFEtsgcehuqTkrPThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiedisesataxylnisntblishnmentasrianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWThThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazydogThmequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogisthaaantidMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIlishmentarilanismatxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("shThiMsYtriame.as") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wjudog.isttfddjzxdmDjmnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("eD") == true)){ tests_passed++; } total_tests++;

    if((prime_length("judog.ismnThisthatiz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthejlazydthelazydog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("oinotPzzzoooooooooooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xyloophonixtst") == false)){ tests_passed++; } total_tests++;

    if((prime_length("brownov") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xylWoophTnuhisthatoantidisestablishmentariWMsYJFEtsgcehuqTkrPThenist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("eethee") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentarThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.gisooooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lahaszyThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpssthelazydogog.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("broWdzxdDojmnznover") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Tnhisthat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hahhs") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ehaasstPzzzooooooorghe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("stnhatnsis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("overg.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.xBLWWWxjmnzjpDfmvNaRlafMcVjrwMEyLtThisfKOiVbnZIoaethThisthat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("qMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnnZIoaetiszick") == false)){ tests_passed++; } total_tests++;

    if((prime_length("notMsYJFEtsgcehuqTkrPThehatriame.ars") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiantidisestablantWxjmnzidisestablishmentarilaWxjmnzmmlishmentasrianism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("notprime.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjjmnzoveThiMsYJFEtsgcehuqTkrPdog.xBantidisestablrishmentsarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa.r") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iQt") == true)){ tests_passed++; } total_tests++;

    if((prime_length("zbrown") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThistThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthejlazydthelazydoghaat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("bThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogTxylophoxnisthequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovertlazydogrown") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidiarilaWxjmnznism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickberownfoxjuMsYJFEtsgcehuqTkrPxBLWjpDfmvNhaRlKOiVbnZIoampsoverthelazydogThequickbrownfoxjumpsovertuhelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("rWxjmWnzoquickveabcdefghijklmnopqrTher") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickberownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbqrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestiablishmentarianism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("bbruow") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzoooooooozooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjmrnzover") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentarilaniiThiqulengthickpsthaatsm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidiThesestablishThhWxjWxjmnzmnzimentarilanism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("oinotPzzzoooThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogsthaatooooooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jeumps") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xophobxruowwnxnist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoThequickbrownfoxjumpsoverthelazydogThequickberownfoxjuMsYJFEtsgcehuqTkrPxBLWjpDfmvNhaRlKOiVbnZIoampsoverthelazydogThequickbrownfoxjumpsovertuhelazydogThequickbrownfoxjumpsoverthelazydogThWxjmnzisThequickbrownfoxjumpsoverthelazydogxjumpsoverthelazydogTyhequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogsthaat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.xBantidisTMsYJFEtsgcehuqTjpDfmvNaRlsKOThisiqMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnnZIoaetheuickVbnZIoaheestablishmentarilaniismLWjpDfmvNaRlKOiVbnZIoaethexjmnzanismssm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("TheMsYJFEtsgcehuqTkrPdog.xBantidisestablishmentarilaniismLWjpDfmvNaRlKOiVbnZIoaethexBLWjpDfmvNhaRlKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("JFEtsgcehueqTkrPxBLjumpsThemnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWThistnotMsYJFEtsgcehuqTkrPThehatriame.arshaaatxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dogcqO...") == false)){ tests_passed++; } total_tests++;

    if((prime_length("qMsYJFEtsgcehuqTkrPxdBLWjpDfmvNaRlKOiVbantiedisesatablishmentismnnZIoaThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxThiThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxumpsoverthelazydogsthaatoverthelazydogThequickbrownfoxTnhisthathetheuick") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hahdlahaszyog.s") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pridoPzzzooooooorgg.e.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tethee") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThiMsYJFEtsgcehuqTkrPdbbruowog.xBantidisestablishmhaassentsarRlKOiVgbnZIoaethexBLThWxjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("sjumpmujs") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWxmjmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("quickp") == false)){ tests_passed++; } total_tests++;

    if((prime_length("senantiedisesatablishmentasriantismtence") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ethemnzThee") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MethemnzThesYJFEtsgcehueqTjpiYQtDfmvNaRlsKOThisiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antMsYJFEtsgcehuqTjpDfmvNaRlsKOThisiVbnZIoalaWxjmnznism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThWThisthaaatxjquickpmnzThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Thisthaatbbruow") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prpiamet.bbru") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ethehe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("TMsYJFEtsgcehuqTjpDfmvprime.gisooooooorgNaRlsKOThisiVbnZIoahe") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ZYVgqdEwhw") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WMetheCmnzTheWiuRsYJFEtsgcehueqKITjpDfmvNaRlsKOThisiVbnZIoadzxdmDjmnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("judog.ismnz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("bThequickbrownfoxjumpsoverthelazydogThequtheickbrownfoxjumpsoverthelazynotThisthatdogThequickbrownfoxjumpsoverthelazydogTxylophoxnisthequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovertlazydogrown") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lazxylolazxylophonistxonisct") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wjudog.isttfddjzxdmDjnz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("zbn") == true)){ tests_passed++; } total_tests++;

    if((prime_length("A") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abccba") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abb") == true)){ tests_passed++; } total_tests++;

    if((prime_length("aaaa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("g") == false)){ tests_passed++; } total_tests++;

    if((prime_length("y") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ma") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hii") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("has") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lazy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjthatmnz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYbnZItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefghijklmnoThis") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xyloph") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylopist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("length") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKbOiVbnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("i") == false)){ tests_passed++; } total_tests++;

    if((prime_length("thaat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hiiMcVjrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxylophe.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjthatmnfoxcz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcidefghijklmnoThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlengthnZItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzooooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("primxylophe.hii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjtz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKbOiVbnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xyloppist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqrstusvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lenegth") == true)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pxqrstusvwxyz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("jumpms") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogsentence") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzgooooaorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablibrownshmentariansm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("PzzzooThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogsentenceooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjfrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ii") == true)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pxqristusvwxxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("EDSdy") == true)){ tests_passed++; } total_tests++;

    if((prime_length("akbcdefghijklmnoThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("senteThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogsentencence") == true)){ tests_passed++; } total_tests++;

    if((prime_length("htiMiMcVjfrwEyLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("sentetntce") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZWItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgocehuqTkrPxBLWjpDfmvNaRlKOiVbnZItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgMsYibnZItheoacehuqTkrPxBLWjpDfmvNaRlKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pxsentenceqrsrtusvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqrstusvwxxyloppistyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.has") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xylopiPzzzooooorgst") == true)){ tests_passed++; } total_tests++;

    if((prime_length("aATAWpJ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentariani") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxyleneglthlophe.hii") == true)){ tests_passed++; } total_tests++;

    if((prime_length("McVjrwEyLtrxiiylopiPzzzooooorgstf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmeintariani") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylopistTAWpJ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThequicknbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjthatmn") == false)){ tests_passed++; } total_tests++;

    if((prime_length("uAyC") == false)){ tests_passed++; } total_tests++;

    if((prime_length("doglenegth.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtcsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZWItheoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("laz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("iii") == true)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtsgcehuqTkrPxBLWprime.pxqrstusvwxyzjpDfmvNaRlKbOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iiPzzzooooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqrstusvwxxyloppis.tyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("sWxjtzentence") == true)){ tests_passed++; } total_tests++;

    if((prime_length("akbcddog.establishmeintarianiefghijklmnoThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgMsYibnZItheoacehuqTkrPxBLWjpDfmvNaRldog.hasKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFErtsgcehuqTkrPxBWxjthatmnfoxczLlengthnZItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lenegabcdefghijklmnoThisth") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lenegabcdefghhijklmnoThisth") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlengthnZIktheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxyleneglthlophe.hiiThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MtsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlengthnZIktheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dogg.has") == false)){ tests_passed++; } total_tests++;

    if((prime_length("adog.has") == false)){ tests_passed++; } total_tests++;

    if((prime_length("oTHZAfye") == false)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKbOiVbnZIdog.establishmeintarianioa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Wxjthatmnfoxcoz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtcsgcehuqTkrPhiiMcVjrwEyLtfItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqyrstusvwxxyloppistyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVebnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("primxylopyhe.hii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lenegabcdefghhiprime.pqyrstusvwxxyloppistyzjklmnoThisth") == false)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKbOiVbnZIdog.establishmeintarianioaWxjthatmn") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcides") == true)){ tests_passed++; } total_tests++;

    if((prime_length("pprime.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjfrwEyLhtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("quickantidisestablishmeintariani") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pprimep.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequicknmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgMsYibnZItheoaceThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydoghuqTkrPxBLWjpDfmvNaRldoeg.hasKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iiPzzxylopistTAWpJzooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wxz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xyloppit") == false)){ tests_passed++; } total_tests++;

    if((prime_length("htiMiMcVjfrwEyLtMsYJFEtsgMsYibnZItheoacehuqTkrPxBLWjpDfmvNaRldog.hasKOiVbnZIoaf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hthat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WlenegabcdefghhiphiMiMcVjrwEyLtfrime.pqyrstusvwxxyloppistyzjklmnoThisthxjthatmn") == true)){ tests_passed++; } total_tests++;

    if((prime_length("iimimpms") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pre.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiiMiMcxjrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjhiMiMcVjrwEyLtfthatmnfoxcz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("primeprime.ckbrownfoxjumpsoverthelazydogThesoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogMcVjrwEyLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("McVjMcVjrwEyLtrxiiylopiPzzzooooorgstfyLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlantidiserstablibrownshmentariansmhnZItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrP") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequicknbrownfoxjumpsovquickbrownfoxjumpsovertheabcdefghijklmnoThislazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ppmep.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaLRlKbOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjWthatmnfoxcoz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tahaaMsYJFEtsgcehuqTkrPxBprime.pxqristusvwxxyz.pxqrstusvwxyzjpDfmvNaRlKbOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zylazy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("McVjrwEyLtrxiiylopiPzzzooooorgstfaATAWpJ") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefgstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jumpm") == true)){ tests_passed++; } total_tests++;

    if((prime_length("jumThequicknmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogpms") == false)){ tests_passed++; } total_tests++;

    if((prime_length("akbcddog.estabis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxyleneglthlophe.hiiThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbbrownfoxjumpsoverthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.prqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("uAy") == true)){ tests_passed++; } total_tests++;

    if((prime_length("primxylopilengthhe.hMcVjrwEyLtVrxiiylopiPzzzooooorgstfii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.haprime.prqrstuvwxyzs") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIthenoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zylaz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("oer") == true)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqrstusvwxxylfooppis.tyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("do") == true)){ tests_passed++; } total_tests++;

    if((prime_length("PbrownThezzzooooorg") == true)){ tests_passed++; } total_tests++;

    if((prime_length("primxylopye.hii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdiades") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pr.ime.y") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pxqristusvwxxyxz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tabcdefgstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aWxjthatzmnfoxcoz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("secntence") == false)){ tests_passed++; } total_tests++;

    if((prime_length("quic.has") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primerstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("OvZqZ") == true)){ tests_passed++; } total_tests++;

    if((prime_length("aWxjthatzmnfakbcddog.estabisoxcoz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("brownTWxjthatmnfox") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequikbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsFgcehuqTkrPxBWxjthatmnfoxczLlengthnZIktheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequiThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("PzzzoooooooooohtiMiMcVjfrwEyLtfoorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdefghijklmnyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xyl") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLthenoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zyl") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WxjthatmThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogsentencenfoxcoz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("sclengthee") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylophonidog.hasst") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishbmentarianism") == true)){ tests_passed++; } total_tests++;

    if((prime_length("McVjMcVjrwEyLtrxiorgstfyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("McVjrwEyLtrxiiylopiPzzfoxczooooyorgstfgst") == true)){ tests_passed++; } total_tests++;

    if((prime_length("McVjrwEyLtprime.ckbrownfoxjumakbcddog.establishmeintarianiefghijklmnoThisrthelazydogMcVjrwEyLtfrxiiylopiPzzfoxczooooyorgstfgst") == false)){ tests_passed++; } total_tests++;

    if((prime_length("thatat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lenegabcdefghhijklmnoThisthoer") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjrwEhyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylophonidog.hss") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tprimxylopye.hiiat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tPbrownThezzzooooorghat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("tc") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hthaMsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlantidiserstablibrownshmentariansmhnZItheoat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xylophonidog.PzzzooThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogsentenceooorghasst") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqrstusvwxyzz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("htiMiMcVjfrwEyLtMsYJFEtsgMsYibnZItheoacehuqTkrPxWxjtzBLWjpDfmvNaRldog.hasKOiVbnZIoaf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlsecThetheoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dog.establishmeintariani") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZIoaylophonist") == true)){ tests_passed++; } total_tests++;

    if((prime_length("adog.MsYJFEtsgcehuqTkrPxBLWjpDfmvNaLRlKbOiVbnZIoahas") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iiPzzzoooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("XpZp") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequiprimxylopilengthhe.hMcVjrwEyLtVrxiiylopiPzzzooooorgstfiickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZWItheoaii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pxqristusvwxxyxzdo") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ttprimxylopye.hiiatahaaMsYJFEtsgcehuqTkrPxBprime.pxqristusvwxxyz.pxqrstusvwxyzjpDfmvNaRlKbOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hhtiMiMcVjfrwEyLtMsYJFprime.ckbrownfoxjumpsoverthelazydogThesoverthelazydogThetquickbrownfoxjumpsoverthelazydogThequicksoverthelazydogerthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogsentenceEtsgMsYibnZItheoacehuqTkrPxBLWjpDfmvNaRldog.hasKOiVbnZIoafthat") == false)){ tests_passed++; } total_tests++;

    if((prime_length("layzy") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WxjaWthatmnfoxcoz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lenegabcdefghijklmnoThtisth") == false)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKbTOiVbnZIdog.establishmeintarianioa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZWItheoaiithaat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("tabcdefgspre.tuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pprithaaMsYJFEtsgcehuqTkrPxBLWprime.pxqrstusvwxyzjpDfmvNaRlKbOiVbnZIoaep.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("primeprime.ckjbrownfoxjumpsoverthelazydogThesoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogMcVjrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pprithaaMsYJFEtsgcehuqTkrPxBLWprime.pxqrstubsvwxyzjpDfmvNaRlKbOiVbnZIoaep.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primerstuvwxyzMcVjrwEyLtrxiiylopiPzzzooooorgstfaATAWpJ") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxquickantidisestablishameintarianiBLWjpDfmvoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjprime.pxsentenceqrsrtusvwxyzrwEyLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hhhahs") == false)){ tests_passed++; } total_tests++;

    if((prime_length("fo") == true)){ tests_passed++; } total_tests++;

    if((prime_length("aWxjthatzmnfakbcddogestabisoxcoz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("PzzzooThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoprime.pqrstusvwxxyloppis.tyzverthelazydogsentenceooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prex.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("brownTWxjthatmnfoxcozhquickantidisThee") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Lftf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pqrsyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iWlenegabcdefghhiphiMiMcVjrwEyLtfrime.pqyrstusvwxxyloppistyzjklmnoThisthxjthatmn") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxylopilenhgthhe.hMcVjrwEyLtVrxiiylopiPzzzooooorgstfii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDMsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlantidiserstabliansmhnZItheoafmvNaRlKOiVbnZWItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOieVbnZIoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("snecntence") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdprime.ogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpoverhelazydogThequicksoverthelazydogiades") == false)){ tests_passed++; } total_tests++;

    if((prime_length("McVjMcVjrwEyLtrxiorgstfyhtiMiMcVjfrwEyLtfLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("adog.hprime.ckbrownfoxjumpsoverthelazydogThesoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogMcVjrwEyLtfas") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbroThewnfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjWthatmnfoxcooz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("dog.haprime.prqrstruvwxyzs") == false)){ tests_passed++; } total_tests++;

    if((prime_length("dog.hquickantidisestablishmeintarianias") == false)){ tests_passed++; } total_tests++;

    if((prime_length("noxyloppistt") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pprilenegabcdefghhiprime.pqyrstusvwxxyloppistyzjklmnoThisthme.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("sclengtheee") == true)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtWsgcehuqTkrPxBLWjpDfmvNaRlKbOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pprime.pxqristusvwxxyxzdo") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xDs") == true)){ tests_passed++; } total_tests++;

    if((prime_length("layz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lxyl") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxylopilenhgthhe.hMcVjrwEyLtoVrxiiylopiPzzzooooorgstfii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.ckbrownfoxjumpsoverthelhazydogThesoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogMcVjrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("senteThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumptencence") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xMsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlengthnZItheoaWxz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("YyvSyCRswC") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prilength.ime.y") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpssnecntenceoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pxqrprime.pqrstusvwxxylfooppis.tyzistusvwxxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiadisestablibrownshmentariansm") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjfrhWxjthatmnwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiiii") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xylophonThisist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjthaabcdefghijklmnoThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("brownThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovThequickbrownfoxjumpsjumThequicknmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogpmsoverthelazydogThequiThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("uAuy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequiprimxylopilengthhe.hMcVjrwEyLtVrxiiylopiPzzzoooockbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzgoooabcdefgstuvwxyzoaorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Wxj") == true)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzoabcdefgstuvwxyzoaorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjMrEwEyLtf") == true)){ tests_passed++; } total_tests++;

    if((prime_length("s") == false)){ tests_passed++; } total_tests++;

    if((prime_length("htiMipr.ime.yMcVjfrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("doglehnegth.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Lftff") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgMsYibnZItheoacehuqTksrPxBLWjpDfmvNaRldog.hasKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdiadesxylophonidog.PzzzooThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogsentenceooorghasst") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jbumps") == false)){ tests_passed++; } total_tests++;

    if((prime_length("h") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lazybrownThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxylopyhhii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcmvNaRlKOiVebnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzozzooooorg") == false)){ tests_passed++; } total_tests++;

    if((prime_length("aWxjthatzmnfakbcfoxddogestabisoxcoz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("z") == false)){ tests_passed++; } total_tests++;

    if((prime_length("htiMiMcVjfrwEyjumpLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgMsYibnZIthseoacehuqTksrPxBLWjpDfmvNaRldog.hasKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("nKfW") == false)){ tests_passed++; } total_tests++;

    if((prime_length("quickantidisThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xMsYJFEtsgcehuqTkrPxBLWjpDflenegabcdefjumpghhijklmnoThisthItheoayloppit") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKOiVbnZWItheoWlenegabcdefghhiphiMiMcVjrwEyLtfrime.pqyrstusvwxxyloppistyzjklmnoThisthxjthatmnthaath") == true)){ tests_passed++; } total_tests++;

    if((prime_length("jusclengtheemp") == false)){ tests_passed++; } total_tests++;

    if((prime_length("zylalz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hthaMsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlantidiserstablibrownshmentariansmhnZItheoaxDst") == false)){ tests_passed++; } total_tests++;

    if((prime_length("nKfMsYJFEtcsgcehuqTkrPhiiMcVjrwEyLtfIthoeoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThequicknmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjuakbcddog.estabismpsoverthelazydogThequicksoverthelazydog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lzaz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("sclengthdog.hasee") == true)){ tests_passed++; } total_tests++;

    if((prime_length("nKfMsYJFEtcsgcehuqTkrPhiiMcVjrwEyLtfIthoeoah") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjabcidesfrwEyLhtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThhequiThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xylophoonidog.hasst") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ck") == true)){ tests_passed++; } total_tests++;

    if((prime_length("pprime.pxqrdistusvwxxyxzdo") == false)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtsgcehuqTkrPhiMiMcVjfrhWxjthatmnwEyLtfxBLWjpDfmvNaRlKbOiVbnZIdogO.establistabcdefgspre.tuvwxyzhmeintarianioa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxyleneglthlophe.hiiThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbbrownfoxjumpsoverthetheolazydogThequicksoverthelazydog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("senteoThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumptencence") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjprime.pxsentenceqrsrtusvwtxyzrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jumThequicknprime.ogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpoverhelazydogThequicksoverthelazydogmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogpms") == false)){ tests_passed++; } total_tests++;

    if((prime_length("quTickantidisThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("brownThelenegabcdefgabcdprime.ogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpoverhelazydogThequicksoverthelazydogiadeshhiprime.pqyrstusvwxxyloppistyzjklmnoThisth") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tthatat") == true)){ tests_passed++; } total_tests++;

    if((prime_length("iWlenegabcdefghhiphiMiMcVjrwEyLtfrime.pqyrstusvwxxyloppistyzjklmnoThisthxjthatMsYJFEtsgcehuqTkrPxBWxjthatmnfoxczLlengthnZIktheoamn") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumptabcdefgstuvwxyzsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequiprimxylopilengthhe.hMcVjrwEyLtVrxiiylopiPzzzoooockbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("jumThequicknprime.ogThequickbrownfoxjumpsoverthelazydsogThequickbrownfoxjumpoverhelazydogThequicksoverthelazydogmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogpms") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThequicknmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequiclkbrownfoxjumpsoverthelazydogThequickbrownfoxjuakbcddog.estabismpsoverthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pprithaaMsYJFEtsgcehuqTkrPxBLWprime.ppxqrstusvwxyzjpDfmvNaRlKbpOiVbnZIoaep.") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hiMiMcVjprime.pxsentenceqrsrpprime.pxqrdisotusvwxyzrwEyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("jumThequicknpxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydogpms") == false)){ tests_passed++; } total_tests++;

    if((prime_length("layzyprime.pqrsyz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("secntencEDSdye") == false)){ tests_passed++; } total_tests++;

    if((prime_length("antiidisestablishbmentarianism") == false)){ tests_passed++; } total_tests++;

    if((prime_length("prime.pxqrprime.pqrstusvwxxyxyz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("broownThe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("thaaMsYJFEtWsgcehuqTkrPxBLWjpDfmvNaRlKbOieVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("hhhahss") == true)){ tests_passed++; } total_tests++;

    if((prime_length("lzylazyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pwrime.pxqrprime.pqrstusvwxxylfooppis.tyzistusvwxxyz") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequicknmbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogiThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Thhe") == false)){ tests_passed++; } total_tests++;

    if((prime_length("quic.hasprimxylopyhhii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lenghtiMiMcVjfrwEyjumpLtfth") == false)){ tests_passed++; } total_tests++;

    if((prime_length("abcdprime.ogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpoverhelazydogThequicksoverthelazydogThequickbrownfoxjumpsovergthelazydogThequiThisiades") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLWjpDfmvNaRltabcdefgspre.tuvwxyzKOiVbnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("LgwtgX") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lzyly") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WxjthaabcdeijklmnoThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("EDdy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("alz") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xylophoMsYJFErtsgcehuqTkrPxBWxjthatmnfoxczLlengthnZItheoanidog.hss") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xyThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydoglophonThisist") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lzPzzhiizgoooabcdefgstuvwxyzoaorgy") == false)){ tests_passed++; } total_tests++;

    if((prime_length("Pzzzoooooooooooorog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("McVjMcVjrwEyLtLrxiorgstfyLtf") == false)){ tests_passed++; } total_tests++;

    if((prime_length("iimimprimxylophe.hiipms") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WxjthaMsYJFEtsgMsYibnZItheoaceThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydoghuqTkrPxBLWjpDfmvNaRldoeg.hasKOiVbnZIoaabcdeijklmnoThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjmnzWxj") == false)){ tests_passed++; } total_tests++;

    if((prime_length("lazzy") == true)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumpsoverthelazydogThequickbrownfoxthaaMsYJFEtsgcehuqTkrPxBLWjpDfmvNaRlKbOiVbnZIdog.establishmeintarianioaWxjthatmnjumpsoverthelazydojgThequiprimxylopilengthhe.hMcVjrwEyLtVrxiiylopiPzzzoooockbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydog") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcehuqTkrPxBLthLenThequickbrownfoxjumpsoverthelazydogThequiThisoa") == true)){ tests_passed++; } total_tests++;

    if((prime_length("xyloit") == false)){ tests_passed++; } total_tests++;

    if((prime_length("MsWxjthaabcdefghijklmnoThisYJFEtcsgcehuqTkrPhiiMcVjrwEyLtfItheoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ThequickbrownfoxjumoptabcdefgstuvwxyzsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequiprimxylopilengthhe.hMcVjrwEyLtVrxiiylopiPzzzoooockbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydog") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ovhas") == true)){ tests_passed++; } total_tests++;

    if((prime_length("WxjthaMsYJFEtsgMsYibnZItheoaceThequickbrownfoxjumpsovertMsYJFEtsgMsYibnZItheoaceThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydojgThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydoghuqTkrPxBLWjpDfmvNaRldoeg.hasKOiVbnZIoahelazydogThequickbrownfoxjumpsoverthelazydojgThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovyerthelazydogThequicksoverthelazydoghuqTkrPxBLWjpDfmvNaRldoeg.hasKOiVbnZIoaabcdeijklmnoThis") == false)){ tests_passed++; } total_tests++;

    if((prime_length("WxjthaMsYJFEtsgMsYibnZItheoaceThequickbrownfoxjumpsoverthelazydogThequovyerthelazydogThequicksoverthelazydoghuqTkrPxBLWjpDfmvNaRldoeg.hasKOiVbnZIoaabcdeijklmnoThis") == true)){ tests_passed++; } total_tests++;

    if((prime_length("antidisestablishmentasriani") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxyrlophe.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("hithaaMsYJFEtWsgcehuqTkrPxBLWjpDfmvNaprime.pqrstusvwxxyloppistyzRlKbOiVbnZIoaiii") == false)){ tests_passed++; } total_tests++;

    if((prime_length("tthata") == false)){ tests_passed++; } total_tests++;

    if((prime_length("xyzzoooabcidefghijklmnoThisoorgst") == false)){ tests_passed++; } total_tests++;

    if((prime_length("pr.i.y") == false)){ tests_passed++; } total_tests++;

    if((prime_length("ppmpep.") == true)){ tests_passed++; } total_tests++;

    if((prime_length("MsYJFEtsgcmvNaRlKxylopistOiVebnZIoa") == false)){ tests_passed++; } total_tests++;

    if((prime_length("primxyThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsoverthelazydogThequickbrownfoxjumpsovThequickbrownfoxjumpsoverthelazydogThequiThislopyii") == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


