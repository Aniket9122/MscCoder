#include <string>
#include <algorithm>
using namespace std;

// Helper function to sort characters of a word.
void sort_word(string &s) {
    sort(s.begin(), s.end());
}

string anti_shuffle(const string& str)  {
    // Temporary variable to hold the current word
    string temp = "";
    
    // Resultant string with ordered words 
    string result = "";

    for (char c : str){
        if ((c == ' ' || (!temp.empty() && isupper(temp[0]) && islower(c) && (temp.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos))) ){
            sort_word(temp);
            
            // converting the first character of word to uppercase and remaining characters to lowercase 
            if (!temp.empty()) {
                char t = toupper(temp[0]);
                temp[0] = tolower(temp[0]);
                result += t + temp;
            }
            
            // append the space or character after sorted word into 'result' string 
            if (c != ' ') {
                c = toupper(c);
            }
            result+= c;  
                
            temp = "";    
        } else {
           temp += tolower(c);     
        }
    }
        
    return result;
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

    if((anti_shuffle("Hi") == "Hi")){ tests_passed++; } total_tests++;

    if((anti_shuffle("hello") == "ehllo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("number") == "bemnru")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcd") == "abcd")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Hello World!!!") == "Hello !!!Wdlor")){ tests_passed++; } total_tests++;

    if((anti_shuffle("") == "")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Hi") == "Hi")){ tests_passed++; } total_tests++;

    if((anti_shuffle("hello") == "ehllo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("number") == "bemnru")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcd") == "abcd")){ tests_passed++; } total_tests++;

    if((anti_shuffle("") == "")){ tests_passed++; } total_tests++;

    if((anti_shuffle("12345") == "12345")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Racecar") == "Raaccer")){ tests_passed++; } total_tests++;

    if((anti_shuffle("!!!") == "!!!")){ tests_passed++; } total_tests++;

    if((anti_shuffle("r") == "r")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Raccecar") == "Raacccer")){ tests_passed++; } total_tests++;

    if((anti_shuffle("lDQH") == "DHQl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Raceca") == "Raacce")){ tests_passed++; } total_tests++;

    if((anti_shuffle("rr") == "rr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Raaccecar") == "Raaacccer")){ tests_passed++; } total_tests++;

    if((anti_shuffle("tKYJ") == "JKYt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("RacRecar") == "RRaaccer")){ tests_passed++; } total_tests++;

    if((anti_shuffle("rrr") == "rrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cRecar") == "Raccer")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Racercar") == "Raaccerr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("lDQHH") == "DHHQl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("3455") == "3455")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Raccecacr") == "Raaccccer")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbcccddddeeeeeffffff") == "abbcccddddeeeeeffffff")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aabbcceeddffggghhhiijjkklmmnnooppqqrrssttuuvvwwxxyyzz") == "aabbccddeeffggghhhiijjkklmmnnooppqqrrssttuuvvwwxxyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnOpQrStUvWxYz") == "ACEGIKMOQSUWYbdfhjlnprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("over") == "eorv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("o") == "o")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcbcccdddcollectiondeeeeeffffff") == "abbccccccddddeeeeeeffffffillnoot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("It") == "It")){ tests_passed++; } total_tests++;

    if((anti_shuffle("tell") == "ellt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("A") == "A")){ tests_passed++; } total_tests++;

    if((anti_shuffle("C") == "C")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noont") == "nnoot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnKOpQrStUvWxYz") == "ACEGIKKMOQSUWYbdfhjlnprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("high-level,") == ",-eeghhillv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequicknce,") == ",ccceeiiknqsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("passsword") == "adoprsssw")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noontt") == "nnoott")){ tests_passed++; } total_tests++;

    if((anti_shuffle("BcBlR") == "BBRcl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TheG") == "GTeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequoficknce,") == ",ccceefiiknoqsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbcccddddeeBcBlReeeffffff") == "BBRabbccccddddeeeeeffffffl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Cjumps") == "Cjmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnKOpQrStUTheGvWxYz") == "ACEGGIKKMOQSTUWYbdefhhjlnprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ThejumpsG") == "GTehjmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("so") == "os")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjumpsC") == "CCjmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("is") == "is")){ tests_passed++; } total_tests++;

    if((anti_shuffle("th") == "ht")){ tests_passed++; } total_tests++;

    if((anti_shuffle("coquickmanagement.") == ".aacceegikmmnnoqtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("language.") == ".aaegglnu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noonntt") == "nnnoott")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noontIt") == "Innoott")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequicthknce,") == ",ccceehiiknqstu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("I") == "I")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbage") == "aabeggr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("h") == "h")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKA") == "AKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjumpsCC") == "CCCjmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequicthknce,abbcccddddeeBcBlReeeffffff") == ",BBRabbcccccccddddeeeeeeeffffffhiiklnqstu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oo") == "oo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ThhejumpsG") == "GTehhjmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("X") == "X")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlrMnKOpQrStUvWxYz") == "ACEGIKKMOQSUWYbdfhjlnprrtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("passswPythonord") == "Padhnooprssstwy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjDs") == "CDjs")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhage") == "aabegghr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMKnOpQrStUvWxYz") == "ACEGIKKMOQSUWYbdfhjlnprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdefghijklmnopqrstvwxyz") == "abcdefghijklmnopqrstvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Python") == "Phnoty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("In") == "In")){ tests_passed++; } total_tests++;

    if((anti_shuffle("dog.") == ".dgo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjumpsCsciequicthknce,abbcccddddeeBcBlReeeffffffC") == ",BBCCCRabbcccccccddddeeeeeeeffffffhiijklmnpqsstuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequicknce,science,") == ",,ccccceeeeiiiknnqssu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPOMNMLKJIHGFEDCBA") == "ABCDEFGHIJKLMMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("computer") == "cemoprtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("a") == "a")){ tests_passed++; } total_tests++;

    if((anti_shuffle("general-purpose") == "-aeeeglnopprrsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("BcfoBrmBlR") == "BBBRcflmor")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Please") == "Paeels")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdTSAbCdEfGhIjKlMnOpQrStUvWxYzIHGFEDCBA") == "AABCCDEEFGGHIIKMOQSSTUWYabbcddfhjlnprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhainterpreted,ge") == ",aabdeeeegghinprrrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("hythonord") == "dhhnoorty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdefghijklmnopqrstuvwxyz") == "abcdefghijklmnopqrstuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbacccddddeeBcBlReeeffffff") == "BBRaabbccccddddeeeeeffffffl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhag") == "aabgghr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjjD") == "CDjj")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noonPython") == "Phnnnoooty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequicthsknce,") == ",ccceehiiknqsstu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TheGabcdTSAbCdEfGhIjKlMnOpQrStUvWxYzIHGFEDCBA") == "AABCCDEEFGGGHIIKMOQSSTTUWYabbcddefhhjlnprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPODCBA") == "ABCDOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("generpurpose") == "eeegnopprrsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("jumps") == "jmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRCjumpsCQPODCBA") == "ABCCCDOPQRSTUVWXYZjmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnKOpQrStUThehGvWxsoYz") == "ACEGGIKKMOQSTUWYbdefhhhjlnoprstvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbbcccddddeeBcBlReeeffffff") == "BBRabbbccccddddeeeeeffffffl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("D") == "D")){ tests_passed++; } total_tests++;

    if((anti_shuffle("c") == "c")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnOpQrSofxYz") == "ACEGIKMOQSYbdffhjlnoprxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle(".of") == ".fo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXInXWVURTSRQPONMLKA") == "AIKLMNOPQRRSTUVWXXYZn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ttt") == "ttt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Cjum.ofps") == ".Cfjmopsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("integramming") == "aeggiimmnnrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("science,") == ",cceeins")){ tests_passed++; } total_tests++;

    if((anti_shuffle("quicknoont") == "ciknnooqtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("management.") == ".aaeegmmnnt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhainterpreted,geD") == ",Daabdeeeegghinprrrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("collectin") == "cceillnot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ythDonord") == "Ddhnoorty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garmanagement.bage") == ".aaaabeeegggmmnnrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHZYXaabcdefghijkCjDslmnopqrstuvwxyzGGFEDCBA") == "ABCCDDEFGGHIJKLMNOPQRSTUVWXXYYZZaabcdefghijjklmnopqrsstuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("EDjxcgDxv") == "DDEcgjvxx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("lKpksrfI") == "IKfklprs")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhoThefainterpreted,ge") == ",Taabdeeeeefgghhinoprrrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("BBcBlR") == "BBBRcl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("omputer") == "emoprtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("not") == "not")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oThoef") == "Tefhoo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noocoomputernPython") == "Pcehmnnnoooooprttuy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("passswordlanguage.") == ".aaadegglnoprsssuw")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHGFEDCBA") == "ABCDEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjjjD") == "CDjjj")){ tests_passed++; } total_tests++;

    if((anti_shuffle(".language.") == "..aaegglnu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("F") == "F")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhCjjDainterpreted,ge") == ",CDaabdeeeegghijjnprrrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("col,lectionnot") == ",cceillnnooott")){ tests_passed++; } total_tests++;

    if((anti_shuffle("f") == "f")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ov") == "ov")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Cjum.ofsops") == ".Cfjmoopssu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdOTSAbCdEfGhIjKlMnOpQrStIHGFEDCBA") == "AABCCDEEFGGHIIKMOOQSSTabbcddfhjlnprt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbageabcdefghijklmnopqrstvwxyz") == "aaabbcdeefggghijklmnopqrrstvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pas") == "aps")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciencZYXWVUTSRCjumpsCQPODCBAe,") == ",ABCCCDOPQRSTUVWXYZcceeijmnpssu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oThef") == "Tefho")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pass") == "apss")){ tests_passed++; } total_tests++;

    if((anti_shuffle("forma") == "afmor")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Pyton") == "Pnoty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("passswPythonordMy") == "MPadhnooprssstwyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequicknce,sciencee,") == ",,ccccceeeeeiiiknnqssu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("theabcdefghijklmnopqrstuvwxyz") == "abcdeefghhijklmnopqrsttuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("computerPython") == "Pcehmnooprttuy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oThefmanagement.nOpQrStUvWxYzIHGFEsciequoficknce,DCBA") == ",.ABCDEFGHIOQSTUWYaaccceeeeeffghiikmmnnnnoopqrsttuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("BlR") == "BRl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXIWVCjjjDURTSRQPONMLKA") == "ACDIKLMNOPQRRSTUVWXYZjjj")){ tests_passed++; } total_tests++;

    if((anti_shuffle("yintegramming") == "aeggiimmnnrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXIWVCjjjDURTnoonPythonA") == "ACDIPRTUVWXYZhjjjnnnoooty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CmjumpsC") == "CCjmmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("nanot") == "annot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("atell") == "aellt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("generpuAbCdEfGhIjKlMnOpQrStUvWxYze") == "ACEGIKMOQSUWYbdeeefghjlnnpprrtuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("anyone.NMLKJIHGFEDCBA") == ".ABCDEFGHIJKLMNaennoy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciencZYXWVUTSRCgarbhainterpreted,gAeDjumpsCQPODCBAe,") == ",,AABCCCDDOPQRSTUVWXYZaabccdeeeeeegghiijmnnpprrrssttu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("do.") == ".do")){ tests_passed++; } total_tests++;

    if((anti_shuffle("coquickmmanagement.") == ".aacceegikmmmnnoqtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHZYXaabcdefhythonordghijkCjDslmnopqrstuvwxyzGGFEDCBA") == "ABCCDDEFGGHIJKLMNOPQRSTUVWXXYYZZaabcddefghhhijjklmnnooopqrrssttuvwxyyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ythDornord") == "Ddhnoorrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("language.ntt") == ".aaegglnnttu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciequicthknece,abbcccddddeeBcBlReeeffffff") == ",BBRabbcccccccddddeeeeeeeeffffffhiiklnqstu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("integeramming") == "aeeggiimmnnrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("automatic") == "aacimottu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ImemorIy") == "IIemmory")){ tests_passed++; } total_tests++;

    if((anti_shuffle("automCjumpsCtic") == "CCacijmmopsttuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("yintegrammin") == "aegiimmnnrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("passs") == "apsss")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdOTSAbCdEfGhIjKlIMnOpQrStIHGFEDCBA") == "AABCCDEEFGGHIIIKMOOQSSTabbcddfhjlnprt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CD") == "CD")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aThe") == "Taeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("of") == "fo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("isAbCdEfGhIjKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKJIHGFEDCBA") == "AABCCDEEFGGHIIJKKKLMMNOOPQQRSSTUUVWWXYYZbddfhijlnprstvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aoThefmanagement.nOpQrStUvWxYzIHGFEsciequoficknce,DCBA") == ",.ABCDEFGHIOQSTUWYaaaccceeeeeffghiikmmnnnnoopqrsttuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("theabcdefghijklmnopqrstuvwxZYXWVUTSRQPONMLKJIHZYXaabcdefghijkCjDslmnopqrstuvwxyzGGFEDCBnoonPyth.onAyz") == ".ABCCDDEFGGHIJKLMNOPPQRSTUVWXXYYZZaaabbccddeeeffgghhhhiijjjkkllmmnnnnnoooooppqqrrsssttttuuvvwwxxyyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("the") == "eht")){ tests_passed++; } total_tests++;

    if((anti_shuffle("interpreted,ythDornord") == ",Dddeeehinnooprrrrttty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhageX") == "Xaabegghr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHZYXaabcdefghijkCjDslmnopqrstuvwxykzGGFEDCBA") == "ABCCDDEFGGHIJKLMNOPQRSTUVWXXYYZZaabcdefghijjkklmnopqrsstuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aoThefmanagement.nOpQrStUvWixYzIHGFEsciequoficknce,DCBA") == ",.ABCDEFGHIOQSTUWYaaaccceeeeeffghiiikmmnnnnoopqrsttuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQLPOMNMLKJIHGFEDCBA") == "ABCDEFGHIJKLLMMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("col,lection") == ",cceillnoot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("isThe") == "Tehis")){ tests_passed++; } total_tests++;

    if((anti_shuffle("poHT") == "HTop")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ImeorIy") == "IIemory")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlrMnKOpQYrStUvWxYz") == "ACEGIKKMOQSUWYYbdfhjlnprrtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cootheabcdefghijklmnopqrstuvwxyzl!") == "!abccdeefghhijkllmnooopqrsttuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("dodg.") == ".ddgo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjumpmsCC") == "CCCjmmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Thess") == "Tehss")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnKOpQrStUThehGvWxsbroe") == "ACEGGIKKMOQSTUWbbdeefhhhjlnoprrstvx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("atepassswPythonordll") == "Paadehllnooprsssttwy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhCjjDa,ge") == ",CDaabegghjjr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Th") == "Th")){ tests_passed++; } total_tests++;

    if((anti_shuffle("doE.") == ".Edo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSAbCdEfGhIjKlMnOpQrStUvWxYzIHGFEDCBA") == "AABCCDEEFGGHIIKMOQSSTUUVWWXYYZbdfhjlnprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbbcccddddeeBcBlReeleffffff") == "BBRabbbccccddddeeeeeffffffll")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQRPONMLKA") == "AKLMNOPQRRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("The") == "Teh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("paps") == "apps")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Imeomanagement.rIy") == ".IIaaeeegmmmnnorty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("anyone.NMLpasswordGFEDCBA") == ".ABCDEFGLMNaadennooprsswy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("scietqumanagement.JIHGFEDCBAEDCBA") == ".AABBCCDDEEFGHIJaaceeegimmnnqsttu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhformaage") == "aaabefgghmorr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQP") == "PQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGMnKOpQrStCUvWx") == "ACCEGKMOQSUWbdfnprtvx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("theanbcdefghijklmnopqrstuvwxyz") == "abcdeefghhijklmnnopqrsttuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("mnopqrstuvwxyz") == "mnopqrstuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TheH") == "HTeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Cjum.ofcollectiabcdefghijklmnopqrstuvwxyz") == ".Cabcccdeeffghiijjklllmmnooopqrsttuuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garmanagement.age") == ".aaaaeeegggmmnnrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMQrStUvWxYz") == "ACEGIKMQSUWYbdfhjlrtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("H") == "H")){ tests_passed++; } total_tests++;

    if((anti_shuffle("fo") == "fo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjjjjD") == "CDjjjj")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ODXorVMol") == "DMOVXloor")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pap") == "app")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cgarbthage") == "aabcegghrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcIn") == "Iabcn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjCumpmsCC") == "CCCCjmmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("PytonsciequofickHnce,") == ",HPccceefiiknnooqstuy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ggarbhage") == "aabeggghr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oThefmanagement.nOpQrStUvWxYzIHGFEsciequofce,DCBA") == ",.ABCDEFGHIOQSTUWYaacceeeeeffghimmnnnoopqrsttuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aabbcceeddffggghhhiijfjkklmmnnooppqqrrssttuuvvwwxxyyzz") == "aabbccddeefffggghhhiijjkklmmnnooppqqrrssttuuvvwwxxyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ODXoBrVMol") == "BDMOVXloor")){ tests_passed++; } total_tests++;

    if((anti_shuffle("e") == "e")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oThefmanagement.nOpQrStUvWxYzIHGFEscformaiequofce,DCBA") == ",.ABCDEFGHIOQSTUWYaaacceeeeefffghimmmnnnooopqrrsttuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Thquicknoont") == "Tchiknnooqtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhinqukickmingCjjDa,ge") == ",CDaabceggghiiijjkkmnnqru")){ tests_passed++; } total_tests++;

    if((anti_shuffle("lagnguage.") == ".aaeggglnu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cagarbthage") == "aaabcegghrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhfge") == "abefgghr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("management.JIHGFEDCBAEDCBA") == ".AABBCCDDEEFGHIJaaeegmmnnt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aoutomatic") == "aacimoottu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aRbbbcccddddeeBcBlReeleffffff") == "BBRRabbbccccddddeeeeeffffffll")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnYz") == "ACEGIKMYbdfhjlnz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("theabcdefghijklmnopqrstuvwxZYXWVUTSRQPONMLKJIHZYXaabcdefghijkCjDslmnopq.ofrstuvwxyzGGFEDCBnoonPyth.onAyz") == "..ABCCDDEFGGHIJKLMNOPPQRSTUVWXXYYZZaaabbccddeeefffgghhhhiijjjkkllmmnnnnnooooooppqqrrsssttttuuvvwwxxyyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciZYXWVUTSAbCdEfGhIjKlMInequic") == "ACEGIIKMSTUVWXYZbccdefhiijlnqsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aoThefmanagement.nOpQrStUvWxYzIpassHGFEsciequoficknce,DCBA") == ",.ABCDEFGHIOQSTUWYaaaaccceeeeeffghiikmmnnnnooppqrsssttuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("scieaabbcceeddffggghhhiijjkklmmnntuuvvwwxxyyzz") == "aabbcccddeeeffggghhhiiijjkklmmnnstuuvvwwxxyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ssso") == "osss")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHZYXaabcdefhythonordghijkCjDslmnopqrstuvwxyzGGFEDCBACDH") == "ABCCCDDDEFGGHHIJKLMNOPQRSTUVWXXYYZZaabcddefghhhijjklmnnooopqrrssttuvwxyyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("puteer") == "eeprtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("theabjklmnopqrstuvwxyz") == "abehjklmnopqrsttuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("XIn") == "IXn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noonPyython") == "Phnnnoootyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("jumpsZYXWVUTSRQPONMLKJIHGEDjxcgDxvFEDCBA") == "ABCDDDEEFGHIJKLMNOPQRSTUVWXYZcgjjmpsuvxx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("EDjxcv") == "DEcjvx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("IipsAbCdEfGhIjKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKJIHGFEDCBAn") == "AABCCDEEFGGHIIIJKKKLMMNOOPQQRSSTUUVWWXYYZbddfhijlnnpprstvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMnKOpQrStUTheGvWxYzyintegrammin") == "ACEGGIKKMOQSTUWYabdeefghhiijlmmnnnprrttvxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("formaAbCdEfGhIjKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKJIHGFEDCBAonps") == "AABCCDEEFGGHIIJKKKLMMNOOPQQRSSTUUVWWXYYZabddffhjlmnnoopprrstvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbacccddddeeBcBlReeefffffH") == "BBHRaabbccccddddeeeeefffffl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ODXjumpsZYXWVUTSRQPOMyranyone.VMol") == ".DMMOOPQRSTUVVWXXYZaejlmnnooprsuyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciencZYumpsCQPODCBAe,") == ",ABCCDOPQYZcceeimnpssu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("theabjklmnopqrstuvwx") == "abehjklmnopqrsttuvwx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ee") == "ee")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pp") == "pp")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abckdefghijklmnogenerpurposepqatellrstuvwxyz") == "aabcdeeeeefgghijkklllmnnoopppqrrrssttuuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("IipsAbCdEfGhIjqruickKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKXJIHGFEDCBAn") == "AABCCDEEFGGHIIIJKKKLMMNOOPQQRSSTUUVWWXXYYZbcddfhiijklnnppqrrstuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("autoHmatic") == "Haacimottu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ss") == "ss")){ tests_passed++; } total_tests++;

    if((anti_shuffle("maemory") == "aemmory")){ tests_passed++; } total_tests++;

    if((anti_shuffle("mIanagement.CdEfGhIjKlIMnQOpQrStIHGFEDCBAover") == ".ABCCDEEFGGHIIIIKMOQQSaadeeefghjlmmnnnoprrttv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("HH") == "HH")){ tests_passed++; } total_tests++;

    if((anti_shuffle("automCjumpsCtBcBlRic") == "BBCCRaccijlmmopsttuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciCjumpsCCequicthsknce,") == ",CCCccceehiijkmnpqssstuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garmmanagement.bage") == ".aaaabeeegggmmmnnrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfODXjumpsZYXWVUTSRQPOMyranyone.VMolInGhIjKMlMnOpQrStUvWxYz") == ".ACDEGIIKMMMMOOOPQQRSSTUUVVWWXXYYZabdefhjjllmnnnnoopprrstuvxyyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Cjmjumps") == "Cjjmmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("col,lecAbCdEfGhIjKlMQrStUvWxYztion") == ",ACEGIKMQSUWYbccdefhijlllnoorttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ThquicODXoBrVMolknoont") == "BDMOTVXchiklnnooooqrtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("jumpsZYXWVUTSRQPOMy") == "MOPQRSTUVWXYZjmpsuy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciencZYumpsCQ,PODCBAe,") == ",,ABCCDOPQYZcceeimnpssu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oThohef") == "Tefhhoo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("passhe") == "aehpss")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ipsAbCdlazyEfGhIjKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKJIHGFEDCBA") == "AABCCDEEFGGHIIJKKKLMMNOOPQQRSSTUUVWWXYYZabddfhijllnpprstvxyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdefghijknoonPython") == "Pabcdefghhijknnnoooty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("memBBcBlRory") == "BBBRcelmmory")){ tests_passed++; } total_tests++;

    if((anti_shuffle("mIanagemanagemipsAbCdEfGhIjKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKJIHGFEDCBAent.ment.CdEfGhIjKlIMnQOpQrStIHGFEDCBAover") == "..AAABBCCCCDDEEEEFFGGGGHHIIIIIIJKKKKLMMMNOOOPQQQQRSSSTUUVWWXYYZaaaabdddeeeeeffgghhijjllmmmmnnnnnnoppprrrsttttvvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlrMnKAbCdEfGhIjKlMnKOpQrStUTheGvWxYzyintegramminOpQYrStUvWxYz") == "AACCEEGGGIIKKKKMMOOQQSSTUUWWYYYabbddeeffghhhiijjllmmnnnnpprrrrtttvvxxyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("naAbCdEfGhIjKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKJIHGFEDCBACdEfGhIjKlMnOpQrStUvWxYznot") == "AABCCCDEEEFGGGHIIIJKKKKLMMMNOOOPQQQRSSSTUUUVWWWXYYYZabdddffhhjjllnnnnopprrtttvvxxzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjuC") == "CCju")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMpnYz") == "ACEGIKMYbdfhjlnpz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ojumpsZYXWVUTSRQPONMLKJIHGFE") == "EFGHIJKLMNOPQRSTUVWXYZjmopsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXdEfDGhIjKlMnOpQrYzIHGFEDCBA") == "ABCDDEEFGGHIIKMOQXYYZdfhjlnprz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aatell") == "aaellt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfODXjumpsZYXWVUTSRQPOMVMolInGhIjKMlMnOpQrStUvWxYz") == "ACDEGIIKMMMMOOOPQQRSSTUUVVWWXXYYZbdfhjjllmnnopprstuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPOMdokg.NMLKJIHGFEDCBAmanagement.") == "..ABCDEFGHIJKLMMNOPQRSTUVWXYZaadeeggkmmnnot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("col,lecAbCMQrStUvWxYztion") == ",ACMQSUWYbcceillnoorttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdOTSAbCdEfGhIjKlMnOpQrStIHGFEDtttCBA") == "AABCCDEEFGGHIIKMOOQSSTabbcddfhjlnprtttt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("love") == "elov")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noonnt") == "nnnoot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlrMnKOpQYrStUvWxYzpassordlanguage.") == ".ACEGIKKMOQSUWYYaaabddefgghjllnnopprrrsstuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("qwkTzPZd") == "PTZdkqwz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("programming.") == ".aggimmnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("collecmtion") == "cceillmnoot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMZYXdEfDGhIjKlMnOpQrStUvWxYzIHGFEDCBAHGFEDCBApnYz") == "AAABBCCCDDDEEEEFFGGGGHHIIIKKMMOQSUWXYYYZbddffhhjjllnnpprtvxzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("theanbcdefghijklemnopqrstuvwxyz") == "abcdeeefghhijklmnnopqrsttuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ppIipsAbCdEfGhIjqruickKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLKXJIHGFEDCBAn") == "AABCCDEEFGGHIIIJKKKLMMNOOPQQRSSTUUVWWXXYYZbcddfhiijklnnppppqrrstuvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("coquickmanagemen") == "aacceegikmmnnoqu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZMLKJIHGFEDCBA") == "ABCDEFGHIJKLMZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("gabcdefghijklarmanagement.age") == ".aaaaabcdeeeefgggghijklmmnnrt")){ tests_passed++; } total_tests++;

    if((anti_shuffle(".langguage.") == "..aaeggglnu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("general-purpg") == "-aeegglnpprru")){ tests_passed++; } total_tests++;

    if((anti_shuffle("B") == "B")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ThsciZYXWVUTSAbCdEfGhIjKlMInequic") == "ACEGIIKMSTTUVWXYZbccdefhhiijlnqsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("memory") == "emmory")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjumpmsCCC") == "CCCCjmmpsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdOTSAbCdEfGhIjKlissciequicknce,science,!dEfGhIjKlMnKOpQrStUTheGvWxYzyintegramminOpQYrStUvWxYzEfGhIjKlMnKOpQrStUThehGvWxsbroeIHGFEDCBA") == "!,,AABCCDEEEEFGGGGGGHIIIIKKKKKMMOOOOQQQSSSSTTTUUUWWWYYYaabbbccccccdddeeeeeeeefffghhhhhhiiiiiijjjklllmmnnnnnnopppqrrrrrssssttttuvvvxxxyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("lov") == "lov")){ tests_passed++; } total_tests++;

    if((anti_shuffle("XX") == "XX")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPOMNMLKJIHGFEDOCBA") == "ABCDEFGHIJKLMMNOOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CjjjjjD") == "CDjjjjj")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdOTSAbCdEfGhIjKlissciequicknce,science,!dEfGhIjKlMnKOpQrStUTheGvWxYzyintegramminOpQYrStUvWxYzEfGhIjKlMnKOpQrStUThehGvWxsbroeIHGpassswordlaInFEDCBA") == "!,,AABCCDEEEEFGGGGGGHIIIIIKKKKKMMOOOOQQQSSSSTTTUUUWWWYYYaaaabbbccccccddddeeeeeeeefffghhhhhhiiiiiijjjkllllmmnnnnnnnooppppqrrrrrrsssssssttttuvvvwxxxyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("fZYXanWVUTSRQPONMLKAox,") == ",AKLMNOPQRSTUVWXYZafnox")){ tests_passed++; } total_tests++;

    if((anti_shuffle("d") == "d")){ tests_passed++; } total_tests++;

    if((anti_shuffle("thte") == "ehtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("anyoGne.NMLKJIHGFEDCBA") == ".ABCDEFGGHIJKLMNaennoy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noonnPython") == "Phnnnnoooty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("BR") == "BR")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sciZYMXWVUTSAbCdEfGhIjKlMInequic") == "ACEGIIKMMSTUVWXYZbccdefhiijlnqsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("gabcdefghijklarmanagemtheentege") == "aaaabcdeeeeeefgggghhijklmmnnrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noth") == "hnot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ODXoBrVMo") == "BDMOVXoor")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cc") == "cc")){ tests_passed++; } total_tests++;

    if((anti_shuffle("putueer") == "eeprtuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cchc") == "ccch")){ tests_passed++; } total_tests++;

    if((anti_shuffle("CCjuC") == "CCCju")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHZYXaabcdefghijkCjDslmnopqrstlazyuvwxykzGGFEDCBA") == "ABCCDDEFGGHIJKLMNOPQRSTUVWXXYYZZaaabcdefghijjkkllmnopqrsstuvwxyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbrownbCdmanagement..EfGhIjKlMQrStUvWxYz") == "..ACEGIKMQSUWYaabbdeefghjlmmnnnorrttvwxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("an") == "an")){ tests_passed++; } total_tests++;

    if((anti_shuffle("socoquickmanagemendOTSAbCdEfGuhIjKlMnOMpQrStIHGFEDCBAment.thonordMyyton") == ".AABCCDEEFGGHIIKMMMOOQSSTaabccdddeeefghhijklmmmnnnnnnooooopqrrsttttuuyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Fe") == "Fe")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSAbCdEfGhIjKlMI") == "ACEGIIKMSTUVWXYZbdfhjl")){ tests_passed++; } total_tests++;

    if((anti_shuffle("garbhCjjDai,ge") == ",CDaabegghijjr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("l") == "l")){ tests_passed++; } total_tests++;

    if((anti_shuffle("collction") == "ccillnoot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("gaAbabcdefghijklmnopqrstuvwxyz") == "Aaabbcdefgghijklmnopqrstuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("language.ZYXWVUTSRQPONdMLKJIHGFEDCBAonps") == ".ABCDEFGHIJKLMNOPQRSTUVWXYZaadegglnnopsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("IipsAbCdEfGhIjKlMnKOpQrStUvWxYzZYXWVUTSRQPONdMLDCBAn") == "AABCCDEGIIKKLMMNOOPQQRSSTUUVWWXYYZbddfhijlnnpprstvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("formaAbCdEfGhIjKlMnKOpQrStUvWxYzZYXWVUTmnopqrstuvwxyzRQPONdMLKJIHGFEDCBAonps") == "AABCCDEEFGGHIIJKKKLMMNOOPQQRSTUUVWWXYYZabddffhjlmmnnnooopppqrrrssttuvvwxxyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("FZYXWVUTSRQPOMdokg.NMLKJIHGFEDCBAmanagement.") == "..ABCDEFFGHIJKLMMNOPQRSTUVWXYZaadeeggkmmnnot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("coquCjmjumpsickmanagemenu") == "Caacceegijjkmmmmnnopqsuuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("quickbrown") == "bciknoqruw")){ tests_passed++; } total_tests++;

    if((anti_shuffle("managememanagement.JIHGFEDCBAEDCBAnt.") == "..AABBCCDDEEFGHIJaaaaeeeeggmmmmnnnntt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ihigh-level,") == ",-eeghhiillv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("noonPyoython") == "Phnnnooootyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ababcdefghioThefmanagement.nOpQrStUvWxYzIHGFEsciequoficknce,DCBAjklmnopqrstuvwxyz") == ",.ABCDEFGHIOQSTUWYaaaabbccccdeeeeeefffgghhiiijkklmmmnnnnnoooppqqrrsstttuuvvwxxyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("By") == "By")){ tests_passed++; } total_tests++;

    if((anti_shuffle("gV") == "Vg")){ tests_passed++; } total_tests++;

    if((anti_shuffle("1") == "1")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ABCDEFGHIJKLMNOPQRSTUWXYZ") == "ABCDEFGHIJKLMNOPQRSTUWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("1234567890") == "0123456789")){ tests_passed++; } total_tests++;

    if((anti_shuffle("quick") == "cikqu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("password") == "adoprssw")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMofnOpQrStUvWxYz") == "ACEGIKMOQSUWYbdffhjlnoprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdofFEDCBA") == "ABCDEFabcdfo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMofnOjpQrStUvWxYz") == "ACEGIKMOQSUWYbdffhjjlnoprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("programming") == "aggimmnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ThTe") == "TTeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjinterpreted,KlMofnOjpQrStUvWxYz") == ",ACEGIKMOQSUWYbddeeeffhijjlnnopprrrtttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("quic") == "ciqu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pythonm") == "hmnopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("programmin") == "agimmnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ovzer") == "eorvz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdopythonfFEDCBA") == "ABCDEFabcdfhnoopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oveorr") == "eoorrv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEnfGhIjinterpreted,KlMofnOjpQrStUvWxYz") == ",ACEGIKMOQSUWYbddeeeffhijjlnnnopprrrtttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cool!") == "!cloo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AtbCdEfGhIIjKlMofnOjpQrStUvWxYz") == "ACEGIIKMOQSUWYbdffhjjlnoprttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("do") == "do")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cooZYXWVUTSRQPONMLKJIHGFECDCBA") == "ABCCDEFGHIJKLMNOPQRSTUVWXYZcoo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("G") == "G")){ tests_passed++; } total_tests++;

    if((anti_shuffle("rammin") == "aimmnr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AtbStUvWxYz") == "ASUWYbttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TThTe") == "TTTeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("qui") == "iqu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Pytprogramminhon") == "Paghimmnnooprrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TThe") == "TTeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("GG") == "GG")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Pyothon") == "Phnooty")){ tests_passed++; } total_tests++;

    if((anti_shuffle(",KlMofnOjpQrStU") == ",KMOQSUfjlnoprt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("interpretede,") == ",deeeeinprrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oveovrr") == "eoorrvv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ddo") == "ddo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("taqU") == "Uaqt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("tqU") == "Uqt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Imn") == "Imn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("dog") == "dgo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("n") == "n")){ tests_passed++; } total_tests++;

    if((anti_shuffle("nist") == "inst")){ tests_passed++; } total_tests++;

    if((anti_shuffle("programmpythonforming.") == ".afgghimmmnnooopprrrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("IIn") == "IIn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHGFEDC") == "CDEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("kfox,") == ",fkox")){ tests_passed++; } total_tests++;

    if((anti_shuffle("form") == "fmor")){ tests_passed++; } total_tests++;

    if((anti_shuffle("python") == "hnopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pynm") == "mnpy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pythonform") == "fhmnooprty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pytthonm") == "hmnoptty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZUYXWVUTSRQPONMLKJIHGFEDC") == "CDEFGHIJKLMNOPQRSTUUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("DyuqFG") == "DFGquy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("dogkfox,") == ",dfgkoox")){ tests_passed++; } total_tests++;

    if((anti_shuffle("EE") == "EE")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pythonmm") == "hmmnopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognramming.") == ".aggimmnnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("BhAPVKZstO") == "ABKOPVZhst")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ddddo") == "ddddo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("fox,") == ",fox")){ tests_passed++; } total_tests++;

    if((anti_shuffle("programmning") == "aggimmnnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("programmnpytthonming") == "agghimmmnnnoopprrtty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("manaagt.") == ".aaagmnt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Myyy") == "Myyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("isD") == "Dis")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ttqU") == "Uqtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEnfGhIjinterpreted,KlMofnOjpQrStUGGvWxYz") == ",ACEGGGIKMOQSUWYbddeeeffhijjlnnnopprrrtttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pbrownrogranammin") == "aabgimmnnnooprrrw")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjinterpreted,KlMofnOjpQrStUv") == ",ACEGIKMOQSUbddeeeffhijjlnnopprrrtttv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("IIZYXWVUTSRQPONMLKJIHGFEDCn") == "CDEFGHIIIJKLMNOPQRSTUVWXYZn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("E") == "E")){ tests_passed++; } total_tests++;

    if((anti_shuffle(",KlMofnOjpQrSt,U") == ",,KMOQSUfjlnoprt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("py") == "py")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdopythonIIZYXWVUTSRQPONMLKJIHGFEDCnfFEDCBA") == "ABCCDDEEFFGHIIIJKLMNOPQRSTUVWXYZabcdfhnnoopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Jcr") == "Jcr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("anyone.UTSRQPONMLKJIHGFEDC") == ".CDEFGHIJKLMNOPQRSTUaennoy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("qu") == "qu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("scquickent.") == ".cceiknqstu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("IIEZYXWVUTSRQPONMLKJIHGFEDCn") == "CDEEFGHIIIJKLMNOPQRSTUVWXYZn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("dddo") == "dddo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abjcdefghijklmnopqrstuvGwIxyz") == "GIabcdefghijjklmnopqrstuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abctdopythonIIZYXWVUTSRQPONMLKJIHGFEDCnfFEDCBA") == "ABCCDDEEFFGHIIIJKLMNOPQRSTUVWXYZabcdfhnnooptty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("managmequi") == "aaegimmnqu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pytthonming") == "ghimnnoptty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("MMy") == "MMy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TTisDe") == "DTTeis")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aabbcceeddbffggghhhiijjkklmmnnoThieuuvvwwxxyyzz") == "Taabbbccddeeeffggghhhhiiijjkklmmnnouuvvwwxxyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Ipythonmmmn") == "Ihmmmnnopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pyttnisthonm") == "himnnopsttty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("science,l") == ",cceeilns")){ tests_passed++; } total_tests++;

    if((anti_shuffle("progrprognramming.rng") == ".aggggimmnnnoopprrrrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ovzeformItquisr") == "Iefimooqrrstuvz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("secret.") == ".ceerst")){ tests_passed++; } total_tests++;

    if((anti_shuffle("scquicke.") == ".cceikqsu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognramming.r") == ".aggimmnnoprrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("manaagtm.") == ".aaagmmnt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("PytprogrPamminhon") == "PPaghimmnnooprrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("FF") == "FF")){ tests_passed++; } total_tests++;

    if((anti_shuffle("lazy") == "alyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pyformnm") == "fmmnopry")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prkogrammin") == "agikmmnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognraIInmming.r") == ".IIaggimmnnnoprrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("PytprogrammiPnhon") == "PPaghimmnnooprrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Ainterpreted,pbCdEfGhIjKlMnOpQrStUvWxYz") == ",ACEGIKMOQSUWYbddeeefhijlnnppprrrtttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("anyone.") == ".aennoy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("bmrown") == "bmnorw")){ tests_passed++; } total_tests++;

    if((anti_shuffle("kfofx,") == ",ffkox")){ tests_passed++; } total_tests++;

    if((anti_shuffle("BhabctdopythonIIZYXWVUTSRQPONMLKJIHGFEDCnfFEDCBAKZstO") == "ABBCCDDEEFFGHIIIJKKLMNOOPQRSTUVWXYZZabcdfhhnnoopsttty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("scieanyone.UTSRQPONMLKJIHGFEDCnce,") == ",.CDEFGHIJKLMNOPQRSTUacceeeinnnosy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdoDpythonfFEDCBA") == "ABCDDEFabcdfhnoopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("bmrn") == "bmnr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("EZYXWVUTSRQPONMLKJIHGFEDCBA") == "ABCDEEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("scqucomputericke.") == ".ccceeikmopqrstuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("W") == "W")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjinterpretted,KlMofnOjpQrStUvWxYz") == ",ACEGIKMOQSUWYbddeeeffhijjlnnopprrrttttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("taabbcccdddI") == "Iaabbcccdddt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("managmepythonformt.own") == ".aaefghmmmnnnoooprttwy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TTThe") == "TTTeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("InformIt") == "IIfmnort")){ tests_passed++; } total_tests++;

    if((anti_shuffle("fox,managmmanagmeprogrammingment.ement.") == ",..aaaaaeeeefggggimmmmmmmmnnnnnooprrttx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("autotmatic") == "aacimotttu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("auttotmatic") == "aacimottttu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Cquui") == "Ciquu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbcccdddI") == "Iabbcccddd")){ tests_passed++; } total_tests++;

    if((anti_shuffle("IprognraIInmming.r") == ".IIIaggimmnnnoprrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("npn") == "nnp")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ool!") == "!loo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("onm") == "mno")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cool!A") == "!Acloo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("interpmrete") == "eeeimnprrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("rproI") == "Ioprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Myyycool!deeeeeffffffamming.yy") == "!.Macdeeeeeffffffgilmmnooyyyyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("itnterpmrete") == "eeeimnprrttt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("PyAbCdEfGhIjKlMofnOpQrStUvquiothon") == "ACEGIKMOPQSUbdffhhijlnnooopqrttuvy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("proprognraIInmming.rgrammning") == ".IIaaggggiimmmmnnnnnoopprrrrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKJIHGFECDCBA") == "ABCCDEFGHIJKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Thie") == "Tehi")){ tests_passed++; } total_tests++;

    if((anti_shuffle("sso") == "oss")){ tests_passed++; } total_tests++;

    if((anti_shuffle("automaabctdopythoInIIZYXWVUTSRQPONMLKJIHGFEDCnfFEDCBAtic") == "ABCCDDEEFFGHIIIIJKLMNOPQRSTUVWXYZaaabccdfhimnnooopttttuy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("gFkfox,arbage") == ",Faabefggkorx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("auttotatc") == "aacottttu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdoDpythonfpyttnisthonmFEDCBA") == "ABCDDEFabcdfhhimnnnoooppsttttyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdopythonIIZYXWVUTSRQPONMLKJIHGFEkDthoynmDCnfFEDCBA") == "ABCCDDDEEFFGHIIIJKLMNOPQRSTUVWXYZabcdfhhkmnnnooopttyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abctdopythonIIZYXWVUTSNRQPONMLKJIHGFEDCnfFEDCBA") == "ABCCDDEEFFGHIIIJKLMNNOPQRSTUVWXYZabcdfhnnooptty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TTThhe") == "TTTehh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("interpreted,") == ",deeeinprrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("rgarbage") == "aabeggrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abctdopythonIIZYXWVUTSRQPONMLKJIHGFEDCnfFEDCBAA") == "AABCCDDEEFFGHIIIJKLMNOPQRSTUVWXYZabcdfhnnooptty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TThhe") == "TTehh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aut") == "atu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("HGFEDCddo") == "CDEFGHddo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pprognramming.r") == ".aggimmnnopprrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjinterpreted,KlMofnnpnOjpQrStEUv") == ",ACEEGIKMOQSUbddeeeffhijjlnnnnoppprrrtttv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdefghijklmnopqrstuvwxLKJIHGFECDBA") == "ABCDEFGHIJKLabcdefghijklmnopqrstuvwx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("rN") == "Nr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("coolc!honm") == "!cchlmnooo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjinterprejtted,KlMofnOjpQrStUvWxYz") == ",ACEGIKMOQSUWYbddeeeffhijjjlnnopprrrttttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("taqqU") == "Uaqqt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMofnOjpQrStUvWxYzW") == "ACEGIKMOQSUWWYbdffhjjlnoprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("fFkfox,o") == ",Fffkoox")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pyqui") == "ipquy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ptyttI") == "Ipttty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEnfGhIjinteYrpreted,KlMofnOjpQrStUfGGvWxYz") == ",ACEGGGIKMOQSUWYYbddeeefffhijjlnnnopprrrtttvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("lzy") == "lyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("coolInformIt!") == "!IIcflmnooort")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pythonfornhm") == "fhhmnnooprty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjinterpreted,KlMtEUv") == ",ACEEGIKMUbddeeefhijlnprrtttv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognroamming.") == ".aggimmnnooprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ttqUUscquickent.e.") == "..UUcceeiknqqstttu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("dog.anguage.") == "..aadegggnou")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdefghijklmnopqrstuvwanyonInxyz") == "Iaabcdefghijklmnnnnoopqrstuvwxyyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognAbCdEfGhIjKlMofnOjpQrStUvWxYzWram") == "ACEGIKMOQSUWWYabdffghjjlmnnoopprrrtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("cooscieanyone.UTSRQPONMLKJIHGFEDCnce,l!A") == "!,.ACDEFGHIJKLMNOPQRSTUaccceeeilnnnooosy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("gprkogramminarbagcoompIutere") == "Iaaabceegggikmmmnooopprrrrtu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZUYXWVUTSRQPOGFEDC") == "CDEFGOPQRSTUUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ovzeformfItquisr") == "Ieffimooqrrstuvz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("progIrammpythonforming.") == ".Iafgghimmmnnooopprrrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Mayyy") == "Mayyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle(",KlInformItMofn") == ",IIKMfflmnnoort")){ tests_passed++; } total_tests++;

    if((anti_shuffle("managmement.own") == ".aaeegmmmnnnotw")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pg.r") == ".gpr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("high-levequi") == "-eeghhiilquv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("rprroI") == "Ioprrr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("x,") == ",x")){ tests_passed++; } total_tests++;

    if((anti_shuffle("dogHGFEDCddo.") == ".CDEFGHdddgoo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRabcdefghijklmnopqrstuvwIxyzQPONMLKJIabcdefgqhijklmnopqrstuvwxyzHGFEDCBA") == "ABCDEFGHIIJKLMNOPQRSTUVWXYZaabbccddeeffgghhiijjkkllmmnnooppqqqrrssttuuvvwwxxyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("thon") == "hnot")){ tests_passed++; } total_tests++;

    if((anti_shuffle("teGll") == "Gellt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("HGFEDCInformIt") == "CDEFGHIIfmnort")){ tests_passed++; } total_tests++;

    if((anti_shuffle("manag") == "aagmn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognrabbbcoccdddI") == "Iabbbcccdddgnooprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("qcuick") == "ccikqu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdefghijklmVUTSRQPONMLKJIHGFEDC") == "CDEFGHIJKLMNOPQRSTUVabcdefghijklm")){ tests_passed++; } total_tests++;

    if((anti_shuffle("programm") == "agmmoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdefghijmnopqrstuvwIxyz") == "Iabcdefghijmnopqrstuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ZYXWVUTSRQPONMLKKJIHGFEDC") == "CDEFGHIJKKLMNOPQRSTUVWXYZ")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ovefox,managmmanagmeprogrammingment.ement.orr") == ",..aaaaaeeeeefggggimmmmmmmmnnnnnooooprrrrttvx")){ tests_passed++; } total_tests++;

    if((anti_shuffle("progIrammpythonformin") == "Iafghimmmnnooopprrrty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("pythhonm") == "hhmnopty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("TTThea") == "TTTaeh")){ tests_passed++; } total_tests++;

    if((anti_shuffle("nmGZSyZMp") == "GMSZZmnpy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognrabbbcoccddodI") == "Iabbbcccdddgnoooprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("meamorprognrabbcccdddIay") == "Iaaabbcccdddegmmnooprrry")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ddog") == "ddgo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abbcccddddeeeeefffffff") == "abbcccddddeeeeefffffff")){ tests_passed++; } total_tests++;

    if((anti_shuffle("scqucompputericke.") == ".ccceeikmoppqrstuu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("doo") == "doo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Pytprogramminhyon") == "Paghimmnnooprrtyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognraacbbcccdddI") == "Iaabbccccdddgnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("My") == "My")){ tests_passed++; } total_tests++;

    if((anti_shuffle("PytpPyothonrogramminhon") == "PPaghhimmnnnooooprrttyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("nm") == "mn")){ tests_passed++; } total_tests++;

    if((anti_shuffle("jpdfn") == "dfjnp")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognrabbbcoccddodIabcdoDpythonfpyttnisthonmFEDCBA") == "ABCDDEFIaabbbbccccddddfghhimnnnnooooooppprrsttttyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdopytFkfoxhonfFEDCBA") == "ABCDEFFabcdffhknoooptxy")){ tests_passed++; } total_tests++;

    if((anti_shuffle(",KlMofn") == ",KMflno")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognraIInmmi") == "IIagimmnnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("fFkffox,o") == ",Ffffkoox")){ tests_passed++; } total_tests++;

    if((anti_shuffle(",") == ",")){ tests_passed++; } total_tests++;

    if((anti_shuffle("p.r") == ".pr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abcdopythonIIZYXWVUTSRQPONMLKJIHGFEkDthopbrownrogranamminAynmDCnfFEDCBA") == "AABCCDDDEEFFGHIIIJKLMNOPQRSTUVWXYZaaabbcdfghhikmmmnnnnnnooooopprrrttwyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("prognrammig") == "aggimmnoprr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("bmr") == "bmr")){ tests_passed++; } total_tests++;

    if((anti_shuffle("auat") == "aatu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("maabcdefghijklmnopqrstuvwIxyjumpsz.") == ".Iaabcdefghijjklmmmnoppqrsstuuvwxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("tqpythonmprogrammingU") == "Uagghimmmnnooppqrrtty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("k") == "k")){ tests_passed++; } total_tests++;

    if((anti_shuffle("yDyuFGqFG") == "DFFGGquyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("AbCdEfGhIjKlMofnOpQrStUvqui") == "ACEGIKMOQSUbdffhijlnopqrtuv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("coolco!honm") == "!cchlmnoooo")){ tests_passed++; } total_tests++;

    if((anti_shuffle("qpyttnisthonm") == "himnnopqsttty")){ tests_passed++; } total_tests++;

    if((anti_shuffle("managmement.WVUTSRQPONMLKJIHGFEDCmemorayPyothon") == ".CDEFGHIJKLMNOPPQRSTUVWaaaeeeghmmmmmnnnooorttyy")){ tests_passed++; } total_tests++;

    if((anti_shuffle("aabbcceeddffggghhhiiprogrammnpytthonmingyzz") == "aaabbccddeeffggggghhhhiiimmmnnnoopprrttyyzz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("oveoovrr") == "eooorrvv")){ tests_passed++; } total_tests++;

    if((anti_shuffle("Cqui") == "Ciqu")){ tests_passed++; } total_tests++;

    if((anti_shuffle("interrpmrete") == "eeeimnprrrtt")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ddAbCdEfGhIjKlMofnOjpQrStUvWxYzog") == "ACEGIKMOQSUWYbdddffghjjlnooprtvxz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("abctdopythonIIAbCdEnfGhIjinterpreted,KlMofnOjpQrStUvWxYzZYXWVUTSRQPONMLKJIHGFEDCnfFEDCBAA") == ",AAABCCCDDEEEFFGGHIIIIJKKLMMNOOPQQRSSTUUVWWXYYZabbcdddeeefffhhijjlnnnnnoooppprrrtttttvxyz")){ tests_passed++; } total_tests++;

    if((anti_shuffle("FGII") == "FGII")){ tests_passed++; } total_tests++;

    if((anti_shuffle("secr") == "cers")){ tests_passed++; } total_tests++;

    if((anti_shuffle("ppy") == "ppy")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


