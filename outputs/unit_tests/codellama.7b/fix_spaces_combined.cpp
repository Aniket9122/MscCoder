#include <string>
using namespace std;

string fix_spaces(const string& text) {
    string result = "";
    bool space_found = false;
    for (int i = 0; i < text.size(); i++) {
        char c = text[i];
        if (c == ' ') {
            if (!space_found) {
                result += "_";
                space_found = true;
            } else {
                result += "-";
            }
        } else {
            result += c;
            space_found = false;
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

    if((fix_spaces("Example") == "Example")){ tests_passed++; } total_tests++;

    if((fix_spaces("Mudasir Hanif ") == "Mudasir_Hanif_")){ tests_passed++; } total_tests++;

    if((fix_spaces("Yellow Yellow  Dirty  Fellow") == "Yellow_Yellow__Dirty__Fellow")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exa   mple") == "Exa-mple")){ tests_passed++; } total_tests++;

    if((fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple")){ tests_passed++; } total_tests++;

    if((fix_spaces("Example") == "Example")){ tests_passed++; } total_tests++;

    if((fix_spaces("NoSpacesHere") == "NoSpacesHere")){ tests_passed++; } total_tests++;

    if((fix_spaces("happy1233") == "happy1233")){ tests_passed++; } total_tests++;

    if((fix_spaces("haappy1233") == "haappy1233")){ tests_passed++; } total_tests++;

    if((fix_spaces("") == "")){ tests_passed++; } total_tests++;

    if((fix_spaces("NoSere") == "NoSere")){ tests_passed++; } total_tests++;

    if((fix_spaces("ere!st") == "ere!st")){ tests_passed++; } total_tests++;

    if((fix_spaces("rCMrcvK") == "rCMrcvK")){ tests_passed++; } total_tests++;

    if((fix_spaces("NoSer") == "NoSer")){ tests_passed++; } total_tests++;

    if((fix_spaces("NoS") == "NoS")){ tests_passed++; } total_tests++;

    if((fix_spaces("NSooSerre") == "NSooSerre")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-a-a---b-b-b-c-c-c---") == "---a-a-a---b-b-b-c-c-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("this") == "this")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a-a-a---b-b-b-c-c-c---") == "----a-a-a---b-b-b-c-c-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("his") == "his")){ tests_passed++; } total_tests++;

    if((fix_spaces("words") == "words")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exx1") == "Exx1")){ tests_passed++; } total_tests++;

    if((fix_spaces("gaps") == "gaps")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggaps") == "ggaps")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggga") == "ggga")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B-*_--C") == "A-B-*_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("EEx") == "EEx")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exa") == "Exa")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEthisxa3e") == "ExampleEthisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("2") == "2")){ tests_passed++; } total_tests++;

    if((fix_spaces("in") == "in")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleeEthisxa3e") == "ExampleeEthisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("zPb") == "zPb")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsis") == "hsis")){ tests_passed++; } total_tests++;

    if((fix_spaces("psxample") == "psxample")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEthitsxa3e") == "ExampleEthitsxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("1") == "1")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a-aa-a---b-b-b-c-c-c---") == "----a-aa-a---b-b-b-c-c-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-b-b-c-c-c---") == "---a--a-a---b-b-b-c-c-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsExampleEthisxa3es") == "hsExampleEthisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("Expample") == "Expample")){ tests_passed++; } total_tests++;

    if((fix_spaces("sentence") == "sentence")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exa2") == "Exa2")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsE2xampleEthisxa3es") == "hsE2xampleEthisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("thits") == "thits")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a-a-a---b-b-b-c-c-c---ExampleEtEhisxa3e") == "----a-a-a---b-b-b-c-c-c---ExampleEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-ac-c---") == "---a-ac-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("E") == "E")){ tests_passed++; } total_tests++;

    if((fix_spaces("TnYIFZqaAz") == "TnYIFZqaAz")){ tests_passed++; } total_tests++;

    if((fix_spaces("between") == "between")){ tests_passed++; } total_tests++;

    if((fix_spaces("zEx3Pbb") == "zEx3Pbb")){ tests_passed++; } total_tests++;

    if((fix_spaces("gs") == "gs")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-b-b-c-c--c---") == "---a--a-a---b-b-b-c-c--c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("thitts") == "thitts")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-b-b--c-c-c---") == "---a--a-a---b-b-b--c-c-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("word") == "word")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggap") == "ggap")){ tests_passed++; } total_tests++;

    if((fix_spaces("R") == "R")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsExmampleEthisxa3es") == "hsExmampleEthisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExaxmpleEthitsxa3e") == "ExaxmpleEthitsxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("gss") == "gss")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhis") == "hhis")){ tests_passed++; } total_tests++;

    if((fix_spaces("gggga") == "gggga")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exampl") == "Exampl")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEtExampl") == "ExampleEtExampl")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhi---a-a-a---b-b-b-c-c-c---s") == "hhi---a-a-a---b-b-b-c-c-c---s")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-b-b-c-c--") == "---a--a-a---b-b-b-c-c--")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-ac-c---") == "2---sa-ac-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("11") == "11")){ tests_passed++; } total_tests++;

    if((fix_spaces("dwords") == "dwords")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsExampthitsleEthisxa3es") == "hsExampthitsleEthisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("ismpleample") == "ismpleample")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhi---a-a-a---") == "hhi---a-a-a---")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsExampleEtheisxa3es") == "hsExampleEtheisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("s") == "s")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExExamplampleEthisxa3e") == "ExExamplampleEthisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-ac-ca---") == "---a-ac-ca---")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exampitsxa3e") == "Exampitsxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a-a-a---b-hsmpleEthitssxa3eisb-b-c-c-c---") == "----a-a-a---b-hsmpleEthitssxa3eisb-b-c-c-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("thtis") == "thtis")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-ac-c-thitts-") == "---a-ac-c-thitts-")){ tests_passed++; } total_tests++;

    if((fix_spaces("hihis") == "hihis")){ tests_passed++; } total_tests++;

    if((fix_spaces("wo") == "wo")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exaword") == "Exaword")){ tests_passed++; } total_tests++;

    if((fix_spaces("thhisis") == "thhisis")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhi-") == "hhi-")){ tests_passed++; } total_tests++;

    if((fix_spaces("zPPb") == "zPPb")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExampple-E-C") == "EExampple-E-C")){ tests_passed++; } total_tests++;

    if((fix_spaces("i2---sa-ac-c---n") == "i2---sa-ac-c---n")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEtEhisxa3e") == "ExampleEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhi---a-a-a---c-c---s") == "hhi---a-a-a---c-c---s")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exmpl") == "Exmpl")){ tests_passed++; } total_tests++;

    if((fix_spaces("3") == "3")){ tests_passed++; } total_tests++;

    if((fix_spaces("Rhsis") == "Rhsis")){ tests_passed++; } total_tests++;

    if((fix_spaces("sjRboRkSy") == "sjRboRkSy")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-ac-c---h-isx") == "2---sa-ac-c---h-isx")){ tests_passed++; } total_tests++;

    if((fix_spaces("mples") == "mples")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exa3c---leEtEhisxa3e") == "Exa3c---leEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("i2---sa-a-c-c---n") == "i2---sa-a-c-c---n")){ tests_passed++; } total_tests++;

    if((fix_spaces("thi") == "thi")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsExampleExthisxa3es") == "hsExampleExthisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("hh") == "hh")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhhis") == "hhhis")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExample-C") == "EExample-C")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-ac-c---h-isxa3e") == "2---sa-ac-c---h-isxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("3xa3es") == "3xa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exam") == "Exam")){ tests_passed++; } total_tests++;

    if((fix_spaces("2----sa-ac-c---") == "2----sa-ac-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("thhiss") == "thhiss")){ tests_passed++; } total_tests++;

    if((fix_spaces("wodhhi-s") == "wodhhi-s")){ tests_passed++; } total_tests++;

    if((fix_spaces("FoFlZTDagW") == "FoFlZTDagW")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEtExpampl") == "ExampleEtExpampl")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exa---a-ac-mple") == "Exa---a-ac-mple")){ tests_passed++; } total_tests++;

    if((fix_spaces("sgs") == "sgs")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-thits-a-a---b-b-") == "---a-thits-a-a---b-b-")){ tests_passed++; } total_tests++;

    if((fix_spaces("3c---") == "3c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggagp") == "ggagp")){ tests_passed++; } total_tests++;

    if((fix_spaces("EFoFlZTDagWE") == "EFoFlZTDagWE")){ tests_passed++; } total_tests++;

    if((fix_spaces("hs") == "hs")){ tests_passed++; } total_tests++;

    if((fix_spaces("111") == "111")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggagExampleEtEhisexa3gep") == "ggagExampleEtEhisexa3gep")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-a-a----c---") == "---a-a-a----c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("wwo") == "wwo")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B-*") == "A-B-*")){ tests_passed++; } total_tests++;

    if((fix_spaces("thhi") == "thhi")){ tests_passed++; } total_tests++;

    if((fix_spaces("iin") == "iin")){ tests_passed++; } total_tests++;

    if((fix_spaces("--a-a-a---") == "--a-a-a---")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-ac-c-a---") == "---a-ac-c-a---")){ tests_passed++; } total_tests++;

    if((fix_spaces("jgOtGgdMm") == "jgOtGgdMm")){ tests_passed++; } total_tests++;

    if((fix_spaces("1gggaps") == "1gggaps")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhi-hhh") == "hhi-hhh")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a--a-a---b-b-b-c-c--c---") == "----a--a-a---b-b-b-c-c--c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExExameplampleEthisxa3e") == "ExExameplampleEthisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsmpleeEthishiExamlesxa3eEthitssxa3eis") == "hsmpleeEthishiExamlesxa3eEthitssxa3eis")){ tests_passed++; } total_tests++;

    if((fix_spaces("EleEatEhisxa3e") == "EleEatEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEi") == "ExampleEi")){ tests_passed++; } total_tests++;

    if((fix_spaces("wo_--C") == "wo_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("c-c-c---sxxample") == "c-c-c---sxxample")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B-*_") == "A-B-*_")){ tests_passed++; } total_tests++;

    if((fix_spaces("sentenceample") == "sentenceample")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggs") == "ggs")){ tests_passed++; } total_tests++;

    if((fix_spaces("c-c-c----sx") == "c-c-c----sx")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsmpleEthitssxa3eis") == "hsmpleEthitssxa3eis")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a-ac-c-thitts-") == "----a-ac-c-thitts-")){ tests_passed++; } total_tests++;

    if((fix_spaces("-E") == "-E")){ tests_passed++; } total_tests++;

    if((fix_spaces("E2---sa-ac-c---b-b-b-c-c-c---sx") == "E2---sa-ac-c---b-b-b-c-c-c---sx")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B*--*_--C") == "A-B*--*_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("gapshhi---a-a-a---") == "gapshhi---a-a-a---")){ tests_passed++; } total_tests++;

    if((fix_spaces("cc-cggs-c---sxxcample") == "cc-cggs-c---sxxcample")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhi---a-a-a---b-b-b--c-c-c---s") == "hhi---a-a-a---b-b-b--c-c-c---s")){ tests_passed++; } total_tests++;

    if((fix_spaces("sggs") == "sggs")){ tests_passed++; } total_tests++;

    if((fix_spaces("ss") == "ss")){ tests_passed++; } total_tests++;

    if((fix_spaces("gapshhi---a-2---sa-ac-c---hisxa3e---") == "gapshhi---a-2---sa-ac-c---hisxa3e---")){ tests_passed++; } total_tests++;

    if((fix_spaces("mple---a-a-a----c---") == "mple---a-a-a----c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("xmampleEthisxa3es") == "xmampleEthisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggss") == "ggss")){ tests_passed++; } total_tests++;

    if((fix_spaces("sjRboRkS") == "sjRboRkS")){ tests_passed++; } total_tests++;

    if((fix_spaces("EEE") == "EEE")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhh") == "hhh")){ tests_passed++; } total_tests++;

    if((fix_spaces("22--") == "22--")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-b-b-c-bismpleample") == "---a--a-a---b-b-b-c-bismpleample")){ tests_passed++; } total_tests++;

    if((fix_spaces("Examle") == "Examle")){ tests_passed++; } total_tests++;

    if((fix_spaces("tshitts") == "tshitts")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sssa-ac-c---h-isxa3e") == "2---sssa-ac-c---h-isxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("Examhhple") == "Examhhple")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsE") == "hsE")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEtEhisx") == "ExampleEtEhisx")){ tests_passed++; } total_tests++;

    if((fix_spaces("senteExamplnce") == "senteExamplnce")){ tests_passed++; } total_tests++;

    if((fix_spaces("dwoc-c-c---sxeEtlerds") == "dwoc-c-c---sxeEtlerds")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exal") == "Exal")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsmpleeEthishiExame1lesxa3eEthitssxa3eis") == "hsmpleeEthishiExame1lesxa3eEthitssxa3eis")){ tests_passed++; } total_tests++;

    if((fix_spaces("worrd") == "worrd")){ tests_passed++; } total_tests++;

    if((fix_spaces("Eexa") == "Eexa")){ tests_passed++; } total_tests++;

    if((fix_spaces("sss") == "sss")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEtEhis3xa3e") == "ExampleEtEhis3xa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-ac-c-Exax--") == "2---sa-ac-c-Exax--")){ tests_passed++; } total_tests++;

    if((fix_spaces("Eampl") == "Eampl")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-a--a----c---") == "---a-a--a----c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExx") == "EExx")){ tests_passed++; } total_tests++;

    if((fix_spaces("IclExample") == "IclExample")){ tests_passed++; } total_tests++;

    if((fix_spaces("fwlMxhGm") == "fwlMxhGm")){ tests_passed++; } total_tests++;

    if((fix_spaces("hjnY") == "hjnY")){ tests_passed++; } total_tests++;

    if((fix_spaces("ga") == "ga")){ tests_passed++; } total_tests++;

    if((fix_spaces("ybsTcN") == "ybsTcN")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-ac--c---") == "2---sa-ac--c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("htsExampthitsleEthisxa3es") == "htsExampthitsleEthisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsihis") == "hsihis")){ tests_passed++; } total_tests++;

    if((fix_spaces("ihihis") == "ihihis")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExampple") == "EExampple")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exmp---a--a-a---b-b-Examplel") == "Exmp---a--a-a---b-b-Examplel")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exampthhisisa3e") == "Exampthhisisa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("--C") == "--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("KsMcxuu") == "KsMcxuu")){ tests_passed++; } total_tests++;

    if((fix_spaces("ce-c-c---sxxample") == "ce-c-c---sxxample")){ tests_passed++; } total_tests++;

    if((fix_spaces("_--C") == "_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExpampl") == "EExpampl")){ tests_passed++; } total_tests++;

    if((fix_spaces("xmamspleEthisxae3es") == "xmamspleEthisxae3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("-ExapmpleEc-thitts-") == "-ExapmpleEc-thitts-")){ tests_passed++; } total_tests++;

    if((fix_spaces("ple") == "ple")){ tests_passed++; } total_tests++;

    if((fix_spaces("1gapszzPPb") == "1gapszzPPb")){ tests_passed++; } total_tests++;

    if((fix_spaces("DQaiLlVsgN") == "DQaiLlVsgN")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExamplhsEteEthitsxa3e") == "ExamplhsEteEthitsxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("ssgs") == "ssgs")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExaxmpleEthitsxa3e3c---") == "ExaxmpleEthitsxa3e3c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("sentenceleEthisxa3esc-c---") == "sentenceleEthisxa3esc-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("thmple") == "thmple")){ tests_passed++; } total_tests++;

    if((fix_spaces("ssss") == "ssss")){ tests_passed++; } total_tests++;

    if((fix_spaces("cc-cggss-c---sxxcample") == "cc-cggss-c---sxxcample")){ tests_passed++; } total_tests++;

    if((fix_spaces("sentenceleEthisxa3esc-c-----his") == "sentenceleEthisxa3esc-c-----his")){ tests_passed++; } total_tests++;

    if((fix_spaces("gsss") == "gsss")){ tests_passed++; } total_tests++;

    if((fix_spaces("zExmplPb") == "zExmplPb")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExammle") == "EExammle")){ tests_passed++; } total_tests++;

    if((fix_spaces("EF2---sa-ac-c--11-h-isxoFlZTDagWE") == "EF2---sa-ac-c--11-h-isxoFlZTDagWE")){ tests_passed++; } total_tests++;

    if((fix_spaces("hExampleEthitssxa3eis") == "hExampleEthitssxa3eis")){ tests_passed++; } total_tests++;

    if((fix_spaces("hsExampaleEtheisxa3es") == "hsExampaleEtheisxa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("h") == "h")){ tests_passed++; } total_tests++;

    if((fix_spaces("T") == "T")){ tests_passed++; } total_tests++;

    if((fix_spaces("_wo_--C") == "_wo_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B---C") == "A-B---C")){ tests_passed++; } total_tests++;

    if((fix_spaces("2hsExampleExtEleEatEh-is-") == "2hsExampleExtEleEatEh-is-")){ tests_passed++; } total_tests++;

    if((fix_spaces("mE3thitssxa3eisxpample") == "mE3thitssxa3eisxpample")){ tests_passed++; } total_tests++;

    if((fix_spaces("2pleEtEhisxa3e") == "2pleEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("xal") == "xal")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhi---a-a-a---b-b-bKu-c-c-c---s") == "hhi---a-a-a---b-b-bKu-c-c-c---s")){ tests_passed++; } total_tests++;

    if((fix_spaces("2----sa-aciin-c---") == "2----sa-aciin-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("rpfY") == "rpfY")){ tests_passed++; } total_tests++;

    if((fix_spaces("c-c-c---sxeEtle") == "c-c-c---sxeEtle")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-b-Example") == "---a--a-a---b-b-Example")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a-aa-a2-b-b-c-c-c---") == "----a-aa-a2-b-b-c-c-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("Examxpbetweel") == "Examxpbetweel")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampExamplE") == "ExampExamplE")){ tests_passed++; } total_tests++;

    if((fix_spaces("wodhhi-ws") == "wodhhi-ws")){ tests_passed++; } total_tests++;

    if((fix_spaces("1ileExBig") == "1ileExBig")){ tests_passed++; } total_tests++;

    if((fix_spaces("2hsExampleEis-") == "2hsExampleEis-")){ tests_passed++; } total_tests++;

    if((fix_spaces("zExmbplPb") == "zExmbplPb")){ tests_passed++; } total_tests++;

    if((fix_spaces("----a-a-a---b-b-b-c-c-c---ExamplceEtEhisxa3e") == "----a-a-a---b-b-b-c-c-c---ExamplceEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-abetweeExasxa3e") == "2---sa-abetweeExasxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("Ega") == "Ega")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--ba-a---b-b-b-c-bismpleample") == "---a--ba-a---b-b-b-c-bismpleample")){ tests_passed++; } total_tests++;

    if((fix_spaces("3pleE") == "3pleE")){ tests_passed++; } total_tests++;

    if((fix_spaces("wordss") == "wordss")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a-a") == "---a-a")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exa3c--i-leEtEhisxa3e") == "Exa3c--i-leEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhihh") == "hhihh")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a---b-b-b-c-c-c---ExampleEtEhisxa3e") == "---a---b-b-b-c-c-c---ExampleEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("plethmple") == "plethmple")){ tests_passed++; } total_tests++;

    if((fix_spaces("xalxmamspleEhhhi---a-a-a---b-b-b--c-c-c---sthisxae3es") == "xalxmamspleEhhhi---a-a-a---b-b-b--c-c-c---sthisxae3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("hiss") == "hiss")){ tests_passed++; } total_tests++;

    if((fix_spaces("n") == "n")){ tests_passed++; } total_tests++;

    if((fix_spaces("gsentencele-a---") == "gsentencele-a---")){ tests_passed++; } total_tests++;

    if((fix_spaces("PzPPb") == "PzPPb")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-ac---c---") == "2---sa-ac---c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("3Example") == "3Example")){ tests_passed++; } total_tests++;

    if((fix_spaces("--CC") == "--CC")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-") == "---a--a-a---b-")){ tests_passed++; } total_tests++;

    if((fix_spaces("--CExampleEmtExamplC") == "--CExampleEmtExamplC")){ tests_passed++; } total_tests++;

    if((fix_spaces("22EExample-C--") == "22EExample-C--")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExc-c-c---sxeEtlepampl") == "EExc-c-c---sxeEtlepampl")){ tests_passed++; } total_tests++;

    if((fix_spaces("hExampxleEtEhisxa3e") == "hExampxleEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("sentenceleEthicsxa3esc-c---") == "sentenceleEthicsxa3esc-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("mplees") == "mplees")){ tests_passed++; } total_tests++;

    if((fix_spaces("gW") == "gW")){ tests_passed++; } total_tests++;

    if((fix_spaces("htsExampthitsleEthisxahhi---a-a-a---b-b-bKu-c-c-c---s3es") == "htsExampthitsleEthisxahhi---a-a-a---b-b-bKu-c-c-c---s3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("i2---s-a-a-c-c---n") == "i2---s-a-a-c-c---n")){ tests_passed++; } total_tests++;

    if((fix_spaces("sentenceleEt3mplehicsxa3esc-c---") == "sentenceleEt3mplehicsxa3esc-c---")){ tests_passed++; } total_tests++;

    if((fix_spaces("---a--a-a---b-b-b-c-c----") == "---a--a-a---b-b-b-c-c----")){ tests_passed++; } total_tests++;

    if((fix_spaces("wordrd") == "wordrd")){ tests_passed++; } total_tests++;

    if((fix_spaces("thitExampExampleEtles") == "thitExampExampleEtles")){ tests_passed++; } total_tests++;

    if((fix_spaces("zP----a-a-a---b-b-b-c-c-c---ExamplceEtEhisxa3e") == "zP----a-a-a---b-b-b-c-c-c---ExamplceEtEhisxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("tsthitts") == "tsthitts")){ tests_passed++; } total_tests++;

    if((fix_spaces("3apswd") == "3apswd")){ tests_passed++; } total_tests++;

    if((fix_spaces("thitteEthishts") == "thitteEthishts")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B-*m_-E-C") == "A-B-*m_-E-C")){ tests_passed++; } total_tests++;

    if((fix_spaces("sentenceleEthisxaa3es") == "sentenceleEthisxaa3es")){ tests_passed++; } total_tests++;

    if((fix_spaces("3thitssx") == "3thitssx")){ tests_passed++; } total_tests++;

    if((fix_spaces("s3thitssxa3eis") == "s3thitssxa3eis")){ tests_passed++; } total_tests++;

    if((fix_spaces("1ampleE") == "1ampleE")){ tests_passed++; } total_tests++;

    if((fix_spaces("mE3tshitssxa3eisxpample") == "mE3tshitssxa3eisxpample")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B-*mA_-E-C") == "A-B-*mA_-E-C")){ tests_passed++; } total_tests++;

    if((fix_spaces("ithits") == "ithits")){ tests_passed++; } total_tests++;

    if((fix_spaces("hismpleamplegapsle") == "hismpleamplegapsle")){ tests_passed++; } total_tests++;

    if((fix_spaces("nn") == "nn")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exeamggapsle") == "Exeamggapsle")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampsenteExamplnce1gggapsle") == "ExampsenteExamplnce1gggapsle")){ tests_passed++; } total_tests++;

    if((fix_spaces("E1ExampleEtEhisxeaEzExmplPbEEE") == "E1ExampleEtEhisxeaEzExmplPbEEE")){ tests_passed++; } total_tests++;

    if((fix_spaces("gaTnYIFZqaAzpshhi---a-a-a---") == "gaTnYIFZqaAzpshhi---a-a-a---")){ tests_passed++; } total_tests++;

    if((fix_spaces("cc-cggss-c---sxxcgapshhi---a-2---sa-ac-c---hisxa3e----ample") == "cc-cggss-c---sxxcgapshhi---a-2---sa-ac-c---hisxa3e----ample")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExpampA-B-*_le") == "ExpampA-B-*_le")){ tests_passed++; } total_tests++;

    if((fix_spaces("sRentenceleEthisxa3esc-c--") == "sRentenceleEthisxa3esc-c--")){ tests_passed++; } total_tests++;

    if((fix_spaces("thitExmE3thitssxa3eisxpampleampExampleEtles") == "thitExmE3thitssxa3eisxpampleampExampleEtles")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exa-E") == "Exa-E")){ tests_passed++; } total_tests++;

    if((fix_spaces("hhis2---sa-ac-c---h-isx") == "hhis2---sa-ac-c---h-isx")){ tests_passed++; } total_tests++;

    if((fix_spaces("2---sa-ac-c-i--h-isxa3e") == "2---sa-ac-c-i--h-isxa3e")){ tests_passed++; } total_tests++;

    if((fix_spaces("ABC") == "ABC")){ tests_passed++; } total_tests++;

    if((fix_spaces("mple") == "mple")){ tests_passed++; } total_tests++;

    if((fix_spaces("thce") == "thce")){ tests_passed++; } total_tests++;

    if((fix_spaces("mmple") == "mmple")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tence") == "sen3tence")){ tests_passed++; } total_tests++;

    if((fix_spaces("Big") == "Big")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExamExaple") == "ExamExaple")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exxa") == "Exxa")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tencein") == "sen3tencein")){ tests_passed++; } total_tests++;

    if((fix_spaces("se3n3tence") == "se3n3tence")){ tests_passed++; } total_tests++;

    if((fix_spaces("mmpleExample") == "mmpleExample")){ tests_passed++; } total_tests++;

    if((fix_spaces("mmpleE1") == "mmpleE1")){ tests_passed++; } total_tests++;

    if((fix_spaces("BiBg") == "BiBg")){ tests_passed++; } total_tests++;

    if((fix_spaces("mfKqrpAGApleE1") == "mfKqrpAGApleE1")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXAhX") == "BWnXAhX")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tenncein") == "sen3tenncein")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExa") == "EExa")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsen3tenceees") == "mpsen3tenceees")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExample") == "EExample")){ tests_passed++; } total_tests++;

    if((fix_spaces("tthhce") == "tthhce")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gapsB-*_--C") == "A-gapsB-*_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXAh") == "BWnXAh")){ tests_passed++; } total_tests++;

    if((fix_spaces("fKqrpAGA") == "fKqrpAGA")){ tests_passed++; } total_tests++;

    if((fix_spaces("se3n3ntence") == "se3n3ntence")){ tests_passed++; } total_tests++;

    if((fix_spaces("ample") == "ample")){ tests_passed++; } total_tests++;

    if((fix_spaces("BBig") == "BBig")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExxEa") == "ExxEa")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tence-") == "sen3tence-")){ tests_passed++; } total_tests++;

    if((fix_spaces("Bg") == "Bg")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExxA-xEa") == "ExxA-xEa")){ tests_passed++; } total_tests++;

    if((fix_spaces("mplExa") == "mplExa")){ tests_passed++; } total_tests++;

    if((fix_spaces("EEpxample") == "EEpxample")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gapsB-**_--C") == "A-gapsB-**_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("m") == "m")){ tests_passed++; } total_tests++;

    if((fix_spaces("sce") == "sce")){ tests_passed++; } total_tests++;

    if((fix_spaces("EEpxampl") == "EEpxampl")){ tests_passed++; } total_tests++;

    if((fix_spaces("xExxEA-xEa") == "xExxEA-xEa")){ tests_passed++; } total_tests++;

    if((fix_spaces("2xa") == "2xa")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExamExaplae") == "ExamExaplae")){ tests_passed++; } total_tests++;

    if((fix_spaces("gap") == "gap")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExamEA-gapsB-*_---Caple") == "ExamEA-gapsB-*_---Caple")){ tests_passed++; } total_tests++;

    if((fix_spaces("me") == "me")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggasen3tenceinp") == "ggasen3tenceinp")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnnX") == "BWnnX")){ tests_passed++; } total_tests++;

    if((fix_spaces("tthhcewords") == "tthhcewords")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-_B--*_--C") == "A-_B--*_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("bet") == "bet")){ tests_passed++; } total_tests++;

    if((fix_spaces("thh") == "thh")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gapsB--**_--C") == "A-gapsB--**_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gapsB-") == "A-gapsB-")){ tests_passed++; } total_tests++;

    if((fix_spaces("mm") == "mm")){ tests_passed++; } total_tests++;

    if((fix_spaces("3tenceds") == "3tenceds")){ tests_passed++; } total_tests++;

    if((fix_spaces("2e") == "2e")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpscelle") == "mpscelle")){ tests_passed++; } total_tests++;

    if((fix_spaces("se3n") == "se3n")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exaa") == "Exaa")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExamExbetweenlae") == "ExamExbetweenlae")){ tests_passed++; } total_tests++;

    if((fix_spaces("isenn3tenncein") == "isenn3tenncein")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEx") == "ExampleEx")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggasen3tenceinpsce") == "ggasen3tenceinpsce")){ tests_passed++; } total_tests++;

    if((fix_spaces("tbet") == "tbet")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tencte") == "sen3tencte")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tenecein") == "sen3tenecein")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gaps-B-*_*--C") == "A-gaps-B-*_*--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsen3tenceeees") == "mpsen3tenceeees")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsent3tencee2xa") == "mpsent3tencee2xa")){ tests_passed++; } total_tests++;

    if((fix_spaces("betmples") == "betmples")){ tests_passed++; } total_tests++;

    if((fix_spaces("pBiggap") == "pBiggap")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsen3tenEExceees") == "mpsen3tenEExceees")){ tests_passed++; } total_tests++;

    if((fix_spaces("rds") == "rds")){ tests_passed++; } total_tests++;

    if((fix_spaces("BiBgg") == "BiBgg")){ tests_passed++; } total_tests++;

    if((fix_spaces("mplle") == "mplle")){ tests_passed++; } total_tests++;

    if((fix_spaces("tthhwords") == "tthhwords")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXsenbtenceAhX") == "BWnXsenbtenceAhX")){ tests_passed++; } total_tests++;

    if((fix_spaces("CWSrjljyFR") == "CWSrjljyFR")){ tests_passed++; } total_tests++;

    if((fix_spaces("gaa") == "gaa")){ tests_passed++; } total_tests++;

    if((fix_spaces("e") == "e")){ tests_passed++; } total_tests++;

    if((fix_spaces("weens") == "weens")){ tests_passed++; } total_tests++;

    if((fix_spaces("mExampleplExa") == "mExampleplExa")){ tests_passed++; } total_tests++;

    if((fix_spaces("wse3n3ntenceor") == "wse3n3ntenceor")){ tests_passed++; } total_tests++;

    if((fix_spaces("eExample") == "eExample")){ tests_passed++; } total_tests++;

    if((fix_spaces("isennmpsen3tencee3tennceinbet") == "isennmpsen3tencee3tennceinbet")){ tests_passed++; } total_tests++;

    if((fix_spaces("bets") == "bets")){ tests_passed++; } total_tests++;

    if((fix_spaces("mp") == "mp")){ tests_passed++; } total_tests++;

    if((fix_spaces("EEpx") == "EEpx")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExamEA-gapsB-*_a--m-Cap") == "ExamEA-gapsB-*_a--m-Cap")){ tests_passed++; } total_tests++;

    if((fix_spaces("xExxEA-xEaExae") == "xExxEA-xEaExae")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tenc") == "sen3tenc")){ tests_passed++; } total_tests++;

    if((fix_spaces("tthh") == "tthh")){ tests_passed++; } total_tests++;

    if((fix_spaces("ebS") == "ebS")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gaps-B-*_*s--C") == "A-gaps-B-*_*s--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("eaxa") == "eaxa")){ tests_passed++; } total_tests++;

    if((fix_spaces("rrds") == "rrds")){ tests_passed++; } total_tests++;

    if((fix_spaces("sece-") == "sece-")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExamExaEple") == "ExamExaEple")){ tests_passed++; } total_tests++;

    if((fix_spaces("ps") == "ps")){ tests_passed++; } total_tests++;

    if((fix_spaces("a") == "a")){ tests_passed++; } total_tests++;

    if((fix_spaces("isennmpsen3tencee3tennceintbet") == "isennmpsen3tencee3tennceintbet")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampExaplelea") == "ExampExaplelea")){ tests_passed++; } total_tests++;

    if((fix_spaces("pmp") == "pmp")){ tests_passed++; } total_tests++;

    if((fix_spaces("rNfUBspa") == "rNfUBspa")){ tests_passed++; } total_tests++;

    if((fix_spaces("wocrds") == "wocrds")){ tests_passed++; } total_tests++;

    if((fix_spaces("rNfteUBspa") == "rNfteUBspa")){ tests_passed++; } total_tests++;

    if((fix_spaces("esen3tencempsen3tenEExceee3s-") == "esen3tencempsen3tenEExceee3s-")){ tests_passed++; } total_tests++;

    if((fix_spaces("EEEpx") == "EEEpx")){ tests_passed++; } total_tests++;

    if((fix_spaces("betmeples") == "betmeples")){ tests_passed++; } total_tests++;

    if((fix_spaces("te") == "te")){ tests_passed++; } total_tests++;

    if((fix_spaces("XRSIx") == "XRSIx")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXAXhX") == "BWnXAXhX")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gapsB-B*_--C") == "A-gapsB-B*_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsece-lExa") == "mpsece-lExa")){ tests_passed++; } total_tests++;

    if((fix_spaces("tth") == "tth")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExagmEA-gapsB-*_---Caple") == "ExagmEA-gapsB-*_---Caple")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggasen3tenp") == "ggasen3tenp")){ tests_passed++; } total_tests++;

    if((fix_spaces("m3sBig") == "m3sBig")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXhceAh") == "BWnXhceAh")){ tests_passed++; } total_tests++;

    if((fix_spaces("XBWX") == "XBWX")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B-*_-C") == "A-B-*_-C")){ tests_passed++; } total_tests++;

    if((fix_spaces("sp") == "sp")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsen3tenEExceees-") == "mpsen3tenEExceees-")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExampEle") == "EExampEle")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXAXhEEpxamplX") == "BWnXAXhEEpxamplX")){ tests_passed++; } total_tests++;

    if((fix_spaces("3tencehhce") == "3tencehhce")){ tests_passed++; } total_tests++;

    if((fix_spaces("lmmple") == "lmmple")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-B-*---a-a-a---b-b-b-c-c-c---_--C") == "A-B-*---a-a-a---b-b-b-c-c-c---_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("senbtenc") == "senbtenc")){ tests_passed++; } total_tests++;

    if((fix_spaces("mmpleEsen3tenc") == "mmpleEsen3tenc")){ tests_passed++; } total_tests++;

    if((fix_spaces("Examplxe") == "Examplxe")){ tests_passed++; } total_tests++;

    if((fix_spaces("tthhX") == "tthhX")){ tests_passed++; } total_tests++;

    if((fix_spaces("sen3tenwce") == "sen3tenwce")){ tests_passed++; } total_tests++;

    if((fix_spaces("EExEampEle") == "EExEampEle")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsen33tenceees") == "mpsen33tenceees")){ tests_passed++; } total_tests++;

    if((fix_spaces("tthhrwords") == "tthhrwords")){ tests_passed++; } total_tests++;

    if((fix_spaces("Ex2ample") == "Ex2ample")){ tests_passed++; } total_tests++;

    if((fix_spaces("betms") == "betms")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXpAXhEEpxamplX") == "BWnXpAXhEEpxamplX")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsecmpscellee-lExa") == "mpsecmpscellee-lExa")){ tests_passed++; } total_tests++;

    if((fix_spaces("plmmple") == "plmmple")){ tests_passed++; } total_tests++;

    if((fix_spaces("lmmpletthhcewords") == "lmmpletthhcewords")){ tests_passed++; } total_tests++;

    if((fix_spaces("am") == "am")){ tests_passed++; } total_tests++;

    if((fix_spaces("psen3tencee") == "psen3tencee")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gapsB--**_s--C") == "A-gapsB--**_s--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("meaxaplle") == "meaxaplle")){ tests_passed++; } total_tests++;

    if((fix_spaces("pBgig") == "pBgig")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gap--**_s--C") == "A-gap--**_s--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("mmmpleExample") == "mmmpleExample")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExampleEx1") == "ExampleEx1")){ tests_passed++; } total_tests++;

    if((fix_spaces("ggasenp3tenp") == "ggasenp3tenp")){ tests_passed++; } total_tests++;

    if((fix_spaces("XBWXX") == "XBWXX")){ tests_passed++; } total_tests++;

    if((fix_spaces("betwneen") == "betwneen")){ tests_passed++; } total_tests++;

    if((fix_spaces("2hcee") == "2hcee")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnplX") == "BWnplX")){ tests_passed++; } total_tests++;

    if((fix_spaces("2xExa") == "2xExa")){ tests_passed++; } total_tests++;

    if((fix_spaces("pBgiBg") == "pBgiBg")){ tests_passed++; } total_tests++;

    if((fix_spaces("bteet") == "bteet")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnAXAh") == "BWnAXAh")){ tests_passed++; } total_tests++;

    if((fix_spaces("BWnXAXhEEpxampllX") == "BWnXAXhEEpxampllX")){ tests_passed++; } total_tests++;

    if((fix_spaces("senbtence") == "senbtence")){ tests_passed++; } total_tests++;

    if((fix_spaces("ampl3tencehhcele") == "ampl3tencehhcele")){ tests_passed++; } total_tests++;

    if((fix_spaces("mfKqrpAGAlpleE1") == "mfKqrpAGAlpleE1")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-Bb-c-c-c---_--C") == "A-Bb-c-c-c---_--C")){ tests_passed++; } total_tests++;

    if((fix_spaces("tbsenbtencet") == "tbsenbtencet")){ tests_passed++; } total_tests++;

    if((fix_spaces("Exaisennmpsen3tencee3tennceinbet1") == "Exaisennmpsen3tencee3tennceinbet1")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-Bf-*_-mfKqrpAGApleE1C") == "A-Bf-*_-mfKqrpAGApleE1C")){ tests_passed++; } total_tests++;

    if((fix_spaces("crdsExamplxe") == "crdsExamplxe")){ tests_passed++; } total_tests++;

    if((fix_spaces("A-gapsBmplsExa") == "A-gapsBmplsExa")){ tests_passed++; } total_tests++;

    if((fix_spaces("mmmp") == "mmmp")){ tests_passed++; } total_tests++;

    if((fix_spaces("senbteenc") == "senbteenc")){ tests_passed++; } total_tests++;

    if((fix_spaces("ExapleEx") == "ExapleEx")){ tests_passed++; } total_tests++;

    if((fix_spaces("thisebBig") == "thisebBig")){ tests_passed++; } total_tests++;

    if((fix_spaces("ebBigmp") == "ebBigmp")){ tests_passed++; } total_tests++;

    if((fix_spaces("mmmm") == "mmmm")){ tests_passed++; } total_tests++;

    if((fix_spaces("mpsen3ttenceemmpple") == "mpsen3ttenceemmpple")){ tests_passed++; } total_tests++;

    if((fix_spaces("1nceees") == "1nceees")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


