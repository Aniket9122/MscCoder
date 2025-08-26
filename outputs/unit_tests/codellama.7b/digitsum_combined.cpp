#include <iostream>
#include <string>
using namespace std;
int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1;
        }
    }
    return sum;
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

    if((digitSum("") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("abAB") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("abcCd") == 67)){ tests_passed++; } total_tests++;

    if((digitSum("helloE") == 69)){ tests_passed++; } total_tests++;

    if((digitSum("woArBld") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("aAaaaXa") == 153)){ tests_passed++; } total_tests++;

    if((digitSum(" How are yOu?") == 151)){ tests_passed++; } total_tests++;

    if((digitSum("You arE Very Smart") == 327)){ tests_passed++; } total_tests++;

    if((digitSum("") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("abAB") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("abcCd") == 67)){ tests_passed++; } total_tests++;

    if((digitSum("helloE") == 69)){ tests_passed++; } total_tests++;

    if((digitSum("woArBld") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("aAaaaXa") == 153)){ tests_passed++; } total_tests++;

    if((digitSum("123") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABCD") == 266)){ tests_passed++; } total_tests++;

    if((digitSum("abcd") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOworld") == 372)){ tests_passed++; } total_tests++;

    if((digitSum(":;<=>?@[\\]^_`{|}~") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABC123def456GHI") == 414)){ tests_passed++; } total_tests++;

    if((digitSum("UPPER") == 396)){ tests_passed++; } total_tests++;

    if((digitSum("lowercase") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Ab56") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("lowrcase") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABC123def45l6GHlowrcaseI") == 414)){ tests_passed++; } total_tests++;

    if((digitSum("1123") == 0)){ tests_passed++; } total_tests++;

    if((digitSum(":;<=>?@[\\]^_`{ABC123def456GHI") == 414)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOworrld") == 372)){ tests_passed++; } total_tests++;

    if((digitSum("lowercalowercasese") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("1Ab56cacbcd23") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("HELrLOworrld") == 372)){ tests_passed++; } total_tests++;

    if((digitSum("1123ABCD") == 266)){ tests_passed++; } total_tests++;

    if((digitSum("12:;<=>?@[\\]^_`{|}~ABC123def456GHI3") == 414)){ tests_passed++; } total_tests++;

    if((digitSum("Ab556") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("112lowercalowercasese3") == 0)){ tests_passed++; } total_tests++;

    if((digitSum(":;<=>?@[\\]^_`{_|}~") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("lowercase123") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("1Ab56caacbcd23") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("HELLrOworrld") == 372)){ tests_passed++; } total_tests++;

    if((digitSum("112lowercalowercasese31123") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("abcd1123A12:;<=>?@[\\]^_`{|}~ABC123def456GHI3BCD") == 680)){ tests_passed++; } total_tests++;

    if((digitSum("abc1Ab56cacbcd23d") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("HELrLOworrlHELLOworld") == 744)){ tests_passed++; } total_tests++;

    if((digitSum("UPPRER") == 478)){ tests_passed++; } total_tests++;

    if((digitSum("abcd1123A1C123def456GHI3BCD") == 549)){ tests_passed++; } total_tests++;

    if((digitSum(":;<=>?@[]\\]^_`{|}~") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("lowercasese31123") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("abc1Ab56cacd23d") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("DABCD") == 334)){ tests_passed++; } total_tests++;

    if((digitSum("abcd1123A12:;<=>?@[\\]^_`3{|}~ABC123def456GHI3BCD") == 680)){ tests_passed++; } total_tests++;

    if((digitSum("lowercalowe1Ab56caacbcd23casese") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("lowrcacse") == 0)){ tests_passed++; } total_tests++;

    if((digitSum(":;<=>?@[]\\]^_`{|") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("abcd1123A12:;<=>?@[\\]^_`3{|}~ABC123def4lowercase56GHI3BCD") == 680)){ tests_passed++; } total_tests++;

    if((digitSum("ABC123deIf456GHI") == 487)){ tests_passed++; } total_tests++;

    if((digitSum(":;<=>?@[\\]^:_`{ABC123def=456GHI") == 414)){ tests_passed++; } total_tests++;

    if((digitSum("112lowercaercasese31123") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("UPR") == 247)){ tests_passed++; } total_tests++;

    if((digitSum("alowerwercasese") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABC123def:;<=>?@[\\]^_`{|}~456GHI") == 414)){ tests_passed++; } total_tests++;

    if((digitSum("abc1HELLOworrldAb56cacbcd23d") == 437)){ tests_passed++; } total_tests++;

    if((digitSum("1Ab56ca1cbcd23") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("lowercasese23") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABC123deabcd1123A12:;<=>?@[\\]^_`3{|}~ABC123def4lowercase56GHI3BCDIf456GHI") == 1167)){ tests_passed++; } total_tests++;

    if((digitSum("URPPRER") == 560)){ tests_passed++; } total_tests++;

    if((digitSum("12:;<=>?@[\\`]^_`{|}~ABC123def456GHI3") == 414)){ tests_passed++; } total_tests++;

    if((digitSum("lowercalowesle") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABC123def1Ab56ca1cbcd23456GHI") == 479)){ tests_passed++; } total_tests++;

    if((digitSum(":;<=>?@[\\]^_`{;_|}~") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("1A$Bc&Def3@F") == 269)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1197)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTERSANDNOSPACES") == 3975)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 2015)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 5624)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.") == 2262)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 8118)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890") == 2089)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPERandloWercaseLENTERS") == 1401)){ tests_passed++; } total_tests++;

    if((digitSum("with") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERS") == 686)){ tests_passed++; } total_tests++;

    if((digitSum("and") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("tabs") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisERSANDNOSPACES") == 3975)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS") == 1483)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 6325)){ tests_passed++; } total_tests++;

    if((digitSum("witWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 8202)){ tests_passed++; } total_tests++;

    if((digitSum("is") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACES") == 6064)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2603)){ tests_passed++; } total_tests++;

    if((digitSum("newlines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines") == 2015)){ tests_passed++; } total_tests++;

    if((digitSum("a") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPACES") == 6970)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 7371)){ tests_passed++; } total_tests++;

    if((digitSum("ttabs") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPwitWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 9454)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPTHISISALONGSTRINGWITHMANYUPPERCASELETTERSANDNOSPACESACES") == 10945)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 4865)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 9974)){ tests_passed++; } total_tests++;

    if((digitSum("This") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.d") == 2330)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 8498)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890") == 10207)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bc&Def3@FandloWeBrcaseLENTERS") == 1736)){ tests_passed++; } total_tests++;

    if((digitSum("Thhis") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEtHisRIsaCrazyMiXofUPwitWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERSFGQRSTUVWXYZnewlines") == 10785)){ tests_passed++; } total_tests++;

    if((digitSum("witWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 13826)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nQRSTUVWXYZ67890") == 6954)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPQRSTUVWXYZnewlinesand") == 2015)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2189)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2603)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 7639)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nNOnPQRSTUVWXYZnewlinesand") == 3212)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYELETTERS.WercaseLENTERS") == 7887)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nNOnPQRSTUVWXYZnewlinesandY?IHopDeYOURdayISgoingWELL.d") == 5542)){ tests_passed++; } total_tests++;

    if((digitSum("Thshisd") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPwitWOWTHIttabs.WercaseLENTERS") == 1734)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 8586)){ tests_passed++; } total_tests++;

    if((digitSum("newlwines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTHERSANDNOSPACESNDNOSPACES") == 7042)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nv5t5sn5t5M5t5n") == 7054)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.JIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPACES") == 9232)){ tests_passed++; } total_tests++;

    if((digitSum("newlinThhis") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("ThhiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 10058)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTCODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 4932)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 4865)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMNOPQRWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.STUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRZ") == 11728)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 7279)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGST12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890RINGWITHMANYUPPERCASELETTERSANDNOSPACES") == 14182)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bc&Def3@FandloWeBrcaseLENTERRS") == 1818)){ tests_passed++; } total_tests++;

    if((digitSum("iABCDEFGHIJKLMNOPQRSTUVWXYZs") == 2015)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890") == 10293)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesand") == 10133)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZ") == 5701)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890") == 9798)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5tABCDEFGHIJKLMNWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesand4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 12736)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 8655)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thRy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sis5sn5t5M5t5n") == 4382)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisERSANDNOSPACESWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10300)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaMaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNaaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 15355)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaMaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNaaaETTHERSANDNOSPACESNDNOSPACESTTTUUVVVVWWWXXXYYYZZZ") == 8122)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMABCDEFGHIJKLMNWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesandiXofUPPER1A$Bc&Def3@FandloWeBrcaseLENTERRS") == 11951)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMABCDEFGHIJKLMNWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesandiXofUPPER1A$BLENTERRS") == 11660)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5n") == 3813)){ tests_passed++; } total_tests++;

    if((digitSum("JZApAM") == 371)){ tests_passed++; } total_tests++;

    if((digitSum("nWOWTHISISSUCHALONGSLTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESASELETTERS.ewlinThhis") == 14342)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z678905S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 11404)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLYOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 6414)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinesandY?IHopDeYOURdayISgoingWELL.d") == 4552)){ tests_passed++; } total_tests++;

    if((digitSum("newines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPMQRSTUVWXYZnewlines") == 2092)){ tests_passed++; } total_tests++;

    if((digitSum("JZMApAM") == 448)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPERandloWercaseLENaTERS") == 1401)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 4570)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2272)){ tests_passed++; } total_tests++;

    if((digitSum("12345AB0") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890") == 6718)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.PPER1A$Bc&Def3@FandloWeBrcaseLENTERRS") == 10473)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPERandseLENTERS") == 1314)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bc&Decf3@FandloWeBrcaseLENTERS") == 1736)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n55t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2189)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMELETTERS.Z67890") == 6426)){ tests_passed++; } total_tests++;

    if((digitSum("weeZIF") == 233)){ tests_passed++; } total_tests++;

    if((digitSum("12345UVWXYZ67890") == 525)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5n") == 2195)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKPQRSTUVWXYZnewlines") == 1705)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2272)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5n") == 3813)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPEPRandloWercaseLENaTERS") == 1481)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGtHisIsaCrazyMiXofUPPERandloWercaseLENTERSIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10056)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 7890)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t5v5t5sn5t5M5t5n") == 4688)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPwitWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVEWRFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 9541)){ tests_passed++; } total_tests++;

    if((digitSum("bsSPbpM") == 240)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPTPERCASELETTisERSANDNOSPACESWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10384)){ tests_passed++; } total_tests++;

    if((digitSum("12345UVWXYZ678W90") == 612)){ tests_passed++; } total_tests++;

    if((digitSum("newlinThhiTHISISALONGSTRINGWITHMANYUPTPERCASELETTisERSANDNOSPACESWLOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.s") == 10544)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 11254)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisERSANDNOS12345ABCDEFGHJIJKLMNOPTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nQRSTUVWXYZ67890PACESWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 17254)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISIStHisRIsaCrazyMiXofUPwitWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERSSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 15779)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1267)){ tests_passed++; } total_tests++;

    if((digitSum("T12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONABCDEFGHIJKLMNOPQRSTUVWXYZnewlinesandOSPACES") == 6809)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLMNOPQRSTUVWXYZnewlind") == 1680)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisERSANDNOSPACESWOMWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10377)){ tests_passed++; } total_tests++;

    if((digitSum("Thhihs") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCraXzyMiXofUPPERandloWercaseLENTERS") == 1571)){ tests_passed++; } total_tests++;

    if((digitSum("12345AB20") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bc&Def3@FandloWeBrcaseLaENTERS") == 1736)){ tests_passed++; } total_tests++;

    if((digitSum("TtHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYELETTERS.WercaseLENTERS") == 7971)){ tests_passed++; } total_tests++;

    if((digitSum("witWOWTHISISSUCHALOOREVENALARGBUFFER.ITASJUSTSOMANYUPPERCASELETTERS.") == 4841)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRIN12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890GWITHMANYUPPERCASELETTisERSANDNOSPACES") == 14268)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTUUVVVVWWWXXXYYYZZMZ") == 5617)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLYOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.QQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 11399)){ tests_passed++; } total_tests++;

    if((digitSum("newiThhisnes") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZt5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 10547)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGiABCDEFGHIJKLMNOPQRSTUVWWXYZsIWONDERIFITWILLOVERFLOWMELETTERS.Z67890") == 8528)){ tests_passed++; } total_tests++;

    if((digitSum("tHisOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 5802)){ tests_passed++; } total_tests++;

    if((digitSum("rpaKTAnTG") == 379)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 5699)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWELL.d") == 4082)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQVVVWWWXXXYYYZZZ") == 4447)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLMNOPQRSTUVWXYZnewind") == 1680)){ tests_passed++; } total_tests++;

    if((digitSum("bsPSPbp") == 243)){ tests_passed++; } total_tests++;

    if((digitSum("mPZHOE") == 390)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOTUUVVVVWWWXXXYYYZZZ") == 3986)){ tests_passed++; } total_tests++;

    if((digitSum("ans") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("isThis") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yMn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 4942)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsahCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 11254)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERItHisRIsaCrazyMiXofUPPERandloWercaseLENTERSFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 9981)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5Nyn5thy5ht5t5S5t5aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZt5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 10625)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLMNOPQDRSTUVWXYZnewlind") == 1748)){ tests_passed++; } total_tests++;

    if((digitSum("rpaKTAnTAG") == 444)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaMaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNaaaETTHERSANDNOSbsSPbpMPACESNDNOSPACESTTTUUVVVVWWWXXXYYYZZZ") == 8362)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOv5t5sn5t5M5t5n") == 3121)){ tests_passed++; } total_tests++;

    if((digitSum("rpaKKTAnTG") == 454)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nUVWXYThis") == 4332)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMABCDEFGHIJKLEMNWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesandiXofUPPER1A$BLENTERRS") == 11729)){ tests_passed++; } total_tests++;

    if((digitSum("new12345UVWXYZ678W90ines") == 612)){ tests_passed++; } total_tests++;

    if((digitSum("whitth") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("1A$Bc&Dandef3@F") == 269)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaMaABCDEIIIJJJJKKKKLLLLMMMMNNNaaaETTHERSANDNOSbsSPbpMPACESNDNOSPACESTTTUUVVVVWWWXXXYYYZZZ") == 6249)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTOD5AY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 7279)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALIONGSTRINGIWONDERIFITWILLOVERFLOWMELETTERS.Z67890") == 6499)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nThhis") == 4949)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERaTHISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACESseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 13770)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHoABCDEFGHIJKLMNOPQRSTUVWXYZTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsahCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 11385)){ tests_passed++; } total_tests++;

    if((digitSum("1XYZ67890") == 267)){ tests_passed++; } total_tests++;

    if((digitSum("newlinThhiTHISITh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yMn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nETTERS.s") == 5882)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nwitWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 21716)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNJOTUUVVVVWWWXXXYYYZZZ") == 4060)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890") == 16589)){ tests_passed++; } total_tests++;

    if((digitSum("Thhhihs") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5yS5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2272)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdePQQQQVVVWWWXXXYYYZZZ") == 1799)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIscaCrazyMiXofUPPERandloWercaseLENTERS") == 1483)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLaHELLOthereWHATareYOUdoingTODAABCDtHisIsaCrazyMiXofUPPERandloWercaseLENaTERSEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWELL.dYZnewlind") == 6173)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisERSANDNOSPACESWOMWFTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10447)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5S5T5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinesandY?IHopDeYOURdayISgoingWELL.d") == 4552)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGtHisIsaCrazyMiXofUPPERandloWercaseLENTERSIWOaNDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10056)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELtL.") == 2262)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFRUPPERCASELETTERS.Z697890") == 6800)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDMNOPMQRSTUVWXYZnewlines") == 1512)){ tests_passed++; } total_tests++;

    if((digitSum("ad") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERItHisRIrpaKTAnTGsaCrazyMiXofUPPERandloWercaseLENTERSFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 10360)){ tests_passed++; } total_tests++;

    if((digitSum("newleidnes") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nS") == 4499)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1DERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z678905S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 6984)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIITh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 9911)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5ahCrazyMiXofUtPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 10952)){ tests_passed++; } total_tests++;

    if((digitSum("whitth12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890") == 2089)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGH12345ABCDEFGHJIJThisJIJKLMNOPQRSTUVWXYZ67890") == 2942)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWtELL.d") == 4082)){ tests_passed++; } total_tests++;

    if((digitSum("12345UVtHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.PPER1A$Bc&Def3@FandloWeBrcaseLENTERRS78W90") == 10731)){ tests_passed++; } total_tests++;

    if((digitSum("wh12345AB20itth") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisERSANDNOSPACESWOWTHISCISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10367)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nUVWXYThis") == 4408)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJansFGHIJKLMNOPQRSTUVWXYZnewindIJKLMNOPQRSTUVWXYZ67890") == 3769)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLMNOPQTHTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPACESRSTUVWXYZnewind") == 8650)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5tHisIsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 5641)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTOD5AY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5tERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 3458)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJansFGHIJKLMNOPQRSTUVWXYZnewindIJRKLMLNOPQRSTUVWXYZ67890") == 3927)){ tests_passed++; } total_tests++;

    if((digitSum("tHisOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCATERS.WercaseLENTERS") == 5421)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5bsSPbpM5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1285)){ tests_passed++; } total_tests++;

    if((digitSum("12345UVWXYZaHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWtELL.dW90") == 4694)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5tH5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 10046)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMABCDEFGHIJKLMNWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesandiXofUPPER1A$BERRS") == 11353)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5tTHTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTHERSANDNOSPACESNDNOSPACES5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 8239)){ tests_passed++; } total_tests++;

    if((digitSum("1A$Bc&Dandef3") == 199)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5Nyn5thy5ht5t5S5t5aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZt5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890") == 27214)){ tests_passed++; } total_tests++;

    if((digitSum("asnsZ67890") == 90)){ tests_passed++; } total_tests++;

    if((digitSum("neewines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("neewinees") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercasWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.eLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5n") == 11931)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKisKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZ") == 5701)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGtHisIsaCrazyMiXofUPPERandloWercaseLENTERSIWONDERIFITWILLOVERFLOWwh12345AB20itthMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10187)){ tests_passed++; } total_tests++;

    if((digitSum("ZGxrhSo") == 244)){ tests_passed++; } total_tests++;

    if((digitSum("WOWLONGSTRINGIWONDERIFITWILLYOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 5574)){ tests_passed++; } total_tests++;

    if((digitSum("12345B20aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 5765)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereWHATareYOUdoingTODAY?IHYopeYOURdayISgoingWELtL.") == 2351)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5bsSPbpM5ST5TS5shr5t5SS5t5v5t5sn5t5M5t5n") == 1220)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRandINGWITHMANYUPPERCASELETTisERSANDNOSPACESWOWTHISCISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 10367)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t55pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nS") == 4499)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKisKKKLLLLMMMMNNNNOOOOPPPQTTUUVVVTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5bsSPbpM5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYYYZZMZ") == 5304)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLaHELLOthereWHATareYOUdoingTODAABCDtHisIsaCrazyMiXofUPPERandloWercaseLENaTERSEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm55g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWELL.dYZnewlind") == 6173)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bc&Decf3@FandloWeBrcaisThis") == 1279)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATIareYOUdoingTODAY?IHoABCDEFGHIJKLMNOPQRSTUVWXYZTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsahCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 11458)){ tests_passed++; } total_tests++;

    if((digitSum("1234B20") == 66)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPTHISISALONGCESACES") == 8026)){ tests_passed++; } total_tests++;

    if((digitSum("nenewiThhisneswlwines") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESis") == 6064)){ tests_passed++; } total_tests++;

    if((digitSum("test") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t55v5ff5mm5g5yS5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2272)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercasWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANmPZHOEYUPPERCASELETTERS.eLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5n") == 12321)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereWHATareYOUdoingTODAY?IHopeYOURdaeyISgoingWELL.") == 2262)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCroazyMiXofUPPERandloWercaseLENTERS") == 1401)){ tests_passed++; } total_tests++;

    if((digitSum("newlwineaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZs") == 5701)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOIPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890") == 10366)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t5v5t5sn5t5M5t5nsn5t5M5t5nTUVWWXYZsIWONDERIFITWILLOVERFLOWMELETTERS.Z67890") == 14543)){ tests_passed++; } total_tests++;

    if((digitSum("newlinesTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5neewinesthytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2272)){ tests_passed++; } total_tests++;

    if((digitSum("1X6YZ6789ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t5v5t5sn5t5M5t5n0") == 4955)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccisKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZ") == 4678)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisERSANDNOSPWOWLONGSTRINGIWONDERIFITWILLYOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.ACESWOWTHISCISSUCHALONGSTRINGIWONDEABCDMNOPMQRSTUVWXYZnewlinesLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 16373)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPTPERCASELETTisERSANDNOSPACESWOWTHISISSUCHALONGSTRINGIWONDERIFaaaaabbbbbbccccccisKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 15062)){ tests_passed++; } total_tests++;

    if((digitSum("tHisOVERFLOWMYTEXTEDITORORETh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5m5t5nms5t4K5t5ms512345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nVENALARGBUFFER.ITSJUSTSOMANYUPPERCATERS.WercaseLENTERS") == 24613)){ tests_passed++; } total_tests++;

    if((digitSum("1A$Bc&Dand12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890f3@F") == 2358)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereWHATODAY?IHopeYOURdayISgoingWELtL.") == 1925)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Tht5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWELL.dans") == 3847)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIJIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 4644)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bcef3@FandloWeBrcaseLENTERRS") == 1750)){ tests_passed++; } total_tests++;

    if((digitSum("whitth12345ABCDEFGHJIJansFGHIJKLMNOPQRSTUVWXYZnewlindKLMNOPQRSTUVWXYZ67890") == 3769)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5Nyn5thy5ht5t5S5t5aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbansK12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nUVWXYThisLMNOPQRSTUVWXYZ67890bbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZt5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890") == 32866)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIscaCrazyMiXofUPPERandloWetHisRIsaCrazyMiXofUPPERandloWercaseLENTERSrcaseLENTERS") == 2966)){ tests_passed++; } total_tests++;

    if((digitSum("ithwlwiwnes") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbcccccbcdddeeefffggggHHHHHIIIJIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 4644)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5ncm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n55n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 7371)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3s12345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5Nyn5thy5ht5t5S5t5aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbansK12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nUVWXYThisLMNOPQRSTUVWXYZ67890bbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZt5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890t!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nS") == 37365)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbtHisIsaCrazyMiXofUPPERandloWercaseLENaTERSVVVTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5bsSPbpM5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYYYZZMZ") == 3558)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMisThiswlinesand") == 1007)){ tests_passed++; } total_tests++;

    if((digitSum("tHisOVERFLOWMYTEXTEDITORORETh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5mI5t5nms5t4K5t5ms512345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nVENALARGBUFFER.ITSJUSTSOMANYUPPERCATERS.WercaseLENTERS") == 24686)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5tHisIansFGHIJKLMNOPQTHTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPACESRSTUVWXYZnewindsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 14291)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Tht5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWELL.dansZGxrhSo") == 4091)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t12345AB05Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1398)){ tests_passed++; } total_tests++;

    if((digitSum("w") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("dad") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5tTHTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTHERSANDNTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nwitWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OSPACESNDNOSPACES5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 29955)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n55n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 6585)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5tS5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWtELL.d") == 4165)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisILeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nwitWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 21792)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPQRSTUVWXYZnewlinesThis") == 2099)){ tests_passed++; } total_tests++;

    if((digitSum("tHisOVERFLOWMYTEXTEDITORORETh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5mI5t5nms5t4K5t5ms512345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nVENALARGBUFFER.ITSJUSTSOMANYUPPEThinsRCATERS.WercaseLENTERS") == 24770)){ tests_passed++; } total_tests++;

    if((digitSum("rpaKTAnnTAG") == 444)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5ahCrazyMiXofUtPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.JIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPACESt5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 20184)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5Tn5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nNOnPQRSTUVWXYZnewlinesand") == 3296)){ tests_passed++; } total_tests++;

    if((digitSum("ww") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLYOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5tHisIsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 10418)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEThis") == 419)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTOD5AY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS55t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 7279)){ tests_passed++; } total_tests++;

    if((digitSum("tabsLENTERS") == 541)){ tests_passed++; } total_tests++;

    if((digitSum("neweines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!HELLOthereWHATODAY?IHopeYOURdayISgoingWELtL.s$0nly42t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 3192)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMABCDEFGHIJKLMNWOWTHISISSUCHALONGSTRINGIWONDERIFITIWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesandiXofUPPER1A$BERRS") == 11426)){ tests_passed++; } total_tests++;

    if((digitSum("newleidntHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERSes") == 8586)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVJWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMELETTERS.Z67890") == 6500)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5S5T5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinesandY?IHopDeYOURdayISgoingWELL.d305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOv5t5sn5t5M5t5n") == 7673)){ tests_passed++; } total_tests++;

    if((digitSum("ii") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGST12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWO1NDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFETTERSANDNOSPACES") == 9992)){ tests_passed++; } total_tests++;

    if((digitSum("JZAJpAM") == 445)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t12345AB05Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 7097)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIzyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPRERCASELETTERS.WercaseLENTERS") == 8601)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETef3@FandloWeBrcaseLENTERRS") == 9645)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJ2345ABCDEFGHJIJThisJIJKLMNOPQRSTUVWXYZ67890NNNNJOTUUVVVVWWWXXXYYYZZZ") == 5542)){ tests_passed++; } total_tests++;

    if((digitSum("Tishhhihs") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t123454ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z678905S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 11404)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHaaaaabbbbbbccccccdddeeefffggggHHHHHIIIJIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 12283)){ tests_passed++; } total_tests++;

    if((digitSum("xP") == 80)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nv5t5sn5t5M5t5nS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5tHisIsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 12695)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJ") == 622)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofLUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 8662)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEThisTHISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHoABCDEFGHIJKLMNOPQRSTUVWXYZTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsahCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 11804)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISNISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890") == 16667)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisILeLENTERSercaseLENTERTS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggtHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERSn5t5shr5t5SS5t5v5t5sn5t5M5t5nwitWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 24696)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJThis") == 853)){ tests_passed++; } total_tests++;

    if((digitSum("212345AB20") == 131)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sns5t5M5t5nv5t5sn5t5M5t5nS") == 4499)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASEL12345ARBCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACES") == 6146)){ tests_passed++; } total_tests++;

    if((digitSum("Tishhhih1X6YZ6789ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t5v5t5sn5t5M5t5n0s") == 5039)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nwitWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZ12345ABCDEFGHJIJKLMNOIPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890ZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 32082)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTU12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5tHisIsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThisVWXYWOWTHISISSUCHALIONGSTRINGIWONDERIFITWILLOVERFLOWMELETTERS.Z67890") == 12140)){ tests_passed++; } total_tests++;

    if((digitSum("1678W90") == 87)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 3035)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVEENALARGBUFFER.ETef3@FandloWeBrcaseLENTERRS") == 9714)){ tests_passed++; } total_tests++;

    if((digitSum("123FGHJIJThis") == 518)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCraaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZThisERS") == 6229)){ tests_passed++; } total_tests++;

    if((digitSum("btabs") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$tHisIsaCrazyMABCDEFGHIJKLMNWOWTHISISSUCHALONGSTRINGIWONDERIFITIWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesandiXofUPPER1A$BERRS0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWELL.d") == 15508)){ tests_passed++; } total_tests++;

    if((digitSum("ABCEDEThis") == 488)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIscaCrazyMiXofUPPERandloWercaseLENTERSd") == 1483)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisILeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nwitWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5Tn5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nNOnPQRSTUVWXYZnewlinesand") == 25088)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn15t5M5t5nUVWXYThis") == 4408)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TdadS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5n") == 2195)){ tests_passed++; } total_tests++;

    if((digitSum("tHitWOWTHIttabs.WercaseLENTERS") == 1182)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t55v5ff5mm5g5yS5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m55t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2272)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENtHisRIscaCrazyMiXofUPPERandloWercaseLENTERSdeLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nS") == 5664)){ tests_passed++; } total_tests++;

    if((digitSum("ZGxrhS") == 244)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5newlinThhiTHISITh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yMn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nETTERS.sCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 26466)){ tests_passed++; } total_tests++;

    if((digitSum("Thshissd") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("dmFWhHwdrnenewiThhisneswlwines") == 313)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaMaABCDEIIIJJJJKKKKLLLLMMMMNNNaaaETTHERSANDNOSbsSPbpMPACESNDNOSPACESTTTUUVVVVWWWXXXTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nv5t5sn5t5M5t5nYYYZ") == 13123)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJansFGHIJKLMNOPQRSTUVWXYZnewindIJRKLMLNOPQRSTUVVWXYZ67890") == 4013)){ tests_passed++; } total_tests++;

    if((digitSum("newasnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5neidnes") == 7870)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5tHisIansFGHIJKLMNOPQTHTHISISALONGSTRINGWITHMANYUPLPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPACESRSTUVWXYZnewindsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 14367)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWCELLTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETef3@FandloWeBrcaseLENTERRS") == 7981)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGST12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890RINGWITHMANYUPPERCASELETTERSANDNOSPACES") == 13938)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPwitWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYRUPPERCASELETTERS.WercaseLENTERS") == 9536)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIzyMiXofUPHALONGSTRINTGIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPRERCASELETTERS.WercaseLENTERS") == 8065)){ tests_passed++; } total_tests++;

    if((digitSum("112345UVWXYZ67890") == 525)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVEENALARGBUFFER.ETef3@FaLndloWeBrcaseLENTERRS") == 9790)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFIT.ETTERTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nS.") == 10546)){ tests_passed++; } total_tests++;

    if((digitSum("tabsines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("wwaaaaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZd") == 7639)){ tests_passed++; } total_tests++;

    if((digitSum("ansK12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!") == 2271)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SithS5t5v5t5sn5t5M5t5n") == 7279)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t5v5t5sn5t5M5t5nZGxrhS") == 4932)){ tests_passed++; } total_tests++;

    if((digitSum("bPsSPbpM") == 320)){ tests_passed++; } total_tests++;

    if((digitSum("wwaaaaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggXHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZd") == 7727)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIs") == 695)){ tests_passed++; } total_tests++;

    if((digitSum("Tishs") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("rpaKTtHisRIscaCrazyMiXofUPPERandloWercaseLENTERSdAnTG") == 1862)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t5v5t5sn5t5M5Ut5n") == 4773)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPQRSTUVWXYZn1A$Bc&Def3@Fewlinesand") == 2284)){ tests_passed++; } total_tests++;

    if((digitSum("aHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_.c@5ES.4305t5nn5t5v5ff5mm5g55gn5t5Tht5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5YZnewlinURdayISgoingWELL.dansZGxrhSo") == 4091)){ tests_passed++; } total_tests++;

    if((digitSum("12345B20") == 66)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbcccccbcdddeeefffggggHHHHHIIIJIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRbRSSSSSTTTTUUVTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5bsSPbpM5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nZZ") == 5926)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDMNOPMQRSTUVWXYZinewlines") == 1512)){ tests_passed++; } total_tests++;

    if((digitSum("newleines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("dand") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2d%3*4@5_c@5ESnWOWTHISISSUCHALONGSLTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESASELETTERS.ewlinThhis.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nUVWXYThis") == 18750)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTOD5AY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5WmaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dasnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS55t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 15236)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n55n5t55Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 6585)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGneewinesWITHMThhiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsahCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 21312)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATareYOUdaoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETef3@eFandloWeBrcaseLENTERRS") == 9645)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOIGPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASErpaKTAnnTAGLETTERS.Z67890") == 10881)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIscaCrazyMiXofUPPtHisIsaCraaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZThisERSloWercaseLENTERSrcaseLENTERS") == 8102)){ tests_passed++; } total_tests++;

    if((digitSum("whitth12345ABCDEThis") == 419)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRIWOWTHISISSUCHALONGSTRINGIWONDERIFIT.ETTERTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nS.NGtHisIsaCrazyMiXofUPPERandloWercaseLENTERSIWOaNDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 20602)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL1ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SithS5t5v5t5sn5t5M5t5nVWXYZ67890ETTERSANDNOSPACESNDNOSPACES") == 12600)){ tests_passed++; } total_tests++;

    if((digitSum("1A$Bc&Dandef3aaaaMaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHQHHHHIIIIJJJJKKKKLLLLMMMMNNNaaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 15635)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERaTHISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACESseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nB20") == 13836)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMtHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWABCDEThisNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIITh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 12873)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMtHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWABCDEThisNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIITh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5S5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nIIJJJJKKKKLLLLMMMMNNNPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 12479)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sTh!s!s$0nly4t3st!ng-1DERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z678905S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nS") == 11084)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLSSTTTTUUVVVVWWWXXXYYYZZZ") == 5645)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLMNOPQRSTUVnWXYZnewind") == 1680)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTOD5AY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5WmaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dasnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRITh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t55v5ff5mm5g5yS5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nzyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS55t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 17441)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbcccccbcdddeeefffggggHHHHHIIIJIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQQRRRbRSSSSTTTTUUVVZZ") == 4725)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaNNOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 2554)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereWHATareYOUdoingTODAY?IHYopeYOURdayThinsgWELtL.") == 2279)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bc&Def3@FandlLoWeBrcaseLaENTERS") == 1812)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1DERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z678905S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn512345ABCDEFGHJIJKLMNOPTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nQRSTUVWXYZ67890t5M5t5n") == 13938)){ tests_passed++; } total_tests++;

    if((digitSum("MSrP") == 240)){ tests_passed++; } total_tests++;

    if((digitSum("ansFGHIJKLMNOPQRSTUVWXYZnewliGnd") == 1751)){ tests_passed++; } total_tests++;

    if((digitSum("newasnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890%3*4@5_c@5ES.4305t5n5tT5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5neidnes") == 7954)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5a_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2189)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLtabsLENTERSMNOPQRSTUVWXYZ67890ETTHERSANDNOSPACESNDNOSPACES") == 7583)){ tests_passed++; } total_tests++;

    if((digitSum("newasnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPaHELLOthereWHATareYOUdoingTODAABCDEFGHIJKLMTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nNOnPQRSTUVWXYZnewlinesandY?IHopDeYOURdayISgoingWELL.dPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5neidnes") == 13412)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISNISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMAABCDMNOPMQRSTUVWXYZinewlinesNYUPPERCASELETTERS.Z67890XYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890") == 18179)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPER1A$Bc&Def3@FandloansFGHIJKLiMNOPQRSTUVWXYZnewlindXYZnewindsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThisinesWeBrcaseLaENTERS") == 5367)){ tests_passed++; } total_tests++;

    if((digitSum("mw") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("123O45Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nABCDMNOPMQRSTUVWXYZinewlinesOSPACESRSTUVWXYZnewindsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 6847)){ tests_passed++; } total_tests++;

    if((digitSum("newTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M!5t5nlinThhis") == 3897)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOv5t5sn5t5M5t5nENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5n") == 6934)){ tests_passed++; } total_tests++;

    if((digitSum("Tihshhhi123FGHJIJThishs") == 602)){ tests_passed++; } total_tests++;

    if((digitSum("tabsLEasnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890NTERS") == 3562)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJOPPPQQQQRRRbRSSSTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nSTTTTUUVVZZPERCASEL12345ARBCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACES") == 17071)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yMn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLfENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 4942)){ tests_passed++; } total_tests++;

    if((digitSum("rpaKnKTAnTG") == 454)){ tests_passed++; } total_tests++;

    if((digitSum("btab") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLtabsLENTERSMNOPQRSTUVWXYZ67890ETTHERSANDNOS") == 6469)){ tests_passed++; } total_tests++;

    if((digitSum("rZGxrhS") == 244)){ tests_passed++; } total_tests++;

    if((digitSum("newlinThhiTHISITh!s!s$0nly4t3sHELLOthaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLYOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.QQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yMn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nETTERS.s") == 17281)){ tests_passed++; } total_tests++;

    if((digitSum("12345BAB0") == 197)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yMn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TSt5SS5t5v5t5sn5t5M5t5n") == 4877)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJJ2345ABCDEFGHJIJThisJIJKLMNOPQRSTUVWXYZ67890NNNNJOTUUVVVVWWWXXXYYYZZZ") == 5616)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYweeZIFRSANDNOSPACES") == 3146)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJansFGHIJKLMNOPQRSTUVWXYZnewindIJKLMNOPQRSTUVWXYZ678") == 3769)){ tests_passed++; } total_tests++;

    if((digitSum("rTpaKnKTAnTG") == 538)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALOtHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sns5t5M5t5nv5t5sn5t5M5t5nSNGSTRINGtHisIsaCrazyMiXofUPPERandloWercaseLENTERSIWOaNDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 14555)){ tests_passed++; } total_tests++;

    if((digitSum("aHSgoingWELL.d") == 463)){ tests_passed++; } total_tests++;

    if((digitSum("asnsSWLOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.s") == 6484)){ tests_passed++; } total_tests++;

    if((digitSum("ansFrpaKTAnnTAGGHIJKLMNOPQRSTUVnWXYZne12345UVWXYZ678newleidntHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERSes90wind") == 11235)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIsaCrazyMiXofUPwitWOWTHIttabs.Wercas12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGiABCDEFGHIJKLMNOPQRSTUVWWXYZsIWONDERIFITWILLOVERFLOWMELETTERS.Z67890eLENTERS") == 10262)){ tests_passed++; } total_tests++;

    if((digitSum("rnao") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5ahCrazyMiXofUtPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5THTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHHELLOthereWHATarteYOUdoingTODAY?IHopeYOURdayISgoingWELL.JIJKLMNOPQRSTUVWXYZ67890ETTERSANDNOSPACESNDNOSPACESt5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nRSANDNOSPACES") == 20184)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t55n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 9974)){ tests_passed++; } total_tests++;

    if((digitSum("asnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890") == 3021)){ tests_passed++; } total_tests++;

    if((digitSum("tabss") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMABCDEFGHIJKLMNWOWTROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.OPQRSTUVWXYZnwithewlinesandiXofUPPER1A$BLENTERRS") == 7489)){ tests_passed++; } total_tests++;

    if((digitSum("rpAnTAG") == 285)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRaaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLSSTTTTUUVVVVWWWXXXYYYZZZIsaCrazyMiXofUPwitWOWTHIttabs.WercaseLENTERS") == 7379)){ tests_passed++; } total_tests++;

    if((digitSum("12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTER7890ETTERSANDNOSPACESNDNOSPACESRSTUVWXYZnewindsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 5417)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUWOWTHISISSUaHELLOthereWHATarERRS") == 2347)){ tests_passed++; } total_tests++;

    if((digitSum("witWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCERS.") == 7672)){ tests_passed++; } total_tests++;

    if((digitSum("T12345ABCDEFGHJIJKLMTHTHISISALONGSTRINGWITHMANYUPPERCASEL12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890ETTHERSANDNOSPACESNDNOSPACESNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONABCDEFGHIJKLMNOPQRSTUVWXYZnewlinesandOSPACES") == 13851)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHaaaaabbbbbbccccccdddeeefffggggHHHHHIIIJIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVXYYYZZZ") == 11846)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFEMANYUPPERCASELETTERS.Z67890") == 9483)){ tests_passed++; } total_tests++;

    if((digitSum("tHisRIzyMiXofUPHALONGSTRINTGIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFXER.ITSJUSTSOMANYUPPRER.WercaseLENTERS") == 7234)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaNNZGxrhSOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 2798)){ tests_passed++; } total_tests++;

    if((digitSum("rGTpaKnKTAnTG") == 609)){ tests_passed++; } total_tests++;

    if((digitSum("12345B20aaaaabbbbbbccccccddKdeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOWWXXXYYYZZZ") == 3446)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t55pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nWOWTHISISSUCHALONGSTRINGIWONDERIFIT.ETTERTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nS.S") == 15045)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGABCDEtHisRIsaCrazyMiXofUPwitWOWTHISISSUCHALONGSTRINTGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERSFGQRSTUVWXYZnewlinesSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFEMANYUPPERCASELETTERS.Z67890") == 20268)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaMaABCDEFGHIJKABCDEThis") == 1266)){ tests_passed++; } total_tests++;

    if((digitSum("hTiishhhihs") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("123O45Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nABCDMNOPMQRSTUVWXYZinesOSPACESRSTUVWXYZnewindsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThis") == 6847)){ tests_passed++; } total_tests++;

    if((digitSum("tHisERIsaCrazyMiXofUPHALONGSTRINTGIWONDERItHisRIsaCrazyMiXofansFGHIJKLMNOPQDRSiTUVWXYZnewlindUPPERandloWercaseLENTERSFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERS") == 11798)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWONDERIFITWILLOVERFLOWwh12345AB20itthMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 7426)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITORORTHISISALONGSTRIN12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890GWITHMANYUPPERCASELETTisERSANDNOSPACESEVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890") == 24561)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaMaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNaaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNMNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZ") == 15432)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mmY5g55gn5t5Th5t5yn5thy5ht5t5S5t5aaaaaABCDEFGHIJKLMNOPQRSTUVWXYZbbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZt5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 10636)){ tests_passed++; } total_tests++;

    if((digitSum("Thins") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("aaaYaabbbWbbbccccccddKdePQQQQVVVWWWXXXYYYZZZ") == 1975)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaNNOOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 2633)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n512345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONG5STRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFEMANYUPPERCASELETTERS.Z67890t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 10750)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEThisTHISISALONGSTRINGWITHMANYUPPERCASELETTisEThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHoABCDEFGHIJKLMNOPQRSTUVWXYZTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th05t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsahCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5ABCDEFGHIJKLMNOPQRSTUVWXYZn1A$Bc&Def3@Fewlinesandt5v5t5sn5t5M5t5nRSANDNOSPACES") == 14088)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t25v5t5sn5t5M5t5n") == 4688)){ tests_passed++; } total_tests++;

    if((digitSum("nRGf") == 153)){ tests_passed++; } total_tests++;

    if((digitSum("tHitWOWTHIttabs.WercaseLENTRS") == 1113)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercasWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5n") == 10157)){ tests_passed++; } total_tests++;

    if((digitSum("an") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ThhiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nv5t5sn5t5M5t5nv5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 17112)){ tests_passed++; } total_tests++;

    if((digitSum("aaaOaNNOOOOPPPQQQQRRRbRSSSSTTTTUUVVZZ") == 2633)){ tests_passed++; } total_tests++;

    if((digitSum("ansFrpaKTAnnTAGGHIJKLMNOPQRSTUVnWXYZne12345UVWXYZ678newleidntHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERIFITWILLPERCASELETTERS.WercaseLENTERSes90wind") == 7107)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sTt!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZMZn5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nwitWOWTHISISSUCHALONGSTRINTGIWONDERIFIaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZ12345ABCDEFGHJIJKLMNOIPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOVWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z67890ZZTWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 32166)){ tests_passed++; } total_tests++;

    if((digitSum("TrpaKnKTAnTG") == 538)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJansFGHIJKLMNOPQRSTUVWXYZnewindIJRKLMLNOPQRSTUVWXYZ67890mOPZHOE") == 4396)){ tests_passed++; } total_tests++;

    if((digitSum("ThshissTd") == 168)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SSbtab5t5M5t5n") == 1267)){ tests_passed++; } total_tests++;

    if((digitSum("ThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnewlines5shr5t5SS5t5v5t5sn5t5M5t5nZGxrhttabs") == 4849)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHATh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g5yS5gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSs5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nLONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890") == 12070)){ tests_passed++; } total_tests++;

    if((digitSum("hTiishhhiaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZhs") == 5708)){ tests_passed++; } total_tests++;

    if((digitSum("LjZfMMKsDj") == 463)){ tests_passed++; } total_tests++;

    if((digitSum("aithand") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYO5URdayISgoingWELL.t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERThhiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 14923)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th55t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t55pn5t5shr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nWOWTHISISSUCHALONGSTRINGIWONDERIFIT.ETTERTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNONOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nS.S") == 15123)){ tests_passed++; } total_tests++;

    if((digitSum("tHisOVERFLOWMYTEXTEDITORORETh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5mI5t5nms5t4K5t5ms512345ABCDEFGHJIJKLMNOPQRSTUIVW12345ABCDEFGHJIJKLMNOPQRSTUVWXYWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSOMANYUPPERCASELETTERS.Z67890XYnewasnsFGHJIJKLMNOPQRSTUVWXTh!s!s$0nly4t3st!ng-1&2%3*4@5seLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nYZ67890%3*4@5_c@5ES.4305t5n5t5v5ff5maHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5neidnesWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFUPPERCASELETTERS.Z697890tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nVENALARGBUFFER.ITSJUSTSOMANYUPPERCATERS.WercaseLENTERS") == 32556)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIeLENTERTh!s!s$0nly4t3st!ng-1&*2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERS5t5m5t5sTh!s!s$0nly4t3st!ng-1DERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.Z678905S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nn5t5sThisTh!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.t!ng-1&2ABCDEFGHIJKLMNOPQRSTUVWXYZnIewlines5shr5t5SS5t5v5t5sn5t5M5t5nhr5t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5sn5t5M5t5nS") == 15845)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMNOPQRSTU12345Th!s!s$0nly4t3st!sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thytHisIeLENTERSercaseLENTERSL5t5m5t5sn5ST5TS5t5n5tHisRIsaCrazyMiXofUPHALONGSTRINTGIWONDERItHisRIrpaKTAnTGsaCrazyMiXofUPPERandloWercaseLENTERSFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.WercaseLENTERSt5n5t5Ar5t5pn5t5shr55t5SS5t5Th!s!s$0nly4t3sHELLOthereWHATareYOUdoingTODAY?IHope5t5sn5t5M5t5nv5t5tHisIsaCrazyMiXofUPPEPRandloWercaseLENaTERSWXYThisVWXYWOWTHISISSUCHALIONGSTRINGIWONDERIFITWILLOVERFLOWMELETTERS.Z67890") == 22500)){ tests_passed++; } total_tests++;

    if((digitSum("Ths") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEwhitthXYZnewlinesThis") == 686)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t55S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar55t5M5t5n") == 2437)){ tests_passed++; } total_tests++;

    if((digitSum("bans") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUaHELLOthereWHATareYOUdoingTODAY?IHopDeYOURdayISgoingWELL.dCHALONGSTRITh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUPPERandloWercaseLENTERS5tTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5tHisRIsaCrazyMiXofUaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZS5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5m5t5sn5ST5TS5t55n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nNGtHisIsaCrazyMiXofUPPERandloWercaseLENTERSIWOaNDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ETTERS.") == 20030)){ tests_passed++; } total_tests++;

    if((digitSum("ABCabc") == 198)){ tests_passed++; } total_tests++;

    if((digitSum("A") == 65)){ tests_passed++; } total_tests++;

    if((digitSum("hellothere") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("abc") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ABC") == 198)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELETTERSANDNOSPACESThis") == 4059)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASELERSANDNOSPACESThis") == 3822)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1197)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSSALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 5311)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 9798)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFKLMNOPQRSTUVWXYZ") == 1725)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRSTUVThis") == 1680)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms55t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1197)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYZ") == 354)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1045)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofRUPPERandloWercaseLENTERS") == 1483)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 9798)){ tests_passed++; } total_tests++;

    if((digitSum("witwh") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazyMiXofRUPPERandloWercaseLENTERS") == 1411)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSSALONGSTRINGWITHMANYUPPERCASELETTTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5ThTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5ttabsBCDEFGHIJKLMNOPQRSTUVThisERSNDNOSPACES") == 7714)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 9868)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazyMiXofRUzPPERandloWercaseLENTERS") == 1411)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJLMNOPQRSTUVWXYZ") == 1940)){ tests_passed++; } total_tests++;

    if((digitSum("wittestsIsaCrazyMiXofRUPPERandloWercaseLENTERSth") == 1411)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazyMiXLENTERS") == 846)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVSThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 9881)){ tests_passed++; } total_tests++;

    if((digitSum("wiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 1197)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDMERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 9959)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 7261)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUFCHALtabsBCDEFGHIJKLMNOPQRSTUVThisONGSTRINGIWONDERIFFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 6852)){ tests_passed++; } total_tests++;

    if((digitSum("uidRKhwDoJ") == 299)){ tests_passed++; } total_tests++;

    if((digitSum("witaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZZZh") == 5624)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINEGWITHMANYUPPERCASELETTERSANDNOSPACES") == 4044)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFKLMONOPQRSTUVWXYZ") == 1804)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASESLETTERS.") == 9881)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCSTUVWXYZ67890") == 890)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t1A$Bc&Def3@F5n") == 1314)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXTHISISALONGSTRINGWITHMANYUPPERCASELETTERSANDNOSPACESThisAThisZ") == 4473)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALAtabsWXYZRGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 10152)){ tests_passed++; } total_tests++;

    if((digitSum("wiwth") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("dgtm") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOJKLMNOPQRSTUVThish") == 1759)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCASSELETTOERSANDNOSPACESThis") == 4221)){ tests_passed++; } total_tests++;

    if((digitSum("tteWercaseLENTERS") == 628)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIsaCrazyMiXofUPPERaTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nLENTERS") == 2511)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMN0OPQRSTUVWXYZ67890") == 2089)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZ") == 503)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazyMiERS") == 451)){ tests_passed++; } total_tests++;

    if((digitSum("AThis") == 149)){ tests_passed++; } total_tests++;

    if((digitSum("wiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t55t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 798)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHIJKLMNOPQRESTUVThis") == 1749)){ tests_passed++; } total_tests++;

    if((digitSum("tettestsIsaCrazyMiXLENTERSstestt") == 846)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOJKLMNOPQRSsh") == 1420)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMTANYUPPERCASELETTERS.") == 9952)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOJKLMNOPQRSTUVtabsWDXYZThish") == 2181)){ tests_passed++; } total_tests++;

    if((digitSum("iThis") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("tabsbBCDEFs") == 340)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOJKLMNOPQRSTUVtabsWDXDYZThish") == 2249)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.tabsiYWXYAThisZ") == 10390)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTR12345ABCDEFGHJIJKLMNOPQRSTUVWXYZ67890NDNOSPACESThis") == 4009)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSDNOSPACES") == 7183)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRS") == 1341)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOQRSsh") == 881)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5testt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5n") == 672)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t12345ABCSTUVWXYZ67890estt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5n") == 1562)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms55t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5ntabsBCDEFGHIJKLMNOPQRSTUVThis") == 2877)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUtabsttestsIsaCrazyMiERSBCDEFGHIJKLMNOPQRSTUVThisVVVVWWWXXXYYYZZZ") == 7755)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVSThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.b5t5m5t5nm5t4K5t5ms55t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5ntabsBCDEFGHIJKLMNOPQRSTUVThis") == 12758)){ tests_passed++; } total_tests++;

    if((digitSum("wittestsIsaCrazyrcaseLENTERSth") == 681)){ tests_passed++; } total_tests++;

    if((digitSum("antabsWXYABCDEFGHIJLMNOPQRSTUVWXYZZd") == 2294)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELEcTTERSNDNOSPACES") == 7261)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5ThTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5ttabsBCDEFGHIJKLMNOPQRSTUVThis") == 2403)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSETRINGIWONDMERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETOTERS.") == 10107)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5Tt5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5testt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5n") == 756)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJGHIJKLMNOPQRSTUVThisVVVVWWWXXXYYYZZZ") == 3694)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERanAdloWerca12345ABCSTUVWXYZ67890seLENTERSStabsBCDEFGHIJKLMNOPQRSTUittabsBCDEFGHIOJKLMNOPQRSshVWXYZALONGSTRINGWITHMANYUPPERCASELEcTTERSNDNOSPACES") == 9636)){ tests_passed++; } total_tests++;

    if((digitSum("stabsWXYAThisZa") == 503)){ tests_passed++; } total_tests++;

    if((digitSum("stabsWXThisZ") == 349)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXTHICSISALONGSTRINGWITHMANYUPPERCASELETTERSANDNhOSPACESThisAThisZ") == 4540)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.IJJJJGHIJKLMNOPQRSTUVThisVVVVWWWXXXYYYZZZ") == 5956)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t1c&Def3@F5n") == 464)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5Tt5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5testt5s5tt5v5tt5sn5t5M5t1A$Bc&Def3@F5n") == 756)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZsaCrazyMiXofRUPPEWRandloWercaseLENTERS") == 1847)){ tests_passed++; } total_tests++;

    if((digitSum("tabiThissBCDEFGHIJKLMNOPQRS") == 1425)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEtHisIsaCrazyMiXofRUPPERandloWercaseLENTERSFTGHIJKLMNOPQRSTUVThis") == 3247)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazyMiXofRUPPERPandloWercaseLENTERS") == 1491)){ tests_passed++; } total_tests++;

    if((digitSum("tteWeTrcaseLENTERS") == 712)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFTGHIJKLMNOPQRSTUVThis") == 1764)){ tests_passed++; } total_tests++;

    if((digitSum("wiTh!s!s$0nly4t3s5t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t55t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 798)){ tests_passed++; } total_tests++;

    if((digitSum("wiwtTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5ThTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5ttabsBCDEFGHIJKLMNOPQRSTUVThis") == 2403)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNDOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 7329)){ tests_passed++; } total_tests++;

    if((digitSum("1A$Bc&Def3@Fnewlines") == 269)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPtHisIsaCrazyMiXofRUPPERandloWercaseLENTERSQRS") == 2824)){ tests_passed++; } total_tests++;

    if((digitSum("tteWeTrcaseLeENTERS") == 712)){ tests_passed++; } total_tests++;

    if((digitSum("stabsWXTisZ") == 349)){ tests_passed++; } total_tests++;

    if((digitSum("witaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRTh!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t12345ABCSTUVWXYZ67890estt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5nRRRSSSSTTTTUUVVVVWWWXXXYYYZZZh") == 7186)){ tests_passed++; } total_tests++;

    if((digitSum("wiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5ttabsWDXYZazyMiXLENTERSstestt5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 2325)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms55t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5tn5pn5t5shr5t5SS5t5v5t5sn5t5M5t5ntabsBCDEFGHIJKLMNOPQRSTUVThis") == 2877)){ tests_passed++; } total_tests++;

    if((digitSum("witTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms55t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nh") == 1197)){ tests_passed++; } total_tests++;

    if((digitSum("ttwitwhtabsBCDEFGHIJKLMNOPQRSTUVThiseWercaseLENTERS") == 2308)){ tests_passed++; } total_tests++;

    if((digitSum("dgtmtteTrcaseLeENTERSm") == 625)){ tests_passed++; } total_tests++;

    if((digitSum("tabstest") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5nistabsWXYZ5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 2193)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPQBRSTUVWXYZ") == 2081)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaTHISISALONGSTRINGWITHMANYUPPERCASELETTERSANDNOSPACESCrazyMiXofRUzPPERIandloWercaseLENTERS") == 5459)){ tests_passed++; } total_tests++;

    if((digitSum("tettsestsIsaCrazyMiXLENTERSstestt") == 846)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5vn") == 968)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5testt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5nt5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms55t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1869)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZazyMiXLENTERSstestt") == 1128)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSETRINGIWONDMERIFITWILLOVERFLOWMYTEtabsBCDEFGIJKLMNOPQRSTUVThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETOTERS.") == 10035)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRSTUVWXYZ") == 1950)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROROEVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 9877)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazyMiXofRUPPERandloWercaseLENRS") == 1258)){ tests_passed++; } total_tests++;

    if((digitSum("CtabsBCDEtHisIsaCrazyMiXofRUPPERandloWercaseLENTERSFTGHIJKLMNOPQRSTUVThis") == 3314)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5hwithWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALAtabsWXYZRGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.t5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5ts5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 11349)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQittabsBCDEFGHIOJKLMNOPQRSshROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTtabsbBCDEFsERS.") == 10509)){ tests_passed++; } total_tests++;

    if((digitSum("tettsestsIsaCrazyMiXLENTERtt") == 763)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f55S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t1c&Def3@F5n") == 380)){ tests_passed++; } total_tests++;

    if((digitSum("tabsttestsIsaCrazyMiERSBCDEFGHIJKLMNOPQRSTUVThis") == 2131)){ tests_passed++; } total_tests++;

    if((digitSum("tetHisIsaCrazyMiXofUPPERaTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nLENTERSt") == 2511)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCSTUVWCXYZ67890") == 957)){ tests_passed++; } total_tests++;

    if((digitSum("1A$eBc&Def3@Fnewlines") == 269)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOJKLMNOPQRSTUVThishittabsBCDEFGHIOQRSsh") == 2640)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCtabiThissBCDEFGHIJKLMNOPQRSGHIJKLMNOPQRSTUVWXYZsZ") == 3258)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZsaCrazyMiXofRUPPERandloWercaseLENTERSsWXYZ") == 2114)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHIJKLMNOPQRSTUVThis") == 1680)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTTh!s!s$0nly4t3st!ng-f55S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t1c&Def3@F5nRINGIWONDMERIFITWILLOVERFLOWMYCTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 10406)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQittabsBCDEFGHIOJKLMNOPQRSshROREVENALARGBUFFER.ITSJUSTSOMANYUPPEERCASELETTERS.THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVaWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 17499)){ tests_passed++; } total_tests++;

    if((digitSum("s") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONGSTRILNGWITHMANYUPPERCASELEcTTERSNDNOSPACES") == 7337)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXoIfUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNDOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 7402)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXTHICSISALONGSTRINGWITHMANYUPPERCASELETTERisAThisZ") == 3558)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRSTUVWXYZDThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETOTERS.") == 6420)){ tests_passed++; } total_tests++;

    if((digitSum("ABCQRSTUVWXYZ") == 1053)){ tests_passed++; } total_tests++;

    if((digitSum("ttwitwhtabsBCDEFGHIJKLMNOPQRSTUVThiseWABCQRSTUVWXYZercaseLENTERS") == 3361)){ tests_passed++; } total_tests++;

    if((digitSum("ntestewlines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMN0OPQRSTUVWXYZY67890") == 2178)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXoIfUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNDOPQRSTUVWXYZALONGSTRINGWIITHMANYUPPERCASELETTERSNDNOSPACES") == 7475)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testtwitWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.h5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 11065)){ tests_passed++; } total_tests++;

    if((digitSum("witabsiYWXYAThisZTh!s!s$0nly4t3s5t!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t55t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 1390)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEtHisIsaCraztabsiYWXYAThisZyMiXofRUPPERandloWercaseLENTERSFTGHIJKLMNOPQRSTUVThis") == 3839)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZZ") == 593)){ tests_passed++; } total_tests++;

    if((digitSum("12345AHBCDEFGHJIJKLMN0OPQRSTUVWXYZY67890") == 2250)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0tnly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1197)){ tests_passed++; } total_tests++;

    if((digitSum("TATihiABCDEFKLMNOPQRSTUVWXYZstabsWXYAThisZa") == 2461)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZtabtHisItabsBCDEFGHIJKwithWOWTHISISSUCHALONGSTRINGIWONDERIFITtabsBCDEFTGHIJKLMNOPQRSTUVThisLMNOPQRSTUVThis") == 11737)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMWiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNDOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 7416)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHIJKLMNOPQRESQTUVThis") == 1830)){ tests_passed++; } total_tests++;

    if((digitSum("tetHTh!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t12345ABCSTUVWXYZ67890estt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5nisIsaCrazyMiXofUPPERaTh!s!s$0nly4t3sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SSaaaaabbbbbbccccccdddeeefffggggHHHHHIIIHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.IJJJJGHIJKLMNOPQRSTUVThisVVVVWWWXXXYYYZZZ5t5v5t5sn5t5M5t5nLENTERSt") == 9558)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONGSTRILNGWITHMANYUPPERCASELEcTTERSNDNPACES") == 7175)){ tests_passed++; } total_tests++;

    if((digitSum("wiRth") == 82)){ tests_passed++; } total_tests++;

    if((digitSum("tabsTS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 475)){ tests_passed++; } total_tests++;

    if((digitSum("tesiWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.sbsWDXYZ") == 10290)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZHIJKLMNDOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 5552)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVEaCrtabsBCDEFGHIJKLMNOPQRSTUVThis") == 8402)){ tests_passed++; } total_tests++;

    if((digitSum("wiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5ttabsWDXYZazyMiXLENTERSstestt5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5ttest5SS5t5v5t5sn5t5M5t5nth") == 2325)){ tests_passed++; } total_tests++;

    if((digitSum("tabsTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5hwithWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALAtabsWXYZRGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.t5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5ts5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 11349)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZsaCtetHisIsaCrazyMiXofUPPERaTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nLENTERStrazyMiXofRUPPERandloWercaseLENTERSsWXYZ") == 4625)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5ttabsBCDEtHisIsaCrazyMiXofRUPPERandloWercaseLENTERSFTGHIJKLMNOPQRSTUVThis5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5testt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5n") == 3919)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYZ5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1148)){ tests_passed++; } total_tests++;

    if((digitSum("twithWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQittabsBCDEFGHIOJKLMNOPQRSshROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.twitwhtabsBCDEFGHIJKLMNOPQRSTUVThiseWABCQRSTUVWXYZercaseLENTERS") == 13530)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCAtetHTh!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t12345ABCSTUVWXYZ67890estt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5nisIsaCrazyMiXofUPPERaTh!s!s$0nly4t3sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SSaaaaabbbbbbccccccdddeeefffggggHHHHHIIIHELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWELL.IJJJJGHIJKLMNOPQRSTUVThisVVVVWWWXXXYYYZZZ5t5v5t5sn5t5M5t5nLENTERStSELETTERS.") == 17676)){ tests_passed++; } total_tests++;

    if((digitSum("tabsbBiThisEFs") == 289)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVSThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.b5t5m5t5nm5t4KKLMNOPQRSTUVThis") == 11409)){ tests_passed++; } total_tests++;

    if((digitSum("1A$Bc&Def3@FnewliDnes") == 337)){ tests_passed++; } total_tests++;

    if((digitSum("tabsiYWXYAThisZ") == 592)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5n5t5Ar5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 879)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYATThisZHIJKLMNDOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 5636)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINEGWITHMANYUPPERCAtabsBCDEFGHIJKLMNOPtHisIsaCrazyMiXofRUPPERandloWercaseLENTERSQRSERSANDNOSPACES") == 6403)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOJKh") == 784)){ tests_passed++; } total_tests++;

    if((digitSum("atabsbBCDEFs") == 340)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZa") == 503)){ tests_passed++; } total_tests++;

    if((digitSum("wiTh!s!s$0nly4t3st!ng-1&2%tteWercaseLENTERS3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testtwitWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.h5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nn5t5r5testt5s5t5n5n5M5t55t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 12491)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0tnly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5nff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1197)){ tests_passed++; } total_tests++;

    if((digitSum("tabiThissBCDEFGHI") == 640)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZwitWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVYERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.h") == 10460)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFGER.ITSJUSTSOMANYUPPERCASELETTERS.tabsiYWXYAThisZ") == 10461)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZsaCrazyMiXofRUPPEVtabsBCDEFGHIJKLMNOPQRSTUVThis") == 2816)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQitAThis") == 5288)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereOURdayISgoingWELL.") == 1082)){ tests_passed++; } total_tests++;

    if((digitSum("itTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5ttabsBCDEFGHIJKLMNOPQRSTUVThis") == 2083)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLJUSTSOMANYUPPERCASELETTERS.sbsWDXYZ") == 3227)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVwittestsIsaCrazyMiXofRUPPERandloWercaseLENTERSthThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 11209)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms55v5t5sn5t5M5t1A$Bc&Def3@F5n") == 672)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZsaCrazyMiXofRUPPEVtabsBCDEFLMNOPQRSTUVThis") == 2451)){ tests_passed++; } total_tests++;

    if((digitSum("12345ABCDEFGHJIJKLMN0OPQRSTUVWtabtHisItabsBCDEFGHIJKwithWOWTHISISSUCHALONGSTRINGIWONDERIFITtabsBCDEFTGHIJKLMNOPQRSTUVThisLMNOPQRSTUVThisXYZY67890") == 8471)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZwlines") == 503)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETOTERS.") == 4742)){ tests_passed++; } total_tests++;

    if((digitSum("ABCQRSTUVWwithWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFGER.ITSJUSTSOMANYUPPERCASELETTERS.tabsiYWXYAThisZXYZ") == 11514)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITtettestsIsaCrtabsBCDEFGHIJKLMNOPQRSTUVThis") == 9511)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testtwitWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMASNYUPPERCASELETTERS.h5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 11148)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJKLMNOPQBSTUVWXYZ") == 1999)){ tests_passed++; } total_tests++;

    if((digitSum("tesiWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.sbsWDXYZiwth") == 10290)){ tests_passed++; } total_tests++;

    if((digitSum("CtabsBCDEtHisIsaCrazyMiXofRUPPERawitestthndloWercaseLENTERSFTGHIJKLMNOPQRSTUVThis") == 3314)){ tests_passed++; } total_tests++;

    if((digitSum("tHisItabbsBCDEFGHIJKLMNOPQRSTUVThis") == 1825)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVSThisXTEDIgTOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.b5t5m5t5nm5t4KKLMNOPQRSTUVThis") == 11409)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrarzyMiXofRUPPERandloWercaseLENTERS") == 1411)){ tests_passed++; } total_tests++;

    if((digitSum("tabsABCDEFThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETOTERS.") == 4807)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOtabsBCDEFGHIJKLMNOPQRSTUVWXYZtabsWXYZsZCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 11720)){ tests_passed++; } total_tests++;

    if((digitSum("WpMhOT") == 327)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGI12345ABCDEFGHJIJKLMN0OPQRSTUVWXYZY67890WONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROROEVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 12055)){ tests_passed++; } total_tests++;

    if((digitSum("tabswithWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVSThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTEROS.WXYZ5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 11108)){ tests_passed++; } total_tests++;

    if((digitSum("yxGNyD") == 217)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEABCDEFKLMONOPQRSTUVWXYZFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALAtabsWXYZRGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 11956)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSETRINGIWONDMERIFITWILLOVERFLOWMYTEtabsBCDEFGwitaaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRTh!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5t12345ABCSTUVWXYZ67890estt5s5tt5v5t5sn5t5M5t1A$Bc&Def3@F5nRRRSSSSTTTTUUVVVVWWWXXXYYYZZZhIJKLMNOPQRSTUVThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETOTERS.") == 17221)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHaIJKLMNOPQRESQTUVThis") == 1830)){ tests_passed++; } total_tests++;

    if((digitSum("antabsWXYABCDEFGHIJLMaNOPQRSTUVWXYZZd") == 2294)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZNTERS") == 899)){ tests_passed++; } total_tests++;

    if((digitSum("Thiwitestths") == 84)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHITHISISALONGSTRINEGWITHMANYUPPERCASELETTERSANDNOSPACESJKLMNOPQRESTUVThis") == 5793)){ tests_passed++; } total_tests++;

    if((digitSum("atabstabsBCDEFGHIJKLMNOPQRSTUVThisbBCDEFs") == 2020)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHaIJKLMNOPQRESTh!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5vnQTUVThis") == 2798)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOtabsBCDEFGHIJKLMNOPQRSTUVWXYZtabsWXYZsZCDEFGHIJKLNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 11643)){ tests_passed++; } total_tests++;

    if((digitSum("wiRith") == 82)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5Tt5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5nt5t5r5testt5s5tt5v5t5sn5tteWercaseLENTERSDef3@F5n") == 1176)){ tests_passed++; } total_tests++;

    if((digitSum("tabtHisItabsBCDEFGHIJKwithWOWTHISISSUCHALONGSTRINGIWONDERIFITtabsBCDEFTGHIJKLMNOPQRSTTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVSThisXTEDIgTOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.b5t5m5t5nm5t4KKLMNOPQRSTUVThisUVThisLMNOPQRSTUVThis") == 17702)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazyMiXofRUzPPERandloWercaseLENtettestsIsaCrazyMiXLENTERSstesttRS") == 2104)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSETRINGIWONDMERIFITWILLOVERFLOWMYTEtabAThis") == 4258)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHaIJKLMNOPQRESTh!s!s$0nly4t3st!nng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5mAThis5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5vnQTUVThis") == 2947)){ tests_passed++; } total_tests++;

    if((digitSum("uidRKohwDoJ") == 299)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQittabsBCDEFGHIOJKLMNOPQRSshROREVENALARGBUFFER.ITSJUSTSOMANYUPPEERCASELETTERS.THISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVaWXSPACES") == 14325)){ tests_passed++; } total_tests++;

    if((digitSum("witwhtabsBCDEFGHaIJKLMNOPQRESTh!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TSn5t5n5t5Ar5t5pn5t5shr5t5SS5t5vnQTUVThis") == 2798)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5Tt5Th5t5yn5thy5ht5t$Bc&Def3@F5n") == 456)){ tests_passed++; } total_tests++;

    if((digitSum("THISItHisIsaCrazyMiXoIfUPTHISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONGSTRILNGWITHMANYUPPERCASELEcTTERSNDNOSPACESPERandloWercaseLENTERSStabsBCDEFGHIJKLMNDOPQRSTUVWXYZALONGSTRINGWIITHMANYUPPERCASELETTERSNDNOSPACES") == 14812)){ tests_passed++; } total_tests++;

    if((digitSum("tettestsIsaCrazyMiXLENTERSsteestt") == 846)){ tests_passed++; } total_tests++;

    if((digitSum("tabsiWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.sbBiThisEFs") == 10157)){ tests_passed++; } total_tests++;

    if((digitSum("tesiWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENtHisItabbsBCDEFGHIJKLMNOPQRSTUVThis") == 8628)){ tests_passed++; } total_tests++;

    if((digitSum("tabsiYWXYAThisZ5t5m5t5n5t5r5t5s5t5n5n5M5t5s5t5m5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nIfUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNDOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 7951)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZEtabsBCDEFGHIJKLMNOPQRSTUVWXYZtabsWXYZsZRFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 9433)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRSTUVWXYZYZ67890") == 2129)){ tests_passed++; } total_tests++;

    if((digitSum("stabsBCtabiThissBCDEFGHIJKLMNOPQRSGHIJKLMNOPQRSTUVWXYZsZtest") == 3258)){ tests_passed++; } total_tests++;

    if((digitSum("tettrazyMiXLENTERtt") == 623)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRSTUVWXYHZ") == 2022)){ tests_passed++; } total_tests++;

    if((digitSum("withWOWTHISISSUCIHALONGXSTRFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 4362)){ tests_passed++; } total_tests++;

    if((digitSum("newl5ines") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5tTHISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONOGSTRINGWITHMANYUPPERCASELETTERSDNOSPACES5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5vn") == 8230)){ tests_passed++; } total_tests++;

    if((digitSum("t5est") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("wittestsIsaCrazyMiXofRUPPERandloWercaseLENTERSthwiwtTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5ThTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5ttabsBCDEFGHIJKLMNOPQRSTUVThis") == 3814)){ tests_passed++; } total_tests++;

    if((digitSum("tabstabsWXYAThisZiYWXYAThisZ") == 1095)){ tests_passed++; } total_tests++;

    if((digitSum("i") == 0)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZazyMiXLENTERstestt") == 1045)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.tabsWXTHISISALONGSTRINGWITHMANYUPPERCASELETTERSANDNOSPACESThisAThisZ") == 12591)){ tests_passed++; } total_tests++;

    if((digitSum("aaaaabbbbbbccccccdddeeefffggggHHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPQQQQRRRRSSSSTTTTUUVVVVWWWXXXYYYZtabtHisItabsBCDEFGHIJKwithWOWTHISISSUCHALONGSTRINGIWONDERIFITtabsBSTUVThis") == 9486)){ tests_passed++; } total_tests++;

    if((digitSum("tabstabsBCDEFGHIJKLMNOPQRSTUVWXYZtabsWXYZsZWDXYZsaCrazyMiXofRUPPEVtabsBCDEFLMNOPQRSTUVThis") == 4845)){ tests_passed++; } total_tests++;

    if((digitSum("VtabsBCDEFGHIJKLMNOPQRSTUVThis") == 1766)){ tests_passed++; } total_tests++;

    if((digitSum("tteststIsaCrazyMiERS") == 451)){ tests_passed++; } total_tests++;

    if((digitSum("tabtHisItabsBCDEFGHIJKwithWOWTHISISSUCHALONGSTRINGIWONDERIFITtabsBCDEFTGHIJKLMNOPQRSTTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5withWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVSThisXTEDRIgTOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.b5t5m5t5nm5t4KKLMNOPQRSTUVThisUVThisLMNOPQRSTUVThis") == 17784)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testtwitWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMASNYUPPERCASELETTERS.h5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5") == 11148)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRSTUVWXYZabiThissBDCDEFGHIEFGHIJKLMNOPQRSGHIJKLMNOPQRSTUVWXYZsZ") == 5498)){ tests_passed++; } total_tests++;

    if((digitSum("THISISALONGSTRINGWITHMANYUPPERCTASELERSANDNOSPACESThis") == 3906)){ tests_passed++; } total_tests++;

    if((digitSum("tabsbBCDEF") == 340)){ tests_passed++; } total_tests++;

    if((digitSum("tabstabsWXYAThisZiYWYXYAThisZ") == 1184)){ tests_passed++; } total_tests++;

    if((digitSum("wiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5ttabsWDXYZarzyMiXLENTERSstestt5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5nth") == 2325)){ tests_passed++; } total_tests++;

    if((digitSum("ATHISISALONGSTRINGWITHMANYUPPERCTASELERSANDNOSPACESThis") == 3971)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZ5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5ttestsIsaCrazyMiXofRUPPERandloWercaseLENTERSt5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5tn5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t55M5t5ns") == 2710)){ tests_passed++; } total_tests++;

    if((digitSum("wittestsIsaCrazyMiXofRUPPERandloWercawitwhtabsBCDEFGHaIJKLMNOPQRESTh!s!s$0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t5s5t5m5t5sn5ST5TSn5t5n5t5Ar5t5pn5t5shr5t5SS5t5vnQTUVThisseLENTERSth") == 4209)){ tests_passed++; } total_tests++;

    if((digitSum("newlintabstesteTh!s!s$THISItHisIsaCrazyMiXoIfUPTHISItHisIsaCrazyMiXofUPPERandloWercaseLENTERSStabsBCDEFGHIJKLMNOPQRSTUVWXYZALONGSTRILNGWITHMANYUPPERCASELEcTTERSNDNOSPACESPERandloWercaseLENTERSStabsBCDEFGHIJKLMNDOPQRSTUVWXYZALONGSTRINGWIITHMANYUPPERCASELETTERSNDNOSPACES0nly4t3st!ng-f5mm5g55gn5t5Th5t5yn5thytabsBCDEFGsHIJKLMNOPQRSTUVThis") == 16660)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!Sng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mmV5g55gn5t5ThTh!s5!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5ttabsBCDEFGHIJKLMNOPQRSTUVThis") == 2572)){ tests_passed++; } total_tests++;

    if((digitSum("HELLOthereWHATareYOUdoingTODAY?IHopeYOURdayISgoingWEL.") == 2186)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYAThisZwli") == 503)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5Th!s!s$0nly4t3sttabsBCDEFGHIJKLMNOPQRSTUVThis") == 2084)){ tests_passed++; } total_tests++;

    if((digitSum("tHisIstesiWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.sbsWDXYZWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTaERS.aCrazyMiXofUPPERandloWercaseLENTERS") == 21489)){ tests_passed++; } total_tests++;

    if((digitSum("ABCDEFGHIJNKLMNOPQBSTUVWXYZ") == 2077)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWDXYZWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.tabsiYWXYAThisZ") == 8108)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDwithWOWTHISISSUCHALONGSETRINGIWONDMERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTTEDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETOTERS.EFGHIOQRSsh") == 10988)){ tests_passed++; } total_tests++;

    if((digitSum("Th!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testtwitWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMASNYUPPERCASELETTERS.h5s5t5n5n5M5t5s5t5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5tesiWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.sbsWDXYZiwthM5t5") == 21438)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFTGHIJKLMbsWDXYZ") == 1364)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHALONGSTRINisXTEDITOROROEVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 6031)){ tests_passed++; } total_tests++;

    if((digitSum("ttestsIsaCrazRS") == 305)){ tests_passed++; } total_tests++;

    if((digitSum("WOWTHISISSUCHATLONGSTRINGI12345ABCDEFGHJIJKLMN0OPQRSTUVWXYZY67890WONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEDITOROROEVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.") == 12139)){ tests_passed++; } total_tests++;

    if((digitSum("ittabsBCDEFGHIOJKLMNOPQRSTUVtabsWDXDDYZThish") == 2317)){ tests_passed++; } total_tests++;

    if((digitSum("tabsBCDEFGHIJKLMNOPQRSTUVWXYZOPQRSTUVWXYZALONGSTRINGWITHMANYUPPERCASELETTERSNDNOSPACES") == 6406)){ tests_passed++; } total_tests++;

    if((digitSum("iWOWTHISISSUCHALONGSTRINGIWONDERIFITWILLOVERFLOWMYTEtabsBCDEFGHIJKLMNOPQRSTUVThisXTEFDITOROREVENALARGBUFFER.ITSJUSTSOMANYUPPERCASELETTERS.s") == 9868)){ tests_passed++; } total_tests++;

    if((digitSum("tabsWXYZ5nm5t4K5t5ms5t5m5t5n5t5r5t5s5t5n5n5M5t5s5twiTh!s!s$0nly4t3st!ng-1&2%3*4@5_c@5ES.4305t5n5t5v5ff5mm5g55gn5t5Th5t5yn5thy5ht5t5S5t5b5t5m5t5nm5t4K5t5ms5t5m5t5n5t5r5testt5s5t5n5n5M5t55t5shr5t5SS5t5v5t5sn5t5M5t5nth5m5t5sn5ST5TS5t5n5t5n5t5Ar5t5pn5t5shr5t5SS5t5v5t5sn5t5M5t5n") == 1946)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


