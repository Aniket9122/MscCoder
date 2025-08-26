#include <vector>
#include <string>
using namespace std;

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
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

    if((issame(filter_by_substring({}, "john"),{}))){ tests_passed++; } total_tests++;

     if((issame(filter_by_substring({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"xxx", "asd", "aaaxxy", "john doe", "xxxAAA", "xxx"}, "xx"),{"xxx", "aaaxxy", "xxxAAA", "xxx"}))){ tests_passed++; } total_tests++;

     if((issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, "john"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"grunt","trumpet","prune","gruesome"}, "run"),{"grunt","prune"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"banana","apple","kiwi","peach"}, "a"),{"banana","apple","peach"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"hello","world","python","numpy","pandas"}, "py"),{"python","numpy"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, ""),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc","bcd","cbd","dbc","cda"}, "bc"),{"abc","bcd","dbc"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"a","ab","abc","abcd","abcde","bcde","cde"}, "cd"),{"abcd","abcde","bcde","cde"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"123","456","789","101112"}, "12"),{"123","101112"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"cat","dog","elephant","rhinoceros","seagull"}, "e"),{"elephant","rhinoceros","seagull"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisestablishmentarianism","floccinaucinihilipilification"}, "ili"),{"supercalifragilisticexpialidocious","floccinaucinihilipilification"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"moon","stars","sun","planets"}, "s"),{"stars","sun","planets"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"earth","mars","jupiter","saturn","uranus"}, "s"),{"mars","saturn","uranus"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"hello","world","python","numpy","pandas","numpy"}, "py"),{"python","numpy","numpy"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisestablishmentarianism","floccinaucinihilipilification","floccinaucinihilipilificatnion"}, "ili"),{"supercalifragilisticexpialidocious","floccinaucinihilipilification","floccinaucinihilipilificatnion"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"hello","world","python","numpy","pandas"}, "antidisestablishmentarianismpy"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisestablishmentarianism","floccinaucinihilipilification","floccinaucinihilipilificatnion"}, "ili12"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisesshmentarianism","floccinaucinihilipilification","floccinaucinihilipilificatnion","floccinaucinihilipilificatilinion"}, "ili"),{"supercalifragilisticexpialidocious","floccinaucinihilipilification","floccinaucinihilipilificatnion","floccinaucinihilipilificatilinion"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","sun","floccinaucinihilipilificatioearthn"}, "ili"),{"supercalifragilisticexpialidocious","floccinaucinihilipilificatioearthn"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"123","456","789","101112"}, "122"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisestablishementarianism","floccinaucinihilipilification"}, "ili"),{"supercalifragilisticexpialidocious","floccinaucinihilipilification"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc","bcd","cbd","dbc","cda","cfloccinaucinihilipilificatilinionda"}, "bc"),{"abc","bcd","dbc"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"earth","mars","jupiter","saturn","uranus"}, "numpuranusys"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisestablishementarianism","floccinaucinihilipilification","supercalifragilisticexpialidocious"}, "ili"),{"supercalifragilisticexpialidocious","floccinaucinihilipilification","supercalifragilisticexpialidocious"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"hello","world","python","numpy","pandas"}, "antidisestablishmentariasaturnnismpy"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisesshmentarianism","floccinaucinihilipilification","floccinaucinihilipilificatnion","floccinaucinihilipilificatilinion","floccinaucinihilipilifi101112cation"}, "ili"),{"supercalifragilisticexpialidocious","floccinaucinihilipilification","floccinaucinihilipilificatnion","floccinaucinihilipilificatilinion","floccinaucinihilipilifi101112cation"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"supercalifragilisticexpialidocious","antidisestablishmentarianism","floccinaucinihilipilification","floccinaucinihilipilificatnion"}, "floccinaucinihilipilificatioearthn"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"hello","world","python","numpy","s"}, "antidisestablishmentariasaturnnismpy"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"hello","world","python","numpy"}, "antidisestablishmentarianismpy"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"antidisesshmentarianism","floccinaucinihilipilification","floccinaucinihilipilificatnion","floccinaucinihilipilificatilinion"}, "ili"),{"floccinaucinihilipilification","floccinaucinihilipilificatnion","floccinaucinihilipilificatilinion"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"hello","world","python","numpy","pandas","numpy"}, "antidisestablishmentarianismpy"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc","bcd","cbd","dbc","cda","cfloccinaucinihilipilificatilinionda","dcbd"}, "bbc"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc","bcd","cbd","dbc","cda","cfloccinaucinihilipilificatilinionda","dcbd","cfloaccinaucinihilipilificatilinionda"}, "bbc"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"123","456","789","101112","456"}, "12"),{"123","101112"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg"}, ""),{"abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc(d)e","ba%cd","cde","array","12345"}, "(d)"),{"abc(d)e"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"wsrefgtrh","zxyvtru","asxwaqzx","kjbncxz"}, "tr"),{"wsrefgtrh","zxyvtru"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg"}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg","abcdefg"}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdeits"}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg","abcdefg"}, "upromoteniversally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg","abcdefg","abcdefg"}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, "Star"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcgdefg","aasxwaqzxbcdefg","want","abcdefg","abcdefg","abcdefg"}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdeits"}, "fortune,"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcgdefg","aasxwaqzxbcdefg","want","abcdefg","abcdefg","abcdefg"}, "box"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"peoplbige","abcdefg","abcdefg"}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"an","abcdeits"}, "universally"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg","abcdefg","abcdefg"}, "univerhavely"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, "abc"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, "substring"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"","",""}, "substring"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"substring","substring","substring"}, "substring"),{"substring","substring","substring"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"string","bingo","frost","parka"}, "substring"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"","",""}, ""),{"","",""}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"","a","","b"}, ""),{"","a","","b"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({""}, ""),{""}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc","bcd","cde","def"}, "a"),{"abc"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg"}, "form"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, "Green"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg"}, "fom"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg","abcdefg"}, "m"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"fom","abcdefg"}, "fom"),{"fom"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdbefg"}, "form"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abbcdefg","fom","abcdefg"}, "fom"),{"fom"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg"}, "fofm"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abbcdefg","fom","abcdefg","abbcdefg"}, "fom"),{"fom"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"osafortune,cknowlledged,p","abcdefg","abcdefg"}, "fom"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc(d)e","ba%cd","cde","array","12345"}, "dozen"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"osafortune,cknowlledged,p","abcdefg"}, "fom"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"wsrefgtrh","zxyvtru","asxwaqzx","zxyvtConstitutionru","kjbncxz"}, "tr"),{"wsrefgtrh","zxyvtru"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc(d)e","ba%cd","cde","array","12345","12345"}, "Saabc(d)en"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abc(d)e","ba%cd","cde","array","dog"}, "doquartuzzen"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"abcdefg"}, "rtr"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({}, "form"),{}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_substring({"osafortune,cknowlledged,p","abcdefg","orm","abcdefg"}, "fom"),{}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


