#include <string>
#include <cctype>      // for tolower()
using namespace std;

int vowels_count(const string& s) {
    int count = 0;
    const string vowels = "aeiou";
        
    for (char c : s){
        if ((vowels.find(tolower(c)) != string::npos)){    // check if the character is a vowel or not, convert to lowercase before checking 
            count++;
        }
    }
    
    return (count + (s.length() > 0 && s[s.length()-1] == 'y'));   // special case handling for 'y' at end of word
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

    if((vowels_count("abcde") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("Alone") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("key") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("bye") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("keY") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("bYe") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("ACEDY") == 3)){ tests_passed++; } total_tests++;

   
    if((vowels_count("abcde") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("Alone") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("key") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("bye") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("keY") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("bYe") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("ACEDY") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("hello") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("apple") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("time") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("glue") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("candy") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("parody") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("monkey") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("why") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("bay") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouy") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("JBXFOFH") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("c") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyaeiouy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouoy") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("applebay") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("eaeiouy") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("applebaglue") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("glumonkeye") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("ndy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("ctieme") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("wyhy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("parpody") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("apndyple") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("glumonglluekeye") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("ctiparpodyecme") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aeicouyaeiouy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("pplebay") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("glumonglluekewyhyye") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiooy") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("applaebay") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("bpplebay") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("bayy") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("hwhy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioyoy") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aaappleeioauy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("candaeioyoyyndy") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("candaeioyoyynad") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("glumonappleglluekeye") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioowyhyy") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("cthelloieme") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("ctiieme") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("glumonkeyee") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aeuyaeibayouy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("bcandaeioyoyynadpplebay") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("eaeiy") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioappleuyaeiouy") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("bcandaeioyoeyynadpplebay") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aeuyaeibayoyuy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("applebaglueaeiye") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("aeictiemeoappleuyaeiouy") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("ttimeime") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyaeglumonkeyeiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioydndyoy") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioowyhyoy") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("ahelloaappleeioauy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("glumone") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiyy") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("gluemone") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("bcandyndaeioapplebaglueyoyynadpplebay") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("ctiparpodyaecme") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("glumoaeioowyhyyne") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("applebaglueaeiyectiieme") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("ba") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("nddy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("eaeeiouy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("pardy") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aba") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("glumopnappleglluekeye") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("applebagluyeaeiye") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("aeicandaeioyoyynadooewyhyy") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("glumlonkoeaeioowyhyoyyee") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aeuyaeeibayouy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("teglumonglluekeyeime") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("cmonkeyandy") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("candaeioyd") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("canddaeyd") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouwyhyyaeglumonkeyeiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("cthelloiecanddyndyme") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("pzUzSiO") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aeyaeibayoyuy") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("aeeyaeibayoyuy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("bcandyndaeioapplaebaglueyoyynadpplebay") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiyycandaeioyoyynad") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("ctiemictiiemee") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aeicandaeioyoyynadooewyhyyaeiouyaeiouypzUzSiO") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("hKaAyE") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("canddy") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("gluemglumlonkoeaeioowyhyoyyeaeiouoye") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("applaebbaglumonglluekewyhyyey") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiyycandaeihwhyoyoyynad") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("applebaglueaeiyectiieeme") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aeuyaeiyuy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioappleuyaeiiouy") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("y") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("applebageluyeaeiye") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("eapple") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("ctipttimeimearpodyaeceme") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("acanddyteglumonapplaebbaglumonglluekewyhyyeyglluekeyeimeeyaeibayoyuy") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("ctmeimearpodyaeceme") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("pctiparpodyecmearpody") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaa") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYXW") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptography") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("psychology") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("dizziness") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("abstemiousness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("facetiousness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpabstemiousnessqrstvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpabstemiousnessqrstvxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfacetiousness") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsychology") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfghjklmnpqrstvwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEFGHIJKLMNOPQRSTUVWXZ") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYYXW") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsychology") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptograpy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aAEIOUYXWouy") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptographcy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaaaaauyfacetiousness") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmnpqrstvwxyzsnesshology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiouyfacetiousnessioouy") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhjklmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("AEW") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracpy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklmnpqrstvwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaa") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiouyfacetiousnessioAEIOUYYXWouy") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXWouy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptograpyy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("psyc") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccryptographyhology") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptograacpsychologyOAEIOUYXWouycpy") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aieiouy") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbcdfgjhjklmnpqrstvwxyzograacpsychologyOAEIOUYXWouycpy") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaaaaauyfacfacetiousnessetiousness") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiouyfacetiousnessioouyuy") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceftiousness") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuy") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaaaa") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiouyfaceaeiouyfacetiousnessss") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyhology") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("aieioABCDEFGHIJKLMNOPQRSTUVWXZuy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("dizzinesds") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiousnessioouy") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("aaaAaaa") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("oaAEIOUYXWouy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsbcdfghjklmnpabstemiousnessqrstvwxyzology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgbhjklmnpabstemiousnessqrstvxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryptographcyuyfacetiousness") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("pssypsychology") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeiouyfaceftiousness") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmnpqrstvwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklgmnpabstemiousnessqrstvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffbcdfghjklmnpabstemiousnessqrstvxyzghjklmnpqrstvwxyzsness") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetioiusnessioouy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemiousnessjklmnpqrstvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemaeioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuynessjklmnpqrstvwxyz") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("psiaeaeiiouyfacetioiusnessioouyyc") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyenns") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("aeipsypsycfacetioubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyholuyuy") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemiousnessjklmnpqrstvvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyz") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiocryptograacpsychologyOAEIOUYXWouycpyiusnessioouy") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyz") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracaAEIOUYXWouypy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("crypotography") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("aieioABCDEFGHIJKCLMNOPQRSTUVWXZuy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aeipsypsycfacetioubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychsologyOAEIOUYXWouycpyholuyuy") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracfacetioubcdffghjklfmnpqrstvwxyzsnesspy") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousness") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklmnpqrswxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("pbcdfghjklgmnpabstemiousnessqrstvwxyzlogy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklmnpqraAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzstvwxyzsness") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstfecryptogracaAEIOUYXWouypymiousnessjklmnpqrstvvwxyz") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aieieouy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiouyfacetiousnesasbstemiousnesssioouyuy") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklgmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("psycpbcdfghjklgmnpabstemiousnessqrstvwxyzlogy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnessiousness") == 42)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfghjwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgbhjklmnpabstemiousnessqrstvaOAEIOUYXWouyxyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aieiiouy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aaaaaAaaaa") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiousaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyzy") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstemiousnessqrstvwxyzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("OAEIOUYXW") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptiaeaeiouyfacetiousnessioAEIOUYYXWouyogracpy") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmnpqrstvwxyfzsnesshology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklmnpqraAAaaAaaAaaiaeaeiouyfacetiousnessioouss") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemiousnessjklmnpqrstvvxwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("crypttographcy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceftiousnesasbstemiousness") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhologyouyfacetiousssioouyuy") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceftiousneness") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrsaieioABCDEFGHIJKLMNOPQRSTUVWXZuyxyz") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("psiaeaeiiobcdfghjcetioiusnessioouyyc") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyenns") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrstvyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousness") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyhology") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetinessetiousness") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfacetiousnessy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfacetiousnbcdfghjklmnpqrstvyzessy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("fazcetioubcdffghjklmnpqrstvwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("psyypsycfacetioubcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxysouycpyhology") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjpbcdfghjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnessiAousness") == 43)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhologyuyfacouyuy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("OAEaAAaaAaaAaaaaaUYXW") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiouyfaceaeiouyfacetieousnessss") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghstvwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("ai") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aiei") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("yy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("pcsypsycfacetioubcdfghjklmnpqrstvwxyzsnesshology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnesslmnpqrstvwxyzsness") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnessWouy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("aaaaaAapsychologyaaa") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiiociaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyenns") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("abs") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychyologyOAEIOUYXWouycpyhology") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaafacetioubcdffghjklmnpqrstvwxyzsnessAaaaaa") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("facettioubcdffghstvwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiouyfacetiousnessiioAEIOUYYXWouy") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetiousnessy") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaacrypotographyAaaaaa") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhologyuyfacetiousnessiaoouyuyenns") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("aAEIcryptograpyOUYXWouy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdaeiouyfacetiousnbcdfghjklmnpqrstvyzessyffghjklmnpqrstvwxyzsness") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbcdfgjhjklmnpqrstvwxyzograacpsychologyOAEIOUYXWouybcdfgjhjklmnpqrstvwxyzcpy") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaoeiiouyfacetiousnessioouy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptogaoeiouyfaceaaieieiouyfacetieousnessssraphyhologyouyfacetiousssioouyuy") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("aAEIaAAaaAaaAaaaaaograpyOUYXWouy") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjpbcdfghjklgmnpabstemiousnessqrstvwaAEIOUYXWouyxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbcdfgjhjklmnaieioABCDEFGHIJKCLMNOPQRSTUVWXZuycdfgjhjklmnpqrstvwxyzcpy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizziycpyhology") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIYOUYYXW") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstemiousnessqrzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabqrstvwxyz") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryptographcyuyfacetpsycinousness") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnfacetioubcdfghjwxyzsnesspqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnesssiousness") == 48)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychologyOAEIOUYfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessXWouycpyhology") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyennstographyhology") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("crypytograpyy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyennstograpahyhology") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryptographcyyuyfacetpsycinousness") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpqrstvwaxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnessiAousness") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracaAEIOUYXWoucpsyccryptographyhologyypy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbaeiouycdfgjhjklmnpqrstvwxyzograacpsychologyOAUEIOUYXWouybcdfgjhjklmnpqrstvwxyzcpy") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaoeiiouyfacetiioouy") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("facettioubcdffghstvwxyzsnOAEaAAaaAaaAaaaaaUYXWess") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrsaieioABCDEFGHIJKLMNOPQRSTUVWXZuyyz") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aaaaaaAapsychologyaaai") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXWaeiocryptographcyuyfacetiousnessouy") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemioussnessaeiouyfaceftiousness") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeioouyfaceftiousnesis") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("kBhhbjyoPZ") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiabsaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuy") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryAEWptographcyyuyfacetpsycinousness") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzs") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiacryptogracaAEIOUYXWoucpsyccryptographyhologyypyeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyz") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsycholaaaaaaAapsychologyaaaiogy") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("aaeiouyfaceftiousnenessieiiouy") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpqrstvwaxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqfacetioubcdffghstvwxyzsnesssiAousness") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioaAAaaAaacrypotographyAaaaaaubcdfghjklmnpqrstvwxyzsness") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("aeipsypsycfacetoubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyholuyuy") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiousaAAaaAaaAaaiaaieioABCDEFGHIJKLMNOPQRSTUVWXZuyeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyzy") == 58)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiacryptogracaAEIOUYXWoucpsyccryptographyhologyypyeaeiouyfaacetiousnessioouyaaabcdfghjklmnvwxyz") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiocryptograacpsychologyOAEIOUYXWoguycpyiusnessioouy") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyholaogyuyfacetiousnessioouyuyenns") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgbhjklmnpabstemiousneABCDEFGHIJKLMNOPQRSTUVWXZssqrstvxyz") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklgmnpqrtvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aeipbcdfghjklgmnpabstemiousnessqrzlogyeiiouy") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiiociaeaeiocpsyccryptographyhologyuyfacetiousnyenns") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstvwxyzologyxyz") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiaousnessioouyaaa") == 33)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaaa") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgbhjklmnpabsbcdfgbhjklmnpabstemiousnessqrstvaOAEIOUYXWouyxyztemiousnseABCDEFGHIJKLMNOPQRSTUVWXZssqrstvxyz") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffbcdmfghjklmnpabstemiousnessqrstvxyzghjklmnpqrstvwxyzsness") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("OAEIOUYXOW") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgbhjklmnpabsteemiousnessqrstvxyz") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiouyfacetiouaeioiaeaeiocpsyccryptographyhologyuyfacouyuysnessioAEIOUYYXWouy") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstemiousnpsypsycfacetioubcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyhologyessqrzlogyeiiouy") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("aeipbcdfghjklgmnpabstemiousnessqrzlogyyeiiouy") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("pcsypsycfacebcdfghjklgmnpqrstvwxyzrstvwxyzsnesshology") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetaAEIOUYXWouyiousnessy") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfacetiousneses") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstepmiousnessqrzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("basbstemiousness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEFGHIJKLMNOPQRSTUYZ") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjpbcdfghfacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("dizzifacettioubcdffghstvwxyzsnOAEaAAaaAaaAaaaaaUYXWessness") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemaeioiaeaeiocpsyccryptographyhologyuyfacetiousinessioouyuynessjklmnpqrstvwxyz") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("aieioABCDEFGHIJKLMNOPQRiaeaeiiouyfacetiousnessioouySTUVWXZuy") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaniaeaeiouyfacetiousnessioouyaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaoeiiouyfacetiiooaeioiabsaeaeiocpsyccryptographyhologyuyfacetiousnessioaAAaaAaafacetioubcdffghjklmnpqrstvwxyzsnessAaaaaaouyuyuy") == 66)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiouyfacetiousnessioAEIYXWouy") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmniaeaeiiouyfacetiouspsypsycfacetioubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychologyOAEIOUYfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessXWouycpyhologynessioouypqrstvwxyzsness") == 73)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXfazcetioubcdffghjklAEIaeiocryptographcyuyfacetiousnessOUYXWmnpqrstvwxyzsnessWouy") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("crypytograpaeioiaeaeiocpsyccryptogaoeiouyfaceaaieieiouyfacetieousnessssraphyhologyouyfacetiousssioouyuyyy") == 54)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemiousnessjdklmnpqrstvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeioouyfaceftiousnesais") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracfacetioubcdffghjklfmnpqrstvwxyzsneaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzsspyaeiouyfacetiousnbcdfghjklmnpqrstvyzessy") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("dizzinesdcryptbcdfgjhjklmnpqrstvwxyzograacpsychologyOAEIOUYXWouycpys") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjpbcdfghjklgmnpabstemiousneaeiouyfaceftiousnnesasbstemiousnessYXWouyxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpabstemiousnessqrsstvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceftiousneneuss") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiacryptogrWacaAEIOUYXWoucpsyccryptographyhologyypyeaeiouyfaacetiousnessioouyaaabcdfghjklmnvwxyz") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfcrypytograpyyghjklmnpabstemiousnessqrsstvwxyz") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptogaoeiouyfaceaaieieoiouyfacetieousnessssraphyhologyouyfacetiousssioouyuy") == 53)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousnesspsyc") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbcdfgjhjklmnpqrstvwxyzograacpsychologyOAEIOUYXWouaeiouyfacetiousnesesy") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpabstemiousnesssqrsstvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("gAaeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetaAEIOUYXWouyiousnessy") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAyEIOUYXWouy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracaAEIOUYXWoucpsycocryptographyhologyypy") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aieiiaaaAaaaouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceeftiousness") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeiouyfac") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetineousness") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmnpqqrstvwxyzsnesshology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiocpsyccryptographyhoglogyuyfacetiousnessioouyuyennstograpahyhology") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("iAEIOUYYXWaeaeiiouyfacetaaaaaAapsychologyaaaiousaAAaaAaaAaaiaaieioABCDEFGHIJKLMNOPQRSTUVWXZuyeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyzy") == 75)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeiasbstemiousnessaeiouyfaceftiousnessouyfaceaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouyfsness") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrsdizzinesstvwxyzsiaeaeiouyfacetiousnessioouyness") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiousaAAaaAaaAaaiaaieioABCDEFGHIJKLMNOPQRSTUVWXZuyeaeiouyfacetioioouyaaabcdfghjklmnvwxyzy") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiouyfaceaeiouyfacetiousnescsss") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklgmnpqrstvwxyzai") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaoeaeiocpsyccryptographyhologyouyfaceteiousssioouyuy") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptog") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("rcrypotography") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("ciaeaeiouyfacetiousnessioouy") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracpyaAEIOUYXWouy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("casbstemiousnessaeiasbstemiousnessaeiouyfaceftiousnessouyfaceaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouyfsness") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemioussnessaeioucryptogracfacetioubcdffghjklfmnpqrstvwxyzsnesspyyfaceftiousness") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizziyycpyhology") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aipcbcdfghjklgmnpabstepmiousnessqrzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaaAaaAaaaaa") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("dizziaieABCDEFGHIJKLMNOPQRSTUYZiness") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetinessetiousnness") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aieieoyuy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouydffghjpbcdfghfacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 58)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsycholog") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("fazcryptogcetioubcdffghjklmnpqrstvwxyzsness") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("aa") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("facettioubcdffghstvwxyzsfnOAEaAAaaAaaAaaaaaUYXWess") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubgcdffghjpbcdfghjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaafacetioubgcdffghjpbcdfghjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessa") == 43)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpuyfacfacetiousnessetiousness") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 94)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnesaisaaauyfacfacetiousnessetiousness") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousnessioaeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousnessouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstevwxyzologyxyz") == 77)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaafacetioubgcousnessioouypqrstvwxyzsnessa") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryptographccpsychologfacetpsyaicinousness") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("asfacetioaAAaaAaacrypotographyAaaaaaubcdfghjklmnpqrstvwxyzbcdfghjklmnpabstemiousnessqrstvxyzsnessbstemioussnessaeiouyfaceftiousness") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiuocpsyccryptographyhologyuyfacetiousnessioouyuyennstograpahyhology") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("f") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetineousnesss") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEFGHIJKLrcrypotographyMNOPQRSTUYZ") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffbcdmfghjklmnpabstaeioiaeaeiouyfacetiousnesasbstemiousnesssioouyuy") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaoeiiouyfacetiouisnessioouy") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbcdfgjhjklmnpqrstvwxyzograacpsychologyhOAEIOUYXWouybcdfgjhjklmnpqrstvwxyzcpy") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aieioABCDEFGHIJKLMNOPQRSTUVWXZpsiaeaeiiobcdfghjcecpsyccryptographyhologytioiusnessioouyycuy") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetioubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 143)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemaeioiaeaeiocpsyccryptographyhologyuyfacetafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnessiousnessessjklmnpqrstvwxyz") == 63)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnesslcryptogracaAEIOUYXWoucpsycocryptographyhologyypymnpqrstvwxyzsness") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("OUYXW") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsaAEIcryptograpyOUYXWouyychology") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyffazcetioubcdcpsyccrypaeiioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyennstographyhologyffghjklmnpqrstvwxyzsnessacetaAEIOUYXWouyiousnessy") == 59)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceftiousnesasbstemiousnuess") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiaeaoeiiouyfacetiouisnessioouyipsypsycfacetoubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyholuyuy") == 48)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpabsteusnessqrstyyvxyz") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaieioABCDEFGHIJKLMNOPQRSTUVaAAaaAaacrypotographyAaaaaaWXZuyaAaaAaafacetioubgcousnessioouypqrstvwxyzsnessa") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("absaipbcdfghjklgmnpabstemiousnpsypsycfacetioubcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyhologyessqrzlogyeiiouy") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstemiousnpsypsycfacetioubcdfafacetineousnessghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyhologyessqrzlogyeiiouy") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstemiousnpsypsycfacetioubcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychologyOAEIOUYdizzifacettioubcdffghstvwxyzsnOAEaAAaaAaaAaaaaaUYXWessnesscpyhologyessqrzlogyeiiouy") == 69)){ tests_passed++; } total_tests++;

    if((vowels_count("eiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetaAEIOUYXWouyiousnessy") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubgcdffghjpbcdfghjklgmnpabstemiousnessqrstvwxyzlogynessioouypqrstvwxyzsness") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceftiousnesfacetioaAAaaAaacrypotographyAaaaaaubcdfghjklmnpqrstvwxyzsness") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiuocpsyccryptographyhologyuyfacetiousnessioouyuyennscpsyccryptographyhologytograpahyhology") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstfecryptogracaAEIOUYXWouygpymiousnessjklmnpqrstvvwxyz") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyffazcetioubcsnessy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("hhZCavYLHr") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("facetoiouabcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnesslcryptogracaaAEIOUYXWoucpsycocryptographyhologyypymnpqrstvwxyzsness") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("asfacetioaAAaaAaacrypotographyAaaaaaubcdfghjklmnpqrstvwxyzbcdfghjklmnpabstemiousnessqrstvxyzsnessbstemioussneytiousness") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiouyfaceaeiouyfaceetieousnessss") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmnpqrstvwxyfzsnesshologyfazcetioubcdffghjklmnpqrstvwxyzsness") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("AaeioiaeaeiocpsyccryptogaoeiouyfaceaaieieoiouyfacetieousnessssraphyhologyouyfacetiousssioouyuyIOUYXW") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjpbcdfghjklgmnpabstemiousnessqrstvwaAEIOUYXWoutyxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("aeibcdfghjklmnpabstemiousnessqrsstvwxyzouyfacetiaousness") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousneouyaaabcdfghjklmnpqrstvwbcdfghjklgmnpqrstvwxyzz") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("aieioABCDEoFGHIJKCLMNOPaAAaaAaaAaaiaeaeiouyfacetiousnessioaeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousnessouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstevwxyzologyxyzQRSTUVWXZuy") == 90)){ tests_passed++; } total_tests++;

    if((vowels_count("aaeiouyfaceftiousnenesouy") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessaeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetaAEIOUYXWouyiousnessy") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("aaeiouyefaceftiousnaenessieiiouy") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklpcsypsycfacetioubcdfghjklmnpqrstvwxyzsnesshologymnpabstemiousnessqrsstvwxyz") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsghjklmnpabstemiousnessqrstvwxyzology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("crcpy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("heBLBaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstvwxyzologyxyz") == 41)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubgcdffghjpbcdfghjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessiosness") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("ioAEIYXWouy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("AYXsZdlSV") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiocpsyccryptographyhologyuyfacetioouyuyennstograpahyhology") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaaaaauyfacfacetiousnessetiousnessABCDEFGHIJKLrcrypotographyMNOPQRSTUYZ") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAdizziaieABCDEFGHIJKLMNOPQRSTUYZinessaAaaAaaaaauyfacetiousness") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsonesaisaaauyfacfacetiousnessetiousness") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrsaieioABCDEFGHIJKLMNOPRSTUVWXZuyxyz") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpuyfacfacetiousnessetiosness") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("absaipbcdfghjklgmnpabstemiousnpsypsycfacetiouaieiiouybcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychologyOAEIOUYXWouycpyhologyessqrzlogyeiiouy") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxaeiouyffazcetioubcsnessyeyuy") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("facetifoubcdffghjklfmnpqrustvwxyzsness") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("aaeiouyfaceftiofusnenesouy") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("sGYls") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("bcaAAaaAaaAaaaaadfgjhabstemiousnessjdklmnpqrstvwxyz") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("facetoiouabcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessslcryptogracaaAEIOUYXWoucpsycocryptographyhologyypymnpqrstvwxyzsness") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("facetiobcdfghjklmnpqrstvyzubcdffghjklmnpqrstvwxyzsness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbcdfgjhjklmnpqrstvwxyzograacpsychologyOAEIOUYXcpy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("abcdfgbhjklmnpabsteemiousnessfacetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessaAAaaAaaAaaiaeaeiouyfacetiousnessioaeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousnessouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstevwxyzologyxyzabcdfghjklmnpqrstvwxyzsqrstvxyzAAaAaaAaaaaaa") == 130)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouydffghjpbcdfghfacetioubcdfghjwxyzsnessjklggmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 58)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyennstographyafacetioubcdfghjklmnfacetioubcdfghjwxyzsnesspqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnesaieioABCDEFGHIJKLMNOPQRSTUVWXZuysetfacetioubcdffghjklfmnpqrstvwxyzsnesssiousnesshology") == 93)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXWouafacetioubcdfghjklmnpqrstvwaxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnessiAousnessy") == 54)){ tests_passed++; } total_tests++;

    if((vowels_count("cpology") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfqacetioubcdfghjklmnpqrstvwxyzsnesshology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("aieioABCDEFologyypyZuy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("dizziaieABCDEFGHIJKLMNOPQRSTUYZinessyaaabcdfghjklmnvwxyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubgcdffghjpbcdfghjklgmnpabstemiousnessqrstvwxyzldizziaieABCDEFGHIJKLMNOPQRSTUYZinessyaaabcdfghjklmnvwxyzogykaipbcdfghjklgmnpabstemiousnessqrstvwxyzlogyeiiouyessioouypqrsstvwxyzsness") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("aieioABCDEFGHIJKLMNOPQRSTUVWXZpsiaeaeiiobcdfghjcecpsyccrypbtographyhologytioiusnessioouyycuy") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("crypytograpaeioiaeaeiocpsyaeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetiousnessyccryptogaoeiouyfaceaaieieiouyfacetieousnessssraphyhologyouyfacetiousssioouyuyyy") == 71)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptograIOUYXWouy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("asbsiousness") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouydffghjpbcdfghfacetioubcdfghjwxyzsnessjklggmcryptogracaAEIOUYXWouypynpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouysness") == 68)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsycholaaaaaaAapsyafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnesschologyaaaiogy") == 53)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaafacetiaeibcdfghjklmnpabstemiousnessqrsstvwxyzouyfacetiaousnessoubgcousnessioouypqrstvwxyzsnessa") == 42)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIYXW") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("ciaeaeiouyfacefacetioubcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnesslmnpqrstvwxyzsnessousnessioouy") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeioouyfaceftiousnciaeaeiouyfacetiousnessioouyesais") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("iaaAAaAaaAaaaaaeaoeiiouyfacetiiooaeioiabsaeaeiocpsyccryptographyhologyuyfacetiousnessioaAAaaAaafacetioubcdffghjklmnpqrstvwxyzsnessAaaaaaouyuyuy") == 79)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstemiousnpsypsycfacetioubcdfghjklmdizzinfacetioubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptograacpsychologyOAEIOUYdizzifacettioubcdffghstvwxyzsnOAEaAAaaAaaAaaabcdfgjhjklmnpqrstvwxyzyhologyessqrzlogyeiiouy") == 64)){ tests_passed++; } total_tests++;

    if((vowels_count("psiaeaeiiobcdfghjcetioiusneasbstemiousnessaeiasbstemiousnessaeiouyfaceftiousnessouyfaceaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouyfsnessssioouyyc") == 69)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsychologyOUYXW") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetioubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfcacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 143)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiousaAAaaAaaAaaiaaieioABCDEFGHIJKLMNOPQRSTUVWXZuyeaeiouyfacetioioouyaaabcdcryptogracpyaAEIOUYXWouyfghjklmnvwxyzy") == 66)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgbhjkllmnpabstee") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("abcdfgbhjklmnpabstciaeaeiouyfacetiousnessioouyeemiousnessfacetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessaAAaaAaaAaaiaeaeiouyfacetiousnessioaeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousnessouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstevwxyzologyxyzabcdfghjklmnpqrstvwxyzsqrstvxyzAAaAaaAaaaaaa") == 148)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptogaoeiouyfaceaaieieiouyfacetieousnessssraphyaOAyEIOUYXWouycetiousssioouyuy") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("aipcbcdfghjklgmnpabstepmiousnenssqrzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhologyoaAAaaAaaAaaiacryptogrWacaAEIOUYXWoucpsyccryptographyhologyypyeaeiouyfaacetiousnessioouyaaabcdfghjklmnvwxyzousssioouyuy") == 71)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiouyfaceaeiouyfacetieousnessaeiiociaeaeiocpsyccryptographyhologyuyfacpsypsycfacetioubcdfghjklmdizziyycpyhologyetiousnyennsss") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgbhjklmnpabstemiousnessqrstvaOAEInOUYXWouyxyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeabcdfghjklgmnpabstemiousnessqrstvwxyzs") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("tcrypttographcy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdsfghjklgmnpabstemiaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzousnessqrzlogyeiiouy") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnesfacetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetioubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfcacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 149)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiiouyfaceftiousneness") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("icpsychologyAEIOUYYXWaeaeiiouyfacetaaaaaAapsychologyaaaiousaAAaaAaaAaaiaaieioABCDEFGHIJKLMNOPQRSTUVWXZuyeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyzy") == 77)){ tests_passed++; } total_tests++;

    if((vowels_count("cpoloygyaeioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuy") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhcolaogyuyfacetiousnessioouyuyenns") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetioubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfcacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfcryptogracpymniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 145)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmniaeaeiiouyfsacetiousnessioouypqrstvwxyzsness") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouydffghjpbcdfghfacetioubcdfghjwxyzsnessjklggmcrypbcdfgjhabstemiousnessjdklmnpqrstvwxyztogracaAEIOUYXWouypynpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouysnessjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 99)){ tests_passed++; } total_tests++;

    if((vowels_count("fazAEIYOUYYXWcetiofubcdffghjklmnpqrstvwxyzsness") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemiosusnessjklmnpqrstvvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("faceatioubcffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzs") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("dizznebcdfghjklmnpabstemiousnesssqrsstvwxyzss") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAyEIOUaeiouyfaceftiousnessYXWouy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbaeiouycdfgjhjklmnpqrstvwxyzogruaacpsychologyOAUEIOUYXWouybcdfgjhjklmnpqrstvwxyzcpy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("rcgrypotographoy") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracfacetioubcdffghjklfmnpqrstvwxyzsneaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrsbcdfghjklmnpqrsaieioABCDEFGHIJKLMNOPQRSTUVWXZuyxyztvwxyzsspyaeiouyfacetiousnbcdfghjklmnpqrstvyzessy") == 63)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstgepmiousnessqrzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("OOAEIOaeiouyfaceftiousneneussUYXW") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiouyfaceaeifacetioubcdffghjklmnpqrstvwxyzsnessouyfacetieousnessss") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("craeioiaeaeiocpsyfaceatioubcffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzsccryptogaoeiouyfaceaaieieoiouyfacetieousnessssraphyhologyouyfacetiousssioouyuyyptograacpsychologyOAEIOUYXWouycpy") == 105)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptogaoeiouyfaceaaieaieiouyfacetieousnessssraphyaOAyEIOUYXWouycetiousssioouyuy") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstepmiousnessqrzlofacettioubcdffghstvwxyzsnOAEaAAaaAaaAaaaaaUYXWessgyeiiouy") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("psiaeaeiiobcdfghjcetioiusneasbstemiousnessaeiasbstemiousnessaeivouyfaceftiousnessouyfaceaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouyfsnessssioouyyc") == 69)){ tests_passed++; } total_tests++;

    if((vowels_count("asybstemioussnessaeiouyfaceftiousness") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetneousnesss") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeioouyfaceftiousnesiaeaeiiouyfacetiousaAAaaAaaAaaiaaieioABCDEFGHIJKLMNOPQRSTUVWXZuyeaeiouyfacetioioouyaaabcdcryptogracpyaAEIOUYXWouyfghjklmnvwxyzyis") == 84)){ tests_passed++; } total_tests++;

    if((vowels_count("heBLBaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaaibcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstvwxyzologyxyz") == 42)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiouyfaceftiousnesasbstemiousnuessaeiouyfacetiousnessioAEIYXWouy") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdfghjklgmnpabstemciousnessqrzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycholoogy") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracpOyaAEIOUYXWouy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiiociaeaeiocpsyccusnyenns") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetidoubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfcacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfcryptogracpymniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 145)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffbcdmfghjklmnpabstemiousnessqrstvxyzghjkflmnpqrstvwxyzsness") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyholaogyuyfacetiousnessioouyuyennns") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("heBLBaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaaibcdfghjklmnpqrstvwcpsbcdfghjklmnpabstogyxyz") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("fghjklmnpabstemiousnessqrstvxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetidoubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfcacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfcryptogracpymniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessf") == 145)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogaoeiouyfaceaeifacetioubcdffghjklmnpqrstvwxyzsnessouyfacetieousnessss") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaayniaeaeiouyfacetiousnessioouyaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetioubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfcacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrsttvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfcryptogracpymniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 145)){ tests_passed++; } total_tests++;

    if((vowels_count("aipcbcdfghjklgaieiouyenssqrzlogyeiiouy") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aieiaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouyouy") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("abss") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbaeiouycdfgjhjklmnpqrstvwxyzogruaacypsychologyOAUEIOUYXWouybcdfgjhjklmnpqrstvwxyzcpy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypaeiioiaeaeiuocpsyccryptographyholorgyuyfacetiousnessioouyuyennscpsyccryptographyhologytograpahyhology") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryptographcycinousness") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfacetioucsness") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryAEWptographcyyuaAEIOUYXWouyess") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaafacetioubcdffghjklmaOaeiouyfacetiousnessAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxaeiouyffazcetioubcsnessyeyuynpqrswxyzsnessaaauyfacfacetiousnessetiousness") == 77)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaafacetioufbcdffghjklmnpqrstvwxyzsnessAaaaaa") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffbcdmfghjklmnpabstemiousnessqrstvxyzghjkflmnpqrstvwxytcrypttographcyzsness") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklmnpqrstvwxyzsnessAaaaaa") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("fss") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("fazcrypstogcetioubcdffghjklmnpqrstvwxyzsness") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiiouyfaceftiousnneness") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeioouyfaceftiousnesiaeabcdfgbhjklmnpabstemiousnessqrstvxyzyfghjklmnvwxyzyis") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghaeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousnesspsycjklmnpqrstvyz") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemiousnesvsjdklmnpqrstvwxyz") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aipbcdsfghjklgmnpabstemiaAAaaAaaAaaiaeaeiouyfacetiousnessiiouy") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("yyyy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaieioABCDEFologyypyZuyaeaeiouyfacetiousnessioouyaaa") == 42)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaafacetiaeibcdfghjklmnpabfacetoiouabcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnesslcrypnessa") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("aieiaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwuxyzsnnessWouyouy") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("gAaeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessaceaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyztaAEIOUYXWouyiousnessy") == 59)){ tests_passed++; } total_tests++;

    if((vowels_count("nxPZx") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsychologyfacetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzs") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizzinhology") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaacrypotographyAAaaaaa") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetinefssetiousness") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccroyptographyhologyuyfacetiousnessioouyuy") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdbizzinhology") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiaaousnessiooaoeiouyfaceaeifacetioubcdffghjklmnpqrstvwxyzsnessouyfacetieousnessssuyaaa") == 60)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyfaceatiousneses") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("hOUYXfacetioubcdfghjklmnpqrstvwxyzsnessWhZCavYLHr") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaatabcdfghjklmnpqrstvwxyzs") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfsacetioubcdfghjklmnpqrstvwxyzssnesshology") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcasfacetioaAAaaAaacrypotographyAaaaaaubcdfghjklmnpqrstvwxyzbcdfghjklmnpabstemiousnessqrstvxyzsnessbstemioussnessaeiouyfaceftiousnessdfghjklmnpqrstvwaxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnessiAousness") == 90)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstemaeioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuynessjklmcnpqrstvwxyz") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstfecryptogracaAmEIOUYXWouypymiousnessjklmnpqrstvvwxyz") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("facetoiouabcdffghjkfacetaaeiouyfaceftiousnenesouyioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessslcryptogracaaAEIOUYXWoucpsycocryptographyhologyypymnpqrstvwxyzsness") == 64)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnfacetioubcdfghjwxyzsnesspqrstvwxyiaeaoeiiouyfacetiousnessioouyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnesssiousness") == 68)){ tests_passed++; } total_tests++;

    if((vowels_count("biaeaeiiouyfacetiousaAAaaAaaAaaiaaieioABCDEFGHIJKLMNOPQRSTUVWXZuyeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyzycdfghjklmnpqrstvwxyz") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiocryptographcyuyfacs") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiocpsyccryptographyhcolaogyuyfacetiopsypsychologyfacetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrstvwxyzsusnessioouyuyenns") == 69)){ tests_passed++; } total_tests++;

    if((vowels_count("facetoiouabcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessslcryptogracaaAEIOUYXWoucpsycocryptographoyhologyypymnpqrstvwxyzsness") == 50)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiiociaeaeiocpsyccusniyenns") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptbaeiouycdfgjhjklmnpqrstvwxyzogbcdfghjklmnpabstemiousnessqrstvwxyzruaacpsychologyOAUEIOUYXWouybcdfgjhjklmnpqrstvwxyzcpy") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("dizziaieABCDEFGHIJKLMNOPQRSTUYZinessyaaabaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnessWouycdfghjklmnvwxyz") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiouyfacetiousniessioouyuy") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeiouyfacetiousniuessioouyuy") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("tcrycryptogracpyaphcy") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouyffazcetioubcdcpsyccrypaeiioiaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyennstographyhologyffghjklmnpqrstvwxyzsnessacetaAEIOAEIYXWUYXWouyiousnessy") == 62)){ tests_passed++; } total_tests++;

    if((vowels_count("craeioiaeaeiocpsyfaceatioubcffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeioiouyfaceaaieieoiouyfacetieousnessssraphyhologyouyfacetiousssioouyuyyptograacpsychologyOAEIOUYXWouycpy") == 87)){ tests_passed++; } total_tests++;

    if((vowels_count("cpy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjpbcdfghaeiiociaeaeiocpsyccryptographyhologyuyfacetiousnessioouyuyennsjklgmnpabstemiousneaeiouyfaceftiousnnesasbstemiousnessYXWouyxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 80)){ tests_passed++; } total_tests++;

    if((vowels_count("abbss") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrsaieioABCDEFGHaieioABCDEFGHIJKLMNOPQRiaeaeiiouyfacetiousnessioouySTUVWXZuyIJKLMNOPQRSTUVWXZuyxyz") == 41)){ tests_passed++; } total_tests++;

    if((vowels_count("aipcbcdfghjklgmnpabstepmihousnessqrzlogyeiiouy") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXWouafacetioubcdfghjklmnpqrstvwaxyzsnesseioaAAaApsypsycfacetioubcdfghjklmdizzinessnpqrstvwxyscryptograacpsychologyOAEIOUYfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessXWouycpyhologyaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsnessiAousnessy") == 102)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsychologyfacetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaabcdwfghjklmnpqrstvwxyzs") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("heBLBaAAaaAaaAaaiaeaeiouyfacetioafacetinefssetiousnessusnessioouyaaaibcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstvwxyzologyxyz") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("afactetinessetiousnness") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("abstemiouaaeiouyfaceftiofusnenesouysnss") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrsdizzinessafacetinessetiousnesstvwxyzsiaeaeiouyfacetiousnessioouyness") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmdizzinfacetiAEIYXWoubcdffghjklmnpqrswxyzsnessessnpqrstvwxyscryptografacetioubcdffbcdmfghjklmnpabstaeioiaeaeiouyfacetiousnesasbstemiousnesssioouyuyacpsychologyOAEIOUYXWouycpyhoslogy") == 68)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjkfacetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnesslmnpqrstvwxycryptographyzsness") == 33)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEFGHIJKLrcrypotographyMNOZ") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfpsypsycfacetioubcdfghjklmnpqqrstvwxyzsnesshologygjhabstfecryptogracaAmEIOUYXWouypymiousnessjklmnpqrstvvwxyz") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfetiousnessioouyaaabcdfghjklmnpqrstvwxyz") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("aieiaOAEIOUYXfaUYXWmnpqrstvwxyzsnnessWouyouy") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("afacetioubcdfghjklmnpuyfacfacetiousnesseticrypotographyousness") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabstfecryptogracaAEIOUYXWouypymiousnessjklcryptogracfacetioubcdffghjklfmnpqrstvwxyzsneaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnpqrsbcdfghjklmnpqrsaieioABCDEFGHIJKLMNOPQRSTUVWXZuyxyztvwxyzsspyaeiouyfacetiousnbcdfghjklmnpqrstvyzessymnpqrstvvwxyz") == 78)){ tests_passed++; } total_tests++;

    if((vowels_count("asbstemiousnessaeioouyfis") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousnessioaeioaAAaAaaAaafacetioubcdffghjklmnpqsrswxyzsnessaaauyfacfacetiousnessetiousnessouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstevwxyzologyxy") == 78)){ tests_passed++; } total_tests++;

    if((vowels_count("psypsycfacetioubcdfghjklmnpqrstvwxyxfzsnesshologyfazcetioubcdffghjklmnpqrstvwxyzsness") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("facetifoubcudffghjklfmnpqqrustvwxyzsness") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("craaeiouyfaceftiofusnenesouyypotography") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiousaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaabcdfghjklmnvwxyazy") == 48)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioiaeaeyccryptogaoeiouyfaceaaieieiouyfacetieousnessssraphyaOAyEIOUYXWouycetiousssioouyuy") == 54)){ tests_passed++; } total_tests++;

    if((vowels_count("cpsyccrypcpsaAEIcryptograpyOUYXWouyychologyennscpsyccryptographyhologytograpahyhology") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptogracaAEIOUYXWoucpsyccryptographyhologyaeiiociaeaeiocpsyccusniyennsypy") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("hOUYXfacetioubcdfghjklmnpqravYLHr") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("afactetinessetious") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("heBLBaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaaibcdfghjklmnpqrstvwcpsbcdfghjklmnpabscryptogracpOyaAEIOUYXWouytogyxyz") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("crasbstemiousnessaeiasbstemiousnessaeiouyfaceftiousnessouyfaceaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouyfsnesstographyhologyypy") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousnessioaeioaAAaAaaAaafacetioubcdffghjklmnpqsrswxyzsnessaaauyfacfacetiousnessetiousnessouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpvwxyzologyxy") == 71)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeaeiiouyfacetiousaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaAAaaAaaAaaiaeaeiouyfetiousnessioouyaaabcdfghjklmnpqrstvwxyzaabcdfghjklmnvwxyzy") == 78)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjaAAaaAaafacetioufbcdffghjklmnpqrstvwxyzsnessAaaaaaklmnpqraAAaaAaaAaaiaeaeiouyfacetiousnessioouss") == 54)){ tests_passed++; } total_tests++;

    if((vowels_count("heBLBaAAaaAaaAaaiaeaeiouyfacetidfacetioubcdfghjklmnpqrstvwxyzsnessfghjklmnpabstogyxyz") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("rcgrypotograpaOAEIOUYXfazcetioubcdffghjklAEIaeiocryptographcyuyfacetiousnessOUYXWmnpqrstvwxyzsnessWouyhoabssy") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaafacetioufbcpsypsycfacetioubcdfghjklmdizziycpyhologydffghjklmnpqrstvwxyzsnessAaaaaa") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjxyzsnessAaaaaaklmnpqraAAaaAaaAaaiaeaeiouyfacetiousnessioouss") == 41)){ tests_passed++; } total_tests++;

    if((vowels_count("fazcryptogcetioubcdffghjklmnpqrstvwxyaeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetiousnessyzsness") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("aOAEIOUYXWouafacetioubcdfghjklmnpqrstvwaxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetfacetioubcdffghjklfmnpqrstvwxyzsneasfacetioaAAaaAaacrypotographyAaaaaaubcdfghjklmnpqrstvwxyzbcdfghjklmnpabstemiousnessqrstvxyzsnessbstemioussneytiousnessssiAousnessy") == 93)){ tests_passed++; } total_tests++;

    if((vowels_count("abcdfgbhjklmnpabsteemiousnessfacetioubcdffghjklmnpqrswxyzsnesaAAaaAaaAaaiaeaeiouyfacetiousnessaAAaaAaaaeiouyfaceftiousneneussAaaiaeaeiouyfacetiousnessioaeioaAAaAaaAaafacetioubcdffghjklmnpqrswxyzsnessaaauyfacfacetiousnessetiousniaeaeiiouyfacetiousnessioouyessouyaaabcdfghjklmnpqrstvwcpsbcdfghjklmnpabstemiousnessqrstevwxyzologyxyzabcdfghjklmnpqrstvwxyzsqrstvxyzAAaAaaAaaaaaa") == 162)){ tests_passed++; } total_tests++;

    if((vowels_count("heBLBaAAaaAaaAaaiaeaeiouyfacetiousnessioouyaaaibcdfghjklmnpqrstvwcpsbcdfgbcaAAaaAaaAaaaaadfgjhabstemiousnessjdklmnpqrstvwxyzhjklmnpabstogyxyz") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaAAaAaaAaaaaauyfacfacetiousnessetyiousness") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("aAEuIOUYXWouy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdfaeiouyfacetiousnessyfghjpbcdfghfacetioubcdfghfacetioubcaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqrstvwxyzsnnessWouafacetioubcdfghjklmnpqrstvwxyzsnesseioaAAaAaaAaaaaauyfacfacetiousnessetiousnessydffghjpbcdfghfcacetioubcdfghjwxyzsnessjklgmnpabstemiousnessqrsttvwxyzlozgyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfcryptogracpymniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 145)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiouyfacouyfacetieousnessaeiiociaeaeiocpsyccryptographyhologyuyfacpsypsycfacetioubcdfghjklmdizziyycpyhologyetiousnyennsss") == 48)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpaieiieouyabstemioussnesssqrsstvwxyz") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aeipbcdfghjklgmnpabstaeiocryptographcyuyfacetiousnessemiousnessqrzlogyeiiouy") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("fazcryptogcaoeiouyfacouyfacetieousnessaeiiociaeaeiocpsyccryptographyhologyuyfacpsypsycfacetioubcdfghjklmdizziyycpyhologyetiousnyennsssetioubcdffghjklmnpqrstvwxyzsnesscpology") == 58)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjpbcdfghfacetioubcdbcdfghjklmnpabsteusnessqrstyyvxyzfghjwxyzsnessjklgmnpabstemiousnessqrstvwxyzlogyklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsness") == 42)){ tests_passed++; } total_tests++;

    if((vowels_count("facetioubcdffghjklfmniaeaeiiouyfacetiousnessioouypqrstvwxyzsnessaeiouyffazcetioubcdffghjklmnpqrstvwxyzsnessacetauAEIOUYXWouyiousnessy") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetibcdfgbhjklmnpabstemiousneABCDEFGHIJKLMNdOPQRSTUVWXZsisqrstvxyzaousnessioouyaaa") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("aieiaOAEIOUYXfazcetioubcdffghjklAEIOUYXWmnpqaeiocryptographcyyuyfacetpsycinousnessrstvwxyzsnnessWouyouy") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaaAaaAaaiaeaeiouyfacetiousneiaeaoeiiouyfacetiousnessioouyfghjklmnpqrstvwxyz") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfgjhabaeioiaeaeiocpsyccryptographyhologyuyfacetiousnessiaoouyuyennsstemiousnessjklmnpqrstvwxyz") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("Y") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("Yy") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("bb") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("BCDFGHJKLMPQRSTVWXZ") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiou") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOU") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUY") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("Yaeiou") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUy") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("absetemiousneaeiouyss") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiouyuy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzinessiouy") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptaedizzinessiouyography") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptaedizzinessiouyoegraphy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("asiouyAaaaaa") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aeio") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("crypteaedizzinessiouyoegraphy") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzinessiou") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptopgraphy") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYaeioaeiouyuyXW") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("absstemiousness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("faasiouyAaaaaacetiousness") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYX") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpaeiotvwxyz") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("abstem") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptopgraphy") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptofacetiousnesspgraphy") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("absstemioussness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptofacetieousnesspgraphy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocryiptofacetiousnesspgyuy") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("bckdfghjklmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyoegraphy") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("EEcryptofacetiousnesspgraphyTfnuhVC") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjTHX") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptographty") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("yptograp") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphy") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEIFGHIJKLSGTUVWXYZ") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("ybcdfghjklmnpqrstvwxyztograp") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnpqrstvwxyz") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnvpqrstvwxyz") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptopgriaphy") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("yptograAEIOUYaeioaeiouyuyXWp") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatlbcdfghjklmnpqrstvwxyz") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrdizzinessstvwx") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcryptoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaa") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiiy") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzinesaAAaAaaAaaaaa") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("absbtem") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYfaasiouyAaaaXaacetiousnessXW") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("dizzizness") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaa") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjTCHX") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("psychol") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxyz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("bvwxaedizzinessiouyyz") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxyzcryptofacetieousnesspgraphy") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("abstaeiiyem") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("bAGAJ") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("ypgtograp") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphy") == 59)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzinesaAAaAaaApsycholaaaaa") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("aycrypteaedizzinessiouyoegraphy") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("abstaieiiyem") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyoegraphypqrstvwxyz") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryiptofaceaaAaaaaa") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklaeiiymnpqrstvwxyz") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzinessioubtem") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeioaeiouyeuy") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryptofacetiousnesspgraphyceaaAaaaaa") == 43)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcryptoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphynaAaaAaaaaa") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("dizziznesns") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptografacetiousnessphty") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwxyz") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocrpyiptofacetiousnesspgyuy") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("AAEYXW") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbabstemvpqrstvwxyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("AaAAaAaaAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaeioaeiouyuyXW") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzineAsaAAaAaaAaaaaa") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbtcdfghjklmnpqrstvwxyz") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxyzcrypaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryiptofaceaaAaaaaatofacetieousnesspgraphy") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyz") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("abssteminoussness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("ographty") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNujTHX") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aw") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("aeicrypteaedizzinessiouyoegraphyoaeiouyuy") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("absAAEYXWtemiousness") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvxwxyz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzitnessjmnpqrstvwxyz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnpqrstvwxybcdfghjklmnpqrstvwxyztograpyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeio") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzinessioeuy") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYfaasiouyAaaaXaacetiousnessXoW") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtem") == 68)){ tests_passed++; } total_tests++;

    if((vowels_count("oKyvC") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiifacetiousnessy") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaa") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuoaoeioaeiouyeuyMNujTHX") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("caedizzinessiouyryptaedizzinessiouyography") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzinesaAAaAaaApsycholaaacryptografacetiousnessphtyaa") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptoaphty") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiypgtograpoaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaa") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("fnacetiousness") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("AaAAaAaaWAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaeioaeiouyuyXW") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrstvwxaAAaAaaAaaaaatbabstemvpqrstvwxyzyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaaa") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("ooio") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("iaeiiy") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("crypteaedizzinessiouyoegraphaedizzinessiouy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyz") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjsklmnpqrdizzinessstvwx") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuoaaedizzinessiouoeioaeiouyeuyMNujTHX") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiabstaeiiyemeioaeiocryiptofaceaaAaaaaa") == 33)){ tests_passed++; } total_tests++;

    if((vowels_count("AaAAaAaaAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaetbcdfghdizzinessioaeiouyuyXW") == 48)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNujTX") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaedizzinesaAAaAaaAaaaaapgraphy") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaa") == 88)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeioeiabstemiousnessopaeiocryiptofaceaaAaaaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiabsstemiousnessouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaaa") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcaaAaaaaa") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjlmnpaeiotvwxyz") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiocaedizzinessiouyryptaedizzinessiouyography") == 24)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklcryptopgraphymnaeioaeiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyz") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklcryptopgraphymnaeioaeiocryiptohfacetiousnesspgypuycrypteaedizzinessiouyz") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfgdhjklmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAbckdfghjklmnpqrstvwxyzaaaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeiouyurstvwtxyz") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNujX") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("abstaeiiyebcdfghjklmnpqrstvwxaAAaAbcdfghjklcryptopgraphymnaeioaeiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyzaaAaaaaatbabstemvpqrstvwxyzyzm") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("AMQRI") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgrapshyceaaAaaaaa") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklcryptopgraphymnaeabsAAEYXWtemiousnessioaeiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyz") == 37)){ tests_passed++; } total_tests++;

    if((vowels_count("phsogy") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMphsogyNjTHX") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("didzziness") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptaedizzaAAcrypbcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyzcaeiouyryptopgriaphytoaeioaeiocryiptofahyaAaaAaaaaainessiouyoegraphy") == 71)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxyzcrypaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryiptofaceaaAaabsaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtemaaaatofacetieousnesspgraphy") == 119)){ tests_passed++; } total_tests++;

    if((vowels_count("fnacetiousnaedizzinesaAAaAaaApsycholaaaaaess") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("abcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyzeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyoegraphy") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiocaedizzinessiouyryptaedizaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaazinessiouyography") == 112)){ tests_passed++; } total_tests++;

    if((vowels_count("diztbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyzzdizness") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAAaaaaa") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiao") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aedicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphyzzinessioeuy") == 68)){ tests_passed++; } total_tests++;

    if((vowels_count("abssaeioaeiouyuytemiousness") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocryiyptofacetiousnesspgyuycrypteaedizzinessiouyoegraphy") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeioaeriocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaa") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("aedicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspegraphyzzinessioeuy") == 43)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzpinessjklmnpqrstvwxyzcrypaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryiptofaceaaAaabsaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtemaaaatofacetieousnesspgraphy") == 119)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxyzcrypaAAcrypcaeiouyaedizzinessiouryptopgriaphytoaeiabstemiousnessopaeiocryiptofaceaaAaaaaatofacetieousnesspgraphy") == 59)){ tests_passed++; } total_tests++;

    if((vowels_count("abssteminoAAEYXWussness") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("crytptoapcryptaedizzinessiouyographyhty") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessioeuyz") == 27)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaaaiaeiiyeioeiabstemiousnessopaeiocryiptofaceaaAaaaaa") == 84)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnvpqrsybcdfghjklmnpqrstvwxyztograpxyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("s") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("AaedizzinesaAAaAaaAaaaaaI") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYaeioaeiouyaAAcrypcaeioeiabstemioousnessopaeiocryiptofaceaaAaaaaauyXW") == 48)){ tests_passed++; } total_tests++;

    if((vowels_count("abssteminoAAuEYXWussness") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("AaAAaAaaWAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnoaeiouyuyXW") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtemaaaatbcdfghjklmnpqrstvwxyz") == 72)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaaaaAaaAaaaaa") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAAcrypcaecaeiouyryptopgraphyiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaaaaAaaAaaaaa") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("abstaeiiyebcdfghjklmnpqrstvwxaAAaAbcdfghjklcryptopgraphymnaeioaecaeiouyryptopgriaphyiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyzaaAaaaaatbabstemvpqrstvwxyzyzm") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("psycholcaeiouyryptoaedizzinesaAAaAaaAaaaaapgraphyogy") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("oKyvcrypteaedizzinessiouyoegraphyC") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAAcrypcaecaeiouyryptopgraphyiouyryptopgriaphytoaeioaeiocryiptofaceaAEIOUYXaAaaaaaaAaaAaaaaa") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedUCuMNujTHXegraphynessioubtemaaaatbcdfghjklmnpqrstvwxyz") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatlbcdfghjklmnpqrstvwxfyz") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("abstaeiiypsycholcaeiouyryptoaedizzinesaAAaAaaAaaaaapgraphyogyem") == 33)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuyXWpqrsyz") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAatbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwxyzAaaAaaaaatbcdfghjklmnpqrstvwxyz") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeiouyurstvwtxydz") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocryiyptofacetiousnesspgyuycrypteabstaeiiyebcdfghjklmnpqrstvwxaAAaAbcdfghjklcryptopgraphymnaeioaecaeiouyryptopgriaphyiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyzaaAaaaaatbabstemvpqrstvwxyzyzmaedizzinessiouyoegraphy") == 87)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaedizzinesaAAaAaabstemiousnessaAaaaaapgraphy") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYaeioaeiouyiuyXW") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("yptograAEIOUYaeioaeiotbcdfghjlmnpaeiotvwxyzyXWp") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("AaAAaAaaAaaaaatlbcdfghjklmnpqrstvwaxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaeioaeiouyuyXW") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxwxyz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("sss") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaedizzinesaAAaAaabstcryptofacetieousnesspgraphyemiousnessaAaaaaapgraphy") == 41)){ tests_passed++; } total_tests++;

    if((vowels_count("iaaeiiy") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuoaaedizzinessiouoeiooaeiouyeuyMNujTHX") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiouz") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrstvwxaAAaAaaaaaAaaAaaaaatbabstemvpqrstvwxyzyz") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouuy") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjkvlmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxzyz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiozcaediozzinessiouyryptaedizzinessiouyography") == 25)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdsfghjklmnpyptograAEIOUYaeiobckdfghjklmnpqrstvwxyzaeiouyurstvwtxyz") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiobAGAJuz") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("crpyptography") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aediazzinesaAAaAaaApsychoaaaaa") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYaeioaeiouyaAAcrypofaceaaAaaaaauyXWaAAaAaaAaaaaatbcdfghjklmnpqrstvwxyz") == 42)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaedizzinesaAAaAaabstetbcdfghdizzinessjklmnpqrstvwxzyzmiousnessaAaaaaapgraphy") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatlbcdfghjklmnpqrstvawxyz") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("abssbcdfghjklmnaeioaeiocryiptofacetiousnesspggyuycrypteaedizzinessioeuyzteminoussness") == 33)){ tests_passed++; } total_tests++;

    if((vowels_count("zoKyvcrypteaedizzinessiouyoegraphyC") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYfaasiouyAaaatXaacetiousnessXoW") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioyaeiocryiptofacetiousnesspgyuy") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuAEIOUYaeioaeiouyiuyXWTX") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrdizzinessstvtbcdfghjklmnpyptograAEIOUYaeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuyXWpqrsyzwx") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjkmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aUCuMNjaAAcrypcaeiabstaeiiyemeioaeiocryiptofaceaaAaaaaaAAAEIOUYaeioaeiouyaAAcrypcaeioeiabstemioousnessopaeiocryiptofaceaaAaaaaauyXWaAaaAAaaaaa") == 95)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryabsaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtemhy") == 74)){ tests_passed++; } total_tests++;

    if((vowels_count("AaAAaAaaAaaaaatlbcdfghjklmnpqrstvwaxyzEIOUyaeioaeiocrpyipAEIOUYXWtofacetiousnesspgyuyYaeioaeiouyuyXW") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiAEIOUYaeioaeiouyaAAcrypcaeioeiabstemioousnessopaeiocryiptofaceaaAaaaaauyXW") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("absasteminoAAuEYXWussness") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("abstaeiiyebcdfghjklmnpqrstvwxaAAaAbcdfghjklcryptopgraphymnaeioaecaeiouyryptopgriaphyiocryiptohfacetiousnesspgyuycrypteaedizzninessiouypzaaAaaaaatbabstemvpqrstvwxyzyzm") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedUCuMNujTHXegraphynessioubtemaaaatbcdfghjklmnpqrstwvwxyz") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryptofacetiousnesspgrapaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaahyceaaAaaaaa") == 90)){ tests_passed++; } total_tests++;

    if((vowels_count("fnacetiousnahedizzinesaAAaAaaApsycholaaaaaaess") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptaycrypteaedizzinessiouyoegraphyofaceaaAaaaaa") == 47)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaeiouyaAaaaaainessiouyoegraphynessioubtemaaaatbcdfghjklmnpqrstvwxyz") == 77)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnesssopaeiocryiptofaceaaAaaaaa") == 38)){ tests_passed++; } total_tests++;

    if((vowels_count("psycohol") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxyzcrypaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryiptofaceaaAaabsaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtemaaaatofacetieoussnesspgraphy") == 119)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptyoaphty") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptofacetieousnesspgraphyAaAAaAaaAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyipawuyYaetbcdfghdizzinessioaeiouyuyXW") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuAEIOUYaeuioaeiouyiuyXWTX") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("ovCKyvvC") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("dizness") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("absas") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiifacetiousnessydiztbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyzzdizness") == 30)){ tests_passed++; } total_tests++;

    if((vowels_count("ypgtogryarp") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeioaeioueyurstvwbtxydz") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedUCuMNujTHXegraphynessioubtemaxyz") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfgdhjkylmnpqrstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaedizzinesaAAaAaabstetbcdfghdizzinessjklmnpqrstvwxmzyzmiousnessaAaaaaapgraphy") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("psylchlol") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnaeioaeiaeiiyocryiptofacetiousnesspgyuycrypteaedizzinessiouyoegraphypqrstvwxyz") == 33)){ tests_passed++; } total_tests++;

    if((vowels_count("AaAAaycrypteaedizzinessiouyoegraphyaAaaAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaeioaeiouyuyXW") == 58)){ tests_passed++; } total_tests++;

    if((vowels_count("ssss") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnvwxyzcryptoaphty") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("caedizzinessiodizziznessssiouyography") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("dizzinesscaedizzinessiouyryptaedizzinessiouyography") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiiouyuy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("fnfnacetiousnahedizzinesaAAaAaaApsycholaaaaaaessacetiousnahedizzinesaAAaAaaApsycholaaaaaaess") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnaeioaeiaeiiyocryiptofacetiespsylchlolspgyuycrypteaedizzinessiouyoegraphypqrstvwxyz") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("aoefnfnacetiousnahedizzinesaAAaAaaApsycholaaaaaaessacetiousnahedizzinesaAAaAaaApsycholaaaaaaesso") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("pslychol") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnvpqrsybcdfghjklmnpqrstvwxyztograpxycaeiouyryptoaedizzinesaAAaAaaAaaaaapgraphyz") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzineAsaAAaaAaaAaaaaa") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuoaoeioaeiouyeuayMNujTHX") == 17)){ tests_passed++; } total_tests++;

    if((vowels_count("AMQRaAAcrypcaeiabsstemiousnessouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaaaI") == 40)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzitnessjmnpqrstvyptograAEIOUYaeioaeiotbcdfghjlmnpaeiotvwxyzyXWpyz") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaapqrstvwxyz") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEIFGHIJKLSGTUVfnfnacetiousnahedizzinesaAAaAaaApsycholaaaaaaessacetiousnahedizzinesaAAaAaaApsycholaaaaaaessWXYZ") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("absbtbem") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAAcrypcaecaeiouyryptopgyiouyryptopgriaphytoaaoeiocaedizzinessiouyryptaedizaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaazinessiouyographyeioaeiocryiptofaceaaAaaaaaaAaaAaaaaa") == 162)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocryiyptofacetiousnesspgyuycrypteabstaeiiyebcdfghjklmnpqrstvwxaAAaAbicdfghjklcryptopgraphymnaeioaecaeiouyryptopgriaphyiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyzaaAaaaaatbabstemvpqrstvwxyzyzmaedizzinessiouyoegraphy") == 88)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghaaAaaaaatbabstemvpqrstvwxyzyz") == 10)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmoueyurstvwbtxyldz") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("aooeioaouyeuy") == 12)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptograAEIOUYaeeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiouz") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatlbcadfghjklmnpqrstvwxyz") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfgzhdizzinessjklmnpqrstvwxwxyz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnvpqrsybdfghjklmnpqrstvwxyztograpxyz") == 15)){ tests_passed++; } total_tests++;

    if((vowels_count("bcz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("absmtaieiiyem") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("aediazzineAsaAAaAaaAaaaaa") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryabsaediabstaeiiyebcdfghjklmnpqrstvwxaAAaAbcdfghjklcryptopgraphymnaeioaeiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyzaaAaaaaatbabstemvpqrstvwxyzyzmzzicryptaedizzaAAcryphcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtemhy") == 123)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnpqrdizzinesvwx") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaeiouyaAaaaaphynessioubtemaaaatbcdfghjklmnpqrstvwxyz") == 68)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyoegratvwxyz") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("aeypgtogryarpiao") == 7)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiifacetiousnessydiztbcdfghjklmnpyaoeiozcaediozzinessiouyryptaedizzinessiouyographyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyzzdizness") == 54)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfgdhjklmnpqrqstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aoefnfnacetiousnahedizzinesaAAaAaaApsycholaaaaaaessacetiousnahedizzinesaAAaAaaApsycholaaayaaaesso") == 56)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinnessjklmnpqrstvwxzyz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryabsaedizzicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraeioaphynessioubtemhy") == 78)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocrytofacetiousnesspgraphyceaaAaaaaa") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjkmnpqraAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaatvwxyz") == 88)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYYX") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("abssteminoaAAaAaaAaaaaatbtcdfghjklmnpqrstvwxyzAAuEYXWussness") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYaeioaeiouyaAAcrypcaeioeiabstemioousnessopaeiocryiptofaceaaAaaaAAaAaaAaaaaatbtcdfghjklmnpqrstvwxyzaaauyXW") == 61)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryptofacetiousnesspgUCuMNjaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaraphyceaaAaaaaa") == 75)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcryptoayptographynaAaaiaaeiiyAaaaaa") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("pslychpsycohol") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpyptpsycholcaeiouyryptoaedizzinesaAAaAaaAaaaaapgraphyogyograAEIOUYaeioaeiouyurstvwtxyz") == 44)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfjklmnpqrdizzinesvwx") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("crroKyrvCyptopgraphy") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiabstaeiiyemeioaeiocryiptofaceaaAaaaa") == 32)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmnpoKyvCyptograAEIOUYaeeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiouz") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("UCUuMNNujX") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("atbcdfghdizzinessjklmnpqrstvwxwxyzoeio") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfgdhdjklmnpqrqstvwxyz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAAcrypcaecaaeiouyryptopgraphyiouyryptopgriaphytoaeioaeiocryiptofaceaAEIOaeioaeiocryiaAAcryptoayptographynaAaaiaaeiiyAaaaaaptofacetiousnesspgyuyaaaaAaaAaaaaa") == 93)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuWlDVSrhNaoaoeioaeiouyeuayMNujTHX") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("cryptograpabsaedizzicryptaedUCuMNujTHXegraphynessioubtemaxyzhty") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocryipntofacetiousnesspgyuy") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghAaAAaycrypteaedizzinessiouyoegraphyaAaaAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaeioaeiouyuyXWjklmnpyptograAEIOUYaeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuyXWpqrsyz") == 94)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiocaedizzinessiouyryptaedizaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnhessopaaeiocryptoffacetiousnesspgraphyceaaAaaaaaaazinessiouyography") == 70)){ tests_passed++; } total_tests++;

    if((vowels_count("absbtabsstemioussnessem") == 8)){ tests_passed++; } total_tests++;

    if((vowels_count("abcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyzeioaeiocryiptofacetiousUCuMNujXnesspgyuycryepteaedizzinessiouyoegraphy") == 60)){ tests_passed++; } total_tests++;

    if((vowels_count("aedicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacbckdfghjklmnpqrstvwxyzetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphyzzinessioeuy") == 68)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjsklmnpaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryptofacetiousnesspgUCuMNjaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaraphyceaaAaaaaaqrdizzinessstvwx") == 78)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnpqrstcdfghjkAlmnpqrstvwxyztograpyz") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("ovCKyvvKC") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklncryptopgraphytbcdfghjkmnpqraAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaatvwxyzinessiouyz") == 95)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYXXW") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghAaAAaycrypteaedizzinessiouyoegraphyaAaaAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaeioaeiouyuyXWjklmnpyptograAEIOUYaeioaeioouyaAAcrypauyXWuyuyXWpqrsyz") == 82)){ tests_passed++; } total_tests++;

    if((vowels_count("abstaeiiyebcdfghjklmnpqrstvwxaAAaAbcdfghjklcryptopgraphymnaeioaecaeiouyryptopgriaphyiocmryiptohfacetiousnesspgyuycrypteaedizzninessiouypzaaAaaaaatbabstemvpqrstvwxyzyzm") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("abssteminoAkBlAEYXWussness") == 9)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousneeaaAaaaaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaa") == 74)){ tests_passed++; } total_tests++;

    if((vowels_count("crayptopgraphy") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("abcdfghjklmnaoeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyzeioaeiocryiptofacetiousUCuMNujXnesspgyuycryepteaedizzinessiouyoegraphy") == 61)){ tests_passed++; } total_tests++;

    if((vowels_count("bvwxaedizzinessiocaeiouyryptoaedizzinesaAAaAaabstemiousnessaAaaaaapgraphyuyyz") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocryiyptofacetiousnesspaedizzinessiouyoegraphy") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("AAEYX") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("oKyvcrypteaeiifacetiousnessydiztbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyzzdiznessaedizzinessiouyoegraphyC") == 43)){ tests_passed++; } total_tests++;

    if((vowels_count("UCUuMcaedizzinessiouyryptaedizzinessiouyographyNNujX") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("crypteaedizzinoessiouyoegratbcdfghjklmnpoKyvCyptograAEIOUYaeeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiouzphy") == 60)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAafnacetiousnessaaaatbcdfghjklmnvpqrsybcdfghjklmnpqrstvwxyztograpxycaeiouyryptoaedizzinesaAAaAaaAaaaaapgraphyz") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("abvwxaedizzinessiouyyzediazzineAsaAAaAaaAaaaaa") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklcryptopgraphymnaeioaeiyocryiptohfacetiousnesspgypuycrypteaedizzinessiouyz") == 28)){ tests_passed++; } total_tests++;

    if((vowels_count("py") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcgdfghjkhz") == 0)){ tests_passed++; } total_tests++;

    if((vowels_count("aeioaeiocrytbcdsfghjklmnpyptograAEIOUYaeiobckdfghjklmnpqrstvwxyzaeiouyurstvwtxyziyptofacetiousnesspgyuycrypteabstaeiiyebcdfghjklmnpqrstvwxaAAaAbicdfghjklcryptopgraphymnaeioaecaeiouyryptopgriaphyiocryiptohfacetiousnesspgyuycrypteaedizzinessiouyzaaAaaaaatbabstemvpqrstvwxyzyzmaedizzinessiouyoegraphy") == 105)){ tests_passed++; } total_tests++;

    if((vowels_count("ogrraphty") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("atbctbcdfghjklmnpoKyvCyptograAEIOUYaeeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiouzio") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjklmnaeioaeiocryiptofacetiousnessAEIOUYYXpgyuycrypteaedizzinessiouyoegratvwxyz") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiabstaeitbcdfghjklmnvwxyzcryptoaphtyiyemeioaeiocryiptofaceaaAaaaaa") == 35)){ tests_passed++; } total_tests++;

    if((vowels_count("diztbcdfghjklmnpypztograAEIOUYaeioaeiouyuyXWpqrstvwtxyzzdizness") == 20)){ tests_passed++; } total_tests++;

    if((vowels_count("AEIOUYfaasiouyAaIaaXaacetiousnessXoW") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("oKyvcrypteaeiifacetiousnessydiztbcdfghjklmnpyptograAEIOUYaeioaeiouypsycholcaeiouyryptoaedizzinesaAAaAaaAaaaaapgraphyogyuyXWpqrstvwtxyzzdiznessaedizzinessiouyoegraphyC") == 70)){ tests_passed++; } total_tests++;

    if((vowels_count("UCTX") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghAaAAaycrypteaedizzinessiouyoegraphyaAaaAaaaaatlbcdfghjklmnpqrstvwxyzEIOUyaeioaeiocrpyiptofacetiousnesspgyuyYaeioaebcdfghjsklmnpaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryptofacetiousnesspgUCuMNjaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaraphyceaaAaaaaaqrdizzinessstvwxoaeiouyaAAcrypauyXWuyuyXWpqrsyz") == 145)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiouutbcdfghjklmnpyptograAEIOUYaeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuyXWpqrsyzy") == 43)){ tests_passed++; } total_tests++;

    if((vowels_count("aooeio") == 6)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiocaedizzinessiouyryptaedizaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaAAcrypcaeiouyryptopgriaphytoaeusnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaazinessiouyography") == 107)){ tests_passed++; } total_tests++;

    if((vowels_count("diznabstaeiiyebcdfghjklmnpqrstvwxaAAaAbcdfghjklcryptopgraphymnaeioaecaeiouyryptopgriaphyiocryiptohfacetiousnesspgyuycrypteaedizzninessiouypzaaAaaaaatbabstemvpqrstvwxyzyzms") == 58)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaedizzinesaAAacryptopgraphyAaabstetbcdfghdizzinessjUCuoaoeioaeiouyeuyMNujTHXklmnpqrstvwxzyzmiousnessaAaaaaapgraphy") == 53)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnvpqrsybcdfghjklmnpqrstvwxyztograpxycaeiabssteminoAkBlAEYXWussnessouyryptoaedizzinesaAAaAaaAaaaaapgraphyz") == 49)){ tests_passed++; } total_tests++;

    if((vowels_count("abcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyzeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiotbcdfghjklmnvwxyzcryptoaphtyuyoegraphy") == 58)){ tests_passed++; } total_tests++;

    if((vowels_count("aeeio") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiocaedizzinessiouyryptaedizaAAcrypuyography") == 23)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfAMQRIghjklmnpqrstvwxyz") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("bcdfghjkUCuoaaedizzinessiouoeioaeiouyeuyMNujaAAaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofaceaaAaaaaaaAaaAaaaaaTHXlmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyoegraphypqrstvwxyz") == 98)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaeedizzinesaAAaAaabstetbcdxzyzamiousnessaAaaaaapgraphy") == 34)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAatbcdfghjklmnvwxyzAaaAaaaaatlbcadfghjklmnpqrstvwxyz") == 14)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiocaedizzinessiouyryptaedizaAAcrypcaeiouyrycryptoaphtyptopgriaphytoaeiabstemiousnhessopaaeiocryptoffacetiousnesspgraphyceaaAaaaaaaazinessiouyography") == 72)){ tests_passed++; } total_tests++;

    if((vowels_count("abbsas") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("crypteaedizzinoessiouyoegratbcdfghjklmnpoKyvCyptograAEabsasIOUYaeeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiouzphy") == 62)){ tests_passed++; } total_tests++;

    if((vowels_count("caeioaedicryptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspeegraphyzzinessioeuyuyryptopgriaphy") == 52)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnvpqrsybcdfghjklmnpqrstvwxyztograpxycaeiouyryptoaeioaeiiouyuyaedizzinesaAAaAaaAaaaaapgraphyz") == 51)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiifacetiousnessydiztbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyzzdidizzinesszness") == 33)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghdizzinessjklmnpqrstvwxyzcrypaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaeiocryiptofaceaaAaabsaedizzicriyptaedizzaAAcrypcaeiouyryptopgriaphytoaeioaeiocryiptofacetiousnesspgyuyfacetieousnesspgraphyaAaaAaaaaainessiouyoegraphynessioubtemaaaatofacetieoussnesspgraphy") == 120)){ tests_passed++; } total_tests++;

    if((vowels_count("absaedizzicryptaedUCuMNujTHXegraphynessioubtemaaaatbcdfghjklmnpqirstvwxyz") == 22)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghajklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyz") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiypgtogryarpabstemiousnessopaaeiocrytofacetiousnesspgraphyceaaAaaaaa") == 46)){ tests_passed++; } total_tests++;

    if((vowels_count("caeiouyryptoaedizzinesaAAaAaabstetbcdfghdizzinessjklmnpqrstvwxzyzmiousnessUCuMNjaAAcrypcaeiabstaeiiyemeioaeiocryiptofaceaaAaaaaaAaaaaapgraphy") == 67)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphAMQRIytoaeiypgtogryarpabstemiousnessopaaeiocrytofacetiousnesspgraphyceaaAaaaaa") == 48)){ tests_passed++; } total_tests++;

    if((vowels_count("aaw") == 2)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjkllmnpqrstvwxyz") == 13)){ tests_passed++; } total_tests++;

    if((vowels_count("yuyYaeioaeiouyuyXW") == 11)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatbcdfghjklmnvpqrsybcdfghjklmnpqrstvwxyztograpxycaeioaAAaAaaAaaaaatbabstemvpqrstvwxyzuyryptoaeioaeiiouyuyaedizzinesaAAaAaaAaaaaapgraphyz") == 66)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAaAaaAaaaaatlbcadfghjklmnpqrstvwxtbcdfghdizzitnessjmnpqrstvyptograAEIOUYaeioaeiotbcdfghjlmnpaeiotvwxyzyXWpyzyz") == 36)){ tests_passed++; } total_tests++;

    if((vowels_count("AaedizzinesaAAaAaAaaaaaI") == 19)){ tests_passed++; } total_tests++;

    if((vowels_count("yptograAEIOUYaeioaeiottbEcdfyXWp") == 16)){ tests_passed++; } total_tests++;

    if((vowels_count("aoeiocaedizzinessiouyryptaedizaAAcrypcaeiouyryptopgriaphytoaeiabstemiousinessopaaeaiocryptofacetiousnesspgraphyceaaAaaaaAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocryptofacetiousnesspgraphyceaaAaaaaaaazinessiouyography") == 114)){ tests_passed++; } total_tests++;

    if((vowels_count("pslychpsyctbcdfghajklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyz") == 18)){ tests_passed++; } total_tests++;

    if((vowels_count("oKCyvC") == 1)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNaeioaeiocryiptofacetiousnessapgyuy") == 21)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzineAsaAAaaAaaAaaaaaUCuAEIOUYaeuioaeiouyiuyXWTX") == 39)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiouyryptopaeiouutbcdfghjklmnpyptograAEIOUYaeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuyXWpqrsyzygriaphytoaeioaeiocryiptofaceaaAaaa") == 74)){ tests_passed++; } total_tests++;

    if((vowels_count("abAAEYXWtems") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aeiifacetiousnessydiztbcdfghjklmnpyptograAEIOUYaeioaeiouyuyXWpqrstvwtxyzzdidizzinesszneabcdfghjklmnaeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyzeioaeiocryiptofacetiousnesspgyuycrypteaedizzinessiouyoegraphyss") == 88)){ tests_passed++; } total_tests++;

    if((vowels_count("aAAcrypcaeiouyryptopgriaphytoaeiabstemiousnessopaaeiocrayptofacetiousnesspgraphyceaaAaaaaa") == 45)){ tests_passed++; } total_tests++;

    if((vowels_count("UCuMNjaAAcrypcaeiouyryptopgriapphytoaeioaeiocryiptofaceacrayptopg") == 29)){ tests_passed++; } total_tests++;

    if((vowels_count("clUaEPUIN") == 5)){ tests_passed++; } total_tests++;

    if((vowels_count("aedizzineAsaAAaaabstemiousnessAaaAaaaaa") == 26)){ tests_passed++; } total_tests++;

    if((vowels_count("apiao") == 4)){ tests_passed++; } total_tests++;

    if((vowels_count("ABCDEIFGHIJKLSGTUVfnfnacetiousnahediinesaAAaAaaApsycholaaaaaaessWXYZ") == 31)){ tests_passed++; } total_tests++;

    if((vowels_count("tbcdfghjklmoueybtxyldz") == 3)){ tests_passed++; } total_tests++;

    if((vowels_count("absaeddizzinesscaedizzinessiouyryptaedizzinessiouyographyizzicryptaedUCuMNujaphynessioubtemaaaatbcdfghjklmnpqirstvwxyz") == 42)){ tests_passed++; } total_tests++;

    if((vowels_count("crypteaedizziouyoegratbcdfghjklmnpoKyvCyptograAEIOUYaeeioaeioAEIOUYaeioaeiouyaAAcrypauyXWuyuaedizzinessiouzphy") == 57)){ tests_passed++; } total_tests++;

    if((vowels_count("bvwxaedizzinessiocaeiouyryptoUCuWlDVSrhNaoaoeioaeiouyeuayMNujTHXaedizzinesaAAaAaabstemiousnessaAaaaaapgraphyuyyz") == 57)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


