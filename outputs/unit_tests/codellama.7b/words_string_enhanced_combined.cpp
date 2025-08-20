#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<string> words_string(const string& s) {
    vector<string> words;

    // Tokenize the input string into individual words
    istringstream iss(s);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }

    return words;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<string> a,vector<string>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
    if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(words_string("Hi, my name is John") , {"Hi", "my", "name", "is", "John"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("One, two, three, four, five, six") , {"One", "two", "three", "four", "five", "six"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hi, my name") , {"Hi", "my", "name"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("One,, two, three, four, five, six,") , {"One", "two", "three", "four", "five", "six"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("") , {}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("") , {}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",,,,") , {}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Elephant,giraffe,,lion,zebra") , {"Elephant","giraffe","lion","zebra"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("apple,") , {"apple"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Elephant,gieraffe,,lion,zebra") , {"Elephant","gieraffe","lion","zebra"}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",,") , {}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",,,,,") , {}))){ tests_passed++; } total_tests++;

    if((issame(words_string("XUI") , {"XUI"}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",,,") , {}))){ tests_passed++; } total_tests++;

    if((issame(words_string("XI") , {"XI"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eesrvDWbLL") , {"eesrvDWbLL"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("hwoXUhIrld") , {"hwoXUhIrld"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("The,quick,brown,fox,jumps,over,the,lazy,dog.") , {"The","quick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ThisStringHasNoSpaces") , {"ThisStringHasNoSpaces"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Muluti") , {"Muluti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eB") , {"eB"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("B") , {"B"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("change,") , {"change"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("is") , {"is"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("th") , {"th"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("line") , {"line"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("you?") , {"you?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Mullti") , {"Mullti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("line!") , {"line!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("space") , {"space"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("BeB") , {"BeB"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumps") , {"jumps"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hello,i") , {"Hello","i"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("onwords,e") , {"onwords","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("just") , {"just"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Helllol,") , {"Helllol"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("NWUyMDWJAr") , {"NWUyMDWJAr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spacesNWUyMDDWJAr") , {"spacesNWUyMDDWJAr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ladzydog.") , {"ladzydog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("iis") , {"iis"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.commases") , {"dog.commases"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("justt") , {"justt"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spaces") , {"spaces"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("John.") , {"John."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("after,") , {"after"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("TwoB") , {"TwoB"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("quickx") , {"quickx"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("the") , {"the"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yldadzydoJohn,") , {"yldadzydoJohn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("in") , {"in"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cmyTwwoe,") , {"cmyTwwoe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumpwiorths") , {"jumpwiorths"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hi,rld!") , {"Hi","rld!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("The") , {"The"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ThTHello,e") , {"ThTHello","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ujumps") , {"ujumps"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("do") , {"do"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("on") , {"on"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yldadzydoJowithhn,") , {"yldadzydoJowithhn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lninie!") , {"lninie!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lniniie!") , {"lniniie!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("or") , {"or"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("are") , {"are"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("H") , {"H"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("by,") , {"by"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("chhownge,") , {"chhownge"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("linee") , {"linee"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("nlniniie!") , {"nlniniie!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("you??") , {"you??"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumpwiordog.ths") , {"jumpwiordog.ths"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("BB") , {"BB"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("om") , {"om"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ThTHrownello,e") , {"ThTHrownello","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spacesu?") , {"spacesu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yldadzydcommas!uluti,") , {"yldadzydcommas!uluti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("chhowngec,") , {"chhowngec"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rdandom") , {"rdandom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("wiorth") , {"wiorth"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("meaning") , {"meaning"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rdmandom") , {"rdmandom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("John,") , {"John"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rown") , {"rown"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ynldadzydoJohn,") , {"ynldadzydoJohn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("and") , {"and"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.H") , {"dog.H"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("s") , {"s"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sentence") , {"sentence"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("n.") , {"n."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cheange,") , {"cheange"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("no") , {"no"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brown") , {"brown"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("TThTH") , {"TThTH"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("changee,g.") , {"changee","g."}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",,,,,,No") , {"No"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spacesNDWUyMDDWJAr") , {"spacesNDWUyMDDWJAr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("you?o?") , {"you?o?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eBThTHello,e") , {"eBThTHello","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cheangeg,") , {"cheangeg"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yo") , {"yo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("showu?") , {"showu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spsaces") , {"spsaces"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.comyldadzydcommas!uluti,mases") , {"dog.comyldadzydcommas!uluti","mases"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("BrandomeB") , {"BrandomeB"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Bra") , {"Bra"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("iiis") , {"iiis"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rdmandoom") , {"rdmandoom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("words,") , {"words"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spacesNDWUyMDDWJAspacesNDWUyMDDWJArr") , {"spacesNDWUyMDDWJAspacesNDWUyMDDWJArr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("i") , {"i"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("browns") , {"browns"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("how") , {"how"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("change.e,g.") , {"change.e","g."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lninile!") , {"lninile!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sshowu?") , {"sshowu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumpzs") , {"jumpzs"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("quiUthx") , {"quiUthx"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("o") , {"o"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commas!!") , {"commas!!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commas!") , {"commas!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sentesnce") , {"sentesnce"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brn") , {"brn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cnamehange,") , {"cnamehange"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oveor") , {"oveor"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("taMultireaddHi,") , {"taMultireaddHi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rdmandoHello,") , {"rdmandoHello"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commasAmazing,") , {"commasAmazing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("FLoaost") , {"FLoaost"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("before") , {"before"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("namouu?") , {"namouu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sadding") , {"sadding"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("tarelazy") , {"tarelazy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("inor") , {"inor"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("wBBTheith") , {"wBBTheith"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spaace") , {"spaace"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("orHi,") , {"orHi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("quick") , {"quick"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adding") , {"adding"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spFLoaostacesNDWUyMDDWJAr") , {"spFLoaostacesNDWUyMDDWJAr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oazy") , {"oazy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dochangee,g.ommas") , {"dochangee","g.ommas"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sho?wu?") , {"sho?wu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brlineen") , {"brlineen"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("JohThe,quick,brown,fox,jumps,over,the,lazy,dog.") , {"JohThe","quick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dochangee,g.") , {"dochangee","g."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("The,quick,brown,foxdogwords,ngee,g.er,the,lazy,dog.") , {"The","quick","brown","foxdogwords","ngee","g.er","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("juust") , {"juust"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spacesu?,,,No") , {"spacesu?","No"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ii") , {"ii"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brlJohn.bineen") , {"brlJohn.bineen"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("youlniniie!?o?") , {"youlniniie!?o?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("s!!") , {"s!!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beore") , {"beore"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("n") , {"n"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("change,jumpwiths") , {"change","jumpwiths"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cochange,themmas!!") , {"cochange","themmas!!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("MAmazing,") , {"MAmazing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("?") , {"?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ulazy") , {"ulazy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("tTwo") , {"tTwo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rdmaoom") , {"rdmaoom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HelloH,i") , {"HelloH","i"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Mulluti") , {"Mulluti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("e") , {"e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("onon") , {"onon"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ooazy") , {"ooazy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oare") , {"oare"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hhe") , {"Hhe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("random") , {"random"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("nrandon") , {"nrandon"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sbetween") , {"sbetween"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumThe") , {"jumThe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("FLspacesTheoaost") , {"FLspacesTheoaost"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("President,") , {"President"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hello,") , {"Hello"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumg.") , {"jumg."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ocommams") , {"ocommams"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commas???lniniie!") , {"commas???lniniie!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("angee,g.ommas") , {"angee","g.ommas"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("broowns") , {"broowns"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("FWR") , {"FWR"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("quicckx") , {"quicckx"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yldadzydog.jumpslydoJowithhn,") , {"yldadzydog.jumpslydoJowithhn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hellloll,") , {"Hellloll"}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",") , {}))){ tests_passed++; } total_tests++;

    if((issame(words_string("nn") , {"nn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commasMullti!!") , {"commasMullti!!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commas!!umg.cheangeg,") , {"commas!!umg.cheangeg"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("taHelloH,iMultireaddHi,") , {"taHelloH","iMultireaddHi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("John.inor") , {"John.inor"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oyo") , {"oyo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ThTHelo,e") , {"ThTHelo","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oyoo") , {"oyoo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hi,rd!") , {"Hi","rd!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yldadzydog.jumpslydoJowthhnu,") , {"yldadzydog.jumpslydoJowthhnu"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spaesth") , {"spaesth"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adnd") , {"adnd"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jarBBTheuust") , {"jarBBTheuust"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jummps") , {"jummps"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("F,n") , {"F","n"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.cogmmases") , {"dog.cogmmases"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("linee!") , {"linee!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hicommases,") , {"Hicommases"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("nTLxTIkG") , {"nTLxTIkG"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cnamehangrandome,") , {"cnamehangrandome"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ce") , {"ce"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sa") , {"sa"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oo") , {"oo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ddHi,") , {"ddHi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spacesNDWUWyMDDWJAspacesNDWUyMDDWJArr") , {"spacesNDWUWyMDDWJAspacesNDWUyMDDWJArr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rddandom") , {"rddandom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lin") , {"lin"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lazydog.") , {"lazydog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ovchange,theer") , {"ovchange","theer"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("theick") , {"theick"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("b") , {"b"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hello,rds,ngee,g.") , {"Hello","rds","ngee","g."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("JohThe,quick,brown,fox,jumps,over,the,tlazy,dog.") , {"JohThe","quick","brown","fox","jumps","over","the","tlazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("iiiis") , {"iiiis"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commas???lnine!") , {"commas???lnine!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.") , {"dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spa") , {"spa"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yMulti") , {"yMulti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ingsNWUyMDWJAr") , {"ingsNWUyMDWJAr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("omas") , {"omas"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("uHjumThe") , {"uHjumThe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("aaf,ter,") , {"aaf","ter"}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",T") , {"T"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("rom") , {"rom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.changee,g.yMDDWJAr") , {"dog.changee","g.yMDDWJAr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ldog.changee,g.yMDDWJArwngec,zydog.") , {"ldog.changee","g.yMDDWJArwngec","zydog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lazy") , {"lazy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("F,") , {"F"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eBThTHelleo,e") , {"eBThTHelleo","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cTehe") , {"cTehe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("h") , {"h"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumpwiortyhs") , {"jumpwiortyhs"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eBtarickelazy") , {"eBtarickelazy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yldadzydog.jumpslydoJowithhnn,") , {"yldadzydog.jumpslydoJowithhnn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("hth") , {"hth"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("comminors???") , {"comminors???"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.changee,youlniniie!?o?g.yMDDWJAr") , {"dog.changee","youlniniie!?o?g.yMDDWJAr"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("browsl") , {"browsl"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("comminmors???") , {"comminmors???"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("F,,n") , {"F","n"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yyQwaoYdS") , {"yyQwaoYdS"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("you?y?") , {"you?y?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("browner") , {"browner"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("kquickcommas???lniniie!") , {"kquickcommas???lniniie!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("shbeMulti?wu?") , {"shbeMulti?wu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spacesNDWUThe") , {"spacesNDWUThe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ntesn") , {"ntesn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("saddiang") , {"saddiang"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("BBThe") , {"BBThe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HecThe") , {"HecThe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("nam") , {"nam"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("noiin") , {"noiin"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eBThTHelloh,e") , {"eBThTHelloh","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("randomas???") , {"randomas???"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("thebrliick") , {"thebrliick"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("removing,") , {"removing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Raav") , {"Raav"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ThTTHelo,e") , {"ThTTHelo","e"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("namem") , {"namem"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sbetwecTeheen") , {"sbetwecTeheen"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("heer") , {"heer"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("zy") , {"zy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cnaranddocPresident,mehange,") , {"cnaranddocPresident","mehange"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("upjumps") , {"upjumps"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ing") , {"ing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("bbrlJohn.binee") , {"bbrlJohn.binee"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("hnoiin") , {"hnoiin"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cnamcehange,") , {"cnamcehange"}))){ tests_passed++; } total_tests++;

    if((issame(words_string(",,,,,,N,o") , {"N","o"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("!s!s!") , {"!s!s!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ss") , {"ss"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("betweeng.") , {"betweeng."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sbbetwecTeheen") , {"sbbetwecTeheen"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("randomstrHwords,") , {"randomstrHwords"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ladzydoga.") , {"ladzydoga."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ovchange,withs,ngee,g.Hi,rd!") , {"ovchange","withs","ngee","g.Hi","rd!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumpwiorF,ntyhs") , {"jumpwiorF","ntyhs"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("iiicommas!ulutiis") , {"iiicommas!ulutiis"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sshoHhew?") , {"sshoHhew?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oom") , {"oom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dstTherHwords,r") , {"dstTherHwords","r"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cheangge,") , {"cheangge"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cant") , {"cant"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jommas!umg.") , {"jommas!umg."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hi,my,name,is,John") , {"Hi","my","name","is","John"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Hi,my,name,is,John,") , {"Hi","my","name","is","John"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("1,2,3,4,5,6") , {"1","2","3","4","5","6"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("The,quick,rbrown,fox,jumps,over,the,lazy,dog.") , {"The","quick","rbrown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("my") , {"my"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("srandom") , {"srandom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Thbetweene,quick,brown,fox,jumps,over,the,lazy,dog.") , {"Thbetweene","quick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Kennedy") , {"Kennedy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beThe,quick,rbrown,fox,jumps,over,the,lazy,dog.fore") , {"beThe","quick","rbrown","fox","jumps","over","the","lazy","dog.fore"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("icommaAs") , {"icommaAs"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beThe,quick,rbrown,fox,jumps,over,the,lazy,do,g.fore") , {"beThe","quick","rbrown","fox","jumps","over","the","lazy","do","g.fore"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jHello,ust") , {"jHello","ust"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("zing,") , {"zing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beThe") , {"beThe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrandom") , {"dsrandom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("comMubeThe,quick,rbrown,fox,jumps,over,the,lazy,do,g.foreltimaAs") , {"comMubeThe","quick","rbrown","fox","jumps","over","the","lazy","do","g.foreltimaAs"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("EeJKnUSVXF") , {"EeJKnUSVXF"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("qk") , {"qk"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("world!") , {"world!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("y") , {"y"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("world!!") , {"world!!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ychange,ou?") , {"ychange","ou?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("moving,") , {"moving"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("BCKkvp") , {"BCKkvp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("azing,re") , {"azing","re"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eKenney") , {"eKenney"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cosmmasychancge,ou?!") , {"cosmmasychancge","ou?!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lazyThe,quick,rbrown,fox,jumps,over,the,lazy,dog.") , {"lazyThe","quick","rbrown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beforsMultiethe,lazy,dog.") , {"beforsMultiethe","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beTh") , {"beTh"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("How") , {"How"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohn,w") , {"HoJohn","w"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("comm") , {"comm"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("leine") , {"leine"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps,over,the,lazy,dog.") , {"Tjumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spTwrandomoaces") , {"spTwrandomoaces"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lei") , {"lei"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("commma!") , {"commma!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ychaKennedyThe,quick,brown,fox,jumps,over,Hi,nge,ou?") , {"ychaKennedyThe","quick","brown","fox","jumps","over","Hi","nge","ou?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("boeThe,quick,rbrown,fox,jumps,over,the,lazy,dog.fore") , {"boeThe","quick","rbrown","fox","jumps","over","the","lazy","dog.fore"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("aftThe,quick,brown,fox,jumps,over,the,lazy,dog.er,") , {"aftThe","quick","brown","fox","jumps","over","the","lazy","dog.er"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohn") , {"HoJohn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lazAmazing,") , {"lazAmazing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("atfter,") , {"atfter"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yXdEXoUU") , {"yXdEXoUU"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("EeJKnUSVF") , {"EeJKnUSVF"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("BCKkvqkp") , {"BCKkvqkp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yu?") , {"yu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("The,quick,rbrown,fox,jumps,over,tog.") , {"The","quick","rbrown","fox","jumps","over","tog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cosmmasychamnce,ou?!") , {"cosmmasychamnce","ou?!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("KennedyThe,orquick,brown,fox,jumps,over,the,lazy,dog.") , {"KennedyThe","orquick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adJohowding") , {"adJohowding"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("hinow") , {"hinow"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spTwradomoaces") , {"spTwradomoaces"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("aftThe,quickThbetweene,quick,brown,fox,jumps,over,the,lazer,tthe,lazy,dog.er,") , {"aftThe","quickThbetweene","quick","brown","fox","jumps","over","the","lazer","tthe","lazy","dog.er"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("quicck") , {"quicck"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dcommaAs") , {"dcommaAs"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("between") , {"between"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Pre,") , {"Pre"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps,over,thThe,quick,rbrown,fox,jumps,over,tog.e,lazy,dog.") , {"Tjumps","over","thThe","quick","rbrown","fox","jumps","over","tog.e","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("over") , {"over"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beThe,quick,rbrown,feox,jumps,over,the,lazy,dog.fomre") , {"beThe","quick","rbrown","feox","jumps","over","the","lazy","dog.fomre"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("after,BCKkvqkp") , {"after","BCKkvqkp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Multi") , {"Multi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jHello,usst") , {"jHello","usst"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("OPvfQ") , {"OPvfQ"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("a") , {"a"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("OPQvfQ") , {"OPQvfQ"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ThisSaTwondstringHasNoSpaces") , {"ThisSaTwondstringHasNoSpaces"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps,over,thThe,quick,rbrown,fox,jumps,over,tog.e,laz.") , {"Tjumps","over","thThe","quick","rbrown","fox","jumps","over","tog.e","laz."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ort") , {"ort"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("onejHello,ust") , {"onejHello","ust"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ThisStringHasNocosmmasychancge,ou?!Spaces") , {"ThisStringHasNocosmmasychancge","ou?!Spaces"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("icommaAMultis") , {"icommaAMultis"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Pe,") , {"Pe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("The,quick,brown,fox,j,umps,over,the,lazy,dog.") , {"The","quick","brown","fox","j","umps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohnyu?") , {"HoJohnyu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spTwradomoaEeJPre,s") , {"spTwradomoaEeJPre","s"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Keneello,ustdy") , {"Keneello","ustdy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dcommaA") , {"dcommaA"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adJohownding") , {"adJohownding"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("qquick") , {"qquick"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lazrandomy") , {"lazrandomy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jumpychange,Hi,") , {"jumpychange","Hi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("KBCKkvqkp") , {"KBCKkvqkp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("K,ennedyThe,quicjumpsk,brown,fox,jumps,over,Hi,") , {"K","ennedyThe","quicjumpsk","brown","fox","jumps","over","Hi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yort?") , {"yort?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJomoving,hnyu?") , {"HoJomoving","hnyu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sPresident,") , {"sPresident"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("areover") , {"areover"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("movingover,") , {"movingover"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beThe,quick,rbrown,feeox,jumps,over,the,lazy,dog.fomre") , {"beThe","quick","rbrown","feeox","jumps","over","the","lazy","dog.fomre"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ou?") , {"ou?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("here,,,,,,") , {"here"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("m") , {"m"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ycPresident,") , {"ycPresident"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ychang") , {"ychang"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adJohoweding") , {"adJohoweding"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spa,,e,,,,NolazrTwrandomoandomy") , {"spa","e","NolazrTwrandomoandomy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spTwradomoaEeJP,s") , {"spTwradomoaEeJP","s"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oPe,?") , {"oPe","?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yuu?") , {"yuu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ychaKennedyThJohn.e,quick,brown,fox,jumps,over,Hi,nge,ou?") , {"ychaKennedyThJohn.e","quick","brown","fox","jumps","over","Hi","nge","ou?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("saddingtring") , {"saddingtring"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("The,quick,rbrown,fox,jumps,over,the,lazy,dogou?.") , {"The","quick","rbrown","fox","jumps","over","the","lazy","dogou?."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("betwstringeen") , {"betwstringeen"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("qqck") , {"qqck"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("movingovrandomer,") , {"movingovrandomer"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrand") , {"dsrand"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("d") , {"d"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ju") , {"ju"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("zin") , {"zin"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spTwradomoBCKkvpaEeJPre,s") , {"spTwradomoBCKkvpaEeJPre","s"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("K,ennedyThe,quicjumpsk,brown,fox,jump,s,over,Hi,") , {"K","ennedyThe","quicjumpsk","brown","fox","jump","s","over","Hi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Kennedyucck") , {"Kennedyucck"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("aftThe,quick,brown,fox,jumps,over,the,lazy,do,") , {"aftThe","quick","brown","fox","jumps","over","the","lazy","do"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohyu?") , {"HoJohyu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("areoveyuu?r") , {"areoveyuu?r"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spaceskvp") , {"spaceskvp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Pretsident,") , {"Pretsident"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dcdommaA") , {"dcdommaA"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yy") , {"yy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("KtowRydY") , {"KtowRydY"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jukumps") , {"jukumps"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yXdEonejHello,ustXoUU") , {"yXdEonejHello","ustXoUU"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("hiKennedyuccknow") , {"hiKennedyuccknow"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("qPresident,") , {"qPresident"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrandello,ustmmas!y") , {"dsrandello","ustmmas!y"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("JHoJohnyu?") , {"JHoJohnyu?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("belazAmazing,tweenn") , {"belazAmazing","tweenn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lenine") , {"lenine"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("S") , {"S"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("aftThe,quick,brown,fumps,over,the,lazy,do,") , {"aftThe","quick","brown","fumps","over","the","lazy","do"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("aTwond") , {"aTwond"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ou?s") , {"ou?s"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ello,ustmmas!y") , {"ello","ustmmas!y"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("araeover") , {"araeover"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("pDWegu") , {"pDWegu"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("pacenor,Hi,nge,ou?nds") , {"pacenor","Hi","nge","ou?nds"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps.,over,thThe,quick,rbrown,fox,jumps,over,tog.e,lazy,dog.") , {"Tjumps.","over","thThe","quick","rbrown","fox","jumps","over","tog.e","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("EeJPre,") , {"EeJPre"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("betwstringee") , {"betwstringee"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("hjumpychange,Hi,") , {"hjumpychange","Hi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("a,tfter,") , {"a","tfter"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brownTwrandomo") , {"brownTwrandomo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps,over,uick,rbrown,fox,jumps,over,tog.e,laz.") , {"Tjumps","over","uick","rbrown","fox","jumps","over","tog.e","laz."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dog.a.Twonds") , {"dog.a.Twonds"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("VqVNGKV") , {"VqVNGKV"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohye,ou?u?") , {"HoJohye","ou?u?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("paceno") , {"paceno"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beTbh") , {"beTbh"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("chan,ge,") , {"chan","ge"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spa,,e,,,,No") , {"spa","e","No"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("behTbh") , {"behTbh"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("thlazAmazing,") , {"thlazAmazing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("KeKnnedynucck") , {"KeKnnedynucck"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohye,ou?uKennedyThe,orquick,brown,fox,jumps,over,the,lazy,dog.") , {"HoJohye","ou?uKennedyThe","orquick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lAeSbnrM") , {"lAeSbnrM"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adJohowdMulti") , {"adJohowdMulti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrand,ello,ustmmas!y") , {"dsrand","ello","ustmmas!y"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("naF,me") , {"naF","me"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrandelmlo,ustmmas!y") , {"dsrandelmlo","ustmmas!y"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("comJohn.maAsjukmps") , {"comJohn.maAsjukmps"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("eTjumps,over,the,lazy,dog.") , {"eTjumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps,over,thThe,quick,rbrown,fox,jumyremoving,ou?ps,over,tog.e,lazy,dog.") , {"Tjumps","over","thThe","quick","rbrown","fox","jumyremoving","ou?ps","over","tog.e","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("oThisStringHasNocosmmasychamncge,ou?!Spaceser") , {"oThisStringHasNocosmmasychamncge","ou?!Spaceser"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("here,,,,,,cesne") , {"here","cesne"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("izin") , {"izin"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrandello,ustmbehTbhmas!") , {"dsrandello","ustmbehTbhmas!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("mmy") , {"mmy"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("KBCCKkvqkp") , {"KBCCKkvqkp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("aftThe,quickThbetweene,quick,brown,fox,jAma") , {"aftThe","quickThbetweene","quick","brown","fox","jAma"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("pnaceno") , {"pnaceno"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("here,,,,,,addinge") , {"here","addinge"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Pe,aTwoHnd") , {"Pe","aTwoHnd"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brownbeThe,quick,rbrown,feox,jumps,over,the,lazy,dog.fomre") , {"brownbeThe","quick","rbrown","feox","jumps","over","the","lazy","dog.fomre"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spTwradomoa,s") , {"spTwradomoa","s"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("na,F,me") , {"na","F","me"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Ama") , {"Ama"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ng") , {"ng"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("meaningemoving,") , {"meaningemoving"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("quicc") , {"quicc"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("comHoJohyu?m") , {"comHoJohyu?m"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("c!ommas!!") , {"c!ommas!!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Joychange,Hi,") , {"Joychange","Hi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brownbeThe,quick,rbrown,feox,jumps,over,the,lazy,edog.fomre") , {"brownbeThe","quick","rbrown","feox","jumps","over","the","lazy","edog.fomre"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ychaKennedyThe,quick,brown,fAmazing,") , {"ychaKennedyThe","quick","brown","fAmazing"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps,over,thThe,quick,rbrown,fox,jumyrefmoving,ou?ps,over,tog.e,lazy,dog.") , {"Tjumps","over","thThe","quick","rbrown","fox","jumyrefmoving","ou?ps","over","tog.e","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("A") , {"A"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cosmmasychancgeu?!") , {"cosmmasychancgeu?!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("BCKdog.a.Twondskvp") , {"BCKdog.a.Twondskvp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrandd") , {"dsrandd"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ello,ust") , {"ello","ust"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("meaningemovning,") , {"meaningemovning"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Tjumps,over,tdsrand,ello,ustmmas!yhThe,quick,rbrown,fox,jumyremoving,ou?ps,over,tog.e,lazy,dogspaceHi,") , {"Tjumps","over","tdsrand","ello","ustmmas!yhThe","quick","rbrown","fox","jumyremoving","ou?ps","over","tog.e","lazy","dogspaceHi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("nae,F,me") , {"nae","F","me"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Jiohn,") , {"Jiohn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adJohoychaKennedyThe,quick,brown,fAmazing,dMulti") , {"adJohoychaKennedyThe","quick","brown","fAmazing","dMulti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohyei,ou?uKennedyThe,orquick,brown,fox,jumps,over,the,lazy,dog.") , {"HoJohyei","ou?uKennedyThe","orquick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Twoyort?") , {"Twoyort?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("KennedyThe,orquick,brown,fox,jumps,over,the,lazy,doTjumps.,over,thThze,quick,rbrown,fox,jumps,over,tog.e,lazy,dog.g.") , {"KennedyThe","orquick","brown","fox","jumps","over","the","lazy","doTjumps.","over","thThze","quick","rbrown","fox","jumps","over","tog.e","lazy","dog.g."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("srapacenor,Hi,nge,ou?ndoehowm") , {"srapacenor","Hi","nge","ou?ndoehowm"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Kennedyrandom") , {"Kennedyrandom"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brownTwranhere,,,,,,cesnedomwo") , {"brownTwranhere","cesnedomwo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("bfA") , {"bfA"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("OPvleifQbelazAmazing,tweenn") , {"OPvleifQbelazAmazing","tweenn"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Twoyor?") , {"Twoyor?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spa,,e,,,,eNo") , {"spa","e","eNo"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("pnacHello,eno") , {"pnacHello","eno"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("adoJohowdingi") , {"adoJohowdingi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohye,ou?uKennedyThe,orquick,brown,fox,spacesjumps,over,the,lazy,dog.") , {"HoJohye","ou?uKennedyThe","orquick","brown","fox","spacesjumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("Mychange,Tjumps,over,uick,rbrown,fox,jumps,over,tog.e,laz.ychaKennedyThe,quick,brown,fox,jumps,over,Hi,nge,ou?Hi,") , {"Mychange","Tjumps","over","uick","rbrown","fox","jumps","over","tog.e","laz.ychaKennedyThe","quick","brown","fox","jumps","over","Hi","nge","ou?Hi"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohye,ouo?u?") , {"HoJohye","ouo?u?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("after,BCKkvkp") , {"after","BCKkvkp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohye,ou?uKenneodyThe,orquick,brown,fox,jumps,over,the,lazy,dog.") , {"HoJohye","ou?uKenneodyThe","orquick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("wHow") , {"wHow"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("annd") , {"annd"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ychaKennedyThe,quick,brown,ifox,jumps,ovesMulti") , {"ychaKennedyThe","quick","brown","ifox","jumps","ovesMulti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("areoveyuur") , {"areoveyuur"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("VqVVNGVKV") , {"VqVVNGVKV"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spTwradoa,s") , {"spTwradoa","s"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ou?snaeme") , {"ou?snaeme"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("usst") , {"usst"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("betwstringbeen") , {"betwstringbeen"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("cthlasentencezAmazing,osmmaKennedyThnamee,quick,brown,fox,jumps,over,the,ychange,Hi,sychancgeu?!") , {"cthlasentencezAmazing","osmmaKennedyThnamee","quick","brown","fox","jumps","over","the","ychange","Hi","sychancgeu?!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("qqquick") , {"qqquick"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("lazy,dog.") , {"lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("r") , {"r"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohye,ou?uKennedyThe,orquick,brown,fox,spacesjumps,onver,the,lazy,dog.") , {"HoJohye","ou?uKennedyThe","orquick","brown","fox","spacesjumps","onver","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("coychange,ou?ammma!") , {"coychange","ou?ammma!"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("comJohn.mthbetweenkmpseaAsjukmps") , {"comJohn.mthbetweenkmpseaAsjukmps"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("YNe") , {"YNe"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("brow") , {"brow"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yremoving,ou?") , {"yremoving","ou?"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ycPresidenadJohowdingt,") , {"ycPresidenadJohowdingt"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beThe,quick,rbrown,fox,jumups,over,the,lazy,do,g.fore") , {"beThe","quick","rbrown","fox","jumups","over","the","lazy","do","g.fore"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("jHelloo,usst") , {"jHelloo","usst"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dd") , {"dd"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("he,,,,,") , {"he"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("voTB") , {"voTB"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("HoJohye,ou?uKenneodyThe,orq,uick,brown,fox,jumps,over,the,lazy,dog.") , {"HoJohye","ou?uKenneodyThe","orq","uick","brown","fox","jumps","over","the","lazy","dog."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dcoTjumps,over,uick,rbrown.e,laz.mmaA") , {"dcoTjumps","over","uick","rbrown.e","laz.mmaA"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("yeKenney") , {"yeKenney"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("ou?sg.") , {"ou?sg."}))){ tests_passed++; } total_tests++;

    if((issame(words_string("beThe,quick,rbrown,feox,jumps,over,the,lazy,dog.focommas!ou?mre") , {"beThe","quick","rbrown","feox","jumps","over","the","lazy","dog.focommas!ou?mre"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("areobrownTwrandomover") , {"areobrownTwrandomover"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("issMulti") , {"issMulti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("the,lazy,dog.BCKkvp") , {"the","lazy","dog.BCKkvp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("agdJohownding") , {"agdJohownding"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("qqk") , {"qqk"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("mye") , {"mye"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("spaceskpvp") , {"spaceskpvp"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("sMulti") , {"sMulti"}))){ tests_passed++; } total_tests++;

    if((issame(words_string("dsrawithndd") , {"dsrawithndd"}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


