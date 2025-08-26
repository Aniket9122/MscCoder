#include <vector>
#include <string>
#include <set>
using namespace std;

// Function to find the word with maximum number of unique characters
string find_max(vector<string> words) {
    int max_len = 0; 
    string max_word = "";
    
    for(auto word : words){
        set<char> s(word.begin(), word.end()); // get unique chars in each word by using a set
        
        if (s.size() > max_len) {
            max_len = s.size(); 
            max_word = word; 
        } else if (s.size() == max_len && word < max_word){ // compare lexicographically
            max_word = word; 
        }
    }
    
    return max_word; 
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

    if(((find_max({"name", "of", "string"}) == "string"))){ tests_passed++; } total_tests++;

    if(((find_max({"name", "enam", "game"}) == "enam"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaaaaa", "bb", "cc"}) == "aaaaaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc", "cba"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"play", "this", "game", "of","footbott"}) == "footbott"))){ tests_passed++; } total_tests++;

    if(((find_max({"we", "are", "gonna", "rock"}) == "gonna"))){ tests_passed++; } total_tests++;

    if(((find_max({"we", "are", "a", "mad", "nation"}) == "nation"))){ tests_passed++; } total_tests++;

    if(((find_max({"this", "is", "a", "prrk"}) == "this"))){ tests_passed++; } total_tests++;

    if(((find_max({"b"}) == "b"))){ tests_passed++; } total_tests++;

    if(((find_max({"play", "play", "play"}) == "play"))){ tests_passed++; } total_tests++;

    if(((find_max({"name","of","string"}) == "string"))){ tests_passed++; } total_tests++;

    if(((find_max({"name","enam","game"}) == "enam"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaaaaa","bb","cc"}) == "aaaaaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","cba"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"play","this","game","of","footbott"}) == "footbott"))){ tests_passed++; } total_tests++;

    if(((find_max({"we","are","gonna","rock"}) == "gonna"))){ tests_passed++; } total_tests++;

    if(((find_max({"we","are","a","mad","nation"}) == "nation"))){ tests_passed++; } total_tests++;

    if(((find_max({"this","is","a","prrk"}) == "this"))){ tests_passed++; } total_tests++;

    if(((find_max({"b"}) == "b"))){ tests_passed++; } total_tests++;

    if(((find_max({"play","play","play"}) == "play"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuvwxyz"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abacbdce","edcbacba","dbcaebda"}) == "abacbdce"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbcc","dddeee","fff"}) == "aabbcc"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","bcd","def","efg"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcd","bcde","cdef","defg"}) == "abcd"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaa","bbbb","cccc"}) == "aaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"hello"}) == "hello"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyz","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","defg"}) == "defg"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaa","bbb","ccc","aaa"}) == "aaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"hellfffo"}) == "hellfffo"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbcc","aabbdbabcdcaebdacc","dddeee","fff"}) == "aabbdbabcdcaebdacc"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbdbabcdcaebdacc","dddeee","fff"}) == "aabbdbabcdcaebdacc"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloyxyz","helloxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"pqr","pqr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuvwxyz","qrstuvwxyz"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyyyz","xyyz","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"rpqr","xyz","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"hello","hello"}) == "hello"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","aabbcc","defg"}) == "defg"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloxyz","aaaa","helloxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloyxyz","aaaa","helloxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"hellfff","hellfffo","hellffbbbfo"}) == "hellffbbbfo"))){ tests_passed++; } total_tests++;

    if(((find_max({"llo"}) == "llo"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","aaaaa","aaaa"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloxyabcdefgz","helloxyz"}) == "helloxyabcdefgz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","bcd","def","bbcd","efg"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"rpqr","xyz","pqr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","bcd","bbcd","efg"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloyxyz","haaaaaello","helloxyz","helloyxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","aabbcc","bcd","def","xyyyzbcd","bbcd","efg"}) == "xyyyzbcd"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuvwxyz","qrstuedcbacbavwxyz"}) == "qrstuedcbacbavwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","baabbcccd","def","efg"}) == "baabbcccd"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaa","haaaaaello","bbb","ccc","aaa"}) == "haaaaaello"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuvwxbbbyz","qrstuvwxyz"}) == "qrstuvwxbbbyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyyyz","abcdefg","qrstuyz","qrstuvwxyz"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyyyzbchelloyxyzd","abc","aabbcc","bcd","def","xyyyzbcd","bbcd","efqrstuvwxbbbyzg"}) == "efqrstuvwxbbbyzg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abacdbdce","edcbacba","dbcaebda"}) == "abacdbdce"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloxyabcdefgz","helaabbccloxyabcdefgz","helloxyz"}) == "helaabbccloxyabcdefgz"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyyyz","xyyz","efgxyyz","pqr"}) == "efgxyyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"zxyz","xyz","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbcc","aabbdbabcdcaebdacc","dddeee","fff","fff","dddeee","aabbdbabcdcaebdacc"}) == "aabbdbabcdcaebdacc"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcrpqrdefg","qrstuvwxyz"}) == "abcrpqrdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloyxyz","hellffbbbfohelloxyz","aaaa","helloxyz"}) == "hellffbbbfohelloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyz","pqr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"qpqr","pqr","pqr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","bcd","bbcd",""}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbdbabcdcaebdacc","abc","fff"}) == "aabbdbabcdcaebdacc"))){ tests_passed++; } total_tests++;

    if(((find_max({"pqr","pqr","qr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloyxyz","haaaaaello","helloxyz","helloyxyz","haaaaaello"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaa","bbbb","cc"}) == "aaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaa","haaaaaello","bbb","aa","aaa"}) == "haaaaaello"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbcc","aabbdbabcdcaebdacc","dddeee","fff","fff","dddeee","aabbdbabcdcaebdaccabcdefg","dddeee"}) == "aabbdbabcdcaebdaccabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloxyabcdefgz","abacdbdce","helloxyz"}) == "helloxyabcdefgz"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbdbabcdcaebdacc","abc","ff","fff"}) == "aabbdbabcdcaebdacc"))){ tests_passed++; } total_tests++;

    if(((find_max({"bbbb","cc"}) == "bbbb"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaa","bbbb","cc","bbbb"}) == "aaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaa","ccccc","cccc"}) == "aaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"abacdbdce","edcbeacba"}) == "abacdbdce"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbcc","aabbdbabcdcaebdacc","dddeee","aabbdbabcdcaebdaccdabcdefg","fff","fff","dddeee","aabbdbabcdcaebdaccabcdefg","dddeee"}) == "aabbdbabcdcaebdaccabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"zhelloxyz","helloxyabcdefgz","helaabbccloxyabcdefgz","helloxyz"}) == "helaabbccloxyabcdefgz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcc","abc","fff"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyxz","pqr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcd","bcde","cdef","defg","abcd"}) == "abcd"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","bcd","dbcaebda","bbcd","efg","bbcd"}) == "dbcaebda"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaa","cccc","cccc"}) == "aaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"bcde","cdef","defg"}) == "bcde"))){ tests_passed++; } total_tests++;

    if(((find_max({"zhelloxyz","helloxyz","aaaa","helloxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"zhelloxyz","helloxyz","aaaa","helloxyz","helloxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloyxyz","haaaaaello","aa","helloxyz","helloyxyz"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","baabbcccd","def"}) == "baabbcccd"))){ tests_passed++; } total_tests++;

    if(((find_max({"qpqr","pqr","pqqr","pqr"}) == "pqqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"dddeee","aacdcaebdacc","fff"}) == "aacdcaebdacc"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuvwxyz","abcdefg"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"pqr","qr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"defg"}) == "defg"))){ tests_passed++; } total_tests++;

    if(((find_max({"zxyz","xyz","pqr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcc","qrstuedcbacbavwxyz","abc","fff"}) == "qrstuedcbacbavwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","qrstuvwxyz","hijklmnop"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbdbabcdcaebdacc","ff","fff"}) == "aabbdbabcdcaebdacc"))){ tests_passed++; } total_tests++;

    if(((find_max({"ef","abc","abc","baabbcccd","def","efg"}) == "baabbcccd"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaa","helaabbccloxyabcdefgz","bbbb","ccc","aaa","aaa"}) == "helaabbccloxyabcdefgz"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloyxyz","haaaaaello","helloxyz","helloyxyz","bbcd","bbcd"}) == "helloxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abbbcdc","aabbcbbbbc","defdg"}) == "abbbcdc"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcd","cdef"}) == "abcd"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbcbbbbc","defdg"}) == "defdg"))){ tests_passed++; } total_tests++;

    if(((find_max({"aabbdbabcdcaeb","dddeee","fff"}) == "aabbdbabcdcaeb"))){ tests_passed++; } total_tests++;

    if(((find_max({"helloxyz","aaaa","helloxydbcaebdaz","helloxyz","helloxyz"}) == "helloxydbcaebdaz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","abbbcdc","ff","fff"}) == "abbbcdc"))){ tests_passed++; } total_tests++;

    if(((find_max({"dddeee","aacdcaebdac","fff"}) == "aacdcaebdac"))){ tests_passed++; } total_tests++;

    if(((find_max({"abc","aaaaa"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"zxyz","xyz","pqr","pqr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"qr","pqr"}) == "pqr"))){ tests_passed++; } total_tests++;

    if(((find_max({"ac","abc","bcd","def","efg","abc"}) == "abc"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","HXs9s1Q","HSSbsh"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","qrstuv","ijklmn","efghip","cba"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","yx","wyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}) == "a"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","banana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","tac","act"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","date","elderberry","fig","grape"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","wyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","date","elderberry","fig","grape","date"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","xy","yx","wyx","zyx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","xy","yx","wyx","zyx","yx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","p","q","r","s","t","u","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"o","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","xyx","wyx","xky"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","abckiwidefg","hijklmnop","qrstuv","wxyz"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethis","eAgLe"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","zyx"}) == "zyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","m","yx","wyx","zyx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","grape","hwmnop","qrstuv"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanana","grape","ana","banana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","ape","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wxyz","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"r","tac","act"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyx","wyx","zyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","j","v"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","wyx","zyx","xyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","m","wyx","zyx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","xyx","wyx","xky","xky"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","grape","xyx"}) == "grape"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","cabcdefg"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","m","wyx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","banana","kiwi","pear","ape","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","yx","hijklmnop","qrstuv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","wyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"r","tac","act","r","tac"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"hxy","xyx","zyx","xyx"}) == "hxy"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxy","xyx","zyx","xyx"}) == "hxy"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrsturv","qrstuv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","titd","i","j","k","lsupersonic","m","n","p","q","r","s","t","u","v","w","x","y","z"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","iHaTethis","aaappleddzz","e","f","g","h","titd","i","j","k","lsupersonic","mhwmnop","n","p","q","r","s","t","u","v","w","x","y","z"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","gg","h","i","j","zyxk","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","cabcdefg"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","f","g","h","haaappleddzz","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","u","z"}) == "haaappleddzz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","cat","qrstuv","wxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"orange","grape","banana","","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","aaappleddzz","s","t","u","v","w","x","y","z","cabcdefg"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","tit"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","zyx","xyx"}) == "zyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","yx","wyx","zyx","yx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","j","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","abckiwidefg","hijklmnop","qrstuv","wxyz","abcdefg"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanana","grape","ana","banana","riwi","pear","ana"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","xyx","zyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"hiijklmnop","abcdefg","hijklmnop","qrstuv","wxyz","wxyz"}) == "hiijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"hiijklmnop","abcdefg","hijklmnop","qrstuv","wxyz","qrstuv"}) == "hiijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","xy","yx","wyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaglce","eAgLe","iHaTethis","Eagle"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","xyx","zyx","zyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","xylophone","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","elderberry","fig","o","date"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","HhRQ35","ana","banana","riwi","pear","ana"}) == "HhRQ35"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","","m","n","o","p","q","r","aaappleddzz","s","t","u","v","w","x","y","ana","cabcdefg"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","HhRQ35","ana","banana","pear","ana"}) == "HhRQ35"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","cat","qrstuv","wxyz","abcdefg"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","yx","actyx","zyx"}) == "actyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"wxyz","iHaTethis","eAgLe"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","yx","zyx"}) == "zyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","","m","n","o","p","q","r","aaappleddzz","s","t","u","v","w","x","y","ana","cabcdeapefg"}) == "cabcdeapefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","cbad","e","f","g","h","titd","i","j","k","lsupersonic","m","n","p","q","r","s","t","u","v","w","x","y","z"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","j","eAgLe","iHaTethis","Eagle"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xiHaTethisyx","wyx"}) == "xiHaTethisyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethiss","eAgLe"}) == "iHaTethiss"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyx","xy","xyx","wyx","xyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethi","eAgLe"}) == "iHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","tac","wyx","zyx","yx"}) == "tac"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","xy","yx","wyx","yx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","HhRQ35","ana","banana","date","pear","ana"}) == "HhRQ35"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","abckiwidefg","hijklmnop","qrstuv","abcxkydefg","wxyz","abcdefg","abcdefg"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","cabcdefg","pear","ape","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"tac","wyx","zyx","yx"}) == "tac"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyx","wyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","grape","ana","banana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","","cherry","elderberry","fig","o","date"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdHXs9s1Qg","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","cabcdefg","i"}) == "cabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","qcabcdHXs9s1Qg","r","s","t","u","v","w","x","y","z"}) == "qcabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","zyx","xy","xy"}) == "zyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"ta","wyx","yzyx","yxiHaTethisyxx"}) == "yxiHaTethisyxx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","grape","xyxx"}) == "grape"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","date","datze","elderberry","fig","grape"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","wyx","zyx","xy"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","yx","hijklmnop","qrstuv","abcgdefg","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","grape","ana","banana","bb","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","iHaTethis","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"titd","yx","wyx","zyx","yx"}) == "titd"))){ tests_passed++; } total_tests++;

    if(((find_max({"abckiwidefg","hijklmnop","qrstuv","wxyz"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethi","eAgLee"}) == "iHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","l","m","n","o","p","q","r","s","t","u","v","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"d","wxy75XPBFq19","iHaTethis","eAgLe"}) == "wxy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","grape","aana","banana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","act"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","iHaTethis","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","abcgdefg","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","abcgdefg","ana","banana","pear"}) == "abcgdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","supersonic","xyx"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","yxhwmnop","xy","yx","wyx","yx"}) == "yxhwmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","xy","supersonic","xyx"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrsturv","quv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","apeAgLee","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","abcgdefg","wxxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","cabcdefg","pear","ape","xylophone","ape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"ha","b","c","d","e","f","g","h","haaappleddzz","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","u","z"}) == "haaappleddzz"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","wxxyz","iHaTethis","iHaTethis","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"mhwmnop","hijklmnop","qrsturv","quv","wxyz","b"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat"}) == "cat"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wxyz","ha"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","wy75XPBFq19","txy","wyx","zyx","yx"}) == "wy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","HhRQ35","ana","banana","riwi","pear","ana","orange"}) == "HhRQ35"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","iHaTethis","pear","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","gefghip","h","i","j","k","l","m","n","o","p","xx","q","r","aaappleddzz","s","u","v","w","x","y","z","cabcdefg"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"mhwmnop","hijklmnop","qrsturv","quv","wxyz","b","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","actyxv","n","p","q","r","s","t","u","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","iHaTethiselderberry","iHaTethis"}) == "iHaTethiselderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","zyx","xyx","zyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","xyx","zyx","xnyx","xnyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"o","xyx"}) == "xyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"orange","grape","banana","","pear","pear","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"","apple","orange","abanana","grape","ana","banana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","qrsturv","wxyz","b"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","p","q","r","s","t","wu","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","tit","eAgLe"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","cbad","e","f","g","h","titd","i","j","k","lsupersonic","m","n","p","q","r","s","t","u","v","w","x","y","z","x"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","yxhwmnop","xy","yx","wyx","yx","yx"}) == "yxhwmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","s","wy75XPBFq19","txy","wyx","zyx","yx"}) == "wy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"arbcdefg","qrstuv","wxyz","wxyz","arbcdefg"}) == "arbcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"cba"}) == "cba"))){ tests_passed++; } total_tests++;

    if(((find_max({"kiwi","tac","act","r","tac"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","x","y","z","b"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","wyx","zyx","xyx","xyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","xy","abcxkydefg","xyx"}) == "abcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","f","gg","h","i","j","k","l","m","n","o","p","qcabcdHXs9s1Qg","r","s","t","u","v","w","x","y","z"}) == "qcabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"o","eAgLe","iHaTethis","o"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","Eadategle","iHaTethis","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","z"}) == "a"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethi","eAgLcbadee","geAgLee","eAgLee","eAgLee"}) == "eAgLcbadee"))){ tests_passed++; } total_tests++;

    if(((find_max({"r","tac","act","tac"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","xy","sutpersonic","xyx"}) == "sutpersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","cbad","e","f","g","h","titd","i","j","k","lsupersonic","m","n","p","q","r","s","t","u","v","w","x","y","z","x","z"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","f","g","h","i","j","k","l","m","n","p","q","r","s","t","wu","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuv","wxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"hiijklmnop","supersonic","apple","orange","grape","kiwi","pear","xylophone"}) == "hiijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","Egle","iHaTeth","eAgLe","eAgLe"}) == "iHaTeth"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","banana","kiwi","pear","xylophone","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","cat","qrstuv","abcdef","wxyz","abcdefg"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","cbad","e","f","g","h","titd","i","j","k","lsupersonic","m","n","p","q","r","s","t","u","","v","w","x","y","z","x","z"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","xyx","xky"}) == "xky"))){ tests_passed++; } total_tests++;

    if(((find_max({"lmcnop","abcdefg","lmnop","qrstuv","wxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"hxy","xyx","xyx"}) == "hxy"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","cbad","e","f","g","h","titd","zyxkz","i","j","k","lsupersonic","m","n","p","q","r","s","t","u","v","w","x","y","z","k","k"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","k","l","","m","n","o","p","q","r","aaappleddzz","s","t","u","ee","v","w","x","y","ana","cabcdeapefg"}) == "cabcdeapefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","abcxkydefg","e","f","g","h","i","j","k","l","m","o","p","q","r","s","t","tit","v","w","x","z"}) == "abcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","xy","xy","supersonic","xyx"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","bbanana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","kiwi","pear","ape","xylophone","banana"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","iHaTethis","eAgLe","iqHaTethis"}) == "iqHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaglexyx","iHaTethiss","eAgLe"}) == "iHaTethiss"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanana","grape","banana","riwi","pear","ana","riwi"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyx","xy","xyx","wyx","xyx","wyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"o","eAgLe","iHaTethis","y","o"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","grape","hwmnop","qcabcdHXs9s1Qg","qrstuv"}) == "qcabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"osupersonic","o","yzyxo","eAgLe","iHaTethis","y","o"}) == "osupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","titd","d","e","f","g","h","haaappleddzz","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","u","z"}) == "haaappleddzz"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","ape","xylophone","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","x","wyx","zyx","xyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","Eagle"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","xcbaky","xyx","wyx","xky","xky"}) == "xcbaky"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","actyxv","xy","abcxkydefg","xyx"}) == "abcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuv","wxyz","abcdefg"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","iHaTeth","kiwi","pear","ape","xylophone","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","xyx","grape","banana","kiwi","rpear","xylophone","datze","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cbad","e","f","g","h","titd","i","j","k","lsupersonic","m","n","p","q","r","s","t","u","v","w","x","y","z"}) == "lsupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","xylophoneiHaTethi","iHaTeth","kiwi","pear","ape","xylophone","kiwi"}) == "xylophoneiHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","wy75XPBFq19","xky"}) == "wy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","iHaTeth","kiwi","pear","ape","xylophone","supersoniec","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","actyxf","g","h","i","j","k","l","m","n","o","p","qcabcdHXs9s1Qg","r","s","t","u","v","w","x","y","z"}) == "qcabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","ee","banana","kiwi","pear","xylophone","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","yx","e"}) == "xy"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wxyz","wxyz","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","wxyz","abckiwidefg","hijklmnop","qrstuactyxfv","wxyz","abcdefg"}) == "qrstuactyxfv"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","abcgdefg","ana","banana","pear","abcgdefg"}) == "abcgdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","actyxf","g","h","i","j","k","l","m","n","o","p","qcabcdHXs9s1Qg","r","s","t","u","w","x","y","z"}) == "qcabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","xcbaky","xyx","xky","xky"}) == "xcbaky"))){ tests_passed++; } total_tests++;

    if(((find_max({"orange","grape","banana","date","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","zyx","yx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"o","iHaTaethis","eAgLe","o","o"}) == "iHaTaethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"grape","xyxx"}) == "grape"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","gg","h","i","j","zyxk","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","cabcdefg","w"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanana","grape","banana","it","riwi","pear","ana","riwi"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"appe","orange","banana","kiwi","pear","ape","xylophone","banana","appe"}) == "xylophone"))){ tests_passed++; } total_tests++;

    if(((find_max({"osupersonic","o","quv","eAgLe","iHaTethis","y","o"}) == "osupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaglce","eAgLe","abanana","Eagle","eAgLe"}) == "Eaglce"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","date","qrstuv","abcgdefg","wxxyz","date"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","xiHaTethisyx","kiwi","pear","ape","xylophone","banana","kiwi","kiwi"}) == "xiHaTethisyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLLe","iHaTethis","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","grape","ana","banana","bb","pear","bb","banana"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","zyx","xyx","xyx","zyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","yxhwmnop","xy","yx","wyfwyxx","yx"}) == "yxhwmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","wxyz","wxyyz","abckiwigdefg","hijklmnop","qrstuactyxfv","wxz","abcdefg"}) == "qrstuactyxfv"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethiss","eAgLe"}) == "iHaTethiss"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","f","g","h","i","ana","j","k","l","m","n","p","q","r","s","t","wu","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"babckiwidefg","abckiwidefg","qrstuv","wxyz"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","grape"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","actyxf","g","h","i","j","k","l","m","n","o","p","qcabcdHXs9s1Qg","r","s","t","u","v","w","x","y","z","i"}) == "qcabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","rr","k","l","m","actyxv","n","p","q","r","s","t","u","v","w","x","y","z","v"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","cbadana","xyx","xky","ana","xky"}) == "cbadana"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","HhRQ35","h","banana","riwi","pear","ana"}) == "HhRQ35"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaglexyx","hwmnop","iHaTethiss","eAgLe"}) == "iHaTethiss"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","cabcdefg","peiHaTethissar","ape"}) == "peiHaTethissar"))){ tests_passed++; } total_tests++;

    if(((find_max({"o","eAgLe","iHaTethis","eAgLe"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"mhwmnop","hijklmnop","quv","wxyz","b"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","abcgdefg","ana","Eagle","banana","pear","abcgdefg","Eagle"}) == "abcgdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","banana","kiwi","pear","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"hxy","xyx","xyx","xyx"}) == "hxy"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","iHaTethis","Eaadategle","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"wxyz","wxyyz","abckiwigdefg","hijklmnop","qrstuactyxfv","wxz","abcdefg"}) == "qrstuactyxfv"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","TiHaTethis"}) == "TiHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"wy75XPBFq19","abckiwidefg","qrstuv","abcgdefg","qrstuuv","wxyz"}) == "wy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","z","b"}) == "a"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","grape","abcdefg","abcdefg"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","iHaiTethis","iHaTethiselderberry","iHaTethis"}) == "iHaTethiselderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","abcgdefg","wxyz","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","xy","sutpersonicyxgrape","xyx","xyx"}) == "sutpersonicyxgrape"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","ale","orange","grape","banana","kiwi","pear","xylophone","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethi","eAgLcbadee","geAgLee","eAgLee"}) == "eAgLcbadee"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","zyx","yzyx","yx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","abckiwidefg","hijklmnop","qrstuv","abcxkydefg","wxyz","abcdefg","qrstuv"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","l","m","n","o","p","q","r","s","t","u","v","x","y","z","o"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethiss","eAgLe","eAgLe"}) == "iHaTethiss"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","zyx","z","orange","grape","banana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdHXs9s1Qg","d","e","f","g","h","i","j","k","l","m","efghip","o","p","q","r","s","t","u","v","w","x","y","z","cabcdefg","i"}) == "cabcdHXs9s1Qg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanana","grape","banana","pear","ana","riwi"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","zyx","yzyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"dabcxkydefg","Eadategle","actyxv","abcxkydefg","xyx","dabcxkydefg"}) == "abcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eacabcdefggle","Eagle","eAgLe","tit","eAgLe"}) == "Eacabcdefggle"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","grape","banana","","pear","pear","pear"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","ale","iHaTeth","kiwi","pear","apee","xylophone","supersoniec","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","grape","banana","cabcdefg","pear","ape","xylophone","ape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","wyx","zyx","xyx","xy"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"arbcdefg","qrstuv","iHaiTethis","wxyz","wyfwyxx","arbcdefg"}) == "arbcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"datze","xky","xcbaky","xyx","xky","xky"}) == "xcbaky"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaglce","eAgLe","Eagle"}) == "Eaglce"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","xyx","zyx","zyx","xnyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qqrstuv","wxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaagle","iHaTethi","eAgLcbadee","geAgLee","eAgLee"}) == "eAgLcbadee"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","yx","cabcdefg","d","e","f","gefghip","h","i","j","k","l","m","n","o","p","xx","q","r","aaappleddzz","s","u","v","w","x","y","z","cabcdefg"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","gg","h","i","j","zyxk","l","m","n","ziHaTethis","o","p","q","r","s","t","u","v","w","x","y","z","cabcdefg"}) == "ziHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnactyxvp","abcdefg","hijklmnop","qrstuv","wxyz"}) == "hijklmnactyxvp"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","x","actyxv","xy","abcxkydefg","xyx"}) == "abcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaagle","ixteAgLee","iHaTethi","eAgLcbadee","geAgLee","eAgLee","eAgLee","eAgLee"}) == "eAgLcbadee"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","HhRQ35","ana","peaac","banana","riwi","pear","ana","orange"}) == "HhRQ35"))){ tests_passed++; } total_tests++;

    if(((find_max({"hxEacabcdefggley","xyx","zyx","xyx"}) == "hxEacabcdefggley"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","Eadategle","iHaTethis","iHaTethis","apple"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","xyx","grape","banana","kiwi","rpear","supersconic","xylophone","datze","supersonic"}) == "supersconic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","banana","pear","ape","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abckiwidefg","hijklmnop","qrstuv"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"mhwmnop","hijklmnop","qrsturv","quv","wxyz","bhijklmnop","wxyz","wxyz"}) == "bhijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"applEaglexyxe","banana","cherry","ee","datze","elderberry","fig","grape"}) == "applEaglexyxe"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","abanabna","orange","grape","banana","kiwi","pear","apeAgLee","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","x","wyx","yxwy75XPBFq19","zyx","yx","x"}) == "yxwy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","grape","hwmnop","qrstuv","abcdefg"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","abcdefgcba","abckiwidefg","hijklmnop","qrstuv","wxyz"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","peiHaTethissariHaTethi","eAgLcbadee","geAgLee","eAgLee","eAgLee"}) == "peiHaTethissariHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"e","yx","xy","sutpersonic","wyx","zyx"}) == "sutpersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"r","tac","act","tac","tac"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaagle","iHaTethi","eAgLcbadee","geAgLee","eAgLee","eAgLee","eAgLee"}) == "eAgLcbadee"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLLe","iHaTethis","eAgLe"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"superbanana","ale","orange","grape","banana","kiwi","pear","xylophone","xylophone"}) == "superbanana"))){ tests_passed++; } total_tests++;

    if(((find_max({"f","xyx","zx","xyx"}) == "xyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","grape","banana","cabcdefg","pear","ape","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abckiwidefg","hijklmno","qrstuv","wxyz"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","s","wy75XPBFq19","txy","yabcdef","wyx","zyx","yx"}) == "wy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","xy","yxx","wyx","yx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","HhRQ35","ana","banana","pear","ana","ana","orange"}) == "HhRQ35"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLcbadee","Eagle","eAgLe"}) == "eAgLcbadee"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","grape","iHaTeth","abcdefg","abcdefg"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","zyx","yx","wyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","peiHaTethissariHaTethi","eAgLcbadee","geAggrapeLee","eAgLee","eAgLee"}) == "peiHaTethissariHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","yx","wyx","zyx","yx","yxx","wyx","yx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","i","j","k","l","m","n","o","p","q","r","s","t","u","v","x","y","z","b"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","cat","qrstuv","wxyz","cat"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","ale","orange","h","banana","kiwi","pear","xylophone","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","gg","h","i","zyxk","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","cabcdefg"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","zyx","yx","wyx","yx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","Eagl","eAgLe"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","abcgdefg","wxyz","wxyz","abcgdefg"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"q","iHaTethiselderberry","iHaTethis"}) == "iHaTethiselderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"dabcxkydefg","Eadagle","actyxv","xyx","dabcxkydefg"}) == "dabcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"cabcdefg","d","e","f","g","h","i","j","k","l","m","n","p","q","r","s","t","u","v","w","x","y","z"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"hxEacabcdefggleyzx","f","zx","xyx"}) == "hxEacabcdefggleyzx"))){ tests_passed++; } total_tests++;

    if(((find_max({"ixteAgLee","fig","hxfigy","xyx","zyx","zyx"}) == "ixteAgLee"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHasTethiss","eAgLeqrstuuv","eAgLe"}) == "eAgLeqrstuuv"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","a","ana","banana","kiwi","pear","ana"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","yxhwmnop","xy","yx","wyx"}) == "yxhwmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"rr","tac","act","r","iHaiTethis"}) == "iHaiTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","grape","bbanana","kiwi","pear","bbanana"}) == "grape"))){ tests_passed++; } total_tests++;

    if(((find_max({"d","wxy75XPBFq19","iHaTethis","iHaTethiis","eAgLe"}) == "wxy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","wy75XPBFq19","xEaglexyx","wy75XPBFq19"}) == "wy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"wyx","zyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","xylophoneiHaTethi","iHaTeth","kiwi","pear","ape","xylophone","p","kiwi"}) == "xylophoneiHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eeagle","Eagle","Eagl","eAgLe"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","titv","eAgLe"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","hxy","wyx","yxwy75XPBFq19","zyx","yx","x","x"}) == "yxwy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLLe","eAgLe"}) == "eAgLLe"))){ tests_passed++; } total_tests++;

    if(((find_max({"tac","act"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","cabcdefg","zyx"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"d","wxy75XPBFq19","iHaTethis","iHaTethiis","eAgLe","iHaTethis"}) == "wxy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","xyx","xyx","zyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"titv","actyxv","xy","abcxkydefg","xyx","titv"}) == "abcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","iHaTethis","eAgLe","iqHaTethis","eAgLe"}) == "iqHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanana","grape","ana","banana","riwi","pear","ana","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethi","eAgLee","iHaTethi"}) == "iHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyx","xy","xyx","wyx","xyx","wyx","xyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"oarbcdefg","o","eAgLe","iHaTethis","o","eAgLe","o"}) == "oarbcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abckiwidefg","hijklmnop","qrstuv","hijklmnop"}) == "abckiwidefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnactyxvp","abcdefg","hijklEaaglemnop","qrstuv","wxyz"}) == "hijklmnactyxvp"))){ tests_passed++; } total_tests++;

    if(((find_max({"appe","orange","nana","kiwi","pear","ape","xylophone","banana","appe"}) == "xylophone"))){ tests_passed++; } total_tests++;

    if(((find_max({"aana","cat"}) == "cat"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","xy","ywyx","wyx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"applEaglexyxe","banana","fig","cherry","ee","datze","elderberry","t","grape"}) == "applEaglexyxe"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","xzyx","yzyx","yzyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","xy","yxx","wyx","yx","wyx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","iHaTeth","kiwi","pear","appe","xylophone","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","abcgdefg","ana","wxy75XPBFq19","banana","pear"}) == "wxy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"applEaglexyxe","ac","banana","fig","a","cherry","ee","datze","elderberry","t","grape"}) == "applEaglexyxe"))){ tests_passed++; } total_tests++;

    if(((find_max({"hxy","xyx","xyx","abcgdefg","xyx"}) == "abcgdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"","mEagle","apple","orange","abanana","grape","ana","banana","kiwi","pear"}) == "mEagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","cat","qrstuv","abcdef","wxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","grape","ana","banana","bb","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","x","Eeagle","wyx","zyx","xyx","zyx"}) == "Eeagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"eLAgLe","TiHaTethis"}) == "TiHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"r","tac","acefghipt","tac","tac"}) == "acefghipt"))){ tests_passed++; } total_tests++;

    if(((find_max({"rsonic","abanabna","orange","grape","banana","kiwi","pear","apeAgLee","xylophone"}) == "xylophone"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","cherry","elderberry","fig","o","date"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","i","j","k","l","n","o","p","q","r","s","t","u","v","x","y","z","b"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","gdrape","bbanana","kiwi","pear","hxfigytt","bbanana"}) == "hxfigytt"))){ tests_passed++; } total_tests++;

    if(((find_max({"hxfigy","zyx","xyx","xyx","zyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","wxyz","wxyyz","abckiwigdefg","hijklmnop","qrstuactyxfv","wxz","abcdefg","abcdefg"}) == "qrstuactyxfv"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuv","abcgdefg","wxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","ta","supersonic","xyx"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"mhwmnop","hijklmnop","qrsturv","quv","wxyz","qrsturv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"titd","yx","wyx","zyx","yx","yx"}) == "titd"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","cat","qrstuv","wxyz","abcdefg","cat"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hxy","xyx","xyx","abcgdefg","xyx","abcdefg"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","grapeapplEaglexyxe","apear","banana","cabcdefg","pear","ape","xylophone"}) == "grapeapplEaglexyxe"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","grapeapplEaglexyxe","apear","banana","cabcdefg","per","ape","xylophone","supersonic"}) == "grapeapplEaglexyxe"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","yzyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","e","f","g","h","i","j","l","m","n","e","o","p","q","r","s","t","u","v","x","y","z","o"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abmEaecdefg","hijklmnop","abcgdefg","wxxyz"}) == "abmEaecdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"wy75XPBFq19","xEaglexyx","wy75XPBFq19"}) == "wy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"osupersonic","o","yzyxo","eAgLe","iHaTethis","y","o","o"}) == "osupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"bqrstuvb","xyx","wyx","zyx","xyx"}) == "bqrstuvb"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","ee","banana","kiwi","pear","xylophone","supersonic","ear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"titd","yx","wyx","zyx","yx","ititd","wyefghipx","zyx"}) == "wyefghipx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","yx","hxyyxhwmnop","actyx","zyx"}) == "hxyyxhwmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","epeiHaTethissariHaTethi","eAgLcbadee","geAggrapeLee","eAgLee","eAgLee","eAgLee"}) == "epeiHaTethissariHaTethi"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","xiHaTethisyx","kiwi","pear","ape","xylophone","haaaappleddzzeaappleddezz","banana","kiwi","kiwi"}) == "xiHaTethisyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","abEadaglecdefg","grape"}) == "abEadaglecdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","abcgdefg","ana","banana","pear","abanabna"}) == "abcgdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"yxiHaTethisyx","wyx","zyx","yx","wyx"}) == "yxiHaTethisyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxy","xyx","zyx","xpxyx","xpyx"}) == "hxy"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","zyxx","hxy","xyx","zyx","xyx","xeefghiitnyx","xyx"}) == "xeefghiitnyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","banana","kiwi","pear","xylophone","supersonic","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanana","grape","it","riwi","pear","ana","riwi"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xcbakyxyx","xyx","zyx","xyx"}) == "xcbakyxyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","iHaTethis","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","wxyz","wxyyz","abckiwigdefg","hijklmnop","wxz","abcdefg","abcdefg","abcdefg"}) == "abckiwigdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","","cherry","elderberry","fig","wxxyz","date"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","cat","qrstuv","wxyz","gdrape","cat"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grawxyzpe","bbanana","kiwi","pear"}) == "grawxyzpe"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","xy","sutpersonicyxgrape","xyx","xyx","eAgLe"}) == "sutpersonicyxgrape"))){ tests_passed++; } total_tests++;

    if(((find_max({"bbanaa","apple","orange","grpape","bbanana","kiwi","pear"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","qrstuv","wxyz","abcdefg","qrstuv"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"yEaaglex","wwyx","xy","yxx","wyx","yx"}) == "yEaaglex"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eadategle","xy","supersonic","xyx","xyx"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eaglexyx","iHaTethiss","eAgLe","eAgLe"}) == "iHaTethiss"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wyx","zyx","yzyx","yx","zyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","tac","aana","zyx","yx"}) == "tac"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","hxfigy","zyx","xyx","xyx","yxyx","zyx"}) == "hxfigy"))){ tests_passed++; } total_tests++;

    if(((find_max({"tacc","r","o","act","tac","tac","tac"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","appe","zyx","xyx"}) == "appe"))){ tests_passed++; } total_tests++;

    if(((find_max({"yxyzyx","tialetd","yx","wyx","zyx","yx","hxyyxhwmnop","ititd","wyefghipx","zyx"}) == "wyefghipx"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wxyz","ha","abcdefg"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","iHaTethi","eAgLcbadee","geAgLee","eAgLee","Eagle"}) == "eAgLcbadee"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wxyz","xylophone","wxyz","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"abmEaecdefg","abcdefg","hijklmnop","qrstuv","wxyz","wxyz"}) == "abmEaecdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"lmcnop","abcdefg","bbanaa","wxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","acat"}) == "acat"))){ tests_passed++; } total_tests++;

    if(((find_max({"qvuv","mhwmnop","hijklmnop","qrsturv","quv","wxyz","qrsturv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","wxz","wyx","zyx","yzyx","yx"}) == "wxz"))){ tests_passed++; } total_tests++;

    if(((find_max({"aana","ccat","aana","aana"}) == "ccat"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","cabcdefg","d","cacdefg","e","f","g","h","i","j","l","m","n","e","o","p","q","r","s","t","u","v","x","y","z","o"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"eAgLe","iqHaititTethis","iHaTethis","eAgLe","iqHaTethis"}) == "iqHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"ppear","wwyx","xy","yx","wyx","zyx"}) == "ppear"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","x","Eeagle","wyx","zyx","zyx"}) == "Eeagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xxxyxiHaTethisyx","wyx"}) == "xxxyxiHaTethisyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"titv","actyxv","xy","abcxkydefg","xyx","titv","titv"}) == "abcxkydefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","abanabna","orange","kiqHaititTethisiwi","grape","banana","kiwi","pear","apeAgLee","xylophone"}) == "kiqHaititTethisiwi"))){ tests_passed++; } total_tests++;

    if(((find_max({"xky","cbabana","xyx","xky","ana","xky"}) == "cbabana"))){ tests_passed++; } total_tests++;

    if(((find_max({"yxiHaTethisyx","wyx","yx","wyx"}) == "yxiHaTethisyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","abanabna","abcgdefg","ana","wxy75XPBFq19","baxyxnana","pear"}) == "wxy75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"wwyx","xwyx","wyx"}) == "wwyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","cabcdefg","zyx","zyx"}) == "cabcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","oarange","abanabna","ana","banana","bb","pear"}) == "oarange"))){ tests_passed++; } total_tests++;

    if(((find_max({"xyx","xy","xyx","wyx","xyx","wyx","wyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","e","f","g","h","i","j","k","l","m","n","o","p","q","abcdef","s","t","u","v","w","x","y","z","z","b"}) == "abcdef"))){ tests_passed++; } total_tests++;

    if(((find_max({"yx","zyx","yzyx","yx"}) == "yzyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xnyx","xyx","xyx","zyx"}) == "xnyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","xyx","wyx","xyx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","appe","orange","banana","xiHaTethisyx","kiwi","pear","rr","ape","xylophone","haaaappleddzzeaappleddezz","banana","kiwi","kiwi"}) == "xiHaTethisyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"ppear","wwyx","xy","yx","eAgLee","wjyx","zyx"}) == "eAgLee"))){ tests_passed++; } total_tests++;

    if(((find_max({"hiijklm","apee","apple","orange","grape","kiwi","pear","xylophone"}) == "xylophone"))){ tests_passed++; } total_tests++;

    if(((find_max({"lmcnpop","abcdefg","qrmeAgLLeuv","lmnop","qrstuv"}) == "qrmeAgLLeuv"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdef","ghijkl","mnopqr","stuvwx"}) == "abcdef"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaa","bbb","ccc","ddd"}) == "aaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d"}) == "a"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaaa","aaaaaa","aaaaaaaa","aaaaaaaaaa"}) == "aaaa"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","dates"}) == "cherry"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefghijklmnopqrstuvwxyz","a"}) == "abcdefghijklmnopqrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"word","word","word"}) == "word"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","dog","pig"}) == "cat"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c"}) == "a"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","kiwi","pear","xylophone","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","f","ijklmn","efghip","cba"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"f","ijklmn"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","l","elderberry","fig","grape"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({""}) == ""))){ tests_passed++; } total_tests++;

    if(((find_max({"saaddzzupersonic","apple","xylopthone","m","kiwi","pear","xylophone"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","f","d","efghip","cba"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmn","efghwxyzip","cbca"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","pear","xylophone","grape","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","apple","banana","cherry","date","elderberry","fig","grape","dwate","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75X1PBFq19","75XPBFq19","HXs9s1Q","HSSbsh","HSSbsh"}) == "75X1PBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","l","elderberry","fig","grape"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","xylopthone","m","kiwi","pear","xylophone"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"f","ff",""}) == "f"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","qrstuv","ijklmn","cb","efghip","cba"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"saaaddzzupersonic","xylophonee","apple","xylopthone","m","pear","xylophone","saaaddzzupersonic"}) == "saaaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","xylophone","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuvwxyz","wxyz","abcdefg"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","l","banaapplena","elderberry","fig","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","qrstuv","ijklmn","efghip","cba","qrstuv"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"a","b","c","d","e","f","g","h","i","j","k","l","m","n","p","q","r","s","t","u","v","w","x","y","z"}) == "a"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","kiw","apple","orange","grape","banana","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","HXs9s1Q","HSSbzyxsh","HXs9s1Q"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","HXs9s1Q","HSSbzyxsh","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","l","banaapplena","yelderberry","fig","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","HXs9s1Q","HSSbzyxsh","HXs9s1Q","gBFWztts67","HXs9s1Q"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","l","elderberry","fig","grape","cherry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmn"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","EEagle","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","banaapplena","elderberry","fig","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","iHaTethis","Eagle"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"ff",""}) == "ff"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","ae","orange","grape","banana","kiwi","pear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","u","iHaTethis","Eagle"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"appHSSbzyxshle","banana","cherry","l","elderberry","fig","grape"}) == "appHSSbzyxshle"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","xylopthone","m","kiwi","pear","xylophone"}) == "xylopthone"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","epear","grape","m","kiwi","pear","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","","HXs9s1Q","efghip","cba","aaddzz"}) == "HXs9s1Q"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","act","tac","cat"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmn","efghwxyzip"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmn","efghwxyezip","efghwxyzip"}) == "efghwxyezip"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","wcbcaxyz","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","act","tac","cat","cat"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"f"}) == "f"))){ tests_passed++; } total_tests++;

    if(((find_max({"v","hijklmnop","qrstuv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","banana","kiwi","pear","banana"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"banana","l","elderberry","fig","grape","cherry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklnmn","efghwxyzip","cbca"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"kiw","abcdefg","wcbcawxyz","hijklmnop","qrstuv","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"kiw"}) == "kiw"))){ tests_passed++; } total_tests++;

    if(((find_max({"HXs9s1","HhRQ35","gBFWztts67","75XPBFq19","HXs9s1Q","HSSbsh"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","xylopthone","m","kiwi","perar","ae"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","elderberry","fig","grape"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","wxyz","qrstuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","qrstuv","ijklmn","efghip","qrstuv"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"icbajklmn","efghwzip"}) == "icbajklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}) == "b"))){ tests_passed++; } total_tests++;

    if(((find_max({"EwEaglcbe","EE","EEagle","eAgLe","iHaTethis"}) == "EwEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"","ijklmn","ikjklmn","efghwxyzip"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"wcbcaxyz","banana","cherry","l","elderberry","fig","fg","grape"}) == "wcbcaxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuvwxyz","wxyz","abcdefg","hijklmnop"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","date","elderberry","fig"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","pear","xylophone","grape","z","xylophone","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","iHaTethis","Eagle","Eagle"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","date","elderberry","chery","efghwxyezip","grape","apple"}) == "efghwxyezip"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","banaapplena","fig","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","ijklmn","ikjklmn","efghwxyzip","ijklmn"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuvwxyz","wxyz","abcdefg","abcdefg"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","m","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","kiw","apple","orange","grape","banana","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","grape","banana","kiwi","pear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","tac","HXs9s1Q","HXs9s1Q","gBFWztts67","HXs9s1Q"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"c",""}) == "c"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","xylophoone","pear","xylophone","grape","z","xylophone","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdgefg","x","hijklmnop","qrstuv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","l","elderberry","fig","grape","cherry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","yx","wyx","zyx","yx"}) == "wyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","m","kiwi","t","xylophone"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","qrstuv","ijklmn","cb","efgphip","cba"}) == "efgphip"))){ tests_passed++; } total_tests++;

    if(((find_max({"banana","elderberry","fig","grape","chehrry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","dwate","pear","xylophone","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"saaddzzupersonic","apple","xylopthone","m","kiwi","pear"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmn","ijklmn"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuv","ijklmn","efghip","qrstuv","ijklmn"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuv","ijklmn","efghip","qrstuv","ijklmn","ijklmn"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","banaapplena","elderberry","fig","grape","cherry","banana"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","qrstuv","wxyzs","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"banana","l","elderberry","fig","grape","cherry","cherry","banana"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","abcdefg","wxyz","qrstuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","eAgLe","EEaglcbe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","ijklmn","qrstuv"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","xylophone","kiwi","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"datev","v","hijklmnop","qrstuv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","orange","grape","banana","kiwi","pear","banana","banana"}) == "orange"))){ tests_passed++; } total_tests++;

    if(((find_max({"jijklmn","ijklmn"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklnmn","efghwxyzip","cbbcca","cbcca"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","EEagle","eAgLe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgL","iHaaTethis"}) == "iHaaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"cc","c",""}) == "c"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrsutuv","aaddzz","qrstuv","ijklmn","efghip","cba","qrstuv"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","elderberry","fig","grape","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","75XPBFq19","HXs9s1Q","HSSbzyxsh","HXs9s1Q","gBFWztts67","HhRQ35"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","xylopthone","epear","grape","m","kiwi","pear","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","pear","xylophone","pear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75X1PBFq19","75XPBFq19","HXs9s1Q","gBFWzFtts67","HSSbsh","HSSbsh"}) == "75X1PBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","yx","zyx","xy"}) == "zyx"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrtuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","","HXs9s1Q","efghip","f","cba","aaddzz"}) == "HXs9s1Q"))){ tests_passed++; } total_tests++;

    if(((find_max({"jijlklmn"}) == "jijlklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","wcbz","qrstuv","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","a","wcbcaxyz","wcbcaxyz","wcbcaxyz","hijklmnop"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","orange","grape","banana","kiwi","apear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","xylopthone","epear","grape","dwate","m","kiwi","pear","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","hijklkmnop","wxyzz","qrstuvwxyz","wxyz","abcdefg"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","banaapplena","fig","rgrape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","kiw","apple","orange","grape","banana","peqrstuvar","xylophone"}) == "peqrstuvar"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmmn","efghwxyezip","efghwxyzip"}) == "efghwxyezip"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","kiw","apple","orange","banana","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","m","kiwi","pear","Eagle","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"efghwezip"}) == "efghwezip"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle"}) == "applle"))){ tests_passed++; } total_tests++;

    if(((find_max({"HXs9s1","HhRQ35","HhRQ35h","gcbbccaBFWztts67","75XPBFq19","HSSbsh"}) == "gcbbccaBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","epear","grape","m","kiwi","pear","gxylophoneerape"}) == "gxylophoneerape"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","act","tac","catcb","cat"}) == "catcb"))){ tests_passed++; } total_tests++;

    if(((find_max({"chery","efghwxyzip","cbca"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklnmn","efghwxyzip","cbca","efghwxyzip"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"l","elderberry","fig","grape","cherry","cherry","banana"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","ikjklmn","efghwxyzip","ijklmn"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"jimjlk","jimjlklmn"}) == "jimjlklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"fg","ikjklmn","efghwxyzip","ijklmn"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"banana","l","elderberry","fig","grape","cherry","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"HXs9s1","HhRQ35","gcbbccaBFWztts67","75XPBFq19","HSSbsh"}) == "gcbbccaBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","banaapplena","elderberry","fig","pgrape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"supefgphipersonic","apple","orange","grape","banana","kiwi","pear","xylophone","kiwi"}) == "supefgphipersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"elderberryEEaglcbe","Echehrry","EEagle","eAgLe","elderberryEEaglcbe"}) == "elderberryEEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","pear","xylophone","grape","z","xylophone","ccff"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","peear","m","kiwi","pear","xylophone","grape","xylophone","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","ae","orange","grape","kiwi","orangchehrrye","pear"}) == "orangchehrrye"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","l","fig","grape","cherry"}) == "cherry"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","wcbca","wcbcaxyz","wcbcaxyz","wcbca"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","l","elderberry","fifg","grape","l"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"ff","",""}) == "ff"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","mm","kiwi","t","xylophone"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","peHXs9s1ear","kiwi","pear","xylophone","grape","xylopthone","xylophone","qrsutuv"}) == "peHXs9s1ear"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","l","elderberry","l","grape","cherry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","pear","xylophone","grape","xylophone","apple","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","qrsutuv","ap","banana","kiwi","pear","orange"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","epear","grape","m","kiwi","wyx","pear","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"appllle","y","banana","cherry","l","elderberry","fig","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","apple","banana","cherry","elderberry","fig","grape","dwate","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"datev","v","hijklmnop","qrstuv","wxyz","hijklmnop"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","pear","xylophone","kiwi","supersonic","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdgefg","x","","hijklmnop","qrstuv","wxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"l","elderberry","fig","grape","nbanana","cherry","cherry","banana"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","banaapplena","qrstuv","wcbcaxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"elderberryfigEEaglcbe","Echehrry","EEagle","eAgLe","elderberryEEaglcbe"}) == "elderberryfigEEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","ueAgL","EE","EEagle","eAgLe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","a","wcbcaxyz","wcbcaxyz","hijklmjnop","wcbcaxyz","hijklmnop"}) == "hijklmjnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"appllle","y","banana","cherry","l","elderberry","fig","elderberry","banana"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","eAgLe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"appll","banana","cherry","l","banaapplena","yelderberry","fig","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","xylopthone","grape","rgrape","kiwi","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","eAgLe","iHaTethis","EEaglcbe"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","cherry","HSSbsh","cherry"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","l","elderberry","fig","grrape","cherry","b"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuv","ijklmn","efghip","qrstuv","ijklmn","HXs9s1","ijklmn"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"datev","v","hijklmnop","qrstuv","gBFWztts67wxyz"}) == "gBFWztts67wxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","mm","kiwi","t","h"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","eAgLe","Eagele","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"v","hijklmnop","qrstuv","hijklmnnop","wxyz"}) == "hijklmnnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","xylopthone","m","pear","xylophone"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","grape","iHaTethis","EEaglcbe"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"f","ff"}) == "f"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","wcbcaxyz","qrtuv"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"chehrry"}) == "chehrry"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuv","hijklmnop","qrstuv","wxyz","qrstuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"q"}) == "q"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","injklmn","qrstuv"}) == "injklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"cc","c","","",""}) == "c"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","apple","banana","cherry","date","ae","fig","grape","dwate","iHaTethis","grape"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","chey","l","elderberry","fig","grape","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","ijklmn","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"l","grape","cherry","cherry","banana"}) == "cherry"))){ tests_passed++; } total_tests++;

    if(((find_max({"elderberryEEaglcbe","Echehrry","EEagle","eAgLe"}) == "elderberryEEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"EE","eAgLee","EEaglcbe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","","banana","cherry","l","banaapplena","fig","grape","banaapplena","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuvwxyz",""}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","cc","c",""}) == "dwate"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","kiwefghipi","orange","grape","banana","kiwi","pear","xylophone","kiwi","supersonic","kiwi","pear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","a","banana","kiwi","dwate","ange","pear","xylophone","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmn","ijklmn","ijklmn"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","xylopthone","m","pear"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","wcbca","i","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","banana","kiwi","r","xylophone","kiwi","supersonic","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"gcbbccaBFWztts67","act","tac","catcb","cat","act","tac"}) == "gcbbccaBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"q","q"}) == "q"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","xylopthone","m","gBFWztts67","xylophone"}) == "gBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","HSSbzyxsh","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"gBFWztts67wxyz","saaddzzupersonic","xylopthone","m","pear"}) == "gBFWztts67wxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuvwxyz","wxyz","abcdefg","jimjllklmn"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","xylophoone","pear","xylophone","grape","zz","xylophone","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"y","banana","cherry","l","banaapplena","elderberry","fig","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","ae","orange","grape","kiwi","pear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","wcbcaxyz","hijklmjnop","wcbcaxyz","hijklmnop"}) == "hijklmjnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","HXs9s1Q","HXs9s1Q","gBFWztts67","HXs9s1Q","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"appllle","banana","cherry","l","elderberry","elderberry","banana"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuv","ijkl","efghip","ijklmn"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","a","wcbcaxyz","wcbcaxyz","hijklmjnop","wcbcaxyz","hijklmnop","hijklmjnop"}) == "hijklmjnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","mmjijlklmn","kiwi","t","h"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"jijlklmln","jijlklmn"}) == "jijlklmln"))){ tests_passed++; } total_tests++;

    if(((find_max({"cat","act","tac","catcb","cat","cat"}) == "catcb"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","tac","HXs9s1Q","qrtuv","HXs9s1Q","gBFWztts67","HXs9s1Q"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","pear","xylophone","grape","xylophone","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","EEaglcbee","xylopthone","grape","m","kiwi","xylophoone","pear","xylophone","grape","z","xylophone","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","hijklkmnop","grape","iHaTethis","EEaglcherrycbe"}) == "EEaglcherrycbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"wcbcaxyz","banana","HhRQ35fg","cherry","l","elderberry","kiwefghipifig","fg","grape"}) == "HhRQ35fg"))){ tests_passed++; } total_tests++;

    if(((find_max({"dasaaddzzupersonictev","v","hijklmnop","qrstuv","HSSbzyxsh","wxyz"}) == "dasaaddzzupersonictev"))){ tests_passed++; } total_tests++;

    if(((find_max({"jimjlk","elderberryEEaglcbe"}) == "elderberryEEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"appllle","y","banana","rry","l","elderberry","fig","elderberry","banana"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"ff","y","","",""}) == "ff"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmmn","efghwxyezip","immn","efghwxyzip"}) == "efghwxyezip"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","elderberry","fig","grape","elderberry","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EE","EEagl","eAgLe","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"xy","icbajklmn","yx","zyx","xy"}) == "icbajklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","qrstuvl","banana","cherry","l","banaapplena","fig","rgrape"}) == "qrstuvl"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","kiwefghipi","orange","grape","banana","kiwi","pear","kiwi","supersonic","kiwi","pear"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"chery","efghwxyzip","cherhy","cbca"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","banana","cherry","date","elderberry","fig","grape","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"grrape","xylopthone","m","pear","xylophone","m"}) == "xylopthone"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","grhijklmjnope","orange","grape","kiwi","pear","xylophone","grape"}) == "grhijklmjnope"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklnmn","cbca"}) == "ijklnmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"hchehr"}) == "hchehr"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","EErgrape","EE","eAgLe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","qrstuvwxyz","wxyz","nbanana","hiEEagljklmnop","hijklmnop"}) == "hiEEagljklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"lijklmn","abcdefg","hijklmnop","ijklmn","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"appllgcbbccaBFWztts67e","y","banana","cherry","l","banaapplena","elderberry","fig","grape"}) == "appllgcbbccaBFWztts67e"))){ tests_passed++; } total_tests++;

    if(((find_max({"gcbbccaBFWztts67","tac","catcb","cat","act","tac"}) == "gcbbccaBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"grrape","xylopthone","m","pear","xylophone","m","m"}) == "xylopthone"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","qrstuvwxyz","wxyz","ywxyz","nbanana","hiEEagljklmnop","hijklmnop"}) == "hiEEagljklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","xylopthone","grape","rgrape","kiwi","mm","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","m","kiwi","pear","xylophone","m"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","saaddzzupersonic","xylopthone","pea","m","pear","m"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","xylopthone","epear","m","kiwi","pear","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"ff","y","","banana",""}) == "banana"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","ccc","c",""}) == "dwate"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","xylopthone","grape","rgrape","kiwi","grape","grape","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","iHaTethiis","apple","banana","cherry","date","elderberry","fig","grape","dwate","iHaTethis"}) == "iHaTethiis"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmmn","efghwxyezip","immn","efghwxyzip","ijklmmn"}) == "efghwxyezip"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwaxylophoneete","saaddzzupersonic","xylopthone","m","pear","xylophone","xylopthone"}) == "dwaxylophoneete"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrsutuv","aaddzz","qrstuv","ijklmn","efghip","cba","qrstuv","cba"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdgefg","eAgLe","hijklmnop","qrstuv","wxyz","eAgLe"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","grhijklmjnope","orange","grape","pear","xylophone","grape"}) == "grhijklmjnope"))){ tests_passed++; } total_tests++;

    if(((find_max({"hchehr","hchehr"}) == "hchehr"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuv","ijklmn","efghip","qrstuv","HXs9s1","ijklmn"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"wcbcaxyz","banana","cherry","grappe","l","fig","fg","grape","grappe"}) == "wcbcaxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","ijklmn","wcbcaxyz"}) == "abcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","qrstuv","ijklmn","cb","efghip","cba","cb"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwaefghwxyezipte","dwate","datev","c",""}) == "dwaefghwxyezipte"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","n","cherry","date","elderberry","fig","grape"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","qrstuv","akiwibcdefg","wcbcaxyz"}) == "akiwibcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","m","kiwi","pear","xylophone","m","kiwi"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","apple","banana","cherry","date","ae","fig","grape","dwate","iHaTethefghwxyezipis","grape"}) == "iHaTethefghwxyezipis"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","abcdem","wxyz","qrstuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","a","banana","kiwi","dwate","ange","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","qrstuvwxyz","wxyz","nbanana","hiEEagljklmnop","hijklmnop","wxyz"}) == "hiEEagljklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","75XPBFq19","HXs9s1Q","HXs9s1Q","gBFWztts67","HXs9s1Q","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","wcbcawxyz","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"mhijklmnop","wcbbcaxyz","jijlklmn","wcbcaxyz"}) == "mhijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"dasaaddzzupersonictev","v","hijklmnop","qrstuv","HSSbzyxsh"}) == "dasaaddzzupersonictev"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","c","Eagle"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","elderberry","fig","grapse","elderberry","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","xylopthone","m","gBFgcbbccaBFWztts67Wztts67","xylophone"}) == "gBFgcbbccaBFWztts67Wztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"cc","c","75XPBFq19",""}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"injklmn","qrstuv","injklmn"}) == "injklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","peHXs9s1ear","kiwi","pear","bananaar","xylophone","grape","xylopthone","xylophone","qrsutuv"}) == "peHXs9s1ear"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","iHaTethiis","orange","grape","banana","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","chey","l","elderberry","fig","grape","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","nbanana","cherry","l","elderberry","fig","grape","elderberry","elderberry"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","7P5XPBFq19","75X1PBFq19","75XPBFq19","HXs9s1Q","HSSbsh","HSSbsh","75X1PBFq19"}) == "75X1PBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","iHaTethiis","orange","grape","banana","kiwi","pear","xlylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","qrsutuv","ap","banana","kiwi","pear","orange","qrsutuv"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"","act","tac","cat","cat"}) == "act"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","apple","banana","cherry","elderberry","fig","grape","dwate","bananaar"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","HhRQ35","iHaTethis","m","kiwi","pear","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","hijklkmnop","qrstuv","ijklmn","cb","efghip","cba","cbakiwibcdefg"}) == "cbakiwibcdefg"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdgefg","eAgLe","hijklmnop","qrstuv","wcbcaxyzyz","eAgLe"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","apple","banana","cherry","elderberry","fig","grape","dbwate","dwate","bananaar"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","zz","gBFWztts67","75XPBFq19","wcbcawxyz","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","ijklmn"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"y","banana","cherry","rry","yelderberry","banaapplena","elderberry","fig","grjHIjpape","banaapplena"}) == "grjHIjpape"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","d","hijklmnop","abcdem","wxyz","qrstuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"catcb","supersonic","apple","aaddzz","xylopthone","grape","m","kiwi","pear","xylophone","grape","xylophone","apple","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","m","kiwi","xylophoone","pear","xylophone","grape","z","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","d","hijklmnop","abcdem","wxyz","qrstuv","abcdem"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"mhijklmnop","wcbbcaxyz","jijlklmn","wcbcaxyz","jijlklmn"}) == "mhijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","orange","grape","banana","kiwi","pear","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"catcb","supersonic","apple","aaddzz","xylopthone","grape","m","kiwi","pear","xylophone","appapearle","grape","xylophone","appple","xylophone","appple"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"aaddzz","f","d"}) == "aaddzz"))){ tests_passed++; } total_tests++;

    if(((find_max({"apear","c","75XPBFq19","","",""}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"ikjklmn","banana","cherry","l","banaapplena","elderberry","fig","grape"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","kiwefghipi","orange","grape","banana","kiwi","kiwefghipi","pear","orcheyange","kiwi","supersonic","kiwi","pear"}) == "orcheyange"))){ tests_passed++; } total_tests++;

    if(((find_max({"c"}) == "c"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","hijklkmnop","qrstuvwxyz","wxyz","abcdefg","wxyz"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"elderberryEEaglcbe","Echehrry","EEagle","eAgLe","elderberryEEaglcbe","elderberryEEaglcbe"}) == "elderberryEEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","l","banaapplena","elderberry","fig","grape","l"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"saaaddzzupersonic","xylophonee","apple","xylopthone","m","pear","saaaddzzupersonic"}) == "saaaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","kiw","apple","orange","grape","peqrstuvar","banana","pear","xylophone"}) == "peqrstuvar"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","HhRQ35h","hijklmjnop","wcbcaxyz","hijklmnop","wcbcaxyz"}) == "hijklmjnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","gerape","xylopthone","epear","grape","m","kiwi","actm","pear","grape","pear"}) == "xylopthone"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","gerape","xylopthone","peacheyrr","pearr","grape","m","pgrhijklmjnopeear","kiwi","pear","grape"}) == "pgrhijklmjnopeear"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","gBFWztts67","75XPBFq19","tac","HXs9s1Q","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwate","c","Egagle","Eagle"}) == "Eagle"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","","banana","cherry","l","banaapplena","fiig","grape","banaapplena","grape","banana"}) == "banaapplena"))){ tests_passed++; } total_tests++;

    if(((find_max({"iHaTethis","apple","banana","cherry","elderberry","fig","grape","w","iHaTethis"}) == "iHaTethis"))){ tests_passed++; } total_tests++;

    if(((find_max({"gcbbccaBFWztts67","act","tac","catcb","cat","act","tac","gcbbccaBFWztts67"}) == "gcbbccaBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"HhRQ35","75XPBFq19","HXs9s1Q","HXs9s1Q","gBFWztts67","HXs9ss1Q","HXs9s1Q","gBFWztts67"}) == "75XPBFq19"))){ tests_passed++; } total_tests++;

    if(((find_max({"saaddzzupersonic","oxylopthone","m","kwi","p","xylophone"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","banana","cherry","l","dwate","elderberry","fig","grape"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"saaddzzupersonic","apple","x","xylopthone","m","kiwi","pear","xylophone","xylophone"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","xylopthone","m","xe","gBFWztts67","xylophone","xe","m","m"}) == "gBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","kiwefghipi","orange","grape","banana","kiwi","pear","kiwi","supersonic","kiwi","pear","grape"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","ae","orange","grape","kiwi","orangchehrrye","c"}) == "orangchehrrye"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","y","chey","l","elderberry","fig","grape","elderberry","l"}) == "elderberry"))){ tests_passed++; } total_tests++;

    if(((find_max({"applle","banana","cherry","ll","fig","grape"}) == "cherry"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklnmn","efghwxyzip","cbbcca","cbccca"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"gBFkiwtts67","apple","m","gBFWztts67","appple"}) == "gBFkiwtts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylophonechehrry","xylopthone","grape","m","kiwi","pear","xylophone","grape","xylophone"}) == "xylophonechehrry"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwatwe","ccc","c","","ccc"}) == "dwatwe"))){ tests_passed++; } total_tests++;

    if(((find_max({"applleEEagl","banana","cherry","l","elderberry","fig","grrape","cherry","b"}) == "applleEEagl"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklnmn","efghwxyzip","ijklnmn"}) == "efghwxyzip"))){ tests_passed++; } total_tests++;

    if(((find_max({"wcbcaxyzyz","applle","chey","l","elderberry","fig","grape","elderberry","l"}) == "wcbcaxyzyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"Eagle","jijlklmlneAgLe","eAgLe","u","iHaTethis","Eagle"}) == "jijlklmlneAgLe"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","epear","grape","m","kiwi","wyx","pear","grape","pear","supersonic"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmmn","ijklmn","ijklmn"}) == "ijklmmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"","ijklmn"}) == "ijklmn"))){ tests_passed++; } total_tests++;

    if(((find_max({"v","hijklmnop","qrstuv","grhijklmjnope"}) == "grhijklmjnope"))){ tests_passed++; } total_tests++;

    if(((find_max({"dwatell","saaddzzupersonic","mm","b","t","h"}) == "saaddzzupersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrtuv","orange","grape","banana","kiwi","pear","xylophone"}) == "xylophone"))){ tests_passed++; } total_tests++;

    if(((find_max({"wcbcaxyz","banana","mhijklmnop","cherry","l","elderberry","kiwefghipifig","fg","grape","cherry","fg"}) == "mhijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"catcb","supersonic","apple","xylopthone","y","m","kiwi","pear","xylophone","grape","xylophone","apple","xylophone"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuv","ijklmn","efghip","qrstuv","ijklmn","eghip","HXs9s1","ijklmn"}) == "efghip"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","abcdem","hijklmnop","qrstuv","wcbcaxyz"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"wcbcaxyz","banana","cherry","l","elderberry","fg","grape"}) == "wcbcaxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"abcdefg","hijklmnop","abcdefg","wxangez","qrstuv","abcdefg"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","orange","grape","kiwi","r","kiwi","supersonic","supersonic","supersonic","supersonic","apple"}) == "supersonic"))){ tests_passed++; } total_tests++;

    if(((find_max({"EE","eAgLEageleee","eAgLee","EEaglcbe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"EEaglcbe","ueAgL","EEagle","eAgLe"}) == "EEaglcbe"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnop","a","wcbcaxyz","wcbcaxyz","wcbcaxyz","hijklmnop","hijklmnop"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"oxylopthone","hijklmnop","abcdem","wxyz","qrstuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"apple","xylopthone","m","xe","gBFWztts67","xylophone","xe","m","m","xe"}) == "gBFWztts67"))){ tests_passed++; } total_tests++;

    if(((find_max({"ijklmmn","efghwxyezip","efghwxzyezip","efghwxyzip"}) == "efghwxyezip"))){ tests_passed++; } total_tests++;

    if(((find_max({"qrstuvwxyz","yx"}) == "qrstuvwxyz"))){ tests_passed++; } total_tests++;

    if(((find_max({"supersonic","apple","xylopthone","grape","peHXs9s1ear","kiwi","pear","grape","xylopthone","xylophone","qrsutuv"}) == "peHXs9s1ear"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnnop"}) == "hijklmnnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"oxylopthone","hijklmnop","abcdem","hmijklmnop","wxyz","qrstuv"}) == "hijklmnop"))){ tests_passed++; } total_tests++;

    if(((find_max({"hijklmnnop","c","Egagle","Eagle"}) == "hijklmnnop"))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


