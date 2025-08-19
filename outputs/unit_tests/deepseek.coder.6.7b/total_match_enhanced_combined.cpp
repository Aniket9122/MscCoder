#include <vector>
#include <string>
#include<numeric>   // for std::accumulate
using namespace std;

// helper function to calculate number of chars in a string
int count_chars(const string& str){ 
   return str.size(); 
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = std::accumulate(lst1.begin(), lst1.end(), 0, [](int i, const string& s){ return i + count_chars(s); });
    int sum2 = std::accumulate(lst2.begin(), lst2.end(), 0, [](int i, const string& s){ return i + count_chars(s); });
    
    if (sum1 <= sum2) {
        return lst1;
    } else {
        return lst2;
    }
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

    if((issame(total_match({}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi", "admin"}, {"hi", "hi"}) , {"hi", "hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi", "admin"}, {"hi", "hi", "admin", "project"}) , {"hi", "admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"4"}, {"1", "2", "3", "4", "5"}) , {"4"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi", "admin"}, {"hI", "Hi"}) , {"hI", "Hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi", "admin"}, {"hI", "hi", "hi"}) , {"hI", "hi", "hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi", "admin"}, {"hI", "hi", "hii"}) , {"hi", "admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"this"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"this"}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {"hi","hi"}) , {"hi","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {"hi","hi","admin","project"}) , {"hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"4"}, {"1","2","3","4","5"}) , {"4"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {"hI","Hi"}) , {"hI","Hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {"hI","hi","hi"}) , {"hI","hi","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {"hI","hi","hii"}) , {"hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"this"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"this"}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({""}, {"hello"}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world"}, {"hi","there"}) , {"hi","there"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","fun"}, {"coding","is","awesome"}) , {"coding","is","fun"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abc"}, {"abcdefghijklmnopqrstuvwxyz"}) , {"abc"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","new","year"}, {"merry","christmas"}) , {"happy","new","year"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","new","year"}, {"happy","new","year","2022"}) , {"happy","new","year"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","birthday","sarah"}, {"happy","birthday","sally"}) , {"happy","birthday","sarah"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cat","dog","bird"}, {"apple","banana","orange"}) , {"cat","dog","bird"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"kevin","jessica","lucas"}, {"adam","michael","smith"}) , {"adam","michael","smith"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1","2","3","4"}, {"one","two","three"}) , {"1","2","3","4"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"christmas","michael","smith","smith"}, {"christmas","michael","smith","smith"}) , {"christmas","michael","smith","smith"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","fun","coding"}, {"coding","is","awesome"}) , {"coding","is","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","codig","fun","coding"}, {"codogding","coding","is","awesome"}) , {"coding","is","codig","fun","coding"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","cocding","awesome"}, {"coding","is","cocding","awesome"}) , {"coding","is","cocding","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","birthday","one","sally"}, {"happy","birthday","one","sally"}) , {"happy","birthday","one","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","isorange","fun"}, {"coding","is","awesome"}) , {"coding","is","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"merdogry","merry"}, {"merdogry","merry"}) , {"merdogry","merry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"2","kevin","jessica","lucas"}, {"adam","michael","smith"}) , {"adam","michael","smith"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","codig","fun","coding"}, {"codogding","coding","is","awesome","awesome"}) , {"coding","is","codig","fun","coding"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world"}, {"cathi","there"}) , {"hello","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({""}, {"hello","hello"}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","awesome","is"}, {"coding","is","awesome","is"}) , {"coding","is","awesome","is"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"three","2022","dog","birbananad"}, {"three","2022","dog","birbananad"}) , {"three","2022","dog","birbananad"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"is","awesome"}, {"is","awesome"}) , {"is","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"bananaone"}, {"bananaone"}) , {"bananaone"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cat","dog","bird"}, {"apple","aple","banana","orange"}) , {"cat","dog","bird"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","birthday","sally"}, {"happy","birthday","sally"}) , {"happy","birthday","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cathi","there","chathi","there"}, {"cathi","there","chathi","there"}) , {"cathi","there","chathi","there"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","birthday","merry","one","sally"}, {"happy","birthday","merry","one","sally"}) , {"happy","birthday","merry","one","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"lly","birhday","happy","birthday","sally","sally"}, {"lly","birhday","happy","birthday","sally","sally"}) , {"lly","birhday","happy","birthday","sally","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"kevin","jessica","lucas"}, {"kevin","jessica","lucas"}) , {"kevin","jessica","lucas"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","sally"}, {"happy","sally"}) , {"happy","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"allyc","abc"}, {"abcdefghijklmnopqrstuvwxyz"}) , {"allyc","abc"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","sally","happy"}, {"happy","sally","happy"}) , {"happy","sally","happy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","codinghello","is","2","is"}, {"coding","codinghello","is","2","is"}) , {"coding","codinghello","is","2","is"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cathi","there","ccathi","chathi","chathi"}, {"cathi","there","ccathi","chathi","chathi"}) , {"cathi","there","ccathi","chathi","chathi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"kevin","jessica","lucas"}, {"adam","dogmichael","smith"}) , {"kevin","jessica","lucas"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cahi","there","chathi","there","hcahi"}, {"cahi","there","chathi","there","hcahi"}) , {"cahi","there","chathi","there","hcahi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"allyc","ab","abc"}, {"abcdefghijklmnopqrstuvwxyz"}) , {"allyc","ab","abc"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"awesome","is"}, {"awesome","is"}) , {"awesome","is"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"2","kevin","jessica","lucas"}, {"michael","smith"}) , {"michael","smith"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"world"}, {"there"}) , {"world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","birthday","merry","one"}, {"happy","birthday","merry","one"}) , {"happy","birthday","merry","one"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"alucaspple","banana","orange"}, {"alucaspple","banana","orange"}) , {"alucaspple","banana","orange"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","new","year","2022"}, {"happy","new","year"}) , {"happy","new","year"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"sally"}, {"sally"}) , {"sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cahi","there","chathi","there","hcahi","hcahi"}, {"cahi","there","chathi","there","hcahi","hcahi"}) , {"cahi","there","chathi","there","hcahi","hcahi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","codig","fun","coding","codig","is"}, {"coding","is","codig","fun","coding","codig","is"}) , {"coding","is","codig","fun","coding","codig","is"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","birthday","cathappy","sally","happy"}, {"happy","birthday","cathappy","sally","happy"}) , {"happy","birthday","cathappy","sally","happy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"is"}, {"is"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"alucaspple","banana","orange","alucaspple"}, {"alucaspple","banana","orange","alucaspple"}) , {"alucaspple","banana","orange","alucaspple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","dogmichael","new","year","2022","dogmichael"}, {"happy","dogmichael","new","year","2022","dogmichael"}) , {"happy","dogmichael","new","year","2022","dogmichael"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"2","kevin","lucas"}, {"adam","michael","smith","smith"}) , {"2","kevin","lucas"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cat","doccathig","bird","doccathig"}, {"cat","doccathig","bird","doccathig"}) , {"cat","doccathig","bird","doccathig"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","birthday","merry","e","sally"}, {"happy","birthday","merry","e","sally"}) , {"happy","birthday","merry","e","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"world","sally"}, {"world","sally"}) , {"world","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","fun","cabcoding","coding"}, {"coding","is","fun","cabcoding","coding"}) , {"coding","is","fun","cabcoding","coding"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"is","awesome","awesome"}, {"is","awesome","awesome"}) , {"is","awesome","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"birthdaallycy","sally"}, {"birthdaallycy","sally"}) , {"birthdaallycy","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cahi","there","chathi","there","orange","hcahi","hcahi"}, {"cahi","there","chathi","there","orange","hcahi","hcahi"}) , {"cahi","there","chathi","there","orange","hcahi","hcahi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","codig","fun","chathicoding","codnewing","codig","is"}, {"coding","is","codig","fun","chathicoding","codnewing","codig","is"}) , {"coding","is","codig","fun","chathicoding","codnewing","codig","is"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1","2","3","4"}, {"one","two","three","two"}) , {"1","2","3","4"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"birthdaallycy","sally","sally"}, {"birthdaallycy","sally","sally"}) , {"birthdaallycy","sally","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","isorange","fun"}, {"coding","is","iis","awesome"}) , {"coding","is","iis","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","codinghello","is","cmerryodinghello","2","is"}, {"coding","codinghello","is","cmerryodinghello","2","is"}) , {"coding","codinghello","is","cmerryodinghello","2","is"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"kevin","jessica","lucas1","lucas"}, {"adam","michael","smith"}) , {"adam","michael","smith"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"sbananaally","sally"}, {"sbananaally","sally"}) , {"sbananaally","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"is","awesome",""}, {"is","awesome",""}) , {"is","awesome",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"newsally","sbananaally","sally"}, {"newsally","sbananaally","sally"}) , {"newsally","sbananaally","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"iis","coding","is","fun","coding"}, {"coding","is","awesome"}) , {"coding","is","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"iis","coding","is","fun","coding"}, {"iis","coding","is","fun","coding"}) , {"iis","coding","is","fun","coding"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","sallly","sally","happy"}, {"happy","sallly","sally","happy"}) , {"happy","sallly","sally","happy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"newsally","sbananaally","sally","sbananaally"}, {"newsally","sbananaally","sally","sbananaally"}) , {"newsally","sbananaally","sally","sbananaally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"two","three","two"}, {"two","three","two"}) , {"two","three","two"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hellobananaone","bananaone"}, {"hellobananaone","bananaone"}) , {"hellobananaone","bananaone"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"thr","three","two"}, {"thr","three","two"}) , {"thr","three","two"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","codinghello","is","cmerryodinghello","2","is","2"}, {"coding","codinghello","is","cmerryodinghello","2","is","2"}) , {"coding","codinghello","is","cmerryodinghello","2","is","2"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"2","22","kevin","lucas"}, {"2","22","kevin","lucas"}) , {"2","22","kevin","lucas"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"christmas","michaechristmasl","smith","smith"}, {"christmas","michaechristmasl","smith","smith"}) , {"christmas","michaechristmasl","smith","smith"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"bananaonee","hellobananaone","bananaone","allyc","hellobananaone"}, {"bananaonee","hellobananaone","bananaone","allyc","hellobananaone"}) , {"bananaonee","hellobananaone","bananaone","allyc","hellobananaone"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"kevin","jessica","codnewing"}, {"kevin","jessica","codnewing"}) , {"kevin","jessica","codnewing"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cathappy"}, {"okbeHIFbKz","doccathig"}) , {"cathappy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"saylly"}, {"saylly"}) , {"saylly"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cathappy"}, {"okbeHIFbKz"}) , {"cathappy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"bananaon","bananaone"}, {"bananaon","bananaone"}) , {"bananaon","bananaone"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"one","two","three","two"}, {"one","two","three","two"}) , {"one","two","three","two"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","codinghello","is","cmerryodinghello","2","codin","is","2"}, {"coding","codinghello","is","cmerryodinghello","2","codin","is","2"}) , {"coding","codinghello","is","cmerryodinghello","2","codin","is","2"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"one","twoo","thre","two"}, {"one","twoo","thre","two"}) , {"one","twoo","thre","two"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","isorange","fun"}, {"is","awesome","awesome"}) , {"is","awesome","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"christmas","michaechristmasl","smith"}, {"christmas","michaechristmasl","smith"}) , {"christmas","michaechristmasl","smith"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"one","twoo","onesally","thre","two","one"}, {"one","twoo","onesally","thre","two","one"}) , {"one","twoo","onesally","thre","two","one"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"iis","coding","is","fun","coding"}, {"is","awesome"}) , {"is","awesome"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cahi","there","chathi","michaelahi"}, {"cahi","there","chathi","michaelahi"}) , {"cahi","there","chathi","michaelahi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"happy","hbirthday","birthday","merry","one"}, {"happy","hbirthday","birthday","merry","one"}) , {"happy","hbirthday","birthday","merry","one"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"sbananaally","sally","sally"}, {"sbananaally","sally","sally"}) , {"sbananaally","sally","sally"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"okbeHIFbKz"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cahi","there","chathi","michaelhahi"}, {"cahi","there","chathi","michaelhahi"}) , {"cahi","there","chathi","michaelhahi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"coding","is","isorange","fun"}, {"aawesome","coding","is","iis","awesome"}) , {"coding","is","isorange","fun"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"twoo","thre","two"}, {"twoo","thre","two"}) , {"twoo","thre","two"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","lazy","dog"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you"}, {"HELLO","WORLD","HOW","ARE","YOU"}) , {"hello","world","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cherry","date"}, {"Apple","Banana","Cherry","Date"}) , {"apple","banana","cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"hi","admin"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you"}, {""}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {"how","are","yoU"}) , {"hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789"}, {"9876543210"}) , {"12345","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuvwxy","z"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","1234567890"}) , {"abcdefg","hijklmnop","qrstuvwxy","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ"}) , {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cherry","Lorem","date"}, {"","banana","cherry","Lorem","date"}) , {"","banana","cherry","Lorem","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUv","WxworldyZ"}, {"AbCdEfG","HijKlMnOp","QrStUv","WxworldyZ"}) , {"AbCdEfG","HijKlMnOp","QrStUv","WxworldyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","Lorem"}, {"","datqrstuve","banana","cherry","Lorem","date","Lorem"}) , {"","datqrstuve","banana","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijknlmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","Lorem","cherry"}, {"","datqrstuve","banana","cherry","Lorem","date","Lorem","cherry"}) , {"","datqrstuve","banana","cherry","Lorem","date","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijknlmnop","qrstuv","wxyz"}, {"The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","lazy","dog"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","Lorem","elit"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","yoU","qrstuvwxy","z"}, {"abcdefg","hijklmnop","yoU","qrstuvwxy","z"}) , {"abcdefg","hijklmnop","yoU","qrstuvwxy","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({""}, {""}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","brownThe","over","the","lazy","dog","over","The"}, {"The","quick","brown","fox","jumps","brownThe","over","the","lazy","dog","over","The"}) , {"The","quick","brown","fox","jumps","brownThe","over","the","lazy","dog","over","The"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789","56789"}, {"12345","56789","56789"}) , {"12345","56789","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","date","Lorem"}, {"","datqrstuve","banana","cherry","date","Lorem"}) , {"","datqrstuve","banana","cherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUv","WxworldyZ","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","QrStUv","WxworldyZ","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","QrStUv","WxworldyZ","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","cherry","date","Lorem"}, {"","datqrstuve","banana","jumpste","cherry","date","Lorem"}) , {"","datqrstuve","banana","jumpste","cherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you"}, {"HELLO","WORLD","ARE","YOU"}) , {"HELLO","WORLD","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijknlmnop","qrstuv","wxyz"}) , {"abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","9876543210"}, {"98765432170","9876543210"}) , {"98765432170","9876543210"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","date","cherhry","Lorem"}, {"","datqrstuve","banana","cherry","date","cherhry","Lorem"}) , {"","datqrstuve","banana","cherry","date","cherhry","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"9876543210"}, {"9876543210"}) , {"9876543210"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"56789","56789"}, {"9876543210"}) , {"56789","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","cherry","Lorem","date","Lorem"}, {"","datqrstuve","cherry","Lorem","date","Lorem"}) , {"","datqrstuve","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"987650","98765432170","9876543210","987650"}, {"987650","98765432170","9876543210","987650"}) , {"987650","98765432170","9876543210","987650"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijknlmnop","qrstuv","wxyz"}) , {"abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","Lorem"}, {"abcdefg","hijklmnop","Lorem"}) , {"abcdefg","hijklmnop","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLHO","5678hello9","HELLO"}, {"HELLHO","5678hello9","HELLO"}) , {"HELLHO","5678hello9","HELLO"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","WxyZ"}) , {"AbCdEfG","HijKlMnOp","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cherry","Lorem","date","Lorem"}, {"","banana","cherry","Lorem","date","Lorem"}) , {"","banana","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you"}, {"HELLO","WORLD","AERE","YOU"}) , {"HELLO","WORLD","AERE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","cherry","LoremWxworldyZ","date","Lorem","datqrstuve"}, {"","datqrstuve","cherry","LoremWxworldyZ","date","Lorem","datqrstuve"}) , {"","datqrstuve","cherry","LoremWxworldyZ","date","Lorem","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","datqrstuve","LoremWxworldyZ","date","Lorem","datqrstuve","date"}, {"Loorem","","datqrstuve","LoremWxworldyZ","date","Lorem","datqrstuve","date"}) , {"Loorem","","datqrstuve","LoremWxworldyZ","date","Lorem","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you","how"}, {"hello","world","how","are","you","how"}) , {"hello","world","how","are","you","how"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789","12345"}, {"12345","56789","12345"}) , {"12345","56789","12345"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijknlmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijknlmnop","qrstuv","5678hello9"}) , {"abcdefg","hijknlmnop","qrstuv","5678hello9"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"9876543210","9876543210"}, {"9876543210","9876543210"}) , {"9876543210","9876543210"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"wxyhijklmnop","abcdefg","hijknlmnop","qrstuv","wxyz"}) , {"wxyhijklmnop","abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are"}, {"HELLO","WORLD","AERE","YOU"}) , {"hello","world","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry"}, {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry"}) , {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","date98765432170","cherry","date"}, {"apple","banana","date98765432170","cherry","date"}) , {"apple","banana","date98765432170","cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown"}, {"brown"}) , {"brown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","himnop","wxyz","hijklmnop","hijklmnop"}, {"HijKlMnOp","QrStUv","WxyZ"}) , {"HijKlMnOp","QrStUv","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","hello"}, {"hello","world","how","are","hello"}) , {"hello","world","how","are","hello"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}, {"ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}) , {"ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyhijklmnop","abcdefg","hijknlmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}) , {"wxyhijklmnop","abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5679","12345","56789","56789"}, {"5679","12345","56789","56789"}) , {"5679","12345","56789","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry"}, {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry"}) , {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit"}) , {"Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"sit","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"sit","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"sit","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"i","admin"}, {"how","are","yoU"}) , {"i","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","hohw","are","you"}, {"hello","world","hohw","are","you"}) , {"hello","world","hohw","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","consectetur","Lorem","elit"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","Lorem","elit"}) , {"Lorem","ipsum","dolor","sit","amet","consectetur","Lorem","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklnmnop","qrstuv","wxyz","qrstuv","abcdefg"}, {"WxyZHOW","AbCdEfG","HijKlMnOp","WxyZ"}) , {"WxyZHOW","AbCdEfG","HijKlMnOp","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry"}, {"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry"}) , {"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","date","cherry","cherry"}, {"","datqrstuve","banana","cherry","date","cherry","cherry"}) , {"","datqrstuve","banana","cherry","date","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"The","UuVvWwXxYZz","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"The","UuVvWwXxYZz","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5679","12345","56789","56789","12345","12345"}, {"5679","12345","56789","56789","12345","12345"}) , {"5679","12345","56789","56789","12345","12345"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","5678hello9","cherry","Lorem","date","Lorem","cherry"}, {"QrStUvWxyZ","5678hello9","cherry","Lorem","date","Lorem","cherry"}) , {"QrStUvWxyZ","5678hello9","cherry","Lorem","date","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"date98765432170","qrtstuv","hijklmnop","qrstuv","wxyz"}, {"date98765432170","qrtstuv","hijklmnop","qrstuv","wxyz"}) , {"date98765432170","qrtstuv","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"The","HijKlMnOp","HijKlMnOip","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"The","HijKlMnOp","HijKlMnOip","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789","56789","12345","12345","12345"}, {"12345","56789","56789","12345","12345","12345"}) , {"12345","56789","56789","12345","12345","12345"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","HELLO","WORLD","1elit0","YOU"}, {"LO","HELLO","WORLD","1elit0","YOU"}) , {"LO","HELLO","WORLD","1elit0","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","lazy","dog"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","Lorem","elit","elit"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv"}, {"z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv"}) , {"z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","hello","world"}, {"hello","world","how","are","hello","world"}) , {"hello","world","how","are","hello","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv"}, {"AadipiscingbCdEfG","HijKlMnOp","WxyZ"}) , {"abcdefg","hijklmnop","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","WxyZ","AadipiscingbCdEfG"}, {"HijKlMnOp","WxyZ","AadipiscingbCdEfG"}) , {"HijKlMnOp","WxyZ","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry","Lorem"}, {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry","Lorem"}) , {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","chherry","date","Lorem"}, {"","datqrstuve","banana","jumpste","chherry","date","Lorem"}) , {"","datqrstuve","banana","jumpste","chherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cherry","Lorem"}, {"","banana","cherry","Lorem"}) , {"","banana","cherry","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyhijklmnop","9876543210"}, {"wxyhijklmnop","9876543210"}) , {"wxyhijklmnop","9876543210"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU"}, {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU"}) , {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","consectetur","elit"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","elit"}) , {"Lorem","ipsum","dolor","sit","amet","consectetur","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","1elit0","cherry","date","1elit0"}, {"apple","1elit0","cherry","date","1elit0"}) , {"apple","1elit0","cherry","date","1elit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","LoremWxworldyZ","date","Lorem","datqrstuve","date"}, {"Loorem","","LoremWxworldyZ","date","Lorem","datqrstuve","date"}) , {"Loorem","","LoremWxworldyZ","date","Lorem","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry","datqrstuve"}, {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry","datqrstuve"}) , {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","cherry","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","consectetur","over","elit","amet"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","over","elit","amet"}) , {"Lorem","ipsum","dolor","sit","amet","consectetur","over","elit","amet"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","WxyZconsectetur","AadipiscingbCdEfG"}, {"HijKlMnOp","WxyZconsectetur","AadipiscingbCdEfG"}) , {"HijKlMnOp","WxyZconsectetur","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop"}, {"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop"}) , {"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","datqrstuve","LoremWxworldyZ","date","Lorem","date"}, {"Loorem","","datqrstuve","LoremWxworldyZ","date","Lorem","date"}) , {"Loorem","","datqrstuve","LoremWxworldyZ","date","Lorem","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datqrstuve","banana","cherry","Lorem","Lorem"}, {"datqrstuve","banana","cherry","Lorem","Lorem"}) , {"datqrstuve","banana","cherry","Lorem","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","adidolorg","cherry","Lorem"}, {"","banana","adidolorg","cherry","Lorem"}) , {"","banana","adidolorg","cherry","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","dolor","WxyZ","ZWxyZ","AadipiscingbCdEfG"}, {"HijKlMnOp","dolor","WxyZ","ZWxyZ","AadipiscingbCdEfG"}) , {"HijKlMnOp","dolor","WxyZ","ZWxyZ","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijknlmnop","qrstuv","AREwxyz","AREwxyz"}) , {"abcdefg","hijknlmnop","qrstuv","AREwxyz","AREwxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz"}, {"abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz"}) , {"abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brrown","brrrown","brown"}, {"brrown","brrrown","brown"}) , {"brrown","brrrown","brown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","hohw","are","you","hohw"}, {"hello","world","hohw","are","you","hohw"}) , {"hello","world","hohw","are","you","hohw"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","cherry","date","yoU","Lorem","cherry",""}, {"","datqrstuve","banana","jumpste","cherry","date","yoU","Lorem","cherry",""}) , {"","datqrstuve","banana","jumpste","cherry","date","yoU","Lorem","cherry",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","thee","cherry","Lorem","date","Lorem"}, {"","thee","cherry","Lorem","date","Lorem"}) , {"","thee","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you"}, {"HELLO","the","WORLD","AERE","YOU"}) , {"hello","world","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}) , {"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"nAadipiscingbCdEfG"}, {"nAadipiscingbCdEfG"}) , {"nAadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","ddate","datqrstuve","LoremWxworldyZ","date","Lorem","date"}, {"Loorem","","ddate","datqrstuve","LoremWxworldyZ","date","Lorem","date"}) , {"Loorem","","ddate","datqrstuve","LoremWxworldyZ","date","Lorem","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","WxydolorZ","QrStUv","WxyZ","AbCdEfG"}, {"abcdefg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"98765432170","AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}) , {"98765432170","AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv","hijknlmnop"}, {"z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv","hijknlmnop"}) , {"z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv","hijknlmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin","admin"}, {"are","yoU"}) , {"are","yoU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","brown","fox","jumps","over","the","lazy","dog"}, {"The","brown","fox","jumps","over","the","lazy","dog"}) , {"The","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","cherry","date","1elite0","1elit0"}, {"apple","cherry","date","1elite0","1elit0"}) , {"apple","cherry","date","1elite0","1elit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxoverz","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxoverz","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxoverz","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datqrstuve","brown","cherry","Lorem","Lorem"}, {"datqrstuve","brown","cherry","Lorem","Lorem"}) , {"datqrstuve","brown","cherry","Lorem","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyhijklmnop","AadipiscingbCdEfG"}, {"wxyhijklmnop","AadipiscingbCdEfG"}) , {"wxyhijklmnop","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"how","are","yoU"}, {"1elit0i","adm1elHELLHOit0in","i","admin"}) , {"how","are","yoU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv"}, {"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv"}) , {"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyZ","hello","AadipiscingbCdEfG"}, {"WxyZ","hello","AadipiscingbCdEfG"}) , {"WxyZ","hello","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMOip","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","WxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"The","UuVvWwXxYZz","HijKlMOip","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","WxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"The","UuVvWwXxYZz","HijKlMOip","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","WxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyhijklmnop","abcdefg","hijknlmnop","qrstuv","wxyz","wxyhijklmnop"}, {"wxyhijklmnop","abcdefg","hijknlmnop","qrstuv","wxyz","wxyhijklmnop"}) , {"wxyhijklmnop","abcdefg","hijknlmnop","qrstuv","wxyz","wxyhijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyZ","hello","AadipiscingbCdEfG","hello"}, {"WxyZ","hello","AadipiscingbCdEfG","hello"}) , {"WxyZ","hello","AadipiscingbCdEfG","hello"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","QrStUvWxyZ","1234567890"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","QrStUvWxyZ","1234567890"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","QrStUvWxyZ","1234567890"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elHELLHOit0","world","hohw","are","you"}, {"1elHELLHOit0","world","hohw","are","you"}) , {"1elHELLHOit0","world","hohw","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","brown"}, {"brown","brown"}) , {"brown","brown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrstuvwxy","9876543210","98765432170"}, {"qrstuvwxy","9876543210","98765432170"}) , {"qrstuvwxy","9876543210","98765432170"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"i","HijKlMnOp","WxyZ","AadipiscingbCdEfG"}, {"i","HijKlMnOp","WxyZ","AadipiscingbCdEfG"}) , {"i","HijKlMnOp","WxyZ","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AadipiscingbCdEfG","HijKlMnOp","WxyZ"}, {"AadipiscingbCdEfG","HijKlMnOp","WxyZ"}) , {"AadipiscingbCdEfG","HijKlMnOp","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"",""}, {"",""}) , {"",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","apple","hohw","are","you"}, {"hello","apple","hohw","are","you"}) , {"hello","apple","hohw","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","ThQrStUvWHijKlMnOpxyZ","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","The"}, {"The","UuVvWwXxYZz","ThQrStUvWHijKlMnOpxyZ","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","The"}) , {"The","UuVvWwXxYZz","ThQrStUvWHijKlMnOpxyZ","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","The"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin","admin"}, {"hi","admin","admin"}) , {"hi","admin","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","","qrstuv","wxyz"}, {"AbCdEffG","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AadipiscingbCdEfG","WxyxZ"}, {"AadipiscingbCdEfG","WxyxZ"}) , {"AadipiscingbCdEfG","WxyxZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","HELLO","1elHELLHOit0","WORLD","1elit0","Y1elHELLHOit0OU"}, {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","Y1elHELLHOit0OU"}) , {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","Y1elHELLHOit0OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","ipsum","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","ipsum","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","ipsum","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"agbcdefg","hijklmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"agbcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","","rqrstuv","wxyz"}, {"abcdefg","","rqrstuv","wxyz"}) , {"abcdefg","","rqrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","date",""}, {"hi","date",""}) , {"hi","date",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","Thedate","cherry","cherry","cherry"}, {"","datqrstuve","banana","cherry","Lorem","Thedate","cherry","cherry","cherry"}) , {"","datqrstuve","banana","cherry","Lorem","Thedate","cherry","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elHELLHOit0","world","hohw","arecherhry","are","you"}, {"1elHELLHOit0","world","hohw","arecherhry","are","you"}) , {"1elHELLHOit0","world","hohw","arecherhry","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hijklmnop","qrsworldtuv","qrsworldtuv"}, {"hijklmnop","qrsworldtuv","qrsworldtuv"}) , {"hijklmnop","qrsworldtuv","qrsworldtuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"admin","z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv"}, {"admin","z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv"}) , {"admin","z","abcdefg","hijknlmnop","qrstuv","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop","hijklmnop"}, {"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop","hijklmnop"}) , {"abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Ip","56789"}, {"9876543210"}) , {"Ip","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","HELLO","1elHELLHOit0","WORLD","Y1elHELLHOit0OU"}, {"LO","HELLO","1elHELLHOit0","WORLD","Y1elHELLHOit0OU"}) , {"LO","HELLO","1elHELLHOit0","WORLD","Y1elHELLHOit0OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"jumpste"}, {"jumpste"}) , {"jumpste"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklnmnop","qrstuv","wxyz","qrstuv","abcdefg"}, {"WxyZHOW","AbCdEfG","HijKplMnOp","HijKlMnOp","WxyZ"}) , {"WxyZHOW","AbCdEfG","HijKplMnOp","HijKlMnOp","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"date98765432170","tqrtstuv","dolor","qrtstuv","hijklmnop","qrstuv","wxyz"}, {"date98765432170","tqrtstuv","dolor","qrtstuv","hijklmnop","qrstuv","wxyz"}) , {"date98765432170","tqrtstuv","dolor","qrtstuv","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cherry","Lorem","date","ddate","Lorem"}, {"","banana","cherry","Lorem","date","ddate","Lorem"}) , {"","banana","cherry","Lorem","date","ddate","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789"}, {"9876543210","9876543210"}) , {"12345","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","you"}, {"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","you"}) , {"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","Appple","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","Appple","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","Appple","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cherry","date"}, {"Banana","Cherry","Date"}) , {"Banana","Cherry","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"heollo","world","HELLO","are","you"}, {"heollo","world","HELLO","are","you"}) , {"heollo","world","HELLO","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","chherry","date","Lorem"}, {"","datqrstuve","banana","chherry","date","Lorem"}) , {"","datqrstuve","banana","chherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherryarecherhry","date","cherry"}, {"","datqrstuve","banana","cherryarecherhry","date","cherry"}) , {"","datqrstuve","banana","cherryarecherhry","date","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU","1elit0"}, {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU","1elit0"}) , {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU","1elit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","brown","fox","lazipsumy","jumps","over","the","lazy","dog"}, {"The","brown","fox","lazipsumy","jumps","over","the","lazy","dog"}) , {"The","brown","fox","lazipsumy","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyxZ"}, {"WxyxZ"}) , {"WxyxZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","cherry","yoU","Lorem","cherry","","date"}, {"","datqrstuve","banana","jumpste","cherry","yoU","Lorem","cherry","","date"}) , {"","datqrstuve","banana","jumpste","cherry","yoU","Lorem","cherry","","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"dolor","WxyZ","ZWxyZ"}, {"dolor","WxyZ","ZWxyZ"}) , {"dolor","WxyZ","ZWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz","UuVvWwXxYyZz"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz","UuVvWwXxYyZz"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"h","admin"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLHO","5678hello9"}, {"HELLHO","5678hello9"}) , {"HELLHO","5678hello9"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry"}, {"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry"}) , {"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datqrstuve","wxyhijklmnop","cherry","Lorem","Lorem","wxyhijklmnop"}, {"datqrstuve","wxyhijklmnop","cherry","Lorem","Lorem","wxyhijklmnop"}) , {"datqrstuve","wxyhijklmnop","cherry","Lorem","Lorem","wxyhijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","ddate","datqrstuve","LoremWxworldyZ","date","Lorem","date"}, {"","ddate","datqrstuve","LoremWxworldyZ","date","Lorem","date"}) , {"","ddate","datqrstuve","LoremWxworldyZ","date","Lorem","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKlMnOp","HijKlMnOp"}, {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKlMnOp","HijKlMnOp"}) , {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","are","you"}, {"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","are","you"}) , {"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrsY1elHELLHOit0OUv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}) , {"AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","Appple"}, {"hi","Appple"}) , {"hi","Appple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Appple"}, {"Appple"}) , {"Appple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datqrstuve","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}, {"datqrstuve","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}) , {"datqrstuve","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"HijKlMnOp","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","hi","cherry","date","yoU","Lorem","cherry","",""}, {"","datqrstuve","banana","hi","cherry","date","yoU","Lorem","cherry","",""}) , {"","datqrstuve","banana","hi","cherry","date","yoU","Lorem","cherry","",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you","adidolorghow"}, {"hello","world","how","are","you","adidolorghow"}) , {"hello","world","how","are","you","adidolorghow"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AadipiscingbChellofG"}, {"AadipiscingbChellofG"}) , {"AadipiscingbChellofG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","LoremWxworldyZ","date","datqrstuve","date"}, {"Loorem","","LoremWxworldyZ","date","datqrstuve","date"}) , {"Loorem","","LoremWxworldyZ","date","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyhijklmnop","AadipiscingbCdEcherhryfG"}, {"wxyhijklmnop","AadipiscingbCdEcherhryfG"}) , {"wxyhijklmnop","AadipiscingbCdEcherhryfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","L","LoremWxworldyZ","date","datqrstuve","date"}, {"Loorem","","L","LoremWxworldyZ","date","datqrstuve","date"}) , {"Loorem","","L","LoremWxworldyZ","date","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170HijKlMnOp"}, {"98765432170HijKlMnOp"}) , {"98765432170HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","AbbCdEfG","WxyZ"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","cherry","brown","fox","jumps","over","the","lazy","dog","The"}, {"The","cherry","brown","fox","jumps","over","the","lazy","dog","The"}) , {"The","cherry","brown","fox","jumps","over","the","lazy","dog","The"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","ThQrStUvWHijKlMnOpxyZ","LoremWxworldyZ","date","Lorem","datqrstuve","date"}, {"Loorem","ThQrStUvWHijKlMnOpxyZ","LoremWxworldyZ","date","Lorem","datqrstuve","date"}) , {"Loorem","ThQrStUvWHijKlMnOpxyZ","LoremWxworldyZ","date","Lorem","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","chehrry","banana","cherry","Lorem","date","cherry","cherry"}, {"","datqrstuve","chehrry","banana","cherry","Lorem","date","cherry","cherry"}) , {"","datqrstuve","chehrry","banana","cherry","Lorem","date","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrAppleStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG","QrWStUvWxyZ","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","1234567890"}, {"QrAppleStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG","QrWStUvWxyZ","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","1234567890"}) , {"QrAppleStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG","QrWStUvWxyZ","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","1234567890"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","LoremWxworldyZ","date","Lorem","datqrstuve","datcherryarecherhrye"}, {"Loorem","","LoremWxworldyZ","date","Lorem","datqrstuve","datcherryarecherhrye"}) , {"Loorem","","LoremWxworldyZ","date","Lorem","datqrstuve","datcherryarecherhrye"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"worold","hello","world","how","are","you"}, {"HELLO","the","WORLD","AERE","YOU"}) , {"HELLO","the","WORLD","AERE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyZ","hello","AadipiscingbCdEfG","hello","hello"}, {"WxyZ","hello","AadipiscingbCdEfG","hello","hello"}) , {"WxyZ","hello","AadipiscingbCdEfG","hello","hello"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnp","WxworldyZ"}, {"HijKlMnp","WxworldyZ"}) , {"HijKlMnp","WxworldyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUv9876543210WxyZ","banana","cherry","Lorem","date","Lorem"}, {"QrStUv9876543210WxyZ","banana","cherry","Lorem","date","Lorem"}) , {"QrStUv9876543210WxyZ","banana","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","Lorem"}, {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","Lorem"}) , {"","datqrstuve","banana","cherry","Lorem","date","cherry","cherry","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"heollo","worlod","world","HELLO","are","you"}, {"heollo","worlod","world","HELLO","are","you"}) , {"heollo","worlod","world","HELLO","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstuv","wxyz"}, {"abcdefg","qrstuv","wxyz"}) , {"abcdefg","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","ThQrStUvWHijKlMnOpxyZ","qrsworldtuv"}, {"abcdefg","hijklmnop","ThQrStUvWHijKlMnOpxyZ","qrsworldtuv"}) , {"abcdefg","hijklmnop","ThQrStUvWHijKlMnOpxyZ","qrsworldtuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYZz","UuVvWwXxYyZz"}, {"The","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYZz","UuVvWwXxYyZz"}) , {"The","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYZz","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","cherry","brown","fox","over","tThedate","lazy","dog"}, {"The","cherry","brown","fox","over","tThedate","lazy","dog"}) , {"The","cherry","brown","fox","over","tThedate","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz"}, {"abcdefg","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz"}) , {"abcdefg","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCcherrydEfG","QrStUv","WxworldyZ","wxyz","HijKlMnOp","HijKl","HijKlMnOp"}, {"AbCcherrydEfG","QrStUv","WxworldyZ","wxyz","HijKlMnOp","HijKl","HijKlMnOp"}) , {"AbCcherrydEfG","QrStUv","WxworldyZ","wxyz","HijKlMnOp","HijKl","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMOip","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"HijKlMOip","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"HijKlMOip","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5679","12345","56789","56789","12345","12345","56789"}, {"5679","12345","56789","56789","12345","12345","56789"}) , {"5679","12345","56789","56789","12345","12345","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp"}, {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp"}) , {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOip","UqrstuvuVvWwXxYyZz","QrStUvWxyZ","UuVvWwXxYZz","UuVvWwXxYyZz"}, {"The","HijKlMnOip","UqrstuvuVvWwXxYyZz","QrStUvWxyZ","UuVvWwXxYZz","UuVvWwXxYyZz"}) , {"The","HijKlMnOip","UqrstuvuVvWwXxYyZz","QrStUvWxyZ","UuVvWwXxYZz","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","cherHijKlry","5678hello9","cherry","Lorem","date","Lorem","cherry"}, {"QrStUvWxyZ","cherHijKlry","5678hello9","cherry","Lorem","date","Lorem","cherry"}) , {"QrStUvWxyZ","cherHijKlry","5678hello9","cherry","Lorem","date","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","are"}, {"HELLO","WORLD","AERE","YOU"}) , {"hello","world","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp","QrStUvWxyZ"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp","QrStUvWxyZ"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"date98765432170","qrtstuv","hijklmnop","qrstuv","hijklmop","wxyz"}, {"date98765432170","qrtstuv","hijklmnop","qrstuv","hijklmop","wxyz"}) , {"date98765432170","qrtstuv","hijklmnop","qrstuv","hijklmop","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","chherry","date","h"}, {"","datqrstuve","banana","chherry","date","h"}) , {"","datqrstuve","banana","chherry","date","h"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","brown","fox","lazipsumy","jumps","the","lazy","dog"}, {"The","brown","fox","lazipsumy","jumps","the","lazy","dog"}) , {"The","brown","fox","lazipsumy","jumps","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKKlMnOp","HijKlMnOp"}, {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKKlMnOp","HijKlMnOp"}) , {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKKlMnOp","HijKlMnOp","foxQrStUv","HijKlMnOp"}, {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKKlMnOp","HijKlMnOp","foxQrStUv","HijKlMnOp"}) , {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKKlMnOp","HijKlMnOp","foxQrStUv","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrtstuv","datqrstuve","banana","cherry","date","cherhry","Lorem"}, {"qrtstuv","datqrstuve","banana","cherry","date","cherhry","Lorem"}) , {"qrtstuv","datqrstuve","banana","cherry","date","cherhry","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz","hijklmnop"}, {"abcdefg","wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz","hijklmnop"}) , {"abcdefg","wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hHELLHOijklmnop","abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop","hijklmnop"}, {"hHELLHOijklmnop","abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop","hijklmnop"}) , {"hHELLHOijklmnop","abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUv","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","QrStUv","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","QrStUv","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijkHijKlMnOpnlmnop","qrstuv","5678hello9","qrstuv"}, {"abcdefg","hijkHijKlMnOpnlmnop","qrstuv","5678hello9","qrstuv"}) , {"abcdefg","hijkHijKlMnOpnlmnop","qrstuv","5678hello9","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","date","cherryyou","cherry","cherry","cherry","datqrstuve"}, {"","datqrstuve","banana","cherry","Lorem","date","cherryyou","cherry","cherry","cherry","datqrstuve"}) , {"","datqrstuve","banana","cherry","Lorem","date","cherryyou","cherry","cherry","cherry","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elit0","wxyhijklmnop","987650","wxyhijklmnop"}, {"1elit0","wxyhijklmnop","987650","wxyhijklmnop"}) , {"1elit0","wxyhijklmnop","987650","wxyhijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZzz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxovrz","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxovrz"}, {"The","UuVvWwXxYZzz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxovrz","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxovrz"}) , {"The","UuVvWwXxYZzz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxovrz","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxovrz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","cherHijKlry","5678hello9","chehrry","Lorem","date","Lorem","cherry","Lorem","date"}, {"QrStUvWxyZ","cherHijKlry","5678hello9","chehrry","Lorem","date","Lorem","cherry","Lorem","date"}) , {"QrStUvWxyZ","cherHijKlry","5678hello9","chehrry","Lorem","date","Lorem","cherry","Lorem","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"worwld","hello","world"}, {"worwld","hello","world"}) , {"worwld","hello","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"how","quick","are","hothe","yoU"}, {"how","quick","are","hothe","yoU"}) , {"how","quick","are","hothe","yoU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"aworoldbcdefg","hijklmnop","qrstuv"}, {"AadipiscingbCdEfG","HijKlMnOp","WxyZ"}) , {"aworoldbcdefg","hijklmnop","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","The","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"HELLO","The","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"HELLO","The","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz","hijklmnop","hijklmnop"}, {"wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz","hijklmnop","hijklmnop"}) , {"wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hijklmnop","hijklmnop","wxyz","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hotehe","hijklmnop","hijklmnop","hijklmnoYOU","wxyz","hijklmnop","hijklmnop"}, {"wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hotehe","hijklmnop","hijklmnop","hijklmnoYOU","wxyz","hijklmnop","hijklmnop"}) , {"wxyconsecteturz","hijklmnop","qrstuv","i","wxyz","hotehe","hijklmnop","hijklmnop","hijklmnoYOU","wxyz","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cheerry","cherry","Lorem","date","ddate","Lorem"}, {"","banana","cheerry","cherry","Lorem","date","ddate","Lorem"}) , {"","banana","cheerry","cherry","Lorem","date","ddate","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5678hello9","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","UuVvWwXxYyZz"}, {"5678hello9","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","UuVvWwXxYyZz"}) , {"5678hello9","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LoorecherHijKlrym","","datqrstuve","LoremWxworldyZ","date","Lorem","date"}, {"LoorecherHijKlrym","","datqrstuve","LoremWxworldyZ","date","Lorem","date"}) , {"LoorecherHijKlrym","","datqrstuve","LoremWxworldyZ","date","Lorem","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","HijKl","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxoverz","1elit0the","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","HijKl","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxoverz","1elit0the","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","HijKl","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxoverz","1elit0the","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Appplle","hi","Appple"}, {"Appplle","hi","Appple"}) , {"Appplle","hi","Appple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","1234567890","1234567890"}, {"HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","1234567890","1234567890"}) , {"HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","1234567890","1234567890"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datte","","banana","cherry","Lorem","date","Lorem"}, {"datte","","banana","cherry","Lorem","date","Lorem"}) , {"datte","","banana","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"hi"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","abcdefgg","Lorem"}, {"abcdefg","hijklmnop","abcdefgg","Lorem"}) , {"abcdefg","hijklmnop","abcdefgg","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brrown","brrrown","datebrrrown","brown"}, {"brrown","brrrown","datebrrrown","brown"}) , {"brrown","brrrown","datebrrrown","brown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","1elit0","YOU"}, {"HELLO","1elit0","YOU"}) , {"HELLO","1elit0","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world"}, {"hello","world"}) , {"hello","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789","12345","56789"}, {"12345","56789","12345","56789"}) , {"12345","56789","12345","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","jumpste","chherry","date","Lorem"}, {"","datqrstuve","jumpste","chherry","date","Lorem"}) , {"","datqrstuve","jumpste","chherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","jumpste","YOU","chherry","date","Lorem"}, {"","datqrstuve","jumpste","YOU","chherry","date","Lorem"}) , {"","datqrstuve","jumpste","YOU","chherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","date","cherry","cherry","date"}, {"","datqrstuve","banana","cherry","date","cherry","cherry","date"}) , {"","datqrstuve","banana","cherry","date","cherry","cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijknlmnop","hijknlmnop","wxyz"}, {"abcdefg","hijknlmnop","hijknlmnop","wxyz"}) , {"abcdefg","hijknlmnop","hijknlmnop","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Appplehow","how","quick","are","yoU"}, {"Appplehow","how","quick","are","yoU"}) , {"Appplehow","how","quick","are","yoU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brrown","brQrAppleStUvWxyZown","brrrown","brown"}, {"brrown","brQrAppleStUvWxyZown","brrrown","brown"}) , {"brrown","brQrAppleStUvWxyZown","brrrown","brown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","ddate","datqrstuve","LoremWxworldyZ","Lorem","date","Loorem"}, {"Loorem","","ddate","datqrstuve","LoremWxworldyZ","Lorem","date","Loorem"}) , {"Loorem","","ddate","datqrstuve","LoremWxworldyZ","Lorem","date","Loorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","brrown","ipsum","dolor","sit","amet","consectetur","over","elit","amet","ipsum"}, {"Lorem","brrown","ipsum","dolor","sit","amet","consectetur","over","elit","amet","ipsum"}) , {"Lorem","brrown","ipsum","dolor","sit","amet","consectetur","over","elit","amet","ipsum"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","TThe","qudate98765432170","UuVvWwXxYyZz","QadidolorghowWxyZ","HijKlMnOp","QrStUvWxyZ"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","TThe","qudate98765432170","UuVvWwXxYyZz","QadidolorghowWxyZ","HijKlMnOp","QrStUvWxyZ"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","TThe","qudate98765432170","UuVvWwXxYyZz","QadidolorghowWxyZ","HijKlMnOp","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklnmnop","qrstuv","wxyz","qrstuDatev","abcdefg"}, {"abcdefg","hijklnmnop","qrstuv","wxyz","qrstuDatev","abcdefg"}) , {"abcdefg","hijklnmnop","qrstuv","wxyz","qrstuDatev","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}, {"","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}) , {"","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","hi","cherry","date","yoU","Lorem","cherry","","","yoU"}, {"","datqrstuve","banana","hi","cherry","date","yoU","Lorem","cherry","","","yoU"}) , {"","datqrstuve","banana","hi","cherry","date","yoU","Lorem","cherry","","","yoU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","jumpste","cherry","date","jue","Lorem","cherry"}, {"","banana","jumpste","cherry","date","jue","Lorem","cherry"}) , {"","banana","jumpste","cherry","date","jue","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","fox","lazipsumy","jumps","the","lazy","dog"}, {"brown","fox","lazipsumy","jumps","the","lazy","dog"}) , {"brown","fox","lazipsumy","jumps","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKlMnOp","HijKlMnOp","HijKlMnOp"}, {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKlMnOp","HijKlMnOp","HijKlMnOp"}) , {"AbCcherrydEfG","QrStUv","WxworldyZ","HijKlMnOp","HijKlMnOp","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"nAadipiscingbCdEfG","HijKlMnp"}, {"nAadipiscingbCdEfG","HijKlMnp"}) , {"nAadipiscingbCdEfG","HijKlMnp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"AbCdEfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}) , {"AbCdEfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry",""}, {"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry",""}) , {"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elHELLHarecherhryOit0","world","hohw","are","you","are"}, {"1elHELLHarecherhryOit0","world","hohw","are","you","are"}) , {"1elHELLHarecherhryOit0","world","hohw","are","you","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOip","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"AbCdEfG","HijKlMnOip","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"AbCdEfG","HijKlMnOip","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","hellHijKlMnOipo","world","hohw","are","you","hohw"}, {"hello","hellHijKlMnOipo","world","hohw","are","you","hohw"}) , {"hello","hellHijKlMnOipo","world","hohw","are","you","hohw"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","dartqrtuve","banana","cherry","date","cherhry","Lorem","cherry"}, {"","dartqrtuve","banana","cherry","date","cherhry","Lorem","cherry"}) , {"","dartqrtuve","banana","cherry","date","cherhry","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5678hello9"}, {"5678hello9"}) , {"5678hello9"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ipsum","am","dolor","sit","amet","consectetur","adipiscing","elit","adipiscing","sit"}, {"ipsum","am","dolor","sit","amet","consectetur","adipiscing","elit","adipiscing","sit"}) , {"ipsum","am","dolor","sit","amet","consectetur","adipiscing","elit","adipiscing","sit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","worwld","how","are","you","adidolorhow","you"}, {"hello","worwld","how","are","you","adidolorhow","you"}) , {"hello","worwld","how","are","you","adidolorhow","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datqrstuve","wxyhijklmnop","AREwxyz","Lorem","wxyhijklmnop"}, {"datqrstuve","wxyhijklmnop","AREwxyz","Lorem","wxyhijklmnop"}) , {"datqrstuve","wxyhijklmnop","AREwxyz","Lorem","wxyhijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrSUtUv","WxyZ","AbCdEfG"}, {"AbCdEfG","HijKlMnOp","QrSUtUv","WxyZ","AbCdEfG"}) , {"AbCdEfG","HijKlMnOp","QrSUtUv","WxyZ","AbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"worold","hello","world","how","are","you"}, {"worold","hello","world","how","are","you"}) , {"worold","hello","world","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cherry","date"}, {"","banana","cherry","date"}) , {"","banana","cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5678hello9","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","UuVvWwXxYyZz","UuVvWwXxYyZz"}, {"5678hello9","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","UuVvWwXxYyZz","UuVvWwXxYyZz"}) , {"5678hello9","The","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","UuVvWwXxYyZz","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"date98765432170","tqrtstuv","dolor","qrtstuv","qrtstutv","qrstuvv","hijklmnop","qrstuv","wxyz"}, {"date98765432170","tqrtstuv","dolor","qrtstuv","qrtstutv","qrstuvv","hijklmnop","qrstuv","wxyz"}) , {"date98765432170","tqrtstuv","dolor","qrtstuv","qrtstutv","qrstuvv","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"heeollo","world","HELLO","are","you"}, {"heeollo","world","HELLO","are","you"}) , {"heeollo","world","HELLO","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstuuv","qrstuv","wxyz"}, {"abcdefg","qrstuuv","qrstuv","wxyz"}) , {"abcdefg","qrstuuv","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","qrstuv"}, {"AadipiscingbCdEfG","HijKlMnOp","WxyZ"}) , {"abcdefg","hijklmnop","qrstuv","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","date98765432170","date"}, {"apple","banana","date98765432170","date"}) , {"apple","banana","date98765432170","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brrown","brrrown","datebrrrown","brown","datebrrrown"}, {"brrown","brrrown","datebrrrown","brown","datebrrrown"}) , {"brrown","brrrown","datebrrrown","brown","datebrrrown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","you","how","you"}, {"hello","world","how","you","how","you"}) , {"hello","world","how","you","how","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyZ","hello","AadipiscingbCdEfG","hello","WxyZ"}, {"WxyZ","hello","AadipiscingbCdEfG","hello","WxyZ"}) , {"WxyZ","hello","AadipiscingbCdEfG","hello","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","am","banana","hi","cherry","date","yoU","cherry","","ARE"}, {"","datqrstuve","am","banana","hi","cherry","date","yoU","cherry","","ARE"}) , {"","datqrstuve","am","banana","hi","cherry","date","yoU","cherry","","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","date","date"}, {"","banana","date","date"}) , {"","banana","date","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hbrrrownijklmnop","qrsworldtuv","qrsworldtuv"}, {"hbrrrownijklmnop","qrsworldtuv","qrsworldtuv"}) , {"hbrrrownijklmnop","qrsworldtuv","qrsworldtuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cherry","date","banana"}, {"apple","banana","cherry","date","banana"}) , {"apple","banana","cherry","date","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"aAadipiscingbCdEfGdipiscing","abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmn"}, {"aAadipiscingbCdEfGdipiscing","abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmn"}) , {"aAadipiscingbCdEfGdipiscing","abcdefg","hijklmnop","qrsworldtuv","qrsworldtuv","hijklmn"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hothe","hijknlmnop","qrstuv","hijknlmnop"}, {"hothe","hijknlmnop","qrstuv","hijknlmnop"}) , {"hothe","hijknlmnop","qrstuv","hijknlmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fox","qrstuv","UuVvWwXxYyZz","wxyz"}, {"fox","qrstuv","UuVvWwXxYyZz","wxyz"}) , {"fox","qrstuv","UuVvWwXxYyZz","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","1elit0the","","LoremWxworldyZ","date","Lorem","datqrstuve","date"}, {"Loorem","1elit0the","","LoremWxworldyZ","date","Lorem","datqrstuve","date"}) , {"Loorem","1elit0the","","LoremWxworldyZ","date","Lorem","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","you","1elHWxydolorZELLHOit0"}, {"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","you","1elHWxydolorZELLHOit0"}) , {"1elHELLHOit0","world","hohw","1elHWxydolorZELLHOit0","are","you","1elHWxydolorZELLHOit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5679","12345","56789","56789","12345","12345","12345","56789"}, {"5679","12345","56789","56789","12345","12345","12345","56789"}) , {"5679","12345","56789","56789","12345","12345","12345","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry","cherr"}, {"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry","cherr"}) , {"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry","cherr"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp"}, {"abcdefg","hijknlmnop","qrstuv","5678hello9"}) , {"abcdefg","hijknlmnop","qrstuv","5678hello9"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","TThe","qudate98765432170","UuVvWwXxYyZz","TTThehe","QadidolorghowWxyZ","HijKlMnOp","QrStUvWxyZ","HijKlMnOip"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","TThe","qudate98765432170","UuVvWwXxYyZz","TTThehe","QadidolorghowWxyZ","HijKlMnOp","QrStUvWxyZ","HijKlMnOip"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","TThe","qudate98765432170","UuVvWwXxYyZz","TTThehe","QadidolorghowWxyZ","HijKlMnOp","QrStUvWxyZ","HijKlMnOip"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMMnOp","Q","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"HijKlMMnOp","Q","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"HijKlMMnOp","Q","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","qrstuv","wxyz"}) , {"abcdefg","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"rqrsuv","abcdefg","","rqrstuv","wxyz",""}, {"rqrsuv","abcdefg","","rqrstuv","wxyz",""}) , {"rqrsuv","abcdefg","","rqrstuv","wxyz",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","1elHELLHOit0","WORLD","Y1elHELLHOit0OU"}, {"LO","1elHELLHOit0","WORLD","Y1elHELLHOit0OU"}) , {"LO","1elHELLHOit0","WORLD","Y1elHELLHOit0OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","HELLO","are","you","how"}, {"hello","world","HELLO","are","you","how"}) , {"hello","world","HELLO","are","you","how"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve","date"}, {"","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve","date"}) , {"","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","lazy","dog"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","Lorem","elit","Lorem"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"bananhijkHijKlMnOpnlmnop","","banana","cherry","Lorem","date","Lorem"}, {"bananhijkHijKlMnOpnlmnop","","banana","cherry","Lorem","date","Lorem"}) , {"bananhijkHijKlMnOpnlmnop","","banana","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"arecherhryHijKlMnp","nAadipiscingbCdEfG","HijKlMnp"}, {"arecherhryHijKlMnp","nAadipiscingbCdEfG","HijKlMnp"}) , {"arecherhryHijKlMnp","nAadipiscingbCdEfG","HijKlMnp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","wxyconsecteturz","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","wxyconsecteturz","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","wxyconsecteturz","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cMrzFFoMlp","","banana","cherry","Lorem","cherry"}, {"cMrzFFoMlp","","banana","cherry","Lorem","cherry"}) , {"cMrzFFoMlp","","banana","cherry","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnlOp","AdbCdEfG","HijKlMnOp","QrStUv","HijKlMnOp","HijKlMnlOp"}, {"HijKlMnlOp","AdbCdEfG","HijKlMnOp","QrStUv","HijKlMnOp","HijKlMnlOp"}) , {"HijKlMnlOp","AdbCdEfG","HijKlMnOp","QrStUv","HijKlMnOp","HijKlMnlOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"The","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"The","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5679","12345","56789","56789","12345","12345","12345","56789","12345"}, {"5679","12345","56789","56789","12345","12345","12345","56789","12345"}) , {"5679","12345","56789","56789","12345","12345","12345","56789","12345"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qdogrstuv","abcdefg","qrstuv","5678hello9","qrstuv","qrstuv","qdogrstuv"}, {"qdogrstuv","abcdefg","qrstuv","5678hello9","qrstuv","qrstuv","qdogrstuv"}) , {"qdogrstuv","abcdefg","qrstuv","5678hello9","qrstuv","qrstuv","qdogrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cherryarecherhry","QrStUv9876543210WxyZ","banana","cherry","Lorem","date","Lorem"}, {"cherryarecherhry","QrStUv9876543210WxyZ","banana","cherry","Lorem","date","Lorem"}) , {"cherryarecherhry","QrStUv9876543210WxyZ","banana","cherry","Lorem","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp","QrStUvWxyZ"}, {"The","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp","QrStUvWxyZ"}) , {"The","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","","datqrstuve","LoremWxworldyZ","AREwxyz","Lorem","date"}, {"Loorem","","datqrstuve","LoremWxworldyZ","AREwxyz","Lorem","date"}) , {"Loorem","","datqrstuve","LoremWxworldyZ","AREwxyz","Lorem","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elHELLHarecherhryOit0","world","hohw","you","are"}, {"1elHELLHarecherhryOit0","world","hohw","you","are"}) , {"1elHELLHarecherhryOit0","world","hohw","you","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","698765432170"}, {"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","698765432170"}) , {"98765432170","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","698765432170"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","thee","cherry","Lorem","date","Lodogrem"}, {"","thee","cherry","Lorem","date","Lodogrem"}) , {"","thee","cherry","Lorem","date","Lodogrem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hothe","hello","AadipiscingbCdEfG","hellobrownThe","hello"}, {"hothe","hello","AadipiscingbCdEfG","hellobrownThe","hello"}) , {"hothe","hello","AadipiscingbCdEfG","hellobrownThe","hello"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cheyrry","cherry","date","banana"}, {"apple","banana","cheyrry","cherry","date","banana"}) , {"apple","banana","cheyrry","cherry","date","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","consectetur","elit","ipsum"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","elit","ipsum"}) , {"Lorem","ipsum","dolor","sit","amet","consectetur","elit","ipsum"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","jumpste","cherry","date","Lorem","cherry",""}, {"","banana","jumpste","cherry","date","Lorem","cherry",""}) , {"","banana","jumpste","cherry","date","Lorem","cherry",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","am","banana","hi","cherry","yoU","cherry","","AARE"}, {"","datqrstuve","am","banana","hi","cherry","yoU","cherry","","AARE"}) , {"","datqrstuve","am","banana","hi","cherry","yoU","cherry","","AARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"sit","HijKlMnOp","QrStUvWxyZ","UuVvWwXxYyZz"}, {"sit","HijKlMnOp","QrStUvWxyZ","UuVvWwXxYyZz"}) , {"sit","HijKlMnOp","QrStUvWxyZ","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","cherry","date","Lorem","Lorem","datqrstuve"}, {"","datqrstuve","banana","jumpste","cherry","date","Lorem","Lorem","datqrstuve"}) , {"","datqrstuve","banana","jumpste","cherry","date","Lorem","Lorem","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ddatqrstuve","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}, {"ddatqrstuve","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}) , {"ddatqrstuve","cherry","LoremWxworyouldyZ","date","Lorem","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brrown","brrrown","datebrrrnown","qdogrstuv","brown","datebrrrnown"}, {"brrown","brrrown","datebrrrnown","qdogrstuv","brown","datebrrrnown"}) , {"brrown","brrrown","datebrrrnown","qdogrstuv","brown","datebrrrnown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","ThQrStUvWHijKlMnOpxyZ","LoremWxworldyZ","date","Lorem","rbe","Lm","datqrstuve","date"}, {"Loorem","ThQrStUvWHijKlMnOpxyZ","LoremWxworldyZ","date","Lorem","rbe","Lm","datqrstuve","date"}) , {"Loorem","ThQrStUvWHijKlMnOpxyZ","LoremWxworldyZ","date","Lorem","rbe","Lm","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"i","WxyZ","AadipiscingbCdEfG"}, {"i","WxyZ","AadipiscingbCdEfG"}) , {"i","WxyZ","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cyherry","Lorem","Thedate","cherry","cherry","cherry"}, {"","datqrstuve","banana","cyherry","Lorem","Thedate","cherry","cherry","cherry"}) , {"","datqrstuve","banana","cyherry","Lorem","Thedate","cherry","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cheerry","cherry","Lorem","Apple","date","ddate","Lorem","banana"}, {"","banana","cheerry","cherry","Lorem","Apple","date","ddate","Lorem","banana"}) , {"","banana","cheerry","cherry","Lorem","Apple","date","ddate","Lorem","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","ThQrStUvWHijKlMnOpxyZ","qrsworldtuv","abcdefg"}, {"abcdefg","hijklmnop","ThQrStUvWHijKlMnOpxyZ","qrsworldtuv","abcdefg"}) , {"abcdefg","hijklmnop","ThQrStUvWHijKlMnOpxyZ","qrsworldtuv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LoorecherHijKlrym","","datqrstuve","LoremWxworldyZ","date","Lorem","date",""}, {"LoorecherHijKlrym","","datqrstuve","LoremWxworldyZ","date","Lorem","date",""}) , {"LoorecherHijKlrym","","datqrstuve","LoremWxworldyZ","date","Lorem","date",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"z","abcdefg","qrstuv","wxxyz","qrstuv"}, {"z","abcdefg","qrstuv","wxxyz","qrstuv"}) , {"z","abcdefg","qrstuv","wxxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1eli0","HELLO","1elit0","YOU"}, {"1eli0","HELLO","1elit0","YOU"}) , {"1eli0","HELLO","1elit0","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elit0i","hello","world","how","are","hello"}, {"1elit0i","hello","world","how","are","hello"}) , {"1elit0i","hello","world","how","are","hello"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit"}, {"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit"}) , {"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","amet","consectetur","Lorem","elit","elit"}, {"Lorem","ipsum","dolor","amet","consectetur","Lorem","elit","elit"}) , {"Lorem","ipsum","dolor","amet","consectetur","Lorem","elit","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","brrown","ipsum","dolor","sit","brrrown","amet","consectetur","over","elit","amet","ipsum"}, {"Lorem","brrown","ipsum","dolor","sit","brrrown","amet","consectetur","over","elit","amet","ipsum"}) , {"Lorem","brrown","ipsum","dolor","sit","brrrown","amet","consectetur","over","elit","amet","ipsum"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","AadipiscingbCdEfG","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp"}, {"The","AadipiscingbCdEfG","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp"}) , {"The","AadipiscingbCdEfG","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"admin"}, {"are","yoU"}) , {"admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","worldworld","are","worldworld"}, {"HELLO","WORLD","AERE","YOU"}) , {"HELLO","WORLD","AERE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","hohw","worldd","are","1elit0you","hohw"}, {"hello","world","hohw","worldd","are","1elit0you","hohw"}) , {"hello","world","hohw","worldd","are","1elit0you","hohw"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXUuVvWwXxovrzyZz"}, {"The","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXUuVvWwXxovrzyZz"}) , {"The","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXUuVvWwXxovrzyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","baanana","cheyrry","cherry","date","banana"}, {"apple","baanana","cheyrry","cherry","date","banana"}) , {"apple","baanana","cheyrry","cherry","date","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you"}, {"lazy","HELLO","WORLD","HOW","ARE","YOU"}) , {"hello","world","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ohow","hello","world","how","are","you","adidolorghow"}, {"ohow","hello","world","how","are","you","adidolorghow"}) , {"ohow","hello","world","how","are","you","adidolorghow"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ","AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCcherrydEfG","QrStUv","wxyz","HijKlMnOp","HijKl","HijKlMnOp"}, {"AbCcherrydEfG","QrStUv","wxyz","HijKlMnOp","HijKl","HijKlMnOp"}) , {"AbCcherrydEfG","QrStUv","wxyz","HijKlMnOp","HijKl","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","WORLD","1elit0","YOU"}, {"LO","WORLD","1elit0","YOU"}) , {"LO","WORLD","1elit0","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brrown","brnown","brown"}, {"brrown","brnown","brown"}) , {"brrown","brnown","brown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrsworldtuv","56789","qrsworldtuv","hijklnmnop","9876543210","hijklmnop"}, {"abcdefg","hijklmnop","qrsworldtuv","56789","qrsworldtuv","hijklnmnop","9876543210","hijklmnop"}) , {"abcdefg","hijklmnop","qrsworldtuv","56789","qrsworldtuv","hijklnmnop","9876543210","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ii","i","admin"}, {"how","are"}) , {"how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG"}, {"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG"}) , {"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEf","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","UuVvWwXxYyZz"}, {"AbCdEf","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","UuVvWwXxYyZz"}) , {"AbCdEf","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cheyrry","hcherry","cherry","date","banana"}, {"apple","banana","cheyrry","hcherry","cherry","date","banana"}) , {"apple","banana","cheyrry","hcherry","cherry","date","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz"}, {"HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz"}) , {"HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}, {"AbCdEfG","HijKlMnOp","WxyZ"}) , {"AbCdEfG","HijKlMnOp","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyconsecteturz","hijklmnop","HELLO","i","wxyz","hotehe","hijklmnop","ZWxyZ","hijklmnop","hijklmnoYOU","wxyz","hijklmnop","hijklmnop"}, {"wxyconsecteturz","hijklmnop","HELLO","i","wxyz","hotehe","hijklmnop","ZWxyZ","hijklmnop","hijklmnoYOU","wxyz","hijklmnop","hijklmnop"}) , {"wxyconsecteturz","hijklmnop","HELLO","i","wxyz","hotehe","hijklmnop","ZWxyZ","hijklmnop","hijklmnoYOU","wxyz","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Loorem","elit","","ddate","datqrstuve","date","Lorem","date","date"}, {"Loorem","elit","","ddate","datqrstuve","date","Lorem","date","date"}) , {"Loorem","elit","","ddate","datqrstuve","date","Lorem","date","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","cherryyyou","date","cherryyou","cherry","cherry","cherry","datqrstuve"}, {"","datqrstuve","banana","cherry","Lorem","cherryyyou","date","cherryyou","cherry","cherry","cherry","datqrstuve"}) , {"","datqrstuve","banana","cherry","Lorem","cherryyyou","date","cherryyou","cherry","cherry","cherry","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherryarecherhry","date","cherry","cherryarecherhry"}, {"","datqrstuve","banana","cherryarecherhry","date","cherry","cherryarecherhry"}) , {"","datqrstuve","banana","cherryarecherhry","date","cherry","cherryarecherhry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEffG","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOip"}, {"AbCdEffG","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOip"}) , {"AbCdEffG","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOip"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","consectetur","adidolorg","elit"}, {"Lorem","ipsum","dolor","sit","consectetur","adidolorg","elit"}) , {"Lorem","ipsum","dolor","sit","consectetur","adidolorg","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrsworldv","LoorecherHijKlrym","","qrsworldtuv","LoremWxworldyZ","date","Lorem","date","","Lorem"}, {"qrsworldv","LoorecherHijKlrym","","qrsworldtuv","LoremWxworldyZ","date","Lorem","date","","Lorem"}) , {"qrsworldv","LoorecherHijKlrym","","qrsworldtuv","LoremWxworldyZ","date","Lorem","date","","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","brQrAppleStUvWxyZown","1elit0","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","brQrAppleStUvWxyZown","1elit0","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890","brQrAppleStUvWxyZown","1elit0","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","abcdefgg","hijklmnop","Lorem","abcdefg"}, {"abcdefg","abcdefgg","hijklmnop","Lorem","abcdefg"}) , {"abcdefg","abcdefgg","hijklmnop","Lorem","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WWxyxZ","WxyxZ"}, {"WWxyxZ","WxyxZ"}) , {"WWxyxZ","WxyxZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","HijKlMnOp"}, {"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","HijKlMnOp"}) , {"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","Appplle","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","Appplle","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","Appplle","UuVvWw","1234567890","QrStUvWxyZ","1elit0","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxlazllyyxZ","WxyxZ"}, {"WxlazllyyxZ","WxyxZ"}) , {"WxlazllyyxZ","WxyxZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","worldworld","Lorem","date","cherry","cherry","cherry","Lorem","cherry"}, {"","datqrstuve","banana","worldworld","Lorem","date","cherry","cherry","cherry","Lorem","cherry"}) , {"","datqrstuve","banana","worldworld","Lorem","date","cherry","cherry","cherry","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","himnop","wxyz","hijklmnop","hijklmnop","abcdefg"}, {"HijKlMnOp","hcherry","QrStUv","WxyZ"}) , {"HijKlMnOp","hcherry","QrStUv","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","doworldworldlor","sit","amet","iipsum","consectetur","adipiscing","elit"}, {"Lorem","ipsum","doworldworldlor","sit","amet","iipsum","consectetur","adipiscing","elit"}) , {"Lorem","ipsum","doworldworldlor","sit","amet","iipsum","consectetur","adipiscing","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","worldd","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","worldd","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","worldd","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datte","banana","cherry","Lorem","date","Lorem",""}, {"datte","banana","cherry","Lorem","date","Lorem",""}) , {"datte","banana","cherry","Lorem","date","Lorem",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"are","datqrstuve","banana","cherry","date","cherry","date"}, {"are","datqrstuve","banana","cherry","date","cherry","date"}) , {"are","datqrstuve","banana","cherry","date","cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cabcdefg","hijklmnop","qrstuvwxy","z"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","heollo","1234567890"}) , {"cabcdefg","hijklmnop","qrstuvwxy","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","worwld","qdogrstuvhow","are","you","adidolorhow","you"}, {"hello","worwld","qdogrstuvhow","are","you","adidolorhow","you"}) , {"hello","worwld","qdogrstuvhow","are","you","adidolorhow","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","WORLD","1elit0","YOU","YOU"}, {"LO","WORLD","1elit0","YOU","YOU"}) , {"LO","WORLD","1elit0","YOU","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AbCdEAbCdEffG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp"}, {"hijknlmnop","qrstuv","5678hello9"}) , {"hijknlmnop","qrstuv","5678hello9"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","worwld","how","are","uyou","you","adidolorhow","you"}, {"hello","worwld","how","are","uyou","you","adidolorhow","you"}) , {"hello","worwld","how","are","uyou","you","adidolorhow","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","HELLO","are","you","how","are"}, {"hello","world","HELLO","are","you","how","are"}) , {"hello","world","HELLO","are","you","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","The"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","The"}) , {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","The"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","HELLO","are","you","a","how"}, {"hello","world","HELLO","are","you","a","how"}) , {"hello","world","HELLO","are","you","a","how"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","Apppl"}, {"hi","Apppl"}) , {"hi","Apppl"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU","consectetur","1elit0"}, {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU","consectetur","1elit0"}) , {"LO","HELLO","1elHELLHOit0","WORLD","1elit0","YOU","consectetur","1elit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"worwaworoldbcdefgld","hello","world"}, {"worwaworoldbcdefgld","hello","world"}) , {"worwaworoldbcdefgld","hello","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"jpste"}, {"jpste"}) , {"jpste"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"987265432170","9876543210"}, {"987265432170","9876543210"}) , {"987265432170","9876543210"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","UnAadipiscingbCdEfGuVvWw","HijKlMnOp","QrStUvWxyZ","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","UnAadipiscingbCdEfGuVvWw","HijKlMnOp","QrStUvWxyZ","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","UnAadipiscingbCdEfGuVvWw","HijKlMnOp","QrStUvWxyZ","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}, {"98765432170","AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}) , {"98765432170","AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMOip","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMOip"}, {"HijKlMOip","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMOip"}) , {"HijKlMOip","HijKlMnOip","HijKlMnOp","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMOip"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWw","1234567890","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOip","UqrstuvuVvWwXxYyZz","QrStUvWxyZ","wUuVvWwXxYZz","UuVvWwXxYyZz"}, {"The","HijKlMnOip","UqrstuvuVvWwXxYyZz","QrStUvWxyZ","wUuVvWwXxYZz","UuVvWwXxYyZz"}) , {"The","HijKlMnOip","UqrstuvuVvWwXxYyZz","QrStUvWxyZ","wUuVvWwXxYZz","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry","","banana"}, {"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry","","banana"}) , {"","datqrstuve","banana","jumpste","cherry","date","Lorem","cherry","","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hHELLHOijklmnop","abcdefg","hijklmnop","qrsworldtuv","hijklmnop","hijklmnop"}, {"hHELLHOijklmnop","abcdefg","hijklmnop","qrsworldtuv","hijklmnop","hijklmnop"}) , {"hHELLHOijklmnop","abcdefg","hijklmnop","qrsworldtuv","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"56789"}, {"9876543210","9876543210"}) , {"56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","AARE","The","UuVvTTTheheXxYZz","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"HELLO","AARE","The","UuVvTTTheheXxYZz","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"HELLO","AARE","The","UuVvTTTheheXxYZz","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyccherhryonsecteturz","abcdefg"}, {"wxyccherhryonsecteturz","abcdefg"}) , {"wxyccherhryonsecteturz","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","Thhe","jumps","over","the","lazy","dog"}, {"The","quick","brown","fox","Thhe","jumps","over","the","lazy","dog"}) , {"The","quick","brown","fox","Thhe","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","hohw","are","you","hohw","world"}, {"hello","world","hohw","are","you","hohw","world"}) , {"hello","world","hohw","are","you","hohw","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"thee","cherry","Lorem","date","Lodogrem"}, {"thee","cherry","Lorem","date","Lodogrem"}) , {"thee","cherry","Lorem","date","Lodogrem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","Apppl","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijknlmnop","qrstuv","5678hello9"}) , {"abcdefg","hijknlmnop","qrstuv","5678hello9"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","jumpste","chherry","date","987265432170"}, {"","datqrstuve","banana","jumpste","chherry","date","987265432170"}) , {"","datqrstuve","banana","jumpste","chherry","date","987265432170"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","lazy","dog","lazy","jumps","quick"}, {"The","quick","brown","fox","jumps","over","the","lazy","dog","lazy","jumps","quick"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog","lazy","jumps","quick"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"quick","brown","fox","jumps","brownThe","over","the","lazy","dog","The","over","The"}, {"quick","brown","fox","jumps","brownThe","over","the","lazy","dog","The","over","The"}) , {"quick","brown","fox","jumps","brownThe","over","the","lazy","dog","The","over","The"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","98765432170HijKlMnOp","QrStUvWxyZ"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","98765432170HijKlMnOp","QrStUvWxyZ"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvWxyZ","98765432170HijKlMnOp","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxlazllyyxZ","WxyxZ","WxlazllyyxZ"}, {"WxlazllyyxZ","WxyxZ","WxlazllyyxZ"}) , {"WxlazllyyxZ","WxyxZ","WxlazllyyxZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abThheefg","abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz"}, {"abThheefg","abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz"}) , {"abThheefg","abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","AERE","YOU","HELLO"}, {"HELLO","WORLD","AERE","YOU","HELLO"}) , {"HELLO","WORLD","AERE","YOU","HELLO"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ddatqrstuve","cherry","LoremWxworyouldyZ","Lorem","datqrstuve"}, {"ddatqrstuve","cherry","LoremWxworyouldyZ","Lorem","datqrstuve"}) , {"ddatqrstuve","cherry","LoremWxworyouldyZ","Lorem","datqrstuve"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","the","WORLD","AERE","YOU"}, {"HELLO","the","WORLD","AERE","YOU"}) , {"HELLO","the","WORLD","AERE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","cherry","Lorem","date","cherry","cherry","cherry","amet"}, {"","datqrstuve","cherry","Lorem","date","cherry","cherry","cherry","amet"}) , {"","datqrstuve","cherry","Lorem","date","cherry","cherry","cherry","amet"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","overare","you"}, {"hello","world","how","overare","you"}) , {"hello","world","how","overare","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abThheefg","abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz","hijknlmnop"}, {"abThheefg","abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz","hijknlmnop"}) , {"abThheefg","abcdefg","hijknlmnop","qrstuv","hijknlmnop","wxyz","hijknlmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LoorecherHijKlrym","","daatqrstuve","LoremWxworldyZ","date","Lorem","Lrorem","date",""}, {"LoorecherHijKlrym","","daatqrstuve","LoremWxworldyZ","date","Lorem","Lrorem","date",""}) , {"LoorecherHijKlrym","","daatqrstuve","LoremWxworldyZ","date","Lorem","Lrorem","date",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"worldd","Loorem","","L","LoremWxworldyZ","date","datqrstuve","date"}, {"worldd","Loorem","","L","LoremWxworldyZ","date","datqrstuve","date"}) , {"worldd","Loorem","","L","LoremWxworldyZ","date","datqrstuve","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","hijklmnopwxxyz","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ","1234567890"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","hijklmnopwxxyz","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ","1234567890"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","hijklmnopwxxyz","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ","1234567890"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","chherry","dat","Lorem"}, {"","datqrstuve","banana","chherry","dat","Lorem"}) , {"","datqrstuve","banana","chherry","dat","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXhotehexYyZz"}, {"The","UuVvWwXxYZz","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXhotehexYyZz"}) , {"The","UuVvWwXxYZz","HijKlMnOip","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXhotehexYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijknlmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOip","HijKlMnOp","UUuVvWwXxYyZz","QrStUvWHijKlMnOpxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}) , {"abcdefg","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","you"}, {"HELLO","bananhijkHijKlMnOpnlmnop","ARE","YOU"}) , {"hello","world","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz","UuVvWwXxYyZz","HELLHO"}, {"98765432170","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz","UuVvWwXxYyZz","HELLHO"}) , {"98765432170","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","UuVvWwXxYyZz","UuVvWwXxYyZz","HELLHO"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","HELLO","are","you","a","how","you"}, {"hello","world","HELLO","are","you","a","how","you"}) , {"hello","world","HELLO","are","you","a","how","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","juumpste","datqrstuve","jumpste","YOU","chherry","date","Lorem"}, {"","juumpste","datqrstuve","jumpste","YOU","chherry","date","Lorem"}) , {"","juumpste","datqrstuve","jumpste","YOU","chherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyz","i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","HijKlMnOp","WxxyZ"}, {"wxyz","i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","HijKlMnOp","WxxyZ"}) , {"wxyz","i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","HijKlMnOp","WxxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","thee","cherry","Lorem","date","Lodogrem","thee"}, {"","thee","cherry","Lorem","date","Lodogrem","thee"}) , {"","thee","cherry","Lorem","date","Lodogrem","thee"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LO","HELLO","HHELLO","1elHELLHOit0","WORLD","1elit0","1elit0"}, {"LO","HELLO","HHELLO","1elHELLHOit0","WORLD","1elit0","1elit0"}) , {"LO","HELLO","HHELLO","1elHELLHOit0","WORLD","1elit0","1elit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"date98765432170","qrtstuv","hijklmnop","qrstuv","hijklmop","hijklmnopHijKlMnOip","wxyz"}, {"date98765432170","qrtstuv","hijklmnop","qrstuv","hijklmop","hijklmnopHijKlMnOip","wxyz"}) , {"date98765432170","qrtstuv","hijklmnop","qrstuv","hijklmop","hijklmnopHijKlMnOip","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","fox","lazipsumy","Q","the","lazy","dog","the"}, {"brown","fox","lazipsumy","Q","the","lazy","dog","the"}) , {"brown","fox","lazipsumy","Q","the","lazy","dog","the"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","banana","cheerry","cherry","Lorem","ddate","Lorem"}, {"","banana","cheerry","cherry","Lorem","ddate","Lorem"}) , {"","banana","cheerry","cherry","Lorem","ddate","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxove","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1elit0"}, {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxove","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1elit0"}) , {"The","UuVvWwXxYZz","HijKlMnOp","HijKlMnOip","how","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxove","1elit0","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1elit0"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"98765432170","HijKlMnOp","HijKlMnOip","QhelloyZ","UuVvWwXxYyZz","HELLHO"}, {"98765432170","HijKlMnOp","HijKlMnOip","QhelloyZ","UuVvWwXxYyZz","HELLHO"}) , {"98765432170","HijKlMnOp","HijKlMnOip","QhelloyZ","UuVvWwXxYyZz","HELLHO"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry","QrStUv9876543210WxyZ"}, {"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry","QrStUv9876543210WxyZ"}) , {"QrStUvWxyZ","5678hello9","cherr","Lorem","date","Lorem","QrStUv9876543210WxyZ","cherry","QrStUv9876543210WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","Lodogrem","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","Lodogrem","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","HijKlMnOp","QrStUvWxyZ","Lodogrem","hijklmnop","UuVvWw","1234567890","QrStUvWxAbCdEQrStUvWHijKlMnOpxyZfGyZ","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cheyrry","date","banana"}, {"apple","banana","cheyrry","date","banana"}) , {"apple","banana","cheyrry","date","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HamijKlMnOip","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","HijLoremWxworyouldyZKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"HamijKlMnOip","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","HijLoremWxworyouldyZKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"HamijKlMnOip","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","HijLoremWxworyouldyZKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"datqrstuve","wxyhijklmnop","AREwxyz","Lorem","Lor","wxyhijklmnop"}, {"datqrstuve","wxyhijklmnop","AREwxyz","Lorem","Lor","wxyhijklmnop"}) , {"datqrstuve","wxyhijklmnop","AREwxyz","Lorem","Lor","wxyhijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banaana","banana","applecherr","cherry","juumpste","date"}, {"Banana","Cherry","Date"}) , {"Banana","Cherry","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","ipsum"}, {"hello","ipsum"}) , {"hello","ipsum"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"z","qrstuvcheerry","eabcdefg","hijknlmnop","qrstuv","wxyz","qrstuv","z"}, {"z","qrstuvcheerry","eabcdefg","hijknlmnop","qrstuv","wxyz","qrstuv","z"}) , {"z","qrstuvcheerry","eabcdefg","hijknlmnop","qrstuv","wxyz","qrstuv","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","ohow","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890"}, {"AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","ohow","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890"}) , {"AbCdEQrStUvWHijKlMnOpxyZfG","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","ohow","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","1234567890"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOeoPpQqRrSsT","UuVvWwXxYyZz"}, {"AbCdEfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOeoPpQqRrSsT","UuVvWwXxYyZz"}) , {"AbCdEfG","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOeoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","ssit","amet","consectetur","ipsum"}, {"Lorem","ipsum","dolor","ssit","amet","consectetur","ipsum"}) , {"Lorem","ipsum","dolor","ssit","amet","consectetur","ipsum"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","abcdeffg","Lorem"}, {"abcdefg","hijklmnop","abcdeffg","Lorem"}) , {"abcdefg","hijklmnop","abcdeffg","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","rStUvWxyZ","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","rStUvWxyZ","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","The","rStUvWxyZ","UuVvWwXxYyZz","QrStUvWxyZ","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","worldworld","Lorem","date","cherry","cherry","cherry","Lorem","cherry"}, {"","datqrstuve","worldworld","Lorem","date","cherry","cherry","cherry","Lorem","cherry"}) , {"","datqrstuve","worldworld","Lorem","date","cherry","cherry","cherry","Lorem","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"z","abcdefg","qrstuv","wxxyz","qrstuv","abcdefg","abcdefg"}, {"z","abcdefg","qrstuv","wxxyz","qrstuv","abcdefg","abcdefg"}) , {"z","abcdefg","qrstuv","wxxyz","qrstuv","abcdefg","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","The","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyrZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"HELLO","The","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyrZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"HELLO","The","UuVvWwXxYZz","HijKlMnOp","QrStUvWxyrZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"LoorecherHijKlrym","","hcherry","datqrstuve","LoremWxworldyZ","date","Lorem","date",""}, {"LoorecherHijKlrym","","hcherry","datqrstuve","LoremWxworldyZ","date","Lorem","date",""}) , {"LoorecherHijKlrym","","hcherry","datqrstuve","LoremWxworldyZ","date","Lorem","date",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"o","apple","hohw","are","you"}, {"o","apple","hohw","are","you"}) , {"o","apple","hohw","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"chercherHijKlryry","","datqrstuve","banana","jumpste","cherry","yoU","Lorem","cherry","","date"}, {"chercherHijKlryry","","datqrstuve","banana","jumpste","cherry","yoU","Lorem","cherry","","date"}) , {"chercherHijKlryry","","datqrstuve","banana","jumpste","cherry","yoU","Lorem","cherry","","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","WxydolorZ","banana","cheyrry","hcherry","cherry","date","banana"}, {"apple","WxydolorZ","banana","cheyrry","hcherry","cherry","date","banana"}) , {"apple","WxydolorZ","banana","cheyrry","hcherry","cherry","date","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"quick","brown","fox","jumps","brownThe","over","the","lazy","dog","The","over","The","UUuVvWwXxYyZz","The"}, {"quick","brown","fox","jumps","brownThe","over","the","lazy","dog","The","over","The","UUuVvWwXxYyZz","The"}) , {"quick","brown","fox","jumps","brownThe","over","the","lazy","dog","The","over","The","UUuVvWwXxYyZz","The"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","qrstuv","qrstuv","abcdefg","qrstuv"}, {"abcdefg","hijklmnop","qrstuv","qrstuv","qrstuv","abcdefg","qrstuv"}) , {"abcdefg","hijklmnop","qrstuv","qrstuv","qrstuv","abcdefg","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","98765432170","cherry","date","Lorem"}, {"","datqrstuve","banana","98765432170","cherry","date","Lorem"}) , {"","datqrstuve","banana","98765432170","cherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"5679","12345","56789","56789","12345","12345","12345","56789","56789","12345"}, {"5679","12345","56789","56789","12345","12345","12345","56789","56789","12345"}) , {"5679","12345","56789","56789","12345","12345","12345","56789","56789","12345"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrsY1elHELLHOit0OUv","world","hohw","1elHWxydolorZELLHOit0","are","lazlly"}, {"qrsY1elHELLHOit0OUv","world","hohw","1elHWxydolorZELLHOit0","are","lazlly"}) , {"qrsY1elHELLHOit0OUv","world","hohw","1elHWxydolorZELLHOit0","are","lazlly"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdE","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}, {"AbCdE","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}) , {"AbCdE","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOosT","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","dartqrtuve","banana","cherry","date","cherhry","Lorem","cherry","cherhry"}, {"","dartqrtuve","banana","cherry","date","cherhry","Lorem","cherry","cherhry"}) , {"","dartqrtuve","banana","cherry","date","cherhry","Lorem","cherry","cherhry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","chherry","dat","Lorem","chherry"}, {"","datqrstuve","banana","chherry","dat","Lorem","chherry"}) , {"","datqrstuve","banana","chherry","dat","Lorem","chherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnp","WxworldyZ","WxworldyZ"}, {"HijKlMnp","WxworldyZ","WxworldyZ"}) , {"HijKlMnp","WxworldyZ","WxworldyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvZ","HijKlMnOp","QrStUvWxyZ"}, {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvZ","HijKlMnOp","QrStUvWxyZ"}) , {"The","HijKlMnOp","HijKlMnOip","QrStUvWxyZ","quick","UuVvWwXxYyZz","QrStUvZ","HijKlMnOp","QrStUvWxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit","sit"}, {"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit","sit"}) , {"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","adidolorg","elit","sit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"yoU","yametU","9876543210"}, {"yoU","yametU","9876543210"}) , {"yoU","yametU","9876543210"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","QrStUv","Wxhothe","HijKlMnOp"}, {"abcdefg","hijklmnop","qrstuv","himnop","wxyz","hijklmnop","hijklmnop"}) , {"HijKlMnOp","QrStUv","Wxhothe","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ssit","AadipiscingbdChellofG"}, {"ssit","AadipiscingbdChellofG"}) , {"ssit","AadipiscingbdChellofG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","WxyZ","jumpste","cherry","date","Lorem"}, {"","datqrstuve","WxyZ","jumpste","cherry","date","Lorem"}) , {"","datqrstuve","WxyZ","jumpste","cherry","date","Lorem"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnp","z"}, {"HijKlMnp","z"}) , {"HijKlMnp","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","AadipiscingbCdEfG"}, {"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","AadipiscingbCdEfG"}) , {"i","WxxyZ","HijKlMnOp","UuVvWwXxovrz","WxyZ","AadipiscingbCdEfG","AadipiscingbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"1elit0i","world","how","are","hello"}, {"1elit0i","world","how","are","hello"}) , {"1elit0i","world","how","are","hello"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"h","admin"}, {"h","admin"}) , {"h","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","Appple","hijknlmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","Appple","hijknlmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","datqrstuve","banana","cherry","Lorem","cherry","dateyoU","cherrybrQrAppleStUvWxyZown","L","cherry"}, {"","datqrstuve","banana","cherry","Lorem","cherry","dateyoU","cherrybrQrAppleStUvWxyZown","L","cherry"}) , {"","datqrstuve","banana","cherry","Lorem","cherry","dateyoU","cherrybrQrAppleStUvWxyZown","L","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyZ","hello","the","AadipiscingbCdEfG","WxyZ"}, {"WxyZ","hello","the","AadipiscingbCdEfG","WxyZ"}) , {"WxyZ","hello","the","AadipiscingbCdEfG","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ohow","hello","world","how","worwld","are","worlod","adidolorghow","are"}, {"ohow","hello","world","how","worwld","are","worlod","adidolorghow","are"}) , {"ohow","hello","world","how","worwld","are","worlod","adidolorghow","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","himnop","elit"}, {"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","himnop","elit"}) , {"Lorerm","Lorem","ipsum","dolor","sit","amet","consectetur","himnop","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","the","AERE","YOU","the"}, {"HELLO","the","AERE","YOU","the"}) , {"HELLO","the","AERE","YOU","the"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrsworldtuv","56789","hijklnmnop","9876543210","hijklmnop"}, {"abcdefg","hijklmnop","qrsworldtuv","56789","hijklnmnop","9876543210","hijklmnop"}) , {"abcdefg","hijklmnop","qrsworldtuv","56789","hijklnmnop","9876543210","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {""}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {""}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"hello","world"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana"}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"",""}, {""}) , {"",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"","",""}, {"",""}) , {"","",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({""}, {"a"}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"a"}, {""}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cherry","abcdefg","hijklmnop","qrstuvwxy","z"}, {"cherry","abcdefg","hijklmnop","qrstuvwxy","z"}) , {"cherry","abcdefg","hijklmnop","qrstuvwxy","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","ARE","OU"}, {"HELLO","WORLD","HOW","ARE","OU"}) , {"HELLO","WORLD","HOW","ARE","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin","admin"}, {"how","are","yoU"}) , {"how","are","yoU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","ARE","OU","WORLD","WORLD"}, {"HELLO","WORLD","HOW","ARE","OU","WORLD","WORLD"}) , {"HELLO","WORLD","HOW","ARE","OU","WORLD","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUv","WxyZ","AbCdEfG"}, {"abcdefg","hijklmnop","qrstuv","wxyz","hijklmnop"}) , {"AbCdEfG","HijKlMnOp","QrStUv","WxyZ","AbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstuvwxy","z","hijklmnop"}, {"abcdefg","qrstuvwxy","z","hijklmnop"}) , {"abcdefg","qrstuvwxy","z","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Apple","Banana","Cherry","Date","Banana"}, {"Apple","Banana","Cherry","Date","Banana"}) , {"Apple","Banana","Cherry","Date","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"abcdefg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","UuVvWwXxYyZz"}, {"abcdefg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","lazy","dog"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","adipiscing","elit","elit"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","admin","QrStUvWxyZ","UuVvWwXxYyZz"}, {"abcdefg","fg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","fg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","h","how","are","you"}, {"hello","h","how","are","you"}) , {"hello","h","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","OU"}, {"HELLO","WORLD","HOW","OU"}) , {"HELLO","WORLD","HOW","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","hi","admin"}, {"brown","hi","admin"}) , {"brown","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","Banana","admin"}, {"brown","Banana","admin"}) , {"brown","Banana","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are"}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","Cherry","Date"}, {"apple","banana","cherry","date"}) , {"Banana","Cherry","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin","admin"}, {"how","are","UuVvWwXxYyZz","yoU"}) , {"hi","admin","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","HOWW","WORLD","HOW","OU","OU"}, {"HELLO","HOWW","WORLD","HOW","OU","OU"}) , {"HELLO","HOWW","WORLD","HOW","OU","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Apple","Banana","HOWW","Cherry","Date","Banana"}, {"Apple","Banana","HOWW","Cherry","Date","Banana"}) , {"Apple","Banana","HOWW","Cherry","Date","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmno12345p","hijklmnop","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwVXxYyZz"}) , {"abcdefg","hijklmno12345p","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstuvwxy"}, {"abcdefg","qrstuvwxy"}) , {"abcdefg","qrstuvwxy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"world","how","are"}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","HOWW","Cherry","Date","Banana"}, {"Banana","HOWW","Cherry","Date","Banana"}) , {"Banana","HOWW","Cherry","Date","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop"}, {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop"}) , {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","OyoUU","ARE","OU","WORLD"}, {"HELLO","WORLD","HOW","OyoUU","ARE","OU","WORLD"}) , {"HELLO","WORLD","HOW","OyoUU","ARE","OU","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Cherry","Date"}, {"apple","banana","Apple","date"}) , {"Cherry","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUv","abcdefg","hijklmnop","qrstuv"}, {"QrStUv","abcdefg","hijklmnop","qrstuv"}) , {"QrStUv","abcdefg","hijklmnop","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","UOU"}, {"HELLO","WORLD","HOW","UOU"}) , {"HELLO","WORLD","HOW","UOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz"}, {"abcdefg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","ARE","HOWW","OOyoUUU","WORLD","HOW","OU","OU"}, {"HELLO","ARE","HOWW","OOyoUUU","WORLD","HOW","OU","OU"}) , {"HELLO","ARE","HOWW","OOyoUUU","WORLD","HOW","OU","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","ARE","OU","WORLD","WORLD","OU"}, {"HELLO","WORLD","HOW","ARE","OU","WORLD","WORLD","OU"}) , {"HELLO","WORLD","HOW","ARE","OU","WORLD","WORLD","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW"}, {"HELLO","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW"}) , {"HELLO","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","h","how","are","you"}, {"hello","qrstuabcdefgv","h","how","are","you"}) , {"hello","qrstuabcdefgv","h","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","hijklmno12345p","hijklmnop","qrstuv","wxyz","qrstuv"}, {"QrStUvWxyZ","hijklmno12345p","hijklmnop","qrstuv","wxyz","qrstuv"}) , {"QrStUvWxyZ","hijklmno12345p","hijklmnop","qrstuv","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","abcdefg"}, {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","abcdefg"}) , {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","HijKlMnOp","HOWW","Cherry","Date","Banana","HOWW","Date"}, {"Banana","HijKlMnOp","HOWW","Cherry","Date","Banana","HOWW","Date"}) , {"Banana","HijKlMnOp","HOWW","Cherry","Date","Banana","HOWW","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog","fox"}, {"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog","fox"}) , {"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog","fox"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmno12345p","qrstuv","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwVXxYyZz"}) , {"abcdefg","hijklmno12345p","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv"}, {"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv"}) , {"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cherry","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy"}, {"cherry","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy"}) , {"cherry","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OU","OU","HOW"}, {"HELLO","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OU","OU","HOW"}) , {"HELLO","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OU","OU","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fg","hijklmnop","qrstuv","wxyz","hijklmnop"}, {"fg","hijklmnop","qrstuv","wxyz","hijklmnop"}) , {"fg","hijklmnop","qrstuv","wxyz","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","ARE","YOU"}, {"HELLO","WORLD","HOW","ARE","YOU"}) , {"HELLO","WORLD","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","The","cherry","date","cherry"}, {"apple","The","cherry","date","cherry"}) , {"apple","The","cherry","date","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hijklmnop","hijklmno12345p","hijklmnop","qrstuv","wxyz"}, {"hijklmnop","hijklmno12345p","hijklmnop","qrstuv","wxyz"}) , {"hijklmnop","hijklmno12345p","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cherry","date"}, {"Apple","Banana","12345Cherry","Cherry","Date"}) , {"apple","banana","cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"h","how","are","you"}, {"h","how","are","you"}) , {"h","how","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","qrstulazyv","hijklmno12345p","qrstuv","hijklmnop","QrvWxyZ","qrstuv","wxyz","qrstuv"}, {"QrStUvWxyZ","qrstulazyv","hijklmno12345p","qrstuv","hijklmnop","QrvWxyZ","qrstuv","wxyz","qrstuv"}) , {"QrStUvWxyZ","qrstulazyv","hijklmno12345p","qrstuv","hijklmnop","QrvWxyZ","qrstuv","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"abcdefg","hijklmnop","qrstuv","wz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","howw","are","you"}, {"hello","world","how","howw","are","you"}) , {"hello","world","how","howw","are","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}, {"abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}) , {"abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop"}, {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop"}) , {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"UuVvWwXxYyZz","hijklmnop","qrstuvwxy","z"}, {"12ipsum7890","AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","1234567890"}) , {"UuVvWwXxYyZz","hijklmnop","qrstuvwxy","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin"}, {"hi","admin"}) , {"hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyz","brown","hi","admin"}, {"wxyz","brown","hi","admin"}) , {"wxyz","brown","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"over","qrstuvwxy"}, {"over","qrstuvwxy"}) , {"over","qrstuvwxy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog","fox"}, {"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog","fox"}) , {"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog","fox"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","HOW","ARE","YOU"}, {"HELLO","HOW","ARE","YOU"}) , {"HELLO","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLOqrhstuvwxy","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}, {"HELLOqrhstuvwxy","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}) , {"HELLOqrhstuvwxy","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HELLO","WORLD","HOW","ARE","YOU"}, {"YyouOU","HELLO","WORLD","HOW","ARE","YOU"}) , {"YyouOU","HELLO","WORLD","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklamet","fg","HijKlMnOphijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop"}, {"abcdefg","hijklamet","fg","HijKlMnOphijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop"}) , {"abcdefg","hijklamet","fg","HijKlMnOphijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}, {"The","quick","brown","fox","jumps","over","the","lazy","dog"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","Banana","admin","Banana"}, {"brown","Banana","admin","Banana"}) , {"brown","Banana","admin","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"h","hoyoUuVvWwXxYyZzU","are","you","you"}, {"h","hoyoUuVvWwXxYyZzU","are","you","you"}) , {"h","hoyoUuVvWwXxYyZzU","are","you","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","consectetur","adipiscing","elit","dolor"}, {"The","quick","brown","fox","jumps","over","the","lazy","dog"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789"}, {"OyoUU"}) , {"OyoUU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrstuv","wxyz"}, {"qrstuv","wxyz"}) , {"qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","h","how","are","you","how","are"}, {"hello","qrstuabcdefgv","h","how","are","you","how","are"}) , {"hello","qrstuabcdefgv","h","how","are","you","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","wz","UuVvWwXxYyZz"}, {"AbCdEfG","wz","UuVvWwXxYyZz"}) , {"AbCdEfG","wz","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","how","are","you","how","are"}, {"hello","qrstuabcdefgv","how","are","you","how","are"}) , {"hello","qrstuabcdefgv","how","are","you","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv","qrstuv"}, {"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv","qrstuv"}) , {"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","hi","admin","admin","the"}, {"the","hi","admin","admin","the"}) , {"the","hi","admin","admin","the"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","12345Cherry","how","you"}, {"hello","12345Cherry","how","you"}) , {"hello","12345Cherry","how","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","hi","admin","admin",""}, {"the","hi","admin","admin",""}) , {"the","hi","admin","admin",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}, {"abcdefg","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}) , {"abcdefg","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLLLO","WORLD","HOW","ARE","YOU","HOW"}, {"HELLLLO","WORLD","HOW","ARE","YOU","HOW"}) , {"HELLLLO","WORLD","HOW","ARE","YOU","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"aadmin","hi","admin"}, {"aadmin","hi","admin"}) , {"aadmin","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","you","dolor","sit","amet","consectetur","adipiscing","elit"}, {"Lorem","ipsum","you","dolor","sit","amet","consectetur","adipiscing","elit"}) , {"Lorem","ipsum","you","dolor","sit","amet","consectetur","adipiscing","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","admin"}, {"brown","admin"}) , {"brown","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog","fox","over"}, {"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog","fox","over"}) , {"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog","fox","over"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HELLO","WORLD","HOW","YOU"}, {"YyouOU","HELLO","WORLD","HOW","YOU"}) , {"YyouOU","HELLO","WORLD","HOW","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","crherry","date"}, {"apple","banana","crherry","date"}) , {"apple","banana","crherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cherry","abcdefg","hijklmnop","qrstuvwxy","z","z"}, {"cherry","abcdefg","hijklmnop","qrstuvwxy","z","z"}) , {"cherry","abcdefg","hijklmnop","qrstuvwxy","z","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WHOW","HELLO","WORLD","HOW","ARE","YOU"}, {"WHOW","HELLO","WORLD","HOW","ARE","YOU"}) , {"WHOW","HELLO","WORLD","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","HOW","OyoUU","puyfupDda","yoU","TydBz"}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","howw","are","you","hoTydBzw"}, {"hello","world","how","howw","are","you","hoTydBzw"}) , {"hello","world","how","howw","are","you","hoTydBzw"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORL9876543210D","HOW","ARE","OU"}, {"HELLO","WORL9876543210D","HOW","ARE","OU"}) , {"HELLO","WORL9876543210D","HOW","ARE","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cherry","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy","hijklmnop"}, {"cherry","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy","hijklmnop"}) , {"cherry","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","AREThe","cherry","date","12345Cherry"}, {"apple","AREThe","cherry","date","12345Cherry"}) , {"apple","AREThe","cherry","date","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YOU","hi","admin"}, {"YOU","hi","admin"}) , {"YOU","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}, {"The","quick","brown","fox","over","brWORL9876543210Dwn","the","lazy","dog"}) , {"Lorem","ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","ARE","YOU","WORLD","WORLD"}, {"HELLO","WORLD","HOW","ARE","YOU","WORLD","WORLD"}) , {"HELLO","WORLD","HOW","ARE","YOU","WORLD","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz","qrstuv"}, {"abcdefg","hijklmnop","qrstuv","wxyz","qrstuv"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyz","brown","OU","hi"}, {"wxyz","brown","OU","hi"}) , {"wxyz","brown","OU","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","QrStUv","WxyZ","AbCdEfG"}, {"abcdefg","hijklmnop","qrstuv","wxyz","hijklmnop"}) , {"HijKlMnOp","QrStUv","WxyZ","AbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","The","HELLLLO","cherry","date","cherry","The"}, {"apple","The","HELLLLO","cherry","date","cherry","The"}) , {"apple","The","HELLLLO","cherry","date","cherry","The"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","Banana","admin","brown","admin"}, {"brown","Banana","admin","brown","admin"}) , {"brown","Banana","admin","brown","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","ARE","jumps","YOU","YOU","YOU"}, {"HELLO","WORLD","HOW","ARE","jumps","YOU","YOU","YOU"}) , {"HELLO","WORLD","HOW","ARE","jumps","YOU","YOU","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"h","how","are"}, {"h","how","are"}) , {"h","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","howw","are","you","hoTydBzw","world"}, {"hello","world","how","howw","are","you","hoTydBzw","world"}) , {"hello","world","how","howw","are","you","hoTydBzw","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","you","sit","amet","consectetur","adipiscing","elit"}, {"Lorem","ipsum","you","sit","amet","consectetur","adipiscing","elit"}) , {"Lorem","ipsum","you","sit","amet","consectetur","adipiscing","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOWqrstuabcdefgv","HOW","ARE","YOU","ARE"}, {"HOWqrstuabcdefgv","HOW","ARE","YOU","ARE"}) , {"HOWqrstuabcdefgv","HOW","ARE","YOU","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","worl","how","howw","are","you","hoTydBzw"}, {"hello","world","worl","how","howw","are","you","hoTydBzw"}) , {"hello","world","worl","how","howw","are","you","hoTydBzw"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","h","hi","admin","admin",""}, {"the","h","hi","admin","admin",""}) , {"the","h","hi","admin","admin",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","12345","consectetur","adipiscing","elit"}, {"The","quick","brown","fox","jumps","over","the","lazy","dog"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"abcdefg"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyz","brown","OU","hi","hi","hi"}, {"wxyz","brown","OU","hi","hi","hi"}) , {"wxyz","brown","OU","hi","hi","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","AREThe","cherry","date","datHOWe","12345Cherry"}, {"apple","AREThe","cherry","date","datHOWe","12345Cherry"}) , {"apple","AREThe","cherry","date","datHOWe","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HELLO","HOW","Lorem","YOU"}, {"YyouOU","HELLO","HOW","Lorem","YOU"}) , {"YyouOU","HELLO","HOW","Lorem","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"adnmin","aadmin","admin","hi","aadmin"}, {"adnmin","aadmin","admin","hi","aadmin"}) , {"adnmin","aadmin","admin","hi","aadmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HELLO","WORLD","HOW","ARE"}, {"YyouOU","HELLO","WORLD","HOW","ARE"}) , {"YyouOU","HELLO","WORLD","HOW","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","chherry"}, {"apple","banana","chherry"}) , {"apple","banana","chherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Cherry","Date","Date"}, {"apple","banana","Apple","date"}) , {"Cherry","Date","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","worl","how","howw","are","hoTydBzw"}, {"hello","world","worl","how","howw","are","hoTydBzw"}) , {"hello","world","worl","how","howw","are","hoTydBzw"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cherry","date"}, {"apple","banana","cherry","date"}) , {"apple","banana","cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","Banana","admin","Banana","Banana"}, {"brown","Banana","admin","Banana","Banana"}) , {"brown","Banana","admin","Banana","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","WORLD","HOW","ARE","YOU"}, {"YyouOU","HLELLO","WORLD","HOW","ARE","YOU"}) , {"YyouOU","HLELLO","WORLD","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"zz","cherry","abcdefg","hijklmnop","qrstuvwxy","z","acdefg","z"}, {"zz","cherry","abcdefg","hijklmnop","qrstuvwxy","z","acdefg","z"}) , {"zz","cherry","abcdefg","hijklmnop","qrstuvwxy","z","acdefg","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","datHOWe","ARE","YOU","WORLD","WORLD"}, {"HELLO","WORLD","datHOWe","ARE","YOU","WORLD","WORLD"}) , {"HELLO","WORLD","datHOWe","ARE","YOU","WORLD","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"broquickwn","Banana"}, {"broquickwn","Banana"}) , {"broquickwn","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrhstuvwxy","z","qrstuvwxy"}, {"qrhstuvwxy","z","qrstuvwxy"}) , {"qrhstuvwxy","z","qrstuvwxy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstuv","lazy","wxyz"}, {"abcdefg","qrstuv","lazy","wxyz"}) , {"abcdefg","qrstuv","lazy","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg","hijklmnopwxyz"}, {"abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg","hijklmnopwxyz"}) , {"abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg","hijklmnopwxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HEELLO","WORLD","OU"}, {"HEELLO","WORLD","OU"}) , {"HEELLO","WORLD","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","AREThe","cherry","12345Cherry"}, {"apple","AREThe","cherry","12345Cherry"}) , {"apple","AREThe","cherry","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"adnmin","aadmin","adminHELLOqrhstuvwxy","hi","aadmin"}, {"adnmin","aadmin","adminHELLOqrhstuvwxy","hi","aadmin"}) , {"adnmin","aadmin","adminHELLOqrhstuvwxy","hi","aadmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","Banana","admin","brown","admin","brown","brown","brown"}, {"brown","Banana","admin","brown","admin","brown","brown","brown"}) , {"brown","Banana","admin","brown","admin","brown","brown","brown"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"orver","over","qrstuvwxy"}, {"orver","over","qrstuvwxy"}) , {"orver","over","qrstuvwxy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","The","HOW","ARE","YOU","ARE"}, {"HELLO","The","HOW","ARE","YOU","ARE"}) , {"HELLO","The","HOW","ARE","YOU","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","HOW","AR","YOU","ARE"}, {"HELLO","HOW","AR","YOU","ARE"}) , {"HELLO","HOW","AR","YOU","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg","qrstuv"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg","qrstuv"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","fg","hijklmnop","qrstuv","wxyz"}, {"abcdefg","fg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","fg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","HijKlMnOp","HOWW","Date","Banana","howw","HOWW","Date"}, {"Banana","HijKlMnOp","HOWW","Date","Banana","howw","HOWW","Date"}) , {"Banana","HijKlMnOp","HOWW","Date","Banana","howw","HOWW","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Date"}, {"Date"}) , {"Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyZ","world","how","howw","worldd","are","dog","you","hoTydBzw","world"}, {"WxyZ","world","how","howw","worldd","are","dog","you","hoTydBzw","world"}) , {"WxyZ","world","how","howw","worldd","are","dog","you","hoTydBzw","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","HijKlMnOp","HOWW","Date","Banana","howw","HOWW","Date","howw"}, {"Banana","HijKlMnOp","HOWW","Date","Banana","howw","HOWW","Date","howw"}) , {"Banana","HijKlMnOp","HOWW","Date","Banana","howw","HOWW","Date","howw"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","hi","HOWqrstuabcdefgv","admin",""}, {"the","hi","HOWqrstuabcdefgv","admin",""}) , {"the","hi","HOWqrstuabcdefgv","admin",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","WORLD","ARE","YOU"}, {"YyouOU","HLELLO","WORLD","ARE","YOU"}) , {"YyouOU","HLELLO","WORLD","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YOYU","YOU","hi","admin"}, {"YOYU","YOU","hi","admin"}) , {"YOYU","YOU","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","qrstulazyv","hijklmno12345p","qrstuv","hijklmnop","QrvWxyZ","qrstuv","brown","wxyz","qrstuv","hijklmnop"}, {"QrStUvWxyZ","qrstulazyv","hijklmno12345p","qrstuv","hijklmnop","QrvWxyZ","qrstuv","brown","wxyz","qrstuv","hijklmnop"}) , {"QrStUvWxyZ","qrstulazyv","hijklmno12345p","qrstuv","hijklmnop","QrvWxyZ","qrstuv","brown","wxyz","qrstuv","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","12345Cherry","how","you","12345Cherry","you"}, {"apple","12345Cherry","how","you","12345Cherry","you"}) , {"apple","12345Cherry","how","you","12345Cherry","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","date","apple"}, {"apple","banana","date","apple"}) , {"apple","banana","date","apple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","OOyoUUUAREThe","AREThe","cherry","12345Cherry"}, {"apple","OOyoUUUAREThe","AREThe","cherry","12345Cherry"}) , {"apple","OOyoUUUAREThe","AREThe","cherry","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg","qsrstuv"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg","qsrstuv"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg","qsrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Apple","12345","56789"}, {"OyoUU"}) , {"OyoUU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","jumpss","lazy"}, {"Lorem","ipsum","dolor","sit","amet","consectetur","adipiscing","elit"}) , {"The","quick","brown","fox","jumps","over","the","jumpss","lazy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklamet","HijKlMnOphijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop","fg","abcdefg"}, {"abcdefg","hijklamet","HijKlMnOphijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop","fg","abcdefg"}) , {"abcdefg","hijklamet","HijKlMnOphijklmnop","qrstuv","wxyz","hijklmnop","hijklmnop","fg","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","admin","hi"}, {"hi","admin","hi"}) , {"hi","admin","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","brWORL9876543210Dwn"}, {"hi","brWORL9876543210Dwn"}) , {"hi","brWORL9876543210Dwn"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv","hijkhlmnop","qrstuv"}, {"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv","hijkhlmnop","qrstuv"}) , {"abcdefg","hijklmnop","thHOWe","qrstuv","wxyz","qrstuv","hijkhlmnop","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fg","hijklmnop","qrstuv","wxyz","hijklmnop","fg"}, {"fg","hijklmnop","qrstuv","wxyz","hijklmnop","fg"}) , {"fg","hijklmnop","qrstuv","wxyz","hijklmnop","fg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"aadmin","adminHELLOqrhstuvwxy","hi","aadmin"}, {"aadmin","adminHELLOqrhstuvwxy","hi","aadmin"}) , {"aadmin","adminHELLOqrhstuvwxy","hi","aadmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","WORLD","EARE","ARE","YOU"}, {"YyouOU","HLELLO","WORLD","EARE","ARE","YOU"}) , {"YyouOU","HLELLO","WORLD","EARE","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789"}, {"12345","56789"}) , {"12345","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","hi","HOWqrstuabcdefgv","admin"}, {"the","hi","HOWqrstuabcdefgv","admin"}) , {"the","hi","HOWqrstuabcdefgv","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"appe","apple","OOyoUUUAREThe","cherry","12345Cherry"}, {"appe","apple","OOyoUUUAREThe","cherry","12345Cherry"}) , {"appe","apple","OOyoUUUAREThe","cherry","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","HijKlMnOp","HOWW","Cherry","Banana","HOWW","Date"}, {"Banana","HijKlMnOp","HOWW","Cherry","Banana","HOWW","Date"}) , {"Banana","HijKlMnOp","HOWW","Cherry","Banana","HOWW","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","fg","hijklmnop","qrstuv","worldd"}, {"abcdefg","fg","hijklmnop","qrstuv","worldd"}) , {"abcdefg","fg","hijklmnop","qrstuv","worldd"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOW"}, {"HOW"}) , {"HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}, {"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}) , {"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","abanana","crherry","date"}, {"apple","abanana","crherry","date"}) , {"apple","abanana","crherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"acdefg","apple","OOyoUUUAametREThe","cherry","12345Cherry"}, {"acdefg","apple","OOyoUUUAametREThe","cherry","12345Cherry"}) , {"acdefg","apple","OOyoUUUAametREThe","cherry","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WHOW","HELLO","WORLD","HOW","ARE"}, {"WHOW","HELLO","WORLD","HOW","ARE"}) , {"WHOW","HELLO","WORLD","HOW","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","WORLD","ARE","WORLLD","YOU"}, {"YyouOU","HLELLO","WORLD","ARE","WORLLD","YOU"}) , {"YyouOU","HLELLO","WORLD","ARE","WORLLD","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"appe","apple","OOyoUUUAREThe","12345Cherry"}, {"appe","apple","OOyoUUUAREThe","12345Cherry"}) , {"appe","apple","OOyoUUUAREThe","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlbMmNnOoPpQqRrSsT","AaBbCcDdEeFfGgHhIiJjKrSsT","AaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyzYOYU","brown","hi","admin"}, {"wxyzYOYU","brown","hi","admin"}) , {"wxyzYOYU","brown","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLOqrhstuvwxy","wxyzYOYU","brown","hi","hi"}, {"HELLOqrhstuvwxy","wxyzYOYU","brown","hi","hi"}) , {"HELLOqrhstuvwxy","wxyzYOYU","brown","hi","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AaBbCcDdEeFfGgHhIiJjKrSsT","Banana","admin","brown","admin","admin"}, {"AaBbCcDdEeFfGgHhIiJjKrSsT","Banana","admin","brown","admin","admin"}) , {"AaBbCcDdEeFfGgHhIiJjKrSsT","Banana","admin","brown","admin","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YOYU","YOU","haadmin","admin","YOYU"}, {"YOYU","YOU","haadmin","admin","YOYU"}) , {"YOYU","YOU","haadmin","admin","YOYU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"adoge","apple","AREThe","cherry","date","datHOWe","AUOUEThe","12345Cherry"}, {"adoge","apple","AREThe","cherry","date","datHOWe","AUOUEThe","12345Cherry"}) , {"adoge","apple","AREThe","cherry","date","datHOWe","AUOUEThe","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fg","qrstuv","hijklmnop"}, {"fg","qrstuv","hijklmnop"}) , {"fg","qrstuv","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"aadmin","hi","aadmin"}, {"aadmin","hi","aadmin"}) , {"aadmin","hi","aadmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","WORLD","E","WORLLD","YOU"}, {"YyouOU","HLELLO","WORLD","E","WORLLD","YOU"}) , {"YyouOU","HLELLO","WORLD","E","WORLLD","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","HOW","WORLD","HOW","ARE","YOU"}, {"YyouOU","HLELLO","HOW","WORLD","HOW","ARE","YOU"}) , {"YyouOU","HLELLO","HOW","WORLD","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrstuvwxy","z"}, {"qrstuvwxy","z"}) , {"qrstuvwxy","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstuv","wxyz","qrstuv"}, {"abcdefg","qrstuv","wxyz","qrstuv"}) , {"abcdefg","qrstuv","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","abanana","crherry","date","abanana"}, {"apple","abanana","crherry","date","abanana"}) , {"apple","abanana","crherry","date","abanana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","hi","admin"}, {"hello","hi","admin"}) , {"hello","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","hijklmno12345p","hijklmnop","qrstuv","WORLD","qrstuv"}, {"QrStUvWxyZ","hijklmno12345p","hijklmnop","qrstuv","WORLD","qrstuv"}) , {"QrStUvWxyZ","hijklmno12345p","hijklmnop","qrstuv","WORLD","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","ovoer","dog","fox"}, {"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","ovoer","dog","fox"}) , {"The","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","ovoer","dog","fox"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsWHOWT","HijKlMnOp","HijKlMnOp"}, {"AbCdEfG","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsWHOWT","HijKlMnOp","HijKlMnOp"}) , {"AbCdEfG","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsWHOWT","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HWOW","HELLO","WORLD","HOW","YOU"}, {"YyouOU","HWOW","HELLO","WORLD","HOW","YOU"}) , {"YyouOU","HWOW","HELLO","WORLD","HOW","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyzYOYUz","brown","hi","admin","hi"}, {"wxyzYOYUz","brown","hi","admin","hi"}) , {"wxyzYOYUz","brown","hi","admin","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","over","brWORL9876543210Dwn","the","lazy","dog"}, {"The","quick","brown","fox","over","brWORL9876543210Dwn","the","lazy","dog"}) , {"The","quick","brown","fox","over","brWORL9876543210Dwn","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HWOW","abcdefg","hijklmnop","wxyz","abcdefg"}, {"HWOW","abcdefg","hijklmnop","wxyz","abcdefg"}) , {"HWOW","abcdefg","hijklmnop","wxyz","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","ARE","OU","WORLD","OU"}, {"HELLO","WORLD","HOW","ARE","OU","WORLD","OU"}) , {"HELLO","WORLD","HOW","ARE","OU","WORLD","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","OOyoUUUAREThe","date","apple","date"}, {"apple","OOyoUUUAREThe","date","apple","date"}) , {"apple","OOyoUUUAREThe","date","apple","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"admin"}, {"admin"}) , {"admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","h","how","are"}, {"hello","qrstuabcdefgv","h","how","are"}) , {"hello","qrstuabcdefgv","h","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog"}, {"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog"}) , {"The","quick","brown","fox","jumps","sit","over","the","lazy","OU","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","wz"}, {"AbCdEfG","wz"}) , {"AbCdEfG","wz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hhello","hello","world","how","are","you"}, {"HELLO","WORLD","HOW","ARE","YOU"}) , {"HELLO","WORLD","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","OOyoUUUAREThe","AREThe","a","cherry","12345Cherry"}, {"apple","OOyoUUUAREThe","AREThe","a","cherry","12345Cherry"}) , {"apple","OOyoUUUAREThe","AREThe","a","cherry","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","admin","QrStUvWxyZ","dmin","UuVvWwXxYyZz"}, {"abcdefg","fg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","fg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOW","ARE","YOU","ARE","HOW"}, {"HOW","ARE","YOU","ARE","HOW"}) , {"HOW","ARE","YOU","ARE","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"jumps123Cherry45"}, {"jumps123Cherry45"}) , {"jumps123Cherry45"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","hijklmno12345p","hijklmnop","wxyz","qrstuv"}, {"QrStUvWxyZ","hijklmno12345p","hijklmnop","wxyz","qrstuv"}) , {"QrStUvWxyZ","hijklmno12345p","hijklmnop","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","datHOWe","ARE","WORLD","WORLD"}, {"HELLO","WORLD","datHOWe","ARE","WORLD","WORLD"}) , {"HELLO","WORLD","datHOWe","ARE","WORLD","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","date","apple","apple"}, {"apple","banana","date","apple","apple"}) , {"apple","banana","date","apple","apple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxyzYOYU","brown","hi","admin","wxyzYOYU"}, {"wxyzYOYU","brown","hi","admin","wxyzYOYU"}) , {"wxyzYOYU","brown","hi","admin","wxyzYOYU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"adoge","apple","cherry","date","datHOWe","AUOUEThe","12345Cherry"}, {"adoge","apple","cherry","date","datHOWe","AUOUEThe","12345Cherry"}) , {"adoge","apple","cherry","date","datHOWe","AUOUEThe","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrstuv","wxywz"}, {"qrstuv","wxywz"}) , {"qrstuv","wxywz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"BaHOWqrstuabcdefgvnana","Banana"}, {"BaHOWqrstuabcdefgvnana","Banana"}) , {"BaHOWqrstuabcdefgvnana","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YOU","hi","AaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","admin"}, {"YOU","hi","AaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","admin"}) , {"YOU","hi","AaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","WORLLLD","WORLD","WORLD","A12345CherryE","WORLLD","YOU"}, {"YyouOU","WORLLLD","WORLD","WORLD","A12345CherryE","WORLLD","YOU"}) , {"YyouOU","WORLLLD","WORLD","WORLD","A12345CherryE","WORLLD","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Bana","HijKlMnOphijklmnop","UOU","Cherry","Date","Banana"}, {"Bana","HijKlMnOphijklmnop","UOU","Cherry","Date","Banana"}) , {"Bana","HijKlMnOphijklmnop","UOU","Cherry","Date","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"dadipiscingate","banana","date","apple"}, {"dadipiscingate","banana","date","apple"}) , {"dadipiscingate","banana","date","apple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}, {"The","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}) , {"The","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","qrstuv","qrstuv"}, {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","qrstuv","qrstuv"}) , {"abcdefg","fg","hijklmnop","qrstuv","wxyz","hijklmnop","qrstuv","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","admin","Banana","Banana"}, {"brown","admin","Banana","Banana"}) , {"brown","admin","Banana","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","Cherry","Date"}, {"apple","chery","date"}) , {"apple","chery","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","AREThe","wz","date","12345Cherry","wz"}, {"apple","AREThe","wz","date","12345Cherry","wz"}) , {"apple","AREThe","wz","date","12345Cherry","wz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklpmnop","hijklmnop","qrstuv","wxyz","abcdefg","abcdefg"}, {"abcdefg","hijklpmnop","hijklmnop","qrstuv","wxyz","abcdefg","abcdefg"}) , {"abcdefg","hijklpmnop","hijklmnop","qrstuv","wxyz","abcdefg","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"banana","date","apple"}, {"banana","date","apple"}) , {"banana","date","apple"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}, {"AbCdEfG","HijKlMnOp","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}, {"HijKlMnOp","abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}) , {"HijKlMnOp","abcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuvwxy","UuVvWwVXxYyZz","z","UuVvWwVXxYyZz","UuVvWwVXxYyZz"}, {"abcdefg","hijklmnop","qrstuvwxy","UuVvWwVXxYyZz","z","UuVvWwVXxYyZz","UuVvWwVXxYyZz"}) , {"abcdefg","hijklmnop","qrstuvwxy","UuVvWwVXxYyZz","z","UuVvWwVXxYyZz","UuVvWwVXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","YyouOU"}, {"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","YyouOU"}) , {"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","YyouOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","h","how","you","how","are"}, {"hello","qrstuabcdefgv","h","how","you","how","are"}) , {"hello","qrstuabcdefgv","h","how","you","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","qrstuv","wxyAaBbCcDdEeFfGgHhIiJjKrSsT"}, {"HiOjKlMnOp","AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}) , {"HiOjKlMnOp","AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WxyZ","world","how","worldd","are","dog","you","hoTydBzw","world"}, {"WxyZ","world","how","worldd","are","dog","you","hoTydBzw","world"}) , {"WxyZ","world","how","worldd","are","dog","you","hoTydBzw","world"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"how","are","yoU","yoyU","how","yoyU"}, {"how","are","yoU","yoyU","how","yoyU"}) , {"how","are","yoU","yoyU","how","yoyU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hjumps123Cherry45ello","hello","qrstuabcdefgv","h","how","are"}, {"hjumps123Cherry45ello","hello","qrstuabcdefgv","h","how","are"}) , {"hjumps123Cherry45ello","hello","qrstuabcdefgv","h","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"wxythez","abcdefg","hijklmno12345p","hijklmnop","qrstuv","z"}, {"wxythez","abcdefg","hijklmno12345p","hijklmnop","qrstuv","z"}) , {"wxythez","abcdefg","hijklmno12345p","hijklmnop","qrstuv","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOW","HOW"}, {"HOW","HOW"}) , {"HOW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AR","HLELLO","WORLD","E","WORLLD","YOU","YOU"}, {"AR","HLELLO","WORLD","E","WORLLD","YOU","YOU"}) , {"AR","HLELLO","WORLD","E","WORLLD","YOU","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}, {"HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}) , {"HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlqrstuabcdefgvMnOp","HijKlMnOp","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp"}, {"AbCdEfG","HijKlqrstuabcdefgvMnOp","HijKlMnOp","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp"}) , {"AbCdEfG","HijKlqrstuabcdefgvMnOp","HijKlMnOp","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","wxyAaBbCcDdEeFfGgHhIiJjKrSsT"}, {"HiOjKlMnOp","AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}) , {"HiOjKlMnOp","AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OOU","OU","HOW"}, {"HELLO","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OOU","OU","HOW"}) , {"HELLO","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OOU","OU","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","qrstudatev","wxyz","qrstuv"}, {"abcdefg","qrstudatev","wxyz","qrstuv"}) , {"abcdefg","qrstudatev","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"zz","cherry","abcdefg","hijklmnop","qrstuvwxy","z","zz","acdefg","z"}, {"zz","cherry","abcdefg","hijklmnop","qrstuvwxy","z","zz","acdefg","z"}) , {"zz","cherry","abcdefg","hijklmnop","qrstuvwxy","z","zz","acdefg","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","WORLD","WWORLLD","ARE","WORLLD","YOU"}, {"YyouOU","HLELLO","WORLD","WWORLLD","ARE","WORLLD","YOU"}) , {"YyouOU","HLELLO","WORLD","WWORLLD","ARE","WORLLD","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklamet","HijKlMnOphijklmnop","xfox","wxyz","hijklmnop","hijklmnop","abcdefg"}, {"abcdefg","hijklamet","HijKlMnOphijklmnop","xfox","wxyz","hijklmnop","hijklmnop","abcdefg"}) , {"abcdefg","hijklamet","HijKlMnOphijklmnop","xfox","wxyz","hijklmnop","hijklmnop","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","hi","admarein","","the"}, {"the","hi","admarein","","the"}) , {"the","hi","admarein","","the"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cherry","abcdefg","qrstuvwxy","z","qrstuvwxy","abcdefg"}, {"cherry","abcdefg","qrstuvwxy","z","qrstuvwxy","abcdefg"}) , {"cherry","abcdefg","qrstuvwxy","z","qrstuvwxy","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","cherry","hibana","date"}, {"apple","banana","cherry","hibana","date"}) , {"apple","banana","cherry","hibana","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","wxyzYOYUz","AaBbCcDdEeFfGgHhIiJjKrSsT","WORLD","datHOWe","ARE","YOU","WORLD","WORLD"}, {"HELLO","wxyzYOYUz","AaBbCcDdEeFfGgHhIiJjKrSsT","WORLD","datHOWe","ARE","YOU","WORLD","WORLD"}) , {"HELLO","wxyzYOYUz","AaBbCcDdEeFfGgHhIiJjKrSsT","WORLD","datHOWe","ARE","YOU","WORLD","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"h","how","are","Bananayou"}, {"h","how","are","Bananayou"}) , {"h","how","are","Bananayou"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HWOW","HELLO","WHWOW","WORLD","HOW","YOU","YOU"}, {"YyouOU","HWOW","HELLO","WHWOW","WORLD","HOW","YOU","YOU"}) , {"YyouOU","HWOW","HELLO","WHWOW","WORLD","HOW","YOU","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","QrStUvW","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","UuVvWwXxYyZz","UuVvWwXxYyZz"}, {"abcdefg","hijklmnop","qrstuv","wxyz"}) , {"abcdefg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","ARHijKlMnOpE","HELLO","WORLD","HOW","AAppleRE"}, {"YyouOU","ARHijKlMnOpE","HELLO","WORLD","HOW","AAppleRE"}) , {"YyouOU","ARHijKlMnOpE","HELLO","WORLD","HOW","AAppleRE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","admin","Banana","admin"}, {"brown","admin","Banana","admin"}) , {"brown","admin","Banana","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"hi","admin","hi"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fg","qrstuv"}, {"fg","qrstuv"}) , {"fg","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","OyoUU","Ohi","WORLD","HOW"}, {"HELLO","WORLD","HOW","OyoUU","Ohi","WORLD","HOW"}) , {"HELLO","WORLD","HOW","OyoUU","Ohi","WORLD","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"over","qrstuvwxworldy"}, {"over","qrstuvwxworldy"}) , {"over","qrstuvwxworldy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WHOW","HELLO","WORLD","HOW","HOW"}, {"WHOW","HELLO","WORLD","HOW","HOW"}) , {"WHOW","HELLO","WORLD","HOW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hhi","hi","admin"}, {"hhi","hi","admin"}) , {"hhi","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","hi","adnmin"}, {"hello","hi","adnmin"}) , {"hello","hi","adnmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fg","hijklmnophijklmnop","qrstuv","wxyz","hijklmnop","fg"}, {"fg","hijklmnophijklmnop","qrstuv","wxyz","hijklmnop","fg"}) , {"fg","hijklmnophijklmnop","qrstuv","wxyz","hijklmnop","fg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WOD","WORLD","datHOWe","ARE","WORLD","WORLD"}, {"HELLO","WOD","WORLD","datHOWe","ARE","WORLD","WORLD"}) , {"HELLO","WOD","WORLD","datHOWe","ARE","WORLD","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"h","how","are","Bananayou","how"}, {"h","how","are","Bananayou","how"}) , {"h","how","are","Bananayou","how"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","HOWW","Cherry","Datee","Banana"}, {"Banana","HOWW","Cherry","Datee","Banana"}) , {"Banana","HOWW","Cherry","Datee","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","qrhstuvwxy","HOWW","Date","Banana","Date"}, {"Banana","qrhstuvwxy","HOWW","Date","Banana","Date"}) , {"Banana","qrhstuvwxy","HOWW","Date","Banana","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","you","dolor","jumps","amet","consectetur","adipiscing","elit"}, {"Lorem","ipsum","you","dolor","jumps","amet","consectetur","adipiscing","elit"}) , {"Lorem","ipsum","you","dolor","jumps","amet","consectetur","adipiscing","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"dolor","apple","banana","banana"}, {"dolor","apple","banana","banana"}) , {"dolor","apple","banana","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HWOW","WORLD","YyouOhjumps123Cherry45elloU","HOW","YyouOU","YyouOU"}, {"YyouOU","HWOW","WORLD","YyouOhjumps123Cherry45elloU","HOW","YyouOU","YyouOU"}) , {"YyouOU","HWOW","WORLD","YyouOhjumps123Cherry45elloU","HOW","YyouOU","YyouOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","you","dolor","sit","amet","consectetur","adipiscing","YyouOUconsectetur"}, {"Lorem","ipsum","you","dolor","sit","amet","consectetur","adipiscing","YyouOUconsectetur"}) , {"Lorem","ipsum","you","dolor","sit","amet","consectetur","adipiscing","YyouOUconsectetur"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"aadmin","adminHELLOqrhstuvwxy","hi","hi","aadmin"}, {"aadmin","adminHELLOqrhstuvwxy","hi","hi","aadmin"}) , {"aadmin","adminHELLOqrhstuvwxy","hi","hi","aadmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YoyouOU","YyouOU","HWWOW","WORLD","YyouOhjumps123Cherry45elloU","YyouOU","YyouOU"}, {"YoyouOU","YyouOU","HWWOW","WORLD","YyouOhjumps123Cherry45elloU","YyouOU","YyouOU"}) , {"YoyouOU","YyouOU","HWWOW","WORLD","YyouOhjumps123Cherry45elloU","YyouOU","YyouOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"abcdefg","hijklmnop","wxyz"}) , {"abcdefg","hijklmnop","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","abcdefg","hijklmnopwxyz","qrstuv","abcdefg","orver"}, {"HijKlMnOp","abcdefg","hijklmnopwxyz","qrstuv","abcdefg","orver"}) , {"HijKlMnOp","abcdefg","hijklmnopwxyz","qrstuv","abcdefg","orver"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","aadmin"}, {"hi","aadmin"}) , {"hi","aadmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","9876543210","YyouOU"}, {"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","9876543210","YyouOU"}) , {"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","9876543210","YyouOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","admarein","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OOU","OU","HOW"}, {"HELLO","admarein","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OOU","OU","HOW"}) , {"HELLO","admarein","YOU","HOWqrstuabcdefgv","HOWW","WORLD","HOW","OOU","OU","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Cherry","date"}, {"Cherry","date"}) , {"Cherry","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","h","how","are","you","how","are","are"}, {"hello","qrstuabcdefgv","h","how","are","you","how","are","are"}) , {"hello","qrstuabcdefgv","h","how","are","you","how","are","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hjumps123Cherry45ello","hello","h","how","are"}, {"hjumps123Cherry45ello","hello","h","how","are"}) , {"hjumps123Cherry45ello","hello","h","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","are","hello"}, {}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HELLO","HOW","YOU"}, {"YyouOU","HELLO","HOW","YOU"}) , {"YyouOU","HELLO","HOW","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLOqrhstuvwxy","HO","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}, {"HELLOqrhstuvwxy","HO","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}) , {"HELLOqrhstuvwxy","HO","WORLD","HOW","OyoUU","ARE","Ohi","WORLD","HOW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","wxyAaBbCcDdEeFfGgHhIiJjKrSsT","hijklmnop","wxyAaBbCcDdEeFfGgHhIiJjKrSsT"}, {"HiOjKlMnOp","AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}) , {"HiOjKlMnOp","AbCdEfG","HijKlMnOp","QrStUv","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({}, {"abcdefg","abcdefg"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","qrstuv","wxyz","abyoucdefg","qrstuv","abcdefg","qrstuv"}, {"abcdefg","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","qrstuv","wxyz","abyoucdefg","qrstuv","abcdefg","qrstuv"}) , {"abcdefg","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","qrstuv","wxyz","abyoucdefg","qrstuv","abcdefg","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"cherry","abcdefg","hijklmnop","qrhstuvwxy","abcdhelloefg","z","qrstuvwxy","hijklmnop"}, {"cherry","abcdefg","hijklmnop","qrhstuvwxy","abcdhelloefg","z","qrstuvwxy","hijklmnop"}) , {"cherry","abcdefg","hijklmnop","qrhstuvwxy","abcdhelloefg","z","qrstuvwxy","hijklmnop"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","lahhellozy","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog","fox"}, {"The","lahhellozy","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog","fox"}) , {"The","lahhellozy","quick","brown","xfox","fox","jumps","sit","over","the","lazy","OU","dog","fox"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","YOU","HOWqrstuabcdfgv","HOWW","WORLD","HOW","OU","OU","HOW"}, {"HELLO","YOU","HOWqrstuabcdfgv","HOWW","WORLD","HOW","OU","OU","HOW"}) , {"HELLO","YOU","HOWqrstuabcdfgv","HOWW","WORLD","HOW","OU","OU","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","QrStUv","AbCdEfG"}, {"HijKlMnOp","QrStUv","AbCdEfG"}) , {"HijKlMnOp","QrStUv","AbCdEfG"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","fg","hijklmnop","abyoucdefg","qrstuv","wxyz","hijklmnop","qrstuv","qrstuv"}, {"abcdefg","fg","hijklmnop","abyoucdefg","qrstuv","wxyz","hijklmnop","qrstuv","qrstuv"}) , {"abcdefg","fg","hijklmnop","abyoucdefg","qrstuv","wxyz","hijklmnop","qrstuv","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","AR","OU","amet","WORLD","O","OU"}, {"HELLO","WORLD","HOW","AR","OU","amet","WORLD","O","OU"}) , {"HELLO","WORLD","HOW","AR","OU","amet","WORLD","O","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrstuvwxy","zz","z","z"}, {"qrstuvwxy","zz","z","z"}) , {"qrstuvwxy","zz","z","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","amet","ametUuVvWwVXxYyZz","adipiscing","elit"}, {"Lorem","ipsum","dolor","sit","amet","ametUuVvWwVXxYyZz","adipiscing","elit"}) , {"Lorem","ipsum","dolor","sit","amet","ametUuVvWwVXxYyZz","adipiscing","elit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","OOyoUUUAREThe","AREThe","cherry","12345Cherry","cherry"}, {"apple","OOyoUUUAREThe","AREThe","cherry","12345Cherry","cherry"}) , {"apple","OOyoUUUAREThe","AREThe","cherry","12345Cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","chery","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","chery","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","chery","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","hibana","ARE","YOU","ARE"}, {"HELLO","WORLD","HOW","hibana","ARE","YOU","ARE"}) , {"HELLO","WORLD","HOW","hibana","ARE","YOU","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","OyoUU","brcoquickwn","ARE","Ohi","WORLD","HOW"}, {"HELLO","WORLD","HOW","OyoUU","brcoquickwn","ARE","Ohi","WORLD","HOW"}) , {"HELLO","WORLD","HOW","OyoUU","brcoquickwn","ARE","Ohi","WORLD","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","how","are","you","how","are"}, {"hello","how","are","you","how","are"}) , {"hello","how","are","you","how","are"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brown","Banana","admin","worl","Banana"}, {"brown","Banana","admin","worl","Banana"}) , {"brown","Banana","admin","worl","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOW","HOW","HOHW","HOW"}, {"HOW","HOW","HOHW","HOW"}) , {"HOW","HOW","HOHW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"qrstuvwxy","zz","z","z","z","zz"}, {"qrstuvwxy","zz","z","z","z","zz"}) , {"qrstuvwxy","zz","z","z","z","zz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HLELLO","WOORLD","HOW","AERE","YOU","AERE","AERE"}, {"HLELLO","WOORLD","HOW","AERE","YOU","AERE","AERE"}) , {"HLELLO","WOORLD","HOW","AERE","YOU","AERE","AERE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"yoyU","wxythez","12ipsum7890","hijklmno12345p","hijklmnop","qrstuv","z"}, {"yoyU","wxythez","12ipsum7890","hijklmno12345p","hijklmnop","qrstuv","z"}) , {"yoyU","wxythez","12ipsum7890","hijklmno12345p","hijklmnop","qrstuv","z"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOW","brWORL9876543210Dwn","HOW"}, {"HOW","brWORL9876543210Dwn","HOW"}) , {"HOW","brWORL9876543210Dwn","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"jumps123Cherry45","h","how","are","HiOjKlMnOp","you"}, {"jumps123Cherry45","h","how","are","HiOjKlMnOp","you"}) , {"jumps123Cherry45","h","how","are","HiOjKlMnOp","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlqrstuabcdefgvMnOp","ddate","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp","HijKlqrstuabcdefgvMnOp"}, {"AbCdEfG","HijKlqrstuabcdefgvMnOp","ddate","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp","HijKlqrstuabcdefgvMnOp"}) , {"AbCdEfG","HijKlqrstuabcdefgvMnOp","ddate","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","HijKlMnOp","HijKlMnOp","HijKlqrstuabcdefgvMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","OOU","abcdefg"}, {"abcdefg","OOU","abcdefg"}) , {"abcdefg","OOU","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","h","how","are","you","how","are","HijKlMnOp","you"}, {"hello","qrstuabcdefgv","h","how","are","you","how","are","HijKlMnOp","you"}) , {"hello","qrstuabcdefgv","h","how","are","you","how","are","HijKlMnOp","you"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORL9876543210D","HOW","ARE","HELOHELLO","OU"}, {"HELLO","WORL9876543210D","HOW","ARE","HELOHELLO","OU"}) , {"HELLO","WORL9876543210D","HOW","ARE","HELOHELLO","OU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fox","jumps123Cherry45","WORLD","HOW","UOU"}, {"fox","jumps123Cherry45","WORLD","HOW","UOU"}) , {"fox","jumps123Cherry45","WORLD","HOW","UOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","hi"}, {"hello","hi"}) , {"hello","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","cherry","date","datHOWe","12345Cherry"}, {"apple","cherry","date","datHOWe","12345Cherry"}) , {"apple","cherry","date","datHOWe","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Apple","Banana","HOWW","Cherry","Bnana"}, {"Apple","Banana","HOWW","Cherry","Bnana"}) , {"Apple","Banana","HOWW","Cherry","Bnana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","YOUUuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","HijKlMnOp","UuVvWwXxYyZz"}, {"abcdefg","hijklmnop","cherry","qrstuv","wxyz","abcdefg"}) , {"abcdefg","hijklmnop","cherry","qrstuv","wxyz","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","browWWORLLD","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}, {"The","browWWORLLD","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}) , {"The","browWWORLLD","xfox","fox","jumps","sit","over","the","lazy","OU","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"dolor","banaqrstudatev","apple","banana","banana"}, {"dolor","banaqrstudatev","apple","banana","banana"}) , {"dolor","banaqrstudatev","apple","banana","banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YOU","AaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","admin"}, {"YOU","AaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","admin"}) , {"YOU","AaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"The","quick","brown","fox","jumps","over","the","lazy","sit"}, {"amaet","Lorem","ipsum","dolor","sit","amet","consectetur","adipiscing","elit","sit"}) , {"The","quick","brown","fox","jumps","over","the","lazy","sit"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","banana","apOUple","hibana","date"}, {"apple","banana","apOUple","hibana","date"}) , {"apple","banana","apOUple","hibana","date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmnop","wxyAaBbCcDdEeFfGgHhIiJjKrSsT","hijklmnop","wxyAaBbCcDdEeFfGgHhIiJjKrSsT"}, {"HiOjKlMnOp","OyoUU","HijKlMnOp","QrStUv","WxyZ"}) , {"HiOjKlMnOp","OyoUU","HijKlMnOp","QrStUv","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"A12345CherryEhi","the","hi","HOWqrstuabcdefgv",""}, {"A12345CherryEhi","the","hi","HOWqrstuabcdefgv",""}) , {"A12345CherryEhi","the","hi","HOWqrstuabcdefgv",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"brockwn","Banana"}, {"brockwn","Banana"}) , {"brockwn","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HOW","HOW","HOHW","HOW","HOW"}, {"HOW","HOW","HOHW","HOW","HOW"}) , {"HOW","HOW","HOHW","HOW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","how","howw","are","you","hoTydBzw","how"}, {"hello","world","how","howw","are","you","hoTydBzw","how"}) , {"hello","world","how","howw","are","you","hoTydBzw","how"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","WORLD","HOW","ARE"}, {"YyouOU","WORLD","HOW","ARE"}) , {"YyouOU","WORLD","HOW","ARE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","AEbCdEfG","yoU","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsWHOWT","HijKlMnOp","HijKlMnOp"}, {"AbCdEfG","AEbCdEfG","yoU","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsWHOWT","HijKlMnOp","HijKlMnOp"}) , {"AbCdEfG","AEbCdEfG","yoU","date","QrStUv","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsWHOWT","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YOYU","hi","admin"}, {"YOYU","hi","admin"}) , {"YOYU","hi","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hhello","hello","world","how","are","you","how"}, {"HELLO","WORLD","HOW","ARE","YOU"}) , {"HELLO","WORLD","HOW","ARE","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"fg","hijklmnop","qrstuv","wxyz"}, {"fg","hijklmnop","qrstuv","wxyz"}) , {"fg","hijklmnop","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YOU","hi"}, {"YOU","hi"}) , {"YOU","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmno12345p","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwVXxYyZz"}) , {"abcdefg","hijklmno12345p","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"WWORLD","YyouOU","HLELLO","WORLD","ARE","WORLLD","YOU"}, {"WWORLD","YyouOU","HLELLO","WORLD","ARE","WORLLD","YOU"}) , {"WWORLD","YyouOU","HLELLO","WORLD","ARE","WORLLD","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"ipsum","abcdefg","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","qrstuv","wxyz","abyoucdefg","qrstuv","abcdefg","qrstuv","wxyz"}, {"ipsum","abcdefg","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","qrstuv","wxyz","abyoucdefg","qrstuv","abcdefg","qrstuv","wxyz"}) , {"ipsum","abcdefg","hijklmnop","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","qrstuv","wxyz","abyoucdefg","qrstuv","abcdefg","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXyxYyZz","HijKlMnOp"}, {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg"}) , {"abcdefg","hijklmnop","qrstuv","wxyz","abcdefg","qrstuv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","qrstuabcdefgv","how","you","how"}, {"hello","qrstuabcdefgv","how","you","how"}) , {"hello","qrstuabcdefgv","how","you","how"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"broquickwn","BadminHELLOqrhstuvwxynana","Banana"}, {"broquickwn","BadminHELLOqrhstuvwxynana","Banana"}) , {"broquickwn","BadminHELLOqrhstuvwxynana","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg","abcdefg"}, {"HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg","abcdefg"}) , {"HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"apple","OOyoUUUAREThe","AREThe","amet","cherry","amet"}, {"apple","OOyoUUUAREThe","AREThe","amet","cherry","amet"}) , {"apple","OOyoUUUAREThe","AREThe","amet","cherry","amet"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}) , {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","TydBz","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXyxYyZz","HijKlMnOp"}, {"hijklmnop","qrstuv","wxyz","abcdefg","qrstqrstuvwxworldyuv","abcdefg"}) , {"hijklmnop","qrstuv","wxyz","abcdefg","qrstqrstuvwxworldyuv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"BaHOWqrstuabcdefgvnana","Banana","Banana"}, {"BaHOWqrstuabcdefgvnana","Banana","Banana"}) , {"BaHOWqrstuabcdefgvnana","Banana","Banana"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","WORLD","HOW"}, {"YyouOU","WORLD","HOW"}) , {"YyouOU","WORLD","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","TydBz","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXyxYyZz","HijKlMnOp"}, {"AbCdEfG","TydBz","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXyxYyZz","HijKlMnOp"}) , {"AbCdEfG","TydBz","date","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXyxYyZz","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","HOW","AR","OU","amet","WORLD","O","OU","amet"}, {"HELLO","WORLD","HOW","AR","OU","amet","WORLD","O","OU","amet"}) , {"HELLO","WORLD","HOW","AR","OU","amet","WORLD","O","OU","amet"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLOqrhstuvwxy","wxyzYOYU","brown","hi","hi","HELLOqrhstuvwxy"}, {"HELLOqrhstuvwxy","wxyzYOYU","brown","hi","hi","HELLOqrhstuvwxy"}) , {"HELLOqrhstuvwxy","wxyzYOYU","brown","hi","hi","HELLOqrhstuvwxy"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","QrStUv","WxyZ","WxyZ"}, {"AbCdEfG","QrStUv","WxyZ","WxyZ"}) , {"AbCdEfG","QrStUv","WxyZ","WxyZ"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hello","world","are","you"}, {""}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YoyouOU","YyouOU","HWWOW","WORLD","YyouOhjumps123Cherry45elloU","YyouOU","YyouO"}, {"YoyouOU","YyouOU","HWWOW","WORLD","YyouOhjumps123Cherry45elloU","YyouOU","YyouO"}) , {"YoyouOU","YyouOU","HWWOW","WORLD","YyouOhjumps123Cherry45elloU","YyouOU","YyouO"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"banana","date","apple","ARHijKlMnOpE"}, {"banana","date","apple","ARHijKlMnOpE"}) , {"banana","date","apple","ARHijKlMnOpE"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","hijklmno12345p","wxyz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwVXxYyZz","QrStUvWxyZ"}) , {"abcdefg","hijklmno12345p","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","UuVvWwVXxYyZz","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}, {"abcdefg","UuVvWwVXxYyZz","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}) , {"abcdefg","UuVvWwVXxYyZz","wxyz","abcdefg","qrstuabcdefgv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WORLD","datHOWe","ARE","WORLD","WORLD","WORLD","WORLD"}, {"HELLO","WORLD","datHOWe","ARE","WORLD","WORLD","WORLD","WORLD"}) , {"HELLO","WORLD","datHOWe","ARE","WORLD","WORLD","WORLD","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","ARHijKlMnOpE","HELLO","WORLD","HOW","AAppleRE","HOW"}, {"YyouOU","ARHijKlMnOpE","HELLO","WORLD","HOW","AAppleRE","HOW"}) , {"YyouOU","ARHijKlMnOpE","HELLO","WORLD","HOW","AAppleRE","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefag","qrstudatev","wxyz","qrstuv"}, {"abcdefag","qrstudatev","wxyz","qrstuv"}) , {"abcdefag","qrstudatev","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","hi","HOWqrstuabcdefgv","admin","hi"}, {"the","hi","HOWqrstuabcdefgv","admin","hi"}) , {"the","hi","HOWqrstuabcdefgv","admin","hi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBb12345CherryfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}, {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBb12345CherryfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}) , {"AbCdEfG","HijKlMnOp","QrStUvWxyZ","AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz","AaBb12345CherryfGgHhIiJjKkLlMmNnOoPpQqRrSsT","UuVvWwXxYyZz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"A12345CherryEhi","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy","A12345CherryEhi"}, {"A12345CherryEhi","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy","A12345CherryEhi"}) , {"A12345CherryEhi","abcdefg","hijklmnop","qrhstuvwxy","z","qrstuvwxy","A12345CherryEhi"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Lorem","ipsum","dolor","sit","consectetur","adipiscing","dolor"}, {"The","quick","brown","fox","jumps","over","the","lazy","dog"}) , {"The","quick","brown","fox","jumps","over","the","lazy","dog"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"12345","56789qsrstuv","56789"}, {"12345","56789qsrstuv","56789"}) , {"12345","56789qsrstuv","56789"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YoyouOU","YyouOU","HWWOW","WORLD","YyouOU","YyouO"}, {"YoyouOU","YyouOU","HWWOW","WORLD","YyouOU","YyouO"}) , {"YoyouOU","YyouOU","HWWOW","WORLD","YyouOU","YyouO"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"QrStUvWxyZ","hijklmno12345p","hijklmnop","HijKlqrstuabcdefgvMnOp","wxyz","qrstuv"}, {"QrStUvWxyZ","hijklmno12345p","hijklmnop","HijKlqrstuabcdefgvMnOp","wxyz","qrstuv"}) , {"QrStUvWxyZ","hijklmno12345p","hijklmnop","HijKlqrstuabcdefgvMnOp","wxyz","qrstuv"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AaBbCcDdEeFfGgHhIiJjKrSsT","Banana","admin","brown","admin","admin","admin"}, {"AaBbCcDdEeFfGgHhIiJjKrSsT","Banana","admin","brown","admin","admin","admin"}) , {"AaBbCcDdEeFfGgHhIiJjKrSsT","Banana","admin","brown","admin","admin","admin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","YOU","HOWqrstuabcdfgv","HOWW","WORLD","HOW","OU","OU","HOW","HOW"}, {"HELLO","YOU","HOWqrstuabcdfgv","HOWW","WORLD","HOW","OU","OU","HOW","HOW"}) , {"HELLO","YOU","HOWqrstuabcdfgv","HOWW","WORLD","HOW","OU","OU","HOW","HOW"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","hi","amdmin","HOWqrstuabcdefgv","admin",""}, {"the","hi","amdmin","HOWqrstuabcdefgv","admin",""}) , {"the","hi","amdmin","HOWqrstuabcdefgv","admin",""}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"afbcdefg","qrstuv","wxyz"}, {"afbcdefg","qrstuv","wxyz"}) , {"afbcdefg","qrstuv","wxyz"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hhello","hello","world","how","are","you","h"}, {"hhello","hello","world","how","are","you","h"}) , {"hhello","hello","world","how","are","you","h"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"Banana","HijKlMnOp","hijklmno12345p","HOWW","Cherry","Banana","HOWW","Date"}, {"Banana","HijKlMnOp","hijklmno12345p","HOWW","Cherry","Banana","HOWW","Date"}) , {"Banana","HijKlMnOp","hijklmno12345p","HOWW","Cherry","Banana","HOWW","Date"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","OOyoUUUAametRETheYyouOU"}, {"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","OOyoUUUAametRETheYyouOU"}) , {"YyouOU","HWOW","WORLD","HOW","YOU","YyouOU","OOyoUUUAametRETheYyouOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abcdefg","abfcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}, {"abcdefg","abfcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}) , {"abcdefg","abfcdefg","hijklmnopwxyz","qrstuv","abcdefg","qrstuabcdefgv","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"the","Datehi","t","HOWqrstuabcdefgv","adnmin"}, {"the","Datehi","t","HOWqrstuabcdefgv","adnmin"}) , {"the","Datehi","t","HOWqrstuabcdefgv","adnmin"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"AbCdEfG","HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","chery","QrStUv","HijKlMnOp","HijKlMnOp","HijKlMnOp"}, {"AbCdEfG","HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","chery","QrStUv","HijKlMnOp","HijKlMnOp","HijKlMnOp"}) , {"AbCdEfG","HijKlMnOp","dateAaBbCcDdEeFfhGgHhIiJjKkLlbMmNnOoPpQqRrSsT","chery","QrStUv","HijKlMnOp","HijKlMnOp","HijKlMnOp"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"HELLO","WOD","WORLD","datHOWe","ARE","WORLD"}, {"HELLO","WOD","WORLD","datHOWe","ARE","WORLD"}) , {"HELLO","WOD","WORLD","datHOWe","ARE","WORLD"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"YyouOU","HLELLO","HOW","WORLD","HOW","ARE","YOU","YOU"}, {"YyouOU","HLELLO","HOW","WORLD","HOW","ARE","YOU","YOU"}) , {"YyouOU","HLELLO","HOW","WORLD","HOW","ARE","YOU","YOU"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"OOyoUUUAREThe","AREThe","cherry","12345Cherry"}, {"OOyoUUUAREThe","AREThe","cherry","12345Cherry"}) , {"OOyoUUUAREThe","AREThe","cherry","12345Cherry"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"abdefg","HWOW","abcdefg","hijklmnop","wxyz","abcdefg"}, {"abdefg","HWOW","abcdefg","hijklmnop","wxyz","abcdefg"}) , {"abdefg","HWOW","abcdefg","hijklmnop","wxyz","abcdefg"}))){ tests_passed++; } total_tests++;

    if((issame(total_match({"hi","quickadmin","admin"}, {"hi","quickadmin","admin"}) , {"hi","quickadmin","admin"}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


