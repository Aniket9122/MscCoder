#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string words_in_sentence(const string& sentence) {
    istringstream ss(sentence);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    string new_sentence = "";
    for (const auto& word : words) {
        if (is_prime(word.length())) {
            new_sentence += word + " ";
        }
    }

    return new_sentence.substr(0, new_sentence.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    } else if (n == 2) {
        return true;
    } else {
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
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

    if((words_in_sentence("This is a test") == "is")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lets go for swimming") == "go for")){ tests_passed++; } total_tests++;

    if((words_in_sentence("there is no place available here") == "there is no place")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Hi I am Hussein") == "Hi am Hussein")){ tests_passed++; } total_tests++;

    if((words_in_sentence("go for it") == "go for it")){ tests_passed++; } total_tests++;

    if((words_in_sentence("here") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("here is") == "is")){ tests_passed++; } total_tests++;

    if((words_in_sentence("here") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("my") == "my")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eleeeuge") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("I") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("test") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("picaaaaaad") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eight") == "eight")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcdefghijklmnopqrstuvwxyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcpipers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("six") == "six")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aabcaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("zudeUmy") == "zudeUmy")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fox") == "fox")){ tests_passed++; } total_tests++;

    if((words_in_sentence("clwFZYzs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pcicaaaaaad") == "pcicaaaaaad")){ tests_passed++; } total_tests++;

    if((words_in_sentence("clwZFZYzs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aabcaaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tesst") == "tesst")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ELBDOeWCp") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fodoctorx") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eighpeck") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dooctaaaaor") == "dooctaaaaor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wFZYzs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wFZYs") == "wFZYs")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaorfoforr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brown") == "brown")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaorfoftorr") == "doctaaaaorfoftorr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ffox") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nine") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("a") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("seven") == "seven")){ tests_passed++; } total_tests++;

    if((words_in_sentence("psomeicked") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctthreefooftorr") == "doctthreefooftorr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcyz") == "abcyz")){ tests_passed++; } total_tests++;

    if((words_in_sentence("browrn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("picked") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tofhe") == "tofhe")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wit") == "wit")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaa") == "aaaaaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aabcnsatumbersaaaaa") == "aabcnsatumbersaaaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twnumboneers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("hat") == "hat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sciencedoctaaaaor") == "sciencedoctaaaaor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tbwnumboneers") == "tbwnumboneers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aa") == "aa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("three") == "three")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lazy") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("docctor") == "docctor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lazynumbers") == "lazynumbers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("jumps") == "jumps")){ tests_passed++; } total_tests++;

    if((words_in_sentence("siis") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aha") == "aha")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pipcked") == "pipcked")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppersefoofrtorr") == "peppersefoofrtorr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaa") == "aaaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("P") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("browrnsix") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pickedwit") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aahin") == "aahin")){ tests_passed++; } total_tests++;

    if((words_in_sentence("one") == "one")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("awordsbc") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("browrisnsix") == "browrisnsix")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcppipeThears") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghijklmnopqrstuvwxyzbrowrn") == "defghijklmnopqrstuvwxyzbrowrn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ahat") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fffopipersx") == "fffopipersx")){ tests_passed++; } total_tests++;

    if((words_in_sentence("asatdooctaaaaor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("cat") == "cat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thed") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abc") == "abc")){ tests_passed++; } total_tests++;

    if((words_in_sentence("si") == "si")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ssi") == "ssi")){ tests_passed++; } total_tests++;

    if((words_in_sentence("piP") == "piP")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaoraahin") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("has") == "has")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Piper") == "Piper")){ tests_passed++; } total_tests++;

    if((words_in_sentence("psoed") == "psoed")){ tests_passed++; } total_tests++;

    if((words_in_sentence("jmumps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("caaaaaaaaaaaaaasixaaaaaaactor") == "caaaaaaaaaaaaaasixaaaaaaactor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaathteaaaaaaaaa") == "aaaathteaaaaaaaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaorrfoforor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("s") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fffox") == "fffox")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oaf") == "oaf")){ tests_passed++; } total_tests++;

    if((words_in_sentence("browrnjumps") == "browrnjumps")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eter") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaAnaaaaaaaaaaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("iss") == "iss")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bropickledn") == "bropickledn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("PP") == "PP")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oabcpipersttwoaf") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("prime") == "prime")){ tests_passed++; } total_tests++;

    if((words_in_sentence("docttThehrek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("over") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ipicked") == "ipicked")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brosiispickledn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ccat") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quick") == "quick")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fodoccto") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcy") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aassibcnsatumbersaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pickedquick") == "pickedquick")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aahina") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcppiapeTheaars") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pickeddquick") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wiit") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctthreefoolazynumbersftorr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ahhat") == "ahhat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brosiispsickledn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sentence") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pidckedwit") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctoaaaaorfoforr") == "doctoaaaaorfoforr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("atwohhat") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("haas") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("on") == "on")){ tests_passed++; } total_tests++;

    if((words_in_sentence("scxdLYL") == "scxdLYL")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aahinP") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaabrowrnaa") == "aaaaabrowrnaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wsFZYzs") == "wsFZYzs")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quuick") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaapiPaaaa") == "aaaapiPaaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcyaabcaaaaaaz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaactoar") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("forx") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghiabcpipersjklmnopqrstuvwxyzbrowrn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eeter") == "eeter")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aathedaaaaaaaaaaaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaapipersaaaaaaaaactoar") == "aaaaaaaaaaapipersaaaaaaaaactoar")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fffokeepsx") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("t") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fffopiprersx") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghijklmnopqrstu") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicdoctorown") == "quicdoctorown")){ tests_passed++; } total_tests++;

    if((words_in_sentence("acaaaaaaaaaaaaaasixaaaaaaactora") == "acaaaaaaaaaaaaaasixaaaaaaactora")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcppiapeaTheaars") == "abcppiapeaTheaars")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaabrowrnaaaactor") == "aaaaaaaaaaaaaaabrowrnaaaactor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bropickpleldn") == "bropickpleldn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pickediwit") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghijkaaaalmnopqrstu") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicka") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aawfoura") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("qpThek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaaaceeter") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pctwoicaaaaaad") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ffaaaaaaox") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("spiP") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dtoctaaaaorrfoforor") == "dtoctaaaaorrfoforor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaapicklledaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ipipcked") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ly") == "ly")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Yzs") == "Yzs")){ tests_passed++; } total_tests++;

    if((words_in_sentence("apple") == "apple")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aahihhna") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicdoctn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("asatdooctor") == "asatdooctor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fthteffokeepsx") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twnumboeers") == "twnumboeers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ipickeed") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ahhateight") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brosiispicklledn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ss") == "ss")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aabcyaabcaaaaaaz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ffaaaaahatapiPaaaaaaaaaaox") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicdoct") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peck") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("docotthrek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bropickplpidckedwiteldn") == "bropickplpidckedwiteldn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tbwnumboneoers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sss") == "sss")){ tests_passed++; } total_tests++;

    if((words_in_sentence("etetpTheerest") == "etetpTheerest")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaatbwnumboneersadoctor") == "aaatbwnumboneersadoctor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quickaaahinP") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aworddsbc") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eTtetpTheerest") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("matrime") == "matrime")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcppipeTheminars") == "abcppipeTheminars")){ tests_passed++; } total_tests++;

    if((words_in_sentence("atwohsomehat") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wordds") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("matsix") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lzazy") == "lzazy")){ tests_passed++; } total_tests++;

    if((words_in_sentence("caaaaaaaaaaaaaasixaor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quuuick") == "quuuick")){ tests_passed++; } total_tests++;

    if((words_in_sentence("hhin") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("apbcppieminars") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ipipckedapbcppieminars") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("broELBDOeWCp") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ququicdoctorownn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("faa") == "faa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaaaeWCp") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("scxdLYtwnumboeers") == "scxdLYtwnumboeers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fffopipersxeeter") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pekck") == "pekck")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Anlazynumbers") == "Anlazynumbers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aabcyaabcaaaaaazjumps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aabcaaa") == "aabcaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("spiwiit") == "spiwiit")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppersghpecrk") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oone") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lazynumbrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("iPiper") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaatbwnumboneersa") == "aaatbwnumboneersa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("browbn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("hin") == "hin")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcdefghijklmnopqrstuvwxabcppipeThearsyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dooctaaaaorbrowrnjumps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaAnaaaaaaaaaaaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dooctaaaor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sefofrxven") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctoaapsoedaaorfoforr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("az") == "az")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ELquickaaahinPBDOeWCp") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pickeduquick") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bfffopipersxeeterrown") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("zudeU") == "zudeU")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ff") == "ff")){ tests_passed++; } total_tests++;

    if((words_in_sentence("picklled") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("picdoctaaaaorked") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sstofhe") == "sstofhe")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bropipekckckpleldn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sciencedoctaaaeaor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aahidooctaaaaorbrowrnjumpsna") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Pk") == "Pk")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppersghpeck") == "peppersghpeck")){ tests_passed++; } total_tests++;

    if((words_in_sentence("cccat") == "cccat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Paabcnsatumbersaaaaak") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tthed") == "tthed")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaAnaaaaaaaaaaaaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lazyndooctaaaaorumbers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaa") == "aaaaaaaaaaaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("seveen") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tbwnumrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pipP") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("docttaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctthrePetooftorr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaaor") == "doctaaaaaor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("jmjps") == "jmjps")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pepperseffoofrtorr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("picaaaad") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppersckled") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dooctor") == "dooctor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppersas") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaeaaceeter") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppersckleed") == "peppersckleed")){ tests_passed++; } total_tests++;

    if((words_in_sentence("within") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oaaf") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fffokeepshinx") == "fffokeepshinx")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ahthat") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaasixaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pekkck") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("awordsbcawf") == "awordsbcawf")){ tests_passed++; } total_tests++;

    if((words_in_sentence("apickeduquickaaAnaaaaaaaaaaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pepperseffoofrtoorr") == "pepperseffoofrtoorr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twnusioeers") == "twnusioeers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ayz") == "ayz")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaa") == "aaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doumbersftorr") == "doumbersftorr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tofhhe") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcppiaepeaTheaars") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("jmjpps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("laozyndooctaaaaorumbers") == "laozyndooctaaaaorumbers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ELOeWCp") == "ELOeWCp")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pickeduquickaaAnaaaaaaaaaator") == "pickeduquickaaAnaaaaaaaaaator")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twnipipckedumboneers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("piiP") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aasciencedoctaaaeaoraaaaaaaaaaa") == "aasciencedoctaaaeaoraaaaaaaaaaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("jmjpp") == "jmjpp")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brownn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicdoneaaaAnaaaaaaaaaaaawrnaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaaaaceeter") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("PaaaAnaaaaaaaatoriper") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("YYzs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghiabcpipersjklmnopqrstuwn") == "defghiabcpipersjklmnopqrstuwn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ipipckpeppersghpeckctoumpsnaminars") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("docrek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brownnn") == "brownnn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aawfooura") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("otwoaf") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oceiPeter") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctoaaaaorfdoctthrePetooftorroforr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("woaaaaaaaaaaaaaaaaaaaardds") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Pet") == "Pet")){ tests_passed++; } total_tests++;

    if((words_in_sentence("caaaaaaaaaaaaaaaaaaaaaaceeteraaaaaaaaaaaaaasixaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("matrimecat") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ssentennce") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("mkZrwvKDr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ayabcy") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twnumboaaaaabrdoaaneers") == "twnumboaaaaabrdoaaneers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Yzzfodoccotos") == "Yzzfodoccotos")){ tests_passed++; } total_tests++;

    if((words_in_sentence("q") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pieckleld") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghijklmnopqrstruvwxyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("jjmummmps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fodoctorox") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("clwZFZYz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ZGmkXBsVH") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghijkaaaalmnabcdefghaahinP") == "defghijkaaaalmnabcdefghaahinP")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofaaapiPaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("onn") == "onn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("e") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaorlly") == "doctaaaaorlly")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aabc") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaabrdoaa") == "aaaaabrdoaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ipipckpepperckctoumpsnaminars") == "ipipckpepperckctoumpsnaminars")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fodabcppiaepeaTheaarsoccto") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pepck") == "pepck")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twnusioeeighters") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aav") == "aav")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaaaaaaaatorhers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("piecklpeld") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("breown") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("olazynumbersn") == "olazynumbersn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pk") == "pk")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dogper") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofaaaaaaaaaaaaaaaaaaaaaaaaaapiPaaaapiPaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaatbwnuoneersa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaAnaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("qpThekk") == "qpThekk")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fodaapaicklledarox") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lyazy") == "lyazy")){ tests_passed++; } total_tests++;

    if((words_in_sentence("prbreownime") == "prbreownime")){ tests_passed++; } total_tests++;

    if((words_in_sentence("mecat") == "mecat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghijkxlmnopqaaaarstruvwxyz") == "defghijkxlmnopqaaaarstruvwxyz")){ tests_passed++; } total_tests++;

    if((words_in_sentence("piawordsbciwit") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctaaaaoorrfoforor") == "doctaaaaoorrfoforor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pseppersghpecrkree") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sieven") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaAnaaaaaaaaahinaaaaaaaaactor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aasciencedocteaaaeaoraaaaaaaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tpipP") == "tpipP")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dooctaaaaorbrowrcnjumps") == "dooctaaaaorbrowrcnjumps")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dooctaaaaorbrwornjuwmps") == "dooctaaaaorbrwornjuwmps")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaascience") == "aaaaaascience")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dehrek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbers") == "numbers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicninek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicniinek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("two") == "two")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twPetero") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbeonrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wWFWJpaA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pceck") == "pceck")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tesnumbeonrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("some") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twPro") == "twPro")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aonepple") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twProo") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wWFWJaa") == "wWFWJaa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("f") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quik") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nusmbers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("o") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quaoneppleek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("priime") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaakeepsaaaaaaaapaAf") == "aaaaaaaaaaaakeepsaaaaaaaapaAf")){ tests_passed++; } total_tests++;

    if((words_in_sentence("this") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppers") == "peppers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tesAnnumbeonrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("apbcopqrstuvwxyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("words") == "words")){ tests_passed++; } total_tests++;

    if((words_in_sentence("in") == "in")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaakeepsatwPeteroapaA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("branches") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wordcats") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bazy") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("r") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("n") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Peter") == "Peter")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thhree") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicnibazynek") == "quicnibazynek")){ tests_passed++; } total_tests++;

    if((words_in_sentence("mataa") == "mataa")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twPettero") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aonepplee") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eZnNBxOH") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofinek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("overpceck") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofers") == "ofers")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wtwo") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nusmbscience") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaatwodogaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aone") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("FwWFWJpaA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("priisiimofineke") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("rtwPetero") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quipriisiimofinekek") == "quipriisiimofinekek")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ni") == "ni")){ tests_passed++; } total_tests++;

    if((words_in_sentence("defghijklmnopqrstuvwxyz") == "defghijklmnopqrstuvwxyz")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppeers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("priisiimofinTheke") == "priisiimofinTheke")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twodogats") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("threeshas") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eZnNBxOHAn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("threesome") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("keeps") == "keeps")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicniscwodaynceience") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("niaonepplee") == "niaonepplee")){ tests_passed++; } total_tests++;

    if((words_in_sentence("The") == "The")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofinekome") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Peeter") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ninee") == "ninee")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lpZlaIbZZ") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pickled") == "pickled")){ tests_passed++; } total_tests++;

    if((words_in_sentence("uick") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eZnNBxOHH") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicnibaczynek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ateest") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tuickesome") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("An") == "An")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eZnNaonepple") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("apbcpoxyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("rtwPro") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sentenceaoe") == "sentenceaoe")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wodayncek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peppeatesters") == "peppeatesters")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaakeepsaaaaaaaaapaAf") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ThAn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("kekeps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("word") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaakeepsaaaaaaaapaA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("science") == "science")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wWwodayabcdefghijklmnopqrstuvwxyzFWJaaaaaaaapaA") == "wWwodayabcdefghijklmnopqrstuvwxyzFWJaaaaaaaapaA")){ tests_passed++; } total_tests++;

    if((words_in_sentence("kweeps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bcrsentencehes") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nTThAn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("niaonepplquicniscwoodaynceienceee") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bcrsentebrseentenncehesnceheafThes") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("owodayabcdefghijklmnopqrstuvwxyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("threesha") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ovrlazy") == "ovrlazy")){ tests_passed++; } total_tests++;

    if((words_in_sentence("branchers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wordrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tesnumbeonrrs") == "tesnumbeonrrs")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tukickesome") == "tukickesome")){ tests_passed++; } total_tests++;

    if((words_in_sentence("inwordsentence") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbersofers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doctorover") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sat") == "sat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaapeppeatestersaaaaaaaakeepsatwPeteroapaquipriisiimofinekekA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcdefghijklmnopqrstuvwxyza") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofce") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bnusmbers") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("zYwjhBCYS") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("dog") == "dog")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oveorpceck") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("woodaynce") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bazyover") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pkweeps") == "pkweeps")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicniscience") == "quicniscience")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaakeepsatwPaeteroapaA") == "aaaaaaaaaaaakeepsatwPaeteroapaA")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ttukickesomeowodog") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("qnuicniscience") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aonePiper") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("niaonepplquicniscwoodaynceiencawayreee") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oveAn") == "oveAn")){ tests_passed++; } total_tests++;

    if((words_in_sentence("scPeterience") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbeonwithins") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofcfe") == "ofcfe")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wodayabcdefghijpklmnopqrstuvwxfivec") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Th") == "Th")){ tests_passed++; } total_tests++;

    if((words_in_sentence("owodayabcdefghijklmnopqrstuyz") == "owodayabcdefghijklmnopqrstuyz")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doge") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tesAnnumbe") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twPaaaaaaaaaaaakeepsaaaaaaaaapaAfero") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("TTh") == "TTh")){ tests_passed++; } total_tests++;

    if((words_in_sentence("awayr") == "awayr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("away") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twodogatswords") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("i") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oe") == "oe")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twPrroo") == "twPrroo")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nusmbeaonePiperrs") == "nusmbeaonePiperrs")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aonple") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twPPtettero") == "twPPtettero")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Pkled") == "Pkled")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicnik") == "quicnik")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wWFpeppeatestersWJpaA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twPPtetteroaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofe") == "ofe")){ tests_passed++; } total_tests++;

    if((words_in_sentence("day") == "day")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wodayatbcdefghijpklmnopqrstuvwxfivec") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pr") == "pr")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brseentenncehesPiper") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("lpZltwProaIlbbZZZ") == "lpZltwProaIlbbZZZ")){ tests_passed++; } total_tests++;

    if((words_in_sentence("inwoovekwnusmbscienceeepbrsentencehesteriencerrdseintence") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("foxin") == "foxin")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbbeonrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pecck") == "pecck")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thdoctor") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("awaye") == "awaye")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nin") == "nin")){ tests_passed++; } total_tests++;

    if((words_in_sentence("keeThekps") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thhtree") == "thhtree")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbeonbcrsentencehess") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eZnNadefghquicniinekijklmnopqrstuvyzple") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tpeppeersuickesome") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tukicokesome") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ovrlazuicky") == "ovrlazuicky")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaakeepsaaaaainbrsentencehesekaaaapaAf") == "aaaaaaaaaaaakeepsaaaaainbrsentencehesekaaaapaAf")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twto") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wodaynek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fobranchesx") == "fobranchesx")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbeonfoxbcrsentencehess") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wodayne") == "wodayne")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quipriistestiimofinekek") == "quipriistestiimofinekek")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oveeorpceck") == "oveeorpceck")){ tests_passed++; } total_tests++;

    if((words_in_sentence("owhatordsce") == "owhatordsce")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oifinek") == "oifinek")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicinbrsentencehesekniinek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quicniscienthe") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eiginbrsentencehesht") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tneesnumbeonrrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ovrlazcuicky") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ovrpceck") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quiicniscwodaynceience") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("sciequipriisiimofinekeknce") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ffaaaaaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("peecc") == "peecc")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofinekat") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("twwo") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("primme") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nusmnbscience") == "nusmnbscience")){ tests_passed++; } total_tests++;

    if((words_in_sentence("numbeonfoxbcrsseentencehess") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofnineece") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("awthpriquikqmeeayrek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aoneoverpplee") == "aoneoverpplee")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaapeppeatestersaaaaaaaaPeteroapaquipriisiimofinekekA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wtowo") == "wtowo")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thhreescience") == "thhreescience")){ tests_passed++; } total_tests++;

    if((words_in_sentence("qquik") == "qquik")){ tests_passed++; } total_tests++;

    if((words_in_sentence("brseentenncwWFWJaaehesPipwWFWJaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wodayncekthdoctor") == "wodayncekthdoctor")){ tests_passed++; } total_tests++;

    if((words_in_sentence("owodayabcdefghiijklmnopqrstuyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaa") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("nummrbbeonrs") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pcpeck") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("foxina") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wordthinuquaoneppleekincats") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thpriquikmee") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("owodayabcdefghijklthe") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("quiicniscwoidaynceience") == "quiicniscwoidaynceience")){ tests_passed++; } total_tests++;

    if((words_in_sentence("priimme") == "priimme")){ tests_passed++; } total_tests++;

    if((words_in_sentence("neZnNBxOHH") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wordwodayabcdefghijpklmnopqrstuvwxfivec") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fVLkz") == "fVLkz")){ tests_passed++; } total_tests++;

    if((words_in_sentence("qf") == "qf")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Thhe") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("abcdefghijklmnopqrstuvbrseenteenncwWFWJaaehesPipwWFWJaawxyza") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaquicnissixcience") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofinekpr") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aoonpple") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wordors") == "wordors")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ovrlazuy") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("kekepsrek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ht") == "ht")){ tests_passed++; } total_tests++;

    if((words_in_sentence("woodayndce") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ovrlazuthia") == "ovrlazuthia")){ tests_passed++; } total_tests++;

    if((words_in_sentence("qq") == "qq")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thpriquikmeeg") == "thpriquikmeeg")){ tests_passed++; } total_tests++;

    if((words_in_sentence("oveeAn") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wsords") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("athis") == "athis")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wsds") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wWFW") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("Peetquiker") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("keepsrek") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ovrlazuthian") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ofineat") == "ofineat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("gthhtree") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wcordcats") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("owodayabcdefghiijklmnoptwodogatswordsqrstuyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("daywodayabcdefghijklmnopqrstuvwxyz") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("tesAnnumbonrs") == "tesAnnumbonrs")){ tests_passed++; } total_tests++;

    if((words_in_sentence("ineZnNaoneppleo") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("threeshowodayabcdefghijklmnopqrstuyza") == "threeshowodayabcdefghijklmnopqrstuyza")){ tests_passed++; } total_tests++;

    if((words_in_sentence("jumhewPro") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("priisiiomofinTheke") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("fobrancheovrlazuthiansx") == "fobrancheovrlazuthiansx")){ tests_passed++; } total_tests++;

    if((words_in_sentence("wodayatbcdepfghijpklmnopqrstuvwxfivec") == "wodayatbcdepfghijpklmnopqrstuvwxfivec")){ tests_passed++; } total_tests++;

    if((words_in_sentence("cdTOCiFqP") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("pe") == "pe")){ tests_passed++; } total_tests++;

    if((words_in_sentence("bcrsentenncehes") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("eofcfe") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("thinuquaoneppleekin") == "thinuquaoneppleekin")){ tests_passed++; } total_tests++;

    if((words_in_sentence("qnumbbeonrs") == "qnumbbeonrs")){ tests_passed++; } total_tests++;

    if((words_in_sentence("doegcem") == "doegcem")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aopneppnle") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaaaaaaaaakeepsaaaaaaaaptwPaaaaaaaaaaaakeepsaaaaaaaaapaAferoaA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("mat") == "mat")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aaaaapeppeatestersaaaaaaaaPeteroapaqauipriisiimofinekekA") == "")){ tests_passed++; } total_tests++;

    if((words_in_sentence("aoonlpple") == "")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


