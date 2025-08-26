#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Custom Comparator for sorting the vector of strings by their lengths and then alphabetically
struct myComp {
    bool operator()(const string& a, const string& b)  {
        if (a.size() == b.size()) 
            return a < b; //if length is same then compare lexicographically
        
        return a.size() < b.size();  
    }
};

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> evenLengthWords; 
    
    // copy strings with even lengths while maintaining original order of words in the list
    copy_if(lst.begin(), lst.end(), back_inserter(evenLengthWords), [](const string& str) { return str.length() % 2 == 0;});
    
    // sort the words by their length and then alphabetically
    stable_sort(evenLengthWords.begin(), evenLengthWords.end(), myComp());
  
    return evenLengthWords;
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

    if((issame(sorted_list_sum({"aa", "a", "aaa"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"school", "AI", "asdf", "b"}) , {"AI", "asdf", "school"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"d", "b", "c", "a"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"d", "dcba", "abcd", "a"}) , {"abcd", "dcba"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"AI", "ai", "au"}) , {"AI", "ai", "au"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a", "b", "b", "c", "c", "a"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) , {"cc", "dd", "aaaa", "bbbb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","aaa"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"school","AI","asdf","b"}) , {"AI","asdf","school"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"d","b","c","a"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"d","dcba","abcd","a"}) , {"abcd","dcba"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"AI","ai","au"}) , {"AI","ai","au"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","b","b","c","c","a"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbbb","dd","cc"}) , {"cc","dd","aaaa","bbbb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"programming","python","java","ruby"}) , {"java","ruby","python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","orange","banana","grapefruit"}) , {"banana","orange","grapefruit"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efgh","ijkl","mnop"}) , {"abcd","efgh","ijkl","mnop"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","world","this","is","a","test"}) , {"is","test","this"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dog","cat","bird","fish","lizard"}) , {"bird","fish","lizard"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","ddd"}) , {"bb","aaaa","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"the","quick","fox","jumps","over","the","lazy","dog"}) , {"lazy","over"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"python","is","a","popular","language"}) , {"is","python","language"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"this","list","has","words","of","different","lengths"}) , {"of","list","this"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"racecar","deified","civic","level","rotor"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bb","cccc","ddd"}) , {"bb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"efgh","ijkl","mnop"}) , {"efgh","ijkl","mnop"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"popuolar","python","is","","popular","language"}) , {"","is","python","language","popuolar"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","world","this","jumpshello","telizardst","istest","a","test"}) , {"test","this","istest","jumpshello","telizardst"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcdifferentd","efgh","ijkl","mnop"}) , {"efgh","ijkl","mnop"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aajavaa","fox","cccc","ddd"}) , {"cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"programming","python","","java","ruby"}) , {"","java","ruby","python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","ccccc","ddd"}) , {"bb","aaaa","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"popuolar","lizardpython","is","","popular","jumps"}) , {"","is","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"popuolar","is","","popular","language"}) , {"","is","language","popuolar"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","popuolar","lizardpython","is","","popular","jumps"}) , {"","is","popuolar","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"python","is","popular","language","language"}) , {"is","python","language","language"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aajavaa","fox","ddd","fox"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"programming","python","ruby"}) , {"ruby","python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bb","cccc","ddd","ddd"}) , {"bb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","lizardpython","is","","popular"}) , {"","is","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","lizardpython","is","popular"}) , {"is","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"this","list","halevels","words","of","different","lengths"}) , {"of","list","this","halevels"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"the","quick","hello","fox","jumps","over","the","lazy","dog"}) , {"lazy","over"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aajavaa","appleffoxox","ddd","fox","aajavaa"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","ojumpsnge","banana","bananna","grapefruit"}) , {"banana","grapefruit"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dog","cat","bird","fish","lizard","fish"}) , {"bird","fish","fish","lizard"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"popuolar","python","is","hello"}) , {"is","python","popuolar"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","st","world","this","is","a","test","this"}) , {"is","st","test","this","this"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aapple","orange","banana","aapple","banana"}) , {"aapple","aapple","banana","banana","orange"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","world","this","jumpshello","telizardst","hetestllo","istest","a","test","a"}) , {"test","this","istest","jumpshello","telizardst"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","ccccc","cccc","ddd"}) , {"bb","aaaa","cccc","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aajaisaa","ddd","fox"}) , {"aajaisaa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hlizardello","hello","world","this","has","a","test"}) , {"test","this"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","world","this","thiis","jumpshello","telizardst","istest","a","test","istest"}) , {"test","this","istest","istest","jumpshello","telizardst"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","world","this","thiis","jumpshello","telizardst","istest","a","test"}) , {"test","this","istest","jumpshello","telizardst"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"python","java","ruby"}) , {"java","ruby","python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"banan","orange","banana","aapple","banana"}) , {"aapple","banana","banana","orange"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"quick","fox","jumps","over","the","lazy","dog"}) , {"lazy","over"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bb","a","orange","ddd","ddd"}) , {"bb","orange"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","banan","orange","banana","aapple","banana"}) , {"aapple","banana","banana","orange","poupular"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","popuolar","lizardpython","is","","popular","jumps"}) , {"","is","abcd","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","ccccc"}) , {"bb","aaaa","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"lizardplython","abcd","popuolar","lizardpython","is","","popular","jumps"}) , {"","is","abcd","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aajavajumpshelloa","appleffoxox","ddd","fox","aajavaa"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","popuolar","lizardpython","is","bananna","popular","jumps"}) , {"is","abcd","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"efgh","ijkl","mlizardplythonnop"}) , {"efgh","ijkl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","lizardpython","is","","popular",""}) , {"","","is","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","world","this","thiis","jumpshello","telizardst","istest","a","test","istest","this"}) , {"test","this","this","istest","istest","jumpshello","telizardst"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","popuolar","poupuar","lizardpython","is","","popular","jumps"}) , {"","is","popuolar","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"popuolar","python","is","sis","hello"}) , {"is","python","popuolar"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","ccccc","bb"}) , {"bb","bb","aaaa","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"racecar","deified","civic","level","rotor","racecar"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"programming","python","ruby","programming"}) , {"ruby","python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","ccccc","ddd","cccc","ddd"}) , {"bb","aaaa","cccc","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"popuolar","lizardpython","is","","popular","jumps","jumps"}) , {"","is","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","appleffoxoxle","banan","orange","banana","aapple","banana"}) , {"aapple","banana","banana","orange","poupular"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcdracecar","efgh","ijkl","abdracecar","mnop","mnop","mnop"}) , {"efgh","ijkl","mnop","mnop","mnop","abdracecar"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","popuolar","lizardpython","is","","popular","jumps","is"}) , {"","is","is","popuolar","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"racecar","cicvic","deified","civic","level","rotor","civic"}) , {"cicvic"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","lengths","ddd","cccc","ddd"}) , {"bb","aaaa","cccc","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aajavaa","aaajavaa","cccc"}) , {"cccc","aaajavaa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccccc","aaaa","cccc","ccccc"}) , {"aaaa","cccc","cccccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hello","world","this","a","hello"}) , {"this"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","ccccc","ddd","cccc","ddd","bb"}) , {"bb","bb","aaaa","cccc","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","cccc","","ccccc","ddd"}) , {"","bb","aaaa","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","world","popuolar","lizardpython","abcdifferentd","is","","popular","jumps"}) , {"","is","popuolar","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"the","quick","hello","fox","jumps","over","the","lazy","dog","the"}) , {"lazy","over"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","iss","lizardpython","is","popular"}) , {"is","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","popuolar","lizardpython","is","popuar","","popular","jumps"}) , {"","is","abcd","popuar","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"banan","orange","banana","aapple","aapccccccple","banana"}) , {"aapple","banana","banana","orange","aapccccccple"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"python","is","aa","a","language","aa","a"}) , {"aa","aa","is","python","language"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcdifferentd","efgh","ijkl","mnrubyp"}) , {"efgh","ijkl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbb","aaaa","bb","cccc","ccccc","cccc","ddd","lizardpython","ddd"}) , {"bb","aaaa","cccc","cccc","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"efgh","iijkl","ijkl","mnop"}) , {"efgh","ijkl","mnop"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","iss","lizardpython","poupulworldar","is","popular"}) , {"is","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"banan","banana","aapple","aapccccccple","banana"}) , {"aapple","banana","banana","aapccccccple"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"the","quick","hello","fox","jumps","over","the","lazy","the","fojavax","the"}) , {"lazy","over"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"this","racecarlengths","list","has","words","of","different","lengths","has"}) , {"of","list","this","racecarlengths"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","cccccc","bb","cccc","","ccccc","ddd"}) , {"","bb","aaaa","cccc","cccccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcdifferentd","abcdifferrentd","effgh","ijkl","mnop"}) , {"ijkl","mnop","abcdifferrentd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","appleffoxox","aajavaa"}) , {"cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"popuolar","python","is","sis","hello","hello"}) , {"is","python","popuolar"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","b","cccc","ccccc","ddd","cccc","ddd","bb"}) , {"bb","aaaa","cccc","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcdifferentd","efgh","ijkl","mnrubyp","efgh"}) , {"efgh","efgh","ijkl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccccc","aaaaa","cccc","ccccc","aaaaa"}) , {"cccc","cccccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"python","is","l","popular","language","language"}) , {"is","python","language","language"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dog","cat","bird","birdorange","fish","lizard","fish"}) , {"bird","fish","fish","lizard","birdorange"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jumlistps","popuolar","lizardpython","is","","popular","jumps","jumps"}) , {"","is","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"racecar","deified","civic","level","lizardplython","rotor"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jumlistps","popuolar","lizardpython","is","","jumps","jumps"}) , {"","is","popuolar","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","world","popuolar","lizardpython","abcdifferentd","is","","jumps"}) , {"","is","popuolar","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","popuolar","lizardpython","is","","popular","jumps","is","is"}) , {"","is","is","is","popuolar","poupular","lizardpython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"isappleffoxox","python","is","a","popular","language"}) , {"is","python","language"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"poupular","orange","banana","paapple","banana","paapple"}) , {"banana","banana","orange","poupular"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno"}) , {"bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","hi","jkl","mno"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","stu","vwxy"}) , {"bc","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","def","ghi","jkl","mno"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bbb","bb","b"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","ddddd","eeeeee"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","date","grape","kiwi","lemon"}) , {"date","kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ccc","dddd","ee","ffffff"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","awesome","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bb","b"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","","bb","bb"}) , {"","aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","ccccc","jkl","mno"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","klmno"}) , {"bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghj","bc","def","ghij","klmno"}) , {"bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","klmnccccco","ghij","klmno"}) , {"bc","ghij","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","def","klmnccccco","ghij","klmno"}) , {"aa","bc","ghij","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bb","b","a"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","ccccc","aklmncccccobcd","jkl","mno"}) , {"abcd","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","datdddd","grape","kiwi","lemon"}) , {"kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","aaaa","awesome","Python"}) , {"aaaa","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","def","klmnccccco","klmno"}) , {"aa","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","world","Programming","is","awesome","Programmaaaaing","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","sssssssklmno","p","qr","stu","vwxy"}) , {"bc","qr","ghij","vwxy","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","Python","Programming"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","aaa"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","Programming","is","awesome"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","Python","cccc","Programming"}) , {"is","cccc","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","ddef","klmnccccco","gcccchij","klmno"}) , {"bc","ddef","gcccchij","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ccc","dddd","ee","ffffff","ccc"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","dddd","ee","ffffff","ccc"}) , {"ee","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","bbbb","bb","b"}) , {"aa","bb","bbbb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hqri","abcd","efg","hiee","jkl","mno"}) , {"abcd","hiee","hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","awesome","Programmaaraaing","Python"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","zzzzz","banana","cherry","date","grape","kiwi","lemon"}) , {"date","kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","ccc","dddd","ee","ffffff","ccc"}) , {"bb","ee","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","def","klmnccccco","klmno","bc"}) , {"aa","bc","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","zzzzz","Programming","is","klmno","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","sssssss","banana","cherry","date","grape","lemon"}) , {"date","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bb","b","a","a"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","Python","def","ghij","kiwi"}) , {"ghij","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","Python","def","ghij","kiwi","kiwi"}) , {"ghij","kiwi","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","date","Python","Programming"}) , {"is","date","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","","Python"}) , {"","is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","date","Python","Programming","world"}) , {"is","date","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","rrrrrr"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","is","klmno","Pythonklmno","cccc","klmno"}) , {"is","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","ccccc","efg","ccccc","jkl","mno"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","cccc","bb","b","bbbb"}) , {"aa","bb","bbbb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","xxxxx"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","zzzz","yy","xxxxx","rrrrrr","sssssss","xxxxx"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"lemon","aaaa","bbb","ccc","dddd","ee","ffffff","ccc"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","","Pytthon"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","ddddate","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","dddd","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","dddd","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hellddddd","Hello","worlld","world","Programming","wdorld","aaaa","awesome","Python","awesome"}) , {"aaaa","Python","wdorld","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","yy"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"awesddefome","sttghju","world","wobcrld","Programming","is","awesome","Programmaaraaing","Python"}) , {"is","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","aaaaa","ccc","dddd","ee","ffffff","ccc"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datdddd","aaa","aa","","bb","bb"}) , {"","aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","klmnccccco","klmno"}) , {"aa","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","jkl","mno"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","world","Progra","ee","awesome","Programmaaaaing","Python"}) , {"ee","Progra","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghijHello","klmno","p","qr","stu","vwxy"}) , {"bc","qr","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","yy","def","ghij","klmno","klmno","ghij","def"}) , {"bc","yy","ghij","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","dddd","xxxxx","rrrrrr","sssssss","cccc"}) , {"ee","yy","cccc","cccc","dddd","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","woorld","Programming","is","klmno","nklmno","Python","Programming","Hello"}) , {"is","Python","nklmno","woorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","jkl","mno","jkl"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dbananaef","a","Python","def","ghij","kiwi","kiwi"}) , {"ghij","kiwi","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dbananaef","a","Python","def","ghij","ikiwi","kiwi"}) , {"ghij","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","world","Programming","is","Programmaaaaing","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bcc","def","ghijHello","bb","pp","qr","stu","vwxy"}) , {"bb","pp","qr","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","yy","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","klmnccccco","o","klmno"}) , {"aa","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","dddd","ee","ffffff"}) , {"ee","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","","Pytthon","world"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","yy","xxxxx","rrrrrr","sssssss"}) , {"yy","cccc","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghj","bc","def","gghij","klmno","def"}) , {"bc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","kiwi"}) , {"kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","o","sssssssklmno","p","stu","vwxy"}) , {"bc","ghij","vwxy","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","klmnccccco","klmno"}) , {"bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ee","yy","xxxxx","rrrrrr","sssssss","sssssss"}) , {"ee","yy","cccc","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","date","grapre","grape","kiwi","lemon"}) , {"date","kiwi","banana","cherry","grapre"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","ikiwi","awesome","Programmaaraaing","Python"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","ikiwi","bb","b","a"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bc","def","klmnccccco","klmno","bc"}) , {"bc","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","stu","vwxy","vwxy"}) , {"bc","qr","ghij","vwxy","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","klmnccccco","o","wobcrld"}) , {"aa","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","zzzz","xxxxx","rrrrrr","sssssss","xxxxx","sssssss"}) , {"ee","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","prld","Progra","ee","awesome","Progmmaaaaing","Python"}) , {"ee","prld","Progra","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","dddd","xxxxx","rrrrrr","xxxxxx","sssssss"}) , {"ee","yy","cccc","dddd","zzzz","rrrrrr","xxxxxx"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","ddddat","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","zzzz","ddddat","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","is","awesome","Programmaaraaing","Python"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","rrrrrr","rrrrrr"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","rrraarrr","zzzzz","Programming","is","klmno","Python"}) , {"is","Python","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","klmnccccco","klmno"}) , {"klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","ccccc","ddd","ddddd","eeeeee","aaa"}) , {"aa","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","o","bbbb","bb","b"}) , {"aa","bb","bbbb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","klmnccccco","o","cwobcrld"}) , {"aa","cwobcrld","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Progrprldamming","is","klmno","Python","cccc","Programming"}) , {"is","cccc","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","Prograomming","is","awesome","Programmaaaaing","Python"}) , {"is","Python","Prograomming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ddddd","eeeeee"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","ccccc","ddddd","eeeeee","aaa"}) , {"aa","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"yy","sttu","world","is","awesome","Programmaaraaing","Python","world"}) , {"is","yy","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","zzzz","xxxxx","rrrrrr","sssssss","xxxxx","sssssss"}) , {"cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","","klmno","aaa","aaa"}) , {""}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","Python","def","ghij","kiwi","kiwi","def"}) , {"ghij","kiwi","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klmno","abcd","efg","ccccc","aklmncccccobcd","jkl","mno","abcd"}) , {"abcd","abcd","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","is","HeHellollo","klmno","Python","Programming"}) , {"is","Python","HeHellollo"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","klmnccccco","klmno","a"}) , {"klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","ikiwi","awesome","Programmaaraaing","Python","ikiwi"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddddd","sttu","world","apple","is","awesome","Programmaaraaing","Python"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","","Pytthon","world"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programing","is","awesome","Python"}) , {"is","Python","Programing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ee","def","ghij","o","sssssssklmno","p","stu","vwxy"}) , {"ee","ghij","vwxy","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","ccc","hi","jkl","mno"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","Porogramming","is","awesome"}) , {"is","Porogramming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"vwxy","world","is","klmno","Pythonklmno","cccc","wdorld","klmno"}) , {"is","cccc","vwxy","wdorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","aaaaa","ccc","dddd","ee","ffffff","ccc","ccc"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","date","Python","Programming","world","Python"}) , {"is","date","Python","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","yy","ddddate","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"rrrrrr","bc","def","ghij","klmno","mklmno"}) , {"bc","ghij","mklmno","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","vwxy"}) , {"bc","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hqri","efg","hiee","jkl","mno"}) , {"hiee","hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","ab","a","bbb","bb","b"}) , {"ab","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","ghijHello","klmno","p","qr","stu","vvwxy"}) , {"qr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","rrraarrr","date","Python","Programming","Programming"}) , {"is","date","Python","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","Python","vvwxy","def","kiwwi","ghij","kiwi"}) , {"ghij","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","date","Python","Programming","world","Python","world"}) , {"is","date","Python","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","awesome","ccccc","ddd","ddddd"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","vxy","kolmddddno","sssssssklmno","p","qr","stu","vwxy"}) , {"bc","qr","ghij","vwxy","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghhj","bc","def","gghij","klmno","def"}) , {"bc","ghhj"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","vxy","kolmddddno","sssssssklmno","p","stu","vwxy","kolmddddno"}) , {"bc","ghij","vwxy","kolmddddno","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","rrraarrr","zzzzz","Programming","is","klmno","cwobcrld"}) , {"is","cwobcrld","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","lemmon","cherry","datdddd","grape","kiwi","lemon"}) , {"kiwi","banana","cherry","lemmon"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","zzzz","yy","xxxxx","rrrrrr","sssssss","xxxxx","rrraarrr"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dddefef","aa","aaa","bbbb","ddddd","ddef"}) , {"aa","bbbb","ddef"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","dddd","xxxxx","rrrrrr","sssssss","zzzz","zzzz"}) , {"ee","yy","cccc","dddd","zzzz","zzzz","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","sssssss","banana","cherry","date","grape","lemonn","banana","lemonn"}) , {"date","banana","banana","cherry","lemonn","lemonn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aa","ccccc","ddbananaefdd","ddddd","eeeeee","aaa"}) , {"aa","aa","eeeeee","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","kolmddddno","sssssssklmno","p","qr","stu","vwxy"}) , {"bc","qr","ghij","vwxy","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","vvwxyhij","klmnccccco","ghij","klmno"}) , {"bc","ghij","vvwxyhij","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","yy","xxxxx","rrrrrr","sssssss","yy"}) , {"yy","yy","cccc","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","is","awesome"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","kiwi","mno"}) , {"hi","abcd","kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","p","world","Programming","is","awesome","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","awesome","ccccc","ddd"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","woorld","Programming","is","klmno","nklmno","Python","Programming","Hello","is","nklmno"}) , {"is","is","Python","nklmno","nklmno","woorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jjis","efg","hi","jkworlldl","jkl","mno"}) , {"hi","abcd","jjis"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","cbc","aaa","bc","def","klmno","bc"}) , {"bc","bc","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","o","grapebbbb","bb","b"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aa","ddbananaefdd","ddddd","eeeeee","aaa"}) , {"aa","aa","eeeeee","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","cbc","aaa","bc","klmno","bc"}) , {"bc","bc","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","is","awesome","is"}) , {"is","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzznklmnolz","yy","dddd","xxxxx","rrrrrr","sssssss","cccc"}) , {"ee","yy","cccc","cccc","dddd","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","aaa","Hello"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","worlld","klmnccccco","ghij","klmno","klmnccccco","a"}) , {"bc","ghij","worlld","klmnccccco","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","o","bbbb","bb","b","b"}) , {"aa","bb","bbbb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","awesome","Programmaaraaing","Python"}) , {"is","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmnccccco","kolmddddno","sssssssklmno","p","qr","stu","vwxy","def"}) , {"bc","qr","ghij","vwxy","klmnccccco","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","cPytthonc","dddd","ee","ffffff","ccc","aaaa"}) , {"bb","ee","aaaa","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","aaaaa","ccc","dddd","ee","ffffff","ccc"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datdddd","aaa","aa","","bb"}) , {"","aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Programmaaaaing","aaa","aa","","bb","bb",""}) , {"","","aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","o","bbbb","Programmaaaaing","bb","b"}) , {"aa","bb","bbbb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","jkl","Programmaaaaing","jkl"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbc","awesome","yy","ddef","klmnccccco","gcccchij","klmno"}) , {"yy","ddef","gcccchij","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","dddgrape","yy","xxxxx","rrrrrrr","sssssss","yy"}) , {"yy","yy","cccc","dddgrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","lemonn","is","awesome","Programmaaaaing","Python"}) , {"is","Python","lemonn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","date","grapre","grape","kiwi","lemon","grape"}) , {"date","kiwi","banana","cherry","grapre"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","dddd","xxxxx","rrrrrr","sssssss","cbccc"}) , {"ee","yy","cccc","dddd","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","zzzz","xxxxx","rrrrrr","cbccc","xxxxx"}) , {"ee","cccc","zzzz","rrrrrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","Python","def","ghij","kiwi","def"}) , {"ghij","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","pp","world","iss","Programming","is","awesome","Pybccthon"}) , {"is","pp"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","worlld","rrrrrr","sssssss","rrrrrr"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrrrrr","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","klmnccccco","sttu","wobcrld"}) , {"aa","bc","sttu","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","bb","b","hqri","b"}) , {"aa","bb","bbbb","hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","mno"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","yy","xxxxx","rrrrrr","sssssss","xxxxx","rrraarrr"}) , {"ee","yy","cccc","rrrrrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","date","Python","Programming","world","aaa","world"}) , {"is","date","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programmigrapeng","is","klmno","aaa"}) , {"is","Programmigrapeng"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","zzzzz","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","ddddat","hi","jkl","mno"}) , {"hi","abcd","ddddat"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","mnprld","hi","jkl","mno"}) , {"hi","abcd","mnprld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","ab","sttu","wobcrld"}) , {"aa","ab","bc","sttu"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dbananaef","a","df","Python","ghij","kiwi","kiwi"}) , {"df","ghij","kiwi","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","world","Progra","ee","jjis","awesome","Programmaaaaing","Python"}) , {"ee","jjis","Progra","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"worghhjld","Programming","is","ikiwi","awesome","Programmaaraaing","is"}) , {"is","is","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","ghij","kolmddddno","sssssssklmno","p","qr","stu","vwxy"}) , {"bc","qr","ghij","vwxy","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","is","klmno","yPython","Programming"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","ccccc","abcdbananaefd","aklmncccccobcd","jkl","mno"}) , {"abcd","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","efg","a","cccc","bb","b","bbbb"}) , {"aa","bb","bbbb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ee","yy","yaklmncccccobcdy","xxxxx","rrrrrr","sssssss","sssssss"}) , {"ee","yy","cccc","rrrrrr","yaklmncccccobcdy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","cbc","rrrrrr","aaa","bc","def","klmno","c"}) , {"bc","rrrrrr","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"lemon","aaaa","bbb","ccc","dddd","ee","ffffff","ccc","aaaa"}) , {"ee","aaaa","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","dddefef","","","Python"}) , {"","","is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"oo","aa","apple","klmnccccco","o"}) , {"aa","oo","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","aaaaa","cc","dddd","ee","ffffff","ccc","ccc","ee","ccc"}) , {"cc","ee","ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","vxy","kolmddddno","sssssssklmno","p","qr","stu","xvwxy"}) , {"bc","qr","ghij","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","zzzz","rrrrrr","cbccc","xxxxx","ee"}) , {"ee","ee","cccc","zzzz","rrrrrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","isgrape","klmno","Python","world"}) , {"Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxxx","rrrrrr","sssssss","yy","eee","yy"}) , {"ee","yy","yy","yy","cccc","zzzz","rrrrrr","xxxxxx"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","Programming","zzznklmnolz","","kklmno","aaa","aaa"}) , {"","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","zzzz","yy","xxxxx","rrrrrr","sssssss","xxxxx","rrraarrr","xxxxx"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","ab","a","bbb","bb","b","aaa"}) , {"ab","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaakolmddddno","aa","ikiwi","bb","b","a","ikiwi"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","mno","jkl"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","yy","xxxxx","rrrrrr","sssssss","rrraarrr"}) , {"ee","yy","cccc","rrrrrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","b"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","vwxy","p"}) , {"bc","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","jkwrorlldl","efg","hi","jkworlldl","jkl","mno","jkl"}) , {"hi","abcd","jkwrorlldl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbbb","bbb","ghij","ccc","dddd","ddyaklmncccccobcdydd","ee","ffffff"}) , {"ee","aaaa","bbbb","dddd","ghij","ffffff","ddyaklmncccccobcdydd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","awesome","Programmaaraaing","Python","is"}) , {"is","is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","xxxxx","sssssss"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","klikiwimno","Programming","is","klmno","yPython","Programming"}) , {"is","klikiwimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghj","bc","def","ghij","klmno","bc"}) , {"bc","bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccccc","abc","ee","rrraarrr","zzzz","yy","xxxxx","rrrrrr","sssssss","c","xxxxx","rrraarrr"}) , {"ee","yy","zzzz","rrrrrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","worldbb","b","a"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"i","Hello","is","sawesome","i"}) , {"is","sawesome"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","ccccc","aklmncccccobcd","jkl","mno","mno"}) , {"abcd","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hqri","efg","bbb","jkl","mno"}) , {"hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dbananaef","a","df","Python","ghij","kiwi"}) , {"df","ghij","kiwi","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","is","klmno","Pythoonklmno","cccc","klmno"}) , {"is","cccc","Pythoonklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","gghij","dddd","ee","ffffff","ccc"}) , {"bb","ee","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbbb","bbb","ghij","ccc","dddd","ddyaklmncccccobcdydd","ee","ffffff","dddd"}) , {"ee","aaaa","bbbb","dddd","dddd","ghij","ffffff","ddyaklmncccccobcdydd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"vwxy","world","is","klmno","Pythonklmno","cccc","wdorld","Pybccthon"}) , {"is","cccc","vwxy","wdorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","yy","xxxxx","rrrrrr","ssssssss","awesddefomessssssss","yy"}) , {"yy","yy","cccc","rrrrrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","jkklmnokl","ddddat","hi","jkl","mno","abcd"}) , {"hi","abcd","abcd","ddddat"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","Programming","is","awesome","awesome"}) , {"is","Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ddd","ddddd","eeeeee"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","b","def","ighij","ghij"}) , {"ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","ccc","hi","jkl","mno","mno"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helighijlo","world","Programming","is","awesome","Python"}) , {"is","Python","Helighijlo"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klmnccccco","o","cwobcrld","klmnccccco"}) , {"cwobcrld","klmnccccco","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cherry","Porogramming","aaaa","bbb","aaaaa","ccc","dddd","ee","ffffff","ccc","yaklmncccccobcdy","aaaaa"}) , {"ee","aaaa","dddd","cherry","ffffff","Porogramming","yaklmncccccobcdy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","aaaaa","ccc","dddd","cccc","ffffff","ccc"}) , {"aaaa","cccc","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ee","zzzz","yy","ddddate","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","ikiwi","","b","a"}) , {"","aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","","ddddd","Pytthon","world","ddddd"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccccc","ee","rrraarrr","zzzz","yy","xxxxx","ddddat","sssssss","c","xxxxx","rrraarrr"}) , {"ee","yy","zzzz","ddddat","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","sssssss","bb","banana","cherry","date","grape","lemonn","banana","lemonn"}) , {"bb","date","banana","banana","cherry","lemonn","lemonn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"rrrrrr","bc","def","ghij","klmno","mklmno","def"}) , {"bc","ghij","mklmno","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","aaaaa","ccc","aaaaba","dddd","bcc","ffffff","ccc","ccc","abc","aaaaba"}) , {"aaaa","dddd","aaaaba","aaaaba","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddddd","sttu","world","apple","is","awesome","Programmaaraaing","Python","apple"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","oo","efg","ccccc","abcdbananaefd","aklmncccccobcd","jkl","mno","aklmncccccobcd"}) , {"oo","abcd","aklmncccccobcd","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"grapebbbb","klmnccccco","o","cwobcrld","klmnccccco"}) , {"cwobcrld","klmnccccco","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","ghj","rrraarrr","zzzz","yy","xxxxx","rrrrrr","sssssss","jklxxxxx","rrraarrr","xxxxx"}) , {"ee","yy","cccc","zzzz","rrrrrr","jklxxxxx","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ssssssskslmno","ghij","klmno","sssssssklmno","p","qr","stu","vwxy"}) , {"bc","qr","ghij","vwxy","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","wolrld","world","Programming","aaaa","awesome","Python"}) , {"aaaa","Python","wolrld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"awoorlda","aaa","aaaa","awesome","ccccc","ddd"}) , {"aaaa","awoorlda"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","","sssssssklmno","p","qr","stu","vwxy"}) , {"","bc","qr","ghij","vwxy","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","aa","def","kiwi"}) , {"aa","kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klmmno","vwxy","nklmno","is","klmno","Pythonklmno","cccc","wdorld","klmno","klmno"}) , {"is","cccc","vwxy","klmmno","nklmno","wdorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datdddd","aa","","bb"}) , {"","aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","mnprld","hi","jkl","aa","mno"}) , {"aa","hi","abcd","mnprld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","ddddat","xxxxx","rrrrrr","sssssss","xxxxx"}) , {"ee","yy","cccc","zzzz","ddddat","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"oo","aa","apple","a","klmnccccco","aaa","o"}) , {"aa","oo","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bb","b","aa"}) , {"aa","aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","","date","Python","Programming","world","Python","klmno"}) , {"","is","date","Python","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","ddddat","xxxxx","rrrrrr","sssssss","xxxxx","cccc"}) , {"ee","yy","cccc","cccc","zzzz","ddddat","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","mno","jkl","jkl"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","cPytthonc","p","qr","stu","vwxy","vwxy"}) , {"bc","qr","ghij","vwxy","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","is","klmno","yPython","Programming","is"}) , {"is","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","worldbb","b","a","a"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","aa","ghij","klmno","klmno"}) , {"aa","bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","worlld","klmnccccco","ddd","ghij","klmno","world","a"}) , {"bc","ghij","worlld","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghgij","Programing","ghij","klmno","p","qr","stu","vwxy"}) , {"bc","qr","ghij","vwxy","Programing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","ccc","dddd","ee","ffffff","date"}) , {"bb","ee","aaaa","date","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hqri","effg","efg","jkl","mno","mno"}) , {"effg","hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","sProgrprldammingss","zzzz"}) , {"ee","yy","cccc","zzzz","zzzz","rrrrrr","sProgrprldammingss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bcc","def","ghijHello","bb","pp","vwxyy","stu","vwxy"}) , {"bb","pp","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","klmno","cPytthonc","p","qr","stu","vwxy","vwxy"}) , {"bc","qr","vwxy","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","ddddat","xxxxx","rrrrrr","sssssss","xxxxx","cccc","sssssss"}) , {"ee","yy","cccc","cccc","zzzz","ddddat","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","o","grapebbbb","bb","b","o"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","is","klmno","abcd","Programming","is"}) , {"is","is","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","","ddddd","Pytthon","world"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","Hello","world","worghhjldawesome","is","awesome","Programmaaaaing","Python"}) , {"is","Python","worghhjldawesome"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","ddddd","yy","eeeeee","aaa"}) , {"aa","yy","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","ikiwi","","b","a","b"}) , {"","aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","dddgrape","yy","xxxxx","rrrrrrr","sssssss","lemonn","yy"}) , {"yy","yy","cccc","lemonn","dddgrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddddd","sttu","world","apple","is","awesome","Programmaaraaing","Python","apple","apple"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","b","bc","def","jjisklmno","bbc","aa","klmno","klmno"}) , {"aa","bc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","b","a","a"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","ghhj","klmno","date","Python","Programming","world","aaa","world"}) , {"date","ghhj","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","world","ee","ffffff","ccc","aaaa"}) , {"ee","aaaa","aaaa","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","dddd","ee","ffffff","ccc","ccc","ffffff"}) , {"ee","aaaa","dddd","ghij","ffffff","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","awesome","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","Programming","is","awesome","awesome","Programming"}) , {"is","Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","ccc","dddd","ee","ffffff","ccc","ee","dddd"}) , {"bb","ee","ee","aaaa","dddd","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"rrrrrr","Programmaaaaing","def","ghij","klmno","zzzzz","mklmno","def"}) , {"ghij","mklmno","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","kiwi","def"}) , {"kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"oo","aa","a","klmnccccco","aaa","avxya","o"}) , {"aa","oo","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"worHeHellollold","is","awesome","Programmaaraaing","Programmaaraaing"}) , {"is","Programmaaraaing","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","klikiwimno","Programming","is","klmno","yPythnon","Programming"}) , {"is","yPythnon","klikiwimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","jiyys","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","klikiwimno","Programming","is","klmno","yPythnon","klmnoo","Programming"}) , {"is","klmnoo","yPythnon","klikiwimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","ccccc","ddd","date","ddddd","eeeeee","aaa"}) , {"aa","date","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","klmno","date","Python","Programming","world","aaa","world","is"}) , {"is","is","date","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","is","awesome","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghijHello","klmno","qr","stu","vwxy"}) , {"bc","qr","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","oo","efeg","ccccc","abcdbananaefd","aklmncccccobcd","jkl","mno","aklmncccccobcd"}) , {"oo","abcd","efeg","aklmncccccobcd","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"qr","zzzzz","banana","cherry","date","grape","kiwi","lemon","banana"}) , {"qr","date","kiwi","banana","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","Programming","is","awesome","awesome","awesome"}) , {"is","Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aa","ddbananaefdd","ddddd","eeeeee","aaaa"}) , {"aa","aa","aaaa","eeeeee","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","","world"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","rrraarrr","zzzz","cbccc","xxxxx","ee","ee"}) , {"ee","ee","ee","cccc","zzzz","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aaaa","awesome","ccccc","ddd","aaa"}) , {"aaaa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","jlldl","jkl","Programmaaaaing","jkl"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"worHeHellollold","is","awesome","Programmaaraaing","Programmaaraaing","awesome"}) , {"is","Programmaaraaing","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klmno","abcd","efg","aklmncccccobcd","jkl","mno","abcd"}) , {"abcd","abcd","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","ghij","vxy","kolmddddno","sssssssklmno","p","stu","xvwxy","stu"}) , {"bc","ghij","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","yPgrapebbbbython","Programming","is","yPython","Programming","is"}) , {"is","is","yPgrapebbbbython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","ccccc","Programing","ccccc","jkl","mno"}) , {"abcd","Programing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccccc","rrraarrr","zzzz","yy","xxxxx","ddddat","sssssss","c","xxxxx","rrraarrr","zzzz"}) , {"yy","zzzz","zzzz","ddddat","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaakolmddddnoa","bcc","def","eee","ghijHello","bb","pp","qr","stu","debbcf","vwxy"}) , {"bb","pp","qr","vwxy","debbcf","aaakolmddddnoa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hqri","efg","bbb","mno"}) , {"hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaakolmddddno","aa","ikiwi","effg","bb","b","a","ikiwi"}) , {"aa","bb","effg"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datdddd","aaa","aa","dddgrape","bb"}) , {"aa","bb","dddgrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datdddd","aaaddd","aaa","aa","","bb","bb"}) , {"","aa","bb","bb","aaaddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ddddd","eeeeee","aaa","aaa"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","woorld","Programming","is","klmno","nklmno","Python","Programming","Helllo","is","nklmno"}) , {"is","is","Helllo","Python","nklmno","nklmno","woorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","ghhj","klmno","date","PythworHeHellolloldn","Programming","world","aaa","world"}) , {"date","ghhj","PythworHeHellolloldn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","aaa","def","kiwi"}) , {"kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","datdddd","rrrrrr","sssssss","yy"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","ee","ffffff","ccc","ccc","ffffff"}) , {"ee","aaaa","ghij","ffffff","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klmnoo","cccc","ddd","yy","xxxxx","rrrrrr","sssssss","yy"}) , {"yy","yy","cccc","klmnoo","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","kolmddddno","sssssssklmno","p","qr","stu","vwxy","p"}) , {"bc","qr","ghij","vwxy","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaadddyPgrapebbbbython","aaa","aa","","bb","bb"}) , {"","aa","bb","bb","aaadddyPgrapebbbbython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","Prograomming","is","awesome","Prolemongrammaaaaing","Python","awesome"}) , {"is","Python","Prograomming","Prolemongrammaaaaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","klmno","ghij"}) , {"bc","ghij","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"lklmno","a","bc","def","ghij","klmno","klmno","ghij"}) , {"bc","ghij","ghij","lklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","isProgra","klmno","sttu","","date","Python","Programming","world","Python","klmno"}) , {"","date","sttu","Python","Python","isProgra"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","rrrrrrr","b","hqri","b","hqri"}) , {"aa","bbbb","hqri","hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","b","bc","def","jjisklmno","bbc","aa","klmno","xxxxx"}) , {"aa","bc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","klmklikiwimnonccccco","klmno"}) , {"klmklikiwimnonccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccc","ddd","ee","y","worlld","lemon","rrrrrr","sssssss","rrrrrr"}) , {"ee","rrrrrr","rrrrrr","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","dddefef","","","Python","Hello"}) , {"","","is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccccc","abc","ee","rrraarrr","zzzz","yy","xxxxx","rrrrrr","sssssss","c","rrraarrr","rrraarrr"}) , {"ee","yy","zzzz","rrrrrr","rrraarrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","Python","vvwxy","def","ikiwwi","ghij","kiwi"}) , {"ghij","kiwi","Python","ikiwwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","worlld","klmnccccco","ghij","klmno","kiwigcccchij","a"}) , {"bc","ghij","worlld","klmnccccco","kiwigcccchij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","world","Programming","is","awesome","Programmaaaaing"}) , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","PythworHeHellolloldnbbb","ghij","ccc","dddd","ee","ffffff"}) , {"ee","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","hi","jkkl","aa","mno"}) , {"aa","hi","abcd","jkkl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","avxya","klmnccccco","klmno"}) , {"bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","lemonn","is","awesome","Python","Python"}) , {"is","Python","Python","lemonn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","Programming","is","awesome","awesome","iis","Programming"}) , {"is","Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaakolmddddno","aa","ikiwi","bb","b","a","bcc","ikiwi","bb"}) , {"aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","lemmon","cherry","datdddd","grape","kiwi","lemon","cherry"}) , {"kiwi","banana","cherry","cherry","lemmon"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","efg","a","cccc","grape","bb","b","bbbb"}) , {"aa","bb","bbbb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","kolmddddno","sssssssklmno","p","qr","stu","vwxy","stu"}) , {"bc","qr","ghij","vwxy","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","aa","ghij","klmno","klmno","klmno"}) , {"aa","bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hqri","effg","eefg","jkl","mno","mno"}) , {"eefg","effg","hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","Prograomming","is","awesome","Prolemongrammaaaaing","Python","jkwrorlldl","awesome"}) , {"is","Python","jkwrorlldl","Prograomming","Prolemongrammaaaaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","ghj","rrraarrr","zzzz","yy","xxxxx","rrrrrr","sssssss","rrraarrr","xxxxx"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Programmaaaaing","aaa","aa","","bb","bb","","Programmaaaaing","bb"}) , {"","","aa","bb","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddddd","sttu","apple","is","awesome","Programmaaraaing","Python"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Heello","Proxxxxxgramming","Hello","world","Programming","is","klmno","aaa","Hello"}) , {"is","Heello","Proxxxxxgramming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","worlld","rrrrrr","sssssss","rrrrrr","sssssss"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrrrrr","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","c","def","aHelccccoaa","klmnccccco","klmno","bc","bc"}) , {"bc","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","","ddddd","Pytthon","world","world"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","debbcf","","","Python"}) , {"","","is","Python","debbcf"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"def","klmklikiwimnonccccco","klmno"}) , {"klmklikiwimnonccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddddd","sttu","apple","","awesome","Programmaaraaing","Python","apple"}) , {"","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","HelyPgrapebbbbythonlo","world","Programming","is","","Pytthon"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","lemmon","cherry","datefegdddd","datdddd","grape","kiwi","lemon","cherry","lemon","datdddd"}) , {"kiwi","banana","cherry","cherry","lemmon"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bcc","ddd","sawesomeee","zzzz","yy","yyy","xxxxxx","rrrrrr","sssssss","yy","eee","yy"}) , {"yy","yy","yy","zzzz","rrrrrr","xxxxxx","sawesomeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","aa","Helllo","ghij","klmno","klmno","klmno"}) , {"aa","bc","ghij","Helllo"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","ddd","ghij"}) , {"bc","ghij","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"def","kiwi","def"}) , {"kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","dddd","ffffff","ccc","ccc","ffffff"}) , {"aaaa","dddd","ghij","ffffff","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","isgrape","klmno","Python","world","wxxxxxorld"}) , {"Python","wxxxxxorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","aaa","a","bbb","bb","b","bbb"}) , {"bb","Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","worlld","rrrrrr","sssssss","rrrrrr","mnoddd","sssssss"}) , {"ee","yy","cccc","zzzz","mnoddd","rrrrrr","rrrrrr","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","ab","a","bbb","bb","worlld","b"}) , {"ab","bb","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","isgrape","Python","world","wxxxxxorld","Programming"}) , {"Python","wxxxxxorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","Progrprldamming","is","klmno","Python","cccc","Prgogramming","Programming"}) , {"is","cccc","Python","Prgogramming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","mworldno","efg","ccccc","aklmncccccobcd","jkl","mno","mno"}) , {"abcd","mworldno","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","awesome","Programmaaraaing","Programmig","Python"}) , {"is","sttu","Python","Programmig","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","klmno","date","Programming","world","aaa","world"}) , {"date"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","cccc","bb","ghi","b","bbbb"}) , {"aa","bb","bbbb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","klmnccccco","ghij","klmno","klmno"}) , {"aa","bc","ghij","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","cPytthonc","Pytthon","dddd","ee","ffffff","ccc","aaaaa"}) , {"bb","ee","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddddd","stsssssssklmnou","apple","awesme","is","awesomekiwi","Programmaaraaib","Python"}) , {"is","Python","awesme"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","jkklmnoklProgramming","is","klmno","date","Python","Programming","world","aaa","world","is"}) , {"is","is","date","Python","jkklmnoklProgramming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Programming","awesome","awesome","Programming"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","ddddd","prldyy","eeeeee","aaa"}) , {"aa","bbbb","eeeeee","prldyy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","ee","ccc","ccc","ffffff"}) , {"ee","aaaa","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","jkwrorlldl","efg","hi","jkworlldl","efgg","jkl","mno","jkl"}) , {"hi","abcd","efgg","jkwrorlldl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aa","ddddd","eeeeee"}) , {"aa","aa","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bb","bc","def","ghij","klmno","klmno","ghij"}) , {"bb","bc","ghij","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","ghhj","klmno","date","Python","Programming","datelklmno","world","aaa","world","world"}) , {"date","ghhj","Python","datelklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","rrraarrr","date","Programming","Programming"}) , {"is","date","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","stu"}) , {"bc","qr","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","cbc","aaa","bbc","bc","def","kklmno","ddbananaedd","cherry","bc"}) , {"bc","bc","cherry","kklmno","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bc","klmnccccco","klmncccccco","sttu","wobcrld"}) , {"bc","sttu","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ghij","ccc","dddd","ee","ffffff","worlld"}) , {"ee","aaaa","dddd","ghij","ffffff","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","","b","a"}) , {"","aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","yy","worlld","rrrrrr","sssssss","rrrrrr"}) , {"ee","yy","cccc","rrrrrr","rrrrrr","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","cbc","aaa","bc","def","klmno","c","klmno","klmno"}) , {"bc","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ssssssskslmno","ghij","klmno","sssssssklmno","p","qr","stu","vwxy","klmno"}) , {"bc","qr","ghij","vwxy","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","hi","jkworlldl","kiwi"}) , {"hi","abcd","kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","grape","bb","bb"}) , {"aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","o","bbbb","Praogrammaaaaing","bb","b","bbbb"}) , {"aa","bb","bbbb","bbbb","Praogrammaaaaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"efg","a","cccc","grape","bb","b","bbbb"}) , {"bb","bbbb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","ccccc","jiyys","aaaa","ddd","dddddd","eeeeee","aaa"}) , {"aaaa","bbbb","dddddd","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","cbc","ccbc","rrrrrr","aaa","bc","def","klmno","c"}) , {"bc","ccbc","rrrrrr","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","ikiwi","rrraarrr","","b","a","b"}) , {"","aa","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ee","yy","xxxxx","rrrrrr","ssss","sssssss"}) , {"ee","yy","cccc","ssss","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","","world","world"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jis","efg","hi","jkworlldl","jkl","mno","jkl"}) , {"hi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","b","bc","def","jjisklmno","bbc","Programmigaa","aa","klmno","xxxxx"}) , {"aa","bc","Programmigaa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","def","klmnccccco","klmno","bc","klmno"}) , {"aa","bc","bc","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghijHello","klmno","p","qr","stu","vwxy","p"}) , {"bc","qr","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"awoorlda","aa","aaa","aaaa","awesome","ccccc","ddd","ccccc"}) , {"aa","aaaa","awoorlda"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","dddd","awesddefome","xxxxx","rrrrrr","sssssss","cccc"}) , {"ee","yy","cccc","cccc","dddd","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hqri","efg","jkl","mno"}) , {"hqri"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","Programming","isikiwi","awesome","awesome","Programming"}) , {"Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","Hello","world","worghhjldawesome","is","awesome","Programmaaaaing","Python","awesome"}) , {"is","Python","worghhjldawesome"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","yy","worlld","rrrrrr","sssssss","rrrrrr","mnoddd","sssssss"}) , {"ee","yy","cccc","mnoddd","rrrrrr","rrrrrr","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","aaa","a","bbb","bb","b","bikiwwibb","bbb"}) , {"bb","Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","xxxxx","rrrrrr","sssssss"}) , {"ee","cccc","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"worlda","bc","def","klmno","p","qr","stu","vwxy","vwxy"}) , {"bc","qr","vwxy","vwxy","worlda"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","aaaaa","cc","dddd","ee","fffffff","ccc","ccc","ee","ccc"}) , {"cc","ee","ee","aaaa","dddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","Programing","jkl","mno"}) , {"abcd","Programing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Heello","Programming","is","awesome"}) , {"is","Heello"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","ffffff","world","Progrefgamming","isgrape","klmno","Python","world"}) , {"Python","ffffff","Progrefgamming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbbb","bbb","ghij","dddd","ddyaklmncccccobcdydd","ee","ffffff"}) , {"ee","aaaa","bbbb","dddd","ghij","ffffff","ddyaklmncccccobcdydd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jis","efg","hi","jkworlldl","jkl","mno","jkl","jis"}) , {"hi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"stu","lemonn","is","awesome","Python","Python","lemonn"}) , {"is","Python","Python","lemonn","lemonn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"rrrrrr","bc","def","ghij","klmno","mklmno","mklmno"}) , {"bc","ghij","mklmno","mklmno","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Programming","is","ikiwi","awesome","Programmaaraaing","is","ikiwi"}) , {"is","is","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","jkklmnokl","ddddat","hi","jkl","mno","abcd","jkl"}) , {"hi","abcd","abcd","ddddat"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccccc","ee","rrraarrr","zzzz","yy","xxxxx","ddddat","sssssss","c","xxxxx","rrraarrr","yy"}) , {"ee","yy","yy","zzzz","ddddat","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","kolmddddno","sssssssklmno","p","qqr","stu","vwxyy","bcc","vwxy","sssssssklmno"}) , {"bc","ghij","vwxy","kolmddddno","sssssssklmno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Programming","is","ikiwi","Programmaaraainrg","awesome","Programmaaraaing","is","ikiwi"}) , {"is","is","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","worlld","rrrrrrr","rghirrrrr","rrrrrr","sssssss","rrrrrr"}) , {"ee","cccc","rrrrrr","rrrrrr","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"prldyyabcd","jis","mneeo","efg","hi","jkworlldl","jkl","mno","jkl"}) , {"hi","prldyyabcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cabcd","abcd","hi","jkkl","aa","mno"}) , {"aa","hi","abcd","jkkl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aaaa","awesome","ccccc","ddd","aaa","awesome"}) , {"aaaa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ccc","dddd","ddddd","ee","ffffff"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","sssssssssssskslmnoss","ee","zzzz","yy","dddd","xxxxx","rrrrrr","xxxxxx","sssssss","dddProgramming"}) , {"ee","yy","cccc","dddd","zzzz","rrrrrr","xxxxxx","dddProgramming","sssssssssssskslmnoss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","klmno","klmno"}) , {"bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","ghij","vxy","kolmddddno","sssssssklmno","p","stu","xvwxy"}) , {"bc","ghij","kolmddddno","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","Python","vvwxy","def","kiwwi","ghij","kii"}) , {"ghij","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"oo","aa","apple","a","klmnccccco","aaa","o","oo"}) , {"aa","oo","oo","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","Porogramming","is"}) , {"is","Porogramming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","apple","cbc","aaa","bbc","bc","def","kklmno","ddbananaedd","bc"}) , {"bc","bc","kklmno","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klmjklxxxxxno","a","bc","yy","def","ghij","klmno","klmno","ghij","def"}) , {"bc","yy","ghij","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccccc","ee","rrraardaterr","rrraarrr","zzzz","yy","xxxxx","ddddat","Pythoonklmno","sssssss","xxxxx","rrraarrr"}) , {"ee","yy","zzzz","ddddat","rrraarrr","rrraarrr","Pythoonklmno","rrraardaterr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","aweskolmddddnoome","ccccc","ddd","ddddd"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","worHeHellollold","aa","bb","bb"}) , {"aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"","bcc","def","ghij","kolmddddno","sssssssvvwxyhijklmno","sssssssklmno","p","qqr","stu","vwxyy","bcc","vwxy","sssssssklmno"}) , {"","ghij","vwxy","kolmddddno","sssssssklmno","sssssssklmno","sssssssvvwxyhijklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaakolmddddno","aa","ikiwi","effg","abcd","bb","bikiwwibb","a","ikiwi"}) , {"aa","bb","abcd","effg"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","ghj","zzzzz","rrraarrr","zzzz","yy","xxxxx","rrrrrr","ssssssss","rrraarrr","xxxxx"}) , {"ee","yy","cccc","zzzz","rrrrrr","rrraarrr","rrraarrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","ikiwi","awesome","ython","stu","Programmaaraaing","Python","ikiwi"}) , {"is","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","efg","jkworlldl","efgg","jkl","jkl","jkworlldl"}) , {"abcd","efgg"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","abc","ee","yy","xxxxx","rrrrrr","sssssss","xxxxx","rrraarrr"}) , {"ee","yy","cccc","rrrrrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"oo","aa","apple","a","klmncccco","aaa","o"}) , {"aa","oo"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","awesome","Programmaaraaing","Programmig","Pytkiihon"}) , {"is","sttu","Programmig","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"efg","hi","jkworlldl","mno","jkl"}) , {"hi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","hieeiis","klmno","Python","cccc","Programming"}) , {"cccc","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hhi","abcd","jis","efg","hi","jkworlldl","mno","jkl"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbbb","bbb","ghij","dddd","ddyaklmncccccobcdydd","ee","bbbbb","ffffff"}) , {"ee","aaaa","bbbb","dddd","ghij","ffffff","ddyaklmncccccobcdydd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","cPytthonc","Pytthon","dddd","ee","ffffff","ccc","bbbb","aaaaa"}) , {"bb","ee","aaaa","bbbb","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","e","zzzz","yy","ddddat","xxxxx","rrrrrr","sssssss","xxxxx"}) , {"yy","cccc","zzzz","ddddat","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","ghhj","klmno","date","Python","Programming","world","aProgrammigrapengaa","world"}) , {"date","ghhj","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","sssssssklmno","p","qr","vwxy"}) , {"bc","qr","ghij","vwxy","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datdddd","","aa","","bb"}) , {"","","aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","mnprld","hi","jkl","aa","","mno"}) , {"","aa","hi","abcd","mnprld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","klmnccccco","ghij","klmno","klmnccccco"}) , {"bc","ghij","klmnccccco","klmnccccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","sssssss","banana","cherry","date","grape","ssssssss","lemonn","banana","lemonn"}) , {"date","banana","banana","cherry","lemonn","lemonn","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","cccc","bb","ghi","b","bbbbb"}) , {"aa","bb","cccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"yy","sttu","is","awesome","Programmaaraaing","Python","world"}) , {"is","yy","sttu","Python","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bb","b","a","a","bb","a"}) , {"aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klmnoo","cccc","ddd","yy","xxxxx","rrrrrr","ssssssss","yy"}) , {"yy","yy","cccc","klmnoo","rrrrrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aaaa","awesome","ccccc","ddd","wxxxxxorld","aaa"}) , {"aaaa","wxxxxxorld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ssss","abc","ee","rrraarrr","yy","xxxxx","rrrrrr","sssssss","rrraarrr","xxxxx"}) , {"ee","yy","cccc","ssss","rrrrrr","rrraarrr","rrraarrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dbananaef","a","df","zzznklmnolz","ghij","kiwi","kiwi"}) , {"df","ghij","kiwi","kiwi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","vwxy","vwxy"}) , {"bc","qr","ghij","vwxy","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"rghirrrrr","worHeHellollold","is","awesome","Programmaaraaing","Programmaaraaing"}) , {"is","Programmaaraaing","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","hi","jkl","mno"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","is","","Pytthon","Pytthon"}) , {"","is"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bc","def","klmnnccccco","ghij","klmno"}) , {"aa","bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bcc","def","ghijHello","bb","pp","vwxyy","stu","vwxy","ghijHello"}) , {"bb","pp","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","o","grapebbbb","bb"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","ddd","ghij","klmno"}) , {"bc","ghij","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","mmno","abklmklikiwimnoncccccoc","def","ghi","hiee","mno"}) , {"hiee","mmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"lemon","bbb","ccc","dddd","ee","ffffff","ccc","aaaa"}) , {"ee","aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"wodrld","Hello","world","Programming","is","","world"}) , {"","is","wodrld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","efg","dddd","xxxxx","rrrrrr","sssssss","cbccc"}) , {"ee","cccc","dddd","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddbananaefdd","rrrrrr","aaa","bc","def","klmno","c"}) , {"bc","rrrrrr","ddbananaefdd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","ccccc","jiyys","aaaa","ddd","dddddd","eeeeee","aaa","ccccc"}) , {"aaaa","bbbb","dddddd","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jis","jkwrorlldl","efg","hi","jkworlldl","jkl","mno","jkl","hi"}) , {"hi","hi","abcd","jkwrorlldl"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","edef","ghijHello","klmno","p","qr","stu","vvwxy"}) , {"qr","edef"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","aklmncccccobcd","b","a"}) , {"aa","aklmncccccobcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","aklmnccccProgrammaaraaibcd","b","aa"}) , {"aa","aa","aklmnccccProgrammaaraaibcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","worHeHellollold","aa","bb","bbython","bb","aaa"}) , {"aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","aaa","ghij","klmno","klmno","klmno"}) , {"bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","datdddd","grape","kiwi","lemon","cherry"}) , {"kiwi","banana","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"efg","a","grape","bbb","b","bbbb"}) , {"bbbb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Progra","ee","awesome","Programmaaaaing","Python"}) , {"ee","Progra","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bb","ghij","cPytthonc","dddd","ee","ffffff","ccc","aaa"}) , {"bb","ee","aaaa","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Helcccco","Programming","is","awesome","awesome","iis","Programming","Helcccco"}) , {"is","Helcccco","Helcccco"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"worlld","is","","ddddd","Pytthon","world","world"}) , {"","is","worlld"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbbb","bbb","ghij","ccc","dddd","ddyaklmncccavxyaccobcdydd","ee","ffffff"}) , {"ee","aaaa","bbbb","dddd","ghij","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sttu","world","Programming","is","ikiwi","Programmaaraaing","Python","Programmaaraaing"}) , {"is","sttu","Python","Programmaaraaing","Programmaaraaing"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","sssssss","banana","cherry","date","grape","ssssssss","lemonn","ssprldsssss","banana","lemonn","ssprldsssss"}) , {"date","banana","banana","cherry","lemonn","lemonn","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","defg","hij","klmno"}) , {"defg"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcdefg"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa"}) , {"aa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","def","g","hij"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","cc","dddd","b","a","cc"}) , {"cc","cc","dddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ab","de","a","cc","d","b","a","cc","aaa"}) , {"ab","cc","cc","de"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"1234","9","0","12"}) , {"12","1234"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ap","banana","date","grape","kiwi","lemon"}) , {"ap","date","kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghij","knlmno"}) , {"ghij","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","mnno","def","ghi","jkl","mno"}) , {"mnno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","grape","kiwi","lemon"}) , {"kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"adatep","ap","banana","date","grape","kiwi","datedddd","lemon"}) , {"ap","date","kiwi","adatep","banana","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","bbbb","ddddd","eeeeee"}) , {"aa","bbbb","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","aaa"}) , {"bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","aaa"}) , {"aa","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","b","xxxxx","rrrrrr","sssssss","yy"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cheyrry","grape","kiwi","lemon"}) , {"kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","aaa","aa","a","bbb","bb","b"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","cherry","grape","kiwi","lemon"}) , {"kiwi","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","def","ghi","jkl","mno","ghi"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","def","isi","jkl","mno","abc"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","datedddd","grape","kiwi","lemon"}) , {"kiwi","banana","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bc","def","ghij","klmno"}) , {"bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"isi","a","ghij","knlmno","jkl","a"}) , {"ghij","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","ddd","ddddd","eeeeee","rrrr","aaa"}) , {"bbbb","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","aaa","ccccc"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","b","xxxxcherryx","rrrrrr","sssssss","yy"}) , {"ee","yy","cccc","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","is","awesome","Python"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","kklmno","def","ghij","klmno"}) , {"bc","ghij","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","aaa","bbbb","eeee","ccccc","ddd","ddddd"}) , {"aa","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","abc","def","ghi","jkl","gh","mno"}) , {"gh"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","ddd","ddddd","eeeeee","sssssss","rrrr","aaa"}) , {"bbbb","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghijj","knlmno","dateddddknlmno"}) , {"knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"knlmno","dateddddknlmno","ghijj"}) , {"knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","xxxxx","ddd","ee","zzzz","b","xxxxx","rrrrrr","sssssss","yy"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","bbb","ccc","dddd","ffffff"}) , {"aaaa","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cherry","apple","banana","cheyrry","grape","kiwi","lemon","cherry"}) , {"kiwi","banana","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","stu","vwxy","qr"}) , {"bc","qr","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghij","knlmno","a"}) , {"ghij","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"hghijj","knlmno","dateddddknlmno","ghijj"}) , {"hghijj","knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","yy"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","date","yy","xxxxx","rrrrrr","sssssss","yy","ddd"}) , {"ee","yy","yy","cccc","date","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","jkl"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","isi","jkl","mno","jkl","abc"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","jkl","jkl","abcd"}) , {"abcd","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jklbc","abcd","efg","jkl","jkl","abcd"}) , {"abcd","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","kklmno","def","ghij","klmno","kklmno","def"}) , {"ghij","kklmno","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccc","ddd","ee","zzzz","yy","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ee","bbb","ccc","dddd","ddd","ee","ffffff"}) , {"ee","ee","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bc","def","ghij","klisimno"}) , {"bc","ghij","klisimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"deef","abc","def","isi","jkl","mno","cccmno","abc"}) , {"deef","cccmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","ydef","b","xxxxx","rrrrrr","sssssss","yy"}) , {"ee","yy","cccc","ydef","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","aaa","aaa"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","kklmno","def","ghij","klmno","kklmno","def","kklmno"}) , {"ghij","kklmno","kklmno","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","xxxxx","rrrrrr","sssssss","yy"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","stu","vwxy","cheyrryqr"}) , {"bc","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddd","ee","zzzz","yy","xxxxx","rrrrrr","sssssss"}) , {"ee","yy","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","qr","stu","vwxy","qr"}) , {"bc","qr","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","i","awesome","Python"}) , {"Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","yystu","rrrrrr","sssssss","yy"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","date","grape","kiwi","lemon","date"}) , {"date","date","kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","bb","zzzz","b","xxxxx","rrrrrr","sssssss","yy"}) , {"bb","ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","ddddd","eeeeee","ddd"}) , {"aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"mno","apple","banana","cheyrry","grape","kiwi","lemon","cherry"}) , {"kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","zz","ddd","rrrrr","ee","zzzz","xxxxx","rrrrrr","sssssss","yy","zzzz"}) , {"ee","yy","zz","cccc","zzzz","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","hghijj","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeee","eeeeee","hghijj"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","yjklbcy","rrrrr"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","aaa","aaa"}) , {"aa","bbbb","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","dateddddknlmno","banana","cherry","date","grape","kiwi","lemon","date"}) , {"date","date","kiwi","banana","cherry","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","mno","jkl","abc","jkl"}) , {"datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","aaa","bbbb","eeee","ccccc","ddddd","aaaa","aaa","aaa"}) , {"aa","aaaa","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","dateddddknlmno"}) , {"aa","bbbb","eeee","eeeeee","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddd","gh","eeeeee","aaa","ccccc","ccccc"}) , {"aa","gh","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aaaaaa","aaa","bbbb","ddd","yjklbcy","ddd","aaa"}) , {"bbbb","aaaaaa","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cherry","apple","banana","cheyrry","grape","kiwi","yystu","lemon","cherry"}) , {"kiwi","banana","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","is","awesome","Python","awesome"}) , {"is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","mno","jkl","abc","vwxy","","jkl"}) , {"","vwxy","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","cherry","grape","kiwi","lemon","lemon"}) , {"kiwi","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efyystug","jkl","jkl","abcd"}) , {"abcd","abcd","efyystug"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","aa"}) , {"aa","aa","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"adatep","ap","banana","date","grape","kiwi","datedddd","lemon","banana"}) , {"ap","date","kiwi","adatep","banana","banana","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","def","isi","jkl","mno","abcc"}) , {"abcc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","b","xxxxcherryx","rrrrrr","ssssssss","yy"}) , {"ee","yy","cccc","rrrrrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"def","sssssss"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddddd","eeeeee","Python","aaa"}) , {"aa","bbbb","eeee","Python","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","yystu","aaa","bbbb","eeee","ccccc","ddd","ddddd","abcd","aaa"}) , {"aa","abcd","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"xvwxy","aa","bc","def","ghij","klmno","p","qr","stu","vwxy","cheyrryqr"}) , {"aa","bc","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","bc","def","ghij","klmno","qr","stu","vwxy","qr","def","def"}) , {"aa","bc","qr","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghij","datedddd","a"}) , {"ghij","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","dateddddknlmno","banana","cherry","date","grape","kiwi","loemon","lemon","date"}) , {"date","date","kiwi","banana","cherry","loemon","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","b","xxxxcherryx","rrrrrr","eee","ssssssss","yy","eee"}) , {"ee","yy","cccc","rrrrrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghij","knlmno","jkl","a"}) , {"ghij","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jkl","jkl"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cheyrry","grape","kiwi","lemon","cherry"}) , {"kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","ccccc","ddd","ddddd"}) , {"aa","bbbb","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aaa","bbbb","eeee","ccccc","ddd","ddddd","eeee"}) , {"bbbb","eeee","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","date","yy","xxxxx","rrrrrr","sssssss","yy","ddd","yy"}) , {"ee","yy","yy","yy","cccc","date","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","bbbb","ddddd","eeeeee","bbbb"}) , {"aa","bbbb","bbbb","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","cccccc","ccceeecc","ddd","ddddd","eeeeee","aaa","ccccc"}) , {"aa","bbbb","cccccc","eeeeee","ccceeecc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","zzz","e","aaa","eeabccee","bbbb","ccccc","ddd","ddddd"}) , {"aa","bbbb","eeabccee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","isi","jkl","mno","jkl","abc","mno"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","bb","cheryrr","cheyrrya","xxxxx","zz","sssssss","yy"}) , {"bb","ee","yy","zz","cccc","cheyrrya"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","awesome","Python","awesome","is"}) , {"is","is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","jkl","abc","jkl"}) , {"datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","dateddddknlm","banana","cherry","date","grape","kiwi","lemon","date"}) , {"date","date","kiwi","banana","cherry","dateddddknlm"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghijj","knlmno","b","dateddddknlmno"}) , {"knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","jkl","abc","jkl","isi"}) , {"datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","","ee","zzzz","xxxxx","rrrrrr","sssssss","yy"}) , {"","ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","aa","aaa"}) , {"aa","aa","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bbb","bb","zzz"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","date","yyyy","xxxxx","rrrrrr","sssssss","yy","ddd"}) , {"ee","yy","cccc","date","yyyy","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"adatep","ap","banana","date","grape","kiwi","datedddd","lemon","banan"}) , {"ap","date","kiwi","adatep","banana","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","grape","kiwi","lemon"}) , {"kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbbbbb","eeee","ccccc","ddd","jkl","eeeeee","aaa"}) , {"aa","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"banana","cherry","date","grape","kiwi","lemon","date"}) , {"date","date","kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghij","a"}) , {"ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bc","def","klmno"}) , {"bc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","date","grape","date","lemon","kiwi"}) , {"date","date","kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","date","grape","date","lemon"}) , {"date","date","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","dddd","ddd","ddddd","eeeeee","rrrr","aaa"}) , {"bbbb","dddd","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"adatep","ap","banana","date","grape","dateddded","lemon","banacheyrryn","ap"}) , {"ap","ap","date","adatep","banana","banacheyrryn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","bc","def","ghij","klmno","qr","stu","vwxy","qr","def","def","qr"}) , {"aa","bc","qr","qr","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","klemonklmno","def","ghij","klmno"}) , {"bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","hi","jkl","mno","efg"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","eeee","cccccc","ddd","ddddd","eeeeee","aaa","aaa"}) , {"aa","eeee","cccccc","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","ddd","ddddd","eeeeee","sssssss","rrrr","aaa","ccccc"}) , {"bbbb","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","aaa","aa","a","bbb","bb","b","aaa"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","mno","vwxy","","jkl",""}) , {"","","vwxy","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cheyrry","grape","kiwi","lemon","cherry","kiwi"}) , {"kiwi","kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"xvwxy","jklbPython","efg","jkl","jkl","abcd"}) , {"abcd","jklbPython"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"adatep","ap","banana","date","grape","dateddded","lemon","banacheyrryn","ap","lemon"}) , {"ap","ap","date","adatep","banana","banacheyrryn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","cccccc","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeee","cccccc","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","awesome","Python"}) , {"Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","cccccc","ccceeecc","ddd","ddddd","eeeccceeecceee","aaa","ccccc"}) , {"aa","bbbb","cccccc","ccceeecc","eeeccceeecceee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","bbbb"}) , {"aa","bbbb","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","","cccccc","ddddd","eeeeee","Python","aaa"}) , {"","aa","bbbb","eeee","Python","cccccc","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"banacheyrryqrna","apple","banana","date","grape","edate","lemon","kiwi"}) , {"date","kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","ghi","efg","hi","jkl"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jkl","jkl","abcd"}) , {"abcd","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","date","gre","date","lemon","kiwi"}) , {"date","date","kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","abccccccc","def","ghi","jkl","mno"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","knlmno"}) , {"knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbbbbb","eeee","ccccc","jkl","eeeeee","ajklbPython"}) , {"aa","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","mnno","def","ghi","monno","jkl","mno","mnno"}) , {"mnno","mnno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"knlmno","dateddddknlmno","ghijj","ghijj"}) , {"knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","bb","zzzz","b","xxxxx","rrrrrr","ssssss","yy"}) , {"bb","ee","yy","cccc","zzzz","rrrrrr","ssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","aaa","aa","a","bbb","bb","mnnoaa","b","aaa"}) , {"aa","bb","mnnoaa"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","cccccc","ddd","ddddd","eeeeee","aaa","ddd"}) , {"aa","bbbb","eeee","cccccc","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"mno","apple","cheyrry","grape","lemon","cherry","cherry"}) , {"cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","bb","cheryrr","cheyrrya","xxxxx","zz","sssssss","yy","ee"}) , {"bb","ee","ee","yy","zz","cccc","cheyrrya"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"adatep","ap","banana","date","kiwi","datedddd","lemon","banan"}) , {"ap","date","kiwi","adatep","banana","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghij","knlmnno","knlmno"}) , {"ghij","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","bc","def","ghij","klmno","qr","stu","def","def"}) , {"aa","bc","qr","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","isi","mno","jkl","gh","abc","abcc","mno"}) , {"gh","abcc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","eeee","ccccc","ddd","vwxy","ddddd","cccmno"}) , {"eeee","vwxy","cccmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","bbbb","ddddd","aaa","eeeeee","bbbb"}) , {"aa","bbbb","bbbb","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbmnnoaabb","ddd","ddddd","eeeeee"}) , {"aa","eeeeee","bbmnnoaabb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ahghijjbcd","abcd","efyystug","jkl","jkl","abcd"}) , {"abcd","abcd","efyystug","ahghijjbcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","dddddd","eeeeee"}) , {"aa","bbbb","dddddd","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cheyrrya","jkl","ghijj","abcd"}) , {"abcd","cheyrrya"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","bb","zzzz","b","xxxxx","ssssss","yy"}) , {"bb","ee","yy","cccc","zzzz","ssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","jkl","mno","vwxy","","jkl",""}) , {"","","vwxy","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeee","abcd","ghi","ef","hi","jkl"}) , {"ef","hi","abcd","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","zz","a"}) , {"zz"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","ydef","ccccc","ddd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","ydef","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","xxxxcherryx","rrrrrr","rrrrrr","ssssssss","banan"}) , {"ee","cccc","rrrrrr","rrrrrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","isi","jkl","mno","abcc"}) , {"abcc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","ydef","ccccc","ddd","ddddd","eeeeee","aaa","bbbb"}) , {"aa","bbbb","bbbb","ydef","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","world","Programming","klisimno","awesome","Python"}) , {"Python","klisimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"mno","apple","cheyrry","grape","lemon","cherry"}) , {"cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","ghij","klmno","p","qr","stu","vwxy","qr"}) , {"qr","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"sssssssklmno","cccc","ddd","ee","xxxxcherryx","rrrrrr","rrrrrr","ssssssss","banan"}) , {"ee","cccc","rrrrrr","rrrrrr","ssssssss","sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddddd","eeeeee","cccccc","aaa"}) , {"aa","bbbb","eeee","cccccc","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","bc","def","ghij","klmno","qr","stu","vwxy","def","def"}) , {"aa","bc","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"applae","apple","cheyrry","grape","kiwi","lemon","cherry"}) , {"kiwi","applae","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","aa","a","bbb","bb","b"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","date","grape","kiwi","lemon","date","cherry"}) , {"date","date","kiwi","banana","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","dd","bbbb","ddddd","eeeeee","bbbb","bbbb","eeeeee"}) , {"aa","dd","bbbb","bbbb","bbbb","bbbb","eeeeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","ddddd","eeeeee","aa","ccccc"}) , {"aa","aa","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aaa","bbbb","eeee","ccccc","ddd","ddddd","bb","aaa"}) , {"bb","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaaa","ffbbbbffff","bbb","ccc","dddd","ffffff"}) , {"aaaa","dddd","ffffff","ffbbbbffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","yy","xxxxx","rrrrrr","ssssssss","yjklbcy","rrrrr"}) , {"ee","yy","cccc","zzzz","rrrrrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","abc","zz","a"}) , {"zz"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aaa","bbbb","eeee","ccccc","aaaa","aaa","aaa"}) , {"aaaa","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","hi","jkl","efg"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","ydef","ccccc","ddd","ddddd","eeeeee","aaa","bbbb","ydef"}) , {"aa","bbbb","bbbb","ydef","ydef","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","cheyrrya","bbbb","eeee","cccccc","dcherryd","ddddd","eeeeee","aaa"}) , {"aa","bbbb","eeee","cccccc","eeeeee","cheyrrya","dcherryd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","kklmno","def","ghij","klmno","kklmno","kklmno"}) , {"ghij","kklmno","kklmno","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","klemonklmno","def","ghij","klmno"}) , {"ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","ydef","b","xxxxx","sssssss","yy","zzzz"}) , {"ee","yy","cccc","ydef","zzzz","zzzz"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","datedddd","a"}) , {"aa","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","jkl","mno","vwxy","","jkl","","datedddd"}) , {"","","vwxy","datedddd","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","kklmno","def","ghij","klmno","kklmno","def","a"}) , {"ghij","kklmno","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","xxxxx","d","ee","zzzz","b","xxxxx","rrrrrrr","sssssss","yy"}) , {"ee","yy","cccc","zzzz"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","bc","def","ghij","klmno","qr","stu","vwxy","qr","def","def","ddddd","qr"}) , {"aa","bc","qr","qr","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","datedddd","a","a"}) , {"aa","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","aaa"}) , {"aa","bbbb","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","bbbb","ddddd","eeeeee","bbbb","eeeeee","ddddd"}) , {"aa","bbbb","bbbb","bbbb","eeeeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","klmno","klmno"}) , {"bc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","zz","aa","aaa","bbbb","eeee","yjklbcy","ddd","ddddd","aa","aaa"}) , {"aa","aa","zz","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","dateddddknlmno","banaaaa","cherry","date","grape","kiwi","loemon","lemon","lemon"}) , {"date","kiwi","cherry","loemon","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ahghijjbcd","jabcdkl","abcd","efyystug","yystu","jkl","abcd"}) , {"abcd","abcd","efyystug","ahghijjbcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","nknlmno","knlmno"}) , {"knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddd","ee","zzzz","yy","qr","xxxxx","rrrrrr","sssssss","ddd"}) , {"ee","qr","yy","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"knlmno","dateddddknlmno","ghijj","ghijj","dateddddknlmno"}) , {"knlmno","dateddddknlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbb","ccc","dddd","ddd","ee","ffffff"}) , {"ee","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","b","xxxxx","dddd","rrrrrr","sssssss","yy"}) , {"ee","yy","cccc","dddd","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"adatep","ap","banana","date","kiwi","datedddd","datdedddd","lemon"}) , {"ap","date","kiwi","adatep","banana","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","cheyrrya","aaa","bbbb","ccccc","ddd","dddddd","eeeeee"}) , {"aa","bbbb","dddddd","eeeeee","cheyrrya"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","jkl"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","b","xxxxx","dddd","rrrrrr","sssssss","yy","cccc","cccc"}) , {"ee","yy","cccc","cccc","cccc","dddd","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ee","abc","def","ghi","jkl","dcherrydghi","d","mno","ghi"}) , {"ee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jkl","ccc"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","def","ghi","jkl","d","mno","ghi"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","dddddd","eeeeddddddee"}) , {"aa","bbbb","dddddd","eeeeddddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ee","ab","def","ghi","jkl","dcherrydghi","d","mno","ghi"}) , {"ab","ee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ddefgdd","bbb","ccc","dddd","dddd","ddd","ee","ffffff"}) , {"ee","dddd","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","zzzjabcdklz","ee","zzzz","yy","xxxxx","cheyrry","yystu","rrrrrr","sssssss","yy"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghij","knlmno","a","knlmno"}) , {"ghij","knlmno","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","jkl","abc","jkl","isi","jkl"}) , {"datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","aa","bbb","bb","b","bb"}) , {"aa","bb","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","abc","jkl","ac","isi","jkl"}) , {"ac","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ap","banana","date","grape","dateddded","lemon","banacheyrryn","ap","lemon"}) , {"ap","ap","date","banana","banacheyrryn"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","cccccc","ccceeecc","ddd","ddddd","eeeccceeecceee","aaa","ccccc","cccccc"}) , {"aa","cccccc","cccccc","ccceeecc","eeeccceeecceee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ee","bbb","ccc","dddddd","ddd","ee","ffffff","bbb"}) , {"ee","ee","dddddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ahghijjbcd","jabcdkl","abcd","efyystug","yystu","jkl","abcd","abcd"}) , {"abcd","abcd","abcd","efyystug","ahghijjbcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","ghij","klmno","p","qr","stu","vwxy","v","qr","vwxy"}) , {"qr","qr","ghij","vwxy","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","bffffff","stu","vwxy","qr"}) , {"bc","qr","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","abccccccc","awesome","ghi","jkl","mno","jkl"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"knlmno","dateddddknlmno","ghijj","ee"}) , {"ee","knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","jkl","mno"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","klemonklmno","def","aa","ghij","klmno"}) , {"aa","bc","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaaa","eeee","cccccc","ddd","ddddd","eeeeee","aaa","aaa"}) , {"aa","aaaa","eeee","cccccc","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","eeee","ccccc","ddd","eeeeee","aaa","ccccc","ccccc"}) , {"bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbb","ccc","dddd","ddd","ee","ffffff","ee"}) , {"ee","ee","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","datedddd","grape","kiwi","lemon","apple"}) , {"kiwi","banana","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klisimno","rrrrrr","kklmno","def","klmno"}) , {"kklmno","rrrrrr","klisimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bb","bbbb","eeee","ddd","ddddd","eeeeee","aaa","ddd","eeee"}) , {"bb","bbbb","eeee","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","cherry","rgrape","kiwi"}) , {"kiwi","banana","cherry","rgrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","e","xxxxcherryx","rrrrrr","rrrrrr","ssssssss","banan"}) , {"ee","cccc","rrrrrr","rrrrrr","ssssssss"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddddd","eeeeee","dateddddknlmno"}) , {"aa","bbbb","eeee","eeeeee","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","stu","vwxy","cheyrryqr","vwxy"}) , {"bc","qr","ghij","vwxy","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","dateddddrrrr","ccccc","ddd","ddddd","eeeeee","sssssss","rrrr","aaa"}) , {"bbbb","rrrr","eeeeee","rrrrrr","dateddddrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aa","a","bbb","bb","zzz","bbb"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ap","banana","date","grape","kiwi","lemon","lemon"}) , {"ap","date","kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","yy","cccc"}) , {"ee","yy","yy","cccc","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"v","aa","a","bbb","bb","zzz"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aaaaaa","eeddddeapplaee","aaa","bbbb","ddd","yjklbcy","ddd","aaa"}) , {"bbbb","aaaaaa","eeddddee","eeddddeapplaee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"v","aa","a","aadcherrydghi","bffffff","bb","zzz"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bc","def","klmno","klmno"}) , {"bc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","ghi","efg","hi","jkl","jkl","ghi"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jkl","c"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efgdef","jkrgrapel"}) , {"abcd","efgdef"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"dateddddnlmno","ghijj","knlmno","dateddddknlmno"}) , {"knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghij","knlmnno","knlmno","ghij","knlmnno"}) , {"ghij","ghij","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","","aaa","aa","a","bbb","bb","b"}) , {"","aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","cdateddddcccc","ddd","ddddd","eeeeee","rrrr","bffffff","ddd"}) , {"bbbb","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"knlmno","dateddddknlmno","ghijj","knlmno"}) , {"knlmno","knlmno","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","ieeeccceeecceees","world","is","awesome","PythoPn","awesome"}) , {"is","ieeeccceeecceees"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","ccccc","ddd","ddddd","aaa","aa"}) , {"aa","aa","bbbb","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"acccccc","a","knlmno"}) , {"knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccc","ddd","ee","zzzz","jabcdkl","xxxxx","rrrrrr","sssssss"}) , {"ee","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeee","ghi","ef","hi","jkl"}) , {"ef","hi","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","","bc","def","ghij","klmno","qr","stu","def","def"}) , {"","aa","bc","qr","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","kklmno","def","ghij","klmno","kklmno","def","kklmno","def"}) , {"ghij","kklmno","kklmno","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddd","applaegh","eeeeee","aaa","ccccc","ccccc"}) , {"aa","bbbb","eeee","eeeeee","applaegh"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abccccccc","def","ghi","mno"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abccccccc","ghi","mno"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ahghijjbcd","jabcdkl","abcd","efyystug","rgrape","yystu","jkl"}) , {"abcd","rgrape","efyystug","ahghijjbcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","ghij","klmno","p","qr","stu","vwxy","cheyrryqr","vwxy","p","vwxy"}) , {"qr","ghij","vwxy","vwxy","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","def","ghij"}) , {"ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"rrrrrr","bbbb","dateddddrrrr","ccccc","ddd","ddddd","eeeeee","sssssss","rrrr","aaa"}) , {"bbbb","rrrr","eeeeee","rrrrrr","dateddddrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","a"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","zzzz","date","yy","xxxxx","rrrrrr","sssssss","yy","ddd"}) , {"yy","yy","cccc","date","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aaa","bbbb","eeee","ccccc","ddd","ddddd","bb","cccaaa","aaaa"}) , {"bb","aaaa","bbbb","eeee","cccaaa","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","gre","ccccc","ddd","ddddd","aaa"}) , {"aa","bbbb","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","cccccc","ccceeecc","ddd","ddddd","eeeeee","aaa","PythoPn"}) , {"aa","bbbb","cccccc","eeeeee","ccceeecc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","bbb","aaa"}) , {"bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ee","abc","def","ghi","jkl","ghgi","dcherrydghi","d","mno","ghi"}) , {"ee","ghgi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","def","ddef","ghi","jkl","mno","ghi"}) , {"ddef"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","abc","ghi","hi","gh","mno"}) , {"gh","hi"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","eeee","gre","ccccc","ddd","ddddd","aaa"}) , {"bbbb","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Programming","ab","i","awesome","Python"}) , {"ab","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","datedddd","grapeawesome","kiwi","lemon"}) , {"kiwi","banana","datedddd","grapeawesome"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbb","bbbb","cccccc","ccceeecc","ddd","ddddd","eeeeee","aaa","ccccc"}) , {"aa","bbbb","cccccc","eeeeee","ccceeecc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","abcd","rrrrr","","ee","zzzz","xxxxx","rrrrrr","sssssss","yy"}) , {"","ee","yy","abcd","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","bbbb","ddddd","eeeeee","bbbb","bbbb"}) , {"aa","bbbb","bbbb","bbbb","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","def","ghij","klmno","p","qr","stu","vwxy","aa","rqr"}) , {"aa","bc","qr","ghij","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ahghijjbcd","jabcdkl","abcd","rgrape","yystu","bffffff","jkl"}) , {"abcd","rgrape","ahghijjbcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","crrrrrrcc","yy"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"eeddddee","aaa","bbbb","eeee","ccccc","ddd","abccccccc","bb","aaa"}) , {"bb","bbbb","eeee","eeddddee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klemonklmno","aa","aaa","bbbbbbb","e","ccccc","jkl","eeeeee","ajklbPython"}) , {"aa","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","bbbb","eeee","ccccc","ddddd","eeeeee","dateddddknlmno","eeeeee"}) , {"aa","bbbb","eeee","eeeeee","eeeeee","dateddddknlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","dcherrydghi","bbbb","ccccc","ddd","dddddd","eeeeee"}) , {"aa","bbbb","dddddd","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cherry","apple","banana","kiiwi","cheyrry","grape","kiwi","yystu","lemon","cherry"}) , {"kiwi","banana","cherry","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","xxxxx","rrrrrr","sssssss","yy","ddd"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","a","","bc","def","ghij","gjhij","klmno","qr","def","def"}) , {"","aa","bc","qr","ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ccc","ddd","ee","zzzz","ddebananf","yy","xxxxx","rrrrrr","sssssss","ddd"}) , {"ee","yy","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaaa","eeeapplaee","eeee","cccccc","ddd","ddddd","eeeeee","aaa","aaa"}) , {"aa","aaaa","eeee","cccccc","eeeeee","eeeapplaee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aaa","bbbb","ccccc","ddd","bbbb","ddddd","aaa","eeeeee","bbbb"}) , {"bbbb","bbbb","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","ghi","efg","hi","jkl","jkl","ghi","ghi"}) , {"hi","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","awesome","Python","zzz","is","world"}) , {"is","is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"deefyystugf","abc","def","ghi","jkl","mno"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","eeee","ccccc","ddddd","eeee"}) , {"aa","bbbb","eeee","eeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","ghijj","ddd","ddddd","eeeeee","rrrr","aaa"}) , {"bbbb","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","ydef","b","xxxxx","sssssss","yy","zzzz","ydef"}) , {"ee","yy","cccc","ydef","ydef","zzzz","zzzz"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bc","def","klisimno"}) , {"bc","klisimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","Proggreramming","Programming","i","awesome","Python"}) , {"Python","Proggreramming"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"vwxy","isi","abbc","jkl","mno","jkl","abc","jkl"}) , {"abbc","vwxy"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aef","bbbb","eeee","ccccc","ddddd","eeeeee","abffffffa","aaa"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","jklbc","ddd","rrssssssrrr","","ee","zzzz","rrrrrr","sssssss","yy"}) , {"","ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbbb","apple","banana","rgrape","kiwi"}) , {"bbbb","kiwi","banana","rgrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","dddd","ddd","ddddd","eeeeee","rrrr","aaa","r","ddd"}) , {"bbbb","dddd","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abc","sssssssklmno","deHello","ghi","jkl","mno","ghi"}) , {"sssssssklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","isi","jkl","mno","abcc","b"}) , {"abcc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","xxxxx","rrrrrr","sssssss","yy","sssssss","yy"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"mno","apple","banana","bannana","cheyrry","datdedddd","grape","kiwi","lemon","cherry"}) , {"kiwi","banana","cherry"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","deHelloe","ccccc","ddd","ddddd","eeeeee","bbb","aaa","eeeeee"}) , {"bbbb","eeeeee","eeeeee","deHelloe"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jkl","ghijj","abcd"}) , {"abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","bb","cheryrr","dcherryd","xxxxx","sssssss","yy","ee"}) , {"bb","ee","ee","yy","cccc","dcherryd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghi","cheyrrya","jjkl","ghijj","abcd","abcd"}) , {"abcd","abcd","jjkl","cheyrrya"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","date","yyyy","sssssyystu","xxxxx","rrrrrr","sssssss","yy","ddd"}) , {"ee","yy","cccc","date","yyyy","zzzz","rrrrrr","sssssyystu"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"deef","abc","jkklmnol","def","isi","jkl","mno","ap","cccmno","abc"}) , {"ap","deef","cccmno","jkklmnol"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","xxxxx","ddd","ee","zzzz","xxxxx","rrrrrr","sssssss","yy"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","ghij"}) , {"ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","dateghidddd","grape","kiwi","dd","lemon"}) , {"dd","kiwi","banana"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","isi","jkl","abc","jkl","ac","isi"}) , {"ac","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","bc","kklmno","defssssss","ghij","klmno"}) , {"bc","ghij","kklmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","dddd","ddd","ddddd","eeeeee","rrrr","aaa","aaa"}) , {"bbbb","dddd","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghij","acccccc","a"}) , {"ghij"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","ddd","eeeeee","sssssss","rrrr","aaa","ccccc"}) , {"bbbb","rrrr","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abccccccc","ghi"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"world","is","awesome","Python","zzz","is"}) , {"is","is","Python"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","bbbb","eeee","gre","ccccc","ddd","ddddd","dcherryd"}) , {"bbbb","eeee","dcherryd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbb","ccc","dddd","ddd","qr","ee","ffffff"}) , {"ee","qr","dddd","ffffff"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","date","yyyy","sssssyystu","rddddrrrrr","xxxxx","rrrrrr","sssssss","yy","ddd","ddd"}) , {"ee","yy","cccc","date","yyyy","zzzz","rrrrrr","rddddrrrrr","sssssyystu"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","cheyrrya","bbbb","eeee","cccccc","dcherryd","ddddd","eeeeee","aaa","cheyrrya"}) , {"aa","bbbb","eeee","cccccc","eeeeee","cheyrrya","cheyrrya","dcherryd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"datedddd","jkl","mno","vwxy","","jkl","dateadddd",""}) , {"","","vwxy","datedddd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"a","nknlmno"}) , {}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ahghijjbcd","abcd","absssssyystucd","efyystug","abcd"}) , {"abcd","abcd","efyystug","ahghijjbcd","absssssyystucd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"mno","apple","banana","cheyrry","ggrape","grape","kiwi","lemon","cherry"}) , {"kiwi","banana","cherry","ggrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"Hello","ieeeccceeecceees","Programming","is","awesome","Python"}) , {"is","Python","ieeeccceeecceees"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","aaa","bbbb","ccccc","ddd","bbbb","aaa","eeeeee","bbbb"}) , {"bbbb","bbbb","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbbb","apple","banana","eeee","rgrape","kiwi"}) , {"bbbb","eeee","kiwi","banana","rgrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aaa","rrrrrr","bbbb","ccccc","ddd","eeeeee","sssssss","aaa","ccccc"}) , {"bbbb","eeeeee","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"ghij","knlmno","a","klmno","knlmno"}) , {"ghij","knlmno","knlmno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"bbap","apple","banana","eeee","rgrape","kiwi"}) , {"bbap","eeee","kiwi","banana","rgrape"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","ccyystu","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","aaa","aaa"}) , {"aa","bbbb","eeee","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"abcd","efg","jkl","jkl","abcd","efg"}) , {"abcd","abcd"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","ydef","ccccc","ddd","eeeeee","eeeee","aaa","bbbb"}) , {"aa","bbbb","ydef","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","aa","a","bb","b"}) , {"aa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","rrrrr","ee","zzzz","yy","xabcdxxxx","rrrrrr","sssssss","yjklbcy","rrrrr","rrrrr"}) , {"ee","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"rrrrr","cccc","ddd","ee","bb","cheryrr","cheyrrya","xxxxx","zz","sssssss","yy","ee","cheryrr"}) , {"bb","ee","ee","yy","zz","cccc","cheyrrya"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"cccc","ddd","ee","zzzz","yy","xxxxx","rrrrrr","sssssss","yy","sssssss"}) , {"ee","yy","yy","cccc","zzzz","rrrrrr"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"zz","aa","aaa","bbbbbbb","e","ccccc","jkl","eeeeee"}) , {"aa","zz","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"b","isi","jkl","abcc","b"}) , {"abcc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"klisimno","rrrrrr","kklmno","def","klmno","kklmno"}) , {"kklmno","kklmno","rrrrrr","klisimno"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","cccccc","bffffff","ccccc","ddd","ddddd"}) , {"aa","bbbb","cccccc"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaai","bbbb","ccccc","ddd","ddddd","eeeeee","aa","ccccc","ddddd"}) , {"aa","aa","aaai","bbbb","eeeeee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"aa","aaa","bbbb","ccccc","ddd","bbbb","ddddd","eeeeghijee","eeeeee","bbbb"}) , {"aa","bbbb","bbbb","bbbb","eeeeee","eeeeghijee"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"apple","banana","deefdate","grape","kiwi","lemon"}) , {"kiwi","banana","deefdate"}))){ tests_passed++; } total_tests++;

    if((issame(sorted_list_sum({"jjkl","bbbb","eeee","ccccc","ddd","ddddd","eeeeee","aaa","aaa"}) , {"bbbb","eeee","jjkl","eeeeee"}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


