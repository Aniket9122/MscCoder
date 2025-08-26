#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function to count the number of vowels in a string
int countVowels(const string& s) {
    int num_vowels = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            num_vowels++;
        }
    }
    return num_vowels;
}

// Function to filter words based on the number of vowels
vector<string> selectWords(const vector<string>& words, int n) {
    vector<string> filtered_words;
    for (string word : words) {
        if (countVowels(word) >= n) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<string> a,vector<string>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
    if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(select_words("Mary had a little lamb", 4) , {"little"}   ))){ tests_passed++; } total_tests++;

    if((issame(select_words("Mary had a little lamb", 3) , {"Mary", "lamb"} ))){ tests_passed++; } total_tests++;

    if((issame(select_words("simple white space", 2) , {}     ))){ tests_passed++; } total_tests++;

    if((issame(select_words("Hello world", 4) , {"world"}  ))){ tests_passed++; } total_tests++;

    if((issame(select_words("Uncle sam", 3) , {"Uncle"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxcvbnm", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("The", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxcvbnm", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brown", 4) , {"brown"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bwrown", 5) , {"bwrown"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("The", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuu", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuu", 0) , {"uuu"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ThTe", 3) , {"ThTe"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brown", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("River", 3) , {"River"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxcvbnm", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("gh", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("jumpedABCDEFGH", 10) , {"jumpedABCDEFGH"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyvbnm", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuh", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Thee", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuuu", 0) , {"uuuu"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("u", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuh", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("wbwrown", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuuQuick", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuh", 2) , {"guuuuh"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("u", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuu", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iii", 0) , {"iii"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("buuurown", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuh", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doggh", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iii", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iicdi", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ab", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Thee", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brown", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quick", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bnrown", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxmcvbnm", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lAzY", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quick", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bnrown", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iii", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iicdi", 2) , {"iicdi"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doggh", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doge", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Tee", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesissippiRiver", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("the", 2) , {"the"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ef", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doggh", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iiicdi", 2) , {"iiicdi"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("afoxb", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iii", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ij", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guu", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("The", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Tee", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuuQuick", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaoathher", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doghgh", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("jumpedABCCDEFGH", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ijEFGH", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ef", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ef", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iicdi", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iij", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Tee", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cd", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uu", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuuu", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doggh", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklkzxcvbnm", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("foxaadoga", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaacdguuuuh", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iiii", 0) , {"iiii"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cddog", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaoathher", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazy", 3) , {"lazy"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuh", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("g", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("wbwrown", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwerbtyuiopasdfghjklzxcvbnm", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oviiiMississippier", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rthe", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesssippiRiver", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("obrownoo", 4) , {"obrownoo"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuh", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aadee", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesissippiRiver", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("foxwbwrown", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lanzy", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doggh", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oviiiMississippier", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ijEFiGH", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lyanzy", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ijy", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quieck", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("juuuUmPed", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("jumpedABCDQuiQwertyuiopasdfghjklkzxcvbnmverckEFGH", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oviiiMississippier", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cd", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oviiiMississippier", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doghggh", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Thab", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iicd", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesissippiRiver", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaoathher", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rthe", 3) , {"rthe"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quick", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuu", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesssippiTeeRiver", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxmcvbnm", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dh", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("foxwbrwron", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doggh", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QwertyuiopasdfQwertyuiopasdfghjklkzxcvbnmverghjklzxcvbnm", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bwrown", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogghh", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ij", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ThTe", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uu", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuu", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("thhe", 3) , {"thhe"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("buuuroMisesissippiRiverx", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesissippiRiverQwerbtyuiopasdfghjklzxcvbnm", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bwrown", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxcvbnm", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iijy", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("tlanzyhe", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuh", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("gownuh", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brrowwn", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ga", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bwrown", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uu", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browThee", 5) , {"browThee"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guu", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bworon", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rthe", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iiii", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("TeThe", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iijiii", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("e", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("gaa", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Mab", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ijEFiGH", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ThTe", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuobrowunooick", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iicdi", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Misesissippi", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ee", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Theeab", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doge", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("pjumpDEFGH", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("juuuUmPed", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("euuue", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lanlzy", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bnrown", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("jUmP", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bworon", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxcvberownbnm", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ooover", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaaab", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bwrrown", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("RrtheiveQwertyuiopasdfghjklkzxcvbnmverrThe", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesissipipiRiver", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuu", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuuQuick", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("RrtheiveQwertyuiopasdfghjklkzxcvbnmverrThe", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("RrtheiveQwertyuiopasdfghjklkzxcvbnmverrThe", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("jumpedABCCDEFGH", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cc", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cc", 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("eQwerbtyuiopasdfghjklzxcvbnm", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("RrtheiveQwertyuiopasdfghjklkzxcvbnmverr", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lanlzy", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iicd", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("RrtheiveQwerityuiopasdfghjklkzxcvbnmverrThe", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("eTee", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Gh", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lanlzy", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogicdi", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("obrowunoo", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doge", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cd", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ov", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuuh", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quieck", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oab", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("folx", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("folx", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("guuuuuh", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ThTe", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("c", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertiyuiopasdfghjklzxcvbnm", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iiTheooo", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ddogicdi", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("jUmPed", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("jumpedABCCDE", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MMississippi", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dbrownThTheooooge", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ijthe", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ed", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogghh", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Te", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("doggh", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("eTeafoxbdoge", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iiiMississipp", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Mispspi", 5) , {"Mispspi"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dijy", 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Theetbuuurownhe", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("gouwnuh", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ooab", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ijEFiGH", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brown", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bthjumpedeown", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cdddog", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("gdh", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brorwn", 5) , {"brorwn"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("The", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dooeoveroggTheeabh", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iiii", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ij", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("fox", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MisesisaoousippiRiver", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("c", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("wdobwrown", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oooaob", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 3) , {"Quick"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quicck", 4) , {"Quicck"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quick", 3) , {"quick"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 6) , {"ABCDEFGH"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quicqk", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaa", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rRiver", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFG", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aadoguu", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("The", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("over", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oo", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cd", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwertyuiopasdfghjklzxcvbnm", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QQuick", 4) , {"QQuick"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overxQwertyuiopasdfghjklzxcvbnm", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaa", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogEABCDEFGH", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("tzyk", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazy", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quick", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBCDEFQuicckGick", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwuiopasdfghjklzxcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaaa", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qukick", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaaaa", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aadogu", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overrbrownQwertyuiopasdfghjklzxcvbnm", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aadoguu", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overthexQwertyuiopasdfghjklzxcvbnm", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brownr", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGAH", 6) , {"ABCDEFGAH"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("the", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qwertyuiopasdfghjklzxcvbnm", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rer", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBCDEFQuicowcd", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browcdfox", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brownr", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaarbrownaa", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brown", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qujUmPedick", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("re", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oo", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quuick", 3) , {"quuick"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bo", 1) , {"bo"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quick", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qujUmiiiiPedick", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogiquick", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCBDEFGHoverQwuiopasdfghjklzxcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwuiopasdfghjklzxcvbnm", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quicqk", 4) , {"quicqk"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brownr", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwuiopasdfghhjklzxcvbnm", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazy", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aadoaaaguu", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Theaadoaaaguu", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPEedBCDEFQuicowcd", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rer", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBCDEFQuifcox", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCBDEFGHovwuiopasdfghjklzxcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browonr", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazy", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quiick", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaaaaa", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGAH", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGA", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rRiver", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ab", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("euee", 0) , {"euee"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("foxbrowonr", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browcdfox", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cd", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("re", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rRnthever", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browonABCDEFGHr", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaaaa", 0) , {"aaaaa"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("over", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGA", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazzy", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("River", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazzy", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MississiThe", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAPEedBCDEFQuicowcd", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("the", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuu", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oever", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazy", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazzy", 4) , {"lazzy"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qaaa", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QQuick", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rer", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("he", 1) , {"he"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCFDEFGH", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("uuucd", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QQuick", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ucd", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qukick", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qick", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lazz", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Mississippi", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("over", 2) , {"over"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("foxwcd", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwertyuiopasdfghjklzxcvbnm", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("bo", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quick", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("reriiii", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browonr", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qaaa", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rRnnthever", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPeudBCDEFQuicowcd", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QuiQcck", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MississippiquAjUmPedBCtheDEFQuicowcdver", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("BABCDEFGH", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ulazyuucd", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("r", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("wn", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("River", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ucd", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPEedBCDEFQduicowcd", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogiquick", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quick", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browonABCDEFGHr", 11) , {"browonABCDEFGHr"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QutzoverQrwuiopasdfghjklzxcvbnmyick", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qucicquk", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lAzY", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("he", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("brownonr", 6) , {"brownonr"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("tzoverQwuiopasdfghjklzxcvbnmy", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBCDEFQuicowcd", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aadoguu", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFGH", 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("foxbrowonr", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwuiopasdfghjklzxzcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogEABCDEFGH", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oo", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ucd", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aaoguu", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFdogiquick", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browonr", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("fx", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quicqk", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QQuickquick", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("The", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overxQwertyuiopasdfghjklzxcvbnm", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overthexQwertyuiopasdfghjklzxcvbnm", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cQuiick", 4) , {"cQuiick"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCBDEFGHoverQwuiopajsdfghjklzxcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overthexQwertyuiopasdfghjklzxcvbnm", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qucicuk", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rquickiiiiRiver", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("fox", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lAzAY", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dogEABCDEFGH", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFdogiquick", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dgogi", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ctheABCDEFGH", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCBDEFGHovijerQABCDEFGAwuiopasdfghjklzxcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwuiopasdfghjklzxcvbnm", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAoeverPEedBCDEFQuicowcd", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aa", 0) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overthexQwertyuiopasdfghjklzxcvbnm", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("reriiii", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("he", 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCDEFG", 5) , {"ABCDEFG"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCBDEFGHoverQwuiopajsdfghjklzxcvbnm", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QuiQcckQuick", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("foxwcdy", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ab", 1) , {"ab"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Quiick", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overrbrownQwertyuiopasdfghjklzxcvbnm", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dog", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overxQwertyuiopasdfghjklzxcvbnm", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iii", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("rRntheve", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overrbrownQwertyuiopabsdfghjklzxcvbnm", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quuick", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ucd", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("re", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("Qaaaa", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browonABCDEF", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browcodfox", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("the", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("cd", 2) , {"cd"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MississippiquAjUmPedBCtheDEFQuicowcdver", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QQuick", 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("y", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCBDEFGHovijerQABCDEFGAwuiopasdfghjklzxcvbnm", 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("AG", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quioverrbrownQwertyuiopabsdfghjklzxcvbnmck", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qujUmPedick", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ooo", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("iiaia", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ethe", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBDCDEFQuicckGick", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quioverrbrownQwertyuiopabsdfghjklzxcvbnmck", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBCDEthe", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overQwuiopasdfghjklzxcvbnm", 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("oo", 0) , {"oo"}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ulazyuucd", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("QQuick", 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCFDEFGHhe", 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("MississiThe", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ABCBDEFGHovijerQABCDEFGAwuiopasdfBghjklzxcvbnm", 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dgab", 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("a", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("aadogu", 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quicqk", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("qucicuk", 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("ethhe", 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("overthexQwertyuopasdfghjklzxcvbnm", 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBDCDEFQuicckGick", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("browcdfoerRnntheverox", 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPEedBCDEFQuicowcd", 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("lQuiQcckQuickAzY", 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("dgab", 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(select_words("quAjUmPedBCDEFQuicckGick", 1) , {}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


