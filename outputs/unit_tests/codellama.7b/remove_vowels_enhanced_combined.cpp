#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to remove vowels from a given string
string remove_vowels(string text) {
    // Create a new string without any vowels
    string newText = "";

    for (auto c : text) {
        if (!islower(c)) {
            newText += c;
        }
    }

    return newText;
}

// Function to check if a character is a vowel
bool isVowel(char c) {
    // Check if the character is a lowercase or uppercase vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
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

    if((remove_vowels("") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("abcdef\nghijklm") == "bcdf\nghjklm")){ tests_passed++; } total_tests++;

    if((remove_vowels("fedcba") == "fdcb")){ tests_passed++; } total_tests++;

    if((remove_vowels("eeeee") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("acBAA") == "cB")){ tests_passed++; } total_tests++;

    if((remove_vowels("EcBOO") == "cB")){ tests_passed++; } total_tests++;

    if((remove_vowels("ybcd") == "ybcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("fedcba") == "fdcb")){ tests_passed++; } total_tests++;

    if((remove_vowels("eeeee") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("acBAA") == "cB")){ tests_passed++; } total_tests++;

    if((remove_vowels("EcBOO") == "cB")){ tests_passed++; } total_tests++;

    if((remove_vowels("ybcd") == "ybcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("hello") == "hll")){ tests_passed++; } total_tests++;

    if((remove_vowels("1234567890") == "1234567890")){ tests_passed++; } total_tests++;

    if((remove_vowels("1234561207890") == "1234561207890")){ tests_passed++; } total_tests++;

    if((remove_vowels("st1234567890m") == "st1234567890m")){ tests_passed++; } total_tests++;

    if((remove_vowels("hel") == "hl")){ tests_passed++; } total_tests++;

    if((remove_vowels("hellhelloo") == "hllhll")){ tests_passed++; } total_tests++;

    if((remove_vowels("12345687890") == "12345687890")){ tests_passed++; } total_tests++;

    if((remove_vowels("hel1234567890l") == "hl1234567890l")){ tests_passed++; } total_tests++;

    if((remove_vowels("12345629890") == "12345629890")){ tests_passed++; } total_tests++;

    if((remove_vowels("123465687890") == "123465687890")){ tests_passed++; } total_tests++;

    if((remove_vowels("123445691207890") == "123445691207890")){ tests_passed++; } total_tests++;

    if((remove_vowels("12314561207890") == "12314561207890")){ tests_passed++; } total_tests++;

    if((remove_vowels("172345678890") == "172345678890")){ tests_passed++; } total_tests++;

    if((remove_vowels("1234456912807890") == "1234456912807890")){ tests_passed++; } total_tests++;

    if((remove_vowels("123140") == "123140")){ tests_passed++; } total_tests++;

    if((remove_vowels("12734567890") == "12734567890")){ tests_passed++; } total_tests++;

    if((remove_vowels("CX") == "CX")){ tests_passed++; } total_tests++;

    if((remove_vowels("CCX") == "CCX")){ tests_passed++; } total_tests++;

    if((remove_vowels("1232140") == "1232140")){ tests_passed++; } total_tests++;

    if((remove_vowels("1236912807890") == "1236912807890")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUaeiouq") == "q")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBCCCdddDEEEE!") == "BBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("xXyYzZ") == "xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopqrstuvwxyzzzzzzz") == "12b3c4d56f7g8h910jklmnpqrstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("example@example.com") == "xmpl@xmpl.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("Th!s") == "Th!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopqrstuvwxyzzzzzzzaaaaAAAABBBCCCdddDEEEE!") == "12b3c4d56f7g8h910jklmnpqrstvwxyzzzzzzzBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!th") == "w!th")){ tests_passed++; } total_tests++;

    if((remove_vowels("AE") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxXyYzZE") == "xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("abcd") == "bcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("Acaps.xXyYzZE") == "cps.xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzZE") == "xZXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("the") == "th")){ tests_passed++; } total_tests++;

    if((remove_vowels("CaaaaAAAABBBCCCdddDEEEE!") == "CBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("are") == "r")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.") == "cps.")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlld!") == "wrlld!")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hello") == "Hll")){ tests_passed++; } total_tests++;

    if((remove_vowels("puuat!on,") == "pt!n,")){ tests_passed++; } total_tests++;

    if((remove_vowels("abquickcd") == "bqckcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("The") == "Th")){ tests_passed++; } total_tests++;

    if((remove_vowels("xXyYZzZ") == "xXyYZzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("you") == "y")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!twh") == "w!twh")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBCCCdddDaEEEE!") == "BBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUaeioiuq") == "q")){ tests_passed++; } total_tests++;

    if((remove_vowels("var!ous") == "vr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("x") == "x")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZX") == "xZX")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ousar!ous") == "vvr!sr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fz7g8h9i10jklmnopqrstuvwxyzzzzzzzaaaaAAAABBBCCCdddDEEEE!") == "12b3c4d56fz7g8h910jklmnpqrstvwxyzzzzzzzBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.Hello") == "dg.Hll")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!wtwh") == "w!wtwh")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8h9i10jklmnopqrstuvwxyzzzzzzzaaaaAAAABBBCCCdddDEEEE!") == "12b3c4d56fzxXyYzZ7gcps.8h910jklmnpqrstvwxyzzzzzzzBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("over") == "vr")){ tests_passed++; } total_tests++;

    if((remove_vowels("fo") == "f")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBCCCfoxdddDaEEEE!") == "BBBCCCfxdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("world!") == "wrld!")){ tests_passed++; } total_tests++;

    if((remove_vowels("doelloo") == "dll")){ tests_passed++; } total_tests++;

    if((remove_vowels("ww!wtwh") == "ww!wtwh")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!world!ousar!ous") == "vvr!wrld!sr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ousar!aaaaAAAABBBCCCdddDaEEEE!") == "vvr!sr!BBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("numb3rs,") == "nmb3rs,")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopqrstworldThe!zzzzzzz") == "12b3c4d56f7g8h910jklmnpqrstwrldTh!zzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("how") == "hw")){ tests_passed++; } total_tests++;

    if((remove_vowels("aAEIOUaeiouqndd") == "qndd")){ tests_passed++; } total_tests++;

    if((remove_vowels("example@example.colm") == "xmpl@xmpl.clm")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqrstuvwxyz") == "fghjklmnpqrstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helww!wtwhlo") == "Hlww!wtwhl")){ tests_passed++; } total_tests++;

    if((remove_vowels("doelo") == "dl")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8h9i10jklmnopqrstuvwxyzzzzzzzaaaquickaAAAABBBCCCdddDEEEE!") == "12b3c4d56fzxXyYzZ7gcps.8h910jklmnpqrstvwxyzzzzzzzqckBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuvwxyzzzzzzz") == "12b3c4d56f7g8h910jklmnpHlww!wtwhlqrstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("anopqrstuvwxyxXyYZzZz") == "npqrstvwxyxXyYZzZz")){ tests_passed++; } total_tests++;

    if((remove_vowels("anazyl") == "nzyl")){ tests_passed++; } total_tests++;

    if((remove_vowels("thhe") == "thh")){ tests_passed++; } total_tests++;

    if((remove_vowels("l") == "l")){ tests_passed++; } total_tests++;

    if((remove_vowels("worllquitoday?ck!") == "wrllqtdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("lAxZX") == "lxZX")){ tests_passed++; } total_tests++;

    if((remove_vowels("tworlAcaps.xXyYzZEhe!!hhhe") == "twrlcps.xXyYzZh!!hhh")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.AYxXyYzZE") == "cps.YxXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("brownAEIOUaeioiuq") == "brwnq")){ tests_passed++; } total_tests++;

    if((remove_vowels("anorstuvwxyxXyYZzZz") == "nrstvwxyxXyYZzZz")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.AEAYxXyYzZE") == "cps.YxXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("exampletworlAcaps.xXyYzZEhe!!hhhe@example.colm") == "xmpltwrlcps.xXyYzZh!!hhh@xmpl.clm")){ tests_passed++; } total_tests++;

    if((remove_vowels("lftoSCkoD") == "lftSCkD")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!worcaps.AYxXyYzZEld!ousar!ous") == "vvr!wrcps.YxXyYzZld!sr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("and") == "nd")){ tests_passed++; } total_tests++;

    if((remove_vowels("ll") == "ll")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!ng") == "str!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hello,") == "Hll,")){ tests_passed++; } total_tests++;

    if((remove_vowels("quick") == "qck")){ tests_passed++; } total_tests++;

    if((remove_vowels("strHello,!ng") == "strHll,!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("@") == "@")){ tests_passed++; } total_tests++;

    if((remove_vowels("punctuat!on,") == "pnctt!n,")){ tests_passed++; } total_tests++;

    if((remove_vowels("sSsS") == "sSsS")){ tests_passed++; } total_tests++;

    if((remove_vowels("pp") == "pp")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxXyYwzZEworllquitoday?ck!") == "xXyYwzZwrllqtdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.") == "dg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBCCCfovvar!world!ousar!ousxdddDaEEEE!") == "BBBCCCfvvr!wrld!sr!sxdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("CaaaaAAAABBBCCCdddDEEEEE!") == "CBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ousar!ABBBCCCdddDaEEEE!") == "vvr!sr!BBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("over1a2b3c4d5e6f7g8h9i10jklmnopqrstuvwxyzzzzzzz") == "vr12b3c4d56f7g8h910jklmnpqrstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("doeloIZdDL") == "dlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzZbrownE") == "xZXyYzZbrwn")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazy") == "lzy")){ tests_passed++; } total_tests++;

    if((remove_vowels("xXyYzdoeloIZdDLZ") == "xXyYzdlZdDLZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("lftoSCkotD") == "lftSCktD")){ tests_passed++; } total_tests++;

    if((remove_vowels("quitoday?ck") == "qtdy?ck")){ tests_passed++; } total_tests++;

    if((remove_vowels("wor") == "wr")){ tests_passed++; } total_tests++;

    if((remove_vowels("brown") == "brwn")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.xXyYzZE") == "cps.xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("1s") == "1s")){ tests_passed++; } total_tests++;

    if((remove_vowels("thvvayYZzZ!ouse") == "thvvyYZzZ!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8kh9i10jklmnopqrstuvwxyzzzzzzzaaaquickaAAAABBBCCCdddDEEEE!") == "12b3c4d56fzxXyYzZ7gcps.8kh910jklmnpqrstvwxyzzzzzzzqckBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8h9i") == "12b3c4d56fzxXyYzZ7gcps.8h9")){ tests_passed++; } total_tests++;

    if((remove_vowels("wd!") == "wd!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzZbraaaaAAAABBBCCCdddDaEEEE!ownE") == "xZXyYzZbrBBBCCCdddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzEZE") == "xZXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ouusarxXyYZzZ!ous") == "vvr!srxXyYZzZ!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBCCCfEoxdddDaEEEE!") == "BBBCCCfxdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!h") == "w!h")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlAcaps.xXyYzZEhe!!") == "wrlcps.xXyYzZh!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("ww!wtwth") == "ww!wtwth")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaACCCdddDaEEEE!") == "CCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("wdoeloIZdDL") == "wdlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("over1a2b3c4d5anopqrstuvwxyxXyYZzZzvwxyzzzzzzz") == "vr12b3c4d5npqrstvwxyxXyYZzZzvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("mFjXdJWPBt") == "mFjXdJWPBt")){ tests_passed++; } total_tests++;

    if((remove_vowels("anazylyou") == "nzyly")){ tests_passed++; } total_tests++;

    if((remove_vowels("anopqrstuvwTh!sxyxXyYZzZz") == "npqrstvwTh!sxyxXyYZzZz")){ tests_passed++; } total_tests++;

    if((remove_vowels("tworlAcaps.xXyyYzZEhe!!hhhe") == "twrlcps.xXyyYzZh!!hhh")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helww!wtwhloAxZXyYzZbraaaaAAAABBBCCCdddDaEEEE!ownE") == "Hlww!wtwhlxZXyYzZbrBBBCCCdddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlld!n,") == "wrlld!n,")){ tests_passed++; } total_tests++;

    if((remove_vowels("braaaaAAAABBBCCCfEoxdddDaEEEEn") == "brBBBCCCfxdddDn")){ tests_passed++; } total_tests++;

    if((remove_vowels("anazaaaaAAAABBBCCCdddDEEEE!yl") == "nzBBBCCCdddD!yl")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.AYxXyYzZEAxZXyYzZEcaps.xXyYzZE") == "cps.YxXyYzZxZXyYzZcps.xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("wd!aAAAAAxZXyYzEZEBBBCCCdddDEEEE!") == "wd!xZXyYzZBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fz7g8h9i10jklmnopqrstuvwxyzzzzzzzaaaHello") == "12b3c4d56fz7g8h910jklmnpqrstvwxyzzzzzzzHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("worllquy?ck!wdoeloIZdDL") == "wrllqy?ck!wdlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEE") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("doeCaaaaAAAABBBCCCdddDEEEE!lloo") == "dCBBBCCCdddD!ll")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.AYxXyYzZEAxZXyYzZE") == "cps.YxXyYzZxZXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("lAxZXyYzZbraaaaAAAABBBCCCdddDaEEEE!ownEftoSCkoD") == "lxZXyYzZbrBBBCCCdddD!wnftSCkD")){ tests_passed++; } total_tests++;

    if((remove_vowels("worll1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuvwxyzzzzzzzquitoday?ck!") == "wrll12b3c4d56f7g8h910jklmnpHlww!wtwhlqrstvwxyzzzzzzzqtdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOlHlo") == "lHl")){ tests_passed++; } total_tests++;

    if((remove_vowels("AAxZX") == "xZX")){ tests_passed++; } total_tests++;

    if((remove_vowels("vousar!ous") == "vsr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ousar!ABBBCCCdddDaEEBEE!") == "vvr!sr!BBBCCCdddDB!")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fz7g8h9i10jkldoeloIZdDLxyzzzzzzzaaaHello") == "12b3c4d56fz7g8h910jkldlZdDLxyzzzzzzzHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOlareHlo") == "lrHl")){ tests_passed++; } total_tests++;

    if((remove_vowels("doworoiuqelo") == "dwrql")){ tests_passed++; } total_tests++;

    if((remove_vowels("anorstuvwxyxXyYZzZzdoeloIZdDL") == "nrstvwxyxXyYZzZzdlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlAcaps.xsXyYzZEheAxZXyYzZE!!") == "wrlcps.xsXyYzZhxZXyYzZ!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazyy") == "lzyy")){ tests_passed++; } total_tests++;

    if((remove_vowels("over1awt!th2b3c4d5anopqrstuvwxyxXyYZzZzvwxyzzzzzzz") == "vr1wt!th2b3c4d5npqrstvwxyxXyYZzZzvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("over1a2b3c4d5e6f7g8h9i10jklmnopqrstuvCaaaaAAAABBBCCCdddDEEEEE!wxyzzzzzzz") == "vr12b3c4d56f7g8h910jklmnpqrstvCBBBCCCdddD!wxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("tIZdDLhvvayYZzZ!ouse") == "tZdDLhvvyYZzZ!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hello1a2b3c4d5e6fz7g8h9i10jkldoeloIZdDLmnopqrstuvwxyzzzzzzzaaaHello") == "Hll12b3c4d56fz7g8h910jkldlZdDLmnpqrstvwxyzzzzzzzHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ous!ar!ous") == "vvr!s!r!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("yYzZbraaaaAAAABBBCCCdddDaEEEE!ownE") == "yYzZbrBBBCCCdddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("ww!wtwefghijklmnopqrstuvwxyzuickvcdarr!oush") == "ww!wtwfghjklmnpqrstvwxyzckvcdrr!sh")){ tests_passed++; } total_tests++;

    if((remove_vowels("wwor") == "wwr")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8h9i10jklmnopqrstuvwxyzzzazzzzaaaquickaAAAABBBCCCdddDEEEE!") == "12b3c4d56fzxXyYzZ7gcps.8h910jklmnpqrstvwxyzzzzzzzqckBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("punctuat!on,brown") == "pnctt!n,brwn")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helww!wtwhloAxZXyYworllquitoday?ck!zZbraaaaAAAABBBCCCdddDaEEEE!ownE") == "Hlww!wtwhlxZXyYwrllqtdy?ck!zZbrBBBCCCdddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxXyworlAxcaps.xXyYzZEhe!!YzZE") == "xXywrlxcps.xXyYzZh!!YzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("mFjXdJWPBmt") == "mFjXdJWPBmt")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopstworldThe!zzzzzzz") == "12b3c4d56f7g8h910jklmnpstwrldTh!zzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4dmnopqrstuvwxyzzzzzzzaaaHello") == "12b3c4dmnpqrstvwxyzzzzzzzHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("ww!wtwtwh") == "ww!wtwtwh")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4dmnopqrstuvwxyzzzzzzzaabrownaHello") == "12b3c4dmnpqrstvwxyzzzzzzzbrwnHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("eT") == "T")){ tests_passed++; } total_tests++;

    if((remove_vowels("ov") == "v")){ tests_passed++; } total_tests++;

    if((remove_vowels("ofo") == "f")){ tests_passed++; } total_tests++;

    if((remove_vowels("thanopqrstuvwTh!sxyxXyYZzZz") == "thnpqrstvwTh!sxyxXyYZzZz")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqrstuvwxyzuickvcdarr!ous") == "fghjklmnpqrstvwxyzckvcdrr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("oveHeleHellolo") == "vHlHlll")){ tests_passed++; } total_tests++;

    if((remove_vowels("var!xXyYZzZous") == "vr!xXyYZzZs")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ouosar!ous") == "vvr!sr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fz7g8h9i10jklmnopqrstuvwxyzzzzzzzaaaaAA1AABBBCCCdddDEEEE!") == "12b3c4d56fz7g8h910jklmnpqrstvwxyzzzzzzz1BBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("oveello") == "vll")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hellcaps.o,") == "Hllcps.,")){ tests_passed++; } total_tests++;

    if((remove_vowels("over1a2b3c4dt5anopqrstuvwxyxXyYZzZzvwxyzzzzzzz") == "vr12b3c4dt5npqrstvwxyxXyYZzZzvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("lftoSCkoDl") == "lftSCkDl")){ tests_passed++; } total_tests++;

    if((remove_vowels("over1a2b3c4d5e6f7rstuvwxyzzzzzzz") == "vr12b3c4d56f7rstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("anzazylyou") == "nzzyly")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.AYxXyYzZEworllquy?ck!AxZXyYzZE") == "cps.YxXyYzZwrllqy?ck!xZXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOlHlEo") == "lHl")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxXyYwzZEworllquitoday?ck!AxXyworlAxcaps.xXyYzZEhe!!YzZE") == "xXyYwzZwrllqtdy?ck!xXywrlxcps.xXyYzZh!!YzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("@anazyl") == "@nzyl")){ tests_passed++; } total_tests++;

    if((remove_vowels("c1a2b3c4d5e6fzAxXyYzZE7gcaps.8h9i10jklmnopqrstuvwxyzzzzzzzaaaaAAAABBBCCCdddDEEEE!apZE") == "c12b3c4d56fzxXyYzZ7gcps.8h910jklmnpqrstvwxyzzzzzzzBBBCCCdddD!pZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("quitoday?cworll1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuvwxyzzzzzzzquitoday?ck!") == "qtdy?cwrll12b3c4d56f7g8h910jklmnpHlww!wtwhlqrstvwxyzzzzzzzqtdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzZbrotIZdDLhvvayYZzZ!ousewnE") == "xZXyYzZbrtZdDLhvvyYZzZ!swn")){ tests_passed++; } total_tests++;

    if((remove_vowels("aHello,nazylyou") == "Hll,nzyly")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helww!wtwhloAxZXyYy?ck!zZbraaaaAAAABBBCCCdddDaEEEE!ownE") == "Hlww!wtwhlxZXyYy?ck!zZbrBBBCCCdddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ouusarxXZE") == "vvr!srxXZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghistuvwxyz") == "fghstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("hthe") == "hth")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3cvvar!ouusarxXyYZuzZ!ous4d5e6fz7g8h9i10jkldoeloIZdDLmnopqrstuvwxyzzzzzzzaaaHello") == "12b3cvvr!srxXyYZzZ!s4d56fz7g8h910jkldlZdDLmnpqrstvwxyzzzzzzzHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fz7g8h9i10jklmnopqrstuvBCCCdddDEEEtE!") == "12b3c4d56fz7g8h910jklmnpqrstvBCCCdddDt!")){ tests_passed++; } total_tests++;

    if((remove_vowels("IZdDL") == "ZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("tworlAcaps.xyyYzZEhe!!hhhe") == "twrlcps.xyyYzZh!!hhh")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.HelllftoSCkoDlo") == "dg.HlllftSCkDl")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqrsttuvwxyz") == "fghjklmnpqrsttvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hlo") == "Hl")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlld!ln,") == "wrlld!ln,")){ tests_passed++; } total_tests++;

    if((remove_vowels("andbrown") == "ndbrwn")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hl") == "Hl")){ tests_passed++; } total_tests++;

    if((remove_vowels("anorstuvwxyxXyYZzZzzdoeloIZdDL") == "nrstvwxyxXyYZzZzzdlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("abquicckcd") == "bqcckcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helww!wtwhloAxZXyYzZbraaaaAAAABBBCCCdpuuat!on,ddDaEEEE!ownE") == "Hlww!wtwhlxZXyYzZbrBBBCCCdpt!n,ddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helww!wtwhloAxZXyYzZbraaaaworll1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuvwxyzzzzzzzquitoday?ck!AAAABBBCCCdddDaEEEE!ownE") == "Hlww!wtwhlxZXyYzZbrwrll12b3c4d56f7g8h910jklmnpHlww!wtwhlqrstvwxyzzzzzzzqtdy?ck!BBBCCCdddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("mFjoveHello") == "mFjvHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("AAxcaps.AYxXyYzZEAxZXyYzZEZX") == "xcps.YxXyYzZxZXyYzZZX")){ tests_passed++; } total_tests++;

    if((remove_vowels("ae") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXand") == "xZXnd")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3cz4d5e6f7g8h9i10jklmnopqrstuvwxyzzzzzzz") == "12b3cz4d56f7g8h910jklmnpqrstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("exaemple@exaHelAxZXyYzZbrownElomple.com") == "xmpl@xHlxZXyYzZbrwnlmpl.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("vousarr!sous") == "vsrr!ss")){ tests_passed++; } total_tests++;

    if((remove_vowels("oHelww!wtwhloAxZXyYzZbraaaaAAAABBBCCCdpuuat!on,ddDaEEEE!ownEveelvlo") == "Hlww!wtwhlxZXyYzZbrBBBCCCdpt!n,ddD!wnvlvl")){ tests_passed++; } total_tests++;

    if((remove_vowels("ppAcaps.xXyYzZE") == "ppcps.xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("strHo,!ng") == "strH,!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("stsr!ng") == "stsr!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqrstuvwxyzhow") == "fghjklmnpqrstvwxyzhw")){ tests_passed++; } total_tests++;

    if((remove_vowels("numb3randsAxZXyYzZbraaaaAAAABBBCCCdddDaEEEE!ownE,") == "nmb3rndsxZXyYzZbrBBBCCCdddD!wn,")){ tests_passed++; } total_tests++;

    if((remove_vowels("ofoo") == "f")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuv8wxyzzzzzzz") == "12b3c4d56f7g8h910jklmnpHlww!wtwhlqrstv8wxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("tworlAcaps.xXyyYzZEhe!h!hhhe") == "twrlcps.xXyyYzZh!h!hhh")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzAcaps.xXyYzZEZE") == "xZXyYzcps.xXyYzZZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghistvuvwxyz") == "fghstvvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("lAxazyZX") == "lxzyZX")){ tests_passed++; } total_tests++;

    if((remove_vowels("worll1a2b3c4d5e6f7g8h9iworlld!ln,10jklmnopHelww!wtwhloqrstuvwxyzzzzzzzquitoday?ck!") == "wrll12b3c4d56f7g8h9wrlld!ln,10jklmnpHlww!wtwhlqrstvwxyzzzzzzzqtdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("wdd!") == "wdd!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aefghistvuvwxyzbcd") == "fghstvvwxyzbcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8kh9i10jklmnopqrstuvwxyzzzzzaaaquickaAAAABBBCCCdddDEEEE!") == "12b3c4d56fzxXyYzZ7gcps.8kh910jklmnpqrstvwxyzzzzzqckBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("UVzMKnT") == "VzMKnT")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!thh") == "w!thh")){ tests_passed++; } total_tests++;

    if((remove_vowels("dodeloIZdDL") == "ddlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcap5s.8h9i") == "12b3c4d56fzxXyYzZ7gcp5s.8h9")){ tests_passed++; } total_tests++;

    if((remove_vowels("vanorstuvwxyxXyYZzZzzdoeloIZdDLousarr!sous") == "vnrstvwxyxXyYZzZzzdlZdDLsrr!ss")){ tests_passed++; } total_tests++;

    if((remove_vowels("capaov.") == "cpv.")){ tests_passed++; } total_tests++;

    if((remove_vowels("efgijklmnopqrstuvwxyzhow") == "fgjklmnpqrstvwxyzhw")){ tests_passed++; } total_tests++;

    if((remove_vowels("quitodayd?ck") == "qtdyd?ck")){ tests_passed++; } total_tests++;

    if((remove_vowels("YFx") == "YFx")){ tests_passed++; } total_tests++;

    if((remove_vowels("dodeloIZd") == "ddlZd")){ tests_passed++; } total_tests++;

    if((remove_vowels("wwworlld!or") == "wwwrlld!r")){ tests_passed++; } total_tests++;

    if((remove_vowels("anoorstuvwxyxXyYZzZz") == "nrstvwxyxXyYZzZz")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!thHello") == "w!thHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("wt!th") == "wt!th")){ tests_passed++; } total_tests++;

    if((remove_vowels("tworlAcaps.xXyyYzZEhe!!hdog.Hellohhe") == "twrlcps.xXyyYzZh!!hdg.Hllhh")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijnklmnopqrstuvwxyzuickvcd") == "fghjnklmnpqrstvwxyzckvcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ouusavrxXZE") == "vvr!svrxXZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("theworllquitodacapwdd!s.AzZEy?ck!") == "thwrllqtdcpwdd!s.zZy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("eww!wtwhT") == "ww!wtwhT")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqtIZdDLhvvayYZzZ!ouserstuvwxyz") == "fghjklmnpqtZdDLhvvyYZzZ!srstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4dmwnopqrstuvwxyzzzzzzzaabrownaHello") == "12b3c4dmwnpqrstvwxyzzzzzzzbrwnHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fworldThe!pstworldThe!zzzzzzz") == "12b3c4d56fwrldTh!pstwrldTh!zzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("vousar!o") == "vsr!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxXyYwzZEworllquitoday?ck!xcaps.xXyYzZEhe!!YzZE") == "xXyYwzZwrllqtdy?ck!xcps.xXyYzZh!!YzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("vv") == "vv")){ tests_passed++; } total_tests++;

    if((remove_vowels("twporlAcaps.xXyyYzefgijklmnopqrstuvwxyzhowhe") == "twprlcps.xXyyYzfgjklmnpqrstvwxyzhwh")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.Hellworhe!o") == "dg.Hllwrh!")){ tests_passed++; } total_tests++;

    if((remove_vowels("twhawbcd") == "twhwbcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("ouunsavrxXZE") == "nsvrxXZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hello1a2b3c4d5e6fz7g8h9i10jklHelww!wtwhloAxZXyYworllquitoday?ck!zZbraaaaAAAABBBCCCdddDaEEEE!ownEdoeloIZdDLmnopqrstuvwxyzzzzzzzaaaHello") == "Hll12b3c4d56fz7g8h910jklHlww!wtwhlxZXyYwrllqtdy?ck!zZbrBBBCCCdddD!wndlZdDLmnpqrstvwxyzzzzzzzHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("exampletworlAycaps.xXyYzZEhe!!hhhe@example.colm") == "xmpltwrlycps.xXyYzZh!!hhh@xmpl.clm")){ tests_passed++; } total_tests++;

    if((remove_vowels("ooveello") == "vll")){ tests_passed++; } total_tests++;

    if((remove_vowels("mpYworld!rownw!thHelloSq") == "mpYwrld!rwnw!thHllSq")){ tests_passed++; } total_tests++;

    if((remove_vowels("wwwstrHello,!ngorlAcaps.xXyYzZEhe!!lazy!wtwth") == "wwwstrHll,!ngrlcps.xXyYzZh!!lzy!wtwth")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqtIZdDLhvvayYZzZ!ouserstuvwxyzAE") == "fghjklmnpqtZdDLhvvyYZzZ!srstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("mFjoeHello") == "mFjHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("oworlAcaps.xsXyYzZEheAxZXyYzZE!!fo") == "wrlcps.xsXyYzZhxZXyYzZ!!f")){ tests_passed++; } total_tests++;

    if((remove_vowels("ww!wtwefghijklmnopqrstuvwxyzuickanzazylyouvcdarr!oush") == "ww!wtwfghjklmnpqrstvwxyzcknzzylyvcdrr!sh")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvnar!ousar!ous") == "vvnr!sr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("vstsr!ngar!xXyYZzZous") == "vstsr!ngr!xXyYZzZs")){ tests_passed++; } total_tests++;

    if((remove_vowels("oveHelworlAcaps.xXyYzZEhe!!") == "vHlwrlcps.xXyYzZh!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("ppAcquitoday?cworll1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuvwxyzzzzzzzquitoday?ck!aps.xXyYzZE") == "ppcqtdy?cwrll12b3c4d56f7g8h910jklmnpHlww!wtwhlqrstvwxyzzzzzzzqtdy?ck!ps.xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("evvar!ouusarxXyYZzZ!ousandfghijnklmnopqrstuvwxyzuickvd") == "vvr!srxXyYZzZ!sndfghjnklmnpqrstvwxyzckvd")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnwopqrstuvwxyz") == "fghjklmnwpqrstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("1amnopqrstuvwxyzzzzzaaaquickaAAAABBBCCCdddDEEEE!") == "1mnpqrstvwxyzzzzzqckBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqtaaaaACCCdddDaEEEE!ouserstuvwxyz") == "fghjklmnpqtCCCdddD!srstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("AAx1a2b3c4d5e6f7g8h9i10jklmnopstworldThe!zzzzzzzZX") == "x12b3c4d56f7g8h910jklmnpstwrldTh!zzzzzzzZX")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!wwtwh") == "w!wwtwh")){ tests_passed++; } total_tests++;

    if((remove_vowels("xXCaaaaAEEEE!yYzdoeloIZdDLZ") == "xXC!yYzdlZdDLZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hellcaabcdps.o,") == "Hllcbcdps.,")){ tests_passed++; } total_tests++;

    if((remove_vowels("oHlabquickcdo") == "Hlbqckcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("worl!") == "wrl!")){ tests_passed++; } total_tests++;

    if((remove_vowels("punctuat!oHello") == "pnctt!Hll")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i130jklmnopqrstuvwxyzzzzzzzaaaaAAAABBBCCCdddDEEEE!") == "12b3c4d56f7g8h9130jklmnpqrstvwxyzzzzzzzBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fz7g8hC9i10jklmnopqrstuvBCCCdddDEEEtE!") == "12b3c4d56fz7g8hC910jklmnpqrstvBCCCdddDt!")){ tests_passed++; } total_tests++;

    if((remove_vowels("a") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("oo") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaACCCquitoday?cworll1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuvwxyzzzzzzzquitoday?ck!dddDaEEEEC!") == "CCCqtdy?cwrll12b3c4d56f7g8h910jklmnpHlww!wtwhlqrstvwxyzzzzzzzqtdy?ck!dddDC!")){ tests_passed++; } total_tests++;

    if((remove_vowels("world!rownw!thHello") == "wrld!rwnw!thHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("anoorstuvwxyxXYZzZz") == "nrstvwxyxXYZzZz")){ tests_passed++; } total_tests++;

    if((remove_vowels("anopqrstvvar!ZouusavrxXZEXyYZzZz") == "npqrstvvr!ZsvrxXZXyYZzZz")){ tests_passed++; } total_tests++;

    if((remove_vowels("anazzylyou") == "nzzyly")){ tests_passed++; } total_tests++;

    if((remove_vowels("JmFjXdJWPBt") == "JmFjXdJWPBt")){ tests_passed++; } total_tests++;

    if((remove_vowels("worll1a2b3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqr!stuvwxyzzzzzzuitoday?ck!") == "wrll12b3c4d56f7g8h910jklmnpHlww!wtwhlqr!stvwxyzzzzzztdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aapuncabqabcd") == "pncbqbcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("wdorld!") == "wdrld!")){ tests_passed++; } total_tests++;

    if((remove_vowels("eeT") == "T")){ tests_passed++; } total_tests++;

    if((remove_vowels("exww!wtwthampletwortlAycaps.xXyYzZEhee!!hhhe@example.colm") == "xww!wtwthmpltwrtlycps.xXyYzZh!!hhh@xmpl.clm")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.AYxXTRzFAAxyYzZEAxZXyYzZEcaps.xXyYzZE") == "cps.YxXTRzFxyYzZxZXyYzZcps.xXyYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("vxXyYZzZvar!ousar!ABBBCCCdddDaEEBEE!") == "vxXyYZzZvr!sr!BBBCCCdddDB!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxXyYwzZEworllquitoday?ck!AxXyworlAxcaps.xXyYzZEohe!!YzZE") == "xXyYwzZwrllqtdy?ck!xXywrlxcps.xXyYzZh!!YzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i110jklmnopqrstworldThe!zzzzzzz") == "12b3c4d56f7g8h9110jklmnpqrstwrldTh!zzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("andbrow1a2b3c4d5e6f7g8h9i110jklmnotworlAcaps.xXyyYzZEhe!h!hhhepqrstworldThe!zzzzzzz") == "ndbrw12b3c4d56f7g8h9110jklmntwrlcps.xXyyYzZh!h!hhhpqrstwrldTh!zzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("worll!quy?ck!wdoeloIZdDL") == "wrll!qy?ck!wdlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("He!llwo") == "H!llw")){ tests_passed++; } total_tests++;

    if((remove_vowels("over1awt!th2b3c4d5anopqrstuvwxyxXyYyZzZzvwxyzzzzzzz") == "vr1wt!th2b3c4d5npqrstvwxyxXyYyZzZzvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("f1a2b3c4d5e6fz7g8h9i10jklm6nopqrTh!s") == "f12b3c4d56fz7g8h910jklm6npqrTh!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("doeloIIIZdDL") == "dlZdDL")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIq") == "q")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8h9i10jklmnopqrstuvwx0yzzzazzzzaaaquickaAAAABBBCCCdddDEEEE!") == "12b3c4d56fzxXyYzZ7gcps.8h910jklmnpqrstvwx0yzzzzzzzqckBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("wdooelo") == "wdl")){ tests_passed++; } total_tests++;

    if((remove_vowels("worldThe!fEoxdddDaEEEEn") == "wrldTh!fxdddDn")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqrsaaaaAAAABBBCCCfEoxdddDaEEEE!tuvwxyzuickvcdarr!ous") == "fghjklmnpqrsBBBCCCfxdddD!tvwxyzckvcdrr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzZbraaaaAAAABBBCCCdAEIoOHlompYworld!rownw!thHelloSq") == "xZXyYzZbrBBBCCCdHlmpYwrld!rwnw!thHllSq")){ tests_passed++; } total_tests++;

    if((remove_vowels("oHelww!wtwhloAxZXover1a2b3c4dt5anopqrstuvwxyxXyYZzZzvwxyzzzzzzzyYzZbraaaaAAAABBBCCCdpuuat!on,ddDaEEEE!ownEveelvlo") == "Hlww!wtwhlxZXvr12b3c4dt5npqrstvwxyxXyYZzZzvwxyzzzzzzzyYzZbrBBBCCCdpt!n,ddD!wnvlvl")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hell") == "Hll")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOHlo") == "Hl")){ tests_passed++; } total_tests++;

    if((remove_vowels("wolAxZXyYzZbraaaaAAAABBBCCCdddDaEEEE!ownEftoSCkoDr") == "wlxZXyYzZbrBBBCCCdddD!wnftSCkDr")){ tests_passed++; } total_tests++;

    if((remove_vowels("AxZXyYzZbraaaaAAAABBBCCCdAEIoOHlo") == "xZXyYzZbrBBBCCCdHl")){ tests_passed++; } total_tests++;

    if((remove_vowels("theworllquitoday?ck!") == "thwrllqtdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("azy") == "zy")){ tests_passed++; } total_tests++;

    if((remove_vowels("dFymXw") == "dFymXw")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hello1a2b3c4d5e6fz7g8h9i10jkldoeloIZdDLmnopqr1a2b3c4d5e6f7g8h9i130jklmnopqrstuvwxyzzzzzzzaaaaAAAABBBCCCdddDEEEE!stuvwxyzzzzzzzaaaHello") == "Hll12b3c4d56fz7g8h910jkldlZdDLmnpqr12b3c4d56f7g8h9130jklmnpqrstvwxyzzzzzzzBBBCCCdddD!stvwxyzzzzzzzHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("He!llxXyYZzZwo") == "H!llxXyYZzZw")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5zz") == "12b3c4d5zz")){ tests_passed++; } total_tests++;

    if((remove_vowels("braaaaAAAABBBCCCHello") == "brBBBCCCHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("ww!wtwefghijklmnopqrstuvwxyzuickanzazylyouvcdsarr!oush") == "ww!wtwfghjklmnpqrstvwxyzcknzzylyvcdsrr!sh")){ tests_passed++; } total_tests++;

    if((remove_vowels("ATh!s") == "Th!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!aaaaAAAABBBCCCdddDaEEEE!hHello") == "w!BBBCCCdddD!hHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("abquiccUVzMKnTvvar!ousar!ouscd") == "bqccVzMKnTvvr!sr!scd")){ tests_passed++; } total_tests++;

    if((remove_vowels("cpaps.") == "cpps.")){ tests_passed++; } total_tests++;

    if((remove_vowels("theworllqouitoday!") == "thwrllqtdy!")){ tests_passed++; } total_tests++;

    if((remove_vowels("quitoday?cworll1a2btheworllqouitoday!3c4d5e6f7g8h9i10jklmnopHelww!wtwhloqrstuvwxyzzzzzzzquitoday?ck!") == "qtdy?cwrll12bthwrllqtdy!3c4d56f7g8h910jklmnpHlww!wtwhlqrstvwxyzzzzzzzqtdy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUaeoHlabquickcdoioiuq") == "Hlbqckcdq")){ tests_passed++; } total_tests++;

    if((remove_vowels("AAxcaps.AYxXyYzZEAxZZEZX") == "xcps.YxXyYzZxZZZX")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3cz4d5e6f7g8h910jklmnopqrstuvwxyzzzzzzz") == "12b3cz4d56f7g8h910jklmnpqrstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("doHello1a2b3c4d5e6fz7g8h9i10jkldoeloIZdDLmnopqr1a2b3c4d5e6f7g8h9i130jklmnopqrstuvwxyzzzzzzzaaaaAAAABBBCCCdddDEEEE!stuvwxyzzzzzzzaaaHelloeCaaaaAAAABBBCCCdddDEEEE!lloo") == "dHll12b3c4d56fz7g8h910jkldlZdDLmnpqr12b3c4d56f7g8h9130jklmnpqrstvwxyzzzzzzzBBBCCCdddD!stvwxyzzzzzzzHllCBBBCCCdddD!ll")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ouar!ous") == "vvr!r!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("1seuvwxyz") == "1svwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("bHTh!s") == "bHTh!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helww!wtwhloAxZXyYworllquitoday?ck!zZbraaaaAAAABBBCIZdDLCCdddDaEEEE!ownE") == "Hlww!wtwhlxZXyYwrllqtdy?ck!zZbrBBBCZdDLCCdddD!wn")){ tests_passed++; } total_tests++;

    if((remove_vowels("aHlnd") == "Hlnd")){ tests_passed++; } total_tests++;

    if((remove_vowels("vopunctuwat!!oHellousar!ous") == "vpnctwt!!Hllsr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!wvar!xXyYZzZouswtwh") == "w!wvr!xXyYZzZswtwh")){ tests_passed++; } total_tests++;

    if((remove_vowels("worllquy?ck!") == "wrllqy?ck!")){ tests_passed++; } total_tests++;

    if((remove_vowels("numbcaps.AYxXTRzFAAxyYzZEAxZXyYzZEcaps.xXyYzZE,") == "nmbcps.YxXTRzFxyYzZxZXyYzZcps.xXyYzZ,")){ tests_passed++; } total_tests++;

    if((remove_vowels("theworllquitodacaps.AzZEy?ck!L") == "thwrllqtdcps.zZy?ck!L")){ tests_passed++; } total_tests++;

    if((remove_vowels("vvar!ouarr!ous") == "vvr!rr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("f1a2b3c4d5e6fzrTh!s") == "f12b3c4d56fzrTh!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("dogg.") == "dgg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("@@") == "@@")){ tests_passed++; } total_tests++;

    if((remove_vowels("varos") == "vrs")){ tests_passed++; } total_tests++;

    if((remove_vowels("abqabcd") == "bqbcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("qquick") == "qqck")){ tests_passed++; } total_tests++;

    if((remove_vowels("wworhow") == "wwrhw")){ tests_passed++; } total_tests++;

    if((remove_vowels("aefghistvuvwxyz") == "fghstvvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6fzAxXyYzZE7gcaps.8h9i10jklmnopqBBBCCCddidDEEEE!") == "12b3c4d56fzxXyYzZ7gcps.8h910jklmnpqBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("xx") == "xx")){ tests_passed++; } total_tests++;

    if((remove_vowels("mFjoemHello") == "mFjmHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.Hellwor") == "dg.Hllwr")){ tests_passed++; } total_tests++;

    if((remove_vowels("xXCaaaaAEEEE!yYzdoeloIZdDLZvar!ous") == "xXC!yYzdlZdDLZvr!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("theworllquitodacaps.AzZEy?ack!L") == "thwrllqtdcps.zZy?ck!L")){ tests_passed++; } total_tests++;

    if((remove_vowels("puzZE") == "pzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("fLDZzeBh") == "fLDZzBh")){ tests_passed++; } total_tests++;

    if((remove_vowels("fox") == "fx")){ tests_passed++; } total_tests++;

    if((remove_vowels("apuncabqabcd") == "pncbqbcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("worllquy?ck!aps.xXyYzZEhe!!hvvayYZzZ!ouserstuvwxyz") == "wrllqy?ck!ps.xXyYzZh!!hvvyYZzZ!srstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("wt!thvvar!ousar!ABBBCCCdddDaEEEE!") == "wt!thvvr!sr!BBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("wdw!aAAAABBBCCCddDEEEE!dJWPBmmt") == "wdw!BBBCCCddD!dJWPBmmt")){ tests_passed++; } total_tests++;

    if((remove_vowels("AAxXyzZE") == "xXyzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("EjGkZwKvO") == "jGkZwKv")){ tests_passed++; } total_tests++;

    if((remove_vowels("anazylyounumb3rs,") == "nzylynmb3rs,")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUaeiou") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels(".") == ".")){ tests_passed++; } total_tests++;

    if((remove_vowels("0123456789") == "0123456789")){ tests_passed++; } total_tests++;

    if((remove_vowels("AbCdeFGHiJklmnOPqRsTuVwXYz") == "bCdFGHJklmnPqRsTVwXYz")){ tests_passed++; } total_tests++;

    if((remove_vowels("AAaaBBbbCCccDDddEEeeFFff") == "BBbbCCccDDddFFff")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUeiouq") == "q")){ tests_passed++; } total_tests++;

    if((remove_vowels("examplle@example.com") == "xmpll@xmpl.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAdDEEEE!") == "dD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!ngand") == "str!ngnd")){ tests_passed++; } total_tests++;

    if((remove_vowels("punctuat!oHellolazyn,") == "pnctt!Hlllzyn,")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaaAAdDEEEE!") == "dD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAdDEEaaaaAAdDEEEE!EEE!") == "dDdD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("examplle@example.copm") == "xmpll@xmpl.cpm")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUeoiouq") == "q")){ tests_passed++; } total_tests++;

    if((remove_vowels("worl") == "wrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!!ng") == "str!!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaexample@example.comTheaaAAAABBBCCCdddDEEEE!") == "xmpl@xmpl.cmThBBBCCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!ngandlazy") == "str!ngndlzy")){ tests_passed++; } total_tests++;

    if((remove_vowels("punctuat!oHellon,") == "pnctt!Hlln,")){ tests_passed++; } total_tests++;

    if((remove_vowels("tokday?jklmnoprstuvwxyzzzzzzzz") == "tkdy?jklmnprstvwxyzzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!ngl") == "str!ngl")){ tests_passed++; } total_tests++;

    if((remove_vowels("today?jklmnoprstuvwxyzzzzzzz") == "tdy?jklmnprstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazyog.") == "lzyg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("eHello,") == "Hll,")){ tests_passed++; } total_tests++;

    if((remove_vowels("jyJiBLGfRP") == "jyJBLGfRP")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqrstuvwxyztare") == "fghjklmnpqrstvwxyztr")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopqrstuvwxyzytaredog.hday?") == "fghjklmnpqrstvwxyzytrdg.hdy?")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBCCdDEEEE!") == "BBBCCdD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAdEexample@example.comTheDEEaaaaAAdDEEEE!EEE!") == "dxmpl@xmpl.cmThDdD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("foxy") == "fxy")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazzyog.") == "lzzyg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hellay?") == "Hlly?")){ tests_passed++; } total_tests++;

    if((remove_vowels("g.") == "g.")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaAEIOUeiouqquiveraAAdDEEaaaaAAdDEEDEE!EEE!") == "qqvrdDdDD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaaAAAABBBCCdDEEEE!") == "BBBCCdD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("woyourl") == "wyrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("MBSXebBdc") == "MBSXbBdc")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnogpqrstuvwxyztare") == "fghjklmngpqrstvwxyztr")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10Hello,") == "12b3c4d56f7g8h910Hll,")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopqrstuvwxkyzzzzzzz") == "12b3c4d56f7g8h910jklmnpqrstvwxkyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlefghijklmnopqrstuvwxyztare") == "wrlfghjklmnpqrstvwxyztr")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.hday?") == "dg.hdy?")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazzyaoog.") == "lzzyg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("s1a2b3c4d5e6f7g8h9i10jklmnopqrstuvwxyzzzzzzztr!ngl") == "s12b3c4d56f7g8h910jklmnpqrstvwxyzzzzzzztr!ngl")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b34c4d5e6f7g8h9i10Hello,") == "12b34c4d56f7g8h910Hll,")){ tests_passed++; } total_tests++;

    if((remove_vowels("xkfHeZTld") == "xkfHZTld")){ tests_passed++; } total_tests++;

    if((remove_vowels("foy") == "fy")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!gngnandlazy") == "str!gngnndlzy")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!n") == "str!n")){ tests_passed++; } total_tests++;

    if((remove_vowels("g.lay?") == "g.ly?")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghredog.hday?") == "fghrdg.hdy?")){ tests_passed++; } total_tests++;

    if((remove_vowels("jumps") == "jmps")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helleo") == "Hll")){ tests_passed++; } total_tests++;

    if((remove_vowels("andd") == "ndd")){ tests_passed++; } total_tests++;

    if((remove_vowels("tare") == "tr")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!!h") == "w!!h")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBnumb3rs,CCCdddDEEEE!") == "BBBnmb3rs,CCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("wayoubcdorl") == "wybcdrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBnumb3rs,CCCdddDEw!!hEEE!") == "BBBnmb3rs,CCCdddDw!!h!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIcaps.zyOUaeiouq") == "cps.zyq")){ tests_passed++; } total_tests++;

    if((remove_vowels("lo,") == "l,")){ tests_passed++; } total_tests++;

    if((remove_vowels("ovner") == "vnr")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!caps.zyngcand") == "str!cps.zyngcnd")){ tests_passed++; } total_tests++;

    if((remove_vowels("jaaaaAAAABBBCCCdddDEEEE!oveHello,dog.") == "jBBBCCCdddD!vHll,dg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("worol") == "wrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("strTh!s") == "strTh!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("example@example.comThe") == "xmpl@xmpl.cmTh")){ tests_passed++; } total_tests++;

    if((remove_vowels("wtoday?jklmnoprstuvwxyzzzzzzzorld!") == "wtdy?jklmnprstvwxyzzzzzzzrld!")){ tests_passed++; } total_tests++;

    if((remove_vowels("MBSXebnumb3rs,Bdc") == "MBSXbnmb3rs,Bdc")){ tests_passed++; } total_tests++;

    if((remove_vowels("wlo,!h") == "wl,!h")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUaeiojyJiBLRGfRP") == "jyJBLRGfRP")){ tests_passed++; } total_tests++;

    if((remove_vowels("worldd!") == "wrldd!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEEIOUaeHelHlo") == "HlHl")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helle") == "Hll")){ tests_passed++; } total_tests++;

    if((remove_vowels("gh.") == "gh.")){ tests_passed++; } total_tests++;

    if((remove_vowels("c") == "c")){ tests_passed++; } total_tests++;

    if((remove_vowels("xkfHeZld") == "xkfHZld")){ tests_passed++; } total_tests++;

    if((remove_vowels("jaaaaAAAAeBBBCCCg.") == "jBBBCCCg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10Hejcllocaps.ck,") == "12b3c4d56f7g8h910Hjcllcps.ck,")){ tests_passed++; } total_tests++;

    if((remove_vowels("xkfHld") == "xkfHld")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlefghijklmnopquickytoday?jklmnoprstuvwxyzzzzzzzzdd!") == "wrlfghjklmnpqckytdy?jklmnprstvwxyzzzzzzzzdd!")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.zy") == "cps.zy")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaexamDEEEE!") == "xmD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("punctuat!uoHellon,") == "pnctt!Hlln,")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.hoday?") == "dg.hdy?")){ tests_passed++; } total_tests++;

    if((remove_vowels("examplle@example..copm") == "xmpll@xmpl..cpm")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazyog.dd") == "lzyg.dd")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.howuick") == "dg.hwck")){ tests_passed++; } total_tests++;

    if((remove_vowels("quiefghijklmnopquickyzck") == "qfghjklmnpqckyzck")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIcaps.zyOUpaeiouq") == "cps.zypq")){ tests_passed++; } total_tests++;

    if((remove_vowels("punctuat!ocn,") == "pnctt!cn,")){ tests_passed++; } total_tests++;

    if((remove_vowels("efgxkfHeZTldAEIOUaeHellohijklmnopqrstuvwxyz") == "fgxkfHZTldHllhjklmnpqrstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaEaAAdDEEEEE!") == "dD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUe") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("examplxHello,le@example.com") == "xmplxHll,l@xmpl.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("youexample@examcaps.ckple.comThe") == "yxmpl@xmcps.ckpl.cmTh")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i1ja0jklmnopqrstuvwxyzzzzzzz") == "12b3c4d56f7g8h91j0jklmnpqrstvwxyzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("MBSXaaaaAAAABBBnumb3rs,CCCdddDEEEE!ebBdc") == "MBSXBBBnmb3rs,CCCdddD!bBdc")){ tests_passed++; } total_tests++;

    if((remove_vowels("sexamplxHello,le@example.comtr!!ng") == "sxmplxHll,l@xmpl.cmtr!!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazzyaooog.") == "lzzyg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("examplle@examle.com") == "xmpll@xml.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("Helllay?") == "Hllly?")){ tests_passed++; } total_tests++;

    if((remove_vowels("puncotuat!oHellon,") == "pnctt!Hlln,")){ tests_passed++; } total_tests++;

    if((remove_vowels("eample.com") == "mpl.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlaaaaAAdDEEEE!dd!iouq") == "wrldD!dd!q")){ tests_passed++; } total_tests++;

    if((remove_vowels("MBSXaaaaAAAABBdc") == "MBSXBBdc")){ tests_passed++; } total_tests++;

    if((remove_vowels("laovnerzyog.") == "lvnrzyg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("fe") == "f")){ tests_passed++; } total_tests++;

    if((remove_vowels("examplle@examexamplle@example.copm.com") == "xmpll@xmxmpll@xmpl.cpm.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("He") == "H")){ tests_passed++; } total_tests++;

    if((remove_vowels("yoo") == "y")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.ck") == "cps.ck")){ tests_passed++; } total_tests++;

    if((remove_vowels("laovnerzyog.jyJiBLGfRP") == "lvnrzyg.jyJBLGfRP")){ tests_passed++; } total_tests++;

    if((remove_vowels("laovnerzhyoHelTheg.jyJiBLGfRP") == "lvnrzhyHlThg.jyJBLGfRP")){ tests_passed++; } total_tests++;

    if((remove_vowels("t,!hoiHellon,ldd!iouq") == "t,!hHlln,ldd!q")){ tests_passed++; } total_tests++;

    if((remove_vowels("worrol") == "wrrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAdEexample@example.comTheaDEEaaaaAAdDEEEaE!EEE!") == "dxmpl@xmpl.cmThDdD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaexample@example.comTheaaAAAABabcd") == "xmpl@xmpl.cmThBbcd")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAdDEEaaaaHexample@example.comello,DEEEE!EEE!") == "dDHxmpl@xmpl.cmll,D!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("ww!h") == "ww!h")){ tests_passed++; } total_tests++;

    if((remove_vowels("strTh!hpunctuat!oHellon,s") == "strTh!hpnctt!Hlln,s")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAdEexample@aexample.comTheaDEEaaaaAAdDEEEaE!EEE!") == "dxmpl@xmpl.cmThDdD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("totokday?jklmnoprstuvwxyzzzzzzzzThe") == "ttkdy?jklmnprstvwxyzzzzzzzzTh")){ tests_passed++; } total_tests++;

    if((remove_vowels("wtoday?jklmnoprstuvwxHstr!caps.zyngcandllo,yzzzzzzzorld!") == "wtdy?jklmnprstvwxHstr!cps.zyngcndll,yzzzzzzzrld!")){ tests_passed++; } total_tests++;

    if((remove_vowels("wefghijklmnogpqrstuvwxyztare") == "wfghjklmngpqrstvwxyztr")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.t!on,") == "cps.t!n,")){ tests_passed++; } total_tests++;

    if((remove_vowels("!h") == "!h")){ tests_passed++; } total_tests++;

    if((remove_vowels("XbFTQMiAwt") == "XbFTQMwt")){ tests_passed++; } total_tests++;

    if((remove_vowels("MBSXaaaaBAAAABBdc") == "MBSXBBBdc")){ tests_passed++; } total_tests++;

    if((remove_vowels("today?og.h") == "tdy?g.h")){ tests_passed++; } total_tests++;

    if((remove_vowels("laovnerzyog.jyJiBLGfRsngandP") == "lvnrzyg.jyJBLGfRsngndP")){ tests_passed++; } total_tests++;

    if((remove_vowels("tokday?jklmnoprstuvwxyzzztzzzzz") == "tkdy?jklmnprstvwxyzzztzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("xkfHeZTldAEIOUaeH") == "xkfHZTldH")){ tests_passed++; } total_tests++;

    if((remove_vowels("punt!on,") == "pnt!n,")){ tests_passed++; } total_tests++;

    if((remove_vowels("CpCOvCPPy") == "CpCvCPPy")){ tests_passed++; } total_tests++;

    if((remove_vowels("wefghijklmnopqrstuvwxyztareorldd!") == "wfghjklmnpqrstvwxyztrrldd!")){ tests_passed++; } total_tests++;

    if((remove_vowels("1a2b3c4d5e6f7g8h9i10jklmnopqrstuvwxyzzzczzz") == "12b3c4d56f7g8h910jklmnpqrstvwxyzzzczzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("tokday?jklumnoprstuvwxyzzztzzzzz") == "tkdy?jklmnprstvwxyzzztzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("abcdHelloanThe,") == "bcdHllnTh,")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEEIOUaeHdo.elHlofox") == "Hd.lHlfx")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBCCCdddDElazzyaoog.EE!") == "BBBCCCdddDlzzyg.!")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!!ngstr!!ng") == "str!!ngstr!!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("lago.") == "lg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlefghijklmnopqrstuvwxyztareyoo") == "wrlfghjklmnpqrstvwxyztry")){ tests_passed++; } total_tests++;

    if((remove_vowels("watoday?jklmnoprstuvwxyzzzzzzzyoubcdorl") == "wtdy?jklmnprstvwxyzzzzzzzybcdrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("quiver") == "qvr")){ tests_passed++; } total_tests++;

    if((remove_vowels("t,!hoiHellon,ldd!liouq") == "t,!hHlln,ldd!lq")){ tests_passed++; } total_tests++;

    if((remove_vowels("txkfHeZTldAEIOUaeHare") == "txkfHZTldHr")){ tests_passed++; } total_tests++;

    if((remove_vowels("xXyjcYzZ") == "xXyjcYzZ")){ tests_passed++; } total_tests++;

    if((remove_vowels("taree") == "tr")){ tests_passed++; } total_tests++;

    if((remove_vowels("caayoubd") == "cybd")){ tests_passed++; } total_tests++;

    if((remove_vowels("aa@example.comTheaDEEaaaaAAdDEEEaE!EEE!") == "@xmpl.cmThDdD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("watodayhow?jklmnoprstuvwxyzzzzzzzyoubcdorl") == "wtdyhw?jklmnprstvwxyzzzzzzzybcdrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("pun!t!on,") == "pn!t!n,")){ tests_passed++; } total_tests++;

    if((remove_vowels("efghijklmnopquickytoday?jklmnoprstuvwxyzzzzzzzz") == "fghjklmnpqckytdy?jklmnprstvwxyzzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("tkokday?jklmnoprstuvwxyzzztzzzzz") == "tkkdy?jklmnprstvwxyzzztzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlefghijklmnopquickytoday?jklmnoprstuvwxzzzzdd!") == "wrlfghjklmnpqckytdy?jklmnprstvwxzzzzdd!")){ tests_passed++; } total_tests++;

    if((remove_vowels("jumqTheps") == "jmqThps")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlaaaaAAd!dd!iouqe") == "wrld!dd!q")){ tests_passed++; } total_tests++;

    if((remove_vowels("aand") == "nd")){ tests_passed++; } total_tests++;

    if((remove_vowels("xkfHeZTldAHexample@XbFTQMiAwtexample.comello,EIOUaepHello") == "xkfHZTldHxmpl@XbFTQMwtxmpl.cmll,pHll")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazzy") == "lzzy")){ tests_passed++; } total_tests++;

    if((remove_vowels("odverlazy") == "dvrlzy")){ tests_passed++; } total_tests++;

    if((remove_vowels("wMdE") == "wMd")){ tests_passed++; } total_tests++;

    if((remove_vowels("Hellobrowntare") == "Hllbrwntr")){ tests_passed++; } total_tests++;

    if((remove_vowels("trstuvwxyzzztzzzzz") == "trstvwxyzzztzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("strTh!hpunctuat!oHel") == "strTh!hpnctt!Hl")){ tests_passed++; } total_tests++;

    if((remove_vowels("jyJJiBLGfRP") == "jyJJBLGfRP")){ tests_passed++; } total_tests++;

    if((remove_vowels("dHello,") == "dHll,")){ tests_passed++; } total_tests++;

    if((remove_vowels("aa@exampwlo,!hle.comTheaDEEaaaaAAdDEEEaE!EEE!") == "@xmpwl,!hl.cmThDdD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("jumpsexamplecaps.xample@example.comello,@example.comThe") == "jmpsxmplcps.xmpl@xmpl.cmll,@xmpl.cmTh")){ tests_passed++; } total_tests++;

    if((remove_vowels("p,unc,") == "p,nc,")){ tests_passed++; } total_tests++;

    if((remove_vowels("br") == "br")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEEIayoubc") == "ybc")){ tests_passed++; } total_tests++;

    if((remove_vowels("caaydoubd") == "cydbd")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.howuoverfosxick") == "dg.hwvrfsxck")){ tests_passed++; } total_tests++;

    if((remove_vowels("!!anThehwayoubcdorl") == "!!nThhwybcdrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("lazHellod1a2b3c4d5e6f7g8h9i10Hello,og.zcaexample@example.comTheps.") == "lzHlld12b3c4d56f7g8h910Hll,g.zcxmpl@xmpl.cmThps.")){ tests_passed++; } total_tests++;

    if((remove_vowels("hHellodog.ow") == "hHlldg.w")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.exameamplle@example.copm.com") == "cps.xmmpll@xmpl.cpm.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("wlazzyayoubcdorl") == "wlzzyybcdrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.zyandlazyE!EEE!") == "cps.zyndlzy!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("efgxkfHeZTldAEIOUaeHellohijklmnopqrustuvwxyz") == "fgxkfHZTldHllhjklmnpqrstvwxyz")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUThefghijklmnopquickytoday?jklmnoprstuvwxyzzzzzzzz!e") == "Thfghjklmnpqckytdy?jklmnprstvwxyzzzzzzzz!")){ tests_passed++; } total_tests++;

    if((remove_vowels("foxx") == "fxx")){ tests_passed++; } total_tests++;

    if((remove_vowels("AThe") == "Th")){ tests_passed++; } total_tests++;

    if((remove_vowels("AEIOUae") == "")){ tests_passed++; } total_tests++;

    if((remove_vowels("quiefghijklmnopquick") == "qfghjklmnpqck")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.exameamplAEIOUaele@example.copm.com") == "cps.xmmpll@xmpl.cpm.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("jumpseThe") == "jmpsTh")){ tests_passed++; } total_tests++;

    if((remove_vowels("xkflazyog.ddHld") == "xkflzyg.ddHld")){ tests_passed++; } total_tests++;

    if((remove_vowels("quiefghijkulmnopquick") == "qfghjklmnpqck")){ tests_passed++; } total_tests++;

    if((remove_vowels("examplle@examexamplle@exampaa@exampwlo,!hle.comTheaDEEaaaaAAdDEEEaE!EEE!le.copm.com") == "xmpll@xmxmpll@xmp@xmpwl,!hl.cmThDdD!!l.cpm.cm")){ tests_passed++; } total_tests++;

    if((remove_vowels("dog.hAdDEEEaE!EEE!") == "dg.hdD!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAxkfHeZTldAHexample@example.comello,EIOUaepHelloABBBCCdDEEEE!") == "xkfHZTldHxmpl@xmpl.cmll,pHllBBBCCdD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("worlefghijklmnopqrstuvwxyzt") == "wrlfghjklmnpqrstvwxyzt")){ tests_passed++; } total_tests++;

    if((remove_vowels("jummps") == "jmmps")){ tests_passed++; } total_tests++;

    if((remove_vowels("quiefghijkulmnAEIOUaeiojyJiBLRGfRPopqpuick") == "qfghjklmnjyJBLRGfRPpqpck")){ tests_passed++; } total_tests++;

    if((remove_vowels("pun!t!onworld!iBLGfRPus,") == "pn!t!nwrld!BLGfRPs,")){ tests_passed++; } total_tests++;

    if((remove_vowels("youexamplefghijlazzyog.klmnopquickexample@example.comTheyze@example.comThe") == "yxmplfghjlzzyg.klmnpqckxmpl@xmpl.cmThyz@xmpl.cmTh")){ tests_passed++; } total_tests++;

    if((remove_vowels("HHe") == "HH")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.ps.") == "cps.ps.")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaexamDEEE!") == "xmD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAABBBnumb3t,!hoiHellon,ldd!liouqrs,CCCdddDEEEE!") == "BBBnmb3t,!hHlln,ldd!lqrs,CCCdddD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("foHello,worlaaaaAAdDEEEE!dd!iouq") == "fHll,wrldD!dd!q")){ tests_passed++; } total_tests++;

    if((remove_vowels("lworldd!azzyog.") == "lwrldd!zzyg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("!!anThcehwayoubcdorl") == "!!nThchwybcdrl")){ tests_passed++; } total_tests++;

    if((remove_vowels("1xkfHeZTldAEIOUaeHelloa2b3c4d5e6f7g8h9i10jklmnopqrstuvwxyzzz") == "1xkfHZTldHll2b3c4d56f7g8h910jklmnpqrstvwxyzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("w") == "w")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAdDEEaaaaHEexample@example.comello,DEEEE!EEE!") == "dDHxmpl@xmpl.cmll,D!!")){ tests_passed++; } total_tests++;

    if((remove_vowels("cpunctuaTh!s") == "cpnctTh!s")){ tests_passed++; } total_tests++;

    if((remove_vowels("strtokday?jklmnoprstuvwxyzzztzzzzz!ng") == "strtkdy?jklmnprstvwxyzzztzzzzz!ng")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.worlefghijklmnopqrstuvwxyztareyoot!on,") == "cps.wrlfghjklmnpqrstvwxyztryt!n,")){ tests_passed++; } total_tests++;

    if((remove_vowels("hHello,") == "hHll,")){ tests_passed++; } total_tests++;

    if((remove_vowels("jaaaaAAAAeBBBCCtoday?og.hCg.") == "jBBBCCtdy?g.hCg.")){ tests_passed++; } total_tests++;

    if((remove_vowels("tokday?jkxkfHeZTldAEIOUaeHlmnoprstuvxwxyzzzzzzzz") == "tkdy?jkxkfHZTldHlmnprstvxwxyzzzzzzzz")){ tests_passed++; } total_tests++;

    if((remove_vowels("gefghredog.hday?") == "gfghrdg.hdy?")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaaaAAAAABBBCCCdddDElazzyaoog.EE!") == "BBBCCCdddDlzzyg.!")){ tests_passed++; } total_tests++;

    if((remove_vowels("str!ngctuat,!oHellon,") == "str!ngctt,!Hlln,")){ tests_passed++; } total_tests++;

    if((remove_vowels("xXyjcYzZwntare") == "xXyjcYzZwntr")){ tests_passed++; } total_tests++;

    if((remove_vowels("eThe") == "Th")){ tests_passed++; } total_tests++;

    if((remove_vowels("caps.efghijklmnTh!szy") == "cps.fghjklmnTh!szy")){ tests_passed++; } total_tests++;

    if((remove_vowels("aaexamDEE!") == "xmD!")){ tests_passed++; } total_tests++;

    if((remove_vowels("w!hthAEEIOUaeHelHlo") == "w!hthHlHl")){ tests_passed++; } total_tests++;

    if((remove_vowels("qexamplle@example.comuick") == "qxmpll@xmpl.cmck")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


