#include <string>
using namespace std;

int count_upper(string s) {
    int cnt = 0;
    for (size_t i = 0; i < s.size(); i += 2){  // traverse through the string with a step of 2 to check letters at even indices only
        if (isupper(s[i])){   // checks whether uppercase letter is found in an even indexed position using built-in function isupper()
            switch (s[i]){
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U': cnt++;   // if the character at even index is a vowel, increment count by 1
                  break;  
            }
        }        
    }
    return cnt;
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

    if((count_upper("aBCdEf")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcdefg") == 0)){ tests_passed++; } total_tests++;

    if((count_upper("dBBE") == 0)){ tests_passed++; } total_tests++;

    if((count_upper("B")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("U")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("") == 0)){ tests_passed++; } total_tests++;

    if((count_upper("EEEE") == 2)){ tests_passed++; } total_tests++;

    if((count_upper("aBCdEf")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcdefg")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("dBBE")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("B")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("U")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("EEEE")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("DbdOH")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcDEf")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEOIU")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("XYZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("uEi")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("ABCD")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("hhEErrRR")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrStUvWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("UOIEA")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("bbcefg")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKlMnOpQrStUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AAEOIUBCD")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrStUv")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMABCDnOpQrStUv")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("ABCAbCdEfGhIjKlMABCDnOpQrStUabcDEfvD")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("CABCD")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEOIUIEA")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlabcDEfMnOpQrStUvWxYz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("uEiAEOIU")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("DbdOHUOIEA")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEABCAbCdEfGhIjKlMABCDnAbCdEfGhIjKlabcDEfMnOpQrStUvWxYzOpQrStUabcDEfvDOIUIEA")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AAEOOIUBCD")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("CDbdOHUOIEAABCD")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKlMnOStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("hABCDhEErrRR")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AUEOIUIE")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOhhEErrRRStUvWxCDbdOHUOIEAABCDYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AAEIOOIUBCD")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("DbdOHUOIIEA")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEIfGhIjKlabcDEfMnOpQrStUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AAEOIUBCAAEIOOIUBCDD")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("UOIAEA")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("ABCAnbCdEfGhIjKlMABCDnOpQrStUabcDEfvD")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzrrRRStUvWxCDbdOHUOIEAABCDYz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("AAEIOOIAbCdEfGhIjKlMnOpQrStUvWxYzCD")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("UUOIAEA")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("hhEAAEOIUBCDErrRR")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("ABCAbCdEfGhIjKlMABCAbCdEfGhIjKlMnOpQrStUvDnOpQrStUabcDEfvD")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKlMnOpQrStWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKlMnOpQrStUvWxhhEErrRRYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCAbCdEOhhbEErrRRStUvWxCDbdOHUOIEAABCDYzdEfGhIjKlMnOpQrStUv")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("hABCDhEErrURRAEOIU")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCAbCdEOhhbEErrRRStUvWxCDbdOHUOIEAABCDYzdEfGhIjKlMnOpQrSCtUv")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDfEfMnOpQrStUvWxYzrrRRStUvWxCDbdOHUOIEAABCDYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOhhEErrRRStUvWxCDbAbCdEOfGhIjKlMnOStUvWxYzdOHUOIEAABCDYz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AbxCdEfGhIjKlabcDEfMnOpQrStUvWxYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzStUvWWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOStUvWxYzlMnOpQrStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("DbdOHUIOIEA")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGABCAnbCdEfGhIjKlMABCDnnOpQrStUabDbdOHcDEfvDhIjKlMnOpQrStWxYz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKlMnOpQrSntWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AfbAbCdEIfGhIjKlabcDfEfMnOpQrStUvWxYzrrRRStUvWxCDbdOHUOIEAABCDYz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKlMnOpQrStUvWxhhEErrERRYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("uEiiAEOIU")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("hABChDhEEArrrURRAEOIU")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDfEfMnOpQrStUvWxYzrnrRRStUvWxCDbdOHUOIEAABCDYz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGABCAnbCdEfGhIjKlMABCAfbCdEOhhEEAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzrrRRStUvWxCDbdOHUOIEAABCDYznOpQrStUabDbdOHcDEfvDhIjKlMnOpQrStWxYz")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("DbdH")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDfEfMnOAAEIOOIUBCDpQrStUvWxYzrrRRStUvWxCDbdOHUOIEAABCDYz")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMABtCDnOpQrStUv")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AAEOIUBCAAEIOOIUBCDBD")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AAEAbCdEfGhIjKlMABtCDnOpQrStUvOIUBCD")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDfEfMnOpQrStUvWxYzrnrRAbCdEOhhEErrRRStUvWxCDbdOHUOIEAABCDYzRStUvWxCDbdOHUOIEAABCDYz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("uEiiAEuOIU")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AAAEOIUBCAAEIOOIUBCDDbCdEOfGABCAnbCdEfGhIjKlMABCDnnOpQrStUabDbdOHcDEfvDhIjKlMnOpQrStWxYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AfbAbCdEIfIjKlabcDfEfMnOpQrStUvWxYzrrRRStUDbdOHUOIIEAvWxCDbdOHUOIEAABCDYz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AbCAbCdEOStUvWxYzlMnOpQrStUvWxYhIjKlMnOStAbCdEOfGhIjKlMnOpQrStUvWxhhEErrRRYzWxYz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("uEiAEOAbCdEOhhEErrRRStUvWxCDbdOHUOIEAABCDYzIU")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGABCAnbCdEfGhIjKlMABCAfbCdEOhhEEAbCdEIfGhIjDhIjKlMnOpQrStWxYz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhxEEAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzrrRRStUvWxCDbdOHUOIEAABCDYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDfEfMnOpQrStUvWxYzrrRRStUvWhhEAAEOIUBCDErrRRxCDbdOHUOIEAABCDYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOhhEErrRRStUvWxKlMnOStUvWxYzdOHUOIEAABCDYz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AfbAbCdEIfIjKlabcDfrEfMnOpQrStUvWxYzrrRRStUDbdOHUOIIEAvWxCDbdOHUOIEAABCDYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("bAfbCdEOhhEEAbCdEIfGhIjKlaAbCdEOfGhIjKlMnOpQrSntWxYzAbCAbCdEOStUvWxYzlMnOpQrStUvWxYhIjKlMnOStAbCdEOfGhIjKlMnOpQrStUvWxhhEErrRRYzWxYzfMnOpQrStUvWxYzrnrRAbCdEOhhEErrRRStUvWxCDbdOHUOIEAABCDYzRStUvWxCDbdOHUOIEAABCDYzbcefg")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("UOabcDEfIAEA")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEDOhhEEAbCdEIfGhIjKlabcDfEfMAbCAbCdEOhhbEErrRRStUvWxCDbdOHUOIEAABCDYzdEfGhIjKlMnOpQrStUvnOAAEIOOIUBCDpQrStUvWxYzrCrRRStUvWxCDbdOHUOIEAABCDYz")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("AE")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDfEfMnOAAEIOOIUBCDpQrStUvWxYzrrRRStUvWxCDbdOHUOIEACABCDBCDYz")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOhhEErrRRStAbCdEfGhIjKlMnOpQrStUvWxYzUvWxCDbAbCdEOfGhIjKlMnOStUvWxYzdOHUOIEAABCDYz")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("AfbAbCdEIfIjKlabcDfrEfMnOpQrStUvWxYzrrRRStUDbdOHUOIIEAvWxCDbdOAbCdEOAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzStUvWWxYzHUOIEAABCDYz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("uEiiAEOIUDbdOH")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhDbdOHUOIEAIjKlMnOpQrStWxYz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AbCAbCdEOfGhIjKlMnOpQrStUvWxYzdEOStUvWxYzlMnOpQrStUvWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AbCAbCdEOfGhIjKlMnOpQrStUvWxYzdEOSAbCdEOAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzStUvWWxYztUvWxYzlMnOpQrStUvWxAEOIUIEAYz")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("AbCAbCdEOfGhIjKlMnOpQrStUvWxYzdEOSAbCdEOAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzStUvWWxYztUvWxYzlMnOpQrStUvWxAEOIUIEAYzUOabcDEfIAEA")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKAlMnOpQrSntWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhDbdOHUOIEAAbCdEOfGhIjKlMhnOpQrStUvWxhhEErrERRYzIjKlMnOpQrStWxYz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("DdH")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOfGhIjKlMnOpAbCdEIfGhIjKlabcDEfMnOpQrStUvWxYzQrStUvWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("ACAEOhhEAAEOIUBCDErrRRIUBCD")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AbCAbCdEOfGhIjKlMnOpQrStUvWxYzdEOStUvnWxYzlMnOpQrStUvWxYzAUEOIUIE")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQAbCAbCdEOStUvWxYzlMnOpQrStUvWxYhIjKlMnOStAbCdEOfGhIjKlMnOpQrStUvWxhhEErrRRYzWxYzv")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AfbCdEOhhEEAbCdEIfGhIjKlabcDfEfMnOAAEIOOIUBCDpQrStUvWxYzrrRRStUvWxCDbdOHUOIEACABCDBCDYAfbAbCdEIfIjKlabcDfEfMnOpQrStUvWxYzrrRRStUDbdOHUOIIEAvWxCDbdOHUOIEAABCDYzz")  == 26)){ tests_passed++; } total_tests++;

    if((count_upper("bbcefguEiiAEuOIU")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("uEii")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("DbdHhABCDhEErrRR")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("DbdOHuEiiUOIIE")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AAEAbCdEfGhIjKlMAuEiBtCDpQrStUvOIUBCD")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghJklzXcVbnM")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhiJkLmNoPqRsTuVwXyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmnOPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKI")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePJwoSMqrdxvQZaGT")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("bcDfgHjklMpRStVWXZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjKDimUqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIdjKlMnOpQrStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOpQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiiouBCDFGjkLmnOPrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOpQrStUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("VWAbCdEOpQrStUvWxYzxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmnOPCrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVW")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("yfUqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AWYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("VWAbCCdEOpQrStUvWxYzxyZ")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("bFjyNNsqqpPazeMePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("bFjsqqpPazZeMePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJzKLmnOPrsTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFzbvuyrwqpmlabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("TKnkfLt")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfUPFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouBCDFGjkLmnOPrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzGvGnTKnkfLtPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("z")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGT")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGn")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOpQAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiiouBCDFGyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnWxYzePJwoSMqrdxvQZaGTqVsxzTvGnWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdFEFGHiJKLMNOpQRstuVWx")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiouBCDFGJzKLmnOPrsTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("bFjsqqpPazZeMePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZAbCdEfGhiJkLmNoPqRsTuVwXyZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSTKnkfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCODFGJzKLmnOPrsTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmynOPCrOsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUPFjyNNsqqzpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("YAWYz")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AkExIOUaeiiouBCDFGjkLmnOPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("h")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAEIOUaeiouBCDFGjkLmnOPrsTxyzOpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AEyz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqYAWYzVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlqweRtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCODFUGJzKLmnOPrsTxyAWYzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiouBCDFGJzKLmnOz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnAbCdEOpQrStUvWxYzoSMqrdxvQZaGT")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yQqVsxzvGn")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDLFGjkLmnOPrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVDjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnOPCrOsTx")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGyfUFjyNNsqqpPazeMePJwoSTKnkfLtnHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVeWxPrsTxyzDFGJKLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzAEIOUaeiiouBCDFGyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqcpMPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJxwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGn")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVysxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("TKnfkfLt")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDLEFGjkLmnOPrsTxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouBCDFGjkLmnOPrsTxyzzz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyzORjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazHeMeabcdFEFGHiJKLMNOpQRstuVWxPJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRstuVWxPrsTxyzGTaqVsxzvGn")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouAEIOUaeiouBCDLFGjkLmnOPrsTxyzeBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVDjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzAEIOUaeiiouBCDFyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnGyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKLMNOpQRstuVWx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIUOUaeiouBCDxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaueOiouBCDFGJzKLmnOz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYfGhIdjKlMnOpQrStUvWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yQfUFjyNNsqqpPazeMePJwoSMqrabcdFEFGHiJKLMNOpQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfLtn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeMePJAWYzwoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcdVWx")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLmnOPrsTxyzOpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdMFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaAEIOUaeiouBCDFGJzKLmnOPrsTxyAWYzzeiiouBCDFGjkLmnOPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNssqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnAbCdEOpQrStUvWxYzoSMqrqweRtYuIOPasdFghJklzXcVbnMdxvQZaGT")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeGTqVsxzqweRtYuIOPasFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKLMNOpAEIUOUaeiouBCDxyzQRstuVWx")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIdjKlMnOpQrStUvWxYyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRstuVWxPrsTxyzGTaqVsxzvGn")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGDjakLmnOPrsTxyzOpQRstuVWxyZ")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOPrsTxyz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYAEIOOUaeiouBCODFUGJzKLmnOPrsTxyAWYzzz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zbNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYAEIOOUaeiouBCODFUGJzKLmnOPrsTxyAWYzzzvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKI")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaeiouBCDFGjkLmynOPCrOsTxyzouBCDFGJzKLmnOPrsTxyAWYzz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFqjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfLtnn")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAEIOUaeiouBCDLFGjkLmRnOPrsTxyzKLMNOpQRstuVWx")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRastuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGnRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("bFjsqqpPazZeMePJwoSMqrdxvQZaGTcDfgHjklMpRStzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKI")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMYAWYzePJwoKSTKnkfLtn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("YA")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouBCDFyfUqyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnVsxzvGnPrsTxyAWYzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEabcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVWIOUaeiouBCDFGJzKLmnOPrsTxyAWYzz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOKUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGDjakLmnabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxOPrsTxyzOpQRstuVWxyZ")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouByfbYpORjKDimUqVsxzvGnCDFGjkLmnOPrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRW")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDsimUqVsxzvGnPrsTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("yfUzFjyNNsqqpPazeMePJwoSMqrdxvQZayfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJxwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnGTqVsxzTvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzRstuVWxQZaGTqVsxzvGn")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGndxvQZaGTiJpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQRstuVWxyZskjhgfedcbaZXJUTSRPONMLKI")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIXJUTSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWx")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLmnOPrsTxyzOGpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("bFjsqqpFjyNNsqqpPazeMePJwoSMqrdxvQZaGTPabcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVWazZeMePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcdVWxNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNuIOPasdFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGAjkLmnOPCrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zz")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOAEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 33)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnWxYzePJwoSMqrdxvQZaGTqVsxzTvGnWxYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMeePJwoSMqrdxvQZaGT")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzJKLmnOPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwAbCdEOpQrStqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvyfUPFjyNNsqqzpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnQZaGTqVsxzTvGnOPCrOsTx")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwoSTKnkfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouBCDFGjkLmnIOPrsTxyzzz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxazeMePJwoSMqrdxvQZaGTiJKLMyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnNOpQRstuVWxPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAaEIOUaeiouBCDLFGjkLmnOPrsTxyzKLMNOpQRstuVWx")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("TyfbYpORjKDimUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLt")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzTvGnWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmOryfbYpORjKDimUqVAEIOUaeiouBCDFGJTyfbYpORjKDimUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLtvGnPrsTxyzsxzvGnPrsTxyz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("yQqVsxvzvGn")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("VWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZ")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazAEIOUaeOiAEIOUaeiouBCDFGjkLmynOPCrOsTxyzouBCDFGJzKLmnOPrsTxyAWYzzeMePJwoSTKnkfLtn")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjNKlMnOpQrStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeDiiouBCDFGyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZ")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAaEIOUaeiouBCDLFsGjkLmnOPrsTxyzKLMNOpQRstuVWx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOpQAEIOUaeiouBCDFzbvuyrwFjyNNsqqpPazeMePJwoSMqrdxovQZaGTqpmlabcdELMNOpQRstuVWxyZkjtuVWxyZ")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("TKnKfkfLt")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAEIOUaeiouVWAbCdEOpQrStUvWxYzxyZBCDLeFGjkLmnOPrsTxyzKLMNOpQRstuVWx")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yQfUFjyNNsqqpPazeMePJwoSMqrabcdFEFGHiJKLMNOpQAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzRstuVWx")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("bFjsqqpPazZeMePJwvoSMqrdxvQZaGTcDfgHjklMpRStzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKI")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZ")  == 26)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWabcyfUqVsxzvGndEFGHiJKLMNAEIOUaeiouBCDFGjkLmnOPrsTxyzOpQRstuVWxyZx")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("TKnKfAEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzkfLt")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIAWYzOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPbrsTxyzsxzGvGnTKnkfLtPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhiJkLmNPqRsTVuVwXyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("TKnKfAEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStabcdVWxNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzxAEIOUaeiouAEIOUaeiouBCDLFGjkLmnOPrsTxyzeBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzYzkfLt")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDAEIOUaeiouBCDFGAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzJKLmnOPrsTxyzLEFGjkLmnOPrsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGyfUFjyNNsqqpPazeMePJwoSTKnkfLtnHFjyNNsqqpPazeMePJwoSMqyQqVsxzvGnrdxvQZaGTiJKLMNOpQRstuVeWxPrsTxyzDFGJKLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("abbcdEFGHiJKLMNOpQRstuVWxyZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDabcdEFGHFjyNNsqqpPazeMePJAWYzwoSMqrdxvQZaGTiJKLMNOpQRstuVWxOsTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouAEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnOPCrOsTxBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJxwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGGnOPCrOsTx")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AkExIOUaeiiouBCDFGjkLmnOPrsTxyzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDsimUzvGnPyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzRstuVWxQZaGTqVsxzvGnTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFqjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfLztnn")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzJKLmnOPrsTxyzLEFGjkLmnOPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyyfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfLtnAWYzzEIOUaeiouBCDFGDjakLmnOPrsTxyzOpQRstuVWxyZ")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMNOpQRstuVWxyZbcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaAEabcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVWIOUaeiouBCDFGJzKLmnOPrsTxyAWYzzeiouBCDFGjkLmynOPCrOsTxyzouBCDFGJzKLmnOPrEsTxyAWYzz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpMPazeMePJwoSMqQrdxvQZaGTiJKLMNOpQRstuVWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwWqpmlqweRtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFwjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAaEIOUaeiouBCDLFGjkrsTxyzKLMNOpQRstuVWx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIDOUaeOiouBCDFGJzKLmnOOz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYpORjKSDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwozbNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYAEIOOUaeiouBCODFUGJzKLmnOPrsTxyAWYzzzvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKISMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRst")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpAEIOUaeiouBCDFGJKLmOryfbYpORjKDimUqVAEIOUaeiouBCDFGJTyfbYpORjKDimUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLtvGnPrsTxyzsxzvGnPrsTxyzPONMLKI")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdyfUPFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnxvQZaGTiJKLMNOpQRstuVWxazeMePJwoSMqrdxvQZaGTiJKLMyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnNOpQRstuVWxPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNhNsqQZaGTqVsxzTvGxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AkExIOUaeiAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyziouBCDFGjkLmnOPrsTxyz")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOPrsTxyzmnOPrsTWxyzOpQRstuVWxyZAEIOUaeiouBCDFGJKGLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("AkExIFGjkLmnOPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("bFjsqqpPazZeMAbCdEfGhiJkLmNPqRsTVuVwXyZePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZAbCdEfGhiJkLmNoPqRsTuVwXyZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouByfbYAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzpORjKDimUqVsxzvGnCDFGjkLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGKLMNOpQRstuVWxPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNswqqpPazeMePJwoSMqrdxvQZaGTqVysxzn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnastuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGnRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFzbvuyrwqpmlabcdEFGHilJKLMNYuIOPasdFghJklzXcVbnMvGnLKIGJzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQRstEuVWxyZskjhgfedcbaZXJUTSRPONMLKI")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyziouBCDFGJKLmOyfbYpORjKDimUqVAEIOUaeiGnPrsTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrrsTxyAWYzzEIOUaeiouBCDFGDjakLmnOPrsTxyzOpQRstuVWxyZ")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeyfbYpORjKDimUqVsxzabcdEFGHiJAaEIOUaeiouBCDLFsGjkLmnOPrsTxyzKLMNOpQRstuVWxvGnMYAWYzePJwoSTKnkfLtn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFAEIOUaeiouBCDLEFGjkLmnOPrsTxyzjyNNqsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwWqpmlqweURtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBOCODFGJzKLmnOPrsTxyAWYzz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeAEIOUaeiouBCDFzbvuyrwqpmlabcdEFGHilJKLMNYuIOPasdFghJklzXcVbnMvGnLKIGJzzMePJwyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnAbCdEOpQrStUvWxYzoSMqrdxvQZaGT")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDabcdEFGHFjyNNsqqpPazeMePJAWYzwoSMqrdxvQZaGTiJKAbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzYzLMNOpQRstuVWxOsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJxwoSMqMrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouBCDFyfUqyQfUFjyNNsqqpPazeMePJwoSsMqrdxvQZaGTqVsxzvGnVsxzvGnPrsTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("zzbFjsqqpPazZeMAbCdEfGhiJkLmNPqRsTVuVwXyZePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZAbCdEfGhiJkLmNoPqRsTuVwXyZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqqpPazeMePJwoSTKnkfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeKiouBCDFGJzKLmnnOPrsTxyAWYzAEIOUaeiiouBCDFGyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqqpPazeMePJwoSTKnkKfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQRstuVWxyZskjhgRfedcbaZXJUTSRPONMLKI")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVDjKDimUqVsxzvGnePrsTxyzsxzvGnPrsTxyz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zAEIOUaeiouBCDFGJKLmnOPrsTxyzz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQRstuVWxyZskjhgRfedcbaZAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyzXJUTSRPONMLKI")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGzbvuyrwqpmlqweRtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKInabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJxKLMNOpQAEIOUaeiouBCDFzbvuyrwFjyNNsqqpPazeMePJwoSMqrdxovQZaGTqpmlabcdELMNOpQRstuVWxyZkjtuVWxyZ")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMNOpQRstuVWxyrsTxyzKx")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUAEIOUaeiiouBCDFGjkLmnOPrsTxyzaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIXJUTSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyz")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHLiJKLMNOpQRstuVWxyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwAbCdEOpQrStUvWzbvuyrwqpmlabcdEFGHilJKLMNOpQRstuVWxyZskjhgfedcbaZXJUTSRPONMLKIxYzoSMqrdxvQZaGT")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaezz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzSmnOPrsTxyzoSTKnkfLtn")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJkYlzXcVbnMvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("abcdFEFGHiJKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxLMNOpQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACODFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjaWkLmnOPrsTxyzOpQRstuVWxyZ")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazMYAWYzePJwoKSTKnkfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLimnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIXJUTSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyzaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRastuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwTSRPONMLKI")  == 37)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyzORjKDimUqVsxzvGnPrPsTxyzsxzvGnabcdEFGHFjyNNsqqpPazHeMeabcdFEFGHiJKLMNOpQRstuVWxPJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQRstEuVWxyZskjhgfeTdcbaZXJUTSRPONMLKI")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMNOpQRstuVWxyZbcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsjTxyzKx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AmEIOUaeOiouBCDFGJzKLmnOPrsTxyAWYzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVDjKDimmUqVsxzvGnPrsTYAWYzxyzsxzvGnPrsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMGePJwoSMqryfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGndxvQZaGTiJpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqAEIOUaeiouAEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnOPCrOsTxBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzqpPazeGTqVsxzqweRtYuIOPasFghJklzXcVbnMvGn")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyPazeMePJyfUFjsqqpPazeMePJwoSTKnkfLtnwoSMqrdxvQZaGTiJKLMNOpQRstuVeWxPrsTxyzDFGJKLmnOPrsTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("aTKnkfLtbcyfUqVsxzvGndEFGHiJKLMNAAEIOOKUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGDjakLmnabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxOPrsTxyzOpQRstuVWxyZ")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyOpQRstuVWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeAEIOUaeiouBCDFzbvuyrwqpmlabcdEFGHilJKLMNYuIOPasdFghJklzXcVbnMvGnLKIGJzzMePJwyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnAbCdEOpQrStUvWdxvQZaGT")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUAbCdEOpQrStUvWxYzqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 38)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeGTqVsxzqweRvtYuIOPasdFghJklzXMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMGePJwoSMqryfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGndxvQZaGTiJpQRstuVWxPrsTxyzDFGJKLumnOPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJzeKLmnOPrsWTxyAWYzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOAEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrRsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 33)){ tests_passed++; } total_tests++;

    if((count_upper("yfUqVsxzzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("TyfbYpORjKDiymmUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLt")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyabcdEFGHiJAaEIOUaeiouBCDLFGjkrsTxyzKLMNOpQRstuVWxzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 48)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzMGePJwoSMqryfUFjyNNsqqpPazeabcNFjyNNsqqpPazeMePJwAbCdEOpQrStqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzZaGTqVsxzvGndxvQZaGTiJpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyz")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("nKfkfLt")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZ")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMNOpQRstuVWxyZbcdEFGHiiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRAEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzAEIOUaeiiouBCDFGyzstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 28)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCODFUGsz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiiouBCDFGyyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AExEIOUaeiiouByfbYpORjKDimUqVsxzvGnCDFGjkLmnOPrsTxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBACDFGJzKLmnOPWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUzFjyNNsqqpPazeMePJwoSMqrdxvQZayfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJxwoSMqrdxvQZaGTiJKLMNOabcdEFGHFjyWxpQRstuVWxQZaGTqVsxzvGnGTqVsxzTvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazAEIOUaeOiAEIOUaeiouBCDFGjkLmynOPCrOsTxyzouBCDFGJzKLmnOPrsTxyAWYzzeMePJwoSTKnkfLtnzz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouBCDOFGJzKLmnOTPrszTxyAWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjKDyfUzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOAEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTAbCdEOpQrStUvWxYzxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 35)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBAabcdVWxWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("hhh")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouBCDFGjkLmyzzz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeAExIOUaeiiouByfbYpORjKDimUqVsxzvGnCDFGjkLmnOPrsTxyzMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwWqpmlqweURtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRsyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGntuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrAEIOUaeiouBCDFGJKLmOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzsTxyzsxaGTiJKLMNOAEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrRsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 43)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNssqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpzzPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdzbvuyrwWqpmlqweRtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("C")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AAEIOOUaeiouBAabcdVWxWYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxazeMePJwoSMqrdxvQZaGTiJKLMyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnNOpQRstuVWxPrsTvxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVabcdEFGHFwjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWx")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZxaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdpEfGhIjKlMnOpQrStUvWxYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePJwjoSMqrdxvQZaGT")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqqpPazeMePJwoSTKnkAbCdEfGhIjKlMnOpQrStUvWxYzfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDjkLmnOPCrsOTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwAEIyfUFjyNNsqqpPazeGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtn")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAaEIOHUaeiouBCDLFGjkLmnOPrsTxyzKLMNOpQRstuVWx")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORmKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZHiJKLMNOpQRstuVWxPJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 46)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaAEabcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVWIOUaeiouBCDFGJzKLmnOPrsTxyAWYzzeiouBCDFGjkLmynOPCrOsTxyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzRstuVWxQZaGTqVsxzvGnz")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpzbvuyrwqpmlqweRtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIPazeMePJwoSTKnkfLtn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFqjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOAEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGnLztnn")  == 27)){ tests_passed++; } total_tests++;

    if((count_upper("AAEIOOUaeiuouBAabcdVWxWYzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrStUvWz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvAExIOUaeiiouBCDFGjkLmnOPrsTxyzzzWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoWSTKnkfLtn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDjLmnOPCrsOTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFqjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJztnn")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRsthIjKlMnOpQrStUvWz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMNOpQRstuVWxyfUFAEIOUaeiouBCDLEFGjkLmnOPrsTxyzjyNNqsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGnyZbcdEFGHiiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKx")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUqVsxzvGndEFGHmiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZ")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVjKDimUqVsxzvGnPrsTxyzsxvGnPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjPJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePpJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGzbvuyrwqpmlqweRtlzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKInabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabncdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUAEIOUaeiiouBCDFGjkLmnOPrsTxyzaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIXJUTabcyfUqVsxzvGndEFGHmiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyz")  == 38)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGyfUFjyNNsqqpPazeGTqVsxzqweRvtYuIOPasdFghJklzXMvGnJKLmnOPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwWqpmlqweRtYuIOPasdFghJkAkExIOUaeiAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyziouBCDFGjkLmnOPrsTxyzlzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 27)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeKiouBCDFGJzKLmnnOPrsTxyAWYAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzAEIOUaeiiouBCDFGyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsAEIOOUaeKiouBCDFGJzKLmnnOPrsTxyAWYAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzAEIOUaeiiouBCDFGyzTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOAEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTAbCdEOpQrStUvWxYzxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 46)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSIMqrdxvQZaGTqoVsxzTvGnWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yAExIOUaeiiouBCDFGjkLmnOPrsTxyzfUFjyNuIOPasdFghJklzXcVbnMvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AkExIOUaeiioAEIOUaeiiouBCDFGyyzuBCDFGjkLmnOPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdFEFGHAkExIOUaeiioAEIOUaeiiouBCDFGyyzuBCDFGjkLmnOPrsTxyziJKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxLMNOpQRstuVWx")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AAEIOUaeiiouBCDFGyyzmEIOUaeOiouBCDFGJzKLmnOPrsAEIOUaeiouBCDLFGjkLmnOPrsTxyzTxyAWYzz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("naabcdEFGHiJKLMNOpQRstuVWxyZbcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsjTxyzKxfkfLt")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhiJkLmNoAPqRsTuVwXyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxazeMePJwoSMqrdxvQZaGTiJKLMyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTyqVsxzvGnNOpQRstuVWxPrsTvxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIabcdFEFGHAkExIOUaeiioAEIOUaeiiouBCDFGyyzuBCDFGjkLmnOPrsTxyziJKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxLMNOpQRstuTKnKfkfLtbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazAEIOOUaeiouBOCODFGJzKLmnOPrsTxyAWYzzeabcdEFGHFjyNNsqqpPazeMePJxwoSMqMrdxvQZaGyfUFjsqqpPazeMePJwAEIyfUFjyNNsqqpPazeGTqtVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtnTiJKLMNOpQRstuVWxQZaGTqVsxzvGn")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGabcdEFGHiJAaEIOUaeiouBCDLFsGjkLmnOPrsTxyzKLMNOpQRstuVWxJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyabcdEFGHiJAaEIOUaeiouBCDLFGjkrsTxyzKLMNOpQRstuVWxzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 44)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrTxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yQqVsxvzvGnbFjsqqpPazZeMePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZAbCdTEfGhiJkLmNoPqRsTuVwXyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYyfUFjyNNsqAEIOUaeiouAEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnOPCrOsTxBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzqpPazeGTqVsxzqweRtYuIOPasFghJklzXcVbnMvGnPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUAEIOUaeiiouBCDFGjkLmnOPrsTxyzaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIXJUTabcyfUqVsxzvGndEFGHmiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOTxyzAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyz")  == 43)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeAExIOUaeiiouByfbYpORjKDimUqVsxzvGnCDFGjkmLmnOPrsTxyzMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxazeMePJwoSMqrdxvQZaGTiJKLMyQfUpPazeMePJwoSMqrdxvQZaGTqVsxzvGnNOpQRstuVWxPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzJvGnabFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyzORjKDimUqVsxzvGnPrPsTxyzsxzvGnabcdEFGHFjyNNsqqpPazHeMeabcdFEFGHiJKLMNOpQRstuVWxPJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AkEAbCdEfGhiJkLmNoAPqRsTuVwXyZxIFGjkLmnOPrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqqpPazeabcdEFGHFjyNNsqqyfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzSmnOPrsTxyzoSTKnkfLtnpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGndxvQZaGTiJpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdyfUPFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnxvQZaGTiJKLMNOpQRstuVWxiazeMePJwoSMqrdxvQZaGTiJKLMyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnNOpQRstuVWxPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouAbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYzBCDOFGJzKLmnOTPrszTxyAWYzz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeAExIOUaeiiouByfbYyfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtnpORjKDimUqVsxzvGnCDFGjkmLmnOPrsTxyzMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWx")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 44)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoWSTKnkfxLtn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouAbCdEfGhIjKlMnOyfUAEFIzOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYzBCDOFGJzKLmnOTPrszTxyAWYzz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuAkExIOUaeiioAEIOUaeiiouBCDFGyyzuBCDFGjkLmnOPrsTxyzVWxPrsTxyzDFGJKLmnOPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zbNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYAEIOOUaeiouBCODFUGJzKLmnOPrsTxyAWyrwqpmlkjhgfedcbaZXJUTSRPONMLKI")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqqpPazeMePJwowSTKnkKfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouByfbYAEIOUaeiouBCDFGJKLmAEIOUAEIOUaeiiouBCDFGjkLmnOPrsTxyzaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIXJUTabcyfUqVsxzvGndEFGHmiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOTxyzAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyznOyfbYpORjKDimUqVsxzvGnPrsTxyzpORjKDimUqVsxzvGnCDFGjkLmnOPrsTxyz")  == 50)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbAEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGGnOPCrOsTxCdEfGhIdjKlMnOpQrStUvWxYz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOAEIOUaeiouBCDFAEyzGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTAbCdEOpQrStUvWxYzxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGnWxYz")  == 34)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFwjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzVWx")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGyfUFjyNNsqqpPazeMePJwqrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("FVjN")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzSmnOAEIOUaeiiouBCDFGjkLmnOPrsTxyzTxyzoSTKnkfLtn")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("hhAEIOUaeOiouBCDFGJzKLmnOz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfUzFjyNNsqqpabcdEFGHFwjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzVWxPazeMePJwoSMqrdxvQZaGTqVsxzTvGn")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFqAbCdpEfGhIjKlMnOpQrStUvWxYzjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJztnn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazUvWxYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaAEabcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVWIOUaeiouBCDFGJzKLmnOPrsTxyAWYzzeiouBCDFGjkLmynOPCrOsTxyfUFjqyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzRstuVWxQZaGTqVsxzvGnz")  == 26)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazAEIOOUaeiouBOCODFGJzKLmnOPrsTxyAWYzzeabcdEFGHFjyNNsqqpPazeMePJxwoSMqMrdxvQZaGyfUFjsqqpPazeMePJwAEIyfUFjyNNsqqpPazeGTqtVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtnTiJKLMNOpQRstuVWxQZaGTqVWAbCCdEOpQrStUvWxYzxyZxzvGn")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("zbvXuyrwqpmlkjhgfedcbaZXJUTSRPONMLKI")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCODFUGyfUFjyNNsqqpPazeMePJwfoSMqrdxvQZaGTaqVsxzvGnz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaAEabcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVWIOUaeiouBCDFGJzKLmnOPrsTxyAWYzzeiouBCDFGjkLmynOPCrOsTxyfUFjyNNsqqpRstuVWxPrsTxyzRstuVWxQZaGTqVsxzvGnz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAEZaGTqVsxzvGnQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHiOlJKLMNOpQRstuVWxyZskjhgRfedcbaZAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyzXJUTSRPONMLKI")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePpJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEzFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEOpzbvuyrwWqpmlqweRtYuIOPasdFghJkAkExIOUaeiAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyziouBCDFGjkLmnOPrsTxyzlzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIQrStUvWxYz")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyefbYpORjKDimUqVAEIOUaeiouBCDFGKLMNOpQRstuVWxPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpOAEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdxvQZaGTiJKLMNOpQhhAEIOUaeOiouBCDFGJzKLmnOzRstuVWxazeMePJwoSMqrdxvQZaGTiJKLMyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTyqVsxzvGnNOpQRstuVWxPrsTvxyzxzGvGAEIOOUaeiouBCODFUGsznTKnkfLtPrsTxyz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFAEIOUaeiouBCDFyQqVsxvzvGnbFjsqqpPazZeMePJwoSMqrdxvQZaGTcDfgHjklMpRStVWXZAbCdTEfGhiJkLmNoPqRsTuVwXyZGJKLmnOPrsTxyzGHiJKLMNOpQRstuVW")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouAbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYzBCDOFGJzKLmnOTPrszTxyAWabcdVWxYzz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzKLMNOpQRstuVWx")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHLiJKLMNEOpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMNOpQRstuVWxyZbcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsTxyAEIabcdFEFGHAkExIOUaeiioAEIOUaeiiouBCDFGyyzuBCDFGjkLmnOPrsTxyziJKabcdEoSMqrdxvQZaGTiJKLMNOpQRstuVWxLMNOpQRstuTKnKfkfLtbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzzKx")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzAEIOUaeiouBCDFGJzeKLmnOPrsWTxyAYWYzz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzTz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZNOpQRstuVWxyZbcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKx")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazMYAWYzePJwoYKSTKnkfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("TyfbYpORjKDiymmUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLtabcdEFGHFwjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzVWx")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJyfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJkYlzXcVbnMvGnAEIOUaeiouVWAbCdEOpQrStUvWxYzxyZBCDLeFGjkLmnOPrsTxyzKLMNOpQRstuVWx")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUNFjyNNsqqpPazeMePJwyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnAbCdEOpQrStUvWxYzoSMqrqweRtYuIOPasdFghJklzXcVbnMdxvQZaGTaeiouBCDFGJzKLmnOPrsTxyAWYzz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvzbvuyrwqpmlabcdEFGHilJKLMNOpQRstEuVWxyZskjhgfedcbaZXJUTSRPONMLKIQZaGTqoVsxzTvGnWxYz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwonSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGnyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzRstuVWxQZaGTqVsxzvGn")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdfEFGyfUFjyNNsqqpPazeMePJwoSTKnkfLtnHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVeWxPrsTxyzDFGJKLmnOPrsTxyz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("TKnKfAEyzNFjyNNsqqpPazeMMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzkfLt")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUAbCdEOpQrStUvWxYzqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOPrsTxyzmjnOPrsTxyzOpQRstuVWxyZAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 27)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiouBCDFGjkLmnOPrabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLmnOPrsTxyzOGpQRstuVWxyZsTxyzzz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaAEIOUaeiouBCDFGJzKLmnOPriiouBCDFGjkLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDsimUzvGnPyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzRstuVWxQZaGTqVsxzvGnTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzGvGnTKnkfLtPrsTxyzqpPazeMePJwoSTKnkfLtn")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYabcdEFGHiJxKLMNOpQAEIOUaeiouBCDFzbvuyrwFjyNNsqqpPazeMePJwoSMqrdxovQZaGTqpmlabcdELMNOpQRstuVWxyZkjtuVWxyZEfGhIdjKlMnOpQrStUvAExIOUaeiiouBCDFGjkLmnOPrsTxyzzzWxYz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAaEIOUaeiouBCDLFGjVWx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnJKLmnOyfbYpORjKDimUqVAEIOUAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGzbvuyrwqpmlqweRtlzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKInabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabncdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyzaeiouBCDFGJKLmbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyz")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMGePJwoSMqryfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSzbNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYAEIOOUaeiouBCODFUGJzKLmnOPrsTxyAWyrwqpmlkjhgfedcbaZXJUTSRPONMLKIMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGndxvQZaGTiJpQRstuVWxPrsTxyzDFGJKLumnOPrsTxyz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("zAEIOUaeiouBCDFGJKLmnOPrsTxyzAEIOUaeiouBCDjLmnOPCrsOTxyzz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("abedcbaZXJUTSRPONMLKIGJzzRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaTKnkfLtGTaqVsxzvGnTqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQyfUFjyNNsqqpPazMYAWYzePJwoYKSTKnkfLtnZaaGTiJKLMNOpQRstuVWx")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDoFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqyfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzSmnOAEIOUaeiiouBCDFGjkLmnOPrsTxyzTxyzoSTKnkfLtnpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 35)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzAEIOUaeiiouBCDAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzFGyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazAhhhsqqpPazeMePJxwoSMqMrdxvQZaGyfUFjsqqpPazeMePJwAEIyfUFjyNNsqqpPazeGTqtVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtnTiJKLMNOpQRstuVWxQZaGTqVsxzvGn")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJAEIOUaeimouVWAbCdEOpQrStUvWxYzxyZBCDLeFGjkLmnOPrsTxyzKLMNOpQRstuVWx")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFyfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJkYlzXcVbnMvGnGjkLmnOPCrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPzStUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAbCdEOpQrStUvWxYabcdEFGHiJxKLMNOpQAEIOUaeiouBCDFzbvuyrwFjyNNsqqpPazeMePJwoSMqrdxovQZaGTqpmlabcdELMNOpQRstuVWxyZkjtuVWxyZEfGhIdjKlMMnOpQrStUvAExIOUaeiiouBCDFGjkLmnOPrsTxyzzzWxYz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKyNNsqqpPazeMePJwoSIMqrdxvQZaGTqoVsxzTvGnWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDAEIOUaeiouBCDFGAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOAEIOUaeiouBCDAEIOUaeiouBCDFGAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzJKLmnOPrsTxyzLEFGjkLmnOPrsTxyzpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzJKLmnOPrsTxyzLEFGjkLmnOPrsTxyz")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("yfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGnYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJkYlzXcVbnMvGn")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEoSMqrdxvQZaGTiJKLMNOpTQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpabcdEFGHFjyNNsqqpMPazeMePJwoSMqQrdxvQZaGTiJKLMNOpQRstuVWxPazeMePJwoSMqrOdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFyfUFjyNNswqqpPazeMePJwoSMqrdxvQZaGTqVysxznjyNNsqqpPazeMePJwoaSMqrdxvQZaGTqVsxzTvGnWxYzePJwoSMqrdxvQZaGTqVsxzTvGnWxYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOyfUFjyNNsqqpPazeMePJwoSMqrdxvQZxaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSIMqrdxvQZaGTqoVsxzTvGnWxYz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AAEIOUiiouBCTxyzTxyAWYzz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNoKSTKnkfLtn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("TKnKfAEyzNFjyNNsqqpPazeMMePJwAbCdEOpQrStUvWxYzoSMqrdAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyabcdEFGHiJAaEIOUaeiouBCDLFGjkrsTxyzKLMNOpQRstuVWxzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyzxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzkfLt")  == 54)){ tests_passed++; } total_tests++;

    if((count_upper("NFjyNNsqqpPazeMePJwAbCdEOpQrStUvWyfUFjsqqpPazeMePJwAEIyfUFjyNNsqqpPazeGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtnOPrsTxyAWYzzz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqqpPazn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcdAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeAEIOUaeiouBCDFGJKLmnOVyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzMGePJwoSMqryfUFjyNNsqqpPazeabcNFjyNNsqqpPazeMePJwAbCdEOpQrStqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzZaGTqVsxzvGndxvQZaGTiJpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyzFEFGHiJKLMNOpQRstuVWx")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGyfUFjyNNsqqpPazeGTqVsxzqweRvtYuIOPasdFghAEIOUaeiouBCDFGjkLmynOPCrOsTxyzJklzXMvGnJKLmnOPrsTxyz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaeiouBCDFGjkLmynOPCrOsTxAEFIOOUaeiouAbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYzBCDOFGJzKLmnOTPrszTxyAWYzzyzouBCDFGJzKLmnOPrsTxaabcdEFGHiJKLMNOpQRstuVWxyrsTxyzKxyAWYzz")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaeiouBCDFGjkLmyyfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGnYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJkYlzXcVbnMvGnnOPCrOsTxyzouBCDFGJzKLmnOPrsTxyAWYzz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("TyfbYpORjKDiymmUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLtabcdEFGHFwjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsyxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzVWx")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQyfUFjyNNsqqpPeazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOyfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGnYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJkYlzXcVbnMvGnUaeiiouBCDFGjkLmyzzz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQRstuVWxyZskjhgRfedcbaZAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGyfUFjyNNsqqpPazAhhhsqqpPazeMePJxwoSMqMrdxvQZaGyfUFjsqqpPazeMePJwAEIyfUFjyNNsqqpPazeGTqtVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtnTiJKLMNOpQRstuVWxQZaGTqVsxzvGnzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyzXJUTSRPONMLKI")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("TyfbYpORjKDiymmUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLtabcdEFGHFIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzVWx")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouAEIdOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnOPCrOsTxBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGvHiJAEZaGTqVsxzvGnQRstuVWx")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAbCdAEyzNFjyNNsqqpPazUvWxYzEOpQrStUvWxYfGhIdjKlMnOpQrStUvWxYz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeDiiouBCDFabcdEFGHFjyNNsqqpPazeMePJAWYzwoSMqrdxvQZaGTiJKLMNOpQRstuVWxGyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abbcdEFGHiabcdEFGHiJKLMNOpQRstuVWxyZJKLMNOpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEyzNFjyNNsqqpPazeMePJwAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqYAWYzVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzAbCdAEyzNFjyNNsqqpPazUvWxYzEOpQrStUvWxYfGhIdjKlMnOpQrStUvWxYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqqpPazeMePJabcdEFGHFjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOfpQRstuVWxwJoSTKnkKfLtn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiuBCDFNFjyNNsqqpPazeMePJwAbCdEOpQrStqrdxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzGyyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeioGuBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzJvGnabFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyzORjKDimUqVsxzvGnPrPsTxyzsxzvGnabcdEFGHFjyNNsqqpPazHeMeabcdFEFGHUiJKLMNOpQRstuVWxPJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouAbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazaeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYzBCDOFGJzKLmnOTPrszTxyAWYzz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiAEIOUaeiouBCDFGjkLmynOPCrOsTxyzouBCDFGJzKLmnOPrsAWYzz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFjyNNsqqpPazeMePJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvvGnPrsTxyYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaueOiouBCDyfUFqjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfLtnnGJzKLmnOz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwWqpmlqweURtYuIOPasdFghJklzXcVbnMabcdEAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("TKnKfAEyzNFjyNNStUvWxYzoSMqrdxvQZaGTAbCdEfGhIdjKlMnOpyfUFjsyqAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyzsxzGvGnTKnkfLtPrsTxyzqpPazeMePJwoSTKnkfLtnQrStUvWxYzkfLt")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzMORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRAEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzAEIOUaeiiouBCDFGyzstuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuVWxzvGn")  == 32)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGyfUFjyNNsqqpPaOsTxyzJklzXMvGnJKLmnOPrsTxyz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("yefUFjsqqpPazeMePJwAEIyfUFjyNNsqqpPazeGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxyzoSTKnkfLtn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaueOiouBBCDFGJzKLmnOz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("AExIOUaeiiAEIOUaeiouAEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnOPCrOsTxBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzouBCDFGjkLmyzzz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOVyfbYpORjKSDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwozbNFjyNNsqqpPaBCODFUGJzKLmnOPrsTxyAWYzzzvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKISMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDjkLmnOPCryfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnsOTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKabcdEoSMqrdyfUPFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnxvQZaGTiJKLMNOpQRstuVWxazeMePJwoSMqrdxvQZaGTiJKLMyQfUFjyAEIOUaeiouBCDFzbvuyrwqpmlabcdEFGHilJKLMNYuIOPasdFghJklzXcVbnMvGnLKIGJzzNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnNOpQRstuVWxPrsTxyz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyZrwWqpmlqweURtYuIOPasdFghJklzXcVbnMabcdEFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKI")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("TyfbYpORjKDiymmUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLtabcdEFGHFwjyNNsqqpMPazezAEyzMePJwoSMqrdxvQZaaGTiJKLMNOpQRstuAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGdnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzVWx")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("TyfbYpORjKDimUqVsxzvGnKVWAbCCdEOpQrStUvWxYzAEIOUaeOiAEIOUaeiouBCDFGjkLmynOPCrOsTxAEFIOOUaeiouAbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYzBCDOFGJzKLmnOTPrszTxyAWYzzyzouBCDFGJzKLmnOPrsTxaabcdEFGHiJKLMNOpQRstuVWxyrsTxyzKxyAWYzzxyZLt")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsyqqpPazeMePJabcdEFGHFjyNNsqhLMNOfpQRstuVWxwJoSTKnkKfLtn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrzbvuyrwWqpmlqweURtYuIOPasdFghJklzXcVbnMabcdEAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzFGHilJKLMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIsTxyzAEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 45)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzAEabcdEFAEIOUaeiouBCDFGJKLmnOPrsTxyzGHiJKLMNOpQRstuVWIOUaeiouBCDFGJzKLmnOPrsTxyAWYzzn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqqpPazeabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxQZaGTqVsxzvGndxvQZaGTiJAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzJvGnabFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyzORjKDimUqVsxzvGnPrPsTxyzsxzvGnabcdEFGHFjyNNsqqpPazHeMeabcdFEFGHiJKLMNOpQRstuVWxPJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyz")  == 28)){ tests_passed++; } total_tests++;

    if((count_upper("TKnKfAEyzNFjyNNsqqpPazeMMePJwAbCdEOpQrStUvWxYzoSMqrdAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyabcdEFGHiJAaEIOUaeiouBCDLFGjkrsTxyzKLMNOpQRstuVWxzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyOzxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzkfLt")  == 54)){ tests_passed++; } total_tests++;

    if((count_upper("babcdGEFGHFjyOpQRstuVWx")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjKDyfUzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnvqGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcyfUAbCdEOpQrStUvWxYzqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOPrsTxyzmnOPrsTxyzOpQRstuVWxyZAEIOUaeiouBCDFGJKLmnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpORjAEIOUaueOiouBCDyfUFqjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfLtnnGJzKLmnOzKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSxMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 39)){ tests_passed++; } total_tests++;

    if((count_upper("abbycdEFGHiJKLMNOpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyTKnKfAEyzNFjyNNsqqpPazeMMePJwAbCdEOpQrStUvWxYzoSMqrdAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyabcdEFGHiJAaEIOUaeiouBCDLFGjkrsTxyzKLMNOpQRstuVWxzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyzxvQZaGTAbCdEfGhIdjKlMnOpQrStUvWxYzkfLtrwqpmlkjhgfedcbaZXJUTSRPONMLKI")  == 39)){ tests_passed++; } total_tests++;

    if((count_upper("VWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQAEIOUaeiouBCDjkLmnOPCrsOTxyzZaGTqVsxzTvGxYzxyZ")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOpUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzzyfbYpORjKDyfUzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzTvGnvGn")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("OmCBnVEXqQ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGaabcdEFGHiJKLMNOpQRstuVWxyZbcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKxnqpPazeabcdEFtGHabcyfUqVsxzvGndEFGHiJKLMNAAEIOOUaeiouBACDFGJzKLmnOPrsTxyAWYzzEIOUaeiouBCDFGjakLAkExIOUaeiioAEIOUaeiouBCDFGabcdEFGHiJAaEIOUaeiouBCDLFsGjkLmnOPrsTxyzKLMNOpQRstuVWxJKLVWAbCdEOpQrStUvWxYzxyZmnOyfbYpORjKDimUqVsxzvGnPrsTxyzuBCDFGjkLmnOUPrsTxyabcdEFGHiJAaEIOUaeiouBCDLFGjkrsTxyzKLMNOpQRstuVWxzmnOPrAEIOOUaeiouBACDFGJzKLmnOrsTxyAWYzzsTxyVWAbCdEOpQrStUvWxYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZstuVWxyZFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyz")  == 50)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFjsqqpPazeMePJwAEIOUaeiouBCDLEFGjkLAbCdEOpQrStUvWxYzmnOPrsTxNFjyNNsqqpPazeAEIOUaeiouBCDFzbvuyrwqpmlabcdEFGHilJKLMNYuIOPasdFghJklzXcVbnMvGnLKIGJzzMePJwyfUFjyNNsqqpPazeMePJwqweRtlzXcVbnMvGnAbCdEOpQrStUvWxYzoSMqrdxvQZaGTyzoWSTKnkfLtn")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("aabcdEFGHiJKLMNOpQRstuVyfUFqjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGyfUFjyNNsqqpPazeMYAWYzePJwoSTKnkfLtnnWxyZbcdEFGHiiJAEIOUaeiouBCDLFGjkLmnOPrsTxyzKx")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouAEIOUaeiouBCDFGjkLmynyfUFjyNNsqqpPazeMePJwcoSMqrdxvQZaGTqVsxzTvGnOPCrOsTxBCDFzbvuyrwqpmlabcdELMNOpQRstuVWxyZkjhgfedcbaZXJUTSRPONMLKIGJzz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("l")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORjAEIOUaeioGuBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqryfUFjyNNsqyfbYpORjKabcdFEFGHiJKLMNOpQRstuVWxDimUqVsxzvGnqpPazeabcdEFtGHFjyNNsqqpPazeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPRrsTxyzKDimUqVsxzvAEIOUaeiouBCAEIOUaeioueBCDFEzeMePJwoSMqrdxvxPrsTxyzDFGJKLmnOPrsTxyzGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKaLMNOpzQyfUFjyNNsqqpPeazeMePJwqweRtlzXcVbnMvGnRstuVWxPrsTxyz")  == 26)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOyfUAEFIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPaAEIOUaeiiouBCDFGyzzeMePJwoSIMqrdxvQZaGTqoVsxzTvGnWxYz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlabcdEFGHilJKLMNOpQyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaAEIOUaeiouBCDFGJKLimnOVyfbYyfUFjyNNsqqpPazeMePJwYoSMqrdxvQZaGTqVsxzvGnpAEIOUAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGzbvuyrwqpmlzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIXJUTSRPONMLKIJKLmnOyfbzbvuyrwqpAEIOUaeiouBCDFGJKLmOryfbYpORjKDimUqVAEIOUaeiouBCDFGJTyfbYpORjKDimUqVsxzvGnKVWAbCCdEOpQrStUvWxYzxyZLtvGnPrsTxyzsxzvGnPrsTxyzPONMLKIYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJAEIOUaeiiouBCDFGjkLmnOPrsTxyzPrsTxyzaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORVjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxaGTiJKLMNOpQRastuVWxPrsTxyzGTaqabcdEFGHFjyNNsqqpMPazeMePJwTSRPONMLKI")  == 42)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaueOUiouBCDFGJzKLmnOz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("OmCBnVEXAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpAEIOUaeiouBCAEIOUaeioueBCDFGJKLmnOyfbYpORjzsxzJvGnabFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzDFGJKLmnOPrsTxyzORjKDimUqVsxzvGnPrPsTxyzsxzvGnabcdEFGHFjyNNsqqpPazHeMeabcdFEFGHUiJKLMNOpQRstuVWxPJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzqQ")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOOUaeiouBCDFGJzKLmnOPrsTxyAWYzAEIOUaeiiouBCDFyfUFjyNhJklzXcVbnMvGnGyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfUFaabcdEFGHiJKLMNOpQRstuVWxyZbcdEFGHiJAEIOUaeiouBCDLFGjkLmnOPrsjTxyzKxjyNNsqqpPazeMePJwqweRtlzXcVbnMvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("YAAEFIOOUaeiouAbCdEfGhIjKlMnOyfUAEFIzOOUaeiouBCDFGJzKLmnOPrsTxyAWYzzFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqoVsxzTvGnWxYzBCDOFGJzKLmnOTPrszTxyAWYzz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeOiouBUCDFGJzKLmnOz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouyfUFjyNNsqqpPazeGTqVsxzqweRtYuIOPasdFghJklzXcVbnMvGnBCDFGJKLmnOyfbYpORjKDimUqVsxzvGnPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zbvXuyrwqpmlkjhgfedAbCdEfGhIjKlMnOAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmnOyfbYpORKjKDimUqVsxzvGnPrsTxyzsxzvGnabcdEFGHFjyNNsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzyfUFjyNNsqqpPazeMAbCdEfGhIjKlMnOyfUFyfUFjyNNswqqpPazeMePJwoSMqrdxvQZaGTqVysxznjyNNsqqpPazeMePJwoaSMqrdxvQZaGTqVsxzTvGnWxYzePJwoSMqrdxvQZaGTqVsxzTvGnWxYzcbaZXJUTSRPONMLKI")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("abedcbaZXJUTSRPONMLKIGJzyfUPFjyNNsqqpPazeMVWAbCdEOpQrStUvWxyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGyfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTaqVsxzvGnTqVsxzvGnYzAbCdEfGhIjKlMnOyfUFjyNNsqQZaGTqVsxzTvGxYzxyZePJwoSMqrdxvQZaGTqVsxzqweRtYuIOPasdFghJkYlzXcVbnMvGnWxyZ")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEFIOOUaeiouBCDFyfUqyQfUFjyNNsqqpPazeMePJwoSMqrdxvQZaGTqVsxzvGnVsxzvGnPrAEIOUaeiouAEIOUaeiouBCDLFGjkLmnOPrsTxyzeBCDFGJKLmnOyfbYpORjzsxzvGnabcdEFGHFjyNNAEIOUaeiouBCDFGJKLmnOyfbYpORjKDimUqVAEIOUaeiouBCDFGJKLmbYpORVDjKDimUqVsxzvGnPrsTxyzsxzvGnPrsTxyzsqqpPazeMePJwoSMqrdxvQZaGTiJKLMNOpQRstuVWxPrsTxyzsTxyAWYzz")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHFjyNNsqqpPazeAExIOUaeiioKLMGNOpQRstuVWx")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("dqweRtYuIOPasdFghJklzXcVbnM")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfVUzFjyNNsqqpPazeAbCdEfGhiJkLmNPqRsTVuVwXyZMePJwoSMqrdxvQZaGTqVsxzTvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("A")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("b")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("BC")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("eio")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AaBbCcDdEEFGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyzZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfG")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("aBCdEf!")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiou")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOU")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGT")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMeP")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGT")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeiouBCDFGjkLmnOPrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhyfbYpORjKDimUqVsxzvFjyNNsqqpPazeMePGnIjKlMnOpQrSttUvWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhiJkLmNo")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeiouBCDFGjkLmnrOPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGhIjKlMnOpQrStUvWxYz")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxzvGn")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKI")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("bcDfgHWXZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjabcdEFGHiJKLMNOpQRstuVWxyZKDimUqVsxzvGn")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZmqrdxvQZaGT")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpOjKDimUqVsxzvGn")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGT")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGT")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmnOzPrsTxyz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvQZaGT")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkghJklzXcVbnM")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKAlMnOpQrStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("yfbxYpOjKDimUqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvAEIOUaeiouBCDFGjkLmnOPrsTxyzQZaGT")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdGhiJkLmNoPqRsTuVwXyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKI")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdGhiJkLmNoPqRsTFjyNNsqqpPazeMePuVwXyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjabcdEFGHiJKLMNOpQRstuVWxyHZKDimUqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYpORjKDimUqVsxzvGnsqqpPazeMeP")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOTpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGT")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("VX")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjnOpQrStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvQZaGTJklzXcVbnM")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPDqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGT")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNMqrdxvQZaGT")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMeP")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIjKlMnOpQrStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyfbxYpOjKDimUqVsxzvGntUvWxYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvQZaGTJklzXcVbnM")  == 27)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJAbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYzkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGT")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEAEIOUaPeiouBCDFGjkLmnrOPrsTxyzIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTwoSMqrdxvQZaGT")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOasdFFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvAEIOUaeiouBCDFGjkLmnOPrsTxyzQZaGTghJklzXcVbnM")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnM")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEAEIOUaPeiouBCDFGjkLmnrOPrsTxyzIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqYRsTuVwXyZqrdxvQZaGTwoSMqrdabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZxvQZaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGT")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTMnOpQrStUvWxYz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXqyZqrdxvQZaGTJklzXcVbnM")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouoBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyfbxYpOtUvWxYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeMeP")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXqyZqrdxvQZaGTJklzXcVbnMAbCdEfGhIjKAlMyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGnYz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkQLmnOPrsTxayzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGT")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("yzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmnOPrsATxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnMaeiouBCDFGjkLmnOPrsATxyz")  == 27)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIjKlMnOpQrStQUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHViJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhPgfedcbaZXJUTSRPONMLKI")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMrnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEMfGMhIyfbxYpOjKDimUqVsxzvGntUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGT")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQFjyNNsqAbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYzqpPazeMePJwoSMqrdxvQZaGTrStUvWxYz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("V")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGvhIjKlMnOpQrStUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJUTSRPONML")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsxzvFjyNNsqqpPazeMePGnIjKlMnOpQrSttUvWxYzz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYUaeionOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmnrOzPTrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqFjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("VqweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnMX")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAJwoSMAbCdEzQZaGT")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpNPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXqyZqrdxvQZaGTJklzXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjyNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOasdFFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvAEIOUaeiouBCDFGjkLmnOPrsTxyzQZaGTAbCdEfGhyfbYpORjKDimUqVsxzvFjyNNsqqpPazeMePGnIjKlMnOpQrSttUvWxYzghJklzXcVbnM")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeiouBCDFGjAEIOUaPeiouBCDFGjkLmnOPrsTxyzkLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfpGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQyfbYpORxzvGnZaGTpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOmUaeiouBCDFGjkLmnrOzPTrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zATbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdBFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQRZaGTpQRstuVWxyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPWqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHViJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxLyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdZxvQZaGT")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGT")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpVORjKDimUqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPON")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZzAbCdEfGhIjKlMnOpQrStUvWxYzSRPONMLKI")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQJZaGTMnOpQrStUvWxYz")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTFjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTzoPqRsTuVwXyZqrdZxvQZaGT")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjysNNsqqpPaAOjpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvAbCdEfGhiJkLmNNoPqRsTuVwXyZWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXzATbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYzyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgXcVbnM")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("FY")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUyfbxYpOjKDimUqVsxzvGnaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGT")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfeRPONMLKI")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FzjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMeP")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJywoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgzAbCdEfGMhIyFjyNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYzfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 26)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqFjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcgbaZXJUTSRPONMLKI")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkFjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTI")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZmqrdxvQZaGTyZqrdxvQZaGTzvGn")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOTpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGT")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHitJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzFjyNNsqqpPazeMePeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("bcDfgHjklMpRStVXZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsFjyNabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGTTuVwXyZqrdxvQZaGT")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUbaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMzePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNJoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("X")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjabcMNOpQRstuVWxyHZKDimUqVsxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwooSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXzATbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYzyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCzbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 29)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghJklJzXcVbnM")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTiouBCDFGjkLmnrOPrsTxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjKDimUqVFjyNNsqqpPaAOpQrStUvWxYzeMePJwooSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXzATbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYzyZqrdxvQZaGTStUvWxYzSRPONMLKIaGTvGn")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUyfbYpORjabcdEFGHiJKLMNOpQRstuVWxyHZKDimUqVsxzvGnvWxYzSRPONMLKIaGT")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTpQRstuVWxyZ")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNabQcdEFGHiJMKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGT")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbxvQZaGTrdxvQZaGTpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSOMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnMaeiouBCDFGjkLmnOPrsATxyz")  == 29)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjabcdEFGHiJKLMNOpQRstuVWxyHZKFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTDimUqVsxzvGn")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvAEIOUaeiouBCDFGjkLmnOPrsTxyzQZaGTpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpVORjKDimUDqVszbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJAbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYzkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIvGn")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZdZxvQZaGT")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpyORxzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTGTzvGn")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjyNNsqqpPaAOpQrStUvWxYGzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdyfbYpORxFjyNNsqqFjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGnEFGHiJKLMNOpQRstuVWxyZ")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("FnsqqpPazeMeP")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPaZsdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbFjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMePCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTbAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGn")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyXZqrdxvQZaGTStUvWxYzSRPONMLKI")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoYSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLzmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeiouBCDFGjAEIOabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZUaPeiouBCDFGjkLmnOPrsTxyzkLmnOPrsTxyz")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGFjyNNyfbYpORjKDimUqVsxzvGnsqqpPazeMePnOpQrStUvWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZimUqVsxzv")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdGhiJkLmNoPqRsTuAbCdEfGhiJkLmNoPPqRsTuVwXyZyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkFjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTIPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 28)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhimJkLmNo")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("bcDfgHjklMpRStVX")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVmwXyZqrdvxvQZaGTFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMMeP")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGn")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAbCdEfGhIjWKlMnOpQrStUvWxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGTYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGT")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdBFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkFzjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMePLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjxKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPDqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOasdFFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvAEIONUaeiouBCDFGjkLmnOPrsTxyzQZaGTghJklzXcVbnM")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zATbCdEfGMhIjFjyNNsqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXzATbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYzyZqrdxvQZaGTStUvWxYzSRPONMLKIaGTlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 32)){ tests_passed++; } total_tests++;

    if((count_upper("abcdyfbYpORxFjyNNsqqFjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYWzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGnEFGHiJKLMNOpQRstuVWxyZ")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqqOUaeiouoBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yfbxYpOjKDimUqqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTbAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGnXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJAbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYznkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTIPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 27)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvQZaGTJklzXcVbnMkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPON")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpzQrStUvWxYzeMePJwoSMAbCdEzQZaGT")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxFjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMMePwXyZqrdxvQRZaGTpQRstuVWxyZ")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyfbxYpOtFjyNNsqqpPazeMePJwoSMqrdxvQZaGTUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTFjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeioPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTzoPqRsTuVwXyZqrdZxvQZaGT")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsKIaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZPqrdxvQZaGTiouBCDFGjkLmnrOPrsTxyz")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNYpORxzvGnZaGTpQxyZ")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYapORjKDimUqVFjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTFjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeioPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTzoPqRsTuVwXyZqrdZxvQZaGTsxzvGnsqqpPazeMMeP")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePwJwoSMAbCdEfGhiJkLmNAEIqOUTaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBzATbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYzCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxLyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 26)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPzAbCdEfGhIjKlMnOpQrStUvWxYzWqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("yfbAEIOUaPeiouBCDFGjAEIOUaPeiouBCDFGjkLmnOPrsTxyzkLmnOPrsTxyzpQRstuVWxyHZKDimUqVsxzvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePzATbCdEfGMhIjFjyNNsqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYzJzbvuyrwqpmlkFjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTIPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 30)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsuqqpPaAbxCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHViJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPDqRsTwuVwXyZqrdxvQZaGTqiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStAbCdGhiJkLmNoPqRsTuAbCdEfGhiJkLmNoPPqRsTuVwXyZyZUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxLyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXySMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnMaeiouBCDFGjkLmnOPrsATxyz")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVFjyNNsqqpPaAOpQrStUvWxYzeMePJwooSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXzATbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQZaGTStQUvWWxYzyZqrdxvQZaGTStUvWxYzSRPONMLKIaGTwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvQZaGTJklzXcVbnMkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPON")  == 44)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbFjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMePCdEzQZaGTfbxYpOjKDimUqVsxzvFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTGntUvWxYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("yfabcdEFGHiJKLMNOpQRstuVWxyHZKDimUqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FzjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMjeP")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqFjyNNQsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyLzoPqRsTuVwXyZqrdxvQZaGTqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPON")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLabcdEFGHiJKLMNOFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVmwXyZqrdvxvQZaGTFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZMNOFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfpGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimRUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnM")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("yfbxxYpOjKDimUqqVsxzvGn")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGzjkLmnOPrsATxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCzbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVTwXyZqrdxvQZaGTUTSRPONMLKI")  == 28)){ tests_passed++; } total_tests++;

    if((count_upper("FYapORjKDimUqVsxzvGnsqqpPazeMeP")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqdxvQZaGT")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIQjnOpQrStUIvWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwqweRtYuIOPaZsdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGT")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjvyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdVxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXqyZqrdxvQZaGTJklzXcVbnMAbCdEfGhIjKAlMyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGnYz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStAbCdGhiJkLmNoPqRsTuAbCdEfGhiJkLmNoPPqRsTuVwXyZyZUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPqFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNJoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMrsTxLyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYz")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("MzAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsxzvFjyNNsqqpPazeMePGnIjKlMnOpQrSttUvWxYzz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvGTStUvWxYzSRPONMLKIaGT")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSOMAbCdFjyFjyNNsqqpzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUbaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGT")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOSPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("yfbAEIOUaPeiouBCVqweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnMXDFGjAEIOUaPeiouBCDFGjkLmnOPrsTxyzkLmnOPrsTxyzpQRstuVWxyHZKDimUqVsxzvGn")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWTxYzeMePJwoSMAbCdEfGhiJkLmNJoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbn")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("FnqweRtYFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePzATbCdEfGMhIjFjyNNsqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYzJzbvuyrwqpmlkFjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTIPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTuIOPasdFkghJklzXcVbnMsqqpPazeMeP")  == 31)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGnPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnM")  == 30)){ tests_passed++; } total_tests++;

    if((count_upper("AETxyz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoabcdEFGHiJKLMNOFjyNNsuqqpPaAbxCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHViJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOasdFFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQyfbYpORxzvGnZaGTpQRstuVWxyZAFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsFjyNabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGTTuVwXyZqrdxvQZaGTEzIOUaeiouBCDFGjkLmnOPrsTxyzQZaGTghJklVbnM")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkeLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTrdxAbCdEfGhimJkLmNovQZaGTpQRstuVWxyZ")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcgzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIbaZXJUTSRPONMLKI")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZmqrdxvQZaGTyZqrdxvQZaGTzvGnmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGT")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiabQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbxvQZaGTrdxvQZaGTpQRstuVWxyZoOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGT")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkoLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKzbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCzbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOtuVWxyZ")  == 37)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXqFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMyZqrdxvQZaGTrdxvQZaGTpQRstuVWxyZ")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpVqweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnMXORjKDimUqVsxzvGn")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjyNFjyNNsqqpPaAOpMQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYz")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqFjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIPrsTxyzZXJUTbAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGnXcVbnM")  == 41)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJywoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdzbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHViJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 37)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMqqpGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPDqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("yfabcdEFGHiJKLKMNOpQRstuVWxyHZKDimUqVsxzvGn")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeiouBCDFGjAEIOUaPeiokuBCDFGjkLmnOPrsTxyzkLmnOPrsTxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdBFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnMqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKI")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeiouBCDFGjAEPIOUaPeiokuBCDFGjkLmnOPrsTxyzkLmnOPrsTxyz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMrnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqqFjyNNsqqOpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjSyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFkgXcVbncM")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkAEIOmUaeiouBCDFGjkLmnrOzPTrsTxyzLmNAEIqOUaeiouBCDFGjkLmnOyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGnTAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGnPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnM")  == 38)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOmCUaeiouBCDFGjkLmnrOzPTrsTxyz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeabcdEzAbCdEfGMhIjKlMnOpQrStUvWxYzxyZiouBCDFGjkLmnOPrsTxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAIFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqVwJXyZqrdxvQZaGTzvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBnCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTGTzvGn")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("bcDfgHVlMpRStVX")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEAEIFjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTOUaPeiouBCDFGjkLmnrOPrsTxyzIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqYRsTuVwXyZqrdxvQZaGTwoSMqrdabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZxvQZaGT")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTqRsTuVwXyZqrdxvQZaGT")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOTPrsTxLyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTjwuVwXyZqrdxvQZaGTiouBCDFGFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTjkeLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("zATbCdEfGMhIjFjyNNsqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvW")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTSON")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOzbvuyrwqpmlkjhgzAbCdEfGMhIyFjyNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzzAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsxzvFjyNNsqqpPazeMePGnIjKlMnOpQrSttUvWxYzzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYzfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIUaeiouBCDFGjkLmnrOzPTrsTxyz")  == 31)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIklJzXcVbnM")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("yzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTbAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGnqpPaAOpQrStUvWxQZaGTzvGn")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvGTStUvWxYzSRPONMLKIaGTtuVWxyZ")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("qweRWtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdBFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkFzjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMePLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjxKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnM")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOTpQrStUvWxYzeMePJwoSMAbCdEfGhizAbCdEMfGMhIyfbxYpOjKDimUqVsxzvGntUvWxYzaeiouBCDPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGT")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTjwuVwXyZqrdxvQZaGTzvGn")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFjyNabQcdEFGHiJMKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGTFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 45)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjabcMNOpQRstuVWxyHZKDimUqVsxzAbCdEfGMhIyFjyNNsqqpPaAOpQDimUqVsxzvGntUvWxYzzvGn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjnOpQrAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxLyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzStUvWxYz")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyFjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdZxvQZaGTTStUvWxYz")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIklJnM")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqhRsTuVabcdEFGHViJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("yzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGTRsTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGn")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("qweRWtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdBFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbqFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMCdEfGhiJkFzjyNNyfbYapORjKDimUqVsxzvGnsqqpPazeMePLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjxKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnM")  == 28)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGzbvuyrwqpmlkjhPgfedcbaZXJUTSRPONMLKIqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkeLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaPeiouUBCDFGjAEPIOUaPeiokuBCDFGjkLmnOPrsTxyzkLmnOPrsTxyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOTpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLAEIOUaeabcdEzAbCdEfGMhIjKlMnOpQrStUvWxYzxyZiouBCDFGjkLmnOPrsTxyzmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIjFjyNNsqqpPazeMePJwoSMqrdxvQPZaGTStQUvWWxYz")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpVqweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrwnsTxyzoPqRsTuVwXyZqrdxvQZaGThJklzXcVbnMXORjKDimUqVsxzvGn")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("MzAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsazeMePGnIjKlMnOpQrSttUvWxYzz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zIfZr")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZzAbCdEfGhIjKlMnOpQrStUvWxYzSRPONMLKIOpQrStUvWxz")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMqqpGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPDqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("zATbCdEfGMhIjFjyNNsNqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYz")  == 3)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGzjkLmnOPrsMzAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsazeMePGnIjKlMnOpQrSttUvWxYzzATxyz")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTjwuVwXyZqrdxvQZaGTiouBCDFGFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsbcDfgHjklMpRStVXqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTjkeLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 21)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOLpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuAVwXyXZqrdxvQZaGTStUvWxYzSRPONMLKI")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORjabcdEFGHiJKLMNOpQRstuVWxyHZKFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwVXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTDimUqVsxzvGn")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkAEIOmUaeiouBCDFGjkLmnrOzPTrsTxyzLmNAEIqOUaeiouBCDFGjkLmnOyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGnTAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGnPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnMwuVwXyZqrdxvAEIOUaeiouBCyfbxxYpOjKDimUqqVsxzvGnDFGjkLmnOPrsTxyzQZaGT")  == 52)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOasdFFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwTuVwXyZqrdxvabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQyfbYpORxzvGnZaGTpQRstuVWxyZAFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsFjyNabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGTTuVwXyZqrdxvQZaGTEzIOUaeiouBCDFGjkLmnOPrsTxyzQZaGTghJklVbnM")  == 32)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbn")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOTPrsTxLyzoPqRsTuVwzAbCdEfGMhIyFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYzxvQZaGTStUvWxYz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmnOPrsATxyyz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhFjyNNsqqpPaAOTpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLAEIOUaeabcdEzAbCdEfGMhIjKlMnOpQrStUvWxYzxyZiouBCDFGjkLmnOPrsTxyzmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPONMLKIaGT")  == 27)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOTPrsTxLyzabcdEFGHitJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzFjyNNsqqpPazeMePeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZoPqRsTuVwzAbCdEfGMhIyFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYzxvQZaGTStUvWxYz")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMeCPJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 9)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGjkLmnOPrsqFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMTxyz")  == 22)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsqrdxvQZaGTrdxvQZaGT")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfpGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuFjyNNsqqpPaqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpNPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXqyZqrdxvQZaGTJklzXcVbnMAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTVWxyZ")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTjwuVwXyZqrdxvQZaGTiouBCDFGFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTbAbCdEfGhiJkLmNoPqRosTuVwXyZSRPONMLKIfbYpORxFjyNNsqyzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTwXyZSRPONMLKIfbYpORxFjyNNsqqpPaAOpQrStUvWxQZaGTzvGnqpPaAOpQrStUvWxQZaGTzvGnMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTjkeLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 44)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOasdFFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhPJwoSMAbCdFjyNNsqqpPaAOfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsFjyNabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCGTTuVwXyZqrdxvQZaGTEzIOUaeiouBCDFGjkLmnOPrsTxyzQZaGTghJklVbnM")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqVwJXyZqrdxvQZaGFnqweRtYFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePzATbCdEfGMhIjFjyNNsqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYzJzbvuyrwqpmlkFjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTIPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTuIOPasdFkghJklzXcVbnMsqqpPazeMePTzvGn")  == 34)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGhIjKlabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZMnOFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEAEIOUaeiouBCDFGjkLmnOzPrsTxyzIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsqrdxvQZaGTrdxvQZaGTpQrStUvWxYz")  == 18)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGJKLmnOPrsz")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGhIjKlFjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBAbCdEfGhIjKAlMnOpQrStUvWxYzCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTMnOpQrStUvWxYz")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGzbvuyrwqpmlkjhPgfedcbaZXJUTSRPONMLKIqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqROPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 11)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYapORjKDimUqVFjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTFjyNNFjyNNsqqpPaAbCdGhiJkLmNoPqRsTuAbCdEfGhiJkLmNoPPqRsTuVwXyZyZAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeioPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTzoPqRsTuVwXyZqrdZxvQZaGTsxzvGnsqqpPazeMMeP")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwqweRtYuIOPaZsdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIePJwoSMAbCdEfTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMEfGhiJkLmNoPqRsTuVwXyZqrPdxvQZaGT")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEfGMhIyFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbFjyNNyfbYapORjKDimUqVvGntUvWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zATbCdEfGMhIjFjyNNsNqFjyNzbvuyrwqpmlkjhPgfedcbaZXJUTSRPONMLKINyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPazeMePFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBnCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTGTzvGnEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsqrdxvQZaGTrdxvQZaGT")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPDqRsTwuVwXyZqrdxvQZaGTqiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHVciJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 29)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyAzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjqweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvQZaGTJklzXcVbnMkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTStUvWxYzSRPON")  == 24)){ tests_passed++; } total_tests++;

    if((count_upper("MzAdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsxzvFjyNNsqqpPazeMePGnIjKlMnOpQrSttUvW")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsuqqpPaAbxCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHViJKLMNOpQRWxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("bcDfgHjklMp")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("StUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpVqweRtYuIOPasdFkgFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTyfbYpORjKDimUqVsxzvGnEfGhiJkLmNAEIqOUaeiouBCDFKDimUqVsxzvGn")  == 10)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjvyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdVxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXqyZqrdxvQZaGTJklzXcVbnMAbCdEfGuhIjKAlMyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGnYz")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYprORxFjyNNsqqpPaAOpQrStUvWxYUaeionOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaXGTzvGn")  == 4)){ tests_passed++; } total_tests++;

    if((count_upper("abcdEFGHiJKLMNOFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVmwXyZqrdvxvQZaGTFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOpQRstuVWAxyZwXyZqrdxvQZaGTpQRstuVWxyZ")  == 14)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPazAbCdEfGMhIyFjyNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYzAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCrDFGjkLmnOPrsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 32)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAabQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTpQRstuVWxyZeiouBCDFGjkoLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 8)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMmAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTjwuVwXyZqrdxvQZaGTzvGn")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("AEIOUaeiouBCDFGzjkLmnOPrsMzAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsazeMePhGnIjKlMnOpQrSttUvWxYzzATxyz")  == 7)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgzAbCdEfGMhIyFjyNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEzQZaGTfbxYpOjKDimUqVsxzvGntUvWxYzfedcbaZXJFjyNNsqqpPaAOpQrJStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZaGTXyZqrdxvQZaGTUTSRPONMLKI")  == 33)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrCdEfGhiJkLmNoPqRsTuVabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstMAbCdEfGhiJkLmNAEIOUaeioOPrsTxyzoPqRsTuVwXyZqrdxvQZFjyNNsqqpPaAOpQrStUvWxYzeMeSPJwoSOMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTrdxvQZaGTmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGT")  == 23)){ tests_passed++; } total_tests++;

    if((count_upper("zAbCdEyfGMhIyfbxYpOtUvWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("hlDwUVZWIo")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCzbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIdEfGhiJkMLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVTwXyZqrdxvQZaGTUTSRPONMLKI")  == 28)){ tests_passed++; } total_tests++;

    if((count_upper("yfbxYpOqFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMjKDimUqqVsxzvGn")  == 20)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdEfGFjpyNNyfbYpORjKDimUqVsxzvGnsqqpPazeMePnOpQrStUvWxYz")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("abFjyNNsqqpPwaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTcdEFGHiJKLMNOpQRstuVWxyZ")  == 5)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhAEIOUaPeiouBCDFGjkLmnOPrsTxyzgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJywoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdzbvuyrwqpmlkjFjyNMqrdxvQZaGThgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnabcdEFGHiJKLMNOFjyNNsuqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVabcdEFGHViJKLMNOpQRstuVWxyZwXyZqrdxvQZaGTpQRstuVWxyZOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBnCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTGTzvGnONMLKI")  == 53)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqVwJXyZqrdxvQZaGFnqweRtYFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePzATbCdEfGMhIjFjyNNsqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYzJzbvuyrwqpmlkFjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzhoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTIPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTuIOPasdFkghJklzXcVbnMsqqpPazeMePTzvGn")  == 37)){ tests_passed++; } total_tests++;

    if((count_upper("FnsqyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiOouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTGTzvGnpPaeMeP")  == 13)){ tests_passed++; } total_tests++;

    if((count_upper("qweRzAbCdEfGhIjKlMnOpQrStUvWxYztYuIOPasdFghJklzXcVbnM")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOqFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnMpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTtUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsQTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVxvQZaGTJklzXcVbnM")  == 36)){ tests_passed++; } total_tests++;

    if((count_upper("AbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPWqRsTuVwXyZqrabQcdEFGHiJKLMNOrFjyNNsqqpPaAbCdEfUGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqFjyNNsqqpPaAOpQrSFjyNNsqqpPaAOpbQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvGTStUvWxYzSRPONMLKIaGTtuVWxyZdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYz")  == 29)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxrYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 17)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJAbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYzkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEjIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKI")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPazbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIAbCdEfGhIjKNoPqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbn")  == 16)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYapORjKDimUqVsxzvGnsqqpPazbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPDqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIzeMeP")  == 15)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDJFGjkLmnOPrsTxyzoPqRsTuVwXyZqrabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZdZxvQAbCdGhiJkLmNoPqRsTFjyNNsqqpPazeMePuVwXyZZaGT")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("icDti")  == 0)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNyfbYapORjKDimUqVFjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTFjyNNFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeioPqRsTwuVwXyZqrdxvQZaGTiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrsTxyzoPqRsTuVyfbYpVORjKDimUDqVszbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJAbCdabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZfGhIjKlMnOpQrStUvvWxYzkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJzbvuyrwqpmlkjhgfedcbaZXJUTSRPONMLKIwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTUTSRPONMLKIvGnwXyZqrdxvQZaGTzoPqRsTuVwXyZqrdZxvQZaGTsxzvGnsqqpPazeMMeP")  == 54)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhgfedcbaZXJUTSrRPONMLKI")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMzePJwoSMAbCdEfGhiJkLmNoPqRAEIOUaeiouBCDFGzjkLmnOPrsMzAbCdEfGhIjKlMnOpQrStUvWxYAbCdEfGhyfbYpORjKDimUqVsazeMePhGnIjKlMnOpQrSttUvWxYzzATxyz")  == 12)){ tests_passed++; } total_tests++;

    if((count_upper("zbvuyrwqpmlkjhUTSRPONML")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpORxFjyNNsTqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTzvGn")  == 6)){ tests_passed++; } total_tests++;

    if((count_upper("yfbYpyORxbzvGn")  == 1)){ tests_passed++; } total_tests++;

    if((count_upper("zATbCdEfGMhIjFjyNNsNqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaFGTStQUvWWxYz")  == 2)){ tests_passed++; } total_tests++;

    if((count_upper("FjyNNsqqpPaAOpQrStUvWxYzFjyNNsqqpPaAOpQrStUvWxYzewoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDJFGjkLmnOPrsTxyzoPqRsTuVwXyZqrabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZdZxvQAbCdGhiJkLmNoPqRsTFjyNNsqqpPazeMePuVwXyZZaGTeMePJwoSMAbCdEfpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZpQRstuVWxyZAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyzbvuyrwqpmlkjhgfedcbaZXJUTAbCdEfGhIjKlMnOpQrFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsKIaGT")  == 25)){ tests_passed++; } total_tests++;

    if((count_upper("qweRtYuIOasdFFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAabQcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvAEIONUaeiouBCDFGjkLmnOPrsTxyzQZaGTghJklzXcVbnM")  == 19)){ tests_passed++; } total_tests++;

    if((count_upper("qFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTweRtYuIOPasdFghFjyNNsqqpPaAOpQrStUvWxYzeMePJFjyNNsqqpPazeMePJwoSMqrdxvQZaGTwoSMAbCdFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNJoPqRsTuVwXyZqrdxvQZaGTEfGhiJkLmNAEIqOUaeiouBCDFGzbvuyrwqpmlkjhgfedcbaAEIOUaPeiouBCDFGjkLmnrOPrsTxyzZXJUTAbCdEfGhiJkLmNoPyfbYpORxFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfiGhiJkmLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqVwJXyZqrdxvQZaGFnqweRtYFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOzbvuyrwqpmlkjhgfedcbaZXJFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeFjyNNsqqpPaAOpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouabcdEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMePzATbCdEfGMhIjFjyNNsqFjyNNyfbYpORjKDimUqVsxzevGnsqqpPazeaGTStQUvWWxYzJzbvuyrwqpmlkFjyNNsqqpPaAOpQrStUvWxYzehMePJwoSMAbCdEfGhiJkLmNAEIOUaeiouBCDFGjkLmnOPrsTxyzhoPqRsTuVwXyAbCdEfGhiJkLmNoZqrdxvQZaGTIPrnsTxyzoPqRsTuVwXyZqrdxvQZaGTuIOPasdFkghJklzXcVbnMsqqpPazeMePTzvGnqRsTuVwXyZSRPONMLKIjkLmnOPrnsTxyzoPqRqsTuVwXyZqrdxvyfbYpORxzvGnQZaGTJklzXcVbnM")  == 60)){ tests_passed++; } total_tests++;

    if((count_upper("abQcdFjyNNsqqpPaAOTpQrStUvWxYzeMePJwoSMAbCdEfGhiJkLmNAEIqOUaeiouBCDFGjkLmnOPrnsTxyzoPqRsTwuVwXyZqrdxvQZaGTEFGHiJKLMNOFjyNNsqqpPaAbCdEfGhIjKlMnOpQrStUvWxYzeMzePJwoSMAbCfdEfGhiJkLmNoPqRsTuVwXyZqrdxvQZaGTpQRstuVWxyZ")  == 13)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


