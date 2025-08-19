#include <iostream>
#include<vector>
#include<string>
using namespace std;

const string& longest(const vector<string>& strings){
    if (strings.empty()) { 
        // Returning an empty string in case of empty vector.
        throw invalid_argument("Empty input vector");
    }
    
    auto it = strings.begin();
    const string* longestString = &(*it);
  
    for(;it != strings.end(); ++it) {
        if (longestString->length() < it->length()) 
            // If length of current string is longer, update the pointer to this string.
            longestString = &(*it);
     }
    
    return *longestString;
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

    if((longest({}) == "")){ tests_passed++; } total_tests++;

    if((longest({"x", "y", "z"}) == "x")){ tests_passed++; } total_tests++;

    if((longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz")){ tests_passed++; } total_tests++;

    if((longest({"x","y","z"}) == "x")){ tests_passed++; } total_tests++;

    if((longest({"x","yyy","zzzz","www","kkkk","abc"}) == "zzzz")){ tests_passed++; } total_tests++;

    if((longest({"","a","aa","aaa"}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"123456789","1234","12345","123"}) == "123456789")){ tests_passed++; } total_tests++;

    if((longest({"a","b","aa","bb"}) == "aa")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","horse","cow"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","pear"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"123","12","1234","1","12345"}) == "12345")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","bb","cccc"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"aaa","aa","a","aaaa"}) == "aaaa")){ tests_passed++; } total_tests++;

    if((longest({"a"}) == "a")){ tests_passed++; } total_tests++;

    if((longest({"aa","z","p","q"}) == "aa")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","cc","cccc"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","horse","cow","q"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"","a","aa","aaa","aa"}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","banna","banana"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","cccc","ccaaa"}) == "ccaaa")){ tests_passed++; } total_tests++;

    if((longest({"","a","cow","aaa","aa"}) == "cow")){ tests_passed++; } total_tests++;

    if((longest({"aa","z","p","qq"}) == "aa")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","horse"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","pear","horse","pear"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","1233","cccc","cccc","ccaaa"}) == "ccaaa")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","cc","cccc","123"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"","a","1234","dog","aa"}) == "1234")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple","p"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"cat","horse"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","horse","cow","hore","horse"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple","p","p","aa"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","banna","banana","banana"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","pear","horse","pear","apple"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"aa","z","p","qq","aa",""}) == "aa")){ tests_passed++; } total_tests++;

    if((longest({"aa","cc","aaa","123","cccc","cc","cccc","123","aa"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","bb","cccc","aa","aa"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat"}) == "dog")){ tests_passed++; } total_tests++;

    if((longest({"apple","p","qq","apple","p","pear"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"aaa","z","p","qq","qqq"}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"","a","aa","aaa","aa","a"}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"","hore","","nWa","aaa","pear","wRQ","qq"}) == "hore")){ tests_passed++; } total_tests++;

    if((longest({"","a","aaa","aa","a"}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","ccaaa","ccaaa","aa"}) == "ccaaa")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","cc","123"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"odog","catt"}) == "odog")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","bb","cccc","cccc"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","bb","cccc","qaa","aa"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"dog","a","aa","aaa","aa","a","a"}) == "dog")){ tests_passed++; } total_tests++;

    if((longest({"apple","banaana","pear","horse","pear","apple"}) == "banaana")){ tests_passed++; } total_tests++;

    if((longest({"","a","aaaa","a"}) == "aaaa")){ tests_passed++; } total_tests++;

    if((longest({"dopearg","a","aa","aaa","aa","a","a"}) == "dopearg")){ tests_passed++; } total_tests++;

    if((longest({"","a","aaa"}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","horse","cow","cat"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"aaa","aa","a","aaaa","aa","qq"}) == "aaaa")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","bb","cccc","aa","aa","aaa"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","banna","banana","z"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"odog","ctatt"}) == "ctatt")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","pear","horse","pear","odogpear","pear"}) == "odogpear")){ tests_passed++; } total_tests++;

    if((longest({"","a","aa","aaa",""}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"","a","aaa","aa","a","bba"}) == "aaa")){ tests_passed++; } total_tests++;

    if((longest({"cat","horse","horcate"}) == "horcate")){ tests_passed++; } total_tests++;

    if((longest({"aa","p","qq","apple","p"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple","pbanaana"}) == "pbanaana")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","banna","banana","z","babbnna"}) == "babbnna")){ tests_passed++; } total_tests++;

    if((longest({"horse"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"dog","a","aaa","aa","a","a"}) == "dog")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple","p","aa","alpple"}) == "alpple")){ tests_passed++; } total_tests++;

    if((longest({"apple","banaa","pear"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","pear","pear","apple"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","ccaaa","ccaaa","aa","ccaabanaanaa"}) == "ccaabanaanaa")){ tests_passed++; } total_tests++;

    if((longest({"1","a","cow","aaa","aa","a"}) == "cow")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","horse","pear"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"p","cat","horse","cow"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","horse","cow","cat","cat"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","hrorse","cow","q"}) == "hrorse")){ tests_passed++; } total_tests++;

    if((longest({"odog","catt","catt"}) == "odog")){ tests_passed++; } total_tests++;

    if((longest({"apple","banaa","pear","abanaa"}) == "abanaa")){ tests_passed++; } total_tests++;

    if((longest({"dog","cat","horse","w","q"}) == "horse")){ tests_passed++; } total_tests++;

    if((longest({"apple","pear","horse","pear","apple"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple","aa"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","banna","zbanna"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"a","a"}) == "a")){ tests_passed++; } total_tests++;

    if((longest({"1","a","cow","aaa","aa","a","11234564789","babbnnaa"}) == "11234564789")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","pear","banaana","apple"}) == "banaana")){ tests_passed++; } total_tests++;

    if((longest({"123","12","1234","1","12345","123"}) == "12345")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple","p","ppp"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","cc","123","12345"}) == "12345")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","pear","ppphorse","pear","odogpear","pear"}) == "ppphorse")){ tests_passed++; } total_tests++;

    if((longest({"1","a","bannacow","aaa","aa","a"}) == "bannacow")){ tests_passed++; } total_tests++;

    if((longest({"1","a","bannaccow","aaa","aa","a"}) == "bannaccow")){ tests_passed++; } total_tests++;

    if((longest({"aa","apple","p","qq","apple","p","apple"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana","zbanna"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"apple","banana"}) == "banana")){ tests_passed++; } total_tests++;

    if((longest({"aa","bb","cc","aaa","123","cccc","cc","123","12345","cccc","3123"}) == "12345")){ tests_passed++; } total_tests++;

    if((longest({"banana","pear","banaana","apple"}) == "banaana")){ tests_passed++; } total_tests++;

    if((longest({"odog","ctatat"}) == "ctatat")){ tests_passed++; } total_tests++;

    if((longest({"apple","banaa","pear","apple"}) == "apple")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","","qr"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","are","yOu","DOiNG","tODAY?"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","eeeeeeeeee","","qr"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","","qr","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","","hello","r","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","eeeeeeeeee",""}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"bc","defghijklmnop","eeeeeeeeee",""}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","aare","tODAY?"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","55555","666666","7777777","88888888","999999999","10000000000","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Durian","Fig","Grrape","Grape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Cherry","Durian","Fig","Grape","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","55555","666666","7777777","999999999","10000000000","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","qr","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","are","yOu","DOiNG","tODAY?","yOu","DOiNG"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklAvocadomnop","eeeeeeeeee","","qr"}) == "defghijklAvocadomnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","9999999999","55555","666666","7777777","88888888","999999999","22"}) == "9999999999")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","qr","defghijklmnop","yOu"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"abc","eeeeeeeeee","","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","uyOuggggggggMangoggggg","are","uyOu","DOiNG","tODAY?","DOiNG"}) == "uyOuggggggggMangoggggg")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","hello","r","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"eeeeeeeeeee","bc","defghijklmnop","eeeeeeeeee",""}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Cherry","Durian","Fig","Grape","Lemon","Mango","Orange","Apple"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggMangoggggg"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"HOW","are","yOu","DOiNG","tODAY?"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"defghijkllmnop","abc","defghijklmnop","","hello","r","defghijklmnop","bb","defghijklmnop","defghijklmnop"}) == "defghijkllmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","4444","55555","666666","7777777","999999999","10000000000","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","uyOuggggggggMangoggggg","are","Helbblo","uyOu","DOiNG","tODAY?","DOiNG"}) == "uyOuggggggggMangoggggg")){ tests_passed++; } total_tests++;

    if((longest({"hello","areHOW","are","yOu","DOiNG","tODAY?"}) == "areHOW")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Hola,","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Cherrry","Avocado","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Hola,","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Cherry","Durian","Fig","defghijklminop","Kiwi","Lemon","Mango","Orange"}) == "defghijklminop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Cherry","Dur","Fig","Grape","Lemon","Mango","Orange","Grape"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklAvocadomnop","eeeeeeeeee","Orange","","qr"}) == "defghijklAvocadomnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","Cherry","Durian","Fig","Graape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","hhhhhhhhhhhhhhhhhello","r","defghijklmnop","defghijklmnop"}) == "hhhhhhhhhhhhhhhhhello")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ffffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","666666bc","qr","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"22","333","4444","55555","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","hhhhhhhhhhhhhhh","Durian","Fig","Graape","Kiwi","Lemon","Mango","Orange"}) == "hhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","hello","r","defghijklmnop","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"HOW","are","yOu","tODAY?"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","aaaaa","ddddddddd","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggMangoggggg"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"aaaaa","aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","iiiiiiiiiiiiiiiiiii"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Durian","Fig","Grrape","Grape","Kiwi","Lemon","MangoCherrry","Orange"}) == "MangoCherrry")){ tests_passed++; } total_tests++;

    if((longest({"Banana","Blueberry","Cherry","Durian","Fig","Grape","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"1","4444","55555","666666","7777777","999999999","10000000000","22","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","lo,","Blueberry","Cherry","Durian","Fig","defghijklminop","Kiwi","Lemon","Mango","Orange"}) == "defghijklminop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","hhhhhhhhhhhhhhh","Fig","Graape","Kiwi","Lemon","Mango","Banana"}) == "hhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","eeeeeeeeee","qr","defghkijklmnop","yOu"}) == "defghkijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","hhhhhhhhhhhhhhh","Durian","Graape","Kiwii","Lemon","Mango","Orange"}) == "hhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","","hello","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","666666bc","qr","defghijklmnop","66666abc","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"bc","defghijmklmnop","eeeeeeeeee",""}) == "defghijmklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defkghijklmnop","","qr","defghijklmnop","defghijklmnop"}) == "defkghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","9999999999","55555","666666","7777777","88888888","22"}) == "9999999999")){ tests_passed++; } total_tests++;

    if((longest({"HOW","yOu","DOiNG","tODAY?"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","hello","","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","666666bc","defghijklmnop","66666abc","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","hello","r","defghijklmnop","Helolo,","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","4444","55555","666666","7777777","999999999","10000000000","22","9999999999","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","qqr","defkghijklmnop","","qr","defghijklmnop","defghijklmnop"}) == "defkghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","r","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","abcHelolo,","qr","abbc","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Cherry","Dur","Grape","Lemon","Mango","Orange","Grape"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklAvocadomnop","eeeeeeeeee","Orange","","qr","abc"}) == "defghijklAvocadomnop")){ tests_passed++; } total_tests++;

    if((longest({"Banana","Blueberry","Cherry","Dun","Fig","Grape","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","Cherry","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","ffffffffff","ggggggggggggg","ggggggggManggoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhh","ggggggggMangoggggg"}) == "ggggggggManggoggggg")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","lo,","Blueberryy","Cherry","Durian","Fig","defghijklminop","Kiwi","Lemon","Mango","Orange"}) == "defghijklminop")){ tests_passed++; } total_tests++;

    if((longest({"abc","","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","defkghijklmnop","666666bc","qr","defghijklmnop","66666abc","defghijklmnop"}) == "defkghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklAvocadomnop","eeeeeeeeee","Orange","","qr","qr"}) == "defghijklAvocadomnop")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","eeeeeeeeee","","eeeeeeeeee"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"bc","defghijklmnop","eeeeeeeeee","eeeeeeee",""}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"22","4444","9999999999","55555","666666","7777777","88888888","defghip","999999999","22"}) == "9999999999")){ tests_passed++; } total_tests++;

    if((longest({"aaaaa","aaaa","bbbbbb","cccccccc","ddddddddd","fffffffffff","iiiiiiiiiiiiiiiiiii"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","Cherry","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg","cccccccc","ddddddddd"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"HOW","are","yOu","tODAY?","yOu"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"defghijklAvocadomnop","eeeeeeeeee","Orange","","abc","defghijklAvocadomnop"}) == "defghijklAvocadomnop")){ tests_passed++; } total_tests++;

    if((longest({"","hello","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"HOW","are","yOu","ziua","tODAY?","yOu","are"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","eeeeeeeeee","aaaaa",""}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","55555","666666","7777777","77777777","88888888","999999999","10000000000","22","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","55555","666666","7777777","88888888","999999999","10000000000","22","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","Grape","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","666666bc","qr","defghijklmnop","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","r","defghijklmnop","Helolo,","dHelloBonjour,efghijklmnop"}) == "dHelloBonjour,efghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","666666bc","qr","defghijklmnop","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Banana","Blueberry","Chrerry","Durian","Fig","Grape","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","aaaa"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"1","4444","55555","7777777","999999999","10000000000","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"1","4444","55555","666666","77777777","999cccccccc999999","10000000000","22"}) == "999cccccccc999999")){ tests_passed++; } total_tests++;

    if((longest({"bc","defghijklmnop","hhhhhhhhhhhhhhhhhello","eeeeeeeeee",""}) == "hhhhhhhhhhhhhhhhhello")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bggggggggManggogggggbbb","cccccccc","Grape","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","cccccccc"}) == "bggggggggManggogggggbbb")){ tests_passed++; } total_tests++;

    if((longest({"bb","1","55555","666666","7777777","999999999","10000000000","22","9999999999","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklAvocadomnop","eeeeeeeeee","Orange","999999999","","qr","abc"}) == "defghijklAvocadomnop")){ tests_passed++; } total_tests++;

    if((longest({"1","4444","55555","666666","7777777","Hello","999999999","10000000000","22","9999999999","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","ffabcfffffffff","ggggggggggggg","ggggggggMangoggggg","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","666666bc","qr","66666abc","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"22","333","4444","55555","666666","777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","eeeeeeeeee"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","defkghijklmnop","666666bc","defghijklmnop","66666abc","bbbc","defghijklmnop"}) == "defkghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"aabc","defghijklmnop","abcHelolo,","ziuddddddddda","qr","abbc","qr"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Hola,","Lemon","Mango","Orange","Avocado"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","ffabcfffffffff","ggggggggggggg","ggggggggMangoggggg","iiiiiiiiiiiiiiiiiii","hhhhhhhhhhhhhhhhh","ggggggggggggg","hhhhhhhhhhhhhhhh"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"aaaaa","bbbbbb","cccccccc","ddddddddd","fffffffffff","iiiiiiiiiiiiiiiiiii"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"eeeeeeeeeee","bc","defghijklmnop","eeeeeeeeee","","eeeeeeeeeee"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"acbc","eeeeeeeeee","Orange","","OranUNQHge","qr","qr"}) == "eeeeeeeeee")){ tests_passed++; } total_tests++;

    if((longest({"bb","HW","ccc"}) == "ccc")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","are","yOu","DOiNG","tODAY?","tODAY?"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","Cherry","aaa","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg","aaaa"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Cherry","Durian","Fig","defghijklminop","Kiwi","Lemon","eeeeeeeeee","Orange"}) == "defghijklminop")){ tests_passed++; } total_tests++;

    if((longest({"bc","eeeeeeeeee",""}) == "eeeeeeeeee")){ tests_passed++; } total_tests++;

    if((longest({"Cherrry","666666abc","defghijklmnop","","ggggggggggggg","defghijklmnop","66666abc","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"urian","Apple","Banana","lo,","Blueberryy","Cherry","Durian","Fig","defghijklminop","Kiwi","Lemon","Mango","Orange"}) == "defghijklminop")){ tests_passed++; } total_tests++;

    if((longest({"defghijkllmnop","abc","defghijklmnop","","hello","Orange","defghijklmnop","bb","defghijklmnop","defghijklmnop"}) == "defghijkllmnop")){ tests_passed++; } total_tests++;

    if((longest({"22","4444","9999999999","55555","666666","7777777","88888888","22","666666"}) == "9999999999")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","are","yOu","DOiNG","tO?","HOW"}) == "hello")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","Cherry","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","Cherrry","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"acbc","eeeeeeeeee","","OranUNQHge","qr","qr","eeeeeeeeee"}) == "eeeeeeeeee")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","abcc","qr","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defkghijklmnop","","defghijklmnop","defghijklmnop"}) == "defkghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","","defghijklmnop","66666abc","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","9999999999","55555","6999cccccccc99999966666","7777777","88888888","999999999","222","22"}) == "6999cccccccc99999966666")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","","qr","defghijklmndop"}) == "defghijklmndop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","qqr","defkghijklmnop","","qr","defghijklmnop","defghijklmnop","",""}) == "defkghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666","666666","666666"}) == "666666")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","","666666bc","qr","defghijklmnop","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","Cherry","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","gggggggggggggg","Cherrry","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","Chrerry","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg"}) == "ggggggggMangoggggg")){ tests_passed++; } total_tests++;

    if((longest({"hello","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"eeeeeeeee","defghijklmnop","eeeeeeeeee","","qr"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","hello","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"acbc","eeeeeeeeee","Orange","","OranUNQHge","qr","qr","acbc"}) == "eeeeeeeeee")){ tests_passed++; } total_tests++;

    if((longest({"bc","hhhhhhhhhhhhhhhhhhello","eeeeeeee","hhhhhhhhhhhhhhhhhello","eeeeeeeeee",""}) == "hhhhhhhhhhhhhhhhhhello")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","tziuahijklmnopODAY?","yOu","DOiNG","tO?","HOW"}) == "tziuahijklmnopODAY?")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","hello","r","hhello","defghijklmnop","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"HOdefgW","are","yOu","DOiNG","tODAY?"}) == "HOdefgW")){ tests_passed++; } total_tests++;

    if((longest({"aaaaa","aaaa","bbbbbb","cccccccc","deeeeeeeeeeabcdddddddd","eeeeeeeeee","fffffffffff","iiiiiiiiiiiiiiiiiii"}) == "deeeeeeeeeeabcdddddddd")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklAvocadomnop","eeeeeeeeee","","qr","defghijklAvocadomnop"}) == "defghijklAvocadomnop")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","Cherry","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg","cccccccc","ddddddddd"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","6c6666abc","defkghijklmnop","666666bc","defghijklmnop","66666abc","bbbc","defghijklmnop"}) == "defkghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","hello","r","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"666666abc","defghijklmnop","","666666bc","qr","defghijklmnop","66666abc","q","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","","r","defghijklmnop","Helolo,","dHelloBonjour,efghijklmnop","defghijklmnop","defghijklmnop"}) == "dHelloBonjour,efghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"acbc","eeeeeeeeee","ggggggggManggoggggg","OranUNQHge","qr","qr","eeeeeeeeee"}) == "ggggggggManggoggggg")){ tests_passed++; } total_tests++;

    if((longest({"HOW","are","yOu","DOiNG"}) == "DOiNG")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","yOu","DOiNG","tODAY?","yOu","DOiNG"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Hola,","Lemon","Mango","Orange","Durianddddddddd","Avocado","Grape"}) == "Durianddddddddd")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Banana","Blueberry","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"fIdBykS","MangoCherrry","ccddddddddd","ccc","ccc"}) == "MangoCherrry")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","Cherry","MangoCherrry","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","ggggggggMangoggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","ggggggggggggg","hhhhhhhhhhhhhhhh","ggggggggggggg"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"acbc","6c6666abc","eeeeeeeeee","ggggggggManggoggggg","OranUNQHge","qr","qr","eeeeeeeeee"}) == "ggggggggManggoggggg")){ tests_passed++; } total_tests++;

    if((longest({"bb","1","55555","666666","7777777","999999999","10000000000","22","9999999999","222","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"bb","1","55555","666666","7777777","999999999","10000000000","9999999999","222","22"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"a","bb","ccc","ddd"}) == "ccc")){ tests_passed++; } total_tests++;

    if((longest({"abc"}) == "abc")){ tests_passed++; } total_tests++;

    if((longest({"x","y","z",""}) == "x")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","qr"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","qr","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","qr","Bonjour,","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"ccc"}) == "ccc")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","qeeeeHola,eee","defghijklmnop","Bonjour,","","qr","qr","qr"}) == "qeeeeHola,eee")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","Apple","qr"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","10000000000","7777777"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"ccc","ccc"}) == "ccc")){ tests_passed++; } total_tests++;

    if((longest({"iiiiiiiiiiiiiiiiiii","Banana","10000000000","bb","ccc","bb","bb"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","999999999","10000000000","666666"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","555555","666666","7777777","88888888","999999999","10000000000","666666"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"bb","ccc"}) == "ccc")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","qeeeeeeeeee","defghijklmnop","Bonjour,","","qr","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"hello","chellocc","ccc","ccc","ccc"}) == "chellocc")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","Lemon","Mango","Orange","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Durian","fffffffffff","Fig","Grape","Kiwi","Lemon","Mango","Orange"}) == "fffffffffff")){ tests_passed++; } total_tests++;

    if((longest({"hello","HOW","are","yOu","tODAY?"}) == "tODAY?")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Grape","Kiwi","Lemon","Mango","Orange","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","999999999","10000000000","666666","333"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","hhhhhhhhhhhhhhhh","Bonjour,"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","hhhhhhhhhhhhhhhh","hhhhhhhhhhhhhhhh"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"bbccc"}) == "bbccc")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Grape","Kiwi","Applle","Lemon","Mango","Orange","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"Appl","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Grape","Kiwi","Lemon","Mango","Orange","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"are","bb","ccc"}) == "are")){ tests_passed++; } total_tests++;

    if((longest({"Apple","MMango","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Graziuape","Kiwi","Lemon","Mango","Orange"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","Apple"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","szgkhWMLx","Kiwi","Lemon","Mango","Orange"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"chellocc","ccc","ccc","ccc","ccc"}) == "chellocc")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","666666","7777777","88888888","999999999","10000000000","22","7777777"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Apple","bbccc"}) == "Apple")){ tests_passed++; } total_tests++;

    if((longest({"Apple","MMango","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Graziuape","Kiwi","Liiiiiiiiiiiiiiiiiiiemon","Mango"}) == "Liiiiiiiiiiiiiiiiiiiemon")){ tests_passed++; } total_tests++;

    if((longest({"Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","DOiNG","Lemon","Mango","Orange","Orangre","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange","Mango","Avocado"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange","Avocado"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop","kdefghijklmnop","Apple","kdefghijklmnop"}) == "kdefghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","Bonjour,","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Durian","F","Grape","Kiwi","333","Lemon","Mango","Orange"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"cccc","ccc","ccc"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","666666","7777777","Beeeeeeeeeeonjour,","999999999","10000000000","22","7777777"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","77777","qr","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","bbbbbb"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","666666","7777777","44","Beeeeeeeeeeonjour,","999999999","10000000000","22","7777777"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;

    if((longest({"Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","DOiNG","Lemon","Mango","hhhhhhhhhhhhhhhh","Orangre","Duriaccccccccn"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"cccc","ccKiwic","ccc","ccc"}) == "ccKiwic")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","Lemon","Mango","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","77777","4444","666666","7777777","44","Beeeeeeeeeeonjour,","999999999","10000000000","22","7777777"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;

    if((longest({"Apple","abc","defghijklmnop","Bonjour,","","qr","hhhhhhhhhhhhhhhh","Bonjour,"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"9999999999","1","22","333","4444","55555","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Avocado","Banana","Blueberry","ziua","Duriaccccccccn","Grape","Kiwi","DOiNG","Lemon","Mango","hhhhhhhhhhhhhhhh","Orangre","Duriaccccccccn","Grape"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Hello","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","Lemon","Mango","Orange","Kiwi"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"ccc","cc"}) == "ccc")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","bbbbbb","","qr","Bonjour,","qeeeeeeeee","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","77777","4444","666666","7777777","44","Beeeeeeeeeeonjour,","999999999","10000000000","77777777","22","7777777"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;

    if((longest({"1","22","3333","4444","55555","666666","7777777","88888888","10000000000","666666","333"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"Avocado","Banana","Avocado","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","Or","DOiNG","Lemon","Mango","Orange","Orangre","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"Apple","MMango","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Graziuape","Kiwi","Liiiiiiiiiiiiiiiiiiiemon","Mango","Duriaccccccccn"}) == "Liiiiiiiiiiiiiiiiiiiemon")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Orangne","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","Lemon","Mango","Orange","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"iiiiiiiiiiiiiiiiiii","Banana","10000000000","bb","ccc","bb","bb","10000000000"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange","AvoJNGmHOkrdo","Avocado"}) == "AvoJNGmHOkrdo")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","Cherry","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","bbbbbb"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Durian","Fig","Grape","Kiwi","Lemon","Orange","Mango","Avocado"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"Apple","abc","defghijklmnop","Bonjour,","","hhhhhhhhhhhhhhhh","Bonjour,","Bonjour,"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","bbbbbb","","qr","Bonjour,","qeeeeeeeee","Bonjour,","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple"}) == "Apple")){ tests_passed++; } total_tests++;

    if((longest({"55555","Apple","bbccc","bbccc"}) == "55555")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","999999999","10000000000","666666","66qeeeeeeeee6666","333"}) == "66qeeeeeeeee6666")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","66666Durian6","4444","55555","666666","7777777","88888888","10000000000","7777777"}) == "66666Durian6")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","qr","qr"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"22","333","4444","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","555555","666666","7777777","iiiiiiiiiiiiiiiiiii","TyUNzlo","10000000000","666666","7777777"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","666666","7777777","44","Beeeeeeeeeeonjour,","999999999","10000000000","22","9999999999","7777777"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;

    if((longest({"Appl","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Grachelloccpe","Kiwi","Lemon","Mango","Orange","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","Cherry","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","bbbbbb","bbbbbb"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","999999999","10000000000","666666","66qeeehelloeeeeee6666","333"}) == "66qeeehelloeeeeee6666")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","999999999","10000000000","Avocado","666666","66qeeehelloeeeeee6666","333"}) == "66qeeehelloeeeeee6666")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","bbbbbb","","qr","BonjourDuriaccccccccn,","qeeeeeeeee","Bonjour,","Bonjour,"}) == "BonjourDuriaccccccccn,")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","77777","4444","666666","7777777","44","Beeeeeeeeeeonjour,","999999999","10000000000","77777777","22","7777777","666666","1"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","Bonjour,","","qr","hhhhhhhhhhhhhhhh","Bonjour,"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","F","Fig","Grape","Kiwi","Lemon","Mango","Orange","Avocado"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","bbbbbb","","qr","BonjourDuriaccccccccn,","qeeeeeeeee","Bonjour,"}) == "BonjourDuriaccccccccn,")){ tests_passed++; } total_tests++;

    if((longest({"9999999999","1","22","333","4444","55555","4","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"9999999999","1","22","333","4444","4","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","Bonjour,","","qeeeeHola,eee","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","Appple","Bonjour,","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","MMango","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Graziuape","Kiwi","Liiiiiiiiiiiiiiiiiiiemon","Mango","Mango"}) == "Liiiiiiiiiiiiiiiiiiiemon")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyhry","Durian","fffffffffff","Grape","Kiwi","Lemon","Mango","Orange","Blueberry"}) == "fffffffffff")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","DuriaccccccccnHello,","Duriaccccccccn","Fig","Kiwi","Lemon","Mango","Orange","Duriaccccccccn"}) == "DuriaccccccccnHello,")){ tests_passed++; } total_tests++;

    if((longest({"are","bb","cccc","ccc"}) == "cccc")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocao","Banana","Blueberry","Cherry","Durian","Fig","Grape","Kiwi","Lemon","Mango","Orange","Fig"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","bbbbbb","qr","BonjourDuriaccccccccn,","qeeeeeeeee","Bonjour,","Bonjour,","qr"}) == "BonjourDuriaccccccccn,")){ tests_passed++; } total_tests++;

    if((longest({"cccc","ccKiwic","ccc"}) == "ccKiwic")){ tests_passed++; } total_tests++;

    if((longest({"1","22","4444","666666","7777777","88888888","999999999","10000000000"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"cccc","TSNvGfDd","ccKiwic","ccc"}) == "TSNvGfDd")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","ccccccccc","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","iiiiiiiiiiiiiiiiiii","bbbbbb"}) == "iiiiiiiiiiiiiiiiiii")){ tests_passed++; } total_tests++;

    if((longest({"Apple","abc","defghijklmnop","Bonjour,","","Bonjour,","Bonjour,"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777b777","88888888","999999999","10000000000","666666","333","1"}) == "10000000000")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","defghijklmnop","Bonjour,","bbbbbb","","qr","BonjourDuriaccccccccn,","qeeeeeeeee","Bonjour,","Bonjour,"}) == "BonjourDuriaccccccccn,")){ tests_passed++; } total_tests++;

    if((longest({"55","Apple","bbccc","bbccc"}) == "Apple")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Fig","Grape","Kiwi","Lemon","Mango","Orange","Avocado"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","88888888","11","88888888","7777777"}) == "88888888")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","qeeeeHola,eee","defghijklmnop","Bonjour,","","qr","qr"}) == "qeeeeHola,eee")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","77777","4444","666666","7777777","44","Beeeeeeeeeeonjour,","999999999","10000000000","77777777","22","7777777","666666","7755777","1","7777777"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeeee","qeeeeeeeeee","defghijklmnop","Bonjour,","","qr","hhhhhhhhhhhhhhhh","Bonjour,"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","Cherry","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh","bbbbbb","bbbbbb","eeeeeeeeee"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Durian","Fig","Grape","Kiwi","Lemon","Orange","Mango","Avocado","Cyherry"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Kiwi","Applle","Lemon","Mango","Orange","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"cccc","ccKiwic","ccc","ccc","ccc"}) == "ccKiwic")){ tests_passed++; } total_tests++;

    if((longest({"defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"6666666","1","22","333","4444","55555","666666","7777777","88888888","11","88888888","7777777"}) == "88888888")){ tests_passed++; } total_tests++;

    if((longest({"Apple","bbccc","bbccc","bbccc"}) == "Apple")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","","qr","qr","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","MMango","Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Graziuape","Kiwi","Liiiiiiiiiiiiiiiiiiiemon","Mango","ggggggggggggg"}) == "Liiiiiiiiiiiiiiiiiiiemon")){ tests_passed++; } total_tests++;

    if((longest({"Durian","ccc"}) == "Durian")){ tests_passed++; } total_tests++;

    if((longest({"abc","defghijklmnop","Bonjour,","","BonjourDuriaccccccccn,","qeeeeHola,eee","Bonjour,"}) == "BonjourDuriaccccccccn,")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Fig","Grape","Kiwi","Lemon","Mango","Orange","Avocado","Mango"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","4444","55555","666666","7777777","66Avocao","88888888","aaaa","10000000000","666666","66qeeehelloeeeeee6666","333"}) == "66qeeehelloeeeeee6666")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Orangne","Banana","Blueberry","qeeeeeeeee","Duriaccccccccn","Fig","Grape","Kiwi","Lemon","Mango","Orange","Duriaccccccccn","Kiwi"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"22","333","44444","555555","666666","7777777","88888888","999999999","666666"}) == "999999999")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cyhry","Durian","fffffffffff","Grape","Kiwi","Lemon","Mango","Oranege","Blueberry"}) == "fffffffffff")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","defghijklmnop","","qr","qr","defghijklmnop"}) == "defghijklmnop")){ tests_passed++; } total_tests++;

    if((longest({"Apple","Avocado","Banana","Blueberry","Cherry","Fig","Cyhry","Kiwi","Lemon","Mango","Orange","Avocado","Mango"}) == "Blueberry")){ tests_passed++; } total_tests++;

    if((longest({"Apple","abc","defghijklmnop","Bonjour,","hhhhhhhhhhhhhhhh","Bonjour,","Bonjour,"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"are","bb","ccc","ccc"}) == "are")){ tests_passed++; } total_tests++;

    if((longest({"Avocado","Banana","Blueberry","ziua","Duriaccccccccn","Avocadqro","Grape","Kiwi","DOiNG","55555","Lemon","Mango","hhhhhhhhhhhhhhhh","Orangre","Duriaccccccccn","Grape"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"Avocado","Banana","Blueberry","Cyherry","Duriaccccccccn","Fig","Grape","Kiwi","Lemon","Mango","Orange","Orangre","Duriaccccccccn"}) == "Duriaccccccccn")){ tests_passed++; } total_tests++;

    if((longest({"qeeeeeeeeee","abc","defghijklmnop","Bonjour,","bbbbbb","","qr","BonjourDuriaccccccccn,","qeeeeeeeee","Bonjour,","DOiNG","Bonjour,"}) == "BonjourDuriaccccccccn,")){ tests_passed++; } total_tests++;

    if((longest({"aaaa","bbbbbb","cccccccc","ddddddddd","eeeeeeeeee","fffffffffff","ggggggggggggg","hhhhhhhhhhhhhhhh"}) == "hhhhhhhhhhhhhhhh")){ tests_passed++; } total_tests++;

    if((longest({"1","22","333","77777","4444","666666","7777777","44","Beeeeeeeeeeonjour,","999999999","10000000000","77777777","22","666666","1"}) == "Beeeeeeeeeeonjour,")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


