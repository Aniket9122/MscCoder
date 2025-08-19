#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;

int count_distinct_characters(const string& str) { 
    set<char> distinct_chars;
    
    for (auto c : str) {
        // Convert to lowercase using the standard library function tolower.
        distinct_chars.insert(tolower(c));
    }
    
    return distinct_chars.size();
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

    if((count_distinct_characters("") == 0)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("abcde") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("abcdecadeCADE") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaaaAAAAaaaa") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Jerry jERRY JeRRRY") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("") == 0)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("abcde") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("abcdecadeCADE") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaaaAAAAaaaa") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("AbCdEfG") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("banana") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234567890") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("hello123") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("THISISALONGSTRINGWITHNOSPACES") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaaabbbbccccddddeeeeffffgggghhhhiiii") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("AaBbCcDdEeFfGgHhIi") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("hellold") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("AbCdE") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("THISISALONGSTSRINGWITHNOSPPACES") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("AEbCdE") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("CdE") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("helllold") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("THISISALONNGSTRINGWITHNOSPACES") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("123456789aaaabbbbccccddddeeeeffffgggghhhhiiii0") == 19)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("123456078980") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("THISISALONGSTSRIGWITHNOSPPACES") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ACbCdEfG") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaaabbbbccccddddeeeeffffggggAbCdEfGhhhhiiii") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaaabbbbccccddddeeeeffffggCdEgghhhhiiii") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("THISISALONNGSTRINIGWITHNOSPACES") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("BKktjaBaaaabbbbccccddddeeeeffffgggghhhhiiiiKkh") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("CTHISISALONGSTSRIGWITHNOSPPACESdE") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("CTHISISALONGSTSRIGWITHNOSPPAdE") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("BKktjaBaaaabbbbccccddddeeeeffffAaBbCcDdEeFfGgHhIigggghhhhiiiiKkh") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("THISISALONNGSTRINGITHNOSPACES") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pneumonoultramicroscopicsilicovolcanoconiosis") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234$%?!@") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("22") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distinct.") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"h\",") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("am") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("222") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("complex") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("such") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("return") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"n\".") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeating") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.lowercase") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repcombinedeating") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("vD22ZtLSjt") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeaing") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ureturn") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repcombinedeaticontainsng") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"i\".") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repting") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("of") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aam") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("26of") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fsox.Thenlowercase") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1234$%?!@wn") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("treated") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"i\"i.") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("vD22ZtLsenatencedistinTheSjt") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("quick") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lazy") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("a") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"e\",") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("commplex") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s\",") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplexplex") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("reepeating") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"e\"e,") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dogex222") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanoth\"i\".explex") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lletters,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro1234$%?!@wn") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("laazy") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lots") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distinct") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repting222") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("as") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characters,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ofis") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characterrs,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("commpplex") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("re\"h\",pting222") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanotx") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro123$4$%?@!@wn") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("123?4$\"e\",%?!@") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("quic") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uch") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("commbrownpplex") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uuch") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1234$%?!@@wn") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtwombrownpplex") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("222distinct") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro1234$%?!123?4$\"e\",%?!@@wn") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dWesgo") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uppercase") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dogex") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("x") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pting") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("colex") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("combined") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("edog.fox.lowerdogcase26of") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("all") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dogegx") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplcommplexanotx") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uchh") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtworownpplex") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanoth\"i\"explex") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chasentenceracters") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"t\",") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtwo1234$%?!@mbrownpplex") == 21)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ofpneumonoultramicroscopicsilicovolcanoconiosis") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chsalowercaseracters,") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sentence") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\",") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("llettuppercaseers,") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("re\"h\",pting2\"22") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fo\"e\"e,x") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rQXXxau") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bruown") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcompmlcommplexanotx") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro1n234$%?!!@wn") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("charas,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("26oof") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplexplexting") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characterrcs,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtwo1234$%?!@mbrownre\"h\",pting222pplex") == 26)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characters.") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovcomtwo1234$%?!@mbrownre\"h\",pting222pplexebro1234$%?!@@@wn") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uquic") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("disitinct") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"I") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("22re\"h\",pting2222") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("combinedand") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplcexplexting") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"i\"i1234567890.") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("combineThedand") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dogo.") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lowercase") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ubro1234$%?!123?4$\"e\",%?!@@wnuch") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("quiqc") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeainbeg") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("and") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uppercasee") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thisall") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aall") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("do2gex222") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ofpunctuation!\"") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distinct.!@wnting") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thisallchasentenceracters") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("vAhhv") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ubro1234$%?!123commpplex?4$\"e\",%?!bro1234$%?!123?4$\"e\",%?!@@wn@@wnuch") == 24)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("amm") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("qCrF") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("brruown") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("This") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thith") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iubro1234$%?!123commpplex?4$\"e\",%?!bro1234$%?!123?4$\"e\",%?!@@wn@@wnuch") == 25)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ubro1234$%?!123commpplex?4$\"e\",%?!bro123@wn@@wnuch") == 24)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("brrun") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ZaojBy") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chsalowercaseracters") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeeainbeg") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characterrcsr,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("222distidnsct") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplcexple\"i\"i.xting") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("2t") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("combineThecomtworownpplex") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chaxsentenceracters") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("brno1234$%?!@wn") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("is") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("said") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jumptreateds") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pion!\"") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("iss") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtworowncomcompmlcommplexanotxlex") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.exanotx") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"h\"vD22ZtLsenatencedistinTheSjt,") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplcommplexanotxofis") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("26o") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pirepeainbegon!\"") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"IdogegThis") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ddogex222") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("JdmjOJcRx") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s\"\",") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeabroshould1234$%?This") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chasentenceeracters") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ofpunbrrunctuuation!\"") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("2tt") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("combibned") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("kEjzTF") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("22re\"hsenh\",pting2222") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aallsescomcharacterrs,plexhouldntenlazycters.") == 19)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suchcomcomplcexplexting\".") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uppercae") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcompl1234567890explex") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro1234$%?z?!@wn") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeabroThis") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("cdWesgosuch") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jumps") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("@mbrownpplex") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iubro1234$%?!123commpplex?w4$\"e\",%?!bro1234$%?!123?4$\"e\",%?!@@wn@@wnuch") == 25)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ammchasentenceracters") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"comcomplexplexi\".") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characterrss,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("containins") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rQXXQxau") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("26anoth\"i\".mmplexanotxf") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jumpps") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.lowercasThith") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fsox.Thennlowercase") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("tureturn") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thitcharacters,h") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("laaazy") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"i\"i.fox") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comccharacterrcs,omplcexple\"i\"i.xting") == 18)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("cmplex") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ereepeating") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ng\".") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repea") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeabro1234$%?This") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("cormtworownppubro1234$%?!123commpplex?4$\"e\",%?!bro123@wn@@wnuchlex") == 25)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("OTAcPh") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro1234$%?!123?4$\"e\"i\"i1234567890.\",%?!@@wn") == 25)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dog") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("camharacterrcs,") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jumpsdWesgo") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234567890ct.ith") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(".\"i\"..") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chsaloweraamcaseracters,") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iubro1234$%?!123commpplex?4$\"e\",%?!bro1234$%?!123?4$bro1234$%?Thisn@@wnuch") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtworownpplereepeatingex") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lSJrRmZld") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characters") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aallsescomcharacter,rs,plexhouldntenlazycters.") == 19)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("osuchcomcomplcexplexting\".vebro1234$%?!@@wn") == 29)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characterrcstreated,") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("123456789") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("foxh.") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("gureptingquic") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chraracterrss,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("iissss") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaam") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thitchareacters,h") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("iis") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234567890ct.") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1234$%?!@@!wn") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dog.lazy") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comabineThedlowercaseand") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distinct.!@wn") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thitcharactersh,h") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ddoge22") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("anoth\"i\".") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("JdmjOJcRdx") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanoth\"i\".aexplex") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sentence\"h\",") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("er@mbrownpplexeepeating") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("iidog.lazyssss") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplelxplexting") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("r\"ee\",eepeating") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtmbrownpplex") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characcterrcs,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distincnt.") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanoth\"i\".expex") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("cowmtworownpplex") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovy") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dcharaccterrcs,o2gex222") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fsox.Thenlowercasxe") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcompletreatedlxplelxting") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro1234$%kEjzTF?!123?4$\"e\",%?!@@wn") == 22)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fsox.Thennedog.fox.lowerdogcase26ofowercase") == 18)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ddog.oglletters,o.") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dogeuchhx") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("osuchcomcomplcexplexting\".vebrThisallchasentenceracters%?!@@wn") == 25)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distinct.!commbrownpplex@wnting") == 19)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comtwo1234$%?!@mb?rownre\"1234567890ct.h\",pting222pplex") == 33)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\",,h\",,") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.lowerandcasThith") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovcomtwo1234$%?!@mcomtwo1234$%?!@mbrownre\"h\",pting222pplexbrownre\"h\",pting222pplexebro1234$%?!@@@wn") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rereepeatingea") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("o4veb34$%?!@wn") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1comcompletreatedlxplelxting234$%?!@wn") == 26)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Then") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sbro1234$%kEjzTF?!123?4$\"ew\",%foxasg.?!@@wn") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplexpcharacters,lextin") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comccharacterrcs,omplcexple\"i\"ixting") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suc") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanoth\"i\"") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("disitinict") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(",\",") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("anoth\"i\".distinct.!@wnticngTsentence\"h\",") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ng\"\".") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ano\"nh\",") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"t\",combineThedand") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcompmlcommplexanotxcomtwo1234$%?!@mbrownre\"h\",pting222pplex") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaldisitinct") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("2characcterrcs,6o") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("complThex") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ofpunbrruncjuemptreatedswithtuuation!\"") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rRrToH") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("nX") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("asbro1234$%kEjzTF?!123?4$\"ew\",%foxasg.?!@@w2nm") == 28)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("reepeeating") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rQXXaQxau") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thitcharacte,h") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rQXaaamXQxau") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.lowaercasThith") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("o222repcombinedeaticontainsngazy") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("focomplThexxh.") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("JdmjOJcfoxasg.Rdx") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebofpunbrruncjuemptreatedswithtuuation!\"ro1234$%?!@@!wn") == 29)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("acomcomplanotx") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcharacterrs,plex") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("enlazyrs.") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"\".") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pirepeainbegoncomtwo1234$%?!@mbrownre\"h\",pting222pplex\"") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanooth\"i\".expex") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("foxasg.") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iubro1234$%?!123commppchasentencerlex?4$\"e\",%?!bro1234$%?!123?4$bro1234$%?Thisn@@wnuch") == 28)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"comcomplexplexei\".") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uccommbrownpplex") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bronwn") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ani\".") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("nof") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("renbeg") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ibruowns") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("reptingereepeating") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("bro1234$%?4This") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcomplanorepeabroThistx") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("asbro11234$%kEjzTF?!123?4$\"ew\",%foxasg.?!@@w2nm") == 28)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1anotherg.") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.lower@mbrownpplexandcasThith") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("anoth\"i\".distinct.!@wnticngT\",") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("re\"h\",pti222") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iubro1234$%?!123commibruownspplex?4$\"e\",%?!bro1234$%?!123?4$\"e\",%?!@@wn@@wnuch") == 26)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("@mbrolex") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(",222distidnsct\",") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("combineTcharacterrcstreated,hecomtworownpplexdogo.") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comabiaseand") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ng\"\".umps") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ofpunbmptreatedswithtuuation!\"") == 18)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ldazy") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s\"\",,") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("JdmjOfoxasg.Rdx") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("col") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s\"") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebofpunbrruncj$%?!@@!wn") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uuchfoxrepeainbegasg.") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("PZactersF") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ting") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.repeabro1234$%?Thisxot") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thitchabro123$4$%?@!@wnracters,h") == 22)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.ureptingquic") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("retturn") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jcomtwo1234$%?!@mbrownpplexumptreateds") == 26)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rQXXxu") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("anoth\"i\".distinct.!@wani\".nting") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rejum\"i\"i.foxrepeatingpsdWesgonbeg") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("commbrowcnpplex") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thitcharactersh") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("12345689") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fsox.Thbrrunenlowercase") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("llettupper\"i\"i1234567890.Thisrs,") == 22)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("osuchcomcomplcexple2xting\".vebro1234$%?!@@wn") == 29)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("acommplexs") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("nfox.lowercasThith") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1234$%@wn") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("JdmjjOJcRdx") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("anoth\"i\".odistinct.!@wani\".nting") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("another") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcompletreatedlmxplelxting") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dogegThis") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("comcompletreatemdlxplelxting") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("2chpion!\"araccterrcs,6o") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"II") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"t\"bro1234$%?!123?4$\"e\",%?!@@wn,") == 18)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chsaloweraamcasefox.ureptingquicracters,") == 21)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("anno\"nh\",") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"123bro1234$%?!123?4$\"e\",%?!@@wn\",") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebrdisitincto1234$%?!@wn") == 21)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("g\"f") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("acoOTAcPhmmplexs") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"e\"") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("letters,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("afBra") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("2ttt") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("mix") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("coxmmpplex") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distinThe") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iubro1234$%?!123commpplex?w4$\"e\",%?!bro1234$%?!123?4$\"e\",%?!@@wn@@wnuchjumps") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uThis") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("mam") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("txilaO") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebofpunebrruncjuemptreatedswithtuuation!\"ro1234$%?!@@!wn") == 29)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lletters") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("contains") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("22re\"hsing2JdThe") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fox.lowaercasThithubro1234$%?!123commpplex?4$\"e\",%?!bro123@wn@@wnuch") == 30)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"n\".chrQXXQxau") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uppecrcasee") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1comcompletreatedlxplelx!@wn") == 18)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"comcomplexplex\"IIi\".") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("b,\",%ro123$4$%?@!@wn") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("iisss") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("reepepeating") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ddogex222comtwombrownpplex") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("anoth\"i\".dist\"comcomplexplex\"IIi\".t.!@wani\".ntin") == 19)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("o222repcombinedeaticontainsngazzy") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("omptreateddswithtuuation!\"ro1234$%?!@@!wn") == 24)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ddocomtmbrownpplexge22") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sentenciissseex") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dog.faamox.lowercaserrunenlowercase") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ThitTcharactersh,h") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("docharadcterrss,go.") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("disitinuucht") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"co,\",mcomplexplex\"IIi\".") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"\"i\"i.") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suchcomcompexplexting\".") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("@mx") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("disictinuuchtcomcomplcommpl\"I") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iubro1234$%?!123commpplex?4$\"e\",%?!bro1234$%?!123?4$\"e\",%?!chsaloweraamcaseracters,@@wn@@wnuch") == 28)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rQXXxuu") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("accomtwombrownpplexomcomplanotx") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovcomtwo1234$%?!@mcomtwo1234ownre\"h\",pting222pplexbrownre\"h\",pting222pplexebro1234$%?!@@@wn") == 27)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rQXxau") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovebro1anotenlazycters.herg.") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sencexplexting\".eatings") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characomcomplexplextingcters,") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1111") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("$%^&*aA") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("aaaaa") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == 26)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactersvver") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sentence,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("returtn") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("over") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jucomplexmps") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactersvve") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pneocharactersvveumonoultramicroscopicsilicovolcanoconiosis") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uuppercase") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suchlots") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactersr") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("teheas") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("stetnce,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234$%%?!@") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sttetnce,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pu!!\"") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jucompplexmpjs") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("brown") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ssuch") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234$%%?!3@") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lase") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("fs") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pneumonoultramiicroscopicsilicovolcanoconiosis") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("octeheasharactersvver") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("octeheasharvver") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("t\"h\",eheas") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sttocteheasharactersvveretnce,") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("punctuation!\"") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("should") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lotsaid") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("tehheas") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("las\"IIe") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(",sttetnce,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"\"I") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"sttetnce,h\",") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("the") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Th1This") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lotd") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("brownn") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeatlowercaseumps") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suchuppercaselots") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lotrneturtnd") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("laocharactersvvezy") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("haracters.mix") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("laoc\"IIharactersvvese26\"h\",nt6encezy") == 18)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("charactThisersfs") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234$%?!@\"t\",") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"\"\"Ichcaracters") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("t\"h\",e\"\"\"Ichcaractersas") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("punbrownnon!\"") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"st\"tetnce,h\",") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactcersr") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("laoc\"IIhmixaractersvvese26\"h\",nt6encezy") == 20)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"I!@") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suchuppercaspelots") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ssucsh") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("oThis") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ci\"Iasharacters") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(",strespeatingetnce,") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("FDJcjR") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suc\"!I!@hlots") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"") == 1)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("doge") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lasesaid") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("vQ") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dasaidndog") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("doge,sttetnce,,") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("haThis") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suchuppercasspelots") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("las") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uupperucase") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("d0") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("haThisstetnce,") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("p\"u!!\"") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("haracters.") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characters.s") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("liasesaid") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("p\"u\"!!\"") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1oThis234$%?!@\"t\",") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("t\"h\",e\"\"\"IchcaractersassentencesThis") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jucompplexmps") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("0d0") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactcersrrlazy") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s.\",") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Ias") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rlazyeturn") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s..\",") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sentencesall") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("respeating") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("oThiTs") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("octeheashrarvver") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("oc1This") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactce1oThis234$%?!@\"t\",rsrrlazy0d0") == 25)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dog.ckuchuppercaselots}[]|]\\:;\"<>,.?/~`") == 30)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("haracters.ch") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("laocharactesvvezy") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"Iaas") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharaactersvve") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Th1Ths") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("alll") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sttee,") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("stnetnce,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ffox.") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("t\"h\",e\"\"\"Ichcaractersassentences") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rownn") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sttocte\"heasharactersvveretncet,") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharacersvver") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1234$%%%?!3@") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("is@e") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocactersr") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rlazyetuurn") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pu!p!foxcharacters.\"") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"ee\"") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Th1Thi1s") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1Thi1s") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s..,\",") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"charactiers,I") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("octeheasharacThistersvver") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("octeheasharacterchcaracterssvver") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1This") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("122394567890") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("26\"h\",") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("p\"u!!\"laocharactesvvezy") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("retrtn") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ci\"Iasharaacters") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("t\"h\",e\"\"\"Ichcaractersassentencesog.This") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("1Thi1") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("The") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ste") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("distinct.heasharactersvver") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("is@ee") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dogtrearted") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("EQJmbBXT") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("tehe") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"t\",rlazy") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(",sufoxcharacters.,h\",chuppercaspelots") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("retetn") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("punctuatsioncharacters.!\"") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dog.uick") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ssuchh") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characteers,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dotehheasg.ckuchuppercaselots}[]|]\\:;\"<>,.?/~`") == 30)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("tocharacters.rsfss") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pneocharactersvveumonoultramicroscopicsilicovolcanocs") == 15)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lastztetnce,zy") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(".\"s..,\"\",") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("122394567be890") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("uuupperucase") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("t\"hracoters.og\",e\"\"\"Ichcaractersas") == 13)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("retetnliasesaid") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("senntencesa") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repeteheasg.cteheasharvver") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("doge,stotetnce,,") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("al1iThi1l") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("octeheashrarvverdog.lastztetnce,zye") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("lasttetnce,zy") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("pneocharactersvveumonoultramicroscopicsilrepcontainseatingicovolcanocs") == 16)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("122394trearted90") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("conjumpstaof") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("suchs") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("chcaracters") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s\"\".") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("punctuatsionchara\"cta\"") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characters..s") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactervQr") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dotrearted") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("twoThe") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(",sttetcnce,") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("charactTrhiserslofs") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ojucomplexmpsc1This") == 14)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("jucompp") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ihaThis") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("rlazy.") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("repet\"sttetnceThisasharvver") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("26\"\"h\",") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("punctuatscionchara\"cta\"") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ovioevr") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("oschararctersvver") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"s\".") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("se") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("characteerse,") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("foxcharacters.") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("do.r") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"\"s\"is\"\".") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("r\"epeatingpunctuatsioncharacters.!\"ters,") == 17)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("doge,tsttetnce,,") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("twoanoither") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"sanother\"\".") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("Thisdistinct.") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sentstetnce,ence") == 6)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("binequickturn") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sttocteheasharactersvveretnce,sces") == 11)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("dog.This") == 8)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("charters") == 7)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("haracrenpeatingters.ch") == 12)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("esttee,") == 4)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"\"s") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("two") == 3)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("hasucracters.") == 9)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("sentsteisne") == 5)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("afoshouldxm") == 10)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("ocharactce1oThis234$%?!@\"t\",rsrr\"lazy0d0") == 25)){ tests_passed++; } total_tests++;

    if((count_distinct_characters("\"e\"\"") == 2)){ tests_passed++; } total_tests++;

    if((count_distinct_characters(".and") == 4)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


