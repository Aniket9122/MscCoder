#include <iostream>
#include <string>
using namespace std;

string file_name_check(string file_name){
    int count = 0, pos = -1;
    
    //Checking the conditions mentioned in the question.
    for (char c : file_name) { 
        if ('0' <= c && c <= '9') ++count;
        if (c == '.'){
            if(pos != -1) return "No"; //There should not be more than one dot
            pos = count;
        }
    }
    
    if(file_name[0] < 'A' || (file_name[0] > 'Z' && file_name[0] < 'a') || file_name[0] > 'z') return "No"; //The substring before the dot should not be empty and start with a letter
    if(count-pos > 3) return "No";  //There should not be more than three digits in the filename after the dot.
    
    string extension = file_name.substr(file_name.find('.')+1);
    if (extension != "txt" && extension != "exe" && extension != "dll") return "No"; //The substring after the dot should be one of these: {"txt", "exe", "dll"}
    
    return "Yes"; 
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

    if((file_name_check("example.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("1example.dll") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("s1sdf3.asd") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("K.dll") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("MY16FILE3.exe") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("His12FILE94.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("_Y.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("?aREYA.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("/this_is_valid.dll") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_valid.wow") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_valid.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_valid.txtexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("#this2_i4s_5valid.ten") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("@this1_is6_valid.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_12valid.6exe4.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("all.exe.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I563_No.exe") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("Is3youfault.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("no_one#knows.dll") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("1I563_Yes3.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I563_Yes3.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("final..txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("final132") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("_f4indsartal132.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("s.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("1example.dll") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("s1sdf3.asd") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("K.dll") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("MY16FILE3.exe") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("His12FILE94.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("_Y.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("?aREYA.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("/this_is_valid.dll") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_valid.wow") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_valid.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_valid.txtexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("#this2_i4s_5valid.ten") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("@this1_is6_valid.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("this_is_12valid.6exe4.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("all.exe.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I563_No.exe") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("Is3youfault.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("no_one#knows.dll") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("1I563_Yes3.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I563_Yes3.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("final..txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("final132") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("_f4indsartal132.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("s.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.py") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("my.docx") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abc123def.exe") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("1script.bat") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("validfile.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check(".exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("file.doc") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ffile.docile.doc") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.12123.txt3.xtxte") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exmy.docx") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("fle.doc") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1script.batt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalic1script.bate.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.123..exalice.123.tx.t") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("my.dcx") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exmy.docx.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("..ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abc123defexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.123.taxt.i.ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.12123.ex.txt3.xtxt.e") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("filc") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.123.i.ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".e.ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exal.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("123.ttxt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".efile.doc.ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1script.ba.exet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.123.i.1script.batex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123.ttxtc1script.bate.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.123.i.exalice.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.exali123.ttxtc1script.bate.123.txt.123.i.ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".efile.dex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.l12l3.i.exalice.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".efil.exal.123.txte.dex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("validftile.txt") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("1script.ba.eexert") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exmy.docx.efil.exal.123.txte.dex.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1script.ba.xet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123.ttxtc1script.bate.123.tx.efil.exal.123.txte.dext") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123.ttxtc1script.bate.123.tx.efil.exal.123.txte.defile.docxt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("FX") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.123.i.exalice..123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("file.dolc") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalict1script.bate.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("....ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("validfilve.txtFX") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123.ttxtc1script.bate.123.tx.efil.exal.123.txte.dex.exm1y.docxt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("....e.eexx") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("valfile.txit") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alicealice.exali123.ttxtc1script.bate.123.txt.123.i.ex.l12l3.i.exalice.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eex1script.ba.exet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.l12validfile.txtl3.i.exalice.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("...ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eeex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exmy.docx.FXexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123.ttxtc1sc..exript.bate.123.tx.efil.exal.123.txte.dext") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcheelrld.exe123defexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.l12validfile.txtlalice.exali123.ttxtc1script.bate.123.txt.123.i.ex3.i.exalice.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123.ttxtc1scriptt.bate.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.12121232d.efexexte") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.l12validfile.txtl3.i.exalice.123.txtal.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.l12validfile.txtl3.i.my.docx") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exmya.docx.efil.emy.docxxal.123.txte.dex.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123c.ttxtc1script.bate.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exali123alice.exali123.ttxtc1script.bate.123.txt.123.i.exc.ttxabc123defexetc1script.bate.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alice.l12validflile.txtl3.i.exalice.123.ttxt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1script.batt.exalic1script.bate.123.t") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".e.exali123.ttxtc1script.bate.123.tx.efil.exal.123.txte.dextfile.doc.ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.12123.txxtxte") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1script.bai.exet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exa.exalice.12123.txt3.xtxteli123.ttxtc1scriptt.bate.123.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ffile.d.efile.doc.exocile.doc") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("validfilalice.l12validflile.txtl3.i.exalice.123.ttxte.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".efil.exal.validftile.txt123.txte.dex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exalice.123.txt.exalice.123..exalice.123.tx.t") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exal.123my.docx.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".efile.dxoc.ex") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exmy.docx.FX1script.ba.exetexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".example") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyexists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("123.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_digits_or_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Qflg") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examQflgple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.x.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam123.exeple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_n_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.x.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.example") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_digits_or_dotsalreadyexists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyexists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.x.txtt.tx.to.I_have_no_digits_or_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Qalreadyexists.txzflg") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxI_have_no_de.exampleigits_or_do_tsatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampltherearemorethan3digits1234567890inthisnamae.exeeigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alralreadyexists.txzeadyexists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.exampleabctxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_digits_Qalreadyexists.txzflgor_dotsalreQflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxI_have_no_de.exampleigits_or_do_I_have_no_de.exampltherearemorethaen3digits1234567890inthisnamae.exeeigits_or_tstsatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("T") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.exam123.exeple23.exetxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.ctxxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exaampltherearemorethan3digits1234567890inthisnamae.exeeigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abct") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.to.234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_n_dos") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplI_have_n_dose.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("lQflg") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("123.I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_tsexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.to.23456123.exe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Q") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ee.example") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam123.exeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcd.x.txtt.tx.to.I_have_no_digits_or_dotsbct") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_dose.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplabcd.ctxxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exaem123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("CFP") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplctxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_dose.I_have_no_digits_Qalreadyexists.txzflgor_dotsalreQflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_teslg") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattempleigits_or_do_teslg") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.T") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_digits_or_dotsaltreadyexists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.Qalreadyexists.txzf1.exam123.exmpleigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exam123.exeple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.examplctxttaem123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam123.exepleeexample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoreI_have_n_dotsthan3digits1234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcd.xI_have_no_digits_or_dotsbct") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleeabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_teslg3.exeepleeabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("oI_have_no_digits_or_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_digits_Qalreadyexists.txzflgor_dotsalreQzflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_ists.example.txzee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("CF") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alralreadyexists.txzeadyexiI_have_n_dotssts.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQflgpleam123.exeple23.exeabctxatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.to.23456i7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleealralreadyexists.txzeadyexiI_have_n_dotssts.example.txzabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQflg3.exeeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eealreadI_hlave_ists.example.txzxample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplabcd.ctp.lQflg3.exeepleexxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemexample.Torethan3digits1.tx.to.23456i7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_dose.I_have_no_digits_Qalreadyexists.txzflgor_dotsalreQflgists.txnz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplleabctxtee.examplet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQflgpleam123.exepltherearemorethan3digits1.tx.to.23456i7890inthisname.exee23.exeabctxatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exmple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.exam123.exeple23.exetxett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam12.tx.to.xepl") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.123.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exmmple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctI_have_n_dotsxI_have_no_de.exampleigits_or_do_tsatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_dde.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.example.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_havex_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.exam1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesflgpleam123.exeple23.exeple.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("thaabcd.x.txtt.tx.to.I_have_no_digits_or_dotsbcterearemorethan3digits1234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits123456890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examplee.exampleabctxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alralreadyexists.txzeadyexiexample.sts.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.to.23456789r0inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exaem123.exeple23.exee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("atbcd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigitsalreadI_have_ists.example.txz_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlavtherearemorethan3digits123456890inthisnamep.3.exeepleeabcd.xt.txtt.tx.to..exee_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haabctxI_have_no_de.exampleigits_or_do_tsattve_no_digits_Qalreadyexists.txzflgor_dotsalreQzflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampleealreadI_hlave_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealrep.3.exeepleeabcd.xt.txtt.tx.to.adI_hlave_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exaem123.exeple2ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("mple.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NVPsZuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplabcd.ctp.lQflp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.g3.exeepleexxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alralreadyexists.txzeadyexistabctxI_have_no_de.exampleigits_or_do_tsatts.example.p.3.exeepleez") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.example.txI_have_no_de.exampleigits_or_do_tsvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplabcd.ctp.lQflp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txQalreadyexists.txzflgzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.g3.exeepleexxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Qflgexmple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.toabct.234alralreadyexists.txzeadyexiexample.sts.example.txz56123.exe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyeCFxists.example.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exa123.exeple23.exempleigits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQflgpl123.exeeam123.exepltherearemorethan3digits1.tx.to.23456i7890inthisname.exee23.exeabctxatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_digits_Qalreadyexixsts.txzflgor_dotsalreQflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_nao_de.Qalream123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digealreadI_hlave_ists.example.txzits1234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam123.e2xeple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.to.23456123.exe7890inthisnameabcd.ctxxttexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalrieadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have.tx.to._ists.ep.3.exeepleexample.txzee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam112.tx.to.xepl") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no__or_dotsaltreadyexistsexample..txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyexists.exampp.3.exeepleetxz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleeabcd.xto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethant3digits1.tx.to.234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoreethan3digits123456890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alralereadyexists.txzeadyexistabctxI_have_no_de.exampleigits_or_do_tsatts.example.p.3.exeepleez") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexp.lQflg3.exeepleeis1ts.txzf1.exam123.exeple23.exempleigits_or_dos") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_havex_no_de.exampleigits__or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.examplctxttaem123.exeple23xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exaem123..exeple2ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcQalreadyexists.ttxzflxgt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplleabctxtee.extherearemorethan3digits1.tx.to.23456i7890inthisname.exeamplet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eealreadI_hlave_iststxzxample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleealralreadyexists.txzeadyexiI_have_n_dotssts.example.txzabcde.exampleabctxtt.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_havab1.exam123.exeple23.exetxette_ists.example.txzee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.exoample.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesflgplea1.exaem123.exeple2eem123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".examplempmle.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examplee.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exemplehigitsalr_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.eI_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigitsalreadI_have_ists.example.txz_or_do_tsxeeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigitsexamplee._or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.to.234561eabcd.ctxxttexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("at") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.etherearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exexampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examxm123.exeple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.ethefrearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exexampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxdttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemrorethan3digits1.tx.to.234561eabcd.ctxxttexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exap.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to..T") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("atat") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexa.3.exeeplabcd.ctp.lQflg3.exeepleexxttle._have_n_dose.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.e123.exexeeplabcd.ctp.eexxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alQfllgtbcd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_ists.example.txe.examplez") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplleabctxtee.exthere.aremorethan3diabctxttname.exeamplet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.exampl") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.examplctxttaem123.etherearemorethan3digits1234567890inthisname.exexeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NVZuOMM.3.exeeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examexamxm123.exeple.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_havex_no_de.exampleigits__or_do_tsattexis1ts.txzf1.exam123.exeple23.exemplei1.exe.examplctxttaem123.exeple23.exegits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("oI__have_no_digits_or_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_dtigits_Qalreadyexists.txzflgor_dotsalreQzflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123example..exeple23.exempleigits_or_do_ts.3.exI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_teseeplabcd.ctxxttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.exa") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyyexists.exampp.3.exeepleetxz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.examlplexample._have_n_dose.I_have_no_digits_Qalreadyexists.txzflgor_dotsalreQflgists.txzexexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exaaTmpltherearemorethan3digits1234567890inthisnamae.exeeigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.eexample.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eaalreadI_hlave_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_atatn_dotsyexists.exoample.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exedple23.exempleigits_or_do_teslg3.exeepleeabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.exam123.exeple23.exeett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_iists.example.txzee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("bab") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoreI_have_n_dotsthan3digits1234567890inthisnamabctxI_have_no_de.exampleigits_or_do_I_have_no_de.exampltherearemorethaen3digits1234567890inthisnamae.exeeigits_or_tstsatte") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_hQave_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzfe1.I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxttpexam123.exeple23.exempleigits_ores") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".examalreadI_have_n_dotsyexists.example.txz123.e2xeple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alrea.exam123.e2xeples.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_d.3.exeeplabcd.ctp.lQflp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeplQe23.exempleigits_or_do_txtt.tx.to.g3.exeepleexxtto_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesflgplea1.exaem123.exeple2eem123.exI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_teseple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.x.txtt.txe.to.I_have_no_digits_or_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcd.x.txtt.tx.to.I_alreadyyexists.exampp.3.exeepleetxzhav_doct") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_mno_de.Qalreab1.exam123.exeple23.exetxttadyexists.txzf1.exam123.exeple23.exemplehigitsalr_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exxaem") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplcttxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exxaem123.exeple2ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("there.aremorethan3digits1.tx.to.234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haveI_n_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NPsZuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eaalreadI_hlave_ists.examtherearemorethan3digits1.tx.to.234567890inthisname.exeple.txI_have_mno_de.Qalreab1.exam123.exeple23.exetxttadyexists.txzf1.exam123.exeple23.exemplehigitsalr_do_tsz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexistsalralreadyexists.txzeadyexiI_have_n_dotssts.example.txzm.txzf1.exam123.exeple23.exempleigitthaabcd.x.txtt.tx.to.I_have_no_digits_or_dotsbcterearemorethan3digits1234567890inthisname.exes_or_do_ts.3.exeeplabcd.ctxxdttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.toabct.2abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exettexample.txz56123.exe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_hQave_no_de.Qalreadyexists.ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctaxatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.Qdo_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("there.aremorethan3digitms1.tx.to.234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have.tx.to._ists.ep.3.exeepleexample.txzeebab") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplmeabctxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.example.txI_have_no_de.exampleigits_.exam112.tx.to.xeplor_do_tsvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haabctxI_have_no_de.exampleigzflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haxempleigits_or_dxo_ts.3.exeeplabcd.ctxxttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haxempleigits_or_dxo_ts.3.exeeplabcd.ctxxtabttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exaem123..exepealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.eexample.txzttexies1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txzle2ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exaQmple.T") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalrenadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.x.txtt.txe.to.I_have_no_digits_aobr_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_nao_de.Qalream123ts_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_dtigits_Qalreadyexists.txzflgor_dotasalreQzflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haxempleigits_or_dxo_ts.3.exeeplabcd.cexamlplI_have_n_dose.txxttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemor") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NVPsZM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzfe1.I_have_no_de.QalreadyexistsI_have_no_de.QalreadyabctxI_havex_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxttpexam123.exeple23.exempleigits_ores") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haabctxI_have_no_de.exampleigzflgiaabcd.x.txtt.tx.to.I_have_no_digits_or_dotsbctsts.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eam") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txztteabctI_have_n_dotsxI_have_noleigits_or_do_txtt.tx.to.123.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_dae.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alralreadyexists.txzeadyexistabctxI_have_no_de.example_tsatts.example.p.3.exeepleez") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.exam1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesflgpleam123.exeple23.exeple.txvzb") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_havab1.exam123Qalreadyexists.txzflg.exeple23.exetxette_ists.example.txzee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.to.9r0inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("F") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exampleec.exampleabctxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits1.tx.toabct.2abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exettexample.txz56123.exe7890insthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplcttxtet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have.tx.to._ists.ep.3.exeepleeI_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxdttdo_tsxample.txzee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("cd.x.NVPsZMtxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_have_no_de.examipleigits_or_do_tsattexp.lQflg3.exeepleeis1ts.txzf1.exam123.exeple23.exempleigits_or_dos") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exdam123.exedple23.exempleigits_or_do_teslg3.exeepleeabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("oI_have_no_digits_o") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyexists.exa1.exe.examplctxttaem123.exeple23xemple.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyI_have_no_de.exaaTmpltherearemorethan3digits1234567890inthisnamae.exeeigits_or_do_tseCFxists.example.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_dtigits_Qalreadyexists.txztxz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemor1.exe.examplctxttaem123.exeple23xeethan3digits1.tx.to.23456123.exe7890inthisnameabcd.ctxxttexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eealreadI_hlave_istI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exa123.exeple23.exempleigits_or_do_tess.example.txzxample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQflgpleealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.etherearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exexampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txzam123.exple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI.eameple23.exempleigits_or_do_txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("oI__have_no_digits_or_dotrs") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctabcd.x.txtt.txe.to.I_have_no_digits_or_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyextists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_dose.I_hp.3.exeepleeabcd.xto.salreQflgists.txnz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_mno_de.Qalreab1.exam123.exeplem23.exetxttadyexists.txzf1.exam123.exeple23.exemplehigitsalr_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemexample.T.to.23456i7890inthisname.e") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".31.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23.exe.e123.exexeeplabcd.ctp.eexxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_dotsyeCFxists.nexample.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexiNVZuOMM.3.exeeplees1ts.txzf1.exam123.exedple23.exempleigits_or_do_teslg3.exeepleeabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam12its_or_do_teslg") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealhreadI_hlave_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoreI_have_n_dotabcQalreadyexists.ttxzflxgtsthan3digits1234567890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.examplctxttaem3123.exeple23xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemor1.exe.examplctxttaem123.exeple23xeethan3digits1.tx.to.23456123.exe7890inthisnameabcd.ctxxttI_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigitsalreadI_have_ists.example.txz_or_do_tse") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_I_have_no_digits_or_dotsaltreadyexists.txzdose.I_have_no_digits_Qalreadyexists.txzflgor_dotsalreQflgists.txnz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemor1.exe.examplctxttaem123x.exeple23xeethan3digits1.tx.to.23456123.exe7890inthisnameabcd.ctxxttexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NPsZ1.exexamQI_have_nao_de.Qalream123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23.exeuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exam1ple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleealralreadyexists.txzeadyexiI_have_n_dottssts.example.txzabcde.exampleabctxtt.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_dtigits_Qalreadyexists.txzflgor_dotsalreQzflgistI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exa123.exeple23.exempleigits_or_do_tess.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23e.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ep.3.exeepleealralreadyexists.txzeadyexiI_have_n_dotssts.example.txzabcde.exampleabctxtt.xt.txtt.tx.to.am") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleirtdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam112.tx.toI_have_no_digits_oepl") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Otherearemor1.exe.examplctxttaem123.exeple23xeethan3digits1.tx.to.23456123.exe7890inthisnameabcd.ctxxettI_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigitsalreadI_have_ists.example.txz_or_do_tseKI") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigitsalreadI_have_istss.example.txz_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexistsalralreadyexists.txzeadyexiI_have_n_dotssts.example.txzm.txzf1.exam123.exeple23.exempleigitthaabcd.x.txtt.tx.to.I_have_no_digits_or_dotsbcterearemorethan3digits1234567890inthisalralreadyexists.txzeadyexistabctxI_have_no_de.exampleigits_or_do_tsatts.example.p.3.exeepleezname.exes_or_do_ts.3.exeeplabcd.ctxxdttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("tI_hQave_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_tsherearemorethan3digits1.tx.to.23456123.exe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_dose.I_have_no_digits_Qalreadyexists.txzflgor_dotsalrexamplee.exampleabctxtteQflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exaexamplee.exampleabctxttmlplI_have_n_dose.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_d.3.exeeplabcd.ctp.lQflp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeplQe2e3.exempleigits_or_do_txtt.tx.to.g3.exeepleexxtto_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple.23e.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examI_hQave_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_tslplI_have_n_dose.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_I_have_no_digits_or_dotsaltreadyexists.txzdose.I_have_no_digitsi_Qalreadyexists.txzflgor_dotsalreQflgists.txnz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aalreadI_have_n_dotsyexists.exa1.exe.examplctxttaem123.exeple23xemple.txvzbcd.ctxxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("gudadVYH") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemor1.exe.examplctxttaem123x.ep.3.exeepleealralreadyexists.txzeadyexiI_have_n_dotssts.example.txzabcd.xt.txtt.tx.to.xeple23xeethan3digits1.tx.to.23456123.exe7890inthisnameabcd.ctxxttexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_t_xtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_nao_de.Qalream1alreadI_have_atatn_dotsyexists.exoample.txvz23ts_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abI_haveI_n_dots1.elxam123.exeple23.exetxett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.examplpe23.exeett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exp.lQQfI.eameple23.exempleigits_or_do_txtt.tx.to.amplee.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.ct567890inthisname.exett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NOVPsZuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_deealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.ethefrearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exexampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("CCF") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exam123.etherearemoreethan3digits123456890inthisname.exexeple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_hQave_n_de.Qalreadyexistse.ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alralreadyexists.txzeadyexiexample.ss.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoreI_have_n_dotsthan3digits1234567890inthisname.exealreadI_have_n_dotsyexists.example.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eexaQmple.T") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleealralreadyexists.txzeadyerxiI_have_n_dotssts.example.txzabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_atatn_dotsyexists.exmple.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcdI.x.txtt.txe.to.I_have_no_digits_or_dots") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampleealreadI_hlave_ists.example.examplempmle..txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_atathave_no_de.examipleigits_or_do_tsattexp.lQflg3.exeepleeis1ts.txzf1.exam123.exeple23.exempleigits_or_dos") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.exampltleabctxtee.examplet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.exam123.exeplep.3.exeepleealralreadyexists.txzeadyexiI_have_n_dotssts.example.txzabcd.xt.txtt.tx.to.23.exeett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits123456890inththere.aremorethan3digitms1.tx.to.234567890inthisname.exeisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplabcd.ctp.lQflg3.exeepleexxttp.3.exeeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.Qalreadyexists.ttherearemorethan3digits1234567890inthisname.exexzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("tI_hQave_no_de.Qalreadyexists.txzf1.e.examplctxttexam123.exeple23.exempleigits_or_do_tsherearemorethan3digits1.tx.to.23456123.exe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haeve_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam1233.exempleigits_or_do_tesflgpleam123.exeple23e.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplabcd.ctp.lQflg3.exeeplee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examQflgpltherearemorethan3digits1.tx.to.23456i7890inthisname.exee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.exI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesamplctxttaem123.exeple23xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eealrxeadI_have_n_dotsyeCFxists.nexample.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreaadI_have_n_dotsyexists.exoample.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haabctxI_have_no_de.exampleigits_or_do_tsattve_no_digits_alreadyexists.txzflgor_dotsalreQzflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.exam123.exeple23.exetxettherearemorethant3digits1.tx.to.234567890inthisname.exet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haxempleigits_or_dxo_alreadI_have.tx.to._ists.ep.3.exeepleeI_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxdttdo_tsxample.txzeets.3.exeeplabcd.ctxxttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.exI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempNVZuOMM.3.exeepleeleigits_or_do_tesamplctxttaem123.exeple23xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("thaabcd.x.txtt.tx.to.I_have_no_digits_or_dotsbcterearemorethan.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_nalreaadI_have_n_dotsyexists.exoample.txvzos") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyyexists.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("there.aremorethan3digitms1.tx.to.234567890ointhisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eealreadI_hlave_eistse.exaImpale.txzxample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("gudadVtherearemexample.T.to.23456i7890inthisname.eH") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exaem2123.exeple2ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alrea_have_n_dotsyeCFxists.example.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_hQave_no_de.Qalreadyexists.txzf1.exam123.exeple23.ex.empleigits_or_do_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ba.exampleealreadI_hlave_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam123.e2xepl1xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("tI_hQave_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_tsherearemorethan3digits1.tx.to.23456123..exe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleealralreadyexists.txzeadyerxiI_have_n_dotssts.example.txxzabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exaem2123.exeple1.exexamQI_have_no_de.Qalreadyexis1ts.tpxzf1.exam1233.exempleigits_or_do_tesflgpleam123.exeple23e.exe2ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_t_xtt.tx.toalralreadyexists.txzeadyexistabctxI_have_no_de.exampleigits_or_do_tsatts.example.p.3.exeepleez.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digi9ts1.tx.to.9r0inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.QalreadyabctxI_have_no_de.example1.exe.examplctxttaem123.exeple23xeigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tes") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_atatn_therearemoreI_have_n_dotsthan3digits1234567890intdhisnamabctxI_have_no_de.exampleigits_or_do_I_have_no_examplee.de.exampltherearemorethaen3digits1234567890inthisnamae.exeeigits_or_tstsattedotsyexists.exmple.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exmmleealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.etherearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exexampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.atxz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_haxempleigits_or_dxo_ts.3.exeeplabcdc.ctxxtabttdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalrenadyexis1ts.txzf1.exam123.exeple23.exempleigitstherearemorethan3digits1.tx.toabct.2abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exettexample.txz56123.exe7890inthisname.exe_or_do_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoexamlplexample._have_n_dose.I_have_no_digits_Qalreadyexists.txzflgor_dotsalreQflgists.txnzrethan3digits1.tx.toabct.2abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exettexample.txz56123.exe7isname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxI_have_no_de.extherearemorethan3digits1.tx.toabct.2abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exettexample.txz56123.exe7890insthisname.exeampleigits_or_do_tsatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ex1ple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_ahave_no_digits_Qalreadyexixsts.txzflgor_dotsalreQflgists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.xQalreadyabctxI_have_no_de.etherearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exexampleigits_or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcd.xI_have_noNVZuOMM.3.exeeplee_digits_or_dotsbct") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQflgpleam123p.exeple23.exeabctxatt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxat1.exexamQI_have_no_de.Qalrenadyexis1ts.txzf1.exam123.exeple23.exempleigitstherearemorethan3digits1.tx.toabct.2abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exettexample.txz56123.exe7890inthisname.exe_or_do_tesflgpleam123.exeple23.exet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_e.examplctxttalreadyexistse.ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplleabctxtebe.examlet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexiNVZuOMM.3.exeeplees1lts.txzf1.exam123.exedple23.exempleigits_or_do_teslg3.exeepleeabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplleabctxtee.exthere.aremorexamlplexample._have_n_I_have_no_digits_or_dotsaltreadyexists.txzdose.I_have_no_digitsi_Qalreadyexists.txzflgor_dotsalreQflgists.txnzethan3diabctxttname.exeamplet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.3.exeepleeabcd.xt.txtt.txp.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_hQave_n_de.yexeistse.tsexett") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NZPsZ1.exexamQI_have_nao_de.Qalream123.exeplee23.exempleigits_or_do_tesflgpleam123.exeple23.exeuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exctp.lQflg3.exeepleexxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aldyexists.txzeadyexiI_have_tn_dotssts.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.examp.3.exeeplabcd.ctp.lQflp.lQQfI_eadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.g3.exeepleeeaem123.exeple23xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NPsZ1.exexamQI_have_nao_de.Qalream123.exeplee23.exempleigiQts_or_do_te3.exeuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_atatn_.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abat") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("tI_hQave_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_tsherearemorethan3digits1.xe7890inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampleealreadtherearemorethan3digits1234567890inthisname.exeI_hlave_ists.example.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NOVPsI_haabctxI_have_no_de.exampleigits_or_do_tsattve_no_digits_alreadyexists.txzflgor_dotsalreQzflgists.txzZuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ee.exam.example") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigitsexamplee._or_do_tsaalreadyexists.I_have_mno_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_tsexample.txzttexis1ts.txzf1.exam123.exeple23.exz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.exam123.exeple23.exetxettherabearemorethant3digits1.tx.to.234567890inthisname.exet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.exI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempNVZuOMM.3.exeepleeleigits_or_do_tI_have_no_de.QalreadyabctxI_atathave_no_de.examipleigits_or_do_tsattexp.lQflg3.exeepleeis1ts.txzf1.exam123.exeple23.exempleigits_or_dosesamplctxttaem123.exeple23xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examI_hQave_no_de.Qalreadyexists.txzgits_or_do_tslplI_have_n_dose.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ealreadI_hlave_ists.exp.lQQfI_have_no_de.xQalreadyabctxI_have_no_de.etherearemorethan3digits1.tx.toabct.23456123.exe7890inthisname.exexampleigits_or_do_tsaalreadyexists.example.txzttexI_haxempleigits_or_dxo_alreadI_have.tx.to._ists.ep.3.exeepleeI_have_no_de.exampleigits_or_I_have_no_de.Qalreadyexists.txzf1.exam123.exeple23.exempleigits_or_do_ts.3.exeeplabcd.ctxxdttdo_tsxample.txzeets.3.exeeplabcd.ctxxttdo_tsis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.ample.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exampexampleec.exampleabctxttle.T") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyyexists.aexampp.3.exeepleetxz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.examp.3.exeeplabcd.ctp.lQflp.lQQfI_eadyexists.example.txzttherearemorethan3digits1234567890inthisname.exetexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_txtt.tx.to.g3.exeepleeeaem123.exeple23xe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txztteabctI_have_n_dotsxI_have_noleigits_or_do_123.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits123456890inththere.aremorethan3digitms1.tx.to.r234567890inthisname.exeisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("I_have_no_de.exampleigits_or_I_have_no_de.QalreadyeI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tests.txzf1.exam123.exeple23.exempleirtdo_ts") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exe.exI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexis1ts.txzf1.exam123.exeple23.exempleigits_or_do_tesamplctxttaem123.exeple23alreadI_have.tx.to._ists.ep.3.exeepleexample.txzeee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examlplexample._have_n_I_have_no_digits_or_dotsaltresadyexistseQflgists.txnz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxxtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQflegpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("oI_have_I_have_no_de.exampltherearemorethan3digits1234567890inthisnamae.exeeigits_or_do_tsno_digits_o") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ab1.exampt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abctxat1.exexamQI_have_no_de.Qalrenadyexis1ts.txzf1.exam123.exepl.e23.exempleigitstherearemorethan3digits1.tx.toabct.2abcd.ctxxtherearemorethan3digits1.tx.to.234567890inthisname.exettexample.txz56123.exe7890inthisname.exe_or_do_tesflgpleam123.exeple23.exet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("NO_VPsI_haabctxI_have_no_de.exampleigits_or_do_tsattve_no_digits_alreadyexists.txzflgor_dotsalreQzflgists.txzZuOM") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".alreadI_have_n_dotsyexists.example.txI_have_no_de.exampleigits_or_do_tsvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam112e.tx.to.xepl") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadyyexisealreadI_hlave_ists.exp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigitsexamplee._or_do_tsaalreadyexists.example.txzttexis1ts.txzf1.exam123.exeple23.exzts.aexampp.3.exeepleetxz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeep") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".3.exeeplabcd.ctp.lQflg3.exeepleexxtalreadI_have_n_dotsyexists.example.txI_have_no_de.exampleigits_.exam112.tx.to.xeplor_do_tsvzt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("altherearemoreI_have_n_dotabcQalreadyexists.ttxzflxgtsthan3digits1234567890inthisname.exereadyexists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("p.lQQfI_havI_have_no_de.QalreadyabctxI_have_no_de.examipleigits_or_do_tsattexp.lQflg3.exeepleeis1ts.txzf1.exam123.exeple23.exempleigits_or_dose_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsattexiNVZuOMM.3.exeeplees1lts.txzf1.exam123.exedple23.exempleigits_or_do_teslg3.exeepleeabcd.xt.txtt.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("1.exexamQI_have_no_de.Qalreadyexis1ts.txzf1.exam123.exeplee23.exempleigits_or_d.3.exeeplabcd.ctp.lQflp.lQQfI_have_no_de.QalreadyabctxI_have_no_de.exampleigits_or_do_tsaalreadyexists.example.txztgudadVYHtexis1ts.txzf1.exam123.exeplQe23.exempleigits_or_do_txtt.tx.to.g3.exeepleexxtto_tesflgpleam123.exeple23.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_n_hdotsyexists.example.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.examplleabctxtee.eextherearemorethan3digits1.tx.to.23456i7890inthisname.exeamplet") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemor1.exe.examplctxttaem123x.exeple23xeethan3digits1.tx.to.23456123.exe7890inthisnameabe.examplexxttexe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("a23.e2xeples.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exam12.3.exeple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("FWYVZodEW") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemexample.Torethan3digits1.tx.to.e23456i789inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreadI_have_atatn_therearemoreI_have_n_dotsthan3digits12345r67890intdhisnamabctxI_have_no_de.exampleigits_or_do_I_have_no_examplee.de.exampltherearemorethaen3digits1234567890inthisnamae.exeeigits_or_tstsattedotsyexists.exmple.txvz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("..txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exam_ple.com") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.xlsx") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("invalid_name") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.1234.txt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.TXt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("example.txt.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exetxt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcalreadyexisttxzd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".t.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".t.123.exeo.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aebcalreadyexisttxzd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("labcalreadyexisttxzd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exameple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampo.tx.to.le") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".t.t.123.exeo..to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exxaample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eemxample.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx..to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...t.t.123.exeo..to.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exxaamplabcalreadyexisttxzd.txttle") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx.to.example") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttherearemorethan3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttherearemorethan3digits123456789.example0inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttxzd.txttbced.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.to.exampple.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...t.t.123example..exeo..to.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampmle") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abo.tx...t.t.123.exeo..to.to.cd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...t.t.123example..exeo..taebcalreadyexisttxzd.txtto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx.tto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttherearemeorethan3digits1234567890inthisname.exe.hx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.t.to.example") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("12.exxaamplabcalreadyexisttxzd.txttle3.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Hle") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits12345i67890inthisnhame.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("CDLe.t.t.123.exeo..to.Q") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoHlerethan3digits12o.tx...t.t.123example..exeo..taebcalreadyexisttxzd.txtto.345i67890inthisnhame.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..to.xxa.ttherearemorethan3digits1234567890inthisname.exe.x.to.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("CDLe.t.t.123.exeo..toQ") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3digits1234567890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("QVam") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..tlabcalreadyexisttxzd.txtto.xxa.ttherearemorethan3digits1234567890inthisname.exe.x.to.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..tlabcalreadyexisttxzd.txtto.xxa.ttherearemoorethan3digits1234567890inthisnam.ttherearemeorethan3digits1234567890inthisname.exe.hx.to.e.exe.x.to.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eemxaeemple.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Hleo.tx.tto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxztd.toxttbcd.txtt.ttherearemorethan3digits1234567890inthisname.e.xe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aebcaclreadyexisttxzd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".t.t.123.e.xeo..to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("QV.exxaamplabcalreadyexisttxzd.txttleam") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("QQVam") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisna1me.exe7.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ulUJxJw") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".lexxaample.exampmle") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttxzd.txttbced.txtt.ttherearemorethan3digits1234567890inthisnax.to.exampple.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("lHHl") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("HlHe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...t.t.123example..exeo..to.teo.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ulUJxJwo.tx..to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttxzd.txttbcd.txtt3.ttherearemorethHlean3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...t.t.123examptle..exeo..to.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3drigits1234567890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".tt.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("..ttx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Hleo.txt.tto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampml") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("MmaD") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("OkzLhkzAu") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("HlCDLe.t.t.123.exeo..to.eQ") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoHlerethan3digits12o.tx...t.t.123example...exxaampleexeo..taebcalreadyexisttxzd.txtto.345i67890inthisnhame.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemorae.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".tt.t.eo.tx..tlabcalreadyexisttxzd.txtto.xxa.ttherearemorethan3digits1234567890inthisname.exe.x.to.ampleo.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digits12345690inthisname.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemorethan3digitas1234567890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..to.xxa.ttherearemorethan3digits12364567890inthisname.exe.x.to.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("CDLe.t.t.123.exeaabcalreadyexisttxzd.txttbced.txtt.ttherearemorethan3digits1234567890inthisnax.to.exampple.o..to.Q") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalrneadyexisttxzd.txttbcd.txtt3.ttherearemorethHlean3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alr.t.t.o.tx.tto..t.x.to.ee") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisname.edxe.x.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.txtt.ttherearemorettthan3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisn.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttherearemeorethan3digits1234567890inthisname.e.xe.hx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.t.to.eple") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttxzd.txttbcd.txtt.ttherearemHlHeorethan3digits1234567890inthisn.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxztd.toxttbcd.txtt.ttherearemorethan3digitcs1234567890inthisname.e.xe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampleeaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3drigits1234567890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("Yo.t.to.exampleUG") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreaebcttherearemorethan3digits1234567890inthisname.edxe.x.xampletxttplet.edyexisdttxzd.txttadyexists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...t.t.123.exe.t.x.to...to.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttherearemeorethan3digits1234567890inthisame.e.xe.hx.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcalreadyexisttHleo.tx.tto.xzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisn.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx.to.examp") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3drigits1234567890inthisname.exe.xo.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits123abcd.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.to.67890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("exaample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("oYo.t.to.exampleU") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...txisttxzd.txtt.to.to...to.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.txtt.ttherearemorettthan3digits1234567890inthisname.exe..exampmleo.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("djCJo.eo.tx..tlabcalreadyexisttxzd.txtto.xxa.ttherearemoorethan3digits1234567890inthisnam.ttherearemeorethan3digits1234567890inthisname.exe.hx.to.e.exe.x.to.amplesWi") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("CDLe.t.t.123.exeaabcalreadyexisttxzd.txttbced.txtt.ttherearemorethan3digitsn1234567890inthisnax.to.exampple.o..to.Q") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttherearemorethan3digits1234567890inthisnam.eo.tx..to.xxa.ttherearemorethan3digits12364567890inthisname.exe.x.to.amplee.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("abcd.txtt.t.eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3drigits1234567890inthisname.exe.xo.xampletherearemorethan3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoHlerethan3digits12to.tx...t.t.123example...exxaampleexeo..taebcalreadyexisttxzd.txtto.345i67890inthisnhame.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("examplabo.tx...t.t.123.exeo..to.to.cd.t") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttt.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampleeaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3drigits12345678o.tx...t.t.123example..exeo..taebcalreadyexisttxzd.txtto.90inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..to.xxa.ttherearem3orethan3digits1234567890inthisname.exe.x.to.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttt.talr.t.t.o.tx.tto.o.eeo.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttt.talr.t.t.o.tx.tto.o.e") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemoHlerethan3digits12to.tx...t.t.123example...exxaampleexeo..taebcal.eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemorethan3digitas1234567890inthisname.exe.x.to.xamplereadyexisttxzd.txtto.345i67890inthisnhame.exe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ulUJxJwo.tx..toYo.t.to.exampleUG.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("RKYe") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemorethan3digitas1234567890inthisname.exe.x.to.xampleo.tx.tto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".exampleeaabcalreadyexistthan3drigits12345678o.tx...t.t.123example..exeo..taebcalreadyexisttxzd.txtto.90inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("e.t.t.123.exeo..to.Q") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("eemxaeemmple.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreaebcttherearemorethan3digits12345678xampletxttplet.edyexisdttxzd.txttadyexists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("QfZGFbPFj") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...txisttxzd.txtt.to.eto...to.to..txttple.e.e.xeo..to.to.cd.txtt") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("bKdJbDq") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("lHaabcalreadyexisttxzd.txttbced.txtt.ttherearemorethan3digits1234567890inthisnax.to.exampple.l") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..to.xxa.tthereCDLe.t.t.123.exeo..toQarem3orethan3digits1234567890inthisname.exe.x.to.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("fAefFQan.ttherearemorethan3digits1234567890inthisname.exe.x.to.ZV") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..to.xxa.ttherearem3orethan3digits1234567890inthisname.exe.x.taabcalrneadyexisttxzd.txttbcd.txtt3.ttherearemorethHlean3digits1234567890inthisname.exe.x.to.o.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.ttx.tto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eo.tx..to.xxa.ttherearemoretha3digits12364567890inthisname.exe.x.tao.ample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ulUJxJwo.tx..toYo.t.to.empl.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.tx...t.t.123examptle..exeo..to.oto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("ulUJxJwo.tux..to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabc.alreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3digits1234567890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("therearemorethan3digit.exe") == "Yes")){ tests_passed++; } total_tests++;

    if((file_name_check("CDLe.Lt.t.123.exeo..to.Q") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreaebcttherearemorethan3digits1234567890inthisname.edxe.x.xampletxttplet.edyexisdttxzd.eaabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisname.edxe.x.xample.txttadyexists.txz") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("fAefFQan.ttoherearemorethan3digi.ZV") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.txttbcd.txtt.tth12.exxaamplabcalreadyexisttxzd.txttle3.exeerearemorethan3digits123abcd.txtt.ttherearemorethan3digits1234567890inthisname.exe.x.to.67890inthisname.exe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".ttt.to") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("o.ttxt.tto.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexistttxztd.toxttbcd.txtt.ttherearemorethan3digits1234567890inthisname.e.xe.x.to.xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("C") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("LyPW") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("aabcabcd.txttalrneadyexisttxzd.txttbcd.txtt3.ttherearemorethHlean3digits1234567890inthisname.exe.x.to.") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check(".eaabcalreadyexisttxzd.toxttbcd.txtt.ttherearemoraethan3digits1234567890xample") == "No")){ tests_passed++; } total_tests++;

    if((file_name_check("alreaebcalrxamabcd..eaabcalreadyexisttxzd.txttbcd.txtt.ttherearemorethan3digits1234567890inthisname.edxe.x.xampletxttplet.edyexisdttxzd.txttadyexists.txz") == "No")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


