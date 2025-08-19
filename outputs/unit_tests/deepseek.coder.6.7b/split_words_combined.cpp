#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// Function to check if character is lowercase letter with odd order
bool isOddLower(char ch) {
    return 'b' <= ch && ch <= 'z' && (ch - 'a') % 2 == 1;
}

vector<string> split_words(string txt){
    vector<string> words;
    
    size_t pos = 0, prevPos = 0;
    int oddCount = 0;
  
    // Check for whitespace and comma then split the string
    while ((pos = txt.find(' ', prevPos)) != std::string::npos || (pos = txt.find(',', prevPos)) != std::string::npos) {
        if (prevPos != pos){
            words.push_back(txt.substr(prevPos, pos - prevPos));
            
            // Count lower-case letters with odd order 
            for (const auto& ch : txt.substr(prevPos, pos - prevPos)) {
                if (isOddLower(ch)) ++oddCount;
            }  
        }
        
        prevPos = pos + 1;    // Skip the found delimiter 
    }
    
    if (prevPos < txt.length()){
        words.push_back(txt.substr(prevPos));
      
        // Count lower-case letters with odd order
        for (const auto& ch : txt.substr(prevPos)) {
            if (isOddLower(ch)) ++oddCount;
        }  
    }
    
    // If no whitespace or comma found, return a vector with one element as the count of lower-case letters with odd order 
    if (words.empty()){
      words.push_back(to_string(oddCount));
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

    if((issame(split_words("Hello world!") , {"Hello","world!"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Hello,world!") , {"Hello","world!"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Hello world,!") , {"Hello","world,!"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Hello,Hello,world !") , {"Hello,Hello,world","!"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("abcdef") , {"3"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("aaabb") , {"2"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("aaaBb") , {"1"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("") ,{"0"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Hello,world!") , {"Hello","world!"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("aaa,bbb") , {"aaa","bbb"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("123,456") , {"123","456"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("aaa,bb") , {"aaa","bb"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("supercalifragilisticexpiali12345,67890cious") , {"supercalifragilisticexpiali12345","67890cious"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("commas,a") , {"commas","a"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("this,should") , {"this","should"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("dz.olhjcymqpz,wnfx;lz.iwrohveybkgts.feaasfbyb,k") , {"dz.olhjcymqpz","wnfx;lz.iwrohveybkgts.feaasfbyb","k"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("pniceasssantidisestatheblishmentarianism,0ed") , {"pniceasssantidisestatheblishmentarianism","0ed"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("supercalifragilisticexpiali1esd;2345,67890cious") , {"supercalifragilisticexpiali1esd;2345","67890cious"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("ek!m,rkk") , {"ek!m","rkk"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("supercalifragilistiicexpiali1esd;2345,67890cious") , {"supercalifragilistiicexpiali1esd;2345","67890cious"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("sh(defaultas,words,and,oulsupercalifragilisticexpiali1esd;2345,67890ciousd") , {"sh(defaultas","words","and","oulsupercalifragilisticexpiali1esd;2345","67890ciousd"}));
    assert(issame(split_words("Nonee!m,r") , {"Nonee!m","r"}));
    assert(issame(split_words("supercalifragilisticexpiali1esd;2345,67890cioubits") , {"supercalifragilisticexpiali1esd;2345","67890cioubits"}));
    assert(issame(split_words("(AMD64)supercalifragilisticexpiali1esd;2345,67890cioubits]") , {"(AMD64)supercalifragilisticexpiali1esd;2345","67890cioubits]"}));
    assert(issame(split_words("floccinaucinihilipilificateion,p") , {"floccinaucinihilipilificateion","p"}));
    assert(issame(split_words("antidisestatheblishmentarianism,0") , {"antidisestatheblishmentarianism","0"}));
    assert(issame(split_words("spacesc,supercalifragilisticexpialidocious") , {"spacesc","supercalifragilisticexpialidocious"}));
    assert(issame(split_words("floccinaucinihiilion,p") , {"floccinaucinihiilion","p"}));
    assert(issame(split_words("antidianism,0") , {"antidianism","0"}));
    assert(issame(split_words("antidim,0") , {"antidim","0"}));
    assert(issame(split_words("this,ishouldno") , {"this","ishouldno"}));
    assert(issame(split_words("sentencesas,words,and") , {"sentencesas","words","and"}));
    assert(issame(split_words("(AMD64)supercalifragilisticexpiali1esd;2345,67x890cioubits]") , {"(AMD64)supercalifragilisticexpiali1esd;2345","67x890cioubits]"}));
    assert(issame(split_words("supercalifragilisticexpiali12345,67890ciousA") , {"supercalifragilisticexpiali12345","67890ciousA"}));
    assert(issame(split_words("floccinaucinihilnipilificateion,commasing") , {"floccinaucinihilnipilificateion","commasing"}));
    assert(issame(split_words("aUTtCaeDf12345,6antThis7890texte") , {"aUTtCaeDf12345","6antThis7890texte"}));
    assert(issame(split_words("this,shoulld") , {"this","shoulld"}));
    assert(issame(split_words("like,None") , {"like","None"}));
    assert(issame(split_words("flo2021,ccinaucinihilipilificateion,p") , {"flo2021","ccinaucinihilipilificateion","p"}));
    assert(issame(split_words("uflo2021,ccinaucinihilipilificateion,p") , {"uflo2021","ccinaucinihilipilificateion","p"}));
    assert(issame(split_words("jgKaantindisestablishmentarieanoism,ndFmqluVX") , {"jgKaantindisestablishmentarieanoism","ndFmqluVX"}));
    assert(issame(split_words("floccinaucinihilipilificateion,commasingf") , {"floccinaucinihilipilificateion","commasingf"}));
    assert(issame(split_words("supercalifragias,ds,andlisticexpialidolcious") , {"supercalifragias","ds","andlisticexpialidolcious"}));
    assert(issame(split_words("noommaswOWbbXmas,a") , {"noommaswOWbbXmas","a"}));
    assert(issame(split_words("and,only") , {"and","only"}));
    assert(issame(split_words("jwzfxwpfxysupercalifragilistiicexpiali1esd;2345,67890ciousqkiaUTtCDfe") , {"jwzfxwpfxysupercalifragilistiicexpiali1esd;2345","67890ciousqkiaUTtCDfe"}));
    assert(issame(split_words("sentencpneumonoultrnamicroscopicsilicovolcainoconsiosis,e") , {"sentencpneumonoultrnamicroscopicsilicovolcainoconsiosis","e"}));
    assert(issame(split_words("spaceswithds,a90th") , {"spaceswithds","a90th"}));
    assert(issame(split_words("sh(defaultas,words,and,oulsupercalifragilisticexpionlyed!lowercasevhllxblxyqvali1esd;2345,67890ciousd") , {"sh(defaultas","words","and","oulsupercalifragilisticexpionlyed!lowercasevhllxblxyqvali1esd;2345","67890ciousd"}));
    assert(issame(split_words("supercalifragilistiicexpiali1esd;2345,67aUTtCDfeus") , {"supercalifragilistiicexpiali1esd;2345","67aUTtCDfeus"}));
    assert(issame(split_words("s,and") , {"s","and"}));
    assert(issame(split_words("noommasmas,aqvv") , {"noommasmas","aqvv"}));
    assert(issame(split_words("08:14:53s,A)") , {"08:14:53s","A)"}));
    assert(issame(split_words("floccinaucinihilipilificateion,phanhdlAdocious") , {"floccinaucinihilipilificateion","phanhdlAdocious"}));
    assert(issame(split_words("antidhanhdlAhmentarianism,0") , {"antidhanhdlAhmentarianism","0"}));
    assert(issame(split_words("08:14:53s,A1)") , {"08:14:53s","A1)"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("s,A") , {"s","A"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("floccinaucinihilipspaces,ilificateion,p") , {"floccinaucinihilipspaces","ilificateion","p"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("anantidisesttheblishmentarianism,tThis") , {"anantidisesttheblishmentarianism","tThis"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("like,antidisestablishmentaroianism,None") , {"like","antidisestablishmentaroianism","None"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("spaceswithdalidociousilicovolcanoconiosis,s,a90th") , {"spaceswithdalidociousilicovolcanoconiosis","s","a90th"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("odd-orspacesc,der") , {"odd-orspacesc","der"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("that,jgKFmqluVX") , {"that","jgKFmqluVX"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("eYCWxlaucinihilipilitficateion,SAHY") , {"eYCWxlaucinihilipilitficateion","SAHY"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("aUTtCDnumbers,6Afe") , {"aUTtCDnumbers","6Afe"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("anantidisesttheblishmentarianism,tThimplizuvx;zs") , {"anantidisesttheblishmentarianism","tThimplizuvx;zs"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("as,words,a") , {"as","words","a"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("sentencpneumonoultramicroscopiccsilicovolcanoconsiosis,e") , {"sentencpneumonoultramicroscopiccsilicovolcanoconsiosis","e"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("suchsupercalifragilistiicexpiali1esd;2345,67aUTtCsDfeus") , {"suchsupercalifragilistiicexpiali1esd;2345","67aUTtCsDfeus"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("noommammsupercalifrspacesupercalifragilisticexpialidocious64,agilisticexpialidociouss") , {"noommammsupercalifrspacesupercalifragilisticexpialidocious64","agilisticexpialidociouss"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("this,shjgKaantindisestablishmentarieanoism,ndFmqluVXoulld") , {"this","shjgKaantindisestablishmentarieanoism","ndFmqluVXoulld"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("12345,67890text") , {"12345","67890text"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("2lipneumonoultramicroscopicsilicovolcanthperiod,his,6") , {"2lipneumonoultramicroscopicsilicovolcanthperiod","his","6"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("e!m,r") , {"e!m","r"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("thisl,shoulld") , {"thisl","shoulld"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("supercal3ifragilistiicexpiali1esd;2345,67aUTtCDfeus") , {"supercal3ifragilistiicexpiali1esd;2345","67aUTtCDfeus"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("floccinaucinihilipilificateion,commasingos") , {"floccinaucinihilipilificateion","commasingos"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("sent12345,67890encnne") , {"sent12345","67890encnne"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Pytholipneumonoiultramicroscopicsilicovolcanoconiosis,n") , {"Pytholipneumonoiultramicroscopicsilicovolcanoconiosis","n"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("as,ds,and") , {"as","ds","and"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("aspaceanAntidisestaxpialinospaceswithds,a90thrmaldocious") , {"aspaceanAntidisestaxpialinospaceswithds","a90thrmaldocious"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("supercalifragilisticexpiali12345,6sA") , {"supercalifragilisticexpiali12345","6sA"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("lsupercalifragias,ds,andlisticexpialidolcious") , {"lsupercalifragias","ds","andlisticexpialidolcious"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("supercalifragilistiiPythdoncexpiali1esd;2345,67aUTtCDfeus") , {"supercalifragilistiiPythdoncexpiali1esd;2345","67aUTtCDfeus"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("nfhnhj,eion,p") , {"nfhnhj","eion","p"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("norma,l") , {"norma","l"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("normsplita,l") , {"normsplita","l"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("sspa45,67890") , {"sspa45","67890"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Nodte2021,xt") , {"Nodte2021","xt"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Nodte22021,xt") , {"Nodte22021","xt"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("Nodteand021,xt") , {"Nodteand021","xt"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("sentand,s") , {"sentand","s"}))){ tests_passed++; } total_tests++;

    if((issame(split_words("ase(defwhitespaces,ault,ntand,s") , {"ase(defwhitespaces","ault","ntand","s"}));
    assert(issame(split_words("oNodte22021,xt") , {"oNodte22021","xt"}));
    assert(issame(split_words("sspsa45,67890") , {"sspsa45","67890"}));
    assert(issame(split_words("ase(default,ntand,s") , {"ase(default","ntand","s"}));
    assert(issame(split_words("ase(defwhitespacexvparameter.1916dkazwhvuis,ault,ntand,s") , {"ase(defwhitespacexvparameter.1916dkazwhvuis","ault","ntand","s"}));
    assert(issame(split_words("spaspsos,ces,Testinaserror") , {"spaspsos","ces","Testinaserror"}));
    assert(issame(split_words("pse(default,d") , {"pse(default","d"}));
    assert(issame(split_words("hjklpteand021,xt") , {"hjklpteand021","xt"}));
    assert(issame(split_words("commas,words,andas") , {"commas","words","andas"}));
    assert(issame(split_words("pse(default,jwzfxwpfxyqkid") , {"pse(default","jwzfxwpfxyqkid"}));
    assert(issame(split_words("oNodte2split2021,xt") , {"oNodte2split2021","xt"}));
    assert(issame(split_words("spaces,A") , {"spaces","A"}));
    assert(issame(split_words("thisd,should") , {"thisd","should"}));
    assert(issame(split_words("thisd,s,hould") , {"thisd","s","hould"}));
    assert(issame(split_words("rerrism,r") , {"rerrism","r"}));
    assert(issame(split_words("sspsa45,467890") , {"sspsa45","467890"}));
    assert(issame(split_words("a,Python") , {"a","Python"}));
    assert(issame(split_words("seand,s") , {"seand","s"}));
    assert(issame(split_words("sentan,ssentand,s") , {"sentan","ssentand","s"}));
    assert(issame(split_words("a,Pythhandlingon") , {"a","Pythhandlingon"}));
    assert(issame(split_words("spaspseos,ces,Testinaserror") , {"spaspseos","ces","Testinaserror"}));
    assert(issame(split_words("ase(defwhitespaces,eault,ntand,s") , {"ase(defwhitespaces","eault","ntand","s"}));
    assert(issame(split_words("sspsa45,4667890") , {"sspsa45","4667890"}));
    assert(issame(split_words("dz.olhjcymqpz,wnfx;lz.iwrohveybkgts.feaasfbyb,se") , {"dz.olhjcymqpz","wnfx;lz.iwrohveybkgts.feaasfbyb","se"}));
    assert(issame(split_words("ase(default,ntadnd,s") , {"ase(default","ntadnd","s"}));
    assert(issame(split_words("2021,pneumono") , {"2021","pneumono"}));
    assert(issame(split_words("xdkkaism,zwhui") , {"xdkkaism","zwhui"}));
    assert(issame(split_words("Nodteaand021,xt") , {"Nodteaand021","xt"}));
    assert(issame(split_words("whidz.olhjcymqpz,wnfx;lz.iwrohveybkgts.feaasfbyb,sentancommasd,sBCDEFGtespaces") , {"whidz.olhjcymqpz","wnfx;lz.iwrohveybkgts.feaasfbyb","sentancommasd","sBCDEFGtespaces"}));
    assert(issame(split_words("xdkkaism,zsupercalifragilisticexpialidociouswhui") , {"xdkkaism","zsupercalifragilisticexpialidociouswhui"}));
    assert(issame(split_words("a,likA") , {"a","likA"}));
    assert(issame(split_words("sspathis,shounormalld45,67890") , {"sspathis","shounormalld45","67890"}));
    assert(issame(split_words("hjkklpteand021,xt") , {"hjkklpteand021","xt"}));
    assert(issame(split_words("pneumonoultramicroscopABCDEFJhmlerrorGicsilicovolcanoconiosis,m,r") , {"pneumonoultramicroscopABCDEFJhmlerrorGicsilicovolcanoconiosis","m","r"}));
    assert(issame(split_words("oNodtesplit2021,xt") , {"oNodtesplit2021","xt"}));
    assert(issame(split_words("sspsa45,467s890") , {"sspsa45","467s890"}));
    assert(issame(split_words("sspathis,shttPythonounormalld45,67890") , {"sspathis","shttPythonounormalld45","67890"}));
    assert(issame(split_words("noarma,l") , {"noarma","l"}));
    assert(issame(split_words("jwzfx14miis,m,x:53x)h3ouldyqki") , {"jwzfx14miis","m","x:53x)h3ouldyqki"}));
    assert(issame(split_words("ase(efault,ntadnd,s") , {"ase(efault","ntadnd","s"}));
    assert(issame(split_words("thlettersis,should") , {"thlettersis","should"}));
    assert(issame(split_words("hjklpteand021,xt1") , {"hjklpteand021","xt1"}));
    assert(issame(split_words("haas,wo(default,rds,a1ndndlingdz.olhjcymqpz,wnfx;lz.iwrohveybkgts.feaasfbyb,se") , {"haas","wo(default","rds","a1ndndlingdz.olhjcymqpz","wnfx;lz.iwrohveybkgts.feaasfbyb","se"}));
    assert(issame(split_words("Asentan,sJhml") , {"Asentan","sJhml"}));
    assert(issame(split_words("rerrrism,r") , {"rerrrism","r"}));
    assert(issame(split_words("ss4pa45,67890") , {"ss4pa45","67890"}));
    assert(issame(split_words("3.9ase(defwhitespaces,eault,ntand,s") , {"3.9ase(defwhitespaces","eault","ntand","s"}));
    assert(issame(split_words("ssssucth4pa45,67890") , {"ssssucth4pa45","67890"}));
    assert(issame(split_words("lowccommas,aercase") , {"lowccommas","aercase"}));
    assert(issame(split_words("2021,pnepneumonoultramicroscopicsilicovolcanoconiosis,uo") , {"2021","pnepneumonoultramicroscopicsilicovolcanoconiosis","uo"}));
    assert(issame(split_words("jwzfx14miis,yqki") , {"jwzfx14miis","yqki"}));
    assert(issame(split_words("ssspsa45,467s890upertcalifragiliusticexpialidocious") , {"ssspsa45","467s890upertcalifragiliusticexpialidocious"}));
    assert(issame(split_words("pneumonoultramicroswtiwiththcopABCDEFJhmlerrorGicsilicovolcanoconiosis,m,r") , {"pneumonoultramicroswtiwiththcopABCDEFJhmlerrorGicsilicovolcanoconiosis","m","r"}));
    assert(issame(split_words("ase(defwhitespacexvparams,ault,ntand,s") , {"ase(defwhitespacexvparams","ault","ntand","s"}));
    assert(issame(split_words("Nodte2021,ase(defwhitespaces,eault,ntand,sxt") , {"Nodte2021","ase(defwhitespaces","eault","ntand","sxt"}));
    assert(issame(split_words("a,lilkA") , {"a","lilkA"}));
    assert(issame(split_words("ssspsa45,467s8and90upertcalifragiliusticexpialidocious") , {"ssspsa45","467s8and90upertcalifragiliusticexpialidocious"}));

    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
})){ tests_passed++; } total_tests++;

