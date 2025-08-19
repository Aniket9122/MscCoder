#include <iostream>
#include <string>
using namespace std;

char encode_vowel(char c) {
    string vowels = "aeiouAEIOU";
    char encoded_vowels[] = {'c', 'g', 'C', 'G', 'E'};  // Characters that are two positions after a, e, i, o, u in the English alphabet.
    
    size_t found = vowels.find(c);
    if (found != string::npos){   // If the character is a vowel, replace it with its encoded counterpart.
        return encoded_vowels[found];
    } else {  // If not a vowel, keep it as is.
        return c;
    }
}

string encode(string message) {
    for (int i = 0; i < message.length(); ++i){  
        if((message[i] >= 'a' && message[i] <= 'z') || (message[i] >= 'A' && message[i] <= 'Z')){  // If the character is a letter, encode it.
            message[i] = encode_vowel(message[i]); 
        }     
    }
    return message;
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

    if((encode("TEST") == "tgst")){ tests_passed++; } total_tests++;

    if((encode("Mudasir") == "mWDCSKR")){ tests_passed++; } total_tests++;

    if((encode("YES") == "ygs")){ tests_passed++; } total_tests++;

    if((encode("This is a message") == "tHKS KS C MGSSCGG")){ tests_passed++; } total_tests++;

    if((encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg")){ tests_passed++; } total_tests++;

    if((encode("TEST") == "tgst")){ tests_passed++; } total_tests++;

    if((encode("Mudasir") == "mWDCSKR")){ tests_passed++; } total_tests++;

    if((encode("YES") == "ygs")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyz") == "CBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("ZYXWVUTSRQPONMLKJIHGFEDCBA") == "zyxwvwtsrqpqnmlkjkhgfgdcbc")){ tests_passed++; } total_tests++;

    if((encode("ABCDEF") == "cbcdgf")){ tests_passed++; } total_tests++;

    if((encode("ZYXWVUTSRQPONMLKJIABCDEFHGFEDCBA") == "zyxwvwtsrqpqnmlkjkcbcdgfhgfgdcbc")){ tests_passed++; } total_tests++;

    if((encode("afghijklmnopqrstuvwxyzABCDE") == "CFGHKJKLMNQPQRSTWVWXYZcbcdg")){ tests_passed++; } total_tests++;

    if((encode("ElqlNnfv") == "gLQLnNFV")){ tests_passed++; } total_tests++;

    if((encode("ZYXWVUTSRQABCDEFPONMLKJIZYXWVUTSRQPONDCBA") == "zyxwvwtsrqcbcdgfpqnmlkjkzyxwvwtsrqpqndcbc")){ tests_passed++; } total_tests++;

    if((encode("abcdZYXWVUTSRQPONMLKJIABCDEFHGFEDCBAefghijklmnopqrstuvwxyz") == "CBCDzyxwvwtsrqpqnmlkjkcbcdgfhgfgdcbcGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("ZYXWVUTSRQABCDEFPONMLKJIZYXWVUETSRQPOONDCBA") == "zyxwvwtsrqcbcdgfpqnmlkjkzyxwvwgtsrqpqqndcbc")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwx") == "CBCDGFGHKJKLMNQPQRSTWVWX")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcVbnm") == "qWGRTYWKQPCSdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("AEIOUaeiou") == "cgkqwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLiAs") == "CcTqWnGRstcndcRdmcgnqlKcS")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("AEIOeiou") == "cgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("THE") == "thg")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTH") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKth")){ tests_passed++; } total_tests++;

    if((encode("AabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTH") == "cCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKth")){ tests_passed++; } total_tests++;

    if((encode("QwertyujumpsiopasDfghklzXcVbnm") == "qWGRTYWJWMPSKQPCSdFGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("lazy") == "LCZY")){ tests_passed++; } total_tests++;

    if((encode("lajumpszay") == "LCJWMPSZCY")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHhIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghHkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEFXGHIJKLMNOPQRSTUVWXYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfxghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("The") == "tHG")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijQklmnopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJqKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("over") == "QVGR")){ tests_passed++; } total_tests++;

    if((encode("THEThe") == "thgtHG")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasoDfghjklzXcVbnm") == "qWGRTYWKQPCSQdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("ovQwertyuiopasDfghjklzXcVbnmer") == "QVqWGRTYWKQPCSdFGHJKLZxCvBNMGR")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("lazythe") == "LCZYTHG")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEFGHIJjumpsKLMNOPQRSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjJWMPSklmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiozpasoDfghjklzXcVbnm") == "qWGRTYWKQZPCSQdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("AEIOOUaeio") == "cgkqqwCGKQ")){ tests_passed++; } total_tests++;

    if((encode("dog") == "DQG")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfghijklmnopqrstuvwxyzABCDEFabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZ") == "CBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyz")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHhcdefghijklmnopqrstulvwxyz") == "cbcdgfghHCDGFGHKJKLMNQPQRSTWLVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeiouzABCDEFGHIJKLUVWXYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGKQWZcbcdgfghkjklwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEFXGHIJKLMNOPQRSTUVWXYYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfxghkjklmnqpqrstwvwxyyz")){ tests_passed++; } total_tests++;

    if((encode("AIBCDEFGHhIJKLMNOP") == "ckbcdgfghHkjklmnqp")){ tests_passed++; } total_tests++;

    if((encode("lajuumpszay") == "LCJWWMPSZCY")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyuiopasDfghjklzXcVbnmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYWKQPCSdFGHJKLZxCvBNMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeiouzABCDEFGHIJKLUVWYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGKQWZcbcdgfghkjklwvwyz")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEBFGHIJjumpsKLMNOPQRSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgbfghkjJWMPSklmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("THEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "thgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("ABCcAtOwNerSTANDArDMAGNOLiAsDEFGHhcdefghijklmnopqrstulvwxyz") == "cbcCcTqWnGRstcndcRdmcgnqlKcSdgfghHCDGFGHKJKLMNQPQRSTWLVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMdogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZ") == "CBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzWnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("AIBCDEFGHhIJMNOP") == "ckbcdgfghHkjmnqp")){ tests_passed++; } total_tests++;

    if((encode("abTcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBtCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("QwertyujumpsiopasDfsghklzXcVbnm") == "qWGRTYWJWMPSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("AabThe") == "cCBtHG")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnojpqrstuvwxyzABCDEFGWiTH") == "cCBCDGFGHKJKLMNQJPQRSTWVWXYZcbcdgfgwKth")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZ") == "CBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abTcdedogfghijklmnopqrstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLMNOPQRSTUVWXCompROmiseYZ") == "CBtCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLDMdogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZ") == "CBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjkldmDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzWnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("AEIOeioCompROmiseu") == "cgkqGKQcQMPrqMKSGW")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHhIJKLMNOPQabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghHkjklmnqpqCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("avbcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CVBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("lajuumpszayjumps") == "LCJWWMPSZCYJWMPS")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZmps") == "JWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMPS")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfghijklmnopqrstuvwxyzABCDEFabcdefghijklmnoupqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZ") == "CBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfCBCDGFGHKJKLMNQWPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyz")){ tests_passed++; } total_tests++;

    if((encode("laay") == "LCCY")){ tests_passed++; } total_tests++;

    if((encode("AEAabTheIOUaeiou") == "cgcCBtHGkqwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("AabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTe") == "cCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtG")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyuiopasDXfghjklzXcVbnmmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYWKQPCSdxFGHJKLZxCvBNMMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEFXGHIJwKLMNOPQRSTUVWXYYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfxghkjWklmnqpqrstwvwxyyz")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("orver") == "QRVGR")){ tests_passed++; } total_tests++;

    if((encode("alaQwertyujumpsiopasDfsghklzXcVbnmay") == "CLCqWGRTYWJWMPSKQPCSdFSGHKLZxCvBNMCY")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpsiopasDfsghklzXcVbnm") == "qWGRTYWJGWMPSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiozpasoAEIOeioCompROmiseuDfghjklzXcVbnm") == "qWGRTYWKQZPCSQcgkqGKQcQMPrqMKSGWdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZms") == "JWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("AoEIOeiou") == "cQgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmps") == "JWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPS")){ tests_passed++; } total_tests++;

    if((encode("ovr") == "QVR")){ tests_passed++; } total_tests++;

    if((encode("lzayjumps") == "LZCYJWMPS")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijkmlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CBCDGFGHKJKMLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEFNOPQRSTUVWXYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("AAIBCDEFGHhIJMNOPoEIOeiou") == "cckbcdgfghHkjmnqpQgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("orvr") == "QRVR")){ tests_passed++; } total_tests++;

    if((encode("ABCsDEFGHhcdefghijklmnopqrstulvwxyz") == "cbcSdgfghHCDGFGHKJKLMNQPQRSTWLVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("VPaOCduqGt") == "vpCqcDWQgT")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuDMdogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZ") == "CBCDGFGHbKJKLMNQPQRSTWdmDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzWnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyuiopasDfghjklzXcVbnmTUVWXCompROjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYWKQPCSdFGHJKLZxCvBNMtwvwxcQMPrqJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abTcdedogfghijklmnopqrgstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLLMNOPQRSTUVWXCompROmiseYZ") == "CBtCDGDQGFGHKJKLMNQPQRGSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzkllmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUtVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwTvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZlzXcVbnmmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzLZxCvBNMMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuxyzABCDEFGHIJKLMNOPQWXYZ") == "CBCDGFGHKJKLMNQPQRSTWXYZcbcdgfghkjklmnqpqwxyz")){ tests_passed++; } total_tests++;

    if((encode("WOLGrsn") == "wqlgRSN")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHhcdefTheqrstulvwxyz") == "cbcdgfghHCDGFtHGQRSTWLVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("laaay") == "LCCCY")){ tests_passed++; } total_tests++;

    if((encode("lajumpszayThe") == "LCJWMPSZCYtHG")){ tests_passed++; } total_tests++;

    if((encode("ApROmiseu") == "cPrqMKSGW")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijklmnopqrstuvwxyzABCDEEFGHIJKLMNOPQRSTUVWXCompROmiseYZms") == "JWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdggfghkjklmnqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsiopasDfsghklzXcVbnm") == "TqWGRTYWJGWMPSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnoFpqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfglhijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQfPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGLHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyzsiopasDfsghklzXcVbnm") == "qWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("jumps") == "JWMPS")){ tests_passed++; } total_tests++;

    if((encode("QATheopasoDfghjklzXcVbnm") == "qctHGQPCSQdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIdJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkDjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("lajuumpszayjum") == "LCJWWMPSZCYJWM")){ tests_passed++; } total_tests++;

    if((encode("lzayjumpsajumpszayThe") == "LZCYJWMPSCJWMPSZCYtHG")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijpasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyabcdedogfgWiTHhijklmnopqrstuMNXOPQRSTUVWXCompROmiseYZlzXcVbnmmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYCBCDGDQGFGwKthHKJKLMNQPQRSTWmnxqpqrstwvwxcQMPrqMKSGyzLZxCvBNMMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("laaz") == "LCCZ")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogmfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZms") == "JWthgCBCDGDQGMFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("AabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjkjuTHEabcdedogfghijklmnopqrstuvwlajuumpszayjumpsxyzABCDEEFGHIJKLMNOPQRSTUVWXCompROmiseYZmslzXcVbnmTe") == "cCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWLCJWWMPSZCYJWMPSXYZcbcdggfghkjklmnqpqrstwvwxcQMPrqMKSGyzMSLZxCvBNMtG")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopiqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijpasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPKQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("rWcZppteU") == "RwCzPPTGw")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijklmnopqrKstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZmps") == "JWthgCBCDGDQGFGHKJKLMNQPQRkSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMPS")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzqrstuvwxyAEIOeiouzABCDEFGHIJKLUVWYZ") == "CBCDGFGHKJKLMNQPcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZQRSTWVWXYcgkqGKQWZcbcdgfghkjklwvwyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvlazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzewxyzABCDEFGHIJKLMdogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZ") == "CBCDGFGHbKJKLMNQPQRSTWVLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGWXYZcbcdgfghkjklmDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzWnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("MAIBCDEFGHhIJMNOP") == "mckbcdgfghHkjmnqp")){ tests_passed++; } total_tests++;

    if((encode("VPaOCduqGtlaaay") == "vpCqcDWQgTLCCCY")){ tests_passed++; } total_tests++;

    if((encode("lazylazythee") == "LCZYLCZYTHGG")){ tests_passed++; } total_tests++;

    if((encode("QwerAEIOeioutyujumpsiopasDfsghklzXcVbnm") == "qWGRcgkqGKQWTYWJWMPSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyztwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("ColazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzempROmise") == "cQLCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGMPrqMKSG")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEFGHIJjumpsKLMNOPQRSTUV") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjJWMPSklmnqpqrstwv")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcVhbnm") == "qWGRTYWKQPCSdFGHJKLZxCvHBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyxzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYXZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("ABCcAtOwNejuTHEabcdedogfgJKLMNOPQRSTUVWXClazyompROmiseYZmpsrSTANDArDMAGNOLiAsDEFGHhcdefghijklmnopqrstulvwxyz") == "cbcCcTqWnGJWthgCBCDGDQGFGjklmnqpqrstwvwxcLCZYQMPrqMKSGyzMPSRstcndcRdmcgnqlKcSdgfghHCDGFGHKJKLMNQPQRSTWLVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("AEAabTheTIOUaeiou") == "cgcCBtHGtkqwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("ovQwertyuiopasDfghVbnmer") == "QVqWGRTYWKQPCSdFGHvBNMGR")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTABCsDEFGHhcdefghijklmnopqrstulvwxyzGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcbcSdgfghHCDGFGHKJKLMNQPQRSTWLVWXYZghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompRabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZOmiseuTUVWXYZabcdefghijklmnopqrstuvwxyzsiopasDfsghklzXcVbnm") == "qWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("QwertyujumpsiopaseDfsghklzXcVbnm") == "qWGRTYWJWMPSKQPCSGdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("eIOIUaeiou") == "GkqkwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijPQRSTUVWXCompROmiseYZmps") == "JWthgCBCDGDQGFGHKJpqrstwvwxcQMPrqMKSGyzMPS")){ tests_passed++; } total_tests++;

    if((encode("the") == "THG")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijkmlmnopqrZstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CBCDGFGHKJKMLMNQPQRzSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("CompROmise") == "cQMPrqMKSG")){ tests_passed++; } total_tests++;

    if((encode("cobV") == "CQBv")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsipopasDfsghklzXcVbnm") == "TqWGRTYWJGWMPSKPQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnojpqrstuivwxyzABCDEFGWiTH") == "cCBCDGFGHKJKLMNQJPQRSTWKVWXYZcbcdgfgwKth")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeioabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZuzABCDEFGHIJKLUVWXYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGKQCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzWZcbcdgfghkjklwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcUdefghijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCwDGFGHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("AabQwertyuiozpasoAEIOeioCompROmiseuDfghjklzXcVbnmThe") == "cCBqWGRTYWKQZPCSQcgkqGKQcQMPrqMKSGWdFGHJKLZxCvBNMtHG")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTabcdefghijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstCBCDGFGHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstucAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNalaQwertyujumpsiopasDfsghklzXcVbnmayerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnCLCqWGRTYWJWMPSKQPCSdFSGHKLZxCvBNMCYGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZYZ") == "CBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxzyz")){ tests_passed++; } total_tests++;

    if((encode("VPaOCqduqGt") == "vpCqcQDWQgT")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuvwxXyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrsVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXxYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJZKLMNXOPQRSQwertMyuiopasDXfghjklzXcVbnmmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjzklmnxqpqrsqWGRTmYWKQPCSdxFGHJKLZxCvBNMMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZYZCompROmmise") == "CBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxzyzcQMPrqMMKSG")){ tests_passed++; } total_tests++;

    if((encode("AoEEIOeiou") == "cQggkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIdJKLMNOPQRSTUWiTHMNbOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkDjklmnqpqrstwwKthmnBqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUs") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSgfghkjklmnqpqrstwwKthmnqpqrstwS")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnCopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZYZ") == "CBCDGFGHbKJKLMNcQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxzyz")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogovQwertyuiopasDfghjklzXcVbnmerseYZmps") == "JWthgCBCDGDQGQVqWGRTYWKQPCSdFGHJKLZxCvBNMGRSGyzMPS")){ tests_passed++; } total_tests++;

    if((encode("CompCompROmiseROmHmise") == "cQMPcQMPrqMKSGrqMhMKSG")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijQklmnAIBCDEFGHhIJMNOPopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJqKLMNckbcdgfghHkjmnqpQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYYZabcdefghijQklmnAIBCDEFGHhIJMNOPopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyyzCBCDGFGHKJqKLMNckbcdgfghHkjmnqpQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrabcdefvghijkmlmnopqrZstuvwxyzABCDEFTHEYZstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRCBCDGFVGHKJKMLMNQPQRzSTWVWXYZcbcdgfthgyzSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("AoIEIOeiou") == "cQkgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("ABCsDEFGHhcdefghijkslmnopqrstulxvwxyz") == "cbcSdgfghHCDGFGHKJKSLMNQPQRSTWLXVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXZYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxzyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("lalazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzeaay") == "LCLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGCCY")){ tests_passed++; } total_tests++;

    if((encode("bcobV") == "BCQBv")){ tests_passed++; } total_tests++;

    if((encode("No") == "nQ")){ tests_passed++; } total_tests++;

    if((encode("AoEQwertyujumpsiopasDfghkllzXcVbnmIOeiou") == "cQgqWGRTYWJWMPSKQPCSdFGHKLLZxCvBNMkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstIuvwxyzABCDEFXGHIJWOLGrsnwKLMNOPQRSTUVWXYYZ") == "CBCDGFGHKJKLMNQPQRSTkWVWXYZcbcdgfxghkjwqlgRSNWklmnqpqrstwvwxyyz")){ tests_passed++; } total_tests++;

    if((encode("MAIBCDEFGHhIJBMNOP") == "mckbcdgfghHkjbmnqp")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeQwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyzsiopasDfsghklzXcVbnmiouzABCDEFGHIJKLUVWYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGqWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSKQPCSdFSGHKLZxCvBNMKQWZcbcdgfghkjklwvwyz")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJWOLGrsnKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjwqlgRSNklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("fox") == "FQX")){ tests_passed++; } total_tests++;

    if((encode("lazytAabTheWiTH") == "LCZYTcCBtHGwKth")){ tests_passed++; } total_tests++;

    if((encode("QATheopasoDfgohjklzXcVbnm") == "qctHGQPCSQdFGQHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("") == "")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTpqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("dogcdefghijklmnopqrstuvwxyzABCDEUVWXYZuhABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzeopqrstuvwxyzABCDEFGHIdJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "DQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxyzWHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGQPQRSTWVWXYZcbcdgfghkDjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("THEabcdeabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZdogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "thgCBCDGCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("lazyAabcdefghijklmnopqrstuvwxyzABCDEBFGHIJjumpsKLMNOPQRSTUVWXYZuthABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMAabThexyze") == "LCZYcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgbfghkjJWMPSklmnqpqrstwvwxyzWTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmcCBtHGXYZG")){ tests_passed++; } total_tests++;

    if((encode("veer") == "VGGR")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiozpasoDfghjklzrXcVbnm") == "qWGRTYWKQZPCSQdFGHJKLZRxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("QATheopasoDfApROmiseuzXcVbnm") == "qctHGQPCSQdFcPrqMKSGWZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("AEAabTheabcdedogfgWiTHhijklmnopqrstuvwxyxzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZIOUaeiou") == "cgcCBtHGCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYXZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzkqwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("AoEEIOeioIu") == "cQggkqGKQkW")){ tests_passed++; } total_tests++;

    if((encode("mdKj") == "MDkJ")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLVMNXOPQRSQwertMyuiopasDfghjklzXcVXbnmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklvmnxqpqrsqWGRTmYWKQPCSdFGHJKLZxCvxBNMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmQwecAtOwNalaQwertyujumpsiopasDfsghklzXcVbnmayerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnmnopqrstuvwxyAEIOeioabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZuzABCDEFGHIJKLUVWXYZ") == "CBCDGFGHKJKLMqWGCcTqWnCLCqWGRTYWJWMPSKQPCSdFSGHKLZxCvBNMCYGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNMNQPQRSTWVWXYcgkqGKQCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzWZcbcdgfghkjklwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijAklmnopqrstuvwxyAEIOeiouzAbBCDEFGHIJKLUVWXYZ") == "CBCDGFGHKJcKLMNQPQRSTWVWXYcgkqGKQWZcBbcdgfghkjklwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeioabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGKQCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmyz")){ tests_passed++; } total_tests++;

    if((encode("dogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNabcnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZZu") == "DQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnCBCNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzzW")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopgqrstuvwxyAEIOeiouzABCDEFGHIJKLUVWYZ") == "CBCDGFGHKJKLMNQPGQRSTWVWXYcgkqGKQWZcbcdgfghkjklwvwyz")){ tests_passed++; } total_tests++;

    if((encode("abcfoxdEefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CBCFQXDgGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuvwxXyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrsVWXCompROmiseYZlajuumpszayjum") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXxYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSvwxcQMPrqMKSGyzLCJWWMPSZCYJWM")){ tests_passed++; } total_tests++;

    if((encode("avMAIBCDEFGHhIJBMNOPxyzABCDEFWGHIJKLMNOPQRSTUVWXYZ") == "CVmckbcdgfghHkjbmnqpXYZcbcdgfwghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrestuvwxyAEIOeiouzABCDEFGHIJKLUVWYZ") == "CBCDGFGHKJKLMNQPQRGSTWVWXYcgkqGKQWZcbcdgfghkjklwvwyz")){ tests_passed++; } total_tests++;

    if((encode("ABCDEtFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABzCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgTfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbZcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("lajusumpszay") == "LCJWSWMPSZCY")){ tests_passed++; } total_tests++;

    if((encode("THe") == "thG")){ tests_passed++; } total_tests++;

    if((encode("dogBCDEFGHhIJKLMNOPQRSTUVWXYZabcdefghijklmnopXYZ") == "DQGbcdgfghHkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPQRSTUVWXYZ") == "CBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abTcdedogfghijklmnopqrgstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLLMNOPQRSABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyzTUVWXCompROmiseYZ") == "CBtCDGDQGFGHKJKLMNQPQRGSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzkllmnqpqrscbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnlazytAabThefghijAklmnopqrstuvwxyAEIOeiouzAbBCDEFGHIJKLUVWXYZAoEIOeiou") == "CBCDGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNLCZYTcCBtHGFGHKJcKLMNQPQRSTWVWXYcgkqGKQWZcBbcdgfghkjklwvwxyzcQgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpsiopausDfsghklzXcVbnm") == "qWGRTYWJGWMPSKQPCWSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("avbcmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CVBCMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("juwmps") == "JWWMPS")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTABCsDEFGHhcdefghijklmnopqrstulvwxyzGHJIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcbcSdgfghHCDGFGHKJKLMNQPQRSTWLVWXYZghjkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("lzayjumpsajumzayThe") == "LZCYJWMPSCJWMZCYtHG")){ tests_passed++; } total_tests++;

    if((encode("QwertyujumpsiopaseDfsghklzuXcVbnm") == "qWGRTYWJWMPSKQPCSGdFSGHKLZWxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnlazytAabThefghijAklmnopqrstuvwxyAEIOeiouzAbBCDEFGHIJKLUBVWXYZAoEIOeiou") == "CBCDGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNLCZYTcCBtHGFGHKJcKLMNQPQRSTWVWXYcgkqGKQWZcBbcdgfghkjklwbvwxyzcQgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYQwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijpasDfghjklzXWiTHlcVbnmZabcdefghijpasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyqWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJPCSdFGHJKLZxwKthLCvBNMzCBCDGFGHKJPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("AEIOUaeabcdefghijklmnopgqrstuvwxyAEIOeiouzABCDEFGHIJKLUVWYZiou") == "cgkqwCGCBCDGFGHKJKLMNQPGQRSTWVWXYcgkqGKQWZcbcdgfghkjklwvwyzKQW")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijklmnopqrstuvwxyzABCDEEFGHIJKLMNvOPQRSTUVWXCompROmiseYZms") == "JWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdggfghkjklmnVqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("THEabcdedogfghijkabcdedogfghijklmnopqrstuvwxyzABCDEFabcdefghijklmnoupqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "thgCBCDGDQGFGHKJKCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfCBCDGFGHKJKLMNQWPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyzLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghabTcdedogfghijklmnopqrstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZ") == "CBCDGFGHCBtCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvkjklmnqpqrstwvwxyzWnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpABCiseuTUVWXYZabcdefghijklmnopqrstuvwxyzsiopasDfsghklzXcVbnm") == "qWGRTYWJGWMPcbcKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfgJKLMNOPQRVWXCompROmiseYdZmps") == "JWthgCBCDGDQGFGjklmnqpqrvwxcQMPrqMKSGyDzMPS")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpsiopausDfsghklabcdedogfghijklmnopqrstuvwxyzABCDEFabcdefghijklmnoupqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZcVbnm") == "qWGRTYWJGWMPSKQPCWSdFSGHKLCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfCBCDGFGHKJKLMNQWPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyzCvBNM")){ tests_passed++; } total_tests++;

    if((encode("QwertyujumplazythABCDEFGHhIJKLMNjuTHEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZmpsPQRSabcdefghBijklmnopqrstuvwxabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXComovQwertyuiopasDfghjklzXcVbnmerpROmiseYZTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzesiopasDfghklzXcVbnm") == "qWGRTYWJWMPLCZYTHcbcdgfghHkjklmnJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMPSpqrsCBCDGFGHbKJKLMNQPQRSTWVWXCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMQVqWGRTYWKQPCSdFGHJKLZxCvBNMGRPrqMKSGyztwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGSKQPCSdFGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEUVWXYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSaThe") == "LCZYTHcbcdgfghHkjklmnqpqrsCtHG")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiozpasoAEIOeioCfompROmiseuDfghjklzXcVbnm") == "qWGRTYWKQZPCSQcgkqGKQcFQMPrqMKSGWdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLthepROmiseuTUVWXYZabcdefghijklmnopqrstuvwyz") == "cbcdgfghkjklTHGPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWYZ")){ tests_passed++; } total_tests++;

    if((encode("ABabcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPQRSTUVWXYZCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbCBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpqrstwvwxyzcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("MAIBCDEFTHEabcdeabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZdogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZGHhIJMNOP") == "mckbcdgfthgCBCDGCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzghHkjmnqp")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnlazytAabThe") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNLCZYTcCBtHG")){ tests_passed++; } total_tests++;

    if((encode("lazyAThethABCDEFGHhIJWOLGrsnKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYctHGTHcbcdgfghHkjwqlgRSNklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijPQRSTUVWX") == "JWthgCBCDGDQGFGHKJpqrstwvwx")){ tests_passed++; } total_tests++;

    if((encode("zJ") == "Zj")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYYZabcdefghijQkDlmnAIBCDEFGHhIJMNOPopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyyzCBCDGFGHKJqKdLMNckbcdgfghHkjmnqpQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("dogBCDEYZabcdefghijklXYZ") == "DQGbcdgyzCBCDGFGHKJKLxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnlazytAabThefghijAklmnopqrstuvwxyAEIOeiouDzAbBCDEFGHIJKLUVWXYZAoEIOeiou") == "CBCDGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNLCZYTcCBtHGFGHKJcKLMNQPQRSTWVWXYcgkqGKQWdZcBbcdgfghkjklwvwxyzcQgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopyPQRSTUV") == "cCBCDGFGHKJKLMNQPYpqrstwv")){ tests_passed++; } total_tests++;

    if((encode("VPaOCduqGtlauaay") == "vpCqcDWQgTLCWCCY")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrsTHEabcdeabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZdogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZtuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSthgCBCDGCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDoEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdQgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("vJXLnrSY") == "VjxlNRsy")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuxyabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZaROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZztABCDEFGHIJKLMNOPQWXYZ") == "CBCDGFGHKJKLMNQPQRSTWXYCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzCrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzZTcbcdgfghkjklmnqpqwxyz")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTVPaOCduqGtlauaayUtVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtvpCqcDWQgTLCWCCYwTvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("WiTH") == "wKth")){ tests_passed++; } total_tests++;

    if((encode("WOOLGrsn") == "wqqlgRSN")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvlazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzewxyzABCDEFGHIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZ") == "CBCDGFGHbKJKLMNQPQRSTWVLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGWXYZcbcdgfghkjklmnqpqrstwvwxyzWnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnoAabQwertyQwertyuiocAtOwNerSTANDArDMAGNOLiAspasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPQSRSTUVWXYZ") == "CBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQCcTqWnGRstcndcRdmcgnqlKcSPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpqsrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUrVWXYZabcCdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwRvwxyzCBCcDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfghijklmnopqrstuvwxyzABCDEFabcdabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZYZefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZ") == "CBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfCBCDCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxzyzGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyz")){ tests_passed++; } total_tests++;

    if((encode("avMAIBCDEFMGHhIJBMNOPxyzABCDEFWGHIJKLMNOPQRSTUVCWXYZ") == "CVmckbcdgfmghHkjbmnqpXYZcbcdgfwghkjklmnqpqrstwvcwxyz")){ tests_passed++; } total_tests++;

    if((encode("avbcdefghijklmnopqrstLMNOPQRSTUVWXYZ") == "CVBCDGFGHKJKLMNQPQRSTlmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabQcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBqCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("QwecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefgphijklmnopqrstuvwxyzsrtyuiopasDfghjklzXlcVbnm") == "qWGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGPHKJKLMNQPQRSTWVWXYZSRTYWKQPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxuyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXWYZG")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompRabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAabThe") == "qWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcCBtHG")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompRabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRmAabThe") == "qWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrMcCBtHG")){ tests_passed++; } total_tests++;

    if((encode("juTHabTcdedogfghijklmnopqrgstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLLMNOPQRSTUVWXCompROmiseYZEabcYdedogfgJKLMNOPQRVWXCompROmiseYdZmps") == "JWthCBtCDGDQGFGHKJKLMNQPQRGSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzkllmnqpqrstwvwxcQMPrqMKSGyzgCBCyDGDQGFGjklmnqpqrvwxcQMPrqMKSGyDzMPS")){ tests_passed++; } total_tests++;

    if((encode("AAIBCDEFGHhIJMNOPoEIOABCDEFGHhIJKLMNOPQabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzu") == "cckbcdgfghHkjmnqpQgkqcbcdgfghHkjklmnqpqCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZW")){ tests_passed++; } total_tests++;

    if((encode("ovqulazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzQwertyuioKzpasoDfghjklzXcVbnmebrownickr") == "QVQWLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZqWGRTYWKQkZPCSQdFGHJKLZxCvBNMGBRQWNKCKR")){ tests_passed++; } total_tests++;

    if((encode("AabcbcobVdefghijklmnopyPQRSTUV") == "cCBCBCQBvDGFGHKJKLMNQPYpqrstwv")){ tests_passed++; } total_tests++;

    if((encode("ABCcAtOwNerSTANDArDMAGNOLiAsDEFGHhcdefghijklmnjuTHEabcdedogfghijklmnopqrstuvwxyzABCDEEFGHIJKLMNOPQRSTUVWXCompROmiseYZmsopqrstulvwxyz") == "cbcCcTqWnGRstcndcRdmcgnqlKcSdgfghHCDGFGHKJKLMNJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdggfghkjklmnqpqrstwvwxcQMPrqMKSGyzMSQPQRSTWLVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("zy") == "ZY")){ tests_passed++; } total_tests++;

    if((encode("lajuovQwertyuiopasDfghVbnmermpszayThe") == "LCJWQVqWGRTYWKQPCSdFGHvBNMGRMPSZCYtHG")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmise") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSG")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcsVhbnm") == "qWGRTYWKQPCSdFGHJKLZxCSvHBNM")){ tests_passed++; } total_tests++;

    if((encode("lzayjumpsajumpsabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabQcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZWXCompROmiseYZzayThe") == "LZCYJWMPSCJWMPSCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBqCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzwxcQMPrqMKSGyzZCYtHG")){ tests_passed++; } total_tests++;

    if((encode("jcuTHEabcdedogmfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZms") == "JCWthgCBCDGDQGMFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpsiopasbDfsghklzXcVbnm") == "qWGRTYWJGWMPSKQPCSBdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstguvwxyzABCDEFGHIJKLMNXOPQRSQwertMyabcdedogfgWiTHhijklmnopqrstuMNXOPQRSTUVWXCompROmiseYZlzXcVbnmmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTGWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYCBCDGDQGFGwKthHKJKLMNQPQRSTWmnxqpqrstwvwxcQMPrqMKSGyzLZxCvBNMMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsiopasDfsghklzXcVbnabcfoxdEefghBijklmnopqrsdogBCDEFGHhIJabcnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzXYZumpstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZm") == "TqWGRTYWJGWMPSKQPCSdFSGHKLZxCvBNCBCFQXDgGFGHbKJKLMNQPQRSDQGbcdgfghHkjCBCNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZxyzWMPSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzM")){ tests_passed++; } total_tests++;

    if((encode("THTE") == "thtg")){ tests_passed++; } total_tests++;

    if((encode("ABCcAtOwNerSTANDArDMAGNOLiAsDEFGHhcdefghijklmnjuTHEabcdestuvwxyzABCDEEFGHIJKLMNOPQRSTUVWXCompROmiseYZmsopqrstulvwxyz") == "cbcCcTqWnGRstcndcRdmcgnqlKcSdgfghHCDGFGHKJKLMNJWthgCBCDGSTWVWXYZcbcdggfghkjklmnqpqrstwvwxcQMPrqMKSGyzMSQPQRSTWLVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijAklmnopqrstuvwxIyAEIOeiouzAbBCDEFGHIJKLUVWXYZ") == "CBCDGFGHKJcKLMNQPQRSTWVWXkYcgkqGKQWZcBbcdgfghkjklwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("lazyAThethABCDEFGHhIJWOLGrsnKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyAEAabTheIOUaeiouze") == "LCZYctHGTHcbcdgfghHkjwqlgRSNklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYcgcCBtHGkqwCGKQWZG")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTMAIBCDEFGHhIJMNOPUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstmckbcdgfghHkjmnqpwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiozpasoDfghjklzrXcoVbnm") == "qWGRTYWKQZPCSQdFGHJKLZRxCQvBNM")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijklmnopqrKstuvwxyzABCDEFGHIsJKLMNOPQRSTUVWXCompROmiseYZmps") == "JWthgCBCDGDQGFGHKJKLMNQPQRkSTWVWXYZcbcdgfghkSjklmnqpqrstwvwxcQMPrqMKSGyzMPS")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfghijklmnopqABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijQklmnopqrstuvwxyzCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBCDGDQGFGHKJKLMNQPQcbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJqKLMNQPQRSTWVWXYZcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("TheVPaOCduqGt") == "tHGvpCqcDWQgT")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQFRSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqfrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrestuvwxyAEIOeiouzABuCDEFGHIJKLUVWYZ") == "CBCDGFGHKJKLMNQPQRGSTWVWXYcgkqGKQWZcbWcdgfghkjklwvwyz")){ tests_passed++; } total_tests++;

    if((encode("jups") == "JWPS")){ tests_passed++; } total_tests++;

    if((encode("AabQwertyuiozpasoAEIOeiABabcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasocDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPQRSTUVWXYZCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcsdefghijklmnopqrstuvwxyzjklzXcVbnmThe") == "cCBqWGRTYWKQZPCSQcgkqGKcbCBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQCdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpqrstwvwxyzcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCSDGFGHKJKLMNQPQRSTWVWXYZJKLZxCvBNMtHG")){ tests_passed++; } total_tests++;

    if((encode("RJMaIfKpK") == "rjmCkFkPk")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzebrown") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGBRQWN")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjkljzXcsVhbnm") == "qWGRTYWKQPCSdFGHJKLJZxCSvHBNM")){ tests_passed++; } total_tests++;

    if((encode("lazyAabcdefghijklmnopqrstuvwxyzABCDEBFGHIJjumpsKLUMNOPQRSTUVWXYZuthABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMAabThexyze") == "LCZYcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgbfghkjJWMPSklwmnqpqrstwvwxyzWTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmcCBtHGXYZG")){ tests_passed++; } total_tests++;

    if((encode("QATheohpasoDfghjklzXcVbnm") == "qctHGQHPCSQdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsiopaabcdefghBijklmnopqrstuvlazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzewxyzABCDEFGHIJKLMdogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZabcfoxdEefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZVbnm") == "TqWGRTYWJGWMPSKQPCCBCDGFGHbKJKLMNQPQRSTWVLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGWXYZcbcdgfghkjklmDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzWnqpqrstwvwxyzCBCFQXDgGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzvBNM")){ tests_passed++; } total_tests++;

    if((encode("ColazythABCDEFGHQwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYQwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijpasDfghjklzXWiTHlcVbnmZabcdefghijpasDfghjklzXlcVbnmhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzempRtQwertyujgumpsipopasDfsghklzXcVbnmOmise") == "cQLCZYTHcbcdgfghqWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyqWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJPCSdFGHJKLZxwKthLCvBNMzCBCDGFGHKJPCSdFGHJKLZxLCvBNMHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGMPrTqWGRTYWJGWMPSKPQPCSdFSGHKLZxCvBNMqMKSG")){ tests_passed++; } total_tests++;

    if((encode("zzy") == "ZZY")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsiopasDfsmghklzXcVbnm") == "TqWGRTYWJGWMPSKQPCSdFSMGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuDMdogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWover") == "CBCDGFGHbKJKLMNQPQRSTWdmDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwQVGR")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijQklmnAIBCDEFGHhIJMNOnPopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJqKLMNckbcdgfghHkjmnqNpQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("EAoEEIOeioIu") == "gcQggkqGKQkW")){ tests_passed++; } total_tests++;

    if((encode("fghjkljzXcsVhbnm") == "FGHJKLJZxCSvHBNM")){ tests_passed++; } total_tests++;

    if((encode("zJQwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijpasDfghjklzXlcVbnm") == "ZjqWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJPCSdFGHJKLZxLCvBNM")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiozpasoAEIOeioCompROmiseuDfghjpROmise") == "qWGRTYWKQZPCSQcgkqGKQcQMPrqMKSGWdFGHJPrqMKSG")){ tests_passed++; } total_tests++;

    if((encode("AEIOUaeabcdefghijklmnopgqrstuvwxyAEIOeiouzABCDEYZiou") == "cgkqwCGCBCDGFGHKJKLMNQPGQRSTWVWXYcgkqGKQWZcbcdgyzKQW")){ tests_passed++; } total_tests++;

    if((encode("abcdabcdedogfgWiTHhijklmnopqrstuRvwxXyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrsVWXCompROmiseYZ") == "CBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWrVWXxYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("QwertyujlazyAThethABCDEFGHhIJWOLGrsnKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzeumpsiopasDfghklzXcVbnm") == "qWGRTYWJLCZYctHGTHcbcdgfghHkjwqlgRSNklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGWMPSKQPCSdFGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abTcdedogfghijklmnopqrstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDovQwertyuiopasDfghVbnmerEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLMNOPQRSTUVWXCompROmiseYZ") == "CBtCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdQVqWGRTYWKQPCSdFGHvBNMGRgfghkjklmnqpqrstwvwxcQMPrqMKSGyzklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("juTHabTcdedogfgheijklmnopqrgstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLLMNOPQRSTUVWXCompROmiseYZEabcYdedogfgJKLMNOPQRVWXCompROmiseYdZmps") == "JWthCBtCDGDQGFGHGKJKLMNQPQRGSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzkllmnqpqrstwvwxcQMPrqMKSGyzgCBCyDGDQGFGjklmnqpqrvwxcQMPrqMKSGyDzMPS")){ tests_passed++; } total_tests++;

    if((encode("THabcdedogfghiabcdefghijklmnopqrestuvwxyAEIOeiouzABuCDEFGHIJKLUVWYZjkLlmnopQwertyuiopasDfghjkljzXcsVhbnmqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZE") == "thCBCDGDQGFGHKCBCDGFGHKJKLMNQPQRGSTWVWXYcgkqGKQWZcbWcdgfghkjklwvwyzJKlLMNQPqWGRTYWKQPCSdFGHJKLJZxCSvHBNMQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzg")){ tests_passed++; } total_tests++;

    if((encode("ColazythABCDEFGzHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzempROmise") == "cQLCZYTHcbcdgfgZhHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGMPrqMKSG")){ tests_passed++; } total_tests++;

    if((encode("AabcdefNghijklmnopqrstuvwxyzABCDEBFGHIJjumpsKLMNOPQRSTUVWXYZu") == "cCBCDGFnGHKJKLMNQPQRSTWVWXYZcbcdgbfghkjJWMPSklmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("quick") == "QWKCK")){ tests_passed++; } total_tests++;

    if((encode("juwmpjs") == "JWWMPJS")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsiopasDfsghklzXcVbnmAabThe") == "TqWGRTYWJGWMPSKQPCSdFSGHKLZxCvBNMcCBtHG")){ tests_passed++; } total_tests++;

    if((encode("CABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrabcdefvghijkmlmnopqrZstuvwxyzABCDEFTHEYZstuvwxyzompCompROmiseoROmHmise") == "ccbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRCBCDGFVGHKJKMLMNQPQRzSTWVWXYZcbcdgfthgyzSTWVWXYZQMPcQMPrqMKSGQrqMhMKSG")){ tests_passed++; } total_tests++;

    if((encode("QwertyujlazyAThethABCDEFGHhIfJWOLGrsnKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzeumpsiopasDfghklzXcVbnm") == "qWGRTYWJLCZYctHGTHcbcdgfghHkFjwqlgRSNklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGWMPSKQPCSdFGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabQcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZWXCompROmiseYZdoog") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBqCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzwxcQMPrqMKSGyzDQQG")){ tests_passed++; } total_tests++;

    if((encode("WrOOLGrsn") == "wRqqlgRSN")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJjuTHEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZmpsKLMNOPQRSTUVWXYYZabcdefghijQkDlmnAIBCDEFGHhIJMNOPopqrstuvwxyz") == "cbcdgfghkjJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMPSklmnqpqrstwvwxyyzCBCDGFGHKJqKdLMNckbcdgfghHkjmnqpQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstucAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsvwxyzAuBCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSVWXYZcWbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQThe") == "cbcdgfghkjklmnqpqtHG")){ tests_passed++; } total_tests++;

    if((encode("juTHabTcdedogfgheijklmnopqrgstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLLMNOPQRSTUVWXCompROmiseYZEabcYdedogQwertyujumplazythABCDEFGHhIJKLMNjuTHEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZmpsPQRSabcdefghBijklmnopqrstuvwxabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXComjuwmpsovQwertyuiopasDfghjklzXcVbnmerpROmiseYZTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzesiopasDfghklzXcVbnmfgJKLMNOPQRVWXComphROmiseYdZmps") == "JWthCBtCDGDQGFGHGKJKLMNQPQRGSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzkllmnqpqrstwvwxcQMPrqMKSGyzgCBCyDGDQGqWGRTYWJWMPLCZYTHcbcdgfghHkjklmnJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMPSpqrsCBCDGFGHbKJKLMNQPQRSTWVWXCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMJWWMPSQVqWGRTYWKQPCSdFGHJKLZxCvBNMGRPrqMKSGyztwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGSKQPCSdFGHKLZxCvBNMFGjklmnqpqrvwxcQMPHrqMKSGyDzMPS")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSAEIOeioCompROmfiseuTdogABCDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZlaayTUVWXYZabcdefghijQklmnAIBCDEFGHhIJMNOPopqrstuvwxyabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyuiopasDfghjklzXcVbnmTUVWXCompROjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsmiseYZzUtVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghkjklmnqpqrscgkqGKQcQMPrqMFKSGWtDQGcbcdgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyzLCCYtwvwxyzCBCDGFGHKJqKLMNckbcdgfghHkjmnqpQPQRSTWVWXYCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYWKQPCSdFGHJKLZxCvBNMtwvwxcQMPrqJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSMKSGyzZwTvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogmfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiQseYZms") == "JWthgCBCDGDQGMFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKqSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompRabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLAEIOeioCompROmiseuGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZOmiseuTUVWXYZabcdefghijklmnopqrstuvwxyzsiopasDfsghklzXcVbnm") == "qWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlcgkqGKQcQMPrqMKSGWgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSKQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdefghabTcdedogfghijklmnopqrstuvwxyzABCDEFGHIJabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVIJKLMNOPQRSTUVWXYZuNOPQdogBCDEFGHhIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzRSTUVWXYZ") == "CBCDGFGHCBtCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvkjklmnqpqrstwvwxyzWnqpqDQGbcdgfghHkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompRQwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompRabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAabTheOmiseYZ") == "CBCDGDQGFGwKthHKJKLMNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcCBtHGqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("ColazythABCDEFGHQwecAtOwNerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYQwecAtOwONerSTANDArDMAGNquickOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijpasDfghjklzXWiTHlcVbnmZabcdefghijpasDfghjklzXlcVbnmhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzempRtQwertyujgumpsipopasDfsghklzXcVbnmOmise") == "cQLCZYTHcbcdgfghqWGCcTqWnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyqWGCcTqWqnGRstcndcRdmcgnQWKCKqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJPCSdFGHJKLZxwKthLCvBNMzCBCDGFGHKJPCSdFGHJKLZxLCvBNMHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGMPrTqWGRTYWJGWMPSKPQPCSdFSGHKLZxCvBNMqMKSG")){ tests_passed++; } total_tests++;

    if((encode("abcdedABCcAtOwNerSTANDArDMAGNOLiAsDEFGHhcdefghijklmnjuTHEabcdestuvwxyzABCDEEFGHIJKLMNOPQRSTUVWXCompROmiqulazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYWZTUVWXYZabcdefghijklmnopqrstuvwxyzQwertyuioKzpasoDfghjklzXcVbnmebrownicktulvwxyzogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyuiopasDXfghjklzXcVbnmmTUVWXCompROmiseYZ") == "CBCDGDcbcCcTqWnGRstcndcRdmcgnqlKcSdgfghHCDGFGHKJKLMNJWthgCBCDGSTWVWXYZcbcdggfghkjklmnqpqrstwvwxcQMPrqMKQWLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxywztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZqWGRTYWKQkZPCSQdFGHJKLZxCvBNMGBRQWNKCKTWLVWXYZQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYWKQPCSdxFGHJKLZxCvBNMMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("juups") == "JWWPS")){ tests_passed++; } total_tests++;

    if((encode("iw") == "KW")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijknlmnojpqrstuvwxyzABCDEFGWiTH") == "cCBCDGFGHKJKNLMNQJPQRSTWVWXYZcbcdgfgwKth")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijkabcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPQRSTUVWXYZlmnojpqrstuivwxyzABCDEFGWiTH") == "cCBCDGFGHKJKCBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpqrstwvwxyzLMNQJPQRSTWKVWXYZcbcdgfgwKth")){ tests_passed++; } total_tests++;

    if((encode("abcdecAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnlazytAabThefghijAklmnopqrstuvwxyAEIOeiouzAbBCDEFGHIJKLUu") == "CBCDGCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNLCZYTcCBtHGFGHKJcKLMNQPQRSTWVWXYcgkqGKQWZcBbcdgfghkjklwW")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefglmnAIBCDEFGHhIJMNOPopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFGLMNckbcdgfghHkjmnqpQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("lazythABCpDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstucAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijklmnopqrstuvwxyzABCDjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsEFGHIJKLMNOPQRSTUWiTHMNVPaOCduqGtOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcPdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSgfghkjklmnqpqrstwwKthmnvpCqcDWQgTqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("AEAahbTheIOUaeiou") == "cgcCHBtHGkqwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("jcuTHEabcdedoVWXCompROmiseYZms") == "JCWthgCBCDGDQvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("lajuovABabcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPQRSTUVWXYZCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyzQwertyuioColazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzempROmisepasDfghVbnmermpszayThe") == "LCJWQVcbCBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpqrstwvwxyzcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZqWGRTYWKQcQLCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGMPrqMKSGPCSdFGHvBNMGRMPSZCYtHG")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpsiopausDfsghklabcdedogfghijklmnopqrstuvwxyzABCDEFabcdefghijklmnoupqrstuvwxyzABCLDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZcVbnm") == "qWGRTYWJGWMPSKQPCWSdFSGHKLCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfCBCDGFGHKJKLMNQWPQRSTWVWXYZcbcldgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyzCvBNM")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVabcdabcdedogfgWiTHhijklmnopqrjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvCBCDCBCDGDQGFGwKthHKJKLMNQPQRJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdefghByijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUrVWXYZabcCdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbYKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwRvwxyzCBCcDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("juhijklmnopqrstuvwxyzABCDEEFGHIJKLMNOPQRSTUVWXCompROmiseYZms") == "JWHKJKLMNQPQRSTWVWXYZcbcdggfghkjklmnqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogmfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiOseYZms") == "JWthgCBCDGDQGMFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKqSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("lazythoABCDEFGHhtuvwxyze") == "LCZYTHQcbcdgfghHTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcVbfjuwmpsoxnm") == "qWGRTYWKQPCSdFGHJKLZxCvBFJWWMPSQXNM")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOABCDEFGHIJKLMNOPQRSTUVWXYYZabcdefghijQklmnAIBCDEFGHhIJMNOPopqrstuvwxyzPQRSTUVWXZYZ") == "CBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqcbcdgfghkjklmnqpqrstwvwxyyzCBCDGFGHKJqKLMNckbcdgfghHkjmnqpQPQRSTWVWXYZpqrstwvwxzyz")){ tests_passed++; } total_tests++;

    if((encode("lajuovQwertyubiopasDfghVbnmermpszayThe") == "LCJWQVqWGRTYWBKQPCSdFGHvBNMGRMPSZCYtHG")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABAabThe") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcCBtHG")){ tests_passed++; } total_tests++;

    if((encode("abgcdefghijklmnopqrstuvwxyzABCDEUVWXYZ") == "CBGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRYSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrystwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("VaPaOCduqGtlauaay") == "vCpCqcDWQgTLCWCCY")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeioabccdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGKQCBCCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmyz")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijkabcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTepqrstuvwxAEIOUaeabcdefghijklmnopgqrstuvwxyAEIOeiouzABCDEYZiouyzABCDEFNOPQRSTUVWXYZlmnojpqrstuivwxyzABCDEFGWiTH") == "cCBCDGFGHKJKCBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtGPQRSTWVWXcgkqwCGCBCDGFGHKJKLMNQPGQRSTWVWXYcgkqGKQWZcbcdgyzKQWYZcbcdgfnqpqrstwvwxyzLMNQJPQRSTWKVWXYZcbcdgfgwKth")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcsVhhbnm") == "qWGRTYWKQPCSdFGHJKLZxCSvHHBNM")){ tests_passed++; } total_tests++;

    if((encode("ABCDEHeArTFGHIJKLMNOPQThe") == "cbcdghGcRtfghkjklmnqpqtHG")){ tests_passed++; } total_tests++;

    if((encode("WabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZYZCompROmmiseOLGrsn") == "wCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxzyzcQMPrqMMKSGqlgRSN")){ tests_passed++; } total_tests++;

    if((encode("QwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompRabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAXabThe") == "qWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcxCBtHG")){ tests_passed++; } total_tests++;

    if((encode("nQwertyuiozpasoDfghjklzXcVbnm") == "NqWGRTYWKQZPCSQdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("AEAaQwertyuiozpasoDfghjklzrXcVbnmbTheIOUaeiou") == "cgcCqWGRTYWKQZPCSQdFGHJKLZRxCvBNMBtHGkqwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("dogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNabcnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVCompROmiseYZZu") == "DQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnCBCNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvcQMPrqMKSGyzzW")){ tests_passed++; } total_tests++;

    if((encode("ababcdefghijklmnopqrstuvwxyAEIOeioabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabQcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZWXCompROmiseYZuzABCDEFGHIJKLUVWXYZcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZYZ") == "CBCBCDGFGHKJKLMNQPQRSTWVWXYcgkqGKQCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBqCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzwxcQMPrqMKSGyzWZcbcdgfghkjklwvwxyzCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxzyz")){ tests_passed++; } total_tests++;

    if((encode("avbcdefghijkdogcdefghijklmnopqrstuvwxyzABCDEUVWXYZuCDEFNOPQRSTUVWXYZlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CVBCDGFGHKJKDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxyzWcdgfnqpqrstwvwxyzLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("TTHTE") == "tthtg")){ tests_passed++; } total_tests++;

    if((encode("avbcdefghijLklmnopqrstLMNOPQRSTUVWXYZ") == "CVBCDGFGHKJlKLMNQPQRSTlmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("juAabAabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWiTHwmps") == "JWcCBcCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwwKthWMPS")){ tests_passed++; } total_tests++;

    if((encode("avbcmnopqrtstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "CVBCMNQPQRTSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArDMAGNOLABCDEFGHIJKLAabAabcdefghijcAtOwNerSTANDArDMAGNOLABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsklmnopqrstuvwxyzABCDjuTHEabcdedogfgJKLMNOPQRSTUVWXCompROmiseYZmpsEFGHIJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "CcTqWnGRstcndcRdmcgnqlcbcdgfghkjklcCBcCBCDGFGHKJCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSKLMNQPQRSTWVWXYZcbcdJWthgCBCDGDQGFGjklmnqpqrstwvwxcQMPrqMKSGyzMPSgfghkjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("ovqulazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABzXcVbnmebrownickr") == "QVQWLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbZxCvBNMGBRQWNKCKR")){ tests_passed++; } total_tests++;

    if((encode("QwertyujumpsiopaseDfsghklzuXcVbbnm") == "qWGRTYWJWMPSKQPCSGdFSGHKLZWxCvBBNM")){ tests_passed++; } total_tests++;

    if((encode("cVobV") == "CvQBv")){ tests_passed++; } total_tests++;

    if((encode("mdKtQwertyujgumpsipopasDfsghklzXcVbnmj") == "MDkTqWGRTYWJGWMPSKPQPCSdFSGHKLZxCvBNMJ")){ tests_passed++; } total_tests++;

    if((encode("hJ") == "Hj")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopzasDfghjkljzXcsVhbnm") == "qWGRTYWKQPZCSdFGHJKLJZxCSvHBNM")){ tests_passed++; } total_tests++;

    if((encode("WOOLGrLsn") == "wqqlgRlSN")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcVhbnmABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyz") == "qWGRTYWKQPCSdFGHJKLZxCvHBNMcbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEBFGHIJjumpsKLaMNOPQRSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgbfghkjJWMPSklCmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnoabcdefghijklmnopqrestuvwxyAEIOeiouzABuCDEFGHIJKLUVWYZpqrstuvwxyzABCDEBFGHIJjabgcdefghijklmnopqrstuvwxyzABCDEUVWXYZumpsKLMNOPQRSTUVWXYZu") == "cCBCDGFGHKJKLMNQCBCDGFGHKJKLMNQPQRGSTWVWXYcgkqGKQWZcbWcdgfghkjklwvwyzPQRSTWVWXYZcbcdgbfghkjJCBGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxyzWMPSklmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("dogcdefghijklmnopqrstuvwoxyzABCDEFGHIJKLMNOPQRSTUVWXYZulazythee") == "DQGCDGFGHKJKLMNQPQRSTWVWQXYZcbcdgfghkjklmnqpqrstwvwxyzWLCZYTHGG")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyzABCDEUVWXYMAIBCDEFGHhIJBMNOPZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxymckbcdgfghHkjbmnqpz")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasoDfghjklzXcVbnmVPaOCduqGt") == "qWGRTYWKQPCSQdFGHJKLZxCvBNMvpCqcDWQgT")){ tests_passed++; } total_tests++;

    if((encode("ovlsajuumpszayjumpser") == "QVLSCJWWMPSZCYJWMPSGR")){ tests_passed++; } total_tests++;

    if((encode("ovQweThe") == "QVqWGtHG")){ tests_passed++; } total_tests++;

    if((encode("AabQwertyuiozpasoAEIOeiABabcdefghijklmnoAabQweDrtyQwertyuiopasoDfghjklzXcVbnmuiozpasocDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPQRSTUVWXYZCDEFGHIJKLMNOPQRSAEIOeioCompReOmiseuTUVWXYZabcsdefghijklmnopqrstuvwxyzjklzXcVbnmThe") == "cCBqWGRTYWKQZPCSQcgkqGKcbCBCDGFGHKJKLMNQcCBqWGdRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQCdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpqrstwvwxyzcdgfghkjklmnqpqrscgkqGKQcQMPrGqMKSGWtwvwxyzCBCSDGFGHKJKLMNQPQRSTWVWXYZJKLZxCvBNMtHG")){ tests_passed++; } total_tests++;

    if((encode("ABabcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVfbnmTepqrstuvwxyzABCDEFNOPQRSTUVWXYZCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbCBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvFBNMtGPQRSTWVWXYZcbcdgfnqpqrstwvwxyzcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("dogcdAefghijklmnopqrstuvwxyzABCDEUVWXYZu") == "DQGCDcGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("dogcdefghijklmnopqrstuvwxyzABCDEUVWXYZuCDEFNOPQRSTUVWXYZ") == "DQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgwvwxyzWcdgfnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZaROmisWOLGrsneYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZztABCDEFGHIJKLMNOPQWXYZ") == "CBCDGFGHKJKLMNQPQSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzCrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzZTcbcdgfghkjklmnqpqwxyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijAklmnopqrstuvwxIyAEIOeiouzAbBCDEFGHjuTHEabcdedogfghijklmnopqrKstuvwxyzABCDEFGHIsJKLMNOPQRSTUVWXCompROmiseYZmpsIJKLUVWXYZ") == "CBCDGFGHKJcKLMNQPQRSTWVWXkYcgkqGKQWZcBbcdgfghJWthgCBCDGDQGFGHKJKLMNQPQRkSTWVWXYZcbcdgfghkSjklmnqpqrstwvwxcQMPrqMKSGyzMPSkjklwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQTABCcAtOwNerSTANDArDMAGNOLiAsDEFGHhcdefghijklmnjuTHEabcdedogfghijklmnopqrstuvwxyzABCDEEFGHIJKLMNOPQRSTUVWXCompROmiseYZmsopqrstulvwxyze") == "cbcdgfghkjklmnqpqtcbcCcTqWnGRstcndcRdmcgnqlKcSdgfghHCDGFGHKJKLMNJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdggfghkjklmnqpqrstwvwxcQMPrqMKSGyzMSQPQRSTWLVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("dogBCDEFGHhIJKLMNOPQRSTUVWXYZabcdefghijklmnopAoIEIOeiouZ") == "DQGbcdgfghHkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPcQkgkqGKQWz")){ tests_passed++; } total_tests++;

    if((encode("lajuumpszayjumabcdefghijklmnopqrstIuvwxyzABCDEFXGHIJWOLGrsnwKLMNOPQRSTUVWXYYZ") == "LCJWWMPSZCYJWMCBCDGFGHKJKLMNQPQRSTkWVWXYZcbcdgfxghkjwqlgRSNWklmnqpqrstwvwxyyz")){ tests_passed++; } total_tests++;

    if((encode("AAIBCDEFGHhIJMNOPoEIOeiQwertyujumplazythABCDEFGHhIJKLMNjuTHEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZmpsPQRSabcdefghBijklmnopqrstuvwxabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXComovQwertyuiopasDfghjklzXcVbnmerpROmiseYZTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzesiopasDfghklzXcVbnmou") == "cckbcdgfghHkjmnqpQgkqGKqWGRTYWJWMPLCZYTHcbcdgfghHkjklmnJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMPSpqrsCBCDGFGHbKJKLMNQPQRSTWVWXCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMQVqWGRTYWKQPCSdFGHJKLZxCvBNMGRPrqMKSGyztwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGSKQPCSdFGHKLZxCvBNMQW")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijkabcdefghijklmnoAabQwertyQwertyuiopasoDfghjklzXcVbnmuiozpasoDfghjklzXcVbnmTepqrstuvwxyzABCDEFNOPlaazQRSTUVWXYZlmnojpqrstuivwxyzABCDEFGWiTH") == "cCBCDGFGHKJKCBCDGFGHKJKLMNQcCBqWGRTYqWGRTYWKQPCSQdFGHJKLZxCvBNMWKQZPCSQdFGHJKLZxCvBNMtGPQRSTWVWXYZcbcdgfnqpLCCZqrstwvwxyzLMNQJPQRSTWKVWXYZcbcdgfgwKth")){ tests_passed++; } total_tests++;

    if((encode("abcdecAtOwNerSTANDArDMAQwertyuiopasDfghjklzXcVhbnmABCDEFGHIJKLMNOPQRSAEIOeioCompROmiseuTUVWXYZabcdefghijklmnopqrstuvwxyzGNOLABCDEFGHIJKLAabAabcdefghijklmnlazytAabThefghijAklmnopqrstuvwxyAEIOeiouDzAbBCDEFGHIJKLUVWXYZAoEIOeiou") == "CBCDGCcTqWnGRstcndcRdmcqWGRTYWKQPCSdFGHJKLZxCvHBNMcbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKSGWtwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZgnqlcbcdgfghkjklcCBcCBCDGFGHKJKLMNLCZYTcCBtHGFGHKJcKLMNQPQRSTWVWXYcgkqGKQWdZcBbcdgfghkjklwvwxyzcQgkqGKQW")){ tests_passed++; } total_tests++;

    if((encode("ABCDEtFGHhIJKLMovezzyrRSabcdefghBijklmnopqrstuvwxyzABzCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYiZabcdefghijklmnopqrstuvwxyz") == "cbcdgTfghHkjklmQVGZZYRrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbZcdgfghkjklmnqpqrstwvwxyztwvwxyKzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("ColazythABCDEFGzHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijnopqrstuvwxyzempROmise") == "cQLCZYTHcbcdgfgZhHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJNQPQRSTWVWXYZGMPrqMKSG")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsiopasDfsghklzXcVbnabcfoxdEefghBijklmnopqrsdogBCDEFGHhIJabcnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLMNOPQRSTUVWXYZabcdeTHEabcdeabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZdogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZfghijklmnopqrstuvwxyzXYZumpstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZm") == "TqWGRTYWJGWMPSKQPCSdFSGHKLZxCvBNCBCFQXDgGFGHbKJKLMNQPQRSDQGbcdgfghHkjCBCNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzklmnqpqrstwvwxyzCBCDGthgCBCDGCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzFGHKJKLMNQPQRSTWVWXYZxyzWMPSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzM")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcVihbnm") == "qWGRTYWKQPCSdFGHJKLZxCvKHBNM")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDNEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdngfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("labcdabcdedogfgWiTHhijklmnopqrstuvwxXyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZROmisWOLGrsneYZefghijklmnopqrsVWXCompROmiseYZaaay") == "LCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXxYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzrqMKSwqlgRSNGyzGFGHKJKLMNQPQRSvwxcQMPrqMKSGyzCCCY")){ tests_passed++; } total_tests++;

    if((encode("lazyABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijQklmnAIBCDEFGHhIJMNOnPopqrstuvwxyzlazythee") == "LCZYcbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJqKLMNckbcdgfghHkjmnqNpQPQRSTWVWXYZLCZYTHGG")){ tests_passed++; } total_tests++;

    if((encode("avbcmnopqrtstuvwxyzABCDEFGHIJKLMNOPFQRSTUVWXYZ") == "CVBCMNQPQRTSTWVWXYZcbcdgfghkjklmnqpfqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("CompCmHmise") == "cQMPcMhMKSG")){ tests_passed++; } total_tests++;

    if((encode("abTcdedoOgfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZ") == "CBtCDGDQqGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("vorver") == "VQRVGR")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfghijklmnOopqrstuvwxyzABCDEFaTUVWXCompROmYiseYZ") == "CBCDGDQGFGHKJKLMNqQPQRSTWVWXYZcbcdgfCtwvwxcQMPrqMyKSGyz")){ tests_passed++; } total_tests++;

    if((encode("dogABCDEFGHIJKLMNOPQRSTUVWXYZGHIJKLMNOPQRSTUVWXCompROmYiseYZlaay") == "DQGcbcdgfghkjklmnqpqrstwvwxyzghkjklmnqpqrstwvwxcQMPrqMyKSGyzLCCY")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsiopasDfsghklzXcVbnabcfoxdEefghBijklmnopqrsdogBCDEFGHhIJabcnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLMNOPQRSTUVWXYZabcdeTHEabcdeabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZdogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZfghijklmnopqrstuvwxyzXYZumpstuDvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZm") == "TqWGRTYWJGWMPSKQPCSdFSGHKLZxCvBNCBCFQXDgGFGHbKJKLMNQPQRSDQGbcdgfghHkjCBCNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzklmnqpqrstwvwxyzCBCDGthgCBCDGCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzFGHKJKLMNQPQRSTWVWXYZxyzWMPSTWdVWXYZcbcdgfghkjklmnqpqrstwvwxyzM")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuTHevwxyzABCDEBFGHIJjumpsKLaMNOPQRSTUVWXYZu") == "cCBCDGFGHKJKLMNQPQRSTWthGVWXYZcbcdgbfghkjJWMPSklCmnqpqrstwvwxyzW")){ tests_passed++; } total_tests++;

    if((encode("juwmpovqulazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABzXcVbnmebrownickrs") == "JWWMPQVQWLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbZxCvBNMGBRQWNKCKRS")){ tests_passed++; } total_tests++;

    if((encode("TabcdabcdedogfgWiTHhijklmnopqrstuRvwxXyzABCDEFGHIJKLMNABCDEFGHhcdefTheqrstulTHE") == "tCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWrVWXxYZcbcdgfghkjklmncbcdgfghHCDGFtHGQRSTWLthg")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumavbcdefghijkdogcdeCDEUVWXYZuCDEFNOPQRSTUVWXYZlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZpsipopasDfsghklzXcVbnm") == "TqWGRTYWJGWMCVBCDGFGHKJKDQGCDGcdgwvwxyzWcdgfnqpqrstwvwxyzLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzPSKPQPCSdFSGHKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfghijklHIJKLMNvOPQRSTUVWXCompROmiseYZms") == "JWthgCBCDGDQGFGHKJKLhkjklmnVqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("AabcdefghijklmnopqrstuvwxyzABCDEFGHIJjumpColazythABCDEFGzHhIJKLMiNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyzempROmisesKLMNOPQRSTUV") == "cCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjJWMPcQLCZYTHcbcdgfgZhHkjklmKnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZGMPrqMKSGSklmnqpqrstwv")){ tests_passed++; } total_tests++;

    if((encode("AEIAOovezzyreiou") == "cgkcqQVGZZYRGKQW")){ tests_passed++; } total_tests++;

    if((encode("jubcobVhijklmnopqrstuvwxyzABCDEEFGHIJKLMNOPQRUVWXCompROmiseYZms") == "JWBCQBvHKJKLMNQPQRSTWVWXYZcbcdggfghkjklmnqpqrwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("dogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNXYZu") == "DQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxyzW")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompRQwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompRabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCnompROmAabTheOmiseYZ") == "CBCDGDQGFGwKthHKJKLMNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcNQMPrqMcCBtHGqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeQwertyujgumpABCDEFGHIJKLMNOPQRSAEIOeioCompROmiXYZabcdefghijklmnopqrstuvwxyzsiopasDfsghklzXcVbnmiouzABCDEFGHIJKLUVWYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGqWGRTYWJGWMPcbcdgfghkjklmnqpqrscgkqGKQcQMPrqMKxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSKQPCSdFSGHKLZxCvBNMKQWZcbcdgfghkjklwvwyz")){ tests_passed++; } total_tests++;

    if((encode("abcdefghijklmnopqrstuvwxyAEIOeiouzABCDiEFGHIJKLUVWXYZ") == "CBCDGFGHKJKLMNQPQRSTWVWXYcgkqGKQWZcbcdKgfghkjklwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("jcuTHEabcdedogmhijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYYZabcdefghijQklmnAIBCDEFGHhIJMNOPopqrstuvwxyzzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZms") == "JCWthgCBCDGDQGMHKJKLMNQPQRSTWVWXYcbcdgfghkjklmnqpqrstwvwxyyzCBCDGFGHKJqKLMNckbcdgfghHkjmnqpQPQRSTWVWXYZZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMS")){ tests_passed++; } total_tests++;

    if((encode("avMAIBCDEFMGHhIJBMNOPxyzABCDEFWGHIJKLMNOPQRSZ") == "CVmckbcdgfmghHkjbmnqpXYZcbcdgfwghkjklmnqpqrsz")){ tests_passed++; } total_tests++;

    if((encode("dogBCDEFGHhIJabcnEopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzXYZumps") == "DQGbcdgfghHkjCBCNgQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZxyzWMPS")){ tests_passed++; } total_tests++;

    if((encode("tQwertyujgumpsilaaycVbnmAabThe") == "TqWGRTYWJGWMPSKLCCYCvBNMcCBtHG")){ tests_passed++; } total_tests++;

    if((encode("zdJHQaSPD") == "ZDjhqCspd")){ tests_passed++; } total_tests++;

    if((encode("dogFGHIdJKLMNOPQRSTUWiTHMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzs") == "DQGfghkDjklmnqpqrstwwKthmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZS")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnCopqrstabcdefghBijklmnopqrstuDMdogcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWoveruvwxyzABCDEFGHIJKLMNOPQRSTUVWXZYZ") == "CBCDGFGHbKJKLMNcQPQRSTCBCDGFGHbKJKLMNQPQRSTWdmDQGCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwQVGRWVWXYZcbcdgfghkjklmnqpqrstwvwxzyz")){ tests_passed++; } total_tests++;

    if((encode("dogBCDEFGHhIJabcnEopqrstuvwxyzABCDEFabcdedogfghijkLlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmAiseYZGHIJKLMNOPQRSTUVWXCompROmiseYZKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzXYZumps") == "DQGbcdgfghHkjCBCNgQPQRSTWVWXYZcbcdgfCBCDGDQGFGHKJKlLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMcKSGyzghkjklmnqpqrstwvwxcQMPrqMKSGyzklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZxyzWMPS")){ tests_passed++; } total_tests++;

    if((encode("lzyjuqulazythABCDEFGHhIJKLMNOPQRSabcdefghBijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyzQwertyuiozpasoDfghjklzXcVbnmebrownickmps") == "LZYJWQWLCZYTHcbcdgfghHkjklmnqpqrsCBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZqWGRTYWKQZPCSQdFGHJKLZxCvBNMGBRQWNKCKMPS")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYYZabcdefghijQkDlmnAIBCDUEFGHhIJMNOPopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyyzCBCDGFGHKJqKdLMNckbcdwgfghHkjmnqpQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("QwertyuioorverzpasoDfghjklzrXcVbnm") == "qWGRTYWKQQRVGRZPCSQdFGHJKLZRxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNjuTHEabcdedogfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXCompROmiseYZmpsPQRSabcdefghBijklmnopqrstuvwxabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSabcdabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZTUVWXCompROmiseYZefghijklmnopqrstuvwxyzABCoverDEFGHIJKLMNOPQRSTUVWXCompROmiseYZQRSTUVWXYZTUVWXYZabcdefghijklmnopqrstuvwxyze") == "LCZYTHcbcdgfghHkjklmnJWthgCBCDGDQGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzMPSpqrsCBCDGFGHbKJKLMNQPQRSTWVWXCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsCBCDCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrstwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyztwvwxcQMPrqMKSGyzGFGHKJKLMNQPQRSTWVWXYZcbcQVGRdgfghkjklmnqpqrstwvwxcQMPrqMKSGyzqrstwvwxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZG")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuvwxyzABCDEFGHIJKHeArTghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZuNOPQRSTUVWXYZ") == "CBCDGFGHbKJKLMNQPQRSTWVWXYZcbcdgfghkjkhGcRtGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzWnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("abclajumpPQWAThe") == "CBCLCJWMPpqwctHG")){ tests_passed++; } total_tests++;

    if((encode("WrOOsn") == "wRqqSN")){ tests_passed++; } total_tests++;

    if((encode("abcdefghBijklmnopqrstuDMdogcdefghijklabclajumpPQWAThemnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWover") == "CBCDGFGHbKJKLMNQPQRSTWdmDQGCDGFGHKJKLCBCLCJWMPpqwctHGMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwQVGR")){ tests_passed++; } total_tests++;

    if((encode("abcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQRSQwertMyabcdedogfgWiTHhijklmnopqrstuvwxyzABCDEFGHIJKLMNXOPQlazyAThethABCDEFGHhIJWOLGrsnKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTUVWXYZabcdefghijklmnopqrstuvwxyAEAabTheIOUaeiouzeRSTUVWXCompROmiseYZlzMXcVbnmmTUVWXCompROmiseYZ") == "CBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqrsqWGRTmYCBCDGDQGFGwKthHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnxqpqLCZYctHGTHcbcdgfghHkjwqlgRSNklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYcgcCBtHGkqwCGKQWZGrstwvwxcQMPrqMKSGyzLZmxCvBNMMtwvwxcQMPrqMKSGyz")){ tests_passed++; } total_tests++;

    if((encode("juTHEabcdedogfgJKLMNOPQRVWXCeompROmiseYdZmps") == "JWthgCBCDGDQGFGjklmnqpqrvwxcGQMPrqMKSGyDzMPS")){ tests_passed++; } total_tests++;

    if((encode("lazythABCDEFGHhIJKLMNOPQRSabcdSefghBijklmnopmqrstuvwxyzABCDEFGHIXYZTaUVWXYZabcdefghijklmnopqrstuvwxuyze") == "LCZYTHcbcdgfghHkjklmnqpqrsCBCDsGFGHbKJKLMNQPMQRSTWVWXYZcbcdgfghkxyztCwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXWYZG")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiozpasoDfcAtOwNerSTANDArDMAGNOLABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzsghjklzXcVbnm") == "qWGRTYWKQZPCSQdFCcTqWnGRstcndcRdmcgnqlcbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZSGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasofDfghjklzXcVbnm") == "qWGRTYWKQPCSQFdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("t") == "T")){ tests_passed++; } total_tests++;

    if((encode("A") == "c")){ tests_passed++; } total_tests++;

    if((encode("aaeeiioouu") == "CCGGKKQQWW")){ tests_passed++; } total_tests++;

    if((encode("bcdEFG") == "BCDgfg")){ tests_passed++; } total_tests++;

    if((encode("abcde") == "CBCDG")){ tests_passed++; } total_tests++;

    if((encode("ABCDE") == "cbcdg")){ tests_passed++; } total_tests++;

    if((encode("yes") == "YGS")){ tests_passed++; } total_tests++;

    if((encode("BCDEFG") == "bcdgfg")){ tests_passed++; } total_tests++;

    if((encode("brown") == "BRQWN")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("foox") == "FQQX")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfghjklzXcVbnmiTH") == "wqWGRTYWKQPCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("WijumpsH") == "wKJWMPSh")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopXasDfghjklzXcVbnmiTH") == "wqWGRTYWKQPxCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("oQwertyuiopasDfghjklzXcVbnmver") == "QqWGRTYWKQPCSdFGHJKLZxCvBNMVGR")){ tests_passed++; } total_tests++;

    if((encode("foxCompROmise") == "FQXcQMPrqMKSG")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnopqrstuvwxyz") == "cbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("brobwn") == "BRQBWN")){ tests_passed++; } total_tests++;

    if((encode("HeArT") == "hGcRt")){ tests_passed++; } total_tests++;

    if((encode("fooox") == "FQQQX")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaiopXasDfghjklzXcVbnmiTH") == "wqWGRTYWCKQPxCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("tt") == "TT")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmis") == "cbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("tfox") == "TFQX")){ tests_passed++; } total_tests++;

    if((encode("quicCompROmWQwertyuiopXasDfghjklzXcVbnmiTHissekk") == "QWKCcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSSGKK")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmiTHise") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSG")){ tests_passed++; } total_tests++;

    if((encode("jums") == "JWMS")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaiopXasDfghjklzXcVbnmQiTH") == "wqWGRTYWCKQPxCSdFGHJKLZxCvBNMqKth")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabPcdefghijlazyklmnopqrfoxCompROmis") == "cbcdgfghgkjklmnqpqrstwvwxyzCBpCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("WiH") == "wKh")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopXasDfghjklzXcVbnmjiTH") == "wqWGRTYWKQPxCSdFGHJKLZxCvBNMJKth")){ tests_passed++; } total_tests++;

    if((encode("jms") == "JMS")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmiTHisse") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSSG")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaiopXasDfnghjklzXcVbnmiTH") == "wqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfghjklzXcVbnmvern") == "BRQWQqWGRTYWKQPCSdFGHJKLZxCvBNMVGRN")){ tests_passed++; } total_tests++;

    if((encode("ddog") == "DDQG")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaiopXasDfghjklzXcVbncmQiTH") == "wqWGRTYWCKQPxCSdFGHJKLZxCvBNCMqKth")){ tests_passed++; } total_tests++;

    if((encode("HeAWQwertyuaiopXasDfnghjklzXcVbnmiTHrT") == "hGcwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthRt")){ tests_passed++; } total_tests++;

    if((encode("WQwecrtyuiopasDfgohjklzXcVbnmiTH") == "wqWGCRTYWKQPCSdFGQHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("quiompROmWQweWQwertyuiopasDfghjklzXcVbnmiTHrtyuiopXasDfghjklzXcVbnmiTHissekk") == "QWKQMPrqMwqWGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthRTYWKQPxCSdFGHJKLZxCvBNMKthKSSGKK")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfghjklzXcVbnmioTH") == "wqWGRTYWKQPCSdFGHJKLZxCvBNMKQth")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaiopXasDfmghjklzXcVbnmiTH") == "wqWGRTYWCKQPxCSdFMGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("foooox") == "FQQQQX")){ tests_passed++; } total_tests++;

    if((encode("WiT") == "wKt")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfghojklzXcVbnmioTH") == "wqWGRTYWKQPCSdFGHQJKLZxCvBNMKQth")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmis") == "wKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnopqrstwuvwxyz") == "cbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRSTWWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("Wijumpsseox") == "wKJWMPSSGQX")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfghojklzXcVoTH") == "wqWGRTYWKQPCSdFGHQJKLZxCvQth")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmis") == "wKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfvghjklzXcVbnmvern") == "BRQWQqWGRTYWKQPCSdFVGHJKLZxCvBNMVGRN")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQfTHTHEE") == "cbcdgfghgkjklmnqpqFththgg")){ tests_passed++; } total_tests++;

    if((encode("WijumCompROmWQwertyuiopXasDTWsijumWQwertyuaiopXasoDfmghjklzXcVbnmiTHTHErTTisseoxfghquickjklzXcVbnmiTHissepsH") == "wKJWMcQMPrqMwqWGRTYWKQPxCSdtwSKJWMwqWGRTYWCKQPxCSQdFMGHJKLZxCvBNMKththgRttKSSGQXFGHQWKCKJKLZxCvBNMKthKSSGPSh")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmisiTHise") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("HTHWiTH") == "hthwKth")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopDXasDfghjklzXcVbnmWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmisiTHise") == "cQMPrqMwqWGRTYWKQPdxCSdFGHJKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfghjklzXcVbnmiDoTH") == "wqWGRTYWKQPCSdFGHJKLZxCvBNMKdQth")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuioWQwertuaiopXasDfghjklzXcVbnmiTHpasDfghjklzXcVbnmioTH") == "wqWGRTYWKQwqWGRTWCKQPxCSdFGHJKLZxCvBNMKthPCSdFGHJKLZxCvBNMKQth")){ tests_passed++; } total_tests++;

    if((encode("CompnROmWQwertyuiopXasDfghjklzXcVbnmiTHisse") == "cQMPNrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSSG")){ tests_passed++; } total_tests++;

    if((encode("ddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisog") == "DDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQG")){ tests_passed++; } total_tests++;

    if((encode("TWsijumTHErTTisseox") == "twSKJWMthgRttKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfghjklzXcVbnmioTHABCDEFGHGIJKLMNOPQRSTUVWXYZabPcdefghijlazyklmnopqrfoxCompROmis") == "wqWGRTYWKQPCSdFGHJKLZxCvBNMKQthcbcdgfghgkjklmnqpqrstwvwxyzCBpCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("TWsijumTHErTTisseoxfoo") == "twSKJWMthgRttKSSGQXFQQ")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfghjklzXcVbnmiWQwertyuiopasDfghjklzXcVbnmiTHDoTHCokmpROmWQwertyuiopXasDfghjklzXcVbnmiTHise") == "wqWGRTYWKQPCSdFGHJKLZxCvBNMKwqWGRTYWKQPCSdFGHJKLZxCvBNMKthdQthcQKMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSG")){ tests_passed++; } total_tests++;

    if((encode("jumpfoox") == "JWMPFQQX")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfvghjklzXcVWijumpsHrTisseox") == "BRQWQqWGRTYWKQPCSdFVGHJKLZxCvwKJWMPShRtKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("WQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisertyuiopasDfghojklzXcVoTH") == "wqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSGRTYWKQPCSdFGHQJKLZxCvQth")){ tests_passed++; } total_tests++;

    if((encode("ThHeArT") == "tHhGcRt")){ tests_passed++; } total_tests++;

    if((encode("Wi") == "wK")){ tests_passed++; } total_tests++;

    if((encode("CompROmisttWQwerbnmiTH") == "cQMPrqMKSTTwqWGRBNMKth")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTTUVWXYZabcdefghijlazyklmnopqrfoxCompROmis") == "wKJWMPSSGQXrsttwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaioTWsijumpsHrTisseoxpXasDfmghjklzXcVbnmiTH") == "wqWGRTYWCKQtwSKJWMPShRtKSSGQXPxCSdFMGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("brob") == "BRQB")){ tests_passed++; } total_tests++;

    if((encode("WWiT") == "wwKt")){ tests_passed++; } total_tests++;

    if((encode("HTHWiTTH") == "hthwKtth")){ tests_passed++; } total_tests++;

    if((encode("WQwecrtyuiopasDfgohjklddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisogzXcVbnmiTH") == "wqWGCRTYWKQPCSdFGQHJKLDDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQGZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("WijumWpsHrTisseox") == "wKJWMwPShRtKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("TThe") == "ttHG")){ tests_passed++; } total_tests++;

    if((encode("HArT") == "hcRt")){ tests_passed++; } total_tests++;

    if((encode("bbrowoQwertyuiopasDfghjklzXcVbnmvern") == "BBRQWQqWGRTYWKQPCSdFGHJKLZxCvBNMVGRN")){ tests_passed++; } total_tests++;

    if((encode("TWsfooxoxfoo") == "twSFQQXQXFQQ")){ tests_passed++; } total_tests++;

    if((encode("WQwABCDEFGHGIJKLMNOPQRSTYUVWXYZabcdefghijlazyklmnopqrfoxCompROmisertyuiopasDfghojklzXcVoTH") == "wqWcbcdgfghgkjklmnqpqrstywvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSGRTYWKQPCSdFGHQJKLZxCvQth")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopXWQwecrtyuiopasDfgohjklddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisogzXcVbnmiTHasDfghjklzXcVbnmiTH") == "wqWGRTYWKQPxwqWGCRTYWKQPCSdFGQHJKLDDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQGZxCvBNMKthCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("bWQwecrtyuiopasDfgohjklzXcVbnmiTHrob") == "BwqWGCRTYWKQPCSdFGQHJKLZxCvBNMKthRQB")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcTHise") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCthKSG")){ tests_passed++; } total_tests++;

    if((encode("bbrob") == "BBRQB")){ tests_passed++; } total_tests++;

    if((encode("DWQwertyuiopasDfghejklzXcVbnmiDoTH") == "dwqWGRTYWKQPCSdFGHGJKLZxCvBNMKdQth")){ tests_passed++; } total_tests++;

    if((encode("juWQwertyuaiopXasDfnghjklzXcVbnmiTHms") == "JWwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthMS")){ tests_passed++; } total_tests++;

    if((encode("QwertyuiopasDfghjklzXcThe") == "qWGRTYWKQPCSdFGHJKLZxCtHG")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANSDArDMAGNOLiAs") == "CcTqWnGRstcnsdcRdmcgnqlKcS")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmqnopqrfoxCompROmis") == "cbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMQNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("WWddogiT") == "wwDDQGKt")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTTUVWXYZabcdefCghijlazyklmnopqrfoxCompROmis") == "wKJWMPSSGQXrsttwvwxyzCBCDGFcGHKJLCZYKLMNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("WWijumpsseoxRSTTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisTH") == "wwKJWMPSSGQXrsttwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSth")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefgWQwertyuiopasDfghjklzXcVbnmiTHhijlazyklmnopqrstuvwxyz") == "cbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthHKJLCZYKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("WijumWpsHrTsisseox") == "wKJWMwPShRtSKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("WijumWpsHrTWsfooxoxfooTsisseox") == "wKJWMwPShRtwSFQQXQXFQQtSKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("WWijumpsseoxRSTTUVWXYZabcdefisTH") == "wwKJWMPSSGQXrsttwvwxyzCBCDGFKSth")){ tests_passed++; } total_tests++;

    if((encode("jCompROmWQwertyuiopXasDfghjklzXcVbnmiTHdoTHEissems") == "JcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthDQthgKSSGMS")){ tests_passed++; } total_tests++;

    if((encode("bbrobWQwertyuiopXasDfghjklzXcVbnmiTH") == "BBRQBwqWGRTYWKQPxCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("jumThHeArTs") == "JWMtHhGcRtS")){ tests_passed++; } total_tests++;

    if((encode("HrT") == "hRt")){ tests_passed++; } total_tests++;

    if((encode("jumhThHeArTs") == "JWMHtHhGcRtS")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfvghjklzXcVbnmvrern") == "BRQWQqWGRTYWKQPCSdFVGHJKLZxCvBNMVRGRN")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopXasDfghjkklzXcVbnmaiTH") == "wqWGRTYWKQPxCSdFGHJKKLZxCvBNMCKth")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopDXasDfghjklzXcVbnmWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmimsiTHise") == "cQMPrqMwqWGRTYWKQPdxCSdFGHJKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKMSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("AEIOeUaeiou") == "cgkqGwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("jumpms") == "JWMPMS")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfvghjklzXcVWijusmpsHrTisseox") == "BRQWQqWGRTYWKQPCSdFVGHJKLZxCvwKJWSMPShRtKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("CokmpROmWQwertyuiopXasDfghjklzXcVbnmiTHise") == "cQKMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSG")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDWQwecrtyuiopasDfgohjklzXcVbnmiTHfghjklzXcTHise") == "cQMPrqMwqWGRTYWKQPxCSdwqWGCRTYWKQPCSdFGQHJKLZxCvBNMKthFGHJKLZxCthKSG")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmWijumCompROmWQwertyuiopXasDTWsijumWQwertyuaiopXasoDfmghjklzXcVbnmiTHTHErTTisseoxfghquickjklzXcVbnbrHeAWQwertyuaiopXasDfnghjklzXcVbnmiTHrTownmiTHissepsHiTHisse") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMwKJWMcQMPrqMwqWGRTYWKQPxCSdtwSKJWMwqWGRTYWCKQPxCSQdFMGHJKLZxCvBNMKththgRttKSSGQXFGHQWKCKJKLZxCvBNBRhGcwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthRtQWNMKthKSSGPShKthKSSG")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwCompROmWQwertyuiopXasDfghjklzXseertyuiopXasDfghjklzXcVbnmWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmisiTHise") == "cQMPrqMwqWcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxSGGRTYWKQPxCSdFGHJKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("HTiHWiTH") == "htKhwKth")){ tests_passed++; } total_tests++;

    if((encode("WWddogi") == "wwDDQGK")){ tests_passed++; } total_tests++;

    if((encode("brWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisertyuiopasDfghojklzXcVoTHob") == "BRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSGRTYWKQPCSdFGHQJKLZxCvQthQB")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDWQwecrtyuiopasDfgohijklzXcVbnmiTHfghjklzXcTHise") == "cQMPrqMwqWGRTYWKQPxCSdwqWGCRTYWKQPCSdFGQHKJKLZxCvBNMKthFGHJKLZxCthKSG")){ tests_passed++; } total_tests++;

    if((encode("DWQTfTHTHEEghejklzXcVbnmiDoTH") == "dwqtFththggGHGJKLZxCvBNMKdQth")){ tests_passed++; } total_tests++;

    if((encode("browwn") == "BRQWWN")){ tests_passed++; } total_tests++;

    if((encode("NNjCompROmWQwertyuiopXasDfghjklzXcVbnmiTHdoTHEissems") == "nnJcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthDQthgKSSGMS")){ tests_passed++; } total_tests++;

    if((encode("QweTWsfooxoxfoortyuiopasDfghjklzXcVbnm") == "qWGtwSFQQXQXFQQRTYWKQPCSdFGHJKLZxCvBNM")){ tests_passed++; } total_tests++;

    if((encode("juumpms") == "JWWMPMS")){ tests_passed++; } total_tests++;

    if((encode("WQweciopasDfgohjklddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisogzXcVbnmiTH") == "wqWGCKQPCSdFGQHJKLDDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQGZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopXWQwecrtyuiopasDfgohXjklddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisogzXcVbnmiTHasDfghjklzXcVbnmiTH") == "wqWGRTYWKQPxwqWGCRTYWKQPCSdFGQHxJKLDDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQGZxCvBNMKthCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfgihjklzXcVbnmiTHise") == "cQMPrqMwqWGRTYWKQPxCSdFGKHJKLZxCvBNMKthKSG")){ tests_passed++; } total_tests++;

    if((encode("jCompROmWABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnopqrstwuvwxyz") == "JcQMPrqMwcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRSTWWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("fTHTHEE") == "Fththgg")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmWijumCeompROmWQwertyuiopXasDTWsijuThHeArTmWQwertyuaiopXasoDfmghjklzXcVbnmiTHTHErTTisseoxfghquickjklzXcVbnbrHeAWQwertyuaiopXasDfnghjklzXcVbnmiTHrTownmiTHissepsHiTHisse") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMwKJWMcGQMPrqMwqWGRTYWKQPxCSdtwSKJWtHhGcRtMwqWGRTYWCKQPxCSQdFMGHJKLZxCvBNMKththgRttKSSGQXFGHQWKCKJKLZxCvBNBRhGcwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthRtQWNMKthKSSGPShKthKSSG")){ tests_passed++; } total_tests++;

    if((encode("browoQwWQwertyuiopXWQwecrtyuiopasDfgohjklddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisogzXcVbnmiTHasDfghjklzXcVbnmiTHertyuiopasDfzvghjklzXcVbnmvrern") == "BRQWQqWwqWGRTYWKQPxwqWGCRTYWKQPCSdFGQHJKLDDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQGZxCvBNMKthCSdFGHJKLZxCvBNMKthGRTYWKQPCSdFZVGHJKLZxCvBNMVRGRN")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTTUVWXYZabcdefCghijolazyklmnopqrfoxCompROmis") == "wKJWMPSSGQXrsttwvwxyzCBCDGFcGHKJQLCZYKLMNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTTUVWXYZabcdefghijlazyklmnopqrfoxCompROis") == "wKJWMPSSGQXrsttwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqKS")){ tests_passed++; } total_tests++;

    if((encode("jmms") == "JMMS")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTUVpmqrfoxCompROmis") == "wKJWMPSSGQXrstwvPMQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("WijumpsHrTisseox") == "wKJWMPShRtKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("jmmWQwertyuiopasDfghojklzXcVbnmioTH") == "JMMwqWGRTYWKQPCSdFGHQJKLZxCvBNMKQth")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertDWQwertyuiopasDfghejklzXcVbnmiDoTHyuiopXasDWQwecrtyuiopasDfgohijklzXcVbnmiTHfghjklzXcTHise") == "cQMPrqMwqWGRTdwqWGRTYWKQPCSdFGHGJKLZxCvBNMKdQthYWKQPxCSdwqWGCRTYWKQPCSdFGQHKJKLZxCvBNMKthFGHJKLZxCthKSG")){ tests_passed++; } total_tests++;

    if((encode("odog") == "QDQG")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmWijulmpsseoxRSTUVWXYZabcdefghijcAtOwNerSTANDArDMAGNOLiAslazyklmnopmqrfoxCompROmisiTHise") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMwKJWLMPSSGQXrstwvwxyzCBCDGFGHKJCcTqWnGRstcndcRdmcgnqlKcSLCZYKLMNQPMQRFQXcQMPrqMKSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("ovoer") == "QVQGR")){ tests_passed++; } total_tests++;

    if((encode("TWiT") == "twKt")){ tests_passed++; } total_tests++;

    if((encode("juumpm") == "JWWMPM")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasjuWQwertyuaiopXasDfnghjklzXcVbnmiTHmsDfghjklzXcTHise") == "cQMPrqMwqWGRTYWKQPxCSJWwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthMSdFGHJKLZxCthKSG")){ tests_passed++; } total_tests++;

    if((encode("TWsijrTTisseoxfoo") == "twSKJRttKSSGQXFQQ")){ tests_passed++; } total_tests++;

    if((encode("browoQwWQwertyuiopXWQwecrtCompROmWQwCompROmWQwertyuiopXasDfghjklzXseertyuiopXasDfghjklzXcVbnmWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmisiTHiseHasDfghjklzXcVbnmiTHertyuiopasDfzvghjklzXcVbnmvrern") == "BRQWQqWwqWGRTYWKQPxwqWGCRTcQMPrqMwqWcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxSGGRTYWKQPxCSdFGHJKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKSKthKSGhCSdFGHJKLZxCvBNMKthGRTYWKQPCSdFZVGHJKLZxCvBNMVRGRN")){ tests_passed++; } total_tests++;

    if((encode("WijuABCDEFGHGIJKLMNOPQfTHTHEEp") == "wKJWcbcdgfghgkjklmnqpqFththggP")){ tests_passed++; } total_tests++;

    if((encode("HeAWQwTHE") == "hGcwqWthg")){ tests_passed++; } total_tests++;

    if((encode("dogVbnm") == "DQGvBNM")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopDXasDfglhjklzXcVbnmWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmisiTHise") == "cQMPrqMwqWGRTYWKQPdxCSdFGLHJKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("brWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnoqrfoxCompROomisertyuiopasDfghojklzXcVoTHob") == "BRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQQRFQXcQMPrqQMKSGRTYWKQPCSdFGHQJKLZxCvQthQB")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertDWQwertyuiropasDfghejklzXcVbnmiDoTHyuiopXasDWQwecrtyuiopasDfgohijklzXcVbnmiTHfghjklzXcTHise") == "cQMPrqMwqWGRTdwqWGRTYWKRQPCSdFGHGJKLZxCvBNMKdQthYWKQPxCSdwqWGCRTYWKQPCSdFGQHKJKLZxCvBNMKthFGHJKLZxCthKSG")){ tests_passed++; } total_tests++;

    if((encode("brWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnoqrfoxCompROomisertyuiopazXcVoTHob") == "BRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQQRFQXcQMPrqQMKSGRTYWKQPCZxCvQthQB")){ tests_passed++; } total_tests++;

    if((encode("TWsijumTHErTxTisseoxfoo") == "twSKJWMthgRtXtKSSGQXFQQ")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmWijulmpsseoxRSTUVWXYZabcdefghijcAtOwNerSTANDArDMAGNOLiAslazyklmnopmqrfoxCompROmisiTHiseWQwertyuiopasDfghjklzXcVbnmiTH") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMwKJWLMPSSGQXrstwvwxyzCBCDGFGHKJCcTqWnGRstcndcRdmcgnqlKcSLCZYKLMNQPMQRFQXcQMPrqMKSKthKSGwqWGRTYWKQPCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDTWsijumWQwertyuaiopXasDfmghjklzXcVbnmiTHTHErTTisseoxfghjklzXcVbnmiT") == "cQMPrqMwqWGRTYWKQPxCSdtwSKJWMwqWGRTYWCKQPxCSdFMGHJKLZxCvBNMKththgRttKSSGQXFGHJKLZxCvBNMKt")){ tests_passed++; } total_tests++;

    if((encode("rT") == "Rt")){ tests_passed++; } total_tests++;

    if((encode("n") == "N")){ tests_passed++; } total_tests++;

    if((encode("AEIAOUUaeiou") == "cgkcqwwCGKQW")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjWQwertyuaiopXasDfnghjklzXcVbnmiTHklzXcVbnmWijumpsseoxRSTUVWXYZabcdefmnopmqrfoxCompROmisiTHise") == "cQMPrqMwqWGRTYWKQPxCSdFGHJwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFMNQPMQRFQXcQMPrqMKSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTUVWXYZabcdefghiCompROmis") == "wKJWMPSSGQXrstwvwxyzCBCDGFGHKcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("HeAeserT") == "hGcGSGRt")){ tests_passed++; } total_tests++;

    if((encode("quiompROmWQweWQwertyuiopasDfghjklzXcVbnmiTHrtyXuiopXasDfghjklzXcVbnmiTHissekk") == "QWKQMPrqMwqWGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthRTYxWKQPxCSdFGHJKLZxCvBNMKthKSSGKK")){ tests_passed++; } total_tests++;

    if((encode("oQwertyuiopasDfghjklszXcVbnmver") == "QqWGRTYWKQPCSdFGHJKLSZxCvBNMVGR")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopXasDfghjkkabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZlzXcVbnmaiTH") == "wqWGRTYWKQPxCSdFGHJKKCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyzLZxCvBNMCKth")){ tests_passed++; } total_tests++;

    if((encode("jumpfoWQwertyuaiopXasDfmghjklzXcVbnmiTH") == "JWMPFQwqWGRTYWCKQPxCSdFMGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("WQwertyyuiopXasDfghjklzXcVbnmjiTH") == "wqWGRTYYWKQPxCSdFGHJKLZxCvBNMJKth")){ tests_passed++; } total_tests++;

    if((encode("WijumWpsHrTWbrowoQwertyuiopasDfvghjklzXcVbnmvrernTsisseox") == "wKJWMwPShRtwBRQWQqWGRTYWKQPCSdFVGHJKLZxCvBNMVRGRNtSKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("CokmpROmWQwertyuiofooxpXasDfgse") == "cQKMPrqMwqWGRTYWKQFQQXPxCSdFGSG")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfjumpsghjklzXcVbnmiTH") == "wqWGRTYWKQPCSdFJWMPSGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("THHHE") == "thhhg")){ tests_passed++; } total_tests++;

    if((encode("WeQwertyyuiopXasDfghjklzXcVbnmjiTH") == "wGqWGRTYYWKQPxCSdFGHJKLZxCvBNMJKth")){ tests_passed++; } total_tests++;

    if((encode("CompnROmWQwertyuinopXasDfghjklzXcVbnmiTHisse") == "cQMPNrqMwqWGRTYWKNQPxCSdFGHJKLZxCvBNMKthKSSG")){ tests_passed++; } total_tests++;

    if((encode("WTHE") == "wthg")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopABCDEFGHGIJKLMNOPQfTHTHEEasDfghjklzXcVbnmioTH") == "wqWGRTYWKQPcbcdgfghgkjklmnqpqFththggCSdFGHJKLZxCvBNMKQth")){ tests_passed++; } total_tests++;

    if((encode("TWsijumpTisfTHTHEEEn") == "twSKJWMPtKSFththgggN")){ tests_passed++; } total_tests++;

    if((encode("WQwertyyuiopXasDfghjklzXCompROmWQwCompROmWQwertyuiopXasDfghjklzXseertyuiopXasDfghjklzXcVbnmWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmisiTHisecVbnmjiTH") == "wqWGRTYYWKQPxCSdFGHJKLZxcQMPrqMwqWcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxSGGRTYWKQPxCSdFGHJKLZxCvBNMwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKSKthKSGCvBNMJKth")){ tests_passed++; } total_tests++;

    if((encode("WiTHDWQTfTHTHEEghejklzXcVbnmiDoTH") == "wKthdwqtFththggGHGJKLZxCvBNMKdQth")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUWQwertyuaiopXasDfghjklzXcVbnmQiTHVWXYZabcdefghijlazyklmnopqrstuvwxyz") == "cbcdgfghgkjklmnqpqrstwwqWGRTYWCKQPxCSdFGHJKLZxCvBNMqKthvwxyzCBCDGFGHKJLCZYKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopDXasDfghjklzXcVbnmWijumpssWWddogiTzyklmnopmqrfoxCompROmisiTHise") == "cQMPrqMwqWGRTYWKQPdxCSdFGHJKLZxCvBNMwKJWMPSSwwDDQGKtZYKLMNQPMQRFQXcQMPrqMKSKthKSG")){ tests_passed++; } total_tests++;

    if((encode("RWQwertyuiopXWQwecrtyuiopasDfgohjklddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisogzXcVbnmiTHaosDfghjklzXcVbnmiTH") == "rwqWGRTYWKQPxwqWGCRTYWKQPCSdFGQHJKLDDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQGZxCvBNMKthCQSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("juWQwertyuaiopXasDfnghjklzXcVbnmiHms") == "JWwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKhMS")){ tests_passed++; } total_tests++;

    if((encode("CompROmisebrWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnoqrfoxCompROomisertyuiopasDfghojklzXcVoTHob") == "cQMPrqMKSGBRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQQRFQXcQMPrqQMKSGRTYWKQPCSdFGHQJKLZxCvQthQB")){ tests_passed++; } total_tests++;

    if((encode("WijuABCDEFGHGIHTHWiTHthehJKLMNOPQfTHTHEEp") == "wKJWcbcdgfghgkhthwKthTHGHjklmnqpqFththggP")){ tests_passed++; } total_tests++;

    if((encode("fooo") == "FQQQ")){ tests_passed++; } total_tests++;

    if((encode("WQwetrtyuiopasDfghjklzXcVbnmiTH") == "wqWGTRTYWKQPCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("ComWWiTpROWQwertyuiopasDfghojklzXcVoTHmWQwertyuiopXasDfghjklzXcVbnmiTHise") == "cQMwwKtPrqwqWGRTYWKQPCSdFGHQJKLZxCvQthMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSG")){ tests_passed++; } total_tests++;

    if((encode("WijumWfpsHrTWsfooxoxfooTsisseox") == "wKJWMwFPShRtwSFQQXQXFQQtSKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabzcdefghijlazyklmnopqrstuvwxyz") == "cbcdgfghgkjklmnqpqrstwvwxyzCBZCDGFGHKJLCZYKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("WijumWpWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisiseTHissesHrTsisseox") == "wKJWMwPwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSKSGthKSSGShRtSKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("jumsbrWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmGnopqrfoxCompROmisertyuimopasDfghojklzXcVoTHob") == "JWMSBRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMgNQPQRFQXcQMPrqMKSGRTYWKMQPCSdFGHQJKLZxCvQthQB")){ tests_passed++; } total_tests++;

    if((encode("CompROmWijumCompROmWQwertyuiopXasDTWsijumWQwertyuaiopXasoDfmghjklzXcVbnmiTHTHErTTisseoxfghquickjklzXcVbnmiTHissepsHcise") == "cQMPrqMwKJWMcQMPrqMwqWGRTYWKQPxCSdtwSKJWMwqWGRTYWCKQPxCSQdFMGHJKLZxCvBNMKththgRttKSSGQXFGHQWKCKJKLZxCvBNMKthKSSGPShCKSG")){ tests_passed++; } total_tests++;

    if((encode("quiompROmWQweWQwertyuioCokmpROmWQwertyuiopXasDfghjklzXcVbnmiTHisepasDfgahjklzXcVbnmiTHrtyXuiopXasDfghjklzXcVbnmiTHissekk") == "QWKQMPrqMwqWGwqWGRTYWKQcQKMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSGPCSdFGCHJKLZxCvBNMKthRTYxWKQPxCSdFGHJKLZxCvBNMKthKSSGKK")){ tests_passed++; } total_tests++;

    if((encode("WWddTogTiT") == "wwDDtQGtKt")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaiopXasDfnghjklzXcVbnmXiTH") == "wqWGRTYWCKQPxCSdFNGHJKLZxCvBNMxKth")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfghjklzXcVbnmvernWiTH") == "BRQWQqWGRTYWKQPCSdFGHJKLZxCvBNMVGRNwKth")){ tests_passed++; } total_tests++;

    if((encode("doTHE") == "DQthg")){ tests_passed++; } total_tests++;

    if((encode("ToWsfooxoxfoo") == "tQwSFQQXQXFQQ")){ tests_passed++; } total_tests++;

    if((encode("WijumpsHrTTWsijumTHErTTisHeAfooxfooxseoxisseox") == "wKJWMPShRttwSKJWMthgRttKShGcFQQXFQQXSGQXKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("juWQwertyuaiopXasDfnghjkzXcVbnmiHms") == "JWwqWGRTYWCKQPxCSdFNGHJKZxCvBNMKhMS")){ tests_passed++; } total_tests++;

    if((encode("bbrowoQwerfTHTHEE") == "BBRQWQqWGRFththgg")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopXasDfghjkklzXcVbnmQaiTH") == "wqWGRTYWKQPxCSdFGHJKKLZxCvBNMqCKth")){ tests_passed++; } total_tests++;

    if((encode("tABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "TcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("WijTWWsijumpWQwertyuaiopXasDfnghjklzXcVbnmiTHTissoxogiumpsH") == "wKJtwwSKJWMPwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthtKSSQXQGKWMPSh")){ tests_passed++; } total_tests++;

    if((encode("NfTHTHEE") == "nFththgg")){ tests_passed++; } total_tests++;

    if((encode("WWijumpsseoxRSTTUVWXYZabcdefghijlazyklmnopWQwertyuiopXasDfghjkklzXcVbnmaiTHqrfoxCompROmisTH") == "wwKJWMPSSGQXrsttwvwxyzCBCDGFGHKJLCZYKLMNQPwqWGRTYWKQPxCSdFGHJKKLZxCvBNMCKthQRFQXcQMPrqMKSth")){ tests_passed++; } total_tests++;

    if((encode("WijumWpsHrTWox") == "wKJWMwPShRtwQX")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuiopasDfjumpsTfTHTHEEEH") == "wqWGRTYWKQPCSdFJWMPStFththgggh")){ tests_passed++; } total_tests++;

    if((encode("TWsiABCDEFGHGIJKLMNOPQRSTUVWXYZabzcdefghijlazyklmnopqrstuvwxyzumpTissreoxo") == "twSKcbcdgfghgkjklmnqpqrstwvwxyzCBZCDGFGHKJLCZYKLMNQPQRSTWVWXYZWMPtKSSRGQXQ")){ tests_passed++; } total_tests++;

    if((encode("HeWijumWpWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisiseTHissesHrTsisseoxQwTHE") == "hGwKJWMwPwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSKSGthKSSGShRtSKSSGQXqWthg")){ tests_passed++; } total_tests++;

    if((encode("juWQwertyuaiopXiasDfnghjklzXcVbnmiHms") == "JWwqWGRTYWCKQPxKCSdFNGHJKLZxCvBNMKhMS")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfvghjklzXcVWiWiTHjumpsHrTisseox") == "BRQWQqWGRTYWKQPCSdFVGHJKLZxCvwKwKthJWMPShRtKSSGQX")){ tests_passed++; } total_tests++;

    if((encode("THfTHTHEE") == "thFththgg")){ tests_passed++; } total_tests++;

    if((encode("THfTHTHEETWWsijumpWQwertyuaiopXasDfnghjklzXcVbnmiTHTissreoxogi") == "thFththggtwwSKJWMPwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKthtKSSRGQXQGK")){ tests_passed++; } total_tests++;

    if((encode("WWijumpsseoxRSTTUVWXYZabcdefghijlazyklmnopWQwertyuiopXasDfghjkklzXcVbnXmaiTHqrfoxCompROmisTH") == "wwKJWMPSSGQXrsttwvwxyzCBCDGFGHKJLCZYKLMNQPwqWGRTYWKQPxCSdFGHJKKLZxCvBNxMCKthQRFQXcQMPrqMKSth")){ tests_passed++; } total_tests++;

    if((encode("browoQwertyuiopasDfvghjklzXcVnbnmvrern") == "BRQWQqWGRTYWKQPCSdFVGHJKLZxCvNBNMVRGRN")){ tests_passed++; } total_tests++;

    if((encode("THrTTisseoxfghjklNkozXcVbnmiT") == "thRttKSSGQXFGHJKLnKQZxCvBNMKt")){ tests_passed++; } total_tests++;

    if((encode("TfTHTHEE") == "tFththgg")){ tests_passed++; } total_tests++;

    if((encode("CokmpTWsijumTWsijumTHErTxTisseoxfooTHABCDEFGHGIJKLMNOPQRSTUVWquiompROmWQweWQwertyuiopasDfghjklzXcVbnmiTHrtyuiopoQwertyuiopasDfghjklszXcVbnmverXasDfghjklzXcVbnmiTHissekkXYZabcdefghijklmnopqrstuvwxyzErTTisseoxTHTHEEROmWQwertyuiopXasDfghjklzXcVbnmiTHise") == "cQKMPtwSKJWMtwSKJWMthgRtXtKSSGQXFQQthcbcdgfghgkjklmnqpqrstwvwQWKQMPrqMwqWGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthRTYWKQPQqWGRTYWKQPCSdFGHJKLSZxCvBNMVGRxCSdFGHJKLZxCvBNMKthKSSGKKxyzCBCDGFGHKJKLMNQPQRSTWVWXYZgRttKSSGQXththggrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSG")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNCompROmWQwertyuiopXasDWQwecrtyuiopasDfgohijklzXcVbnmiTHfghjklzXcTHiseOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == "cbcdgfghkjklmncQMPrqMwqWGRTYWKQPxCSdwqWGCRTYWKQPCSdFGQHKJKLZxCvBNMKthFGHJKLZxCthKSGqpqrstwvwxyzCBCDGFGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("CokmpTWsijumTWsijumTHErTxTisseoxfooTHABCDEFGHGIJKLMNOPQRSTUVWquiompROmWQweWQwertyuiopasDfghjklzXcVbnmiTHrtyuiopoQwertyuiopasDfghjklszXcVbnmverXasDfghjklzXcVbnmiTHissekkXYZabcdefghijklmnopqrstuvwxyzErTTisseoxTHTHEEROmWQwertyuiopXYasDfghjklzXcVbnmiTHise") == "cQKMPtwSKJWMtwSKJWMthgRtXtKSSGQXFQQthcbcdgfghgkjklmnqpqrstwvwQWKQMPrqMwqWGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthRTYWKQPQqWGRTYWKQPCSdFGHJKLSZxCvBNMVGRxCSdFGHJKLZxCvBNMKthKSSGKKxyzCBCDGFGHKJKLMNQPQRSTWVWXYZgRttKSSGQXththggrqMwqWGRTYWKQPxyCSdFGHJKLZxCvBNMKthKSG")){ tests_passed++; } total_tests++;

    if((encode("HTHHWiTH") == "hthhwKth")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaiopXasDfghjkulzXcVbncmQTH") == "wqWGRTYWCKQPxCSdFGHJKWLZxCvBNCMqth")){ tests_passed++; } total_tests++;

    if((encode("HeeArT") == "hGGcRt")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopDXasDfglse") == "cQMPrqMwqWGRTYWKQPdxCSdFGLSG")){ tests_passed++; } total_tests++;

    if((encode("odotTWsijumTWsijumTHErTxTisseoxfooTHABCDEFGHGIbJKLMNOPQRSTUVWquiompROmWQweWQwertyuiopasDfghjklzXcVbnmiTHrtyuiopXasDfghjklzXcVbnmiTHissekkXYZabcdefghijklmnopqrstuvwxyzErTTisseoxtg") == "QDQTtwSKJWMtwSKJWMthgRtXtKSSGQXFQQthcbcdgfghgkBjklmnqpqrstwvwQWKQMPrqMwqWGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthRTYWKQPxCSdFGHJKLZxCvBNMKthKSSGKKxyzCBCDGFGHKJKLMNQPQRSTWVWXYZgRttKSSGQXTG")){ tests_passed++; } total_tests++;

    if((encode("cAtOwNerSTANDArCompROmWQwertyuiopXasDfghjklzXseDMAOLiAs") == "CcTqWnGRstcndcRcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxSGdmcqlKcS")){ tests_passed++; } total_tests++;

    if((encode("WQwertyuaioHpXasDfghjklzXcVbncmQiTH") == "wqWGRTYWCKQhPxCSdFGHJKLZxCvBNCMqKth")){ tests_passed++; } total_tests++;

    if((encode("brWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisertyuiopasDfghojklzXcVoTHobTThe") == "BRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSGRTYWKQPCSdFGHQJKLZxCvQthQBttHG")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklzXcVbnmWijulmpsseoxRSTUVWXYwZabcdefghijcAtOwNerSTANDArDMAGNOLiAslazyklmnopmqrfoxCompROmisiTHiseWQwertyuiopasDfghjklzXcVbnmiTH") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMwKJWLMPSSGQXrstwvwxyWzCBCDGFGHKJCcTqWnGRstcndcRdmcgnqlKcSLCZYKLMNQPMQRFQXcQMPrqMKSKthKSGwqWGRTYWKQPCSdFGHJKLZxCvBNMKth")){ tests_passed++; } total_tests++;

    if((encode("HTiHWjuWQwertyuaiopXasDfnghjklzXcVbnmiHms") == "htKhwJWwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKhMS")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisise") == "wKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSKSG")){ tests_passed++; } total_tests++;

    if((encode("borowoQwerlzXcVbnmvernWiTH") == "BQRQWQqWGRLZxCvBNMVGRNwKth")){ tests_passed++; } total_tests++;

    if((encode("TWsijrTTTisseoxfoo") == "twSKJRtttKSSGQXFQQ")){ tests_passed++; } total_tests++;

    if((encode("nqovIBm") == "NQQVkbM")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwetyuiopXasDfghjklXse") == "cQMPrqMwqWGTYWKQPxCSdFGHJKLxSG")){ tests_passed++; } total_tests++;

    if((encode("ffTHTHEE") == "FFththgg")){ tests_passed++; } total_tests++;

    if((encode("fTHTWQwertyuiopXasDfghjklzXcVbnmjiTHHEE") == "FthtwqWGRTYWKQPxCSdFGHJKLZxCvBNMJKthhgg")){ tests_passed++; } total_tests++;

    if((encode("uabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == "WCBCDGFGHKJKLMNQPQRSTWVWXYZcbcdgfghkjklmnqpqrstwvwxyz")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxkRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisise") == "wKJWMPSSGQXKrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSKSG")){ tests_passed++; } total_tests++;

    if((encode("CompROmisttNoWQwerbnmiTH") == "cQMPrqMKSTTnQwqWGRBNMKth")){ tests_passed++; } total_tests++;

    if((encode("XmXcTwkhmT") == "xMxCtWKHMt")){ tests_passed++; } total_tests++;

    if((encode("broWijumpsseTWsijrTTisseoxfoooxRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmiswwn") == "BRQwKJWMPSSGtwSKJRttKSSGQXFQQQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSWWN")){ tests_passed++; } total_tests++;

    if((encode("fTHTHEEE") == "Fththggg")){ tests_passed++; } total_tests++;

    if((encode("quiompROmWQTfTdogVbnmHTHEEweWQwertyuiopasDfghjklzXcVbnmiTHrtyuiopXasDfghjklzXcVbnmiTHissekk") == "QWKQMPrqMwqtFtDQGvBNMhthggWGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthRTYWKQPxCSdFGHJKLZxCvBNMKthKSSGKK")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefgWQwertyuiopasDfghCompROmWQwertyuiopXasDTWsijumWQwertyiopXasDfmghjklzXcVbnmiTHTHErTTisseoxfghjklzXcVbnmiTHissegjklzXcVbnmiTHhijlazyklmnopqrstuvwxyz") == "cbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGwqWGRTYWKQPCSdFGHcQMPrqMwqWGRTYWKQPxCSdtwSKJWMwqWGRTYKQPxCSdFMGHJKLZxCvBNMKththgRttKSSGQXFGHJKLZxCvBNMKthKSSGGJKLZxCvBNMKthHKJLCZYKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("WijumCompROmWQwertyuiopXasDTWsijumWQWiwertyuaiopXasoDfmghjklzXcVbnmiTHTHErTTisseoxfghquickjklzXcVbnmiTHissepsH") == "wKJWMcQMPrqMwqWGRTYWKQPxCSdtwSKJWMwqwKWGRTYWCKQPxCSQdFMGHJKLZxCvBNMKththgRttKSSGQXFGHQWKCKJKLZxCvBNMKthKSSGPSh")){ tests_passed++; } total_tests++;

    if((encode("WijumCompROmWQwertyuiopXasDTWsijumWQWiwertyuaiopXasoDfmghjklzXcVbnmiTTHTHErTTisseoxfghquickjklzXcVbnmiTHissepsH") == "wKJWMcQMPrqMwqWGRTYWKQPxCSdtwSKJWMwqwKWGRTYWCKQPxCSQdFMGHJKLZxCvBNMKtththgRttKSSGQXFGHQWKCKJKLZxCvBNMKthKSSGPSh")){ tests_passed++; } total_tests++;

    if((encode("WQwertyyuiopXasDfghjklzXCompROmWQwCompROmWQwertyuiopXasDfghjklzXseertyuiopXasDfghjklzXcVbnmWijumpsseoxRHeAWQwTHESTUVWXYZabcdefghijlazyklmnopmqrfoxCompROmisiTHisecVbnmjiTH") == "wqWGRTYYWKQPxCSdFGHJKLZxcQMPrqMwqWcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxSGGRTYWKQPxCSdFGHJKLZxCvBNMwKJWMPSSGQXrhGcwqWthgstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMPrqMKSKthKSGCvBNMJKth")){ tests_passed++; } total_tests++;

    if((encode("nWijumpsseoxHeAOrTXcVbnmvernqovIBm") == "NwKJWMPSSGQXhGcqRtxCvBNMVGRNQQVkbM")){ tests_passed++; } total_tests++;

    if((encode("WWCompROmWQwertyuiopDXasDfghjklzXcVbnmWijumpssWWddogiTzyklmnopmqrfoxCompROmisiTHiseiT") == "wwcQMPrqMwqWGRTYWKQPdxCSdFGHJKLZxCvBNMwKJWMPSSwwDDQGKtZYKLMNQPMQRFQXcQMPrqMKSKthKSGKt")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertyuiopXasDfghjklXse") == "cQMPrqMwqWGRTYWKQPxCSdFGHJKLxSG")){ tests_passed++; } total_tests++;

    if((encode("brWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnoqrfoxCompROomiHob") == "BRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQQRFQXcQMPrqQMKhQB")){ tests_passed++; } total_tests++;

    if((encode("TWsijumpTisfTHTHEECompROmWQwertyuiopXasDWQwecrtyuiopasDfgohjklzXcVbnmiTHfghjklzXcTHiseE") == "twSKJWMPtKSFththggcQMPrqMwqWGRTYWKQPxCSdwqWGCRTYWKQPCSdFGQHJKLZxCvBNMKthFGHJKLZxCthKSGg")){ tests_passed++; } total_tests++;

    if((encode("NfTHTHE") == "nFththg")){ tests_passed++; } total_tests++;

    if((encode("NNjCompROmWQwertyuiopXasDfgWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisiseertyuaiopXasDfnghjklzXcVbnmiTHrThjklzXcVbnmiTHdoTHEissems") == "nnJcQMPrqMwqWGRTYWKQPxCSdFGwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSKSGGRTYWCKQPxCSdFNGHJKLZxCvBNMKthRtHJKLZxCvBNMKthDQthgKSSGMS")){ tests_passed++; } total_tests++;

    if((encode("browoQwWQwertyuiopXWQwecrtyuiopasDfgohjklddWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopmqrfoxComdogpROmisogzXcVbnmiTHasDfghjklzVXcVbnmiTHertyuiopasDfzvghjklzXcVbnmvrern") == "BRQWQqWwqWGRTYWKQPxwqWGCRTYWKQPCSdFGQHJKLDDwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPMQRFQXcQMDQGPrqMKSQGZxCvBNMKthCSdFGHJKLZvxCvBNMKthGRTYWKQPCSdFZVGHJKLZxCvBNMVRGRN")){ tests_passed++; } total_tests++;

    if((encode("foxOmise") == "FQXqMKSG")){ tests_passed++; } total_tests++;

    if((encode("jumumpm") == "JWMWMPM")){ tests_passed++; } total_tests++;

    if((encode("fE") == "Fg")){ tests_passed++; } total_tests++;

    if((encode("CokmpROse") == "cQKMPrqSG")){ tests_passed++; } total_tests++;

    if((encode("doTWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmnofTHTHEEHE") == "DQtwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMNQFththgghg")){ tests_passed++; } total_tests++;

    if((encode("jsumps") == "JSWMPS")){ tests_passed++; } total_tests++;

    if((encode("WWijumpsseoxRSTTUVWXYZabcdefghijlazyklmnopWQwertyumiopXasDfghjkklzXcVbnmaiTHqrfoxCompROmisTH") == "wwKJWMPSSGQXrsttwvwxyzCBCDGFGHKJLCZYKLMNQPwqWGRTYWMKQPxCSdFGHJKKLZxCvBNMCKthQRFQXcQMPrqMKSth")){ tests_passed++; } total_tests++;

    if((encode("te") == "TG")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrs") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFGHKJKLMNQPQRS")){ tests_passed++; } total_tests++;

    if((encode("jmmWlQwertyuiopasDfghojklzXcVbnmioT") == "JMMwLqWGRTYWKQPCSdFGHQJKLZxCvBNMKQt")){ tests_passed++; } total_tests++;

    if((encode("HTHWHiTTH") == "hthwhKtth")){ tests_passed++; } total_tests++;

    if((encode("CsokmpROse") == "cSQKMPrqSG")){ tests_passed++; } total_tests++;

    if((encode("WijumpsseoxtyuiopasDfghjklzXcVbnmvern") == "wKJWMPSSGQXTYWKQPCSdFGHJKLZxCvBNMVGRN")){ tests_passed++; } total_tests++;

    if((encode("THComWWiTpROWQwertyuiopasDfghojklzXcVoTHmWQwertyuiopXasDfghjklzXcVbXnmiTHiseHTHEE") == "thcQMwwKtPrqwqWGRTYWKQPCSdFGHQJKLZxCvQthMwqWGRTYWKQPxCSdFGHJKLZxCvBxNMKthKSGhthgg")){ tests_passed++; } total_tests++;

    if((encode("brWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazEyklmnoqrfoxCompROomiHob") == "BRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZgYKLMNQQRFQXcQMPrqQMKhQB")){ tests_passed++; } total_tests++;

    if((encode("Wijumpssseox") == "wKJWMPSSSGQX")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHGteIJKLMNOPQRSTUVWXYZabcdefghijlazyklmqnopqrfoxCompROmis") == "cbcdgfghgTGkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMQNQPQRFQXcQMPrqMKS")){ tests_passed++; } total_tests++;

    if((encode("fTHTiHWjuWQwertyuaiopXasDfnghjklzXcVbnmiHmsHTHEE") == "FthtKhwJWwqWGRTYWCKQPxCSdFNGHJKLZxCvBNMKhMShthgg")){ tests_passed++; } total_tests++;

    if((encode("CommpROmisttWQwerbnmiTH") == "cQMMPrqMKSTTwqWGRBNMKth")){ tests_passed++; } total_tests++;

    if((encode("CompROmWQwertDWQwertyuiopasDfghejklzXcVbnmiDoTHyuiopXasDWsQwecrtyuiopasDfgohijklzXcVbnmiTHfghjklzXcTHise") == "cQMPrqMwqWGRTdwqWGRTYWKQPCSdFGHGJKLZxCvBNMKdQthYWKQPxCSdwSqWGCRTYWKQPCSdFGQHKJKLZxCvBNMKthFGHJKLZxCthKSG")){ tests_passed++; } total_tests++;

    if((encode("TWsijumTWsijumTHErTxTisseoxfooTHABCDEFGHGIJKLMNOPQRSTUVWquiompROmWQweWQwertyuiopasDfghjklzXcVbnmiTHrtyuiopoQwertyuiopasDfghjklszXcVbnmverXasDfghjklzXcVbnmiTHissekkXYZabcdefghijklmnopqrstuvwxyzErTTisseoxTHTHEE") == "twSKJWMtwSKJWMthgRtXtKSSGQXFQQthcbcdgfghgkjklmnqpqrstwvwQWKQMPrqMwqWGwqWGRTYWKQPCSdFGHJKLZxCvBNMKthRTYWKQPQqWGRTYWKQPCSdFGHJKLSZxCvBNMVGRxCSdFGHJKLZxCvBNMKthKSSGKKxyzCBCDGFGHKJKLMNQPQRSTWVWXYZgRttKSSGQXththgg")){ tests_passed++; } total_tests++;

    if((encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefWijumpsseoxRSTUVWXYZabcdefghijlazyklmnopqrfoxCompROmisiseWijumpsHrTisseoxghijklmnopqrstuvwxyz") == "cbcdgfghkjklmnqpqrstwvwxyzCBCDGFwKJWMPSSGQXrstwvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMKSKSGwKJWMPShRtKSSGQXGHKJKLMNQPQRSTWVWXYZ")){ tests_passed++; } total_tests++;

    if((encode("TCompROmWQwertyuiopXasDfghjklzXcVbnmiTHiseHArTWsijumTHErTTisHeAfooxfooxseox") == "tcQMPrqMwqWGRTYWKQPxCSdFGHJKLZxCvBNMKthKSGhcRtwSKJWMthgRttKShGcFQQXFQQXSGQX")){ tests_passed++; } total_tests++;

    if((encode("WQwABCDEFGHGIJKLMNOPQRSTYUVWXYZabcdefghijlazyklmnopqrfoxCompROmHisertyuiopasDfghojklzXcVoT") == "wqWcbcdgfghgkjklmnqpqrstywvwxyzCBCDGFGHKJLCZYKLMNQPQRFQXcQMPrqMhKSGRTYWKQPCSdFGHQJKLZxCvQt")){ tests_passed++; } total_tests++;

    if((encode("jumsbrWQwABCDEFGHGIJKLMNOPQRSTUVWXYZabcdefghijlazyklmGnopqrfoxCompROmicsertyuimopasDfghojklzXcVoTHob") == "JWMSBRwqWcbcdgfghgkjklmnqpqrstwvwxyzCBCDGFGHKJLCZYKLMgNQPQRFQXcQMPrqMKCSGRTYWKMQPCSdFGHQJKLZxCvQthQB")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


