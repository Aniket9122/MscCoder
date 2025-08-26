#include<iostream>
#include<string>
using namespace std;

bool is_happy(const string &s){
    int len = s.length(); 
  
    // Check if length is at least 3
    if (len < 3) {
        return false; 
    }
      
    for (int i = 0; i < len - 2; ++i) {
      // check if three consecutive characters are distinct
      if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2])  
        return false; 
    }
      
    return true; 
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

    if((is_happy("a") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcd") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("xyy") == false)){ tests_passed++; } total_tests++;

    if((is_happy("iopaxpoi") == true)){ tests_passed++; } total_tests++;

    if((is_happy("iopaxioi") == false)){ tests_passed++; } total_tests++;

    if((is_happy("a") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcd") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("xyy") == false)){ tests_passed++; } total_tests++;

    if((is_happy("iopaxpoi") == true)){ tests_passed++; } total_tests++;

    if((is_happy("iopaxioi") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xyz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("tim") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcabc") == true)){ tests_passed++; } total_tests++;

    if((is_happy("bjmpzkfak") == true)){ tests_passed++; } total_tests++;

    if((is_happy("cadbfe") == true)){ tests_passed++; } total_tests++;

    if((is_happy("agbebf") == false)){ tests_passed++; } total_tests++;

    if((is_happy("yyyyy") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xycxyz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("bacbacb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("xy") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xxy") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baacbacb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bjmzpzkfak") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xxyzycxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bacacbacb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("tibacacbacbm") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bagbebf") == false)){ tests_passed++; } total_tests++;

    if((is_happy("tibaagbebfcacbacbmm") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baaacbacb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abbaacbacbcabc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abbaacbaccbcabc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baacbacbkfak") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xx") == false)){ tests_passed++; } total_tests++;

    if((is_happy("x") == false)){ tests_passed++; } total_tests++;

    if((is_happy("agbbebf") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abbaacbaccb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("cabcabc") == true)){ tests_passed++; } total_tests++;

    if((is_happy("XX") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xxbacbacbx") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bjmzpzfak") == false)){ tests_passed++; } total_tests++;

    if((is_happy("yxycxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baacbacbbRxtTUe") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baacbabbaacbaccbcabcacbbyxycxyzRxtTUe") == false)){ tests_passed++; } total_tests++;

    if((is_happy("agbebfx") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bjmpzkafak") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baacbagbebfxk") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bjmzpzkf") == false)){ tests_passed++; } total_tests++;

    if((is_happy("zxyxcxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aebfx") == true)){ tests_passed++; } total_tests++;

    if((is_happy("acbbaacbaccb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("") == false)){ tests_passed++; } total_tests++;

    if((is_happy("yyyyyy") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xxxx") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bjmzf") == true)){ tests_passed++; } total_tests++;

    if((is_happy("gabgbbebf") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bjmzpzkfamk") == false)){ tests_passed++; } total_tests++;

    if((is_happy("zbjmzpzfak") == false)){ tests_passed++; } total_tests++;

    if((is_happy("PQko") == true)){ tests_passed++; } total_tests++;

    if((is_happy("baacbacbbRxbtTUe") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baUe") == true)){ tests_passed++; } total_tests++;

    if((is_happy("PQkaebfxo") == true)){ tests_passed++; } total_tests++;

    if((is_happy("baacbagbbebfxk") == false)){ tests_passed++; } total_tests++;

    if((is_happy("cadbbjmzffe") == false)){ tests_passed++; } total_tests++;

    if((is_happy("caaaabcaabc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abbaacbaccbbcabc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("baUee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("xxx") == false)){ tests_passed++; } total_tests++;

    if((is_happy("yxycxyzxxy") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab") == true)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566778899001122334455667788990011223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefg") == true)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadadbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccddddadaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcab") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566775565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcaabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjklzxcvb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaacaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabc11223344556abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab65677889900abcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("DJjGkGk") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabcabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcacabcabcabcabcabcabcabcabdcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcadcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddcabcabcabcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112283344556677556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcdabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("311223344556abcabb65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddcccckaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbcdcccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaababbbccccddddeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdbcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcabcacbcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjklzxcvbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabaaaabbbbccccdeeeddddccccbbbbaaaaeabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455667075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcvbnmqwertyabcabuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445356abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbabaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaklzxcvbcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcababcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgcabcabcabcabcabcabcabcadcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbcccacdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccdbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbdccccddddaaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwerty112233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaeeabcdabcabcabcabcabcabcabcabcabcabcabcabcabccabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddcabcabcabbcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabca11223344556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900bcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcababcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455667755656777889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaababbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaababababdaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeffghijklmnopqrstuvwxyzabcdopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaaaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbbcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabeedddabcabcabcabcaabcabcabcabcabcabcabcabcabcabcabcabcabc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbdbbccccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcaaaaabbbbccccdeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcvbnmqwertyabcabuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddcbbbbccccdeeeddddccccbbbbaaaaeeeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccdbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertydeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbcdcccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccdabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabdddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbcccbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcaaaaabbbbccccdeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabbcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcvbnmqwertyabcabuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcababcccaaabbddeefffcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344577889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopaDJjGkGksdfghjklzxcvbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdbcabcabcabcabbcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddccabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabbcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababababababababababababababababababababaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcaaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbabaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccddddabcabcabcabeedddcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445356abcabcabcaaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmnopqrstuvnwxyzabcdehijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabccabcabbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcabcacbcabcabcabcabcabca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabc1122334455b6abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab65677889900abcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopaDJjGkGksdfghjklzxcvbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcbabcabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccabababababababababababababababababababcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabababababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaeaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccdbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbcccabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaaaaaabbbbccccdeeeddddccaaadadbbccddeeaaabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("3112233aaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd44556abcabb65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcdabcabaaaabbbbccccdeeeddddccccbbbbaaaaeabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccabcabcabcabcabcacbcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccdabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabdddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddcccccdbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbcccabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeee112233445356abcabcabcaaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900ddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455667775565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455667755667788990") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcacabcabbcabcabcbcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcacbcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddddccccaabcabcabcabcabcabcabcabcabcabcabcababcbcabcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaababcababbbbccccabababababababababababababababababaebababababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabecabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjklzxcvbbbccccdeeedaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcdddccccbbbbaaaaeeeedddccccaajZtrAVBJedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaacaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjklzxcvbbbccccdeeedaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcdddccccbbbbaaaaeeeedddccccaajZtrAVBJedddccccawertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccdabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabdddbaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmnopqrstuvwxyrzabcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaabccabcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcdefgaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaabccabcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcdefgaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabecabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344557667755656777889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcbbbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadadbbccddeaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcbabcabcabcabcabcabcabcabcabbcabcabcabeaabcbcabcabcabcabcabcabcabcabcabcabcaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcbbbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabcddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcaaabbbbccccdbcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcacbcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghbjaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaacabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223634455667075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aba11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeeccccddddaaaabbbbccdccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabbcabcabcabcadbcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcacabcabcabcabcabcabcabcabdcabcabcabeedddcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgabcdefgcdeqwerty112233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbfgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbdddccccaaeeeedddccccaaaaaabbbbccccdeeeddddccccbbbbaaacaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmnopqrstuvwxyrzabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabeedddcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbabbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabbbbbccccdbcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcababcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeea112233445566775565677889900bcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabaaaaabbbbccccddddaaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddcabcabcabbcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11211223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee67075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvbcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabccabcabbcabcabcababa11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeeccccddddaaaabbbbccdccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabacabcabcabbcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1aabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab656aaccccdabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabdddaaaabbbbccccddddaaaabbbbccccdddd77889900aad4dbbccddeeaabbccddee1223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdbcabcabcabcabcabcabeeddaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabdc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaababbbccccddddeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeededddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwerty112112233445566775565677889900233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabc1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344abcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcaaabbbbccccdbcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdee45566775565677889900ccabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddccccbbbbaaabaeeeedddcaaeeabcdabcabcabcabcabcabcabcabcabcabcabcabcabccabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbdddccccaaeeeedddccccaabcabcabcababcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11228334455667755aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc6677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvbedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeededddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaabcabcabcabcaabcabcabcabcabcabcabcabcabcabcabcabcabeeabcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddbddccccbbbbaaaaeeeqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghbjaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaklzxcvbeaaaaabbbbccccddddaaaacbbbbccdccddddaaaabbbbccccdddddddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddcccacbbbbaaaaeeabcabcabcabcabcacabcabcabcabcabcabcabcabdcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeaeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaaccccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddccabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbbaaaaeeeedddccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("kgeaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaabbcabcaboNtlLNR") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcacbcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcacbcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcccaaccccdabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabdddbaaaabbbbccccddddaaaabbbbccccddddcaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445356abcabcabcaaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaabaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvbedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddcedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabaaaaabbbbcbcccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababaababababababababdddcabcabcabbcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaabbbbccccbdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabc1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344abcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcaaabbbbccccdbcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefga7889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbfgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopaDJjGkGksdfghjklzxcvbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcdefghijklmnopqrstuhijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1121122334qwertyuiopasdfghjklzxcvbnmqwertyabacabuiopasdfghjklzxcvb4556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee67075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("3112233aaccckgeaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaabbcabcaboNtlLNRbcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd44556abcabb65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112237344557667755656777889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddaaaaabbbbccccddddaaaaababababdaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddddaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcacbcabcabcabcabcabcabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("nOyfaZf") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddaaaaabbbbccccddddaaaaababababdaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddddaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445356abcabcabcaaaaabbbbcbcccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccceeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aba11223344556abcabcabcabcabcabcabcabcabcabaaaaabeccccddddaaaabbbbccdccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddcccccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddcccaaeeeedddccccabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccdaabcabdeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvbedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaqwerty112233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbaaabbbbdccccddddaaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccaaaaabbbbccccdbcabcabcabcabcabcabeedddcdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445778qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb89900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvbcccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddccccbbbbaaabaeeeedddcaaeeababcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11228334455667755aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccdddbdcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc6677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaababbbccc11228334455667755aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccdddbdcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc6677889900cddddeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabbcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabc112233445778qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdafghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccbaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb89900b") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabaeeeedddccccaaeeeedddccccaabcabbcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcaabcabcaaaaaabbbbccccdeeeddddccaaadadbbccddeeaaabcabcabcabcabcabcabcabcabcabcabbcabcabcabbcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeedaaaaabbbbccccdbcabcabcabcabcabcabeedddcdddccccbbbbaaaaeeabcabcabcabcabcabcabcababcabcabcabcabbcabcabcabcadbcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcacabcabcabcabcabcabcabcabdcabcabcabeedddcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab5566775565677889900cabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeceedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaqwerty112233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbaaabbbbdccccddddaaaaaaaaaabbbabababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcbabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddcccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababaaaaabbbbccccdbcabcabcabcabbcabcabeedddccabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445qwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb56677556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbccccbbbbaaaaaaaaaabcabcabcabbcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccdabcabcaabcccaaabbddeefffcbcabcaabcabcabcabcabcabcabcabcabcabdddbaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccc112233445778qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbcocccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb89900cddddaaaababbbccccddddeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccdabcabcaabcccaaabbddeefffcbcabcaabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddccabcabcabcabcabcabcabdddbaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbdddccccaaeeeeddddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertydeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbcdcccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11228334455667755aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccdddbdcababcabcabcabcabcabcabcabcabcaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaababbbccccddddeedddcabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabaeeeedabcdefghijklmnopqrstuvwxyrzabcdefghijklmnopqrstuvwxyzddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcababcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgcabcaaaaababbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcadcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdbcabcacabcabcabcabcabcabcabcabcabcabcabcabcabcabdc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddccccbbbbaaabaeeeedddcaaeeababcabcabcabcabcabeedaddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeedabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcdddccccbbbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("3112233445900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223634455qwerty112112233445566775565677889900233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb667075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("3112233aaccckgeaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddcccddddaaaabbbbccccddddaabbcabcaboNtlLNRbcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd44556abcabb65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdbcabcabcabcabcabcaabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaacbbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223634455qwerty112112233445566775565677889900233445566775565677889900uiopasdfghjklzxcvbnm9900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbcccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("jZtrAVBJ") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcabcabcabaaaaabbbbcbcccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababaababababababababdddcabcabcabbcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaabccabcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcdefgaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwerty112112233445566775565677889900233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasvdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("jDJjGkGk") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabeedddabcabcabcabcaabcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcbabcabcabeedddcabcabbcabcabcabcabcabcabcabcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababbababababababababababababababababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddddccccaabcabcabcabcabcabcabcabcabcabcabcababcbca1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900bcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddc4cccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbeccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeecabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445356abcabcabcaaaaabbbbcbcccdeeeddddcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddaaaaabbbbccccddddaaaaababababdaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddddaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcaabcdefgabcdefgcdefga7889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbfgabcdefgbcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcaccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccdbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcaabcabcabcbabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabccabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccccdeeedaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddddccccaabcabcabcabcabcabcabcabcabcabcabcababcbcabcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababcabcabcabdddcccqwerty112112233445566775565677889900233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbbbbaaaaeeeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccd1122334455667775565677889900dddaaaabbbabcbcabcabcabcabcabcabcabaaaaabbbbcbcccddddaaaabbbbccdccdddcdaaaabbbbccccababababababababababababababababaababababababababdddcabcabcabbcabcabcabbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcbcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcacabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeffghijklmnpqrstuvwxyzabcdopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcaaaaabbbbccccdeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabaaaabbbbccccdeeeddddccccbbbbaaaaeabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccaccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcvbnmqwertyabcabuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababbababababababababababababababababababdddbbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaacbbbbccccdeeeddabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabddccccbbbbaaaaaaaabbbaaaaabbbccdccddddaaaabbbbccccababababababbababababababababababababababababababdddbbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwerty1121122334455667755656778abcabcaabccabcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcdefgaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcccca89900233445566775565677889900uiopasdfghjklzxcvbnmqwertyuiopasvdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbabaaaaaaabbbbccccdeeeddddccccbbbbaaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaababbbccccddddeedddcaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccecdbbbbaaaaeeabcabcabcabcabcabcabcacbcabcabcabcaaaaabbbbcccabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaacbbbbccccddddaaaabbbbccdccddddaaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertydeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbcdcccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvbcabcabbcabcabcababcabaeeeedddccccaaeeeedddccccaabcabbcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmwertlyuiopasdfghjkldzxcvb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccabababababababaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabujiopaDJjGkGksdfghjklzxcvbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabababababababababababababababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbabbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dca1babcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddccccbbbbaaabaeeeedddcaaeeababcabcabcabcabcabeedaddccabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112223344556677556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1aabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaaeeeedddccccacabcabcabcabbcabcabcab656aaccccdabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabdddaaaabbbbccccddddaaaabbbbccccdddd77889900aad4dbbccddeeaabbccddee1223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcaabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvbdddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddbaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefga7889900uiopasdfghjklzxcvbnmqwvertyuiopasdfghjklzxcvbfgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababbbababababababababababababababababababdddbbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeffghijklmnpqrstuvwxyabcdeffghijklmnopqrstuvwxyzabcdopqrstuvwxyzzabcdopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmwaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcabertlyuiopasdfghjkldzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1121122334qwertyuiopasdfghjklzxcvbnmqwertyabacabuiopasdfghjklzxcvb4556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee67075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcaaaaabbbbccccdeeabcabcabaaccccdaba11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeeccccddddaaaabbbbccdccddddaaaabbbbccccdddddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabbcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcvbnmqwertyabcabuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcababcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgcabcaaaaababbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeeddcabcabcabcabcabcabeedddcbcabcabcabcabcabcadcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("pIyuFerT") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdbcabcacabcabcabcaaaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcababcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccabcabcabcabcabcabcabcabcabcabcabdc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabcabcabbcacbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aba11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvbedddccccalzxcvbaaaaaaaabbbbcccab65677889900aad4dbbccddeeaabbccddeeccccddddaaaabbbbccdccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabccabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcacbcabcabcabcabcabcaabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcabcabcabaaaaabbbbcbcccddddaaaabbbbccdccddddaaaabbbbccccabababababababcabcaabccabcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcdefgaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabababababababababababaababababababababdddcabcabcabbcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaqwerty11223344556677556s5677889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbaaabbbbdccccddddaaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaababbbccccddddeedddcabcabcaaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccabababababababaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabujiopaDJjGkGksdfghjklzxcvbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabababababababababababababababababdddbcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddcabcabcabcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("rPlIP") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcababcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgcaaabcabcabcabcabcabcbabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeeddcabcabcabcabcabcabeedddcbcabcabcabcabcabcadcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbeccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeecabcabcabcabcabcabbcabcabcababcabNuqZCZBVKR") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaabccabcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcdefgaaabbddeefffbcabcaabcabbcabcabcabcabcabcabcabcabcabeecabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccabcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaklzxcvbcabcabeedddcaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcacbcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbcccaaabbddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccabababababababaaaaabbbbccccdddccccaabababababababababababababababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmnopqrstuvwxyzabcde") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddkeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab4556677556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabbcabcabcabcadbcabcabcabccaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabccabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddaaaaabbbbccccddddaaaaababababdaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccabababababababababababababababababababababababa11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeeccccddddaaaabbbbccdccddddaaaabbbbccccddddababdddddaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddababababababababababababababaebababababababddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaacbbbbccccdeeedcdabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabddccccbbbbaaaaaaaabbbaaaaabbbccdccddddaaaabbbbccccababababababbababababababababababababababababababdddbbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdadeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdebeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvbcccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabbcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcadcabcabcabeedddcddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcacabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("3112233aaccckgeaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaabbcabcaboNtlLNRbcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd44551122334455667755656778899006abcabb65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbeccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4d11223634455667075565677889900bbccddeeaabbccddeecabcabcabcabcabcabbcabcabcababcabNuqZCZBVKR") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445778qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabceeeedddccccalzxcvb89900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaababababdd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddccccbbbbaaabaeeeabcbcabcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccabababaaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbabaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccddddabababababababababababababababababababababdddcabcabcabcabcabcabbedddcaaeeababcabcabcabcabcabeedaddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaabbbbccccddddaaaaababababdaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababaababababababababababababababababababababdddddaaaaababababdd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddcccccdeeeddddccccaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccde1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccaaaaabbbbccccdbcabcabcabcabcabcabeedddcdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900eedddadccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcababcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaabccabcdefgabcdefgcdefgabcdefgabcdeaaccccddddadaaabbbbccccddddaaaabbbbccccddddfgcdefgabcccaaabbddeefffabcdefgaaabbddeefffbcabcaabcabbcabcabcabcabcabcabcabcabcabeecabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcacbcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("QlLJztg") == true)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeqwertbabcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcababcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaopasdfghjklzxcvblzxcvbedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("lblEKueCZq") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeaaaaabbbbccccddddaaaaababababdddedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566778899001122334455667780011223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcacbcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabbcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11211223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddcccaaeeeedddccccabcabcabbcabcabcababcab5677889900aad4dbbccddeeaabbccddee67075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcaaaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbb6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccaaaaabbbdddccccaaeeeedddccccaabcabcabcababcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccaccddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("511223344556677556586777889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmde") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccaaadadbbccddaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcaddbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dcababcabcabcabcabcabcabbeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcccdeeeddddccccbbbbaaaaeea112233445566775565677889900bcabcabcabcabcabcabcabcabcabcabcabcabcabdcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaabbbbccccbbbbaaaaaaaabbbbccccdeeeddbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("IrPlIP") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcbabcabcabcabcabcabcabcabcaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddcccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababaaaaabbbbccccdbcabcabcabcabbcabcabeedddccabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeedddbdccccbbbaaaaabbbdddccccaaeeeedddccccaabcabcabcababcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccabaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbqwertyuiopasdfghjklzxcaaaaabbbbccccdeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcvbnmqwertyabcabuiopasdfghjklzxcvbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccaaaaabbbbccccdeeeddddccaaadadbbccddaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbccbbbbaaaaeeabcabcababcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgcabcabcabcabcabcabcabcadcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("FeQYRFWWU") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabccabcabbcabcabcababa11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeedddbbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeeccccddddaaaabbbbccdccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ab112233445qwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb56677556677889900ccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233abababababababababababababababababababababababaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddbcabcabcabeedddcab4577889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcab112423344556abcabcccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeecabcabcabcabcabcabbcabcabcababcabNuqZCZBVKR") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcaabcdefgabcdefgcdefga7889900uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbfgabcdefgbcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcaccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvbcabcacbcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaaaaaabbbbccccdeeeddddccaaadadbbabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcccddeeaaabcabcabcaaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccddddbcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddcccccdeeeddddccccbbbbaaaaeeeedddcccdca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcababcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcababcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgcabcaaaaababbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeeddcabcabcabcabcabcabeedddcbcabcabcabcabcabcadcabcabcabeedddcbcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaababbbccccddddeedddcabcabcaaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccabaaaaeeeedddccccaabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdbcabcacabcabcabcaaaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566bbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvbabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccabcabcabcabcabcabcabcabcabcabcabdc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11211223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeebddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcccqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjklzxcvbcaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddee67075565677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaccccdabcabcaabcccaaabbddeefffcbcabcaabcabcabcabccabcabcabcabcabcabdddbaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("FeQYRFWWaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcaabcabcabcabbcabcabcabU") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcnOyfaZfabuiopaDJjGkGksdfghjklzxcvbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbdddccccaaeeeedddccccaaaaaabbbbccccdeeeddddccccbbbbaaacaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcccccarPlIPaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabaabcabcabcabcabcabcabcacbcabcabcabcabcabcacabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghbjaaaaabbbbccccdeeeddddccccbbbbaaaabcdeffghijklmnpqrstuvwxyzabcdopqrstuvwxyzaeeeedddccccaklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertydeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbcdcccdeeeddddccccbbbbaaaaeeeedddcccccccalzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aba11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeeccccddddaaaabbbbccdccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabc11223344556abcabcabcabcabaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabccabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeeabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccdbdddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccdbdddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbabcdefghijklmnopqrstuvnwxyzabcdehijklmnopqrstuvwxyzbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabctabeedddcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaacabbbbccccdbcabcabcabcabcabcaabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcaeeddddccccbbbbaaaaaaaabbbaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababbababababababababababababababababababdddbbddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("Ia") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddcedddccccaccccbbbbaaabaeeeedddcaaeeababcabcabcabcabcabeedadqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvbdddccccalzxcvbdc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefga7889900uiopasdfghjklzxcvbwnmqwertyuiopasdfghjklzxcvbfgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddd1122aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd3344dcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaaaabbbbccccdeeeddddaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabcabcabcabeedddcedddccccaccccbbbbaaabaeeeedddcaaeeababcabcabcabcabcabeedadqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbacabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccbbbbaaaaeeeedddccccaaeeeedddccccqwe11223344556abcabcabcabbcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvblzxcvbdddccccalzxcvbdc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaacbbbbccccddddaaaabbcbbccdccddddaaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcabaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445356abcabcabcaaaaabbbbcbcccdeeeddddcaaaaabbbbccccbdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddaaaaabbbbccccddddaaaaababababdaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddddaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbabcabcabcabcabcabcabcabcabcabcabbcabcabcab6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccdddd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcbabcabcaaaaacbbbbccccddddaaaabbbbccdccddddaaaaabbbbccccddddabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeffghijklmnopqrstuvwxababxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddcaaaaabbbbdccccddddaaaaaaaaaabbbbccccdeeeddddccccbbbbaaabaeeeedddcababababdddcccbbbbaaaaeeabcabcabcabcabcabcabcabcabcbabcabcabcabcabcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcaabccabcdefgabcddddfgcdefgabcdefgaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabecabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("FeQYRFWWaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmbcabcabcaabcabcabcabbcabcabcabU") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddccbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaabcabcabcabcabcabcabcabcaddbcabcabcabcaacceedddccccaaeeeedddccccaabcabcacbcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbcccaaabbddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabca11223344556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabc6abcabcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaacaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65677aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeeddddccccaabcabcabcabcabcabcabcabcabcabcabcababcbca1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdaaaaabbbbccccdbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900bcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababcabcabcab889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1abababababababababababababababababababababababaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcababcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeedddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcaaccccddddaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbabaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaaaabbbbccccddddaaaabbbbccaccddddabcabcabcabeedddcab12237344557667755656777889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1aabcab11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab656aaccccdabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabdddaaaabbbbccccddddaaaabbbbccccdddd77889900aad4dbbccddeeaabbccddee1223344qwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertydeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabcabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbcdcccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvb556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("puFerT") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabbcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcaabcdefgabcdefgcdefga7889900uiopasdfghjcklzxcvbnmqwertyuiopasdfghjklzxcvbfgabcdefgbcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcaccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvbcabcacbcababcabaaabbbbccccddaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcadcabcabcabeedddcddabbcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccde1122334a4556abcabcabcabcabcabcabcabcabcabaaaaaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccaaaaabbbbccccdbcabcabcabcabcabcabeedddcdaaaaabbbbccccdbcabcabcabcabcabcabeedddceeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900eedaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcddadccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcababcabcabeedddc") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556abcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcaaaaaabbbbccccdeeeddddccaaadadbbccddeeaabbccddeebcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeecedddccccaabcabcabcabcabcabbb6567788aaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaababbbccccddddeedddcdd900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcaaaaaabcbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccabcabcabcabccabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddcqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcacbcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccacabcabcabcabbcabcabcab65677889900aad4dbbccddeeaabbccddeebbbaaaaeeeedddccccaaeeeedddccccalzxcvbcccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabadbcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccdccccalzxcvbdccccaaeeeceddabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaaeeeedddccccaaeeeedddccccabcabcabbcabcabcababcabdccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("FeQYRFWWaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeeddqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddcqwertyuiopasdfghjklzxcvbnmqwertlabcabcabcaabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccabcabcaabcccaaabbddeefffbcabcaabcabcabcabcabcabcabcabcabcabcabcabcabccb11223344556abcabcabcabcabcabcabcabcabcaabcabcabcabbcabcabcabU") == false)){ tests_passed++; } total_tests++;

    if((is_happy("djZtrAaaccccddddadaaabbbbccccddddaaaabbbbccccddddVBJ") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddbddccccbbbbaaaaeeeqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghbjaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaklzxcvbeaaaaabbbbccccdddddaaaacbbbbccdccddddaaaabbbbccccdddddddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcdabcabaaaabbbbccccdeeeddddccccbbbbaaaaeabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaqwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzzxcvbcabcabcabcacbcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcaaaaabbbbccccdeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdbbaaaacabcababcabccccdeeeddddccadddcabcabcabcabcabcabeedddcvbnmqwertyabcabuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233444") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445qwe11223344556abcabcabcabcabcabcabcabcabcabaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaceabcabcabcabbcabcabcab65h677889900aad4dbbccddeeaabbccddeertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb56677556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("Iabcbcabcabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccdccddddaaaabbbbccccababababababababababababababababababababababababdddcabcabcabcabcabcabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcaaaaaabbbabccccdeeeddddccccbbabcbcabcabcabcabcabcabcabcdabcabaaaabbbbccccdeeeddddccccbbbbaaaaeabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeaeedddccccaaeeeedddcccabcabcabcabcabcacbcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcbabcabcabcaaaaaabbbbccccdaeeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcababcabcabcabcabcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("lblqEKueCZq") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabecabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabbcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qaaaaabbbbccccdeeedddaaaaabbbbccccddddaaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcadbcabcabcabcaaccccddddaaaabbbbccccddddaaaabbbbccccddddaababcababbbbccccabababababababababababababababababaebababababeababddddccccbbbbaaaaaaaabbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjklzxcvbbbccccdeeedaaaaabbbbccccdeeeddddccccbbbbaaaaeeaaccccddddaaaabbbbccccddddaaaabbbbccccddddeedddcdddccccbbbbaaaaeeeedddccccaajZtrAVBJedddccccawertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcbbbbaaaaeeeedddccccaaeeeabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabqwertyuiopasdfghjklzxcvbnmqwertlyuiopasdfghjklzxcvbqwertyuiopasdfghjklzxcvbnmqwertyabcabuiopasdfghjkaaaaabbbdddccccaaeeeedddccccaabcabcabcabcabcabbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccalzxcvbcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabedddccccabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbabccccdeeeddddccccbbabcbcaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddcaaaaaabbbcbccccdeeeddddccccbbbbaaaaeeeedddccccaabcabcabcabcabcabcaaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcab112233445566775565677889900cabecabcabcabeedddcbcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccaaaaacbbbbccccddddaaaabbbbccdccddddaaaaabbbbccccddddbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcabbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("zYKVb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcbcabcabcabcabcabcabcabcabcabcabcabcaaaabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaeeabcabcabcabcabcabcabcabcaaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabbcabcabcabcabcabcabcabcabeedddcaabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabaabbbbccaccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcacbcabcabcabcabcabcabcabcabcabcabcabbcabcabcababcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("Iabcbcabcaaaaabbbbccccdeeeddddccccbbbbaaaaaaaabbbbccccdeeeddaaaaabbbbccccdeeeddddccabcccaaabbddeefffccbbbbaaaaaaaaabbbbccccdeeeddddccccbbbbaaaaeeeedddccccaaeeeceddaabcbcabcabcabcabcabcabcabcabcabcabcabcaaaaacbbbbccccdeeeddabcabcabcaaaaaabbbbccccdaeeeddddccccbbbbaaaaeeabcabcabaaccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabcabcaaaaabbbbccccdeeeddddccccbbbbaaaaeeabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeedddcabcabcabcabcabcabeedddcbcabcabcabcabcabcabcabcabcabcabcabcabcabddccccbbbbaaaaaaaabbbaaaaabbbccdccddddaaaabbbbccccababababababbababababababababababababababababababdddbbddccccbbbbaaaaeeeedddccccaaeeeedddccccaabcabcabcabcabcabaaaaabbbbccccddddaaaabbbbccabb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzdxcvbnmqwertyabcabuiopasdfghjklzxcvb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aacaa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaabbbcccdddeeeffffgggghhhhiiiijjjjkkkkllllmmmmnnnnooooppppqqqqrrrrssssttttuuuuvvvvwwwwxxyyzzz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccccddddaaaabbbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgagbcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bababababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcababababababababababababababababababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adddaaaabbbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddedee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcababababababababababababababababababadbabababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("IN") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112bcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab788990112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccdddeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbcccacddddaaaabbbbccccddddaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccccddddaaaabbbbcccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghicjklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbccccddd4daaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcaaaaaaabbbbccccddddaaaabbbbcccccddddbccccddddbcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abbcdefgabcdefgcdefgabcabaabcdefghicjklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbccddedede") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbdddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcababababababababababababababababababadbababababbabdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1babababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbdqwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1babaababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvb112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddddbccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababbabababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaabbbbccccddddaaaabbbbccccddddbccccddddaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaddbbccddeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab78abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff89900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcagbaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghicjklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbabababababababab112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab788990112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000ababababababababababababababdecfgabcdefgcdefefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1babababababababababababababababababababccdeeeddddabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabc8abcabcabcabcaabcccaaabbd1122334455660778899001122233445566778899001eefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbccddeeddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbaccccddddaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122336445566778899001122334455667788990011223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgdefgcdefgabcdefg") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abaaaaabbbbccababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adddaaaababbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566778899001312233445900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcacabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab55667abcabcabcabcabcabcabcabcabcaaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddbcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233344556677889900112233445900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddcdeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbabababababaaddbbccddeeaabbccddeeabababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbabababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaddbbccddedee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbabcabcabcabcabcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabbccddeeaabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabca9bcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122336445566778899011223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900abababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbabababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adddaaaabadbbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233aad3dbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabca9bcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgdefgcdabcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcabefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbcccacddddaaaabbbbccccdadddaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223364455667788990011223344556677889900112abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg23344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdabcccaaabbdddeefffefgcdefgabcdefgabcdefgcdababababababababababababbabababababababababgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabc8abcabcabcabcaabcccaaabbd112233445556607788992233445566778899001eefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900d9eefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223334455667788adddaaaabbbbccccddddbccccdddd9900112233445900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899abcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaabbbbccccddddaaaabbbbccccddddbccccddddaaabbbbccccddddaaaabbbbccccddbddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwertyugiopasdfghjklzxcvb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900ab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabe") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa11223344556677889900112233445566778899b00112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccd445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900d9eefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga1122334abcdefgabcdefgcdefgabcababababababababababababababababababadbababababbabdecfgabcdefgcdefgabcdefg34455667abcab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900cabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddedeae") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667aaaaaabbbbccccddddaaaabbbbaccccddddaaaabbbbccccdddddbcabcabcabcabcabcabcabcaabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1bababaqwertyuiopasdfghjklzxcvbnmqwertyugiopasdfghjklzxcvbbababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223364455667788990011223344556677889900112233445566778") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababaabcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgbababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabccddd4daaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgaabababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900abababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababababababababbcababababababababababababababababababadbababababbabdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabdddaaaabbbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaababccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbababababcabcabcabcabcabc8abcabcabcabcaabcccaaabbd1122334455660778899001122233445566778899001eefffbcabcabcabcabcabcabababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcbabcabcabcabcabcabcabcabcababcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabaaabbb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899abcabcabcabcacbcabc8abcabcabcabcaabcccaaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbccddeedede") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abaadddbbabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabecdefgabcdefgcdefgabcdefgddefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaddbbccddeeaabbcaabcccaaabbdddeefffcddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgaabababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbcrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababababababababbcababababababababababababababababababadbababababbabdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbccdde") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabbcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbabcabcabcabcabcabcabcabcabcabcaabcccaaabbd11223qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb3445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabe") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccdddabcabcabcabcabcabc8abcabcabcabcaabcccaaabbd1122334455660778899001122233445566778899001eefffbcabcabcabcabcabcabeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeabbccddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab7889901122334455660778899001122334455667788989001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdefghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455660778899001122334455667788990011b22334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfaaaddbbccddeeaabbcaabcccaaabbdddeefffcddeeghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("o") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223364455667788990011223344556677889900191223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1bababaqwertyuiopasdfghjklzxcvbnmqwertyugiopasdfghjklz112233445566077889900112233445566778899abcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900xcvbbabababababababaqwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvbbababababababababccdeeeddddccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabacabcabcabaaddbb1ccddeeaabbccddeebcab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaa11223344556677889900112233445566778899001122334455667abcabccddd4daaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bbddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabca11223364455667788990011223344556677889900112abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg23344556677889900baaaaabbbbccccddd4daaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbcaaaddbbccddedeecddeeaabbccddeebcab7889900deefffa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee556677233445900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ZXocn") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaddbbccddeddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaddbbcdee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("oqwertyuiopasdfaaaddbbccddeeaabbcaabcccaaabbdddeefffcddeeghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223364455667788990011202334455667788990019122334455667788990") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabaaabbbbcccbcddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga113223344556677889900112233445566778899001122334455667abcabcabcabc7abcabcabcabacabcabcabaaddbb1ccddeeaabbccddeebcab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabaaabbbbcccbcdbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abab11223344556677889900112bcabcabaaddbbccddeeaabbccddeebcab7889900abababababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbabababababbabababababbababababababababddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445aaee566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbccccddddaaaabbbbccccddddaaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("nbGgbXWEZ") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddq") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijkplabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbabababababaaddbbccddeeaabbccddeeabababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaaaabbbbccababa112233445abcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabbcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvabcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzwxyzabcdefghijklmnopqrstuvwxyz5667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223364455667788990011223344556677889900112abcdefgabcdefgcedefgabcdefgagbcabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab7889901122334455660778899001122334455667788989001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000deefffdefgcdefgabcdefg23344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgabcdefgcdefgabcabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455660778899001122334455667788990011b22334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab7889900abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgabcdefgcdefgabcabcccaaabbd11223344556607d7889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ababa112233445566778899001122334abcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefg4556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bababababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbabababababaaddbbccddeeaabbccddeeabababababababababababababababababdecfgabcabababababbababababababababababbabababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbccddededde") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223cabcabcabaaddb11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bccddeeaab7bccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbabababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababaabcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgbabababababccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababaubabababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababbababababababababdd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1111223344aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee5566772334459002233445566778899001122334455667788990011223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abocccaaabbdddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabbcabcabcabcabcabccabcabaaddbbccddeeaabbccddeebcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("nbGgbXWEqwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvbZ") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbdabcccaaabbd11223344556607788990abcccaaabbd112233112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccd445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900d9eefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffdeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abbcdefgabcdefgcdefgabcabaawbcdefghicjklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzfgabcdefgcdefefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccccddddaaaabbdbbcccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaadbbbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababdababbabababababbababababababababdd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcoqwertyuiopasdfaaaddbbccddeeaabbcaabcccaaabbdddeefffcddeeghjklzxcvbnmqwertyuiopasdfghjklzxcvbabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbabcabcabcabcabcabcabcabcabcabcaabcccaaabbd11223qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklz112233445566778899001122334455667788990011223344556677889900xcvb3445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabe") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghiabcdefgabcdefgcdefgabcagbaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgcjklmnopqr0stuvwxyzabcdefghijklmnopqrstuvwxyzbabababababababab112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab788990112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000ababababababababababababababdecfgabcdefgcdefefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11112233447aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee5566772334459002233445566778899001122334455667788990011223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233164455667788990011223344556677889900112233443556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababcabcabcabcacabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab55667abcabcabcabcabcabcabcabcabcaaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddbcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcababababababababababaubabababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddb112233164455667788990011223344556677889900112233443556677889900bccdddeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababab112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccdabbababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaddbbccddeeaabbcaabcccaaabbdddeefffcddeebcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabca9bcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaabbbbccccdddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbdefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababdababbabababababbababababababaINbabdd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaabbbbccccddddaaaabbbbccccddddbccccddddaaaaaddbbccddedeebbbbccccddddaaaabbbbccccddbddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdefghjklzxcvbnmq11223344556677889900112bcabcabaaddbbccddeeaabbccddeebcab7889900wertqwertyuiopasdefghjklzxcvbnmqwertyuiopasdfghjklzxcvbjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabca11223364455667788990011223344556677889900112abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg23344556677889900baaaaab11223364455667788990011223344556677889900191223344556677889900cabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223cabcabcabaaddb1122334455667788990011223d3445566778899001122334455667abcabcabcabaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bccddeeaab7bccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233abcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefg445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab7889901122334455660778899001122334455667788989001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaabbbbcceccddddaaaabbbbccccddddbccccddddaaaaaddbbccddedeebbbbccccddddaaaabbbbccccddbddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababab112233445566077889900112233445566778899001c122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccdabbababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabc8abcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaaabbbbccccddddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa11223344556677889900112233445566778899b00112a2334455667abcabcabcabcabababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaababbbccccddddaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcab3cabcabcabaadbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeadeae") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abaaaaabbbbccababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddccccadddaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddq") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijkplabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbabababababaaddbbccddeeaabbccddeeabababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaa112233445566778899001312233445900bddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcagbaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbabababagbababababababababababababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababdababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcab3cabcabcabcabcabcabcabcabaad11223344556677889900112233445566778899001122334455667abcabccddd4daaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900dbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabaaabbb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbaaddbbccddeeaabbccddebccccddddaaaabbb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("f") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababdababbabababababaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccabababababababababdd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("LJzRm") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabc85abcabcabcabcaabcccaaabbd11abababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbabababababababab22334455660778899001122233445566778899001eefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaabaadddbbabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabecdefgabcdefgcdefgabcdefgddefgabcdefgabbbbcceccddddaaaabbbbccccddddbccccddddaaaaaddbbccddedeebbbbccccddddaaaabbbbccccddbddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqweraaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddtyugiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abaaaaabbbbccababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddccccadddaabbbbccccdddda4aaabbbbccccddddaaaabbbbccccddddq") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbccdoqwertyuiopasdfaaaddbbccddeeaabbcaabcccaaabbdddeefffcddeeghjklzxcvbnmqwertyuiopasdfghjklzxcvbdeedede") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455ab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab788990qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb0") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklmnopqrstuvywxyzabcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcccabaabbdefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabca11223364455667788990011223344556677889900112233445566778baaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab0") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaaaabaadddbbabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabecdefgabcdefgcdefgabcdefgddefgabcdefgabbbbcceccddddaaaabbbbccccdddabcabcabcabbcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcabdbccccddddaaaaaddbbccddedeebbbbccccddddaaaabbbbccccddbddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabca1b") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233aad3dbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabca9bcabcabcabcabaaddbbccddeeaabbccddeebcab78899112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab788990112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000efff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbbbccccddddaaaababbbccccddddaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddeeaaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abaaaaabbbbccababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddccccadddaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddq45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ByjXXpGj") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcaaaddbbccddeddeecabcaabcccaaabbd11223344556607788990011223344556677889900112233445566b7abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbaaddbbadddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaaabbbbccccddddddbccccddddcddddaaaabbb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgagbcabcccaaabbddeefffdefgcdefgaabcdefgabcdefgcdefgabcdefgdefgcdefgabcdefgbcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbcccacddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adabcdefgabcdefgcdefgabcdefgagbcabcccaaabbddeefffdefgcdefgaabcdefgabcdefgcdefgabcdefgdefgcdefgabcdefgbcdefgddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaaabbbbccccddddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabbcabcabcabcabcabccabcabaaddbbccddeeaabbccddeebcabababababbabababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233aaaaabbbbccccdeeeddddccccbbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffa445566077889900112233aaddbbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcde11223344aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee556677233445900fgcdefgabcdefegagbcabcccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566778899001122334145900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbcccacddddaaaabbbbcccabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233344556677889900112233445900aaaaaabbbbccccddddaabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabaaabbdbbcccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabc8abcabcabcabcaabcccaaabbd11223344556607788990011223344556677889900112233445566") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122aaaaabbbaaddbbadddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaaabbbbccccddddddbccccddddcddddaaaabbb3cabcabcabaaddb11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bccddeeaab7bccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbcc6ccddddaaaabbbbccccddddaaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900abababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababab11223344556677889900112233445900babab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("NIN") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bababababababababacababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddccccadddaabbbbccccdddda4aaabbbbccccddddaaaabbbbccccddddq") == false)){ tests_passed++; } total_tests++;

    if((is_happy("22334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabbcabcabcabcabcabccabcabaaddbbeccddeeaabbccddeebcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabaaddbbccddedeaefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adddaaaabadbbbccccabcccaaabbddeefffddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccdddcdbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("DsrQgZMOa") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abbcdefgabcdefgcdefgabcabaabcdefghicjklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdeg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgzrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbbbccccddddaaaababbbccccddddaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgaabababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrnbGgbXWEqwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvbZstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900abababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababababababababbcababababababababababababababababababadbababababbabdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcaaaaabbbaaddbbadddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaaabbbbccccddddddbccccddddcddddaaaabbbabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbcddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abocccaaabbdd11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("oqwertyuiopasdfaaaddbbccddeeaabbcaabcccacaabbdddeefffcddeeghjklzxcvbnmqwertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233abcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefg4455660778899001abcccaaabbddeefff12233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab7889901122334455660778899001122334455667788989001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabaaaaabbbbccccdeeeddddccccbbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffacabcabcabc9900deefffccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaaaaabbbbabababababababababababaddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddeeaaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abaaaaabbbbccababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babddddccccbbbbaaaaeeeedddccccadddaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddq45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabc8abcabcabcabcaabcccaaabbd112aaaaabbbbcccacddddaaaabbbbccccdadddaaaabbbbccccddddd233445556607788992233445566778899001eefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbababababcabcabcabcabcabc8abcabcabcabcaabcccaaabbd1122334455660778899001122233445566778899001eefffbcabcabcabcabcambcabababababababababababababababababdefgcbcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcaaddbbccddedeaeabcabaaddbbccddeeaab7bccd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghuvwxyzabcdefghijklmnopqrstuvwxyzbababababcabcabcabcacabcabcabcabcacbcabc8abcqwertyuiopasdefghjklzxcvbnmq11223344556677889900112bcabcabaaddbbccddeeaabbccddeebcab7889900wertqwertyuiopasdefghjklzxcvbnmqwertyuiopasdfghjklzxcvbjklzxcvbababaubabababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeqwertyuiopasdfghjklzxcvbnmqaaaaabbbbcccacddddaaaabbbbccccddddaaaabbbbccccdddddweraaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddtyugiopasdfghjklzxcvbfgabcdefgcdefgabcdefgagbcabcccaaabbddeefffdefgcdefgaabcdefgabcdefgcdefgabcdefgdefgcdefgabcdefgbcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("acaddbbccdddeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghljklzxcvbnmqgwertyugiovb") == true)){ tests_passed++; } total_tests++;

    if((is_happy("VXtSHThz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaaaddbbccddeeaabbcacddeecddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcaabbccddeebcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccccddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233644556677889900112233445566778899050112233445568") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223364455667788990011223344555667788990011223344556677889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbabcccaaabcbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ababa1122334455667788990011223344556677889900112aabcdefgabcdegfgcdefga113223344556677889900112233445566778899001122334455667abcabcabcabc7abcabcabcabacabcabcabaaddbb1ccddeeaabbccddeebcab7889900defg2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bababababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaa11223344556677889900112233445566778899001122334455667abcabccddd4daaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccdcdeeaabbccddeebcab7889900bbddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga113223344556677889900112233445566778899001122334455667abcabcabcabc27abcabcabcabacabcabcabaaddbb1ccddeeaacddeebcab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddee55667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabaaaaabbbbccccddddaabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabaaabbbcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abaadaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddbbcacddeecccaaabbddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeeabcccaaabbddeefffbcab7889900bababababababababababababababbabababababababccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccd0112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddccccadddaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddq45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeaaaaabbbbccaaeeccddddaaaaaaaabbbbabababababababababababadddeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bababababababababbabababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("LJz") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaaaabbbbccababa112233445abcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabbcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvabcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaaabbccddeebcab7889900deefffabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzwxyzabcdefghijklmnopqrstuvwxyz5667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd112233aaaaabbbbccccdeeeddddccccbbabcccaaabbd1122334455669077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffa445566077889900112233aaddbbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbaaddbbadddaaabababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaaabbbbccccddddddbccccddddcddddaaaabbb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddcdabababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900abababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababababababababeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbababababababababababababaababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababbababbababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrabcabcabcabcabcabc8abcabcabcabcaabcccaaabbd112aaaaabbbbcccacddddaaaabbbbccccdadddaaaabbbbccccddddd233445556607788992233445566778899001eefffbcabcabcabcabcabcabstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdefghjklzxcvbnmq11223344556677889900112bcabcabaaddbbccddeeaabbccddeebcab7889900wertqwertyuiopasdefghjklzxcvbnmqwertyuiopasabocccaaabbdd11223344556677889900112233445566778899001122334455667abcabcab4cabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffdfghjklzxcvbjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("a112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab78abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff89900addbbccddedee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcaaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddbcabcabcabc9900deefffccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455667788990011223344j5566778899001122334455667abcabcabcabcabcabcabca112233445566077889900112233445566778899abcabcabcabcacbcabc8abcabcabcabcaabcccaaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabbd112233445566077889900112233445566778899aaaddbbcdeeb001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900bcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgagbcabccccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900abababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzaaaaabbbbccccdeeeddddccccbbabababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababaabcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgbabababababcccaabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababab11223344556677889900112233445900babab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abab11223344556677889900112bcabcabaaddbbccddeeaabbccddeebcab78899babababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabca11223364455667788990011223344556677889900112abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg23344556677889900baaaaab11223364455667788990011223344556677889900191223344556677889900cabcabcabaadbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmn5566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffdeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabb2ccddeebcab7889900deefffbcabcabcabcabcabcab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("mm") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdeafgabcdefgagbcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabaaabbbbcccbcdbbccccdddabbcdefgabcdefgcdefgabcabaawbcdefghicjklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzfgabcdefgcdefcefgaaabbbbcccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaaaabbbbccababa112233445abcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabbcabcabcabcabcabcabcabaaddbbcaaaaabbbbccccdddda1111223344aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee5566772334459002233445566778899001122334455667788990011223344556677889900aaabbbbccccddddaaaabbbbccccdddddbababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("adddaaaaaaddbbccdddabcabcabcabcabcabc8abcabcabcabcaabcccaaabbd1122334455660778899001122233445566778899001eefffbcabcabcabcabcabcabeeaabbcacddeebabbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaaaabbbbccababa112233445abcdeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabbcabcabcabcabcabcabcabaaddbbcaaaaabbbbccccdddda1111223344aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd1122334455660778899d00112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee5566772334459002233445566778899001122334455667788990011223344556677889900aaabbbbccccddddaaaabbbbccccdddddbababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababa11223344556677889900112233344556677889900112a2334455667abaaaaabbbbccababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcabaabcdefghicjklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbabababababababab112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab788990112233445566077889900112233445566778899001122334455667abcabcabcabcaabcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddeeaaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeeaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abaaaaabbbbccababa11223344556677889900112233abcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff44556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaababccdeeedddaaaaabbbbccccdeeeddddccccbbabcccaaabcbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffadccccbbbbaaaaeeeedddccccadddaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddq45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabaaddbbccddeeaab7bccddeebcab78899000ababababababababababababababdecfgabcdefgcdefefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223cabcabcabaaddb11223344556677889900112233445566778899001122334455667abcabcabcabaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeaabbccddeebcab7889900bccddeeaab7bccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbqwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1babababababababababababababababababababccdeeeddddabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvbccddeeaabbccddeebcab7889900ab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ZXocaaaaabbbbccccddddaaaabbbbaccccddddaaaabbbbccccdddddn") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdefghjklzxcvbnmq11223344556677889900112bcabcabaaddbbccddeeaabbccddeebcab7889900wertqwertyuiopasdefghjklzxcvbnmqwertyuiopasabocccaaabbdd11223344556677889900112233445566778899001122334455667abcabcaabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabca1bb4cabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffdfghjklzxcvbjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbbccdabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("a112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab78abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff899abcccaaabbd112233aaaaabbbbccccdeeeddddccccbbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffa445566077889900112233aaddbbccddeebcab7889900deefff00addbbccddedee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeeeddddccccbbabababababbababababfabcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbababaabcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefgbabababababccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455660778899001122334455667788990011b22334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bcccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ZXoaaaaabbbbccccddddaaaabbbbccccddddbccccddddcaaaaabbbbccccddddaaaabbbbaccccddddaaaabbbbccccdddddn") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgaabababababbabababababcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababab11223344556677889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbcrstuvwxyzabcdefghijklmnopqrsabcccaaabbddLJzRmeeffftuvwxyzabbababababababababbcababababababababababababababababababadbababababbabdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("DsrQgZMaaaaabcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbbbccccddddaaaababbbccccddddaaaabbbbccccdddddOa") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee4556677889900abcdefgabcdefgcdefgabcagbaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgbbccddeeaabbccddddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("jyNwzIR") == true)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdeffg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccabcdefgabcdefgc112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaadcbbccddeeaabbccddeebcab7889900abcdefgcdefefgyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabca11223364455667788990011223344556677889900112abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg23344556677889900baaaaab112233644556677889900112233445566778899001915223344556677889900cabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455660778899001122334455667788990011b22334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaab7bcccddeebcab7b889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababbababababababababcdefgabcdefgcdefgabcdefgagbcabccccaaabbddeefffdefgcdefgabcdefgab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcadbcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcde11223344aabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccdddeeddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababqwertyuiopasdfghjklzxcvbnmqweraaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddtyugiopasdfghjklzxcvbbabababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbaccccddddaaaadbbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqarstuvwxyzbababababababababababababababababababababababdecfgabcabababababbabababababababababababababababababababdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqraaaaabbbbccccddddaaaabbbbccccdddsabcccaaabbddeeffftuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbca33445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffccccddddddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabaaaaabbbbccccddddaabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbc2cddeebcab7889900deefffbcabcabcabcabcabcabaaabbbcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqwaaaaabbbbccababa1122334455667788990011223344556g677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaertyuiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddb1122331644556677488990011223344556677889900112233443556677889900bccdddeeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aabaaabbbbabcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffcccbcddddaaaabbbbccccddddaaaabbbbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaa11223344556677889900112233445566778899001122334455667abcabccddd4daaaabbbbccccddddaaaabbbbccccddddcabca112233445566077889900112233445566778899001122334455667aaaaaabbbbccccddddaaaabbbbaccccddddaaaabbbbccccdddddbcabcabcabcabcabcabcabcaabcabcabaaddbbccddeeaabbccddeebcab7889900bcabcabcabcabcabaaddbbccdcdeeaabbccddeebcab7889900bbddeefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdefgcdefgabcdefgagbcabcccaaaabcabcabcabbcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcabbbddeefffdefgcdefgaabcdefgabcdefgcdefgabcdefgdefgcdefgabcdefgbcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455667788990011223344j5566778899001122334455667abcabcabcabcabcabcabca112233445566077889900112233445566778899abcabcabcabcacbcabc8abcabcabcabcaabcccaaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyaaaaabbbbccccddddaabcabcabcabcacbcabc8abcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcab3cabcabcabcabcabcabcabcabaad11223344556677889900112233445566778899001122334455667abcabccddd4daaaabbbbccccddddaaaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900dbbccddeeaabbccddeebcab7889900deefffbcabcabcabcabcabcabaaabbbzabbd112233445566077889900112233445566778899aaaddbbcdeeb001122334455667abcabcabcabcabcabcabcabcabcabcabaadbbccddeeaabbccddeebcab7889900bcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdeaaaaabbabbccaaeeccddddaaaaaaaabbbbabababababababababababadddeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aadddbbccdeeddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abc11223344556677889900112233445900deqwertyuiopasdfghjklzxcvbnmqaaaaabbbbcccacddddaaaabbbbccccddddaaaabbbbccccdddddweraaaaabbbbcabcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900d9eefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffcccddddaaaabbbbccccddddaaaabbbbccccdddddtyugiopasdfghjklzxcvbfgabcdefgcdefgabcdefgagbcabcccaaabbddeefffdefgcdefgaabcdefgabcdefgcdefgabcdefgdefgcdefgabcdefgbcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcabcabcabbcabcabcabcabcabccabcabaaddbbccddeeaabbccddeebcabababababbababababababababababababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900bababababababababababababababababababababababababababababababab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("cMcl") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaaabbbbccccddddaaaabbbbcccccdddaaddbbccdddeeaabbcacddeedbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbccaaeed") == false)){ tests_passed++; } total_tests++;

    if((is_happy("qwertyuiopasdfghjklzxcvbnmqweraaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddtayugiopasdfghjklzxcvb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabaaaaabbbbccccdeeeddddccccbbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffacabcabcabcdede") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccababaabcabcabcabbcabcabcabcabcabccabcabaaddbbccddeeaabbccddeebcab1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddcccca") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccdabcabcabcabcabcabcabcabcabcabcaabcccaaabbd112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcaaaaaabbbbccccddddaaaabbbbcccccddddbccccdddd0deefffbcabcabcabcabcabcabdddaaaabbbbccccddddbccccdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("ZXoaaaaabbbbccccddddaaaabbbbccccddddbccccddddcaaaaabbbaaaaabcdefghijklabcdefgabcdefgcdefgabcabaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababababababababababababdecfgabcdefgcdefgabcdefgrstuvwxyzabcdefghijklmnopqrsabcccaaabbddeeffftuvwxyzabbbbccccddddaaaababbbccccddddaaaabbbbccccdddddbccccddddaaaabbbbaccccddddaaaabbbbccccdddddn") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaaabababababababababaddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababbababababababababcdefgabcdefgcdefgabcdefgagbcabccccaaabbdgcdefgabcdefgab") == false)){ tests_passed++; } total_tests++;

    if((is_happy("1122334455667788990011223344556677889900112nbGgbXWEZ2334455667abcabcabcabaaaaabbbbcc6ccddddaaaabbbbccccddddaaabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzaabbbbccccddddcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("a112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcaaddbbccddedeaeabcabaaddbbccddeeaab7bccdaaaabbbbccccddddaaaabbb") == false)){ tests_passed++; } total_tests++;

    if((is_happy("WaaddbbccabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabeeaabbcacddeeCfbiR") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233abcdefgabcdefgcdefgabcdefgabcdefgcdefgabcdefg4455660778899ddbbccddeeaab7bccddeebcab78899000") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdefgabcdegfgcdefga1122334abcdefgabcdefgcdefgabcababababababababababababababababababadbababababbabdecfgabcdefgcdefgabcdefg34455667abcab11223344556677889900112233445566778899001122334455667abcabcabcagbcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900cabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900defg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcaaaaaabbbbccababa1122334455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccaaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddbcabcabcabc9900deefffccccddddddeepqrstuvwxyzabcdefghijklmnopqrstuvwxyzbababababababababababababaubabababababababababdecfgabcdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("112233445566077889900112233445566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab788990qwertyuiopasdfghjklzx8cvbnmqwertyuiopasdfghabcdefgabcde11223344aaddbbccddeeaabbcacaaaaaabbbbccccddddaaaabbbbcccccddcddbabcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabc9900deefffccccddddddee556677233445900fgcdefgabcdefegagbcabcccaaabbddeefffdefgcdefgabcdefg") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddadddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddddbccccddddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabca11223364455667788990011223344556677889900112233445566778baaddbbccddeeaabbccddeebcab7889900deefff") == false)){ tests_passed++; } total_tests++;

    if((is_happy("bddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaddbbcceeaabbcacddee") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccddddbddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("LJzmRLm") == true)){ tests_passed++; } total_tests++;

    if((is_happy("aabaaabbbbcccbcdbbaaaddbbccddeddeeccccddddaaaabbbbcccbcdddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("11223344556677889900112233445566778899001122334455667abcabcabca11223364455667788990011223344556677889900112abcdefgabcdefgcedefgabcdefgagbcabcccaaabbddeefffdefgcdefgabcdefg23344556677889900baaaaab112233644544556677889900191223344556677889900cabcabcabaadbbccddeeaabbccddeebcab7889900") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcccaaabbddeeffabababababbabababababababababababababababababababf") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abcdeaaaaabbbbc3cababa1122334qwertyuiopasdfghjklzxcvbnmqweraaaaabbbbccccddddaaaabbbbccccddddaaaabbbbccccdddddtyugiopasdfghjklzxcvb455667788990011223344556677889900112a2334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900babababababababababababababababababababababccdeeeddddccccbbbbaaaaeeeedddccccafghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((is_happy("aaaaabbbbcccacddddaaaabbbbcaabaaabbbbabcccaaabbd11223344556607788990abcccaaabbd112233445566077889900112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcabcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefff0112233aaddbbccddeeaabbccddee45566778899001122334455667abcabcabcabcabcabcajyNwzIRbcabcabcabcabaaddbbccddeeaabbccddeebcab7889900deefffcccbcddddaaaabbbbccccddddaaaabbbbccccddddccabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabaaaabbbbccccddddd") == false)){ tests_passed++; } total_tests++;

    if((is_happy("abababababbabababababbabababababaadddaaaababbbccccdddaaaaabbbbccccddddaaaabbbbccccddddaaaaabbbbccccddddddbccccddddbaabaaabbbbcccbcdbbccccddddaaaabbbbccccddddababcdefgabcdefgcdefgabcdefgagbcabccccaaabbdgcdefgabcdefgab") == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


