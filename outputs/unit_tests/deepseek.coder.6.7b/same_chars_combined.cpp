#include <algorithm> 
#include <string>
using namespace std;

bool same_chars(const string& s0, const string& s1) {
    string sortedS0 = s0, sortedS1 = s1;

    sort(sortedS0.begin(), sortedS0.end());
    sort(sortedS1.begin(), sortedS1.end());

    return sortedS0 == sortedS1;
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

    if((same_chars("eabcdzzzz", "dddzzzzzzzddeddabc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcd", "dddddddabc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("dddddddabc", "abcd") == true)){ tests_passed++; } total_tests++;

    if((same_chars("eabcd", "dddddddabc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcd", "dddddddabcf") == false)){ tests_passed++; } total_tests++;

    if((same_chars("eabcdzzzz", "dddzzzzzzzddddabc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aabb", "aaccc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("eabcdzzzz", "dddzzzzzzzddeddabc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcd", "dddddddabc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("dddddddabc", "abcd") == true)){ tests_passed++; } total_tests++;

    if((same_chars("eabcd", "dddddddabc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcd", "dddddddabcf") == false)){ tests_passed++; } total_tests++;

    if((same_chars("eabcdzzzz", "dddzzzzzzzddddabc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aabb", "aaccc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ab", "cd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcd", "cbad") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaa", "aaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abc", "def") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaabbbccc", "abbabcbc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefg", "gfedcba") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abbcccddddeeeee", "abcde") == true)){ tests_passed++; } total_tests++;

    if((same_chars("12345", "54321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("hello", "world") == false)){ tests_passed++; } total_tests++;

    if((same_chars("", "") == true)){ tests_passed++; } total_tests++;

    if((same_chars("524321", "5432") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cdcd", "") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaabbbccc", "abbbabcbc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abbabcbc", "abc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("123445", "54321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("hoelldefo", "helldefo") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaabbbccc", "world") == false)){ tests_passed++; } total_tests++;

    if((same_chars("adbbcccddddeeeeehelldefo", "abcde") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcde", "abcde") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abecde", "abecde") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432cababecdead", "cababecdead") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432cababecdead", "5432cababecdead") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaababecdead", "5432cababecdead") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ab54321fg", "gfedcba") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaa1234a5bbbccc", "aaa1234a5bbbccc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("123445", "514321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacababecdeadbecdead", "5432cababecdead") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ab", "cbad") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdegfedcba", "abcdegfedcba") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432", "cdcd5432") == false)){ tests_passed++; } total_tests++;

    if((same_chars("543543221", "abcdeadbbcccddddeeeeehelldefogfedcba") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaabcd", "abcd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abbcccddddeeeee", "") == false)){ tests_passed++; } total_tests++;

    if((same_chars("123445", "5143241") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaababbcccddddeeeeecd", "abcd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("llo", "helleo") == false)){ tests_passed++; } total_tests++;

    if((same_chars("123445", "") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdcb5143241a514321de", "abcdcbadcbade") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcd", "aabcdbcd") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdegfedcba", "aabcdegfedcba") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdeadbbcccddddeeeeehelldefogfedcba", "54321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdeadbbcccddddeeeeehelabdcba", "54321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cdcd", "ccd5143241cd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aab", "cd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aabcdefgb", "12345") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abbbabcbc", "1234545") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432", "abcdegfedcba") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aabcdefgb", "aaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcc", "def") == false)){ tests_passed++; } total_tests++;

    if((same_chars("54342", "5432") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacababecdeadbecdead", "5432cababecdaabcdefgbead") == false)){ tests_passed++; } total_tests++;

    if((same_chars("llohelldefo", "llo") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdcb5143241a514321db", "cd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaababbcccddddeeeeecd", "abcabcdcb5143241a514321db") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432", "cababecdead") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abbhelleoc", "abbhelleoc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("cdcd", "cdcd") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aab", "123") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaababbcccddddeeeeecd", "cabcd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdcbadcbade", "aabcdefgb") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaababecdead", "aabcdbcd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaa", "aaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdegfedcba", "5432") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaababbcccddddeeeeecd", "abbabcbc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdeadbbcccabcdeadbbcccddddeeeeehelabdcbaa", "abcdeadbbcccddddeeeeehelldefogfedcba") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aabcdcbadcbade", "aabcdefgb") == false)){ tests_passed++; } total_tests++;

    if((same_chars("llaaa1234a5bbbccco", "llo") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaabbbccc", "a5432caaaabacababecdeadbecdeadbabcbc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdcb5143241a514321de", "abcdeadbbcccddddeeeeehelabdcbabecde") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abde", "abcde") == false)){ tests_passed++; } total_tests++;

    if((same_chars("54321", "helldefo") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaababecdead", "5432c3ababecdead") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdcb5143241a514321de", "54321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("123454", "1234545") == true)){ tests_passed++; } total_tests++;

    if((same_chars("cabbhelleoc", "ableoc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aabcdefgbcdeadbbcccabcdeadbbcccddddee5432caaaabacaabcdehelabdcbaa", "abcdeadbbcccabcdeadbbcccddddeeeeehelabdcbaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abbbcabcbc", "1234545") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abc", "abc") == true)){ tests_passed++; } total_tests++;

    if((same_chars("54321", "abcdeadbbcccddddeeeeehefogfedcba") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaabcd", "cabcd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cabeoc", "cabbhelldefeoc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaababbcccddddeeeeecd", "cabc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abaabde", "a5432caaaabacababecdeadbecdeadbabcbc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("hlello", "hlello") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacababecdeaadbecdead", "5432cababecdead") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abbbabcbc54321", "abbbabcbc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5432cabecdead", "5432cababecdead") == true)){ tests_passed++; } total_tests++;

    if((same_chars("123abde45", "54321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("5c432cababecdea", "5c4aabcdcbadcbade32cababecdead") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcabcdcb514324aaa1a514321db", "abcabcdcb5143241a514321db") == true)){ tests_passed++; } total_tests++;

    if((same_chars("5432caaaabacaababhoelldefobcccddddeeeeecd", "abbaabbbabcbcbcbc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("544cbaaaa1234a5bbbcccd32", "544cbad32") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdcbadcbade", "abbc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaabbbccdcd5432cc", "abbabcbc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aabcdbcd", "hlello") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cd", "abcd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abbbabcbc", "1234123445545") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdeadbbcccddddeeeeehelldefogfedcba", "abbhelleoc") == false)){ tests_passed++; } total_tests++;

    if((same_chars("babbabcbc", "5432") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdeadbbcccaebcdeadbbcccddddeeeeehelabdcbaaa", "aabcdefgbcdeadbbcccabcdeadbbcccddddee5432caaaabacaabcdehelabdcbaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaeeeiou", "iaueoaiueiiaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "ezzzezezezezezezeeeezezezezezezezeeee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("1234567890", "0987654321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("tacocat", "cattaco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxyz", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("beabcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("0987654321", "0987654321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("you", "cattaco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("1234567890", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("foStrongrce", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("may", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gaz!elle!", "gazelle!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("may", "of") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sthrong", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("0987654321", "foStrongrce") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijknopqrstuvwxyz", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocat", "cattlohedrWl!oco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocspeGod!e", "tacocspeGod!e") == true)){ tests_passed++; } total_tests++;

    if((same_chars("specter", "habcddogefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "cattaco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("you", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZWitheZeZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("wSthrongith", "cat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gaze!", "gaze!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("caattacco", "caattaco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("mayy", "jumps") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dazzling", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("0987654321", "ovenr098765432gazelle!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Amaze", "Amaze") == true)){ tests_passed++; } total_tests++;

    if((same_chars("with", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cattlohedrWl!gaze!oco", "cattlohedrWl!oco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijknopqrstuv0987654321wxyz", "abcgorgeous,defghijknopqrstuv0987654321wxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnoprqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("1234567890", "abcdefghijklmnopqrstuvyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("1234567890", "1234567890") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ovenr098765432gazelle!", "ovenr098765432gazelle!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("09876543221", "0987654321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("tacocspecterat", "tacocspecterat") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeeZeZeZeZeZeZeZeZeZeZe", "cattaco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("m", "of") == false)){ tests_passed++; } total_tests++;

    if((same_chars("foStrongrce", "you") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cattlohedrWl!gaze!oco", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mayy", "jpumps") == false)){ tests_passed++; } total_tests++;

    if((same_chars("sltunning,", "sltunning,") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKJIHGFEDCBA", "abcdefghijknopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("sltunning,", "sltnning,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghuijknopqrstuvwxyz", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaeeeiou", "aaaaaeeeiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("taocat", "tacocat") == true)){ tests_passed++; } total_tests++;

    if((same_chars("122345678990", "12345678990") == true)){ tests_passed++; } total_tests++;

    if((same_chars("bewitching,", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("throng", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocat", "tacocat") == true)){ tests_passed++; } total_tests++;

    if((same_chars("12345cat678990", "12345678990") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dog21", "dog21") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKJIGHGFEDCBA", "ZYXWVUTSMRQPONMLKJIGHGFEDCBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("dog", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("", "the") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKJIHGFEDCBA", "ZYXWVUTSMRQPONMLKJIHGFStrongabcdefghijknopqrstuvwxyzCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mayyy", "jumps") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ttolohedrWl!oco", "ttlohedrWl!oco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("taoocat", "tacocat") == true)){ tests_passed++; } total_tests++;

    if((same_chars("Sttrong", "ZYXWVUTSMRQPONMLKJIGHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("sltnning,", "sltunni") == false)){ tests_passed++; } total_tests++;

    if((same_chars("foxdazzling", "abcdefghijklmnouvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!", "gazellze!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("12345You678990", "122345678990") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLKJIHGFEDCBA", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("cat", "ezzzezezezezezezeeeezezezezezezezeeee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("God!", "God!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKJIHGFStrongabcdefghijknopqrstuvwxytacocatA", "ZYXWVUTSMRQPONMLKJIHGFStrongabcdefghijknopqrstuvwxyzCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cattlohedrWl!gaze!oco", "Sttrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mayy", "mayy") == true)){ tests_passed++; } total_tests++;

    if((same_chars("foStrongrce", "theyou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("of", "The") == false)){ tests_passed++; } total_tests++;

    if((same_chars("thrtong", "abcdefghijklmnopqrrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dog121", "dog21") == true)){ tests_passed++; } total_tests++;

    if((same_chars("cattlohedrWl!gaze!oco", "cattlohedrWl!oo") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijknopqrstuv0987654321wxyz", "dog121") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaeeeiou", "Sthrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocspecteratabcdefghijklmnoprqrstuvwxyz4321", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Ztacocspecteratabcdefghijklmnoprqrstuvwxyz4321YXWVUTSMRQPONMLKJIHGFStrongabcdefghijknopqrstuvwxyzCBA", "God!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gorgeous,!", "oStrongre") == false)){ tests_passed++; } total_tests++;

    if((same_chars("09876543221", "tacocspecterat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cat", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mayyy", "12o345lohedrWl!o") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdfefghiGod!", "abcdfefghiGod!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("specter", "force") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKjumpsCBA", "ZYXWVUTSMRQPONMLKJIGHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("specterSthrong", "Strongabcdefghijknopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("123645567890", "12345567890") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abofcdefghijklmnopqrstuvwxyz", "World!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZWitheZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("123456789", "1234567890") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sthrobewitching,ng", "Sthrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sttrong", "Sttrong") == true)){ tests_passed++; } total_tests++;

    if((same_chars("mm", "of") == false)){ tests_passed++; } total_tests++;

    if((same_chars("habcddogecfghijklmnopqrstuvwxyz", "habcddogefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKjumpsCStrongabcdefvwxyzBA", "ZYXWVUTSMRQPONMLKJIGHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxyz", "Sttrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345lohedr3Wl!o", "12345lohedrWl!o") == true)){ tests_passed++; } total_tests++;

    if((same_chars("12345You678990", "12345You678990") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "of") == false)){ tests_passed++; } total_tests++;

    if((same_chars("caattaco", "caattaco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("Strongabcdefghijknoxyz", "tacocspeabcdefghiGod!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("you", "you") == true)){ tests_passed++; } total_tests++;

    if((same_chars("juer", "Sttro") == false)){ tests_passed++; } total_tests++;

    if((same_chars("afbcdefghijfklmnopqrstuvwxyz", "dog") == false)){ tests_passed++; } total_tests++;

    if((same_chars("09876543221", "09876543221") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gazel!le!", "gazellze!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("tacoforrceWithcspectet", "tacocspectet") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dog21", "mayy") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazgcattaco", "gazcattaco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gggaze!", "ggaze!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!", "juer") == false)){ tests_passed++; } total_tests++;

    if((same_chars("madbewitching,y", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVMLKJIHGFEDCBA", "abcdefghijknopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("speceter", "specter") == true)){ tests_passed++; } total_tests++;

    if((same_chars("122345678990", "122345678990") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!", "gazellae!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijknopqrstuvwxyz", "tacocspectet") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sttro", "Sttro") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaiou", "Sthrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazbbbbbbbbaaaaaaaaaaaaaaaaaaaaaaelle!nopqrstuvwxyz", "abcdefghuijknopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dog121", "dog121") == true)){ tests_passed++; } total_tests++;

    if((same_chars("throng", "rthrong") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!", "hqudazThebrGod!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sttorong", "Sttrong") == true)){ tests_passed++; } total_tests++;

    if((same_chars("lazyx", "juer") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacoovenrcspecterat", "tacocspecterat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("of", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("123456789", "123456790") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mayy", "hbe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("of", "of") == true)){ tests_passed++; } total_tests++;

    if((same_chars("tacocspecteroat", "tacocspecterat") == true)){ tests_passed++; } total_tests++;

    if((same_chars("mmay", "madbewitching,y") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mm", "God!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gzgaze!", "Strongabcdefghijknoxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazcattaco", "abcdefghuijknopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cattlohedrWl!gaze!oco", "cattlohedrWl!gaze!oco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("m", "m") == true)){ tests_passed++; } total_tests++;

    if((same_chars("foStrongrce", "gazelle!own") == false)){ tests_passed++; } total_tests++;

    if((same_chars("0987Yourat654321", "0987Yourat654321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("cattlohedrWl!oco", "gazelle!own") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sttoong", "cat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("0987Yourat654321", "0912o345loheWthdrWl!o87Yourat654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gagazelle!cteratze!", "gaze!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dazzling", "tacocspectergtdeart") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazel!le!", "cattaco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZWitheZeZeZeZeZeZeZeZeZeZeZe", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sthrobewitching,ng", "Sthrobewitching,ng") == true)){ tests_passed++; } total_tests++;

    if((same_chars("lazyx", "gazgcattaco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("beabcdefghijklmnopqrstuvwxyz", "1234567890") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacoabcdefghijklmnoprqrstuvwxyzcat", "tacoabcdefghijklmnoprqrstuvwxyzcat") == true)){ tests_passed++; } total_tests++;

    if((same_chars("f", "f") == true)){ tests_passed++; } total_tests++;

    if((same_chars("foxdog", "mayyy") == false)){ tests_passed++; } total_tests++;

    if((same_chars("habcddogefghijklmnopqrstuvwxyz", "morgeous,ayy") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gzgaze!", "12345You678990") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sttoong", "Sttoong") == true)){ tests_passed++; } total_tests++;

    if((same_chars("StStro", "Sttro") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ezzzezezezezezezeeeezezezezezezezeeee", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mamyy", "mayy") == true)){ tests_passed++; } total_tests++;

    if((same_chars("09876543221", "Sthrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Iofs", "cattlohedrWl!oco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("iaueoaiueiiaaa", "iaueoaiueiiaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("y", "you") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Yuou", "Yuou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("juer", "juer") == true)){ tests_passed++; } total_tests++;

    if((same_chars("theyou", "theyou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKjumpsCBA", "ZYXWVUTSMRQPONMLKJI12345lohedr!Wl!forceoGHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Stabcdefghijklmnopqrrstuvwxyz", "Sttro") == false)){ tests_passed++; } total_tests++;

    if((same_chars("mmay", "of") == false)){ tests_passed++; } total_tests++;

    if((same_chars("wtith", "habcddogecfghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVVUTSRQPONMLKJIHGFEDCBA", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("yuou", "yuou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!own", "Sthrobewitching,ng") == false)){ tests_passed++; } total_tests++;

    if((same_chars("force", "force") == true)){ tests_passed++; } total_tests++;

    if((same_chars("SttrZYXWVVUTSRQPONMLKJIHGFEDCBAong", "Sttrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklabcdefghijklmnouvwxyzmnopqrstuvyz", "abcdefghijklmnopqrstuvyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars(",67890hijknopqrstuvwxyz", "gaze!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocspectera1234r5Hello,lohedrWl!ot", "tacocspectera1234r5Hello,lohedrWl!ot") == true)){ tests_passed++; } total_tests++;

    if((same_chars("madbewitching,,y", "madbewitching,y") == true)){ tests_passed++; } total_tests++;

    if((same_chars("iwforrceith", "juer") == false)){ tests_passed++; } total_tests++;

    if((same_chars("1234abcdefghijklmnopqrrstuvwxyz0", "12345lohedrWl!o,678090") == false)){ tests_passed++; } total_tests++;

    if((same_chars("GoGd!", "God!") == true)){ tests_passed++; } total_tests++;

    if((same_chars(",6708090l!ogrcemy", "forrce") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocspeGodof!e", "Sttrng") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gagazelle!cteratze!", "cattlohedrWl!oco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("sgazelle!tunning,", "mayy") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVMLKJIHGFEDCBA", "the") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345cat678990catacoovenrcspecteratttaco", "catacoovenrcspecteratttaco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!", "gllae!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345lostunning,hedrWl!o", "iaueoaiueiiaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("StttrSo", "Sttro") == true)){ tests_passed++; } total_tests++;

    if((same_chars("mm", "bro") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPOsltunning,NMLKjumpsCBA", "ZYXWVUTSMRQPOsltunning,NMLKjumpsCBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("1234567890", "f") == false)){ tests_passed++; } total_tests++;

    if((same_chars("specter", "fforce") == false)){ tests_passed++; } total_tests++;

    if((same_chars("laszyx", "iwith") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacoabcdefghijklmnoprqrstuvwxyzcat", "tacoabcdefghijklmn,67890oprqrstuvwxyzcat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefgbrohijknopqrstuv0987654321wxyz", "abcdefghijknopqrstuv0987654321wxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ith", "throng") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnuvwxyz", "The") == false)){ tests_passed++; } total_tests++;

    if((same_chars("theyou", "gzaze!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gaaze!", "gaze!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("maay", "tacocat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazel!le!", "12345You6") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacoovenrcspecterat", "caatbewitchabcdefghijklmnopqrstuvyzing,taco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("theyou", "g182345lohedrWl!ooverzaze!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345lohedr!Wl!forceo", "wSthrongith") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLKJIHGFEDCBA", "12345lohedrWl!o,678090") == false)){ tests_passed++; } total_tests++;

    if((same_chars("hbe", "mayy") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345cat678990catacoovenrcspecteratttaco", "12345cat678990catacoovenrcspecteratttaco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gazcattaco", "gazcattaco") == true)){ tests_passed++; } total_tests++;

    if((same_chars("lastaoto", "lastaoto") == true)){ tests_passed++; } total_tests++;

    if((same_chars("iwhith", "iwith") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrrstuvwxyz", "abcdefghijklmnopqrrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gzaze!", "gzaze!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("oSthrong", "Sthrong") == true)){ tests_passed++; } total_tests++;

    if((same_chars("over", "oIofsver") == false)){ tests_passed++; } total_tests++;

    if((same_chars("lastaoto", "lastathrongo") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Yourat", "throng") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345lostunning,hedrWl!o", "you") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Strongabcdefghijknoxyz", "Yuou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("GGd!", "God!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("specterSthrng", "StrongabcdeitThe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKJIHGFStrongabcdefghijknopqrstuvwxyzCBA", "f1The") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocat", "tacoFocat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Strongabcdefghijknoxyz", "Yu") == false)){ tests_passed++; } total_tests++;

    if((same_chars("9,6708090l!ogrcemy", "forrce") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSMRQPONMLKJIHGFStrongabcdefghijknopqrstuvwxyzCBA", "1234567890") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacoabcdefghijklmnoprqrstugazcattacovwxyzcat", "tacoabcdefghijklmnoprqrstuvwxyzcat") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ce", "force") == false)){ tests_passed++; } total_tests++;

    if((same_chars("cattlohedrWl!gaze!oco", "ZYXWVUTSMRQPONMLKJIGHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("overStrongaabcdfefghiGod!bcdefghijknoxyzgazelle!he", ",67890hijknopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gagazellel!cterate!", "gaze!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aStttrSoaaaaeeeiou", "aaaaiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("lastathrongo", "lastatthrongso") == true)){ tests_passed++; } total_tests++;

    if((same_chars("wtith", "SttrSong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("caattacco", "rthrong") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dog", "odog") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghaijknopqrstuvwxyz", "tacocspectet") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ezzzezezezezezezeeeezezezezezezezeeee", "tacoabcdefghijklmnoprqrstuvwxyzcat") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Forceabcgorgeous,defghijknopqrstuv0987654321wxyz", "Forceabcgorgeous,defghijknopqrstuv0987654321wxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("wittheTheh", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Sttrong", "ZYXWVUTSMRQPONMLAmazarKJIGHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bbbbbbbbaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("127890", "127890") == true)){ tests_passed++; } total_tests++;

    if((same_chars(",678090", ",678sltunning,90") == false)){ tests_passed++; } total_tests++;

    if((same_chars("speceter", "speceter") == true)){ tests_passed++; } total_tests++;

    if((same_chars("gazgcattaco", "yuou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345locattlohedrWl!ocohedr3Wl!o", "12345lohedr3Wl!o") == false)){ tests_passed++; } total_tests++;

    if((same_chars("oagazellae!venr", "oagazellae!venr") == true)){ tests_passed++; } total_tests++;

    if((same_chars("", "abcd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcd", "") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxyz", "") == false)){ tests_passed++; } total_tests++;

    if((same_chars("", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("a", "a") == true)){ tests_passed++; } total_tests++;

    if((same_chars("!$%^&*", "*&^%$!") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeedogiou", "aaaaaeeedogiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxyz", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345607890", "0987654321") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeedogiou", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("may", "09876541321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaaaaaaaaaaabbbb", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("force", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("1234567890", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("brown", "brown") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstutvwxyz", "abcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("dear", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrhstuvwxyz", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstmayuvwxyz", "abcdefghijklmnopqrstmayuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("12034567890", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("and", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("may", "stunning,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JAut", "JAut") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaa", "aaaaaeeeiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeedogiou", "aaaaaeeedHello,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbdogiou", "aaaaaeeedHello,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("you", "aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JAuAt", "JAut") == true)){ tests_passed++; } total_tests++;

    if((same_chars("nbrown", "you") == false)){ tests_passed++; } total_tests++;

    if((same_chars("may", "may") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstutvwxyz", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstutvwxyz", "aaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeStrongZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dear", "dear") == true)){ tests_passed++; } total_tests++;

    if((same_chars("over", "quick") == false)){ tests_passed++; } total_tests++;

    if((same_chars("maay", "aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("youemay", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("brown", "brandwn") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaaaaaaaaaaaabbbb", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("nbrown", "my") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstutvwxyz", "oabcdefghijklmnopqrstutvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "Amaze") == false)){ tests_passed++; } total_tests++;

    if((same_chars("youzezezezeeeezezezezezezezeeee", "aaaaaeeedHello,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JATheuAt", "JAut") == false)){ tests_passed++; } total_tests++;

    if((same_chars("fox", "abcdTheefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("quick", "aaaaaeeedogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JAuAt", "JuAut") == true)){ tests_passed++; } total_tests++;

    if((same_chars("dWorld!rownxog", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("nbrown", "JAut") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeeaaaee", "aaeaaaeeedogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("the", "aaaastunning,aaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("With", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars(",", "aaaaaeeedogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrtvwxyz", "oabcdefghijklmnopqrstutvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaeeeiou", "iaueoaiquickyueiiaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("and", "bbbbbbbbaaaaaaaaafobHello,aaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxWorld!rownxyz", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("yobewitching,aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "forcfe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("my", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bewitching,aaaaaaaaaaaaaaaaaaaaabbbb", "bewitching,aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcxdefghijklmnopqrtvwxyz", "abcdefghijklmnopqrtvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("maay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaaaaaaaaaaaabbbb", "aaaastunning,aaaaaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("bewitching,", "God!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZ,eZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("brandwn", "and") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeStrongZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("the", "the") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaa", "aaaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("iaueoaiueiabcxdefghijklmnopqrtvwxyziaaa", "iaueoaiueiiaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou", "abcdefghijklmnopqrtvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gorgeous,", "aaaaaeeedogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQSPONMLKJIHGFEDCBA", "ZYXWVUTSRQSPONMLKJIHGFEDCBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZ,eZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "my") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JJAut", "JJAut") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxWorld!rownxyz", "abcdefghijklmnopqrstuvwxWorld!rownxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("nbn", "JAut") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bewitchcattacoing,", "bewitchhing,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("", "aaaquickaaeeedogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JuAlohedrWl!out", "bewitching,aaaaaaaaaaaaiaueoaiueiabcxdefghijklmnopqrtvwxyziaaaaaaaaaaaaaaaaaabbbb") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeeiou", "aaaaaeeeiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou", "ezzzezezezezezezeeeezezezezezezezeeee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxWoprld!rownxyz", "abcdefghijklmnopqrstuvwxWorld!rownxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("mygorgeous,", "my") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ezzzezezezezezezeeeezezezezezezezeeee", "dWorld!rownxog") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaa", "aaaastunning,aaaaaaaaaaaaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("brown", "1234567890") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZ,eZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "foreetheee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dear", "ayouemaybcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("my", "ymay") == false)){ tests_passed++; } total_tests++;

    if((same_chars("eIs", "e") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gorgeous,", "aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaee12345607890edogiou", "aaaaaeeedHello,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrhstuvwxyz", "JAut") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abccdefghijklmnopqrstuvwxyz", "abcdpefghijklyourstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bewitbewitchcattacoing,ching,", "God!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeeiou", "aeaaaaeeeiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcd!rownxyz", "abcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("youzezezezeeeezezezezezezezeeee", "abcdefghijklmnopqrtvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JuAut", "JAut") == true)){ tests_passed++; } total_tests++;

    if((same_chars("force", "ZYXWVUTSRQPOUNMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("nand", "bbbbbbbbaaaaaaaaafobHello,aaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("wiaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbh", "with") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ezzzezezezezezezeeeezezezezezezezeeeZYXWVUTSRQSPONMLKJIHGFEDCBAe", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ezzzezezThe", "may") == false)){ tests_passed++; } total_tests++;

    if((same_chars("yoThe", "yoThe") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou", "abcdefghijklmnopqrtvwxyyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("the", "aaaastuandnning,aaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstmayuvwxyz", "abcdefghijklmnopzqrstmayuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("JAuAt", "brown") == false)){ tests_passed++; } total_tests++;

    if((same_chars("my", "y") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxWoprld!rownxyz", "dogu") == false)){ tests_passed++; } total_tests++;

    if((same_chars("With", "you") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaee12345607890edogiou", "ezzezezezezezezezeeeezezezezezezezeeee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxWorld!rownxyznfox", "abcdefghijklmnopqrstuvwxWorld!rownxyzfox") == true)){ tests_passed++; } total_tests++;

    if((same_chars("bewitchcattacoing,", "iaueoaiueiiaaaaalohedrWl!oa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("youZeZeZeZe", "youZeZeZeZe") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcxdefghijklmnopqrtvwxyz", "abcxdefghijklmnopqrtvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("tacocat", "brown") == false)){ tests_passed++; } total_tests++;

    if((same_chars("withWithaaaa", "with") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JuAut", "foreoabcdoefghijklmZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZZeZeZeZeZeZeZeZeZeZenopqrstutvwxyze") == false)){ tests_passed++; } total_tests++;

    if((same_chars("stunniabcd!rownxyzng,", "stunning,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPOUNMLKJIHGFEDCBA", "ZYXWVUTSRQPOUNMLKJIHGFEDCBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("nbwithWithaaaan", "nbn") == false)){ tests_passed++; } total_tests++;

    if((same_chars("the", "ZYXWVUTSRQSPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("nbrown", "aaeaaaeeoeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dWorld!rownxog", "ZYJuAutXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("and", "and") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("yobewitching,aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "yobewitching,aaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaa", "aaaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("JAuAt", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abhijklmnopqrtvwxyz", ",") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bewitchcattacwithhg,", "bewitchhing,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("fox", "abcdTheefghijklmnopqrstuvwyxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abchdTheefghijklmnopqrstuvwxyz", "abcdTheefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrhstuvwxyz", "ZYXWVUTSRQPONMLwitKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdTheefghijklmnopqrstuvwxyz", "ezzzezezezezezezeeeezezezezezezezeeee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("youzezezezeeeeezezezezezezezeeee", "abcdefghijklmnopqrtvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastuforeoabcdefgGod!a", "bewitchhing,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("12345607890", "01") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaeeeiou", "aaaaaeeeiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZZeZeZeZZeZeZeZeZeZeZZeZeZeZe", "ZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZZeZeZeZZeZeZeZeZeZeZZeZeZeZe") == true)){ tests_passed++; } total_tests++;

    if((same_chars("over", "ezzzezezezezezezeeeezezezezezezezeeee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ayouemaybcdefghijklmnopqrsftuvwxyz", "ayouemaybcdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("angazelle!hijklmnopqrstutvwxyzed", "and") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ayouemaybwithWithaaaacdefghijklmnopqrstuvwxyz", "ayouemaybwithWithaaaacdefghijklmnopqrstuvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aafobrownxaaaeeeiou", "aafobrownxaaaeeeiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaeeeedHello,", "aaaaaeeedHello,") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeiaueoaiquickyueiiaaaZZeZeZeZeZeZemay", "ZYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("wit,", "wit,") == true)){ tests_passed++; } total_tests++;

    if((same_chars("bewitching,aaaaaaaaaaaaaaaaaaaaabbbb", "bewitching,aaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("maay", "maay") == true)){ tests_passed++; } total_tests++;

    if((same_chars("iaueoaiueiaiaaa", "iaueoaiueiiaaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("brandwn", "brandwn") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstmayuabcdefghijklmnopqrstuvwxWorld!rownxyznfoxvwxyz", "abcdefghijklmnopqrstmayuabcdefghijklmnopqrstuvwxWorld!rownxyznfoxvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("Jt", "JWithaaaaAut") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gorgeous,", "JAuA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Amaze", "abcxdefghijklmnopqrtvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "foreee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLwitKJIHGFEDCBA", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "aaaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ezzzezezezezezezeeeezezezezezezezeeeZYXWVUTSRQSPONMLKJIHGFEDCBAe", "mmay") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JuAut", "JuAut") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstutvwxyz", "ZeZeZeZeZeZeZeZeJAuAZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaabb", "you") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdetuvwxWoprld!rownxyz", "abcdefghijklmnopqrstuvwxWorld!rownxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ablcdefghijklmnopqrstuvwxWoprld!rownxyz", "dogoabcdefghijklmnoTheu") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Witphpqrstutvwxyz", "ZYXWVUTSRQSPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("nbwithWithaaan", "nbn") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaeaaaee12345607890edogiou", "aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gorggeous,", "iaueoaiueiiaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Jt", "wit,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLKJIHGFEDCBA", "mygorgeous,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaeaaaee12345607890edogiou", "oabcdefghijklmnopqrstutvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aThe", "1234567890") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!eezezezezezezezeeee", "aafobrownxaaaeeeiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("youaaeaaaee12345607890eThe", "annd") == false)){ tests_passed++; } total_tests++;

    if((same_chars("iaiquickyueiiaaa", "iaueoaiquickyueiiaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Hello,", "Helolo,") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrtvwxyz", "abcdefghijklmnopqrtvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQSPONMFEDCBA", "ZYXWVUTSRQSPONMFEDCBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("tacocat", "iaueoaiueiabcxdefghijklmnopqrtvwxyziaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("over", "bewitching,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstmayuabcdefghijklmnopqrstuvwxWorld!rownxyzZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZZeZeZeZZeZeZeZeZeZeZZeZeZeZenfoxvwxyz", "abcdefghijklmnopqrstmayuabcdefghijklmnopqrstuvwxWorld!rownnxyznfoxvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZZeZeZeZeZeZeZeZeZeZe") == true)){ tests_passed++; } total_tests++;

    if((same_chars("bewitching,aaaaaaaaaabewitching,aaaaaaaaaaabbbb", "bewitching,aaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLKJIHGFEDCBA", "ZjumpsYXWVUTSRQPONMLKJIHGFEDCBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaee", "aaeeaaaee") == true)){ tests_passed++; } total_tests++;

    if((same_chars("You", "abcdefghijklmnopqrstmayuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaeeeiou", "aaaaaeeieiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("fox", "aaaaaaeeeiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("uJAut", "JAut") == true)){ tests_passed++; } total_tests++;

    if((same_chars("bewitching,", "Godnand!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("a", "ado") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaquickaeeedogi", "aaaquickaaeeedogi") == true)){ tests_passed++; } total_tests++;

    if((same_chars("quiaaaastuandnning,aaaaaaaaaaaaaack", "quick") == false)){ tests_passed++; } total_tests++;

    if((same_chars("iaueoaiueiaiaaa", "abcdefghijklmnopqrstmayuabcdefghijklmnopqrstuvwxWorld!rownnxyznfoxvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeforeohabcdefghijklmnopqrstutvwxyzeeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeStrongZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gorgeous,", "JJAuA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gaaaaaaaaaaaaaaaaaaaaaaaaaaaabbzelle!eezezezezezezezeeee", "aafobrownxaaaeeeiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gazelle!", "abcdefghijklmnopqrstmayuabcdefghijklmnopqrstuvwxWorld!rownnxyznfoxvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abccdefghijklmnopqrstuvwxyz", "abcd!rownxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou", "aaaeaaaeea12345607890edogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZZeZeZeZZeZeZeZeZeZeZZeZeZeZe", "nbn") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaaaaaaaaaaabbbb", "oabcdefghijklmnopqrstutvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("JAuAt", "0987654321") == false)){ tests_passed++; } total_tests++;

    if((same_chars("stunning,", "aaaquickaeeedogi") == false)){ tests_passed++; } total_tests++;

    if((same_chars("quiaaaasuaWorld!ndnning,aaaaaaaaaaaaaack", "quWithu,aaaaaaaaaaaaaack") == false)){ tests_passed++; } total_tests++;

    if((same_chars("gaaaaaaaaaaaaaaaaaaaaaaaaaaaabbzelle!eezezezezezezezymayeeee", "JuAut") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeJAuAZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZequicvkZeZeZeZeZeZeZeZeZeZeZeZe", "abcdefghijklmnopqrstutvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ayouemaybcdefghijklmnopqrsftuvwxyz", "with") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ayouemaybwithWithaaaacdefghijklmnopqrstuvwxyz", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaeaaaee12345607890edogiou", "JuAlohedrWl!out") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdetuvwxWoprld!rownxyz", "abcdetuovwxWoprld!rownxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaa", "the") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeZeZeZeZeZeZ,eZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZ,eZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == true)){ tests_passed++; } total_tests++;

    if((same_chars("bewitbewforehcattacoing,ching,", "God!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bewitching,", "Amazmay") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaaaaaaaaaaabbbb", "abcdetuvwxWoprld!rownxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaeaaaee12345607890edogiou", "aaeaaaee12345607890edogiou") == true)){ tests_passed++; } total_tests++;

    if((same_chars("World!you", "you") == false)){ tests_passed++; } total_tests++;

    if((same_chars("Witphpqrstutvwxyz", "ZYXWVUTSRQSPONMLKJIHGFEDCBBA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("nbrown", "aaeaaaeeeaaaaaaaaaaaaaaaaaaaaaaaaaaabbbabdogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("fore", "fore") == true)){ tests_passed++; } total_tests++;

    if((same_chars("do", "abcdefghijkwithhlmnGod!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLKJIHGFEDCBA", "ZeZeZeZeZeZeZeZeJAuAZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("stunniabcZYJuAutXWVUTSRQPONMLKJIHGFEDCBAd!rownxyzng,", "stunniabcd!rownxyzng,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("tacocat", "bewitbewitchcattacoing,ching,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("brarndwn", "brandwn") == true)){ tests_passed++; } total_tests++;

    if((same_chars("123456foreoabcdefgGod!890", "1234567890") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaeaaaee12345607890edogiou", "oabcdefghijeklmnopqrstutvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("fobrowyouZeZeZeZenx", "bbbbbbbbaaaaaaaaaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLKJIHGFEDCBA", "brown") == false)){ tests_passed++; } total_tests++;

    if((same_chars("fabcdefghijklmnopqrhstuvwxyzoreohabcdefghijklmnopqrstutvwxyze", "aaaaaeeedogiou") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ablcdefghijklmnopqrstuvwxWoprld!rownxyz", "ZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPONMLKJIHGFEDFCBA", "yobewitching,aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdetuovwxWoprld!rownxmyyz", "abcdetuovwxWoprld!rownxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQPOUForceNMLKJIHGFEDCBA", "brandw") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastunning,aaaaaaaaaaaaaa", "aaaastuquicvknning,aaaaaaaaaaaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("nbwithWithaaan", "nabcdefghijklmnopqrstmayuvwxyzbn") == false)){ tests_passed++; } total_tests++;

    if((same_chars("specter", "specter") == true)){ tests_passed++; } total_tests++;

    if((same_chars("witheZeZeZZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZZeZeZeZZeZeZeZeZeZeZZeZeZeZeth", "witheZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZZeZeZeZZeZeZeZeZeZeZZeZeZeZeth") == true)){ tests_passed++; } total_tests++;

    if((same_chars("nbrownoabfcdefghijklmnoeIsThe", "yobewitching,aaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == false)){ tests_passed++; } total_tests++;

    if((same_chars("foreetheee", "catctaco") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaastuforeoabcdefgGod!a", "my") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bewitchingwitheZeZeZeZeZeZeZeZZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZeZZeZeZeZeZZeZeZeZZeZeZeZeZeZeZZeZeZeZeth,", "bewitchezzfwift,heing,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghigazelle!eezezezezezezezeeeejklmnopqrtvwxyz", "abcdefghigazelle!eezezezezezezezeeeejklmnopqrtvwxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbb") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ee12345607890edogiou", "aaaeaaaee12345") == false)){ tests_passed++; } total_tests++;

    if((same_chars("ZeZeZeZeZeZeZeZeJAuAZeZeZeZeZZeZe", "ZeZeZeZeZeZeZeZeJAuAZeZeZeZeZZeZe") == true)){ tests_passed++; } total_tests++;

    if((same_chars("ZYXWVUTSRQSPONMLKJIHGFEDCBBA", "ZYXWVUTSRQSPONMLKJIHGFEDCBBA") == true)){ tests_passed++; } total_tests++;

    if((same_chars("12345607890", "12345607890") == true)){ tests_passed++; } total_tests++;

    if((same_chars("AmaJJAuAze", "aaeaaaee123ezzzezezezezezezeeGod!") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijkwithhlmnopqrtvwxyz", "stunniabcd!rownxyzng,") == false)){ tests_passed++; } total_tests++;

    if((same_chars("iaiquickyueiiaaa", "12345678390") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dWorld!Forcerownxog", "dWorld!rownxog") == false)){ tests_passed++; } total_tests++;

    if((same_chars("stunniabcd!rownxyzng,", "stunniabcd!rownxyzng,") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstuvwxWorld!rownxyz", "abcdefghijjklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("bewidogezezezezezeeeehing,", "Amazmay") == false)){ tests_passed++; } total_tests++;

    if((same_chars("foxran", "bran") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstutvwx", "aaaaa") == false)){ tests_passed++; } total_tests++;

    if((same_chars("aaaaa", "aaa") == true)){ tests_passed++; } total_tests++;

    if((same_chars("abcdefghijklmnopqrstutvwbxyz", "abcdefghijklmnopqrstutvwbxyz") == true)){ tests_passed++; } total_tests++;

    if((same_chars("dWorld!rownxog", "dWorld!rownxog") == true)){ tests_passed++; } total_tests++;

    if((same_chars("iaueoaiueiiaaaaalohedrWl!oa", "thhe") == false)){ tests_passed++; } total_tests++;

    if((same_chars("abcxdefghijkklmnopqrtvwxyz", "JJAuA") == false)){ tests_passed++; } total_tests++;

    if((same_chars("quickghijklyourstuvwxyz", "abcdpefghijklyourstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("AmaabcdefghijklmnopqrstmayuabcdefgohijklmnopqrstuvwxWorld!rownnxyznfoxvwxyzze", "ezzezezezezezezezeeeezezezezezezezeeee") == false)){ tests_passed++; } total_tests++;

    if((same_chars("dear", "ayouremaybcdefghijklmnopqrstuvwxyz") == false)){ tests_passed++; } total_tests++;

    if((same_chars("09876541321", "aaaaaeeieJAuAtu") == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


