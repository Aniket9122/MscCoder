#include<iostream>
#include<string>
using namespace std;

int how_many_times(string str, string sub){
    int count = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str.substr(i, sub.length()) == sub) { 
            ++count;
            // If you want to overlap counting just reduce the next line's substr length by one
            i += sub.length() - 1;  
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

    if((how_many_times("", "x") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("xyxyxyx", "x") == 4)){ tests_passed++; } total_tests++;

     if((how_many_times("cacacacac", "cac") == 4)){ tests_passed++; } total_tests++;

    if((how_many_times("john doe", "john") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("", "x") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("xyxyxyx", "x") == 4)){ tests_passed++; } total_tests++;

    if((how_many_times("cacacacac", "cac") == 4)){ tests_passed++; } total_tests++;

    if((how_many_times("ababa", "aba") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefg", "efg") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abababab", "aba") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaabbbbcccc", "bb") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("12211221122", "122") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("racecar", "car") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("mississippi", "ss") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickbrownfox", "fox") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("fizzbuzz", "zz") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaabbbbccccc", "bb") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("bbb", "bb") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("zz", "bbb") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("122", "zz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "bb") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("misracecarsissippi", "ss") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abababab", "fox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("e", "e") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickbrownfox", "thequickbrownfox") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "thequickbrownfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fizzbuzz", "fizzbuzz") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("122", "12mississippi2") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaacarabbbbcccc", "efg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ababa", "ababa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("fizzbuzz", "fizzzbuzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("12mississippi2", "efg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thebquickbrownfox", "thequickbrownfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaacarabbbbcccc", "aaacabrabbbbcccc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("zz", "ababao") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickbrrownfox", "thequickbrrownfox") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaabbbbcccc", "thequickbrownfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fiuzzbuzz", "efg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "bssb") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("zz", "zz") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("bbaaaabbbcbcccc", "bssb") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fiuzzbuzz", "aaaabbbbccccc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ababathequickbrownfox", "abaaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("efgg", "12mtheqabaabaaoouickbrrownfoxississippi2") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "mississippababao") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fizzbuzz", "fizzzbbbzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sss", "sfizzzbbbzzss") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccar", "rccar") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("efg", "abaabaabcdefg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbaaaabbbcbccc", "bbb") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("fizzbuz", "zzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaabbbcbcccc", "aaaaabbbcbcccc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("eg", "egccarfiuzzbuzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("12211221122", "1222") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("efg", "efg") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ss", "ssfizzzbbbzzsss") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("zz", "zzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("s1222bssbs", "s1222bssbbs") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sfizabaabazbbbzzss", "sfizabaabazbbbzzsabcdefg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ezzbuzz", "essfizzzbbbzzssszzbuzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("zz", "zmississippababaoz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("mississiezzbuzzpi", "ss") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("eg", "eg") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abababab", "ab") == 4)){ tests_passed++; } total_tests++;

    if((how_many_times("efgbbaaaabbbcbcccc", "efgbbaaababbbcbcccc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aba", "aba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ef12mtheqabaabaaoouickbrrownfoxississippi2g", "effg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ezzbuzz", "efg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cgareg", "careg122") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("122bbaaaabbbcbcccc11221122", "1221122112aaaabbbcbcccc2") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fiuababathequickbrownfoxzzbuzz", "fiuizzbuzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("zzz", "z") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("fizzbuzz", "effg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caregsfizabaabazbbbzzss122", "cggareg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fiuzzbuzz", "egfg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("12mtheqabaabaaoouickbrrownfoxississippi2", "efgg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("zz", "zzzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("efg", "effizzbuzzfg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("efg", "egfg") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("zef12mtheqabaabaaoouickbrrownfoxississippi2gz", "zz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickbrownfox", "thequickbrownracecarfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "thequickbrownracecarfoxbbb") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fiessfizzzbbbzzssszzbuzzuababathequickbrownfoxzzbuzz", "fiuizzbuzz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("therbquickbrownfox", "thequickbrownfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbaaaabbbcbccc", "oo") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaa", "aaa") == 5)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabc", "abc") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaaaaa", "ba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("banana", "ana") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "cac") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", "of") == 7)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayapineapple", "ap") == 5)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAA") == 44)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.", "ap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrownaaaa", "aaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times(".dogfox.", "dogfox.") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ba", "aaaaadogfox.aa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickraceacarapenapapayapineapple", "quickracecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "ap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("the", "the") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaabrownaaaaaaaaaa", "ba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abc", "abc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfox", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sit", "sit") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("gg.", "dog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cac", "cac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quickraceacarapenapapayapineapple", "quickraceacarapenapapayapineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("amlazyet,", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "cacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times(".dogfox.", "quickcfoxk") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxcacccccac", "quicfoxcacccccac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrownaaaa", "over") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccaac", "cac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "quickraceacarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "foipsuconsecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAA", "abc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "tAAAAAAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ataaaaaaaabaaaabrownaaaaaaaaaa", "thequickracecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAA", "elit.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("baccac", "cacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccccacc", "cacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccaac", "quickraecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbe", "ccccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amet,", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "ataaaaaaaabaaaabrownaaaaaaaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbbbtheaelitaaaaofabbbbtheaaaa.abrownaahe", "taaaaofabbbbtheaelit.abrownaahe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ap", "of") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicaccfox", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickraceacarapenapapayapineapple", "eapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrownaaaa", "aaabrownaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaadogfox.aa", "ccccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "consectetur") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("over", "over") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times(".dogfox", "dogfdox.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabc", "quickraceacarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "foipsumx") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaabrownaaaaaaaaaa", "aaaaaaaabaaaabrownaaaaaaaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ipsum", "ipsum") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "consecur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "cacccccaac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaathequickracecarapenapapayapineapplerownaaaaaaaaaa", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("b", "b") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("sit", "foipsuconsecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaAAAAAaaaaaabaaaabrownaaaaaaaaaa", "ba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsecteturmx", "foipsuconsecteturmx") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("eapple", "ap") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "AAAAAAA") == 44)){ tests_passed++; } total_tests++;

    if((how_many_times("c", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amlazyet,", "amlazyet,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "quickraceacarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "cacbaaaaofabbbbtheaelit.aaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaaaaa", "jumps") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccccacc", "ccccacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxcaccccccac", "quicfoxcacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxsityzabc", "abc") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "bba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAA", "AAAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("banana", ".dogfox.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicaccfox", "quicaccfox") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxsvityzabct", "abcdefghijklmnopqrstuvwxsityzabct") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "abcdefghijklmnopqrstuvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAA", "ipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "caac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbb", "bbbb") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "quickraceacarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "abcdefghijklmnopqrstuvwxsvityzabct") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabbaaabbbbaaaa", "aaaaabbaaAAAAAaaaaaabaaaabrownaaccccaccaaabbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("laz", "lazy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caac", "cacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsequickcfoxkurmx", "AAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bana", "thequickracecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ipoversum", "aaaaadogfox.aa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsequickcfoxkurmx", "foipsuconsecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "amt,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaadogfLoremox.aa", "ccccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxcacccccacc", "quicfoxcacccccacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickracecarapenapapayapineapple", "aaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("over", "aaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("b", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("eapple", ".dogfox.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consecur", "aaAAAAAaaaaaabaaaabrownaaaaaaaAaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickraceacarapenapapayapineapple", "eaAAApple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bba", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaathequickracecarapenapapayapineapplerownaaaaaaaaaa", "bbaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aap", "ap") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxsityzabc", "The") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amlazyet,", "amlazyety,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccccacc", "cacac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("banaipsum", "thequickracecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccaccccccac", "caccccccac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("bana", "cquicfoxkacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ovlazycacccccacipsumer", "over") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "aaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaadogfox.aa", "aaaaadogfox.aa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "abcdefghijklmnopqovlazycacccccacipsumerrstuvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbaccac", "cacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ataaaaaaaabaaaabrownaaaaaaaaaa", "aaabrownaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacbaaaaofabbbbtheaelit.aaaa", "cacccccacipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofofaaabrownaaaa", "oof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amlazyety,", "amlazyety,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbbbtheaelit.aaahbThee", "taaaaofabbbbtheaelit.aaahe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amet,", "AAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("over", "dog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaAAAAAaaaaaabaaLorem", "quicfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oveamt,", "dog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "cacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAbanaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "quickraceacarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ovlazycacccccacipsumer", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacbaaaaofabbbbtheaelit.aaaa", "aap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.", "dog.") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaamt,", "amt,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacbaaaaofabbbbtheaelit.aaaa", "cacbaaaaofabbbbtheaelit.aaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "AAAAAAA") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("bb", "sit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAadipiscingAAAAAAAAAAAAAAAAAAAAAAAABhe", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("qLoremuicaccfox", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbe", "celit.acccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("baccac", "ccacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaamt,", "cacccccacamt,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "cacccccac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("caac", "caac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ap", "quick") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicaccfox", "aa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickracecarapenapapayaquicfoxcacccccaccpineapple", "thequickracecaraaaapenapapayaquicfoxcacccccaccpineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dogovlazycacccccacipstAAAAAAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABheumer.", "over") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabc", "oever") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times(".dogfox.", "quicfoxcacccccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAA", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("banana", "bbaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofofaaabroaaAAAAAaaaaaabaaaabrownaaaaaaaaaaaaaa", "oof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "The") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAA", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.a", "epjs") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ipoccccaccversum", "aaaaadogfox.aa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aap", "cacbaaaaofabbbbtheaelibLoremaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amt,", "sit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times(".dogfox", "dogfox.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cac", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbbbtheaelit.aaahbThee", "quickraceacarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "AAAAAA") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.a", "foipsuconsequickcfoxquicfoxcaccccccackurmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cquicfoxkacc", "quick") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAA", "AAAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAA", "bbelit.a") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaa", "aaaaabbbbaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("fofoothequickracecarapenapapayapineapplefoofof", "of") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxcacccccac", "cacccccac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cac", "cafoipsuconsecteturmxc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "abcdefghijklmnopqrstuvwxsvityzabct") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("the", "AAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "aaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ba", "ba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccaac", "cacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quicaccfox", "elit.a") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bba", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "consuecur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccccacc", "fofofofofofofof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dogovlazycacccccacipstAAAAAAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABheumer.", "fofofofofofofofaaabroaaAAAAAaaaaaabaaaabrownaaaaaaaaaaaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("etaaaaofabbe", "taaaaofabbe") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("anab", "ana") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("boverb", "sit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ovlazycacccccer", "over") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fobccacx", "aaAAAAAaaaaaabaaaabrownaaaaaaaAaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("gg.", "dodg.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickcfoxk", "qLoremuicaccfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Thconsecteture", "The") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bba", "aaaaathequickracecarapenapapayapineapplerownaaaaaaaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAA", "ap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxacccccac", "quicfoxcacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrownaaaaa", "over") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaAAAAAaaaaaabaaaabrownaaaaaaaaaa", "foataaLorem") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cccacc", "cccquicfoxcacccccaccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caccccc", "cacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "aap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cafkoipsuconsequickcfoxkurmxcac", "cafoipsuconsequickcfoxkurmxcac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickcfoxk", "quickcfoxk") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaamt,", "aaaamt,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dodg.", "abc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abc", "ab") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaababbbaaaa", "aaa") == 5)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxsityzabc", "abcdefghijklmnopqrstuvwxsityzabc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrownaaaaa", "aaabrownaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", "AAAAAAAthequickracecaraaaapenapapayaquicfoxcacccccaccpineappleAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("eliot.", "ap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cccacc", "ccaccccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaabrownaaaa", "aaabrownaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quuicaccfox", "elit.a") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickraceacarapenapapayapineapplee", "quickraceacarapenapapayapineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cac", "cacccccaac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("brothequickraAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABcarapenapapayaquicfoxcacccccaccpineapplewwn", "brothequickracecarapenapapayaquicfoxcacccccaccpineapplewwn") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("gg", "brownfoipsuconsequickcfoxquicfoxcaccccccackurmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amet,", "aemet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caacc", "caac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("brothequickraAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAelit.aaaaaabaaaabrownaaaaaaaaaaipsuconsecteturmxAAAAAAAAAAAAAAAABcarapenapapayaquicfoxcacccccaccpineapplewwn", "brothequickraAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABcarapenapapayaquicfoxcacccccaccpineapplewwn") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("o.dogffox", "aaaaofabbbbtheaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsecteturmx", "faaaaaaaabaaaaaaaoiconsecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "eaAAApple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.he", "consuecur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayapineapple", "quickcfoxk") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dodg.", "b") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbc", "cacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.aconsecur", "bbbbquicfoxcacccccacap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("brown", "brown") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAAAABhe", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsecteturmx", "faaaaaaaabaaaaoiconsecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickracecaraaaapenapapayaquicfoxcacccccaccpineapple", "quickracecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAhAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("of", "brown") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fmoipsumx", "foipsumx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.aconsecur", "ab") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccc", "caac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amt,", "aaabrownaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAdolorAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAadipiscingAAAAAAAAAAAAAAAAAAAAAAAABhe", "tAAAAAAAAAAAAAAAAAAAAAAAAAAadipiscingAAAAAAAAAAAAAAAAAAAAAAAABhe") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quickraceacarapeabcnapapayapineapple", "eapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAABhe", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAABhe") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccacccac", "cacc") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("baditamet,piscinga", "quicaccfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("etaaaaofabbe", "etaaaaofaeapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ipsu", "cacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.aconsecur", "elit.aconsecur") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "cfofoothequickracecarapenapapayapineapplefoofofacccccaac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccaccccccac", "ccaccccccac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsecamlazyety,teturmx", "foipsuconsecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaabrownaaaa", "brown") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.aaaaaaaa", "quicfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oveamt,", "aemet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsecteturtmx", "foipsuconsecteturtmx") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times(".cafoipsuconsecteturmxcdogfox.", ".dogfox.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaa", "aaaaabbbbaaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("gg.", "Thconsecteture") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaAAAAAaaaaaabaaaabrownaaaaaaaAaaa", "cacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbbbtheaelitaaaaofabbbbtheaaaa.abrownaahe", "taaaaofabbbcfofoothequickracecaracaaccpenapapayapineapbbaccacplefoofofacccccaacbtheaelit.abrownaahe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bannana", "banana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccc", "cacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.r", "cquicfoxkacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ba", "abcdefghijklmnopqrstuvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccacipsum", "cacccccacipsum") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("sist", "sist") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cafoipsuconsequickcfoxkurmxcac", "cafoipsuconsequickcfoxkurmxcac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("laz", "cacccccacipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caccccccaac", "cacccccaac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ovvr", "ovver") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsucAAAAAx", "foipsuconsecteturtmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsuconsecteturmx", "aquicaccfoxsit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbbbquicfoxcacccccacap", "bbbbquicfoxcacccccacap") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("bbb", "oever") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("taaabbaaabbbbaaaahe", "the") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("browwn", "brown") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Lorem", "banana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("acaac", "caac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ataaaaaaaabaaaabrownaaaaaaaaaa", "thequickracelcarapenapapayapineappl") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxdolor", "The") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccaccccccac", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ipsu", "sit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caac", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("baccac", "baccac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("caaaabrownaaaaac", "ccccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("faaaaaaaabasecteturmx", "faaaaaaaabasecteturmx") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.aaaaaofabbbbtheaaaa", "epjs") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("browwn", "browwn") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "thequickracecaraaaapenapapayaquicfoxcacccccaccpineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayapineapple", "racecarapenapapaeyapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amet,", "aemaditamet,piscing") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caccccccacac", "cacccccacac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickcfoxk", "quic") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbaaAAAAAaaaaaabaaaabrownaaccccaccaaabbaaaa", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccabbbccccccac", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("brothequirckracecarapenapapayaquicconsetcteturfoxcacccccaccpineapplewwn", "brothequickracecarapenapapayaquicfoxcacccaaaaofabbbbtheaelit.aaaccaccpineapplewwn") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAA", "sist") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dol", "a") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaamt,", "racecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofoothequickracecarapenapapayapineapplefoofof", "abcdefghijklmnopqrstuvwxsvityzabct") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.a", "cacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaAAAAAaaaaaabaaaabrownaaaaaaaaaaa", "quicfoxamlazyet,k") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccacccac", "banana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsruconsecteturmquicfoxcaccccccacx", "foipsuconsecteturmquicfoxcaccccccacx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.aaaaaaa", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dogfdox.", "quickraceacarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.", "gdog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("qLoremuicaccfox", "of") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Lor", "Lorem") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrowanaaaa", "aaabrowanaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("caccccaaataaLoremc", "caccccaaataaLoremc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ccafkoipsuconsequickcfoxkurmxcac", "ccafkoipsuconsequickcfoxkurmxcac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("banana", "g.dogfox.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AquicfoxAAAAA", "cafkoipsuconsequickcfoxkurmxcac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccc", "aaaaofabbbbtheaelit.aaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("faaaaaaaabaaaaoiconsecteturmx", "foipsucoonsecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("adipiscingcor", "taaaaofabbbbtheaelitaaaaofabbbbtheaaaa.abrownaahe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quiickraecarapenapapayapineapple", "quickraecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cccquicfoxcacccccaccacc", "b") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("banna", "anna") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cactAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAhAAAAAAAAAAAAAABheccc", "cactAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAhAAAAAAAAAAAAAABheccc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("vvr", "vvr") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbbbtheaelit.aaahbThee", "tAAAAAAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrowanaaaa", "aaaabrowanaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ovver", "sit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaaa", "aaaaabbbbaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("thequickracelcarapenapapayapineappl", "the") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("", "adipiscilang") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAapAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "c") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofoothequickracecarapenapapayapineapplefoofof", "abcdeuvwxsvityzabct") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consecttetur", "The") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofoothequickracecarapenapapayapineapplefoofof", "oabcdefghijklmnopqrstuvwxsvityzabctf") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("b", "bbbb") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("amet,", "aemaditametn,piscing") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aemet,", "aemet,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dooveamt,dg.", "dodg.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("etaaaaaofabbe", "etaaaaofabbe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcc", "abcc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("bananna", "bananna") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("faaaaaaaabasecteturmx", "aaabrowanaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quickraceacarapenapapayapineapple", "quickraceacarapenapapayapineappple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("taaaaofabbbbtheaelitaaaaofabbbbtheaaaa.abrownaahe", "taaaaofabbbbtheaelitaaaaofabbbbtheaaaa.abrownaahe") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaoaaabbThefabbbbtheaelit.aaa", "cacccccc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabbaaabbbbaaaa", "browwn") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ipsum", "quicbbbbquicfoxcacccccacapk") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "quickraceacarapenapapayapineapelit.t.psumple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaa", "aacaccccccacacaaabbbbaaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quuicaccfox", "faaaaaaaabasecteturmx") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabc", "quicfoxcacccccacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcc", "elit.aconsecur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("browwn", "etaaaaaofabbe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dogetaaaaofaeapplee.cac", "dog.cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dolor", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("laz", "laz") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("banaipsum", "acaadog.rc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thte", "the") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caacc", "abcdefghijklmnopqovlazycacccccacipsumerrstuvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AA", "AA") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("caaaabrownaaaaac", "aaaaathequickracecarapenapapayapineapplerownaaaaaaaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cquicfoxkacc", "dog.r") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("banaana", "banaacaccccccacacaaabbbbaaaaaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caaaabrownaaaaaac", "aaaaathequickracecarapenapapayapineapplerownaaaaaaaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fobccacx", "taaaaobfabbbbtheaelit.aaahe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caccccc", "AA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("acaagdog.rc", "acaadog.quickraceacarapeabcnapapayapineapplerc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbbb", "bbbb") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.aaaaaofabbbbtheaaaa", "ovvr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("adiamet,piscing", "bannana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccaac", "caac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "cacccccacipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("eielit.psumfabbe", "etaaaaofaeapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapernapapayapineapple", "racecarapernapapayapineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAquicfoxAAAAAeAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABhe", "aaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("a", "AAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbelit.a", "acaadog.rc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bba", "quicfox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times(".cafoipsuconfobbaccacxsecteturmxcdogfox.", ".cafoipsuconsecteturmxcdogfox.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccabcdefghijklmnopqovlazycacccccacipsumerrstuvwxyzabcccacc", "fofofofofofofof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("browbwn", "browwn") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaamt,", "bbc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("banaana", "aaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbbbb", "bbbb") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("banaipsum", "banaipsum") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dogovlazycaccccAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABheumer.", "dogovlazycacccccacipstAAAAAAquicfoxAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABheumer.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcc", "aabcc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anab", "adiamet,pistcing") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccaac", "cacccccaac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("caacccccac", "caacccccac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABcacccccaac", "caac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxcacccccac", "racecarapenapapaeyapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaAAAAAaaaaaabaaaabrownaaaaaaaaaa", "quickcfoxk") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foipsumx", "dodg.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofofaaabroaaAAAAAaaaaaabaaaabrownaaaaaaaaaaaaaa", "fofofofofofofofaaabroaaAAAAAaaaaaabaaaabrownaaaaaaaaaaaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaAAAAAaaaaaabaaLorem", "daog.a") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("vvr", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("celit.aaaaaaacabcdefghijklmnopqovlazycacccccacipsumerrshtuvwxyzabcccacc", "dgog.cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("laz", "cccaacacccccacipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.", "Lor") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("gg.", "dogg.dg.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bbaba", "bbaba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaabrquicbbbbquicfoxcacccccacapkaquicaccfoxsitowanaaaa", "aaabrowanaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicfoxcacccccacc", "taaabbaaabbbbaaaahe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccabThe", "ab") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbaaAAAAfoipsuconsequickcfoxkurmxAaaaaaabaaaabrownaaccccaccaaabbaaaa", "aaaaabbaaAAAAAaaaaaabaaaabrownaaccccaccaaabbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqovlazycacccccacipsumerrstuvwxyzabc", "abcdefghijklmnopqovlazycacccccacipsumerrstuvwxyzabc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqovlazycacccccacipsumerrstuvkwxyzabc", "abcdefghijklmnopqovlazycacccccacipsumerrstuvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quicacthequickracecarapenapapayapineapplecfox", "quicaccaaaaaaaabaaaabrownaaaaaaaaaafox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cccaacacccccacipsum", "etaaaaofaeapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consuecurAquicfoxAAAAA", "consuecur") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaelit.aaaaaaaaabaaaabrownaaaaaaaaaa", "aaaaaaaabaaaabrownaaaaaaaaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("of", "ccaac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.aconsbbbbecu", "elit.aconsecu") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("g.dogfox.", "aaaabofabbbbtheaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAABheaaaaabbaaAAAAAaaaaaabaaaabrownaaccccaccaaabbaaaa", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAABhe") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAABheaaaaabbaaAAAAAaaaaaabaaaabrownaaccccaccaaabbaaaa", "acaagdog.rc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ab", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cafoipsuconsequickcfoxkurmxcac", "consuecur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAABheaaaaabbaaAAAAAaaaaaabaaaabrownaaccccaccaaabbaaaa", "taaaaofabbbbtheaelitaaaaofabbbbtheaaaa.abrownaahe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapcaaabbaaaa", "tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAquickracecarapenapapayapineappleAAAAAABheaaaaabbaaAAAAAaaaaaabaaaabrownaaccccaccaaabbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("celit.aaaaaaacabcdefghijklmnopqovlazycacccccacipsumerrshtuvwxyzabcccacc", "dgog.cacc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abaccac", "ccacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("theequickracecarapenapapayaquicfoxcacccccaccpineapple", "theequickracecarapenapapayaquicfoxcacccccaccpineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("", "xyz") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("apple", "pineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("12$34$56", "$") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("x", "x") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("x", "y") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("hellohello", "hello") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaa", "aa") == 5)){ tests_passed++; } total_tests++;

    if((how_many_times("abcabcabc", "abcabc") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayapineapple", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaap", "ana") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.", "abcdefghijklmnopqrstuvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarrapenapapayapineapple", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aAAAAAAAna", "racecaracecarrapenapapayapineapplerrapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaaaaa", "jumpsba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ipsum", "the") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayapineapple", "appp") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAaaaaaaaabaaaaaaaAAA", "AAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anabanana", "ana") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("anracecarapenapapayapineapplea", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("of", "fofofofofofofof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineapple", "ap") == 5)){ tests_passed++; } total_tests++;

    if((how_many_times("ipsum", "sit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "racecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAA") == 43)){ tests_passed++; } total_tests++;

    if((how_many_times("ba", "basit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ap", "ap") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "racecaracecarrapenapapayapineapplerrapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("of", "of") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("ana", "anaap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaba", "anabanana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consecteturr", "consectetur") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamet,", "foxamet,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("anracecarapenapapayapineapplea", "an") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAA", "racecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarrapenapapayapineapple", "racecarrapenapapayapineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaa", "aaa") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaaaaa", "jfoxumpsba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecaAAAAAAArapenapapayapineapple", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Lorem", "aAAAAaaaaaaaabaaaaaaaAAAaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oof", "of") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("anracecarapenapapayapineapplea", "lazzy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", "lazy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxaet,", "quick") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteturet,", "foxamet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabc", "abcdefghijklmnopqrstuvwxyzabc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("anaap", "aaaaaaaabaaaaaaaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayapineapple", "na") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenanpapayapineapple", "foxaet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "consecteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaa", "of") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaap", "anaap") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("Lorem", "ipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consecrteturr", "consecteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ba", "of") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("The", "ap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ajumpsaaa", "jumps") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabcipsum", "ipsum") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaaaaa", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("na", "racecaracecarrapenapapayapineapapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ba", "an") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abasitna", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abasitna", "racecaraquAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABrpenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("obrownf", "anabanana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ajumpsaaa", "racecaracecarrapenapapayapineapapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenanpapayapineapeple", "foxfaet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", "dog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabcipsum", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racepcaAAAAAAArapenapapayapineapplee", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("The", "dog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayapineapple", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("appp", "apppp") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineapple", "racecarapenaapapayapineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("abasitna", "ba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("of", "aaaaabbbbaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("appp", "appp") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "appp") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAaaaaaaaabaaaaaaaAAA", "racepcaAAAAAAArapenapapayapineapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racepcaAAAAAAArapenapaadipiscingpayapineapplee", "aaaaaaaabaaaaaaaaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("cacc", "cacc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.", "abcdefghijklmnopqrappppstuvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("the", "lazy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ajumpsaaa", "anaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAaaaafoxamconsecteturet,aaaabaaaaaaaAAA", "Aelit.AAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteturet,", "p") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("na", "sit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("appppconsAelit.AAAAAAectetur", "consecteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consecteturr", "consecteturr") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("na", "anaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenanpapayapineapple", "foxfaet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ba", "babcdefghijklmnopqrstuvwxyzabcsit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", "dolorof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oof", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("appp", "app") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "foxaet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxfaect,consecteturr", "appppconsAelit.AAAAAAectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aAAAAAAAna", "aAAAAAAAnaracecarapenaapapayapineappale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oof", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Aelit.AAAAAAA", "Aelit.AAAAAA") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAA", "AAAAAAA") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaa", "e") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzaaAAAAAAAnabcipsum", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteturet,", "pp") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbafofofofofofofofaaa", "aaaaabbbbafofofofofofofofaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaaaaa", "appp") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("jumpsba", "AAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbba", "aaa") == 3)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.", "jumpsba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineappale", "racecarapenaapapayapineappale") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("consecteturr", "racecarapenaapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxaomconsecteturet,", "foxamconsecteturet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("pcacp", "AAAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", "racecaAAAAAAArapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaracecarapenanpapayapineapeplea", "aaaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Lorem", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aanaap", "aaaaaaaabaaaaaaaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAanaba", "AAAAAAAanaba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.", "foxamconsecteturet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quAAAAAAAAA", "quAAAAAAAAA") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("elit.", "basit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetuabcdefghijklmnopqrappppstuvwxyzabcrr", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("babcdefghijklmnopqrstuvwxyzabcsit", "consecuteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapapayeapineapple", "ba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxaet,", "foxaet,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("cacccccac", "consecteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("baa", "ba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("anaaa", "anaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineappale", "an") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaap", "apfoox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("app", "apppp") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quick", "quicik") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sbasit", "an") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("nna", "racecaraquAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABrpenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaaaLorem", "anaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("conse", "coonse") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineappale", "racecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamet,", "fxoxamet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("apppp", "appp") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("basit", "apppp") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oxaet,", "foxaet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("e", "conse") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAA", "quicik") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sbasit", "anaap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAA", "AAAAAAAA") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("fooff", "foof") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("basit", "basit") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("na", "anaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sit", "na") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineappapfooxale", "racecarapenaapapayapineappale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Aelit.AAAAAA", "racecaracecarrapenapapayapineapplerrapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineappapfooxale", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABr", "aaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("The", "ddog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteturetp,", "foxaomconsecteturet,p") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaba", "anaba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("over", "racecarapenaapapayapineappale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aThazynaap", "anaap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("The", "TAAAAaaaaaaaabaaaaaaaAAAhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("e", "laazy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("coonsecteturr", "consecteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thhe", "the") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("basit", "bassit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foLoremxamet,", "quicik") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaba", "abcdefghijklmnopqrappppstguvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("annnaaba", "anaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sit", "bassit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecaracecarrapenapapayapineapplerrapenapapayapineapple", "racecaracecarrapenapapayapineapplerrapenapapayapineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racepcaAAAAAAArapenapapayapineapplee", "racecaAAAAAAArapenapapayapifoxaet,neapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sbasist", "anaap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sitfox", "bassit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("bAAAAaaaafoxamconsecteturet,aaaabaaaaaaaAAAa", "ba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", "racecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABr", "jracecarapenanpapayapineappleumps") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sit", "ncaca") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzaaAAAAAAAnaabcipsum", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "cac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("laazy", "aapfoox") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenracecaAAAAAAArapenapapayapineapple", "racecarapenaapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("jumpsba", "AA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectedturThe", "conse") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAaaaaaaaabaaaaaaaAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("jracecarapenanpapayapineappleumps", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racepcaAAAAAAArapenapapayapinThazy", "racecarapenaapapayapineappapfooxale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("tbassithe", "the") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenanpapayapineapeple", "an") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("Lor", "ipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteturet,", "foxamconsecteturetp,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaaaabaaaaaaa", "racecarapenaapapayapineappale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aAAAAAAAnaracecarapenaapapayapineappale", "foxfaect,consecteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("jraaaaaaaabaaaaaaaaanaaceacarapenanpapayapineappleumps", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxaomconseet,", "foxamconsecteturet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("jracecarapenanpapayapiracepcaAAAAAAArapenapapayapineappleeneappleumps", "jracecarapenanpapayapiracepcaAAAAAAArapenapapayapineappleeneappleumps") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("Th", "doTg.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteturet,", "foxamconsecteturet,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("doTg.", "oof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("babcdefghianaaajklmnopqrstuvwxyzabcsit", "babcdefghijklmnopqrstuvwxyzabcsit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbaaaa", "racecaAAAAAAArapenapapayapifoxaet,neapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenanpapayapineapple", "racecarapenanpapayapineapple") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aAAAAAAAna", "racecaracecarrapenapapayapineracecaracecarrapenapapayapineapapapayapineappleapplerrapenarpapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aapfoox", "laazy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abasitna", "racecarapenanpapayapineapeple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("thlaazyeana", "the") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oxt,", "oxaet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("an", "an") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAA", "apfoo") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racepcaAAAAAAArapenapapayapineapplee", "racepcaAAAAAAAraracecaracecarrapenapapayapineracecaracecarrapenapapayapineapapapayapineappleapplerrapenarpapayapineapplepenapapayapineapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foLoremxamet,", "qk") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("rpapayeapineapple", "anaap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ajumpsaaa", "racecaracecarrapenapapayanpineapapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("appppconsAelit.AAAAAAectetur", "bc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("baa", "Aelit.AAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quAAAAAAAAA", "Aelit.AAAAAAAaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aana", "ana") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarrapenapapayapineapple", "aaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrappppstguvwxyzabc", "racecarapenaapapayapineappapfooxale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecfoxfaect,consecteturrarapenaapapayapineappapfooxale", "racecarapenaapapayapineappale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxfaect,consecteturr", "anaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aac", "abcappppbc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaaaLorem", "abcdefghijklmnopqrappppstguvwxyzabc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("coonsecteturr", "consencteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaa", "aaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("qobrownffuick", "abcdefghijklmnopqrstuvwxbc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aapfoox", "aapfoox") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenanpapayapineappl", "racecarapenanpapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabc", "racecarapenaapapayapineappale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAsitAAAA", "apfoo") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("na", "aanaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anracecarapenapapayapineapplea", "nan") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecaAAAAAAArapenapapayapifoxaet,neapple", "jfoxumpsba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ffoxamconsecteturet,", "ffoxamconsecteturet,") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenanpapayapineapepl", "racecarapenanpapayapineapeple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oof", "babcdefghianaaajklmnopqrstuvwxyzabcsit") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectetur", "AAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenaapapayapineappapfooxale", "of") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("TAAAAaaaaaaaadog.AbaaaaaaaAAAhe", "TAAAAaaaaaaaabaaaaaaaAAAhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aanaap", "aaaaconsecteturaaaabaaaaaaaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("confoLoremxamet,e", "conse") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAdotheg.AAA", "AAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("The", "aap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapineppale", "racecarapenapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aanaap", "rpapayeapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anabba", "anaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "conscectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAA", "abcdefghijklmnopqrstuvwxyzaaAAAAAAAnabcipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAanaba", "aaaaabbbbafofofofofofofofaaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("consectedturThe", "dog.eapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("quAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABr", "aThazynddog.aapquAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("fofofofofofofof", ".dog.") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.eapplee", "oof") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("caccccacac", "cacccccac") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("pappp", "appp") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("Lorem", "Lorappem") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.eapplee", "quAAAAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("app", "app") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("dog.eappleerT", "TAAAAaaaaaaaabaaaaaaaAAAhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("iracecarapenracecaAAAAAAArapenapapayapineapplesum", "ipsum") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oof", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAjracecarapenanpapayapineappleuctedturThempsAAAAAAAAAAAAAAAAAB") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbba", "AAAdotheg.AAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Lor", "anaba") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("jus", "aaaaaaaabaaaaaaaana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("TAAAAaaaaaaaabaaaaaaaAAAhe", "The") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racepcaAAAAAAArapenapapayapineapplee", "racecaAAAAAAArapenapapAelit.AAAAAAayapifoxaet,neapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("babcdefghijklmnopqrstuvwxyzabcsit", "babcdefghijklmnopqrstuvwxyzabcsit") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("oof", "ofracepcaAAAAAAArapenapaadipiscingpayapineapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Tjfoxumpsbahe", "TAAAAaaaaaaaabaaaaaaaAAAhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("nana", "ana") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aanaanasit", "na") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("apgciRKR", "dPgciRKR") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("sitoof", "na") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaabbbbafofofofofofofofaaa", "aaaaabbbbafofofofofofaa") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aAAAAAAAnaconsecteturracecarapenaapapayapineappale", "foxfaect,consecteturr") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("an", "AAAdotheg.AAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ajumpsaaa", "ajumpsaaa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("laaznay", "laazy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAB") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("Lorem", "racepcaAAAAAAAraracecaracecarrapenapapayapineracecaracecarrapenapapayapineapapapayapineappleapplerrapenarpapayapineapplepenapapayapineapplee") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("na", "na") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteracecarapenanpapayapineapplre,", "foxamconsecteracecarapenanpapayapineapplret,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("laazy", "alaazy") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrstuvwxyzabc", "c") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("o", "of") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("p", "p") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("conaaaaracecarapenanpapayapineapepleasectetur", "AAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ssit", "ncaca") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("coonsecteturr", "aana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsecteturet,", "racecfoxfaect,consecteturrarapenaapapayapineappapfooxale") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaaaLelit.or", "anaaaLelit.or") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("daog.aa", "daog.aa") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foxamconsectetuAAAdotheg.AAAret,", "foxamconsecteturet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("racecarapenapineppale", "racecarapenapineppale") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foxaomconsecteturet,p", "foxaomconsecteturet,p") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("brown", "e") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anabanana", "anabanana") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("TAAAAaaaaaaaadog.AbaaaaaaaAAAhe", "TAAAAaaaaaaaadog.AbaaaaaaaAAAhe") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("jumpsba", "jumpsba") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aaaaaa", "aaaaa") == 2)){ tests_passed++; } total_tests++;

    if((how_many_times("cc", "cc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "racecarapenaaanabapapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("apppp", "apppp") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("nana", "racecarapenanpapayapineapple") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAjracecarapenanpapayapineappleuctedturThempsAAAAAAAAAAAAAAAAAB", "quAAAAAAAAA") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("iupsum", "the") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("ccac", "cac") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("sitoof", "consectetur") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aana", "anaap") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("aAAAAAAAAAAAAAAAAAAAAAAAAAAAABna", "ana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("foxaet,", "cquick") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("anaaaLorem", "anaaaLorem") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("anabanana", "anansbasitabanana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("oxaet,", "foxaeet,") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("abcdefghijklmnopqrappppstguvwxyzabc", "abcdefghijklmnopqrappppstguvwxyzabc") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("anabanana", "annabanana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("TAAAAaaaaaaaaaaaaaadog.AbaaaaaaaAAAhe", "TAAAAaaaaaaaadog.AbaaaaaaaAAAhe") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("broown", "e") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("Th", "Th") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aadipiscing", "aadipiscing") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("aAAAAAAAAabcdefghijklmnopqrstuvwxyzaaAAAAAaaaaaAAnabcipsumna", "aAAAAAAAAabcdefghijklmnopqrstuvwxyzaaAAAAAaaaaaAAnabcipsumna") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("foxaet,", "quickanansbasitabanana") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("appppconsAelit.AAAAAAectretur", "bc") == 0)){ tests_passed++; } total_tests++;

    if((how_many_times("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAjracecarapenanpapayapineappleuctedturThempsAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAjracecarapenanpapayapineappleuctedturThempsAAAAAAAAAAAAAAAAAB") == 1)){ tests_passed++; } total_tests++;

    if((how_many_times("consecrteturr", "consecrteturr") == 1)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


