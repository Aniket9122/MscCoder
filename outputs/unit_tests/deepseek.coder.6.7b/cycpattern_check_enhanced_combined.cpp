#include <iostream>
#include <algorithm>
using namespace std;

bool cycpattern_check(string a, string b){
    if (a.length() < b.length())  // If the length of b is more than a, we can't find any rotation in a
        return false;
    
    for (int i = 0; i < b.length(); ++i) {
        rotate(b.begin(), b.begin() + 1, b.end()); // Rotate string b
        
        if (a.find(b)!=string::npos)  // Check if the rotated substring is a substring of 'a'
            return true;
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

    if((cycpattern_check("xyzw","xyw") == false)){ tests_passed++; } total_tests++;

    if((cycpattern_check("yello","ell") == true)){ tests_passed++; } total_tests++;

    if((cycpattern_check("whattup","ptut") == false)){ tests_passed++; } total_tests++;

    if((cycpattern_check("efef","fee") == true)){ tests_passed++; } total_tests++;

    if((cycpattern_check("abab","aabb") == false)){ tests_passed++; } total_tests++;

    if((cycpattern_check("winemtt","tinem") == true)){ tests_passed++; } total_tests++;

    
    if((cycpattern_check("xyzw","xyw") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yello","ell") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("whattup","ptut") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("efef","fee") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abab","aabb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("winemtt","tinem") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hello","olelh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefg","cde") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("banana","nab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("python","nthy") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onomatopoeia","onat") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racecar","race") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississippi","sis") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("coffee","ffeco") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("programming","ammiprogr") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anagram","margana") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississipi","mississipi") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("scdeis","sis") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("python","nythy") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("marganaa","marganaa") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anagram","anagram") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nthny","nythny") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ntnabhny","nthny") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nthnyanagram","nythny") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racanagramecar","race") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racanagrameca","race") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("banana","nthnyanagram") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("pyammscdeisiprogrthon","pyammiprogrthon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississipi","mississipionomatopoeia") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("missiissippi","sis") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("race","race") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racanagramecaanagram","anagram") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississippi","siss") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("coffee","ffolelheco") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("miffecossissipi","miffescossissipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ntnabhny","anagrammiffescossissipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississispi","mississispi") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("marganaaffolelheco","marganaaffolelheco") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississispi","mississispii") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefg","cmississipionomatopoeiade") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bananamissiissippi","nthnyanagram") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("coffeemississpi","coffeemississpi") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississispi","i") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hoeollo","olelh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nythy","miffecossissipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onomatopoeia","nythy") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefdg","abcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nthny","xbQkq") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mnythnyisssissipi","mississicdepi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racanagrameca","racanagrameeca") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racecar","marganaamarganaaffolelheco") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("olelnab","olelh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("marganaaffolelheico","marganaaffolelheico") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hoeollo","olelolelnabh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("sffecocdeis","sis") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onamississipit","onat") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racmarganaamarganaaffolelheco","rac") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onomatopoeia","olelh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racanagrameca","racanagrameca") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("b","nthnyanagram") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("marganaamarganaaffolelhe","marganaamarganaaffolelheco") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("xbQkq","xbQkq") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onmargafolelhecoat","onomatopoeia") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("rac","racmarganaamarganaaffolelheco") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("pyon","nythy") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nythy","anagrammiffescossissipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("scmarganadeis","sis") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ammiprogr","marganaaffolelheco") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdde","cde") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("scmargeanadeis","scmarganadeis") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("pyon","nythnythnyy") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onomatopoeia","onomatopoeia") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onat","sis") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("coffeemississpisis","sis") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onomatopoeia","olelhh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefg","cmississispide") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("siss","iscracecardeis") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ntnabhny","nthbananany") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("siolelhhs","siolelhhs") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onamississipit","onamiffescossissipit") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ffeco","coffee") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdde","coffee") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("fffeco","coffee") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("sisss","siiss") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anagraracescmarganadeiscarmmiffescossissipi","anagraracecarmmiffescossissipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anagraracescmarganadeiscarmmiffescossisisipi","anagraracecarmmiffescossissipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ntonamiffescossissipithbfffenany","nthbfffenany") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("python","nyth") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("scmarganadeis","scmarganadeis") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oleelh","olelh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("racanagrameeca","mississispi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cmissipssispide","cmississispide") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nabb","nab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("misracanagramecarsissispi","mississispi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("misracanagramecarsissispi","mississiispi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("coffecoffeemississpisianagrams","siss") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississipi","mississmisracanagramecarsissispiipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("pyammscdeisiprogrthon","mississippi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("coffee","coffee") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("sisssonamississipit","siis") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hhelnythyo","olelh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mississipi","mississmisracanagramecarsisssispiipi") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("coffeemississpisis","ssmarganaaffolelhecois") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("marganaaffolelheco","racanagrameeca") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznr","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lmno","onom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","cdab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","yzabcdefghijklmnopqrstuvwx") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefg","gabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipulation","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","thmicgloa") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","othmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onom","onom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onnom","onom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmic","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","njkononm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","thmicgloagabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijklm","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonom","thmicgloagabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgl","othmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abecdefg","abcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonom","oonom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdb","abcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","cdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkjl","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onnom","lthmic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipulation","thmicgloagabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abthmicgloacdefghijklm","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonom","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abcdefghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","oonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipulation","oonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicefg","gabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmani","ationmani") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("othmicgloa","ationmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdb","abdcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abecdefg","vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","onom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmanninom","ationmanninom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lmono","onom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdab","cdab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstuvwx","powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzderful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cda","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","ationmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abecdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpowl","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijklm","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","abthmicgloacdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonom","njknjk") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lmono","lmono") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cda","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cddb","abdcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipulation","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","abationmaninomecdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmanninom","aionmanninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanniino","aionmannino") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thicgloanjkothmicgloanjkl","thmicgloanjkotthmicgloagabccgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgl","powerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipulacdation","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onnom","logarithmic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onnom","onnom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijklm","ononom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaacaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkl","njknjkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkllmonom","abcdefghijkllmonom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabc","gabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abationmaninomecdefg","onom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefg","abcdefg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdbb","abcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloanjkotthmicgloagabccgloanjkl","thmicgloanjkotthmicgloagabccgloanjkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdb","cdb") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","abababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcdb","cdb") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hithicgloanjkothmicgloanjkljklm","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicefg","gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgl","powerfabthmicgloacdefghijklmul") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","abcdefghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaionmanninomaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderful","powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghlijklmnopqrstuvwx","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abwcdefghijklmnopqrstuvwxyz","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","lthabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaamic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abthmicgloacdefghihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrm","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcccccbbaothmiccgloaaacccabcdcbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","oonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdab","cbdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipulacdation","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkononm","njkononm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abecdefg","abccdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abwcdefghijklmnopqrstuvwxyz","njkononm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("dcdb","cdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("dcdb","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmicthmicgl","thmicgloagabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","abcdefghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm","ationmtann") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninom","onom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","cdaaionmanniino") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","manipulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("adbcd","ababthmicgloacdefghijklmcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abwcdefghijcklmnopqrsthuvwxyz","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvuvcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","hijklabationmaninomecdefgm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","abc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aaionmanninotii","aaionmanninotii") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabc","abdcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abbcd","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkjl","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","aabationmaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabc","bbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzderful","bbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpowol","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg","abcdltabcdefghijklmnopqrstuvwxyzhmicefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkl","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgl","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnoabthmicgloacdefghihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrmqrstuvwx","yzabcdefghijklmnoabthmicgloacdefghihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrmqrstuvwx") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkjl","lthmicthmicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonooom","njknjk") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","furporwl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("dabbcd","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","lmno") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cddb","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acbbbcd","abbbcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaionmanninomaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","ationmanninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("othmicgloa","othmicgloa") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","aabationmvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqaionmanninorstuvwxyz","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijklm","hijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijkl","ononom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmic","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloanjkotthmicgloagabccgloanjkl","thmicglbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcoanjkotthmicgloagabccgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonm","oonm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbotchmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcdb","cbdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcudefghlijklmnopqrstuvwx","abcudefghlijklmnopqrstuvwx") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmtann","cbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbotchmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaaccbaa","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","abcdhijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","abcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","ationmtann") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefg","ggabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpowl","abationmaninomecdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipulation","ationman") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","abcd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkl","hijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmannino","manipulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqaionmanninorstuvwxyz","njadbcdknjk") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijklm","bbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncbbbaaaaionmanninomaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaacabcdcccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabcionmanninombaaabcfg","abcdltabcdefghijklmnopqrstuvwxyzhmicgabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipualation","ationman") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmaninom","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipualation","yzabcdefghijklmnoabthmicgloacdefghihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrmqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abbcbd","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdab","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("antionmani","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","njknjk") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcadefghijklm","cdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmanninom","ationnninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicglocaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","gabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","abcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcinugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkmanipulation","gabcvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmani","ationmanninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njadbcdknjk","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkllmonom","abcdefghijkll") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmannino","bbbaaaaccbbaaaccccabbaaacccccbbaaabbaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaaicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abc","abc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationnninom","abthmicgloacdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ababthmicgloacdefghijklmcd","abcdltabpcdefghijklmnopqrstuvwxyzhmicefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","aabationmvnzrhmweyyvvucserwzggunqinzqkihnbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","njkononm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("adbcd","abcdefghijlm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicglothmicgloabaothmaicgloaaaccccbbaaabcderful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerfabthmicgloacdefghijklmul","vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaanmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccccacbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaacccacbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","thicgloanjkothmicgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thimicgloa","othmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcadefghijklm","dcdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aaionmanninotii","cbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationnninom","vnzrhmweyyvvucserwzggaionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmunqinzqkihncxxfchabcdaefghijklmuxjvlquvdnxliraabcdinugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbblaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipation","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","njknjabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaakl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipulacdation","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipulation","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicmgloa","abthmicgloacdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ononom","ononom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","abbcbd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmicdac","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmigcgloa","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpornjknjkwl","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefcdaaionmanniinoghijklm","abcdefcdaaionmanniinoghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ithmicgloanjkotcbdabmicgloagabccgloanjkl","thmicgloanjkotthmicgloagabccgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopkqrstuvwxyz","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abwcdefghijcklmnopqrsthuvwxyz","gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdcabwcdefghijcklmnopqrsthuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefhijklm","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","hijklabationmaninnomecdefgm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijklabationmaninomecdefgm","abcdefghijlm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghiklm","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcadefghijklm","hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznr") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","aabationmvnzrhmweyyvvucserwzggunqinzqkihnbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","vnzrhmweyyvvucserwzggunqinzqkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdceffg","ggabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninom","aihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznronmanninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipulacdation","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbdb","cbbbacccbbaothmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijkl","njkononm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmtann","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaacabcdefghijkllmonomaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abkwcdefghijcklmnopqrsthuvwxyz","abwcdefghijcklmnopqrsthuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccationnninombothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thl","thmicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","njknjkaionmanninocdbbbbaaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninom","abcdefghijlm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbdab","cbdab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ltbbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabchmic","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aaionmanni","aaionaionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmmanninotii") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ccbbbacccbbaothmaicgloaaaccccbbaaabcdbda","abcdefghijklmnopkqrstuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlthlm","manipulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbdab","cdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmiacgloa","abthmicgloacdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","yzabcdefghijklmnopqrstuvwbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabcx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaamic","lthabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaamic") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqnkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqnkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationnninom","thmigcgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","abecdbefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggthmicgloagabcunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","abecdbefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderfulbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","lmono") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcinugnaolmshzd","thmicgloanjkotthmicgloagabccgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","fpurpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njabcdefghijklmnopkqrstuvwxyzknjkl","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","thmicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abijlm","thmicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njadbcdknjk","abcdefghlijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onnom","lthmabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaaic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipualation","thmicmgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcudefghlijklmnopqrstuvwx","acbbbcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aabationmvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom","ationman") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninomationmtann","cbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbotchmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hmicgloa","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmi","thmicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicglbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcoanjkotthmicgloagabccgloanjkl","cbbbacccbbaothmaicgloaaacccdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abdcbd","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lomno","lomno") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aioonmannino","manipulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicmmgloa","thmicmgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkabcdefghijkllmdonom","abcdefghijkllmonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aabationmvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom","atiodabbcdnman") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("llthmicdac","lthmicdac") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thimicgyzabcdefghijklmnoabthmicgloacdefghihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrmqrstuvwxloa","thimicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","cdb") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipulation","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlltbbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihnrcxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabchmicirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdltabcdefghijklmnopqrstuvwxyzhmicefg","lmono") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccatiodabbcdnmanbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg","abcdltabcdefghijklmnopqrstuvwxyzhmicefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcdb","cbbbacccbbaothmaicgloaaacccdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njnknjkononmnjk","njnknjk") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmiacgloa","aationmaninomcbbbcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationnninom","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("llthmicdaationmtannc","llthmicdac") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdconom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbbaaaccccccbbzderfulbaionmanninombaaabc","bbbaaaaccbbaaaccccabbaaaccccccbbzderfulbaionmanninombaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njadbcdknjk","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaqbcdefghiklm","vnzrhmwehweyyrnilrxfziojjsvvucserwzaaionmanninotiiggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghiklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaacccacbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaacccacbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("opowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzderfuloonom","ooonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","aabationmvnzrhmweyyvvucserwzggunqinzqkihnbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccxxfchhuxjvlquvdnxlhirainugnaolmshzdaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbdab","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcudefghlijklmnopqrstuvwxcbdab","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aationmaninomcbbbcdabcdefghijklmnopqrstuvwxyz","njknjkaionmanninocdbbbbaaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","powerful") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","ooonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("othmicabcdefghijklmloa","othmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("antionmani","aabationmvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("adbcd","lthmabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaaic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbbbacccbbathmaicgloaaaccccbbaaabcdb","abbcbd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaionnjknjkmanipulationbaaabc","ationmanninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaacabcdcccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnbbbaaaaccbbaaaccccabbaaafurpornjknjkwlcccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabcionmanninombaaabcfg","abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaacabcdcccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabcionmanninombaaabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmcdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","abcdefghijklmcdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdltabcdefghijklmnopqrstuvwxyzhmicgabcfg","thmicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdconom","gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdconom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijkjlabationmaninomecdefgm","lthabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaamic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","llmno") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbdb","cdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onnom","lththmicmmgloaic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmcdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","gabrcvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdc","abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccatiodabbcdnmanbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","ccdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cddab","cddab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbotchmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcdb","abcdefghijklmnonjknjkabcdefghijkllmdonompqrstuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicglocaaaccccbbaaabc","aionomanninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmicthmicgl","nmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abdcaionomanninm","abdcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaanmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccccacbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbcbbbacccbbathmaicgloaaaccccbbaaabcdbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaacccacbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncbbbaaaaionmanninomaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","ooonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbblaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","abcdefghijkll") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abkwcdefghijabcdcklmnopqrsthuvwxyz","adbcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("alam","abdcbd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nl","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopkqrstuvwxyz","abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abbcd","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpipulacdation","acbbbcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvuvcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","oonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabc","gabwcdefghijcklmnopqrsthuvwzabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ooonomonom","onom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijklm","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthcmicefg","gabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","abcd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlthlm","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccabcdlthmicefgbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgl","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccboththimicgyzabcdefghijklmnoabthmicgloacdefghihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrmqrstuvwxloac") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaionmanninomationmtannaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","abababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaacabcdcccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabcionmanninombaaabcfg","oonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcvnzrhmwehweyyrnilrxfziojjsvvucserhwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","gabcvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghiklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmi","abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccatiodabbcdnmanbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpornjknjkwl","cbbbacccbbaothmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmigcggloa","thmigcgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg","abwcdefghijcklmnopqrsthuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ativnzrhmweyyvvucserwzggaionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmunqinzqkihncxxfchabcdaefghijklmuxjvlquvdnxliraabcdinugnaolmshzdonnninom","vnzrhmweyyvvinugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdcabwcdefghijcklmnopqrsthuvwxyz","abcdefghijklmcdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgl","thmiabcdltabpcdefghijklmnopqrstuvwxyzhmicefgcgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmic","bbbaaaaccbbaaaccccabbaaacccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abbcbad","abbcbd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hijkjlabationmaninomecdefgm","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccabcdlthmicefgbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaanmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccccacbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaabwcdefghijcklmnopqrsthuvwxyzcbbaaacaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaabwcdefghijcklmnopqrsthuvwxyzcbbaaacaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpornjknjkwl","njkononm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnonjknjkabcdefghijkllmdonompqrstuvwxyz","abcdefghijklmnonjknjkabcdefghijkllmdonompqrstuvwxyz") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonooom","oonooom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstuvwbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabcx","yzabcdefghijklmnopqrstuvwbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabcx") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraixnugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkl","abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaacabcdcccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabcionmanninombaaabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("antiongabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdcmani","aabationmvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkjl","abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpvnzrhmwehweyyrnilrxfziojjsvvuvcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdipulacdation","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furbbbaaaaccbbaaaccccabbaaaccccccbbzderfulbaionmanninombaaabcpornjknjkwl","cbbbacccbbaothmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmicvnzrhmweyyvvucserwzggunqinzqkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmtann","ononooom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcudefghlijklmnopqrstuvwxcbdab","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccabcdlthmicefgbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabc","abcdefghijlm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopkqrstuvwxyz","abcdefg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzderful","powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzderful") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("frurpowol","frurpowol") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdab","cdabb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmanni","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("dcdb","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hmicgloa","thmicgabcdefgoa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdlthmicebbbaaaaccbbthmicgabcdefgoaaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfg","bbbaaaaccbbaaaccccabbaaacccccbbcbbbacccbbathmaicgloaaaccccbbaaabcdbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaacccacbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninocdab","cdab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcadefghijklm","cbbbacccbbaothmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloanjkotthmicgloagabccgloanjkl","thmicgloanjkotthmicgloagabccgloabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabkwcdefghijcklmnopqrsthuvwxyzabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaaccccacbbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("l","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloanjkotthmicgloagabccgloanjkl","thmlicgloanjkotthmicgloagabccgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaqbcdefghiklmhijklm","vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaqbcdefghiklmhijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkononm","nmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abkwpowerfabthmdicgloacdefghijklmulcdefghijcklmnopqrsthuvwxyz","aabationmvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlm","ltbbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabchmic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmicthmicgl","lththmicmmgloaic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","njknjk") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manilpulation","oonom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("maanipulation","manipulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpornjknjkwl","cbbbacccbbaologarithmicthmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aioonmanninom","obbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaacaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcnom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvuvcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmwehweyyrnilrxfziojjsvvuvcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthbbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmicthmicgl","njknjkjl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","cdaaiino") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ggabc","abcdhijahbbcbadklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdrstuvwx","yzabcdrstuvwx") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aabecdefg","abccdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ooonomonomabijlm","thmicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("omanipation","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweeyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlthlm","ationmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onnom","lthmabababababababababababbbbaaaaccbbaaaccccabbaaacccccaabcdefghijklmnopqrstuvwxyzbbaaaaccccbbaaaaccccbbaaaccccbbaaic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraixnugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraixnugnaolmshzd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("on","onnom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjgnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","abecdbefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmigcggloa","bbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihncbbbaaaaionmanninomaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmcdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbacbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","lthmicvnzrhmweyyvvucserwzggunqinzqkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aioonmanninoaabationmvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninomm","aioonmanninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaabcacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcinugnaolmshzd","thmicgloanjkotthmicgloagabccgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderful","abbcbd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbcbbbacccbbathmaicgloaaaccccbbaaabcdbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaacccacbbaaabc","nmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("llthmicdaationmtaonnc","hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznr") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzgguanqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmd","vnzrhmweyyvvucserwzgguanqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmanninomanpipulationm","ationmanninom") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmicvnzrhmweyyvvucserwzggunqinzqkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd","lthmicvnzrhmweyyvvucserwzggunqinzqkihncxxfchabcdefghijklmuxjvlquvdnxlirainugnaolmshzd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aationmaninomcbbbcd","vnzrhmweyyvvucserwzgguanqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaabcdefghijklmnopkqrstuvwxyz","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaabcdefghijklmnopkqrstuvwxyz") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcudefghlijklmnopqrstuvwxcbdab","abcdefghijklmnopqaionmanninorstuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijlthlm","tationmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcnjadbcdknjk") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbaacaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("othmicabcdefghijklmloa","thimicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","njknjabcdhijklmkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkaionmanninocdbbbbaaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaathmigcggloaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm","abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdhijahnjknjkbbcbadklm","abcdhijahbbcbadklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicglothmicgloabaothmaicgloaaaccccbbaaabcderful","abcdfrurpowcdabbol") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmi","thmabcdefghijklmnonjknjkabbbbaacaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccdefghijkllmdonompqrstuvwxyzicgl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipuabcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainugnaolmshzderfulbaionmanninombaaabcfglation","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlltbbbaaaaccbbaaaccccavnzrhmweyyvvucserwzggunqinzqkihnrcxxfchhuxjvlquvdnxlirainugnaolmshzdbbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabchmicirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abwcdefghijcklmnopqrsthuvwxyz","aationmaninomcbbbcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcudefghlijklmnopqrstuvwxcdaaionmanniinocbdab","abcdefghijklmnopqaionmanninorstuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgl","thmicgl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcinugnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcinugnaolmshzd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("althmabababababababababababbbbaaaaccbbaaaccccabbaaacccccabbaaaaccccbbaaaaccccbbaaaccccbbaaic","cdaaionmanniino") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lmno","aaionmanninotii") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abdcaionomanninm","othmicabcdefghijklmloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcudefghlijklmnopqrstuvwx","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccboththimicgyzabcdefghijklmnoabthmicgloacdefghihweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrmqrstuvwxloac") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ccdb","ccdb") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aioonmannino","manipoulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmggabcicmmgloa","thmicmgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationnninnom","vnzrhmweyyvvucserwzggaionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmunqinzqkihncxxfchabcdaefghijklmuxjvlquvdnxliraabcdinugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaanmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccccacbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaanmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccccacbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknjkjl","abcdlthmicebbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaacabcdcccbbaaaccccbbaaaccccbbaaaccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgoloaaaccccbbaaabcionmanninombaaabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ggabc","abcdhijahbbcbithmicgloanjkotcbdabmicgloagacbccgloanjkladklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaagunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderfulbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderfulbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm","lmabcdefghijlmno") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","aabationmaninomecdefgtionationmanninomanpipulationmninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopkqrstuvwxyz","llthmicdaationmtannc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstuvwx","yzabcdefghijklmnopqrstuvwx") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdfrurpowcdaabbol","abcdfrabdcdurpowcdaabbol") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipatiabccbadklmon","manipatiabcdhijahnjknjkbbcbadklmon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaabationmvnzrhmweyyvvucserwzggunqinzqkihnbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninomaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweeyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdllthmicdaationmtaonncnaolmshzd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abbcbad","abationnninnomad") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninomationn","aionmanninomationmtann") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaabcacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcinugnaolmshzd","thmicgloanjkotthmicgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmanninocdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaabationmvnzrhmweyyvvucserwzggunqinzqkihnbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccxxfchhuxjvlquvdnxlirainugnaolmshzdaninomecdefgtionmaninomaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcm","faabationmaninomecdefgtionationmanninomanpipulationmninomwl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abdcd","abcd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaacmanpipulationloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","cbbbacccbbaologarithmicthmaicgloaaaccccbbaaabcdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("atnionmaninom","ationmaninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjgnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklmcccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjgnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklmcccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbd","cdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabc","gabcvnzllthmicdacrhmwehweyyrnilrxfziojjsvvucserhwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aionmananinocdab","cdab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloagabc","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzaaionmanninotiiggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghiklm","njknjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbcaaaaccbbaaaccccabbaaacccccbbalthmicthmicglaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","bbbcaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","lomno") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxluirainumanipulationzderful","powvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmainjknjkaionmanninocdbbbbaaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmcgloaaaccccbbaaabcderful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthmic","lthaionmanninommic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaagunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderfulbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirjainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("atioanmanninomanpipulationm","abcdcefffg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbblaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabc","bbbaaaacbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbaionmanninombaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccnjknjkaionmanninocdbbbbaaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbfurbbbaaaaccbbaaaccccabbaaaccccccbbzderfulbaionmanninombaaabcpornjknjkwlbaothmicgloaaaccccbbaaabcmccbbaaaccccbbaaacccacbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccnjknjkaionmanninocdbbbbaaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmccbbaaaccccbbaaacccacbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdconom","thmigcgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmigcgloa","gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdconom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","ccdb") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abbcd","vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraixnugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpowowl","furpowowl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvtwxyz","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("dcdb","gabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraiznugnaolmshzdc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cbbdab","obbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaacaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcnom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaacmanpipulationloaaaccccbbaaabc","aabationmaninomecdefgtionationmanninomanpipulationmninom") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbcaaaccccbbaaacccacbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccabbaaaccccbbaaacccacbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdcddbnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklm","thmicgloagabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("lthbbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmicthmicgl","lthbbbaaaaccbbaaaccccabbaaaccccbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmicthmicgl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("atiaonmani","ationbbbaaaaionmanninomaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccccbbaaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onomm","onombvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjgnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdabcdefghijklmcccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccccbbaaaaccccbbanaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmmanpipulationicgloaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquhvdnxlirabbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaabcacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcinugnaolmshzd","thmicgloanjkotthmicgloanjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","ationbbbaaaaionmanninomaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abbcd","njadbcdknjk") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","cbbdab") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abecdefmag","abthicgloanjkothmicgloanjklccdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","hijklagm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccpowvnzrhmweyyvvucserwzggunqinzqkabcdefghijklmnopqrstuvwxyzihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbbaaabcderfulbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccpowvnzrhmweyyvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmaicgloaaaccccbbaaabcderfulbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc","cdbbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abccd","abccd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manpvnzrhmwehweyyrnilrxfziojjsvvuvcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdirpulacdation","manpvnzrhmwehweyyrnilrxfziojjsvvuvcserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdirpulacdation") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","agabvnzrhmwehweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznryyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdconomtionma") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmimanpipulacdationcmmgloa","thmicmgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmannbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaccccbbaaabcnjadbcdknjkinom","nmtanbbbaaaaccbbaaaccccabbaaacccccbbaaabbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaabcaccccbbaaaaccccbothmicgloabaaaccccbbaaaccccbbaothmicgloaaaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hello","loh") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ab","ba") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcde","eabcd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aaaaa","a") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","dabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","dcba") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcabc","cabcab") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","njjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkl","njkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powferful","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powferful","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa","gabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabc","gabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abcdefgjklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onom","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcdefgjklml","njkabcdefgjklml") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmani","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefgjklm","njjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicghloa","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmvnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzdicghloa","thmicghloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdeefg","abcdeefg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefg","yzabcdefg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstuvwx","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefg","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefg","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","logarithmic") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furabcdefghijklmpowl","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkl","nljkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmani","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiarithmic","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicghloagabc","gabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnljklefg","abcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aebcdefg","yzabcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njlogiarithmickl","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furabcdefghijklmpowl","abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","yzabcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abicdefghijklm","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaulation","manipabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaulation") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","powerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipultationc","gabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abcdefghijkanmanilm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanilmnopulationc","gabmanipultationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("knjkabcdefgjkclml","njkabcdefgjkclml") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnljkleationmanifg","abcdnljkleationmanifg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerful","abcdeffghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefm","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmani","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcd","thmicghloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ul","ul") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjkl","njkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulationc","gabmanipaulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mthmicgloa","nnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulationc","gabmanipulationc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abcdnljklefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nanmani","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abcdefm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","njkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmanai","anmanai") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanilmnopulationc","gabmanipultatioc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdg","abcdeefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipaulationc","gabmanipaulationc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpowl","furpowl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefm","mthmithmicghloagabccgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcdefgjklml","powerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpowl","furpownnjkll") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abklm","abcdefgjklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbabaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaa","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefam","abcdefam") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjkl","atioanmaninmuli") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaa","powferful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmanai","ul") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abcanmanidefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjklefghijklm","powerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkanmanilm","abcdefghijkanmanilm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcabcdefmlfg","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipaulationc","abcdnljklefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaacklfg","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcadefgjklml","njkabcdefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powferful","powferful") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nj","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjkl","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdeefg","abcdthmicghloagabceefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abcdefghhijkanmanilm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcfdefg","yzabcdefcg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghhijkanmanilm","anmanai") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefgabklmhijklm","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","gabmanipultatioc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiarithmic","gabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nj","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaacklfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanonc","gabmanonc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulltatioc","gabmanipultatioc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicghloagabc","abcdnljklepowerfulfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipultatioc","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefm","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefgabklmhijklm","nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefg","furpabcanmanidefghijklmowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijabcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjklefghijklm","powerfunj") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklm","abababababacccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgabmanipultationnck","nnjgabmanipultationck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgabmanipulthweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrationck","nnjgabmanipultationnck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpownnjkll","powerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefcg","nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicghloa","yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdab","manipulatilon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpowull","njkabcdefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznr","manipulatilon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmaini","anmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefggabchijklm","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","manipabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("onomnjkabcdefgjklml","lmno") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefg","manipabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmaini","nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklanmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjkl","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","gabc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aabcdefghijkanmanilmbcdefghijklm","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmani","manipulatilon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipultatioc","ationmanni") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanonc","gabmanipultatioc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcdefgjklml","abcdefghijkanmanilmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgabmanipultationnck","nnjgabmanipultationnck") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulltatgioc","thmicghloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcbjkl","nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","thmicglofurpowulla") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logaritic","logarithmic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccmanipulationbbaaabcjklanmani","njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklanmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnnnjgabmanipultationckjkl","mthmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcdefgjkclml","njkabcdefgjkclml") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccmanipulationbbaaabcjklanmani","powerfulnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ul","uationmannil") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cgabc","gabnbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklanmanic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulationc","gabcdnljklepowerfulfgabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabc","gabmanipultatioc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaa","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccmanipulationbbaaabcjklanmani","abklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefam","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbcaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","njkabcdefgjkclml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklfg","nnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdg","abcdeeabcdfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmanni","nbbbaaaaccbaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijgklm","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipultatioc","anmanai") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx","hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznr") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdabb","manipulatilon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abicdefghijkmlm","anmaini") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgabmanipultationck","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acgabacfg","acgabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdthmicghloagabceefg","abcdthmicghloagabceefg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiarithmic","cgabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdabb","abababababababaaaccccbbaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabc","gabmabnipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powrfunj","powrfunj") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmayzabcdefcgii","anmaini") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njlogiarithmickl","yzabcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccmanipulationbbaaabcjklanmani","njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccmanipulationbbaaabcjklanmani") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulltatgioc","hmicghloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaa","abababababacccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","atioanmaninmuli") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiarithmic","abkbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabclm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjkl","thmicgloaabkbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabclm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","thabcdefghhijkanmanilmmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdthmicghloagabceefg","abcdefghijkanmanilmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbagabmanipultatiocaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklanmani","gabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulaanmannitionc","gabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjkl","njjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabc","gabmanipultatioccgabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababaaacccccbbaccccbbaa","abababababababaaacccccbbaccccbbaa") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("alogiarithmic","logiarithmic") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbagabmanipultatiocaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklanmani","powerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefa","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbcaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicghloagabc","abcdnljklepowebrfulfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcdefgjklml","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgabababababababaaaccbaationnck","nnjgabmanipultnbbbaabaaccbaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklationnck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgabmanipulthgnaolmshzhdwmnmvznrationck","nnjgabmanipulthweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrationck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpownnjkll","furpownnjkll") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghabcdefghijklmnopqrstuvwxyzijklm","abcdefghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acchmicghloadabbgabacfgnjjkl","accdabbgabacfgnjjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnljklefg","gabmanipulltatgioc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdeffghijklm","hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhmuxjvlquvdnxlirainugnaolmshzhdwmnmvznr") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinfurpowlzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","abcanmanidefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hmicghloa","cgabcthmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkjlm","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ulabcdeeabcdfg","ul") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmana","anmanagabmanilmnopulationci") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmani","ationma") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbagabmanipultatiocaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklanmani","abcanmanidefghijklmpowerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkanmaniabcdefmlm","abababababacccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("knjkaefgjkclml","njkabcdefgjkclml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbagabmanipultatiocaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaakabcjklanmani","abcanmanidefghijklmpowerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkfurabcdefghijklmpowllm","abcdefghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnljkleffg","abcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mthmithmicghloagabccgloa","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("oonom","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefg","yzabcde") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiarithmic","nnjgabmanipulthweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznrationck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefg","acbgabcfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ul","ull") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbaaaaccccbnnjgabmanipultaa","powferful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nabcdefgnjkl","njjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("p","powferfl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabc","nnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefgjklm","abcdefgjklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipultationc","gabmanipulaticdabbonc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababaabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccabbaaaaccccbbaaccccbbaa","abababaababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","gabcnjkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acchmicghloadabbgabacfgnjjkl","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiaritlhmic","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbcccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdeghijklm","abcdefgjklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkmabcdefgnjkclml","njkabcdefgjkclml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","gnabcnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbabaaaccccbbaaaccccbbaa","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbabaaaccccbbaaaccccbbaa") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefam","nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("l","ull") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abklm","gabmabnipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ul","abababababababababababbbbaaaaccbbaaaccccabbabaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaaull") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznr","manilpulatilon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acchmicghloadabbgabacfgnjjkl","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmntopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbabaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdeefg","yyzagbcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmaini","abababababacccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjklefghijklm","abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjklefghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("agabmanipulltatiocbcdefa","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbcaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","thmicgla") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkkl","gabcnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaulation","manipabababababbabuabababababbbbaaaaccbbaaacccccbbaaulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("alogiarithmic","alogiarithmic") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithnnjgabmanipultnbbbaabaaccbaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklationnckmic","logarithmic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvnzrhmweyycserwzggunqinzqkihnhzduvwx","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefg","gagabmabnipulationcbc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manilpulatilon","abcdeefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbbaaaaccccbbaaaccccbbaaabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmani","aebcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdanljklefg","manipabababababbabuabababababbbbaaaaccbbaaacccccbbaaulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccgabcthmicgloacccbcccbbaa","gabmanipulatacgabcfgionc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powerfunj","abcdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmntopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbabaaabcjkl","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmntopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbabaaabcjkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmlmnoani","ationmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgabmanipfurpownnjkllultationck","nnjgabmanipultationck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanonc","abcdeeabcdlogariticfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpogabmanoncwull","njkabcdefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbcaaaccccbbaaaccccbbaaabcjkltationnck","nnjgabmanipultationanck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcanmanidefghijklm","abcanmanidefghijklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gjabcnjkl","atioanmaninmuli") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx","yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkanmanilm","furpowull") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmanii","anmani") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipaulationc","gabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logaritic","ul") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipulatilon","manipulatilon") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcanmanidefghijklm","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmanii","logiarithmic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabgc","gabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aebcdefg","yzadefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","manipabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaagagabmabnipulationcbcaccccbbaaaaccccbbaaaccccbbaaulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjklefghijklm","abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccibbaaaccnnjklccbbaaabcjklefghiajklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkjelm","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccibbaaaccnnjklccbbaaabcjklefghiajnbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcbjklklm","abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccibbaaaccnnjklccbbaaabcjklefghiajnbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcbjklklm") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yyzagbthmicglafg","yzabcdeezfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yyzagbthmicglafg","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mtulabcdeeabcdfghmithmicghloagabccgloa","mtulabcdeeabcdfghmithmicghloagabccgloa") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbcbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcdefgjkclml","uationmannil") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvpbcjkl","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulaanmannitionc","gabmanipulataionc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnnnjgapbmanipultationckjkl","gabcdnljklepowerfulfgabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulltatgioc","gabmanipulltatgioc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaaccccbbbabaaaccccbbaaaccccbbaa","abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaaccccbbbabaaaccccbbaaaccccbbaa") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","abababababababababababbbbaaaabcdefgabklmhijklmaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababaaacccccbbaccccbbaapowferful","l") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkfurabcdefghijklmpowllm","abcdecgabclm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabaccccbbaaaccccbbaaaccccbbaaabcjkl","nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababaabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccabbaaaaccccbbaaccccbbaa","abkbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabclm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkanmanil","furpowull") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefcg","abcdefgjklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnljkleffgknjkabcdefgjkclml","abcdefg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("manipabababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaulation","njkabcadefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aabcdefghijkanmanilmbcdefghijklm","abababaababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl","anmanagabmanilmnopulationci") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefklmpowllm","abcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mtulabcdeeabcdfghmithmicghloagabccgloalogiarithmica","mtulabcdeeabcdfghmithmicgahmloagabccgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnljkleffgknjkabcdeafgjkclml","abcdnljkleffgknjkabcdeafgjkclml") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aabcdefghijkanmanilmbcdefghijklm","abcdefghiljklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjkl","anmanagabmanilmnopulationci") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefgjklm","abcdefgjkljm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcfdefg","abababababababaaacccccbbaccccbbaa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklfg","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklfg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjbkl","atmioationmlmnoanianmaninmuli") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ngabmanonc","gabmanonc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcdefgjklml","wpowerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbcaaaccccbbaaaccccbbaaabcjkl","gabmanipultatioccgabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gagabmabnipulationcbc","gagabmabnipulatiabcdoncbc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjkl","thmicgloaabkbbbaacaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabclm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababaaaccccbbaccccbbaal","abcdefghijkanmanilmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdbb","cda") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiarithmicacgabacfg","nnjgabmanipulthweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraainugnaolmshzhdwmnmvznrationck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabjkl","njkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstuvwx","njkabcdefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("cdbb","yzabcdefghijklmnopqrstuvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiarithmicagabmanipulatacgabcfgionccgabacfg","nnjgabmanipulthweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraainugnaolmshzhdwmnmvznrationck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababaaaccccbbaccccbbaal","abcdefghijkannjjklmanilmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mtulabcdeeabcdfghmithmicghloagabccgloa","powerfunj") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijgklm","uationmannil") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("mtulabcdeeabcdfghmithmicghloagabccgloalogiarithmica","nnjgabmanipulthweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxliraainugnaolmshzhdwmnmvznrationck") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpownnjkll","furnbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjklanmanipownnjkll") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcbdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx","yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abicdefghijkmaabcdefghijkanmanilmbcdefghijklmlm","abicdefghijkmaabcdgabmanipultationcefghijkanmanilmbcdefghijklmlm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababaaacccccbbaccccbbaa","mthmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl","abcdefghijkannjjklmanilmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababababababbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbaccgabcthmicgloacccbcccbbaa","gabmanipulatacgabcfgionc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("atioanmaninmuli","abcdefghijkannjjklmanilmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkaanmanilmm","abcdefghijkanmanilmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulcdabtatiocc","gabmanipulcdabtatiocc") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcdefgjklmwzggunqinzqkihncxxfchhuxjabcanmanidefghijklmlqcuvdnxlirainugnaolmshzduvwx","yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abababababababaaaccccbbaccccbbaal","aabcdefghijkanmanilmbcdefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("l","manipulatilon") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcdnljklepowerfulfgabmanipulationc","anmana") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yyzagbthmicglafg","yyzagbthmicglafg") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("atiionmathmicgloa","atiionma") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinfurpowlzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinfurpowlzqkihncxxfchhuxjvlquvdnxlirainugnaolknjkabcdefgjkclmld") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcpowerfulnjkldeghijklm","abcdeghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdeeabcdlogariticfg","om") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicgloa","yzabcfdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nanmani","atiaonmani") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("fuwrpowl","furpowl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnjkl","bgnabcnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acchmicghloadabbgabacfgnjjkl","acchmicghloadabbgabacfgnjjkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl","njkabcdefgjkclml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmianipulcdabtatiocc","gabmanipulcdabtatiocc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("aabcdefghijkanmanilmbcdefghijklm","ul") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anmani","anmani") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiaritlchmic","logiaritlhmic") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nj","nj") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmannfurpogabmantiionmaanoncwull","ul") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnjgnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbcaaaccccbbaaaccccbbaaabcjkltationnck","abcdefghabcdefghijklmnopqrstuvwxyzijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjklefghijklm","powerfunbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvpbcjkll") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbcbbaaaaccabcdefghijklmnopqrstuvwtxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl","nbbcbbaaaaccabcdefghijklmnopqrstuvwtxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("ationmafurpogabmanoncwull","njkabcdefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhmuxjvlquvdnxlirainugnaolmshzhdwmnmvznr","njkabcdefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcadefgjklml","njkabcadefgjklml") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcabcdefghijklmnopqrstuvwxyzdnljklepowerfulfg","abcdnljklepowerfulfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghiljklm","thmicgla") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdenljkyzabcdeefglfg","yzabcdyzabcdefghijklmnopqrstuvwxenljklfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinfurpowlzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","vnzrhmweyyrnilrxfziojjsvvucserwzggunqinfurpowlzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvqnzrhmweyyrnilrxfziojjsvvucserabcbdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx","yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcbdefgjklmwzggunqinzqkihncxxfchhuxjvlqatiaonmaniuvdnxlirainugnaolmshzduvwx") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcdnljklepowerfulfgabyzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserabcbdefgjklmwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwxationc","gabmanipulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpogabmanoncwull","yzabcfdefg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmic","manipulation") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("hweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzhdwmnmvznr","knjkabcdefgjkclml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaaccaccccbbaaabc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("vnzrhmweyyrnilrxfziojjsvvucserwzggunqinfurpowlzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzd","abcdeeabcdfg") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logarithmicabcdefggabchijklm","logarithmic") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcpowerfulnjkldeghijklm","gabmanipaulationc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acchmicghloadabbgabacfgnjhjkl","acchmicghloadabbgabacfgnjjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijkl","abcdefghijkl") == true)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvpbcjkl","gabmanipulltatgioc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaacvnzrhmweyyrnilraccccbbcaaaccccbbaaaccccbbaaabcjkl","abcdefam") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abicdefghijkmaabcdefghijkanmanilmbcdefjghijklmlm","abicdefghijkmaabcdgabmanipultationcefghijkanmanilmbcdefghijklmlm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaacvnzrhmweyyrnilraccccbbcaaaccccbbaaaccccbbaaabcjkl","gabmianipulcdabtatiocc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccccmanipulationbbaaabcjklanmani","powerfulnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipulaanmannitionc","ggabmanipulataionc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("powlerfulnjkl","powerfuulnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gjabcnjkl","nnnnjgapbmanipultationckjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdefghijklmnopqrstuvwxyz","nnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcanmeanidefghijklm","abcanmanidefghijklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("logiaritahmic","abkbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabclm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gagabmabnipulatiabcdoncbc","abcdefghabcdefghijklmnopqrstuvwxyzijklabcanmanidefghijklmm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abkbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbbaaaccccbbaaaccccbbaaabclm","njkabcadefgjklml") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabmanipaulationc","bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccnnjklccbbaaabcjklefghijklm","abcdnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccibbaaaccnnjklccbbaaabcjklefghnbbcbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkliajklm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thmicglanmanaoa","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nbbbaaaaccbbaaaccccabaccccbbaaaccccbbaaaccccbbaaabcjkl","powerful") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("yzabcdefghijklmnopqrstvnzrhmweyyrnilrxfziojjsvvucserwzggunqinzqkihncxxfchhuxjvlquvdnxlirainugnaolmshzduvwx","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njknbbbaaaaccbbaaaccccabbaaaccccccbbaaaacccncbbaaaccccbbaaaccccccmanipulationbbaaabcjklanmani","abkbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaacccaaccccbbaaabclm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("bbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaaabc","thmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("njkabcadefgjklml","abicdefghijkmaabcdefghijkanmanilmbcdefghijklmlm") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anjknbbbaaaaccbbagabmanipultatiocaaccccabbaaaccccccbbaaaaccccbbaaaccccbbaaaccccbbaaaccccbbaakabcjklanmanibcdefghijklm","thmicghloagabc") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("furpownnjkll","atmioationmlmnoanianmaninmuli") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("nnnnjgabmanipultationckabcdnljkleffgknjkabcdeafgjkclmljkl","mthmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("thabcdefghhijkanmanilmmicgonomloa","thabcdefghhijkanmanilmmicgloa") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("gabcnnbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmnopqrstuvwxyzccbbaaaccccbbaaaccccbbaaaccccbbaaabcabcdefmlfgjkl","gabcnjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("acchmicghloadabbgabacfgnjjkl","nbbbaaaaccbbaaaccccabbaaacccccbbaaaaccccbbaaaaccabcdefghijklmntopqrstuvwxyzccbbbaaaccccbbaaaccccbbaaaccnnjklccbabaaabcjkl") == false)){ tests_passed++; } total_tests++;
    
    if((cycpattern_check("anjknbbbaaaaccbbagabmanipultatiocaaccccabbaaaccccccbbacbbaaaccccbbaakabcjklanmanibcdefghijklm","thmicghlcgabcthmicgloaoagabc") == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


