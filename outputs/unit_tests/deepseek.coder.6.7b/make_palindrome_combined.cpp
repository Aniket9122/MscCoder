#include<iostream>
#include<vector>
using namespace std;

// Function to find longest palindrome suffix using KMP Algorithm
int LongestPalindromicSuffix(string str, int start) {
    int n = str.length();
    vector <int> lps(n);
    lps[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = lps[i - 1];
        while ((j > 0) && (str[i] != str[j])) j = lps[j - 1];
        if (str[i] == str[j]) j++;
        lps[i] = j;
    }
    return lps.back();
}

string make_palindrome(string str) {
    int n = str.length();
    //Find longest palindromic suffix using KMP Algorithm
    int len = LongestPalindromicSuffix(str, 0);
    
    if (len == 0){
        return str;
    } else {
      string rev_prefix=str.substr(0, len);
      reverse(rev_prefix.begin(), rev_prefix.end()); //reverse the prefix
      return str+rev_prefix.substr(n-len);  //append it to end of the original string
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

    if((make_palindrome("") == "")){ tests_passed++; } total_tests++;

    if((make_palindrome("x") == "x")){ tests_passed++; } total_tests++;

     if((make_palindrome("xyz") == "xyzyx")){ tests_passed++; } total_tests++;

     if((make_palindrome("xyx") == "xyx")){ tests_passed++; } total_tests++;

     if((make_palindrome("jerry") == "jerryrrej")){ tests_passed++; } total_tests++;

    if((make_palindrome("") == "")){ tests_passed++; } total_tests++;

    if((make_palindrome("x") == "x")){ tests_passed++; } total_tests++;

    if((make_palindrome("xyz") == "xyzyx")){ tests_passed++; } total_tests++;

    if((make_palindrome("xyx") == "xyx")){ tests_passed++; } total_tests++;

    if((make_palindrome("jerry") == "jerryrrej")){ tests_passed++; } total_tests++;

    if((make_palindrome("race") == "racecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("level") == "level")){ tests_passed++; } total_tests++;

    if((make_palindrome("tenet") == "tenet")){ tests_passed++; } total_tests++;

    if((make_palindrome("noon") == "noon")){ tests_passed++; } total_tests++;

    if((make_palindrome("redder") == "redder")){ tests_passed++; } total_tests++;

    if((make_palindrome("refer") == "refer")){ tests_passed++; } total_tests++;

    if((make_palindrome("dewed") == "dewed")){ tests_passed++; } total_tests++;

    if((make_palindrome("madam") == "madam")){ tests_passed++; } total_tests++;

    if((make_palindrome("malayalam") == "malayalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("radar") == "radar")){ tests_passed++; } total_tests++;

    if((make_palindrome("r") == "r")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrefrerace") == "rrefreracecarerferr")){ tests_passed++; } total_tests++;

    if((make_palindrome("erace") == "eracecare")){ tests_passed++; } total_tests++;

    if((make_palindrome("raracece") == "raracececarar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrrefrear") == "rrrefrearaerferrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("raceredder") == "raceredderecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("araracecae") == "araracecaeacecarara")){ tests_passed++; } total_tests++;

    if((make_palindrome("rradar") == "rradarr")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrrefreraceereddrce") == "racrrefreraceereddrcecrddereecarerferrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("levevl") == "levevlvevel")){ tests_passed++; } total_tests++;

    if((make_palindrome("lracrrefreraceereddrceevel") == "lracrrefreraceereddrceeveleveecrddereecarerferrcarl")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrefreracrefere") == "rrefreracreferefercarerferr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rardar") == "rardaradrar")){ tests_passed++; } total_tests++;

    if((make_palindrome("levevltenet") == "levevltenetlvevel")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrrefreraceeredrdrce") == "racrrefreraceeredrdrcecrdrdereecarerferrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrrefracrrefreraceereddrceaceereddrce") == "racrrefracrrefreraceereddrceaceereddrcecrddereecaecrddereecarerferrcarferrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("ararracrrefreraceeredrdrceacecae") == "ararracrrefreraceeredrdrceacecaecrdrdereecarerferrcarrara")){ tests_passed++; } total_tests++;

    if((make_palindrome("noradarolevevln") == "noradarolevevlnlveveloradaron")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrefreralevevlce") == "rrefreralevevlceclvevelarerferr")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrrefreraceereddrcerrefrerace") == "racrrefreraceereddrcerrefreracecarerferrecrddereecarerferrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("onoon") == "onoono")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrefreraracecee") == "rrefreraraceceececararerferr")){ tests_passed++; } total_tests++;

    if((make_palindrome("tene") == "tenet")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrrefddrce") == "racrrefddrcecrddferrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("dedwed") == "dedwedewded")){ tests_passed++; } total_tests++;

    if((make_palindrome("erradarrace") == "erradarracecarradarre")){ tests_passed++; } total_tests++;

    if((make_palindrome("acece") == "acececa")){ tests_passed++; } total_tests++;

    if((make_palindrome("leevel") == "leeveleveel")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrrefrracrrefracrrefreraceereddrceaceereddrceacrrefreraceereddrceaceereddrce") == "racrrefrracrrefracrrefreraceereddrceaceereddrceacrrefreraceereddrceaceereddrcecrddereecaecrddereecarerferrcaecrddereecaecrddereecarerferrcarferrcarrferrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rr") == "rr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrefreracrdewede") == "rrefreracrdewedewedrcarerferr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrrarteneacecee") == "rrrarteneaceceececaenetrarrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("malaylalam") == "malaylalamalalyalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("rarcrrefreraceereddrcerrefrerace") == "rarcrrefreraceereddrcerrefreracecarerferrecrddereecarerferrcrar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrraertracrrefracrrefreraceereddrceaceereddrceeneacededwedcee") == "rrraertracrrefracrrefreraceereddrceaceereddrceeneacededwedceecdewdedecaeneecrddereecaecrddereecarerferrcarferrcartrearrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("erradarracerradarracee") == "erradarracerradarraceecarradarrecarradarre")){ tests_passed++; } total_tests++;

    if((make_palindrome("lveevel") == "lveeveleveevl")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrefreracreerradarracefere") == "rrefreracreerradarraceferefecarradarreercarerferr")){ tests_passed++; } total_tests++;

    if((make_palindrome("lracrrefreraceereddrceeveltenet") == "lracrrefreraceereddrceeveltenetleveecrddereecarerferrcarl")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrraertracrrefraclracrrefreraceereddrceeveltenetrrefreraceereddrceaceereddrceeneacededwedcee") == "rrraertracrrefraclracrrefreraceereddrceeveltenetrrefreraceereddrceaceereddrceeneacededwedceecdewdedecaeneecrddereecaecrddereecarerferrtenetleveecrddereecarerferrcarlcarferrcartrearrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rardaar") == "rardaaraadrar")){ tests_passed++; } total_tests++;

    if((make_palindrome("erradarracerrlracrrefreraceereddrceeveladarracee") == "erradarracerrlracrrefreraceereddrceeveladarraceecarradaleveecrddereecarerferrcarlrrecarradarre")){ tests_passed++; } total_tests++;

    if((make_palindrome("levevllevevl") == "levevllevevlvevellvevel")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrerradarracerradarraceeefreracrefere") == "rrerradarracerradarraceeefreracreferefercarerfeeecarradarrecarradarrerr")){ tests_passed++; } total_tests++;

    if((make_palindrome("maadam") == "maadamadaam")){ tests_passed++; } total_tests++;

    if((make_palindrome("ded") == "ded")){ tests_passed++; } total_tests++;

    if((make_palindrome("CIB") == "CIBIC")){ tests_passed++; } total_tests++;

    if((make_palindrome("rarcrrefreraceereddrcerrrefrefrace") == "rarcrrefreraceereddrcerrrefrefracecarferferrrecrddereecarerferrcrar")){ tests_passed++; } total_tests++;

    if((make_palindrome("lvevl") == "lvevl")){ tests_passed++; } total_tests++;

    if((make_palindrome("re") == "rer")){ tests_passed++; } total_tests++;

    if((make_palindrome("lracrrefreraceedewedreddrceevel") == "lracrrefreraceedewedreddrceeveleveecrdderdewedeecarerferrcarl")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrraertracrrefraclracrrefreraceereddrceeveltenetrrefreraceereddrceaceerceddrceeneacededwedcee") == "rrraertracrrefraclracrrefreraceereddrceeveltenetrrefreraceereddrceaceerceddrceeneacededwedceecdewdedecaeneecrddecreecaecrddereecarerferrtenetleveecrddereecarerferrcarlcarferrcartrearrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrraefracrrefreraceereddrcerrraertracrrefracrrefreraceereddrceaceereddrceeneacededwedceeaceereddrce") == "racrraefracrrefreraceereddrcerrraertracrrefracrrefreraceereddrceaceereddrceeneacededwedceeaceereddrcecrddereecaeecdewdedecaeneecrddereecaecrddereecarerferrcarferrcartrearrrecrddereecarerferrcarfearrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rdewedr") == "rdewedr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrraertracrrefraclracrrefreracceereddrceeveltenetrrefreraceereddrceaceerceddrceeneacededwedcee") == "rrraertracrrefraclracrrefreracceereddrceeveltenetrrefreraceereddrceaceerceddrceeneacededwedceecdewdedecaeneecrddecreecaecrddereecarerferrtenetleveecrddereeccarerferrcarlcarferrcartrearrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("mraceredderadam") == "mraceredderadamadaredderecarm")){ tests_passed++; } total_tests++;

    if((make_palindrome("onnoon") == "onnoonno")){ tests_passed++; } total_tests++;

    if((make_palindrome("lenet") == "lenetenel")){ tests_passed++; } total_tests++;

    if((make_palindrome("lrrraertracrrefracrrefreraceereddrceaceereddrceeneacededwedceeveevel") == "lrrraertracrrefracrrefreraceereddrceaceereddrceeneacededwedceeveeveleveeveecdewdedecaeneecrddereecaecrddereecarerferrcarferrcartrearrrl")){ tests_passed++; } total_tests++;

    if((make_palindrome("racrraefracrrefreraceereddrcerrraertracrrefracerrefreraceereddrceaceereddrceeneacededwedceeaceereddrce") == "racrraefracrrefreraceereddrcerrraertracrrefracerrefreraceereddrceaceereddrceeneacededwedceeaceereddrcecrddereecaeecdewdedecaeneecrddereecaecrddereecarerferrecarferrcartrearrrecrddereecarerferrcarfearrcar")){ tests_passed++; } total_tests++;

    if((make_palindrome("malalam") == "malalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("erac") == "eracare")){ tests_passed++; } total_tests++;

    if((make_palindrome("malaararacecaelam") == "malaararacecaelamaleacecararaalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("levelevellonoon") == "levelevellonoonollevelevel")){ tests_passed++; } total_tests++;

    if((make_palindrome("acracrrefreraceeredrdrcee") == "acracrrefreraceeredrdrceecrdrdereecarerferrcarca")){ tests_passed++; } total_tests++;

    if((make_palindrome("errradarracerradarracee") == "errradarracerradarraceecarradarrecarradarrre")){ tests_passed++; } total_tests++;

    if((make_palindrome("rarcrrefreraceereddrccerrrefrefrace") == "rarcrrefreraceereddrccerrrefrefracecarferferrreccrddereecarerferrcrar")){ tests_passed++; } total_tests++;

    if((make_palindrome("malatenetlam") == "malatenetlamaltenetalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("levelevellonoonracrrefddrce") == "levelevellonoonracrrefddrcecrddferrcarnoonollevelevel")){ tests_passed++; } total_tests++;

    if((make_palindrome("malatenetlamrardaar") == "malatenetlamrardaaraadrarmaltenetalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrefreralevevlmalalamce") == "rrefreralevevlmalalamcecmalalamlvevelarerferr")){ tests_passed++; } total_tests++;

    if((make_palindrome("malalllam") == "malalllamalllalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("rraddar") == "rraddarr")){ tests_passed++; } total_tests++;

    if((make_palindrome("acracrrerardaarcee") == "acracrrerardaarceecraadrarerrcarca")){ tests_passed++; } total_tests++;

    if((make_palindrome("lracrrefrereddrceeveltenet") == "lracrrefrereddrceeveltenetleveecrddererferrcarl")){ tests_passed++; } total_tests++;

    if((make_palindrome("CCIB") == "CCIBICC")){ tests_passed++; } total_tests++;

    if((make_palindrome("racelevevlredder") == "racelevevlredderlvevelecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("redderradar") == "redderradarredder")){ tests_passed++; } total_tests++;

    if((make_palindrome("mracereddreradam") == "mracereddreradamadarerdderecarm")){ tests_passed++; } total_tests++;

    if((make_palindrome("rarcrrefreraceereddrrrefreralevevlmalalamcecerrefrerace") == "rarcrrefreraceereddrrrefreralevevlmalalamcecerrefreracecarerferrececmalalamlvevelarerferrrddereecarerferrcrar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rarcrrefreraceereddrcerlevelevellonoonracrrefddrcerrefrefrace") == "rarcrrefreraceereddrcerlevelevellonoonracrrefddrcerrefrefracecarferferrecrddferrcarnoonollevelevelrecrddereecarerferrcrar")){ tests_passed++; } total_tests++;

    if((make_palindrome("errrefrerar") == "errrefrerarerferrre")){ tests_passed++; } total_tests++;

    if((make_palindrome("malarrefreracraeerradarraceferelam") == "malarrefreracraeerradarraceferelamalerefecarradarreearcarerferralam")){ tests_passed++; } total_tests++;

    if((make_palindrome("rlevevltenetrefreracrdewede") == "rlevevltenetrefreracrdewedewedrcarerfertenetlvevelr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrraertracrrefraclracrrefreraceereddrceeveltenetrrefreraceereddrceaceereddrceeneaceredderdedwedcee") == "rrraertracrrefraclracrrefreraceereddrceeveltenetrrefreraceereddrceaceereddrceeneaceredderdedwedceecdewdedredderecaeneecrddereecaecrddereecarerferrtenetleveecrddereecarerferrcarlcarferrcartrearrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrraertracrrefraclracrrefreraceereddrceeveltenetrrerfreraceereddrceaceereddrceeneacededwedcee") == "rrraertracrrefraclracrrefreraceereddrceeveltenetrrerfreraceereddrceaceereddrceeneacededwedceecdewdedecaeneecrddereecaecrddereecarerfrerrtenetleveecrddereecarerferrcarlcarferrcartrearrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rmraceredderadamefer") == "rmraceredderadameferefemadaredderecarmr")){ tests_passed++; } total_tests++;

    if((make_palindrome("malalllnoonam") == "malalllnoonamanoonlllalam")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzazyzzz") == "zzzazyzzzyzazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecar") == "racecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovolcanoconiosis") == "pneumonoultramicroscopicsilicovolcanoconiosisoinoconaclovociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("babad") == "babadabab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abab") == "ababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("a") == "a")){ tests_passed++; } total_tests++;

    if((make_palindrome("ab") == "aba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abc") == "abcba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacaba") == "abacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaa") == "aaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("aabc") == "aabcbaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("racababecar") == "racababecaracebabacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabaccaba") == "abacabadabaccabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabzz") == "zzzabzzbazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbc") == "abbcbba")){ tests_passed++; } total_tests++;

    if((make_palindrome("m") == "m")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaacabadabacaba") == "abaacabadabacabadabacaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("baad") == "baadaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabacabaazyzzz") == "zzzabaacabadabacabaazyzzzyzaabacabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("rababecar") == "rababecaracebabar")){ tests_passed++; } total_tests++;

    if((make_palindrome("dbabad") == "dbabadababd")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabaccabaad") == "baabacabadabaccabaadaabaccabadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("P") == "P")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzabaazyzzz") == "zzabaazyzzzyzaabazz")){ tests_passed++; } total_tests++;

    if((make_palindrome("p") == "p")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaab") == "aaabaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("racabaacabadabacabaecar") == "racabaacabadabacabaecaraceabacabadabacaabacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("aapneumonoultranmicroscopicsilicovolcanoconiosis") == "aapneumonoultranmicroscopicsilicovolcanoconiosisoinoconaclovociliscipocsorcimnartluonomuenpaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("Pdbabad") == "PdbabadababdP")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacacbadabacaba") == "abacacbadabacabadabcacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababamicroscopicsilicovolcanoconiosis") == "pnababamicroscopicsilicovolcanoconiosisoinoconaclovociliscipocsorcimababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovolcanoconiosi") == "pneumonoultramicroscopicsilicovolcanoconiosisoinoconaclovociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaa") == "aaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilicovolcanoconiosis") == "pneumonoultramicroscoabacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabaccabaadaaab") == "baabacabadabaccabaadaaabaaadaabaccabadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("mp") == "mpm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabiacabadabaccababapicsilicovolcanoconiosis") == "pneumonoultramicroscoabiacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacacbadabacabababad") == "abacacbadabacabababadabababacabadabcacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabaaaabdabacca") == "abacabaaaabdabaccabadbaaaabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("racabaacabadabacababcaecar") == "racabaacabadabacababcaecaraceacbabacabadabacaabacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbac") == "bbacabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabcabaccabaadaaab") == "baabacabadabcabaccabaadaaabaaadaabaccabacbadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnevolcanoconiosi") == "pnevolcanoconiosisoinoconaclovenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("Pdbababd") == "PdbababdP")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconiosis") == "pneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mm") == "mm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosis") == "pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaad") == "abaadaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadabaccababapicsilicovolcanoconiosis") == "pneumonoacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovconiosis") == "pneumonoultramicroscopicsilicovconiosisoinocvociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababascopicsilicovolcanoconiosis") == "pnababascopicsilicovolcanoconiosisoinoconaclovociliscipocsababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abca") == "abcacba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzabaazabacacbadabacabayzzz") == "zzabaazabacacbadabacabayzzzyabacabadabcacabazaabazz")){ tests_passed++; } total_tests++;

    if((make_palindrome("raabacabaecar") == "raabacabaecaraceabacabaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaracababecarc") == "bbaracababecarcracebabacarabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmm") == "mmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbc") == "babbcbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconiosis") == "pneumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconiosisoinoconaclovodababcicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolcanoconiosis") == "mmmlicovolcanoconiosisoinoconaclovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaadd") == "abaaddaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("azzabaazyzzz") == "azzabaazyzzzyzaabazza")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababascopicsilicovolcaanoconiosis") == "pnababascopicsilicovolcaanoconiosisoinoconaaclovociliscipocsababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rababecrar") == "rababecrarcebabar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnebaabacabadabaccabaadaaabumonoultramicroscopicsilicovconiosis") == "pnebaabacabadabaccabaadaaabumonoultramicroscopicsilicovconiosisoinocvociliscipocsorcimartluonomubaaadaabaccabadabacabaabenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecar") == "rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconiosisb") == "apneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconiosisbsisoinoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ppneumonoacabadabaccababapicsilicovolcanoconiosis") == "ppneumonoacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaonomuenpp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolcanoconiosiabcas") == "mmmlicovolcanoconiosiabcasacbaisoinoconaclovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosis") == "pneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosisoinoconaclovociliscsisoinocvociliscipocsorcimartluonomuenpipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("racabbabecar") == "racabbabecaracebabbacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaa") == "aaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconniosisb") == "apneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconniosisbsisoinnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababamicrosopicsilicovolcanoconiosis") == "pnababamicrosopicsilicovolcanoconiosisoinoconaclovocilisciposorcimababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabiacaracababecarbadabaccababapicsilicovolcanoconiosiabcas") == "pneumonoultramicroscoabiacaracababecarbadabaccababapicsilicovolcanoconiosiabcasacbaisoinoconaclovociliscipababaccabadabracebabacaracaibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("d") == "d")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscopicsilicovconiosis") == "apneumonoultramicroscopicsilicovconiosisoinocvociliscipocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecar") == "rpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluocnomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpneumonoultramicroscoabioacabadabaccababapicsilicovolcanooniosis") == "mmpneumonoultramicroscoabioacabadabaccababapicsilicovolcanooniosisoinoonaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabacabammmlicovolcanoconiosiabcas") == "zzzabaacabadabacabammmlicovolcanoconiosiabcasacbaisoinoconaclovocilmmmabacabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaabab") == "aaaaababaaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacababdabazyzzz") == "zzzabaacababdabazyzzzyzabadbabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosis") == "pneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacababdababaadazyzzz") == "zzzabaacababdababaadazyzzzyzadaababadbabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbbc") == "babbbcbbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabiacaracababecarbadabaccilicovolcanoconiosiabcas") == "pneumonoultramicroscoabiacaracababecarbadabaccilicovolcanoconiosiabcasacbaisoinoconaclovociliccabadabracebabacaracaibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbcabca") == "babbcabcacbacbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababad") == "ababadababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbcabcad") == "babbcabcadacbacbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacacbadabacaaba") == "abacacbadabacaabaacabadabcacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovolcnanoconiosis") == "pneumonoultramicroscopicsilicovolcnanoconiosisoinoconanclovociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneuababadmonoultramicroscopicsilicovconiosis") == "pneuababadmonoultramicroscopicsilicovconiosisoinocvociliscipocsorcimartluonomdababauenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("dd") == "dd")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbcabpneumonoultramicroscoabiacabadabaccababapicsilicovolcanoconiosiscad") == "abbcabpneumonoultramicroscoabiacabadabaccababapicsilicovolcanoconiosiscadacsisoinoconaclovociliscipababaccabadabacaibaocsorcimartluonomuenpbacbba")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisb") == "apneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbsisoinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabca") == "baabacabcacbacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("raceacar") == "raceacaracaecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosisz") == "zzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazz")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsilibaad") == "apneumonoultramicroscoabioacabadabaccababapicsilibaadaabiliscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosis") == "pneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pppneumonoacabadabaccababapicsilicovolcanoconiosisneumonoacabadabaccababapicsilicovolcanoconiosis") == "pppneumonoacabadabaccababapicsilicovolcanoconiosisneumonoacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaonomuensisoinoconaclovociliscipababaccabadabacaonomuenppp")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbbabbbc") == "bbbabbbcbbbabbb")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpnababamicroscopicsilicovolcanoconiosisP") == "mmpnababamicroscopicsilicovolcanoconiosisPsisoinoconaclovociliscipocsorcimababanpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabracabbabecarioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosis") == "pneumonoultramicroscoabracabbabecarioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosisoinoconaclovociliscsisoinocvociliscipocsorcimartluonomuenpipababaccabadabacaoiracebabbacarbaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aa") == "aa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ppneumonoacabadabaccababapicsilicovoilcanoconiosis") == "ppneumonoacabadabaccababapicsilicovoilcanoconiosisoinoconacliovociliscipababaccabadabacaonomuenpp")){ tests_passed++; } total_tests++;

    if((make_palindrome("UBI") == "UBIBU")){ tests_passed++; } total_tests++;

    if((make_palindrome("UBIracabaacabadabacababcaecarI") == "UBIracabaacabadabacababcaecarIraceacbabacabadabacaabacarIBU")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadabaccababapicsilicovolcis") == "pneumonoacabadabaccababapicsilicovolcisiclovociliscipababaccabadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaabzzabaazyzzzab") == "aaaaabzzabaazyzzzabazzzyzaabazzbaaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("WXcKAI") == "WXcKAIAKcXW")){ tests_passed++; } total_tests++;

    if((make_palindrome("rar") == "rar")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbabad") == "bbabadababb")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosis") == "pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosisoinoconaclsisoinocvociliscipocsorcimartluonomuenpaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonaaaaoacabadabaccababapicsilicovolcis") == "pneumonaaaaoacabadabaccababapicsilicovolcisiclovociliscipababaccabadabacaoaaaanomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabaacabadabcabaccabab") == "baabaacabadabcabaccababaccabacbadabacaabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaabaccaba") == "abacabadaabaccabaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicrovolcanoconiosisnoconoiosisb") == "apneumonoultramicrovolcanoconiosisnoconoiosisbsisoionoconsisoinoconaclovorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosis") == "pneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosisoinoconaclovociliscipabazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aba") == "aba")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneunmonoultramisclibaad") == "apneunmonoultramisclibaadaabilcsimartluonomnuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("bc") == "bcb")){ tests_passed++; } total_tests++;

    if((make_palindrome("UBIzzabaazyzzz") == "UBIzzabaazyzzzyzaabazzIBU")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabaaaabdabacc") == "abacabaaaabdabaccabadbaaaabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabcas") == "zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabcasacbaisoinoconaclovocilmmmabsiclovociliscipababaccabadabacaonomuenpacabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("add") == "adda")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpnababamicroscopicsilcicovolcanoconiosisP") == "mmpnababamicroscopicsilcicovolcanoconiosisPsisoinoconaclovocicliscipocsorcimababanpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("rabaabecrar") == "rabaabecrarcebaabar")){ tests_passed++; } total_tests++;

    if((make_palindrome("racabbar") == "racabbarabbacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rapneumonoacabadabaccababapicsilicovolcisr") == "rapneumonoacabadabaccababapicsilicovolcisrsiclovociliscipababaccabadabacaonomuenpar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadabaccababapicsiliecovolcanoconiosis") == "pneumonoacabadabaccababapicsiliecovolcanoconiosisoinoconaclovoceiliscipababaccabadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrar") == "rrarr")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolcanoconiosiabcaracabbars") == "mmmlicovolcanoconiosiabcaracabbarsrabbacaracbaisoinoconaclovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibad") == "apneumonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibadabiliscipababaccabadabacaoibazzzyabacabadabcacabazaabazzocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("aracabbpneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosisabecar") == "aracabbpneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosisabecaracebasisoinoconaclovociliscsisoinocvociliscipocsorcimartluonomuenpipababaccabadabacaoibaocsorcimartluonomuenpbbacara")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaad") == "apneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadaabiliscabacabadabacabaipababaccabsisoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababilabcicovolcanoconiosisacecar") == "rpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbalibabaccabacbadabacaabaabscipababaccabadabacabaocsorcimartluocnomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("raracecarcabaacabadabacabaecar") == "raracecarcabaacabadabacabaecaraceabacabadabacaabacracecarar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsailicovolcanoconiosis") == "pneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsailicovolcanoconiosisoinoconaclovociliascsisoinocvociliscipocsorcimartluonomuenpipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovolcanoaosis") == "pneumonoultramicroscopicsilicovolcanoaosisoaonaclovociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abba") == "abba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnoeumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconiosis") == "pnoeumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconiosisoinoconaclovodababcicbaliscipababaccabadabacabaocsorcimartluonomueonp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaabababbaracababecarc") == "aaabababbaracababecarcracebabacarabbababaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("racababecaar") == "racababecaaraacebabacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanobabbcconiosisacecar") == "rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanobabbcconiosisacecaracecasisoinoccbbabonaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabcabacaab") == "baabacabadabcabacaabaacabacbadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosis") == "pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosisoinoconaclovocmicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabbabdabazyzzz") == "zzzabaacabbabdabazyzzzyzabadbabbacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlirababecrarcovolcanoconiosiabcaracabbars") == "mmmlirababecrarcovolcanoconiosiabcaracabbarsrabbacaracbaisoinoconaclovocrarcebabarilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("ammmlicovolcanoconiosiabcasb") == "ammmlicovolcanoconiosiabcasbsacbaisoinoconaclovocilmmma")){ tests_passed++; } total_tests++;

    if((make_palindrome("babba") == "babbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramiroscopicsilicovolcanoaosis") == "pneumonoultramiroscopicsilicovolcanoaosisoaonaclovociliscipocsorimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramirbadabaccababapicsilicovolcanoconiosiabcas") == "pneumonoultramirbadabaccababapicsilicovolcanoconiosiabcasacbaisoinoconaclovociliscipababaccabadabrimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaracabaabacabadabcabacbaabaacabadabcabaccababcabaadaaabbabecarc") == "bbaracabaabacabadabcabacbaabaacabadabcabaccababcabaadaaabbabecarcracebabbaaadaabacbabaccabacbadabacaabaabcabacbadabacabaabacarabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("raceacrpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecardr") == "raceacrpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecardracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenprcaecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("rababecraar") == "rababecraarcebabar")){ tests_passed++; } total_tests++;

    if((make_palindrome("canoconiosisnoconoiosisb") == "canoconiosisnoconoiosisbsisoionoconsisoinoconac")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaaabacabadabacaba") == "abaaabacabadabacabaaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpnababamicroscopicsilicovzzabaazyzzzolcanoconiosisP") == "mmpnababamicroscopicsilicovzzabaazyzzzolcanoconiosisPsisoinoconaclozzzyzaabazzvociliscipocsorcimababanpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("rabaecraar") == "rabaecraarceabar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pppneumonoacabadabaccababapicsilicovolcanoconiosisneumonoacapbadabaccababapicsilicovolcanoconiosis") == "pppneumonoacabadabaccababapicsilicovolcanoconiosisneumonoacapbadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabpacaonomuensisoinoconaclovociliscipababaccabadabacaonomuenppp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnevolcanocoabcaniobabbcabcadsi") == "pnevolcanocoabcaniobabbcabcadsisdacbacbbaboinacbaoconaclovenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaaabacaba") == "abacabadaaabacabaaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaracababebaabacabcacarc") == "bbaracababebaabacabcacarcracacbacabaabebabacarabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbcbc") == "babbcbcbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacabaabacabadabaccabaadaaabnoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacabaabacabadabaccabaadaaabnoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconbaaadaabaccabadabacabaabacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pppneumonoacabadabaccababapicsilicovolcanoconiocovolcanoconiosis") == "pppneumonoacabadabaccababapicsilicovolcanoconiocovolcanoconiosisoinoconaclovocoinoconaclovociliscipababaccabadabacaonomuenppp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaaabacabadabacaaba") == "abaaabacabadabacaabaacabadabacabaaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnev") == "pnevenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovconiois") == "pneumonoultramicroscopicsilicovconioisioinocvociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("yzzzabaacabadabacabaazyzzz") == "yzzzabaacabadabacabaazyzzzyzaabacabadabacaabazzzy")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmm") == "mmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicrpneumonoacabadabaccababapicsiliecovolcanoconiosisoscopicsilimmcovconiosis") == "apneumonoultramicrpneumonoacabadabaccababapicsiliecovolcanoconiosisoscopicsilimmcovconiosisoinocvocmmiliscipocsosisoinoconaclovoceiliscipababaccabadabacaonomuenprcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababacsisoinoconaclovociliscipabazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpcomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabaccabaadaaaab") == "baabacabadabaccabaadaaaabaaaadaabaccabadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconaaaaioabacabaaaabdabaccsis") == "pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconaaaaioabacabaaaabdabaccsisccabadbaaaabacabaoiaaaanoconaclovocmicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabaccabaadaaaaab") == "baabacabadabaccabaadaaaaabaaaaadaabaccabadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaca") == "abacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanocon") == "pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconaclovocmicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoasbacabadabaccababapicsilabcimcovolcanocon") == "pneumonoultramicroscoasbacabadabaccababapicsilabcimcovolcanoconaclovocmicbaliscipababaccabadabacabsaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpnababamicroscopicsilicovzzabzzolcanoconiosisP") == "mmpnababamicroscopicsilicovzzabzzolcanoconiosisPsisoinoconaclozzbazzvociliscipocsorcimababanpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabba") == "baabbaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosis") == "rpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosisoinoconaclsisoinocvociliscipocsorcimartluonomuenpaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpbabaccabacbadabacaabaabscipababaccabadabacabaocsorcimartluocnomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzabaazabacacbadabacabazz") == "zzabaazabacacbadabacabazzabacabadabcacabazaabazz")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaaaaaaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisb") == "apneumonoultramicroscoabioacabadabaaaaaaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbsisoinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccaaaaaabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababascopicspneumonoultramicroscopicsilicovolcanoaosisilicovolcanocoosis") == "pnababascopicspneumonoultramicroscopicsilicovolcanoaosisilicovolcanocoosisooconaclovocilisisoaonaclovociliscipocsorcimartluonomuenpscipocsababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabiacaracabazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiosiabcas") == "pneumonoultramicroscoabiacaracabazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiosiabcasacbaisoinoconaclovociliccabadabracebzsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzabacaracaibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbaa") == "abbaabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzz") == "zzzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("baacbacabadabaccabaadaaaab") == "baacbacabadabaccabaadaaaabaaaadaabaccabadabacabcaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneuapneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbmonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibad") == "apneuapneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbmonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibadabiliscipababaccabadabacaoibazzzyabacabadabcacabazaabazzocsorcimartluonombsisoinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpauenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("IuyepBB") == "IuyepBBpeyuI")){ tests_passed++; } total_tests++;

    if((make_palindrome("aapneumonoultranmicroscopicasialicovolcanoconiosis") == "aapneumonoultranmicroscopicasialicovolcanoconiosisoinoconaclovocilaisacipocsorcimnartluonomuenpaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaaabacabadabacabazzzazyzzz") == "abaaabacabadabacabazzzazyzzzyzazzzabacabadabacabaaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("amma") == "amma")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabaaccaba") == "abacabadabaaccabaccaabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabaacabadabcabacbaabbacabab") == "baabaacabadabcabacbaabbacababacabbaabcabacbadabacaabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("UBUI") == "UBUIUBU")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabammpnababamicroscopicsilicovzzabzzolcanoconiosisPbdababaadazyzzz") == "zzzabaacabammpnababamicroscopicsilicovzzabzzolcanoconiosisPbdababaadazyzzzyzadaababadbPsisoinoconaclozzbazzvociliscipocsorcimababanpmmabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabbabdabazabzyzzz") == "zzzabaacabbabdabazabzyzzzyzbazabadbabbacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabaaccacbaa") == "abacabadabaaccacbaabcaccaabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("raddar") == "raddar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoasbacabadrpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecarabaccababapicsilabcimcocanocon") == "pneumonoultramicroscoasbacabadrpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecarabaccababapicsilabcimcocanoconacocmicbaliscipababaccabaracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluocnomuenprdabacabsaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaa") == "abacaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneevolcanoconiosi") == "pneevolcanoconiosisoinoconacloveenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneuababadmonoultramicroscopicsilrababecaricovconiosis") == "pneuababadmonoultramicroscopicsilrababecaricovconiosisoinocvociracebabarliscipocsorcimartluonomdababauenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("reabaecraarbaad") == "reabaecraarbaadaabraarceabaer")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicnroscoabacabadabaccababapicsilabcicbabadovolcanoconiosis") == "pneumonoultramicnroscoabacabadabaccababapicsilabcicbabadovolcanoconiosisoinoconaclovodababcicbaliscipababaccabadabacabaocsorncimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadacbaccababapicsiliecovolcanoconiosis") == "pneumonoacabadacbaccababapicsiliecovolcanoconiosisoinoconaclovoceiliscipababaccabcadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoasbacabadabaccababapibcimcovolcanocon") == "pneumonoultramicroscoasbacabadabaccababapibcimcovolcanoconaclovocmicbipababaccabadabacabsaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsilicovolaaacanoconiosis") == "pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsilicovolaaacanoconiosisoinoconacaaalovociliscizizzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("ddbaabacabadabcabacaab") == "ddbaabacabadabcabacaabaacabacbadabacabaabdd")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaabababbaracabapneumonoultramicrpneumonoacaebadabaccababapicsiliecovolcanoconiosisoscopicsiblimmcovabaadconiosiscarc") == "aaabababbaracabapneumonoultramicrpneumonoacaebadabaccababapicsiliecovolcanoconiosisoscopicsiblimmcovabaadconiosiscarcracsisoinocdaabavocmmilbiscipocsosisoinoconaclovoceiliscipababaccabadabeacaonomuenprcimartluonomuenpabacarabbababaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnevoaapneumonoultranmicroscopicasialicovolcanoconiosiscanoconiosi") == "pnevoaapneumonoultranmicroscopicasialicovolcanoconiosiscanoconiosisoinoconacsisoinoconaclovocilaisacipocsorcimnartluonomuenpaaovenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabbadabaccabaadaaaab") == "baabacabbadabaccabaadaaaabaaaadaabaccabadabbacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolcanoconiosiabccaracabbars") == "mmmlicovolcanoconiosiabccaracabbarsrabbacaraccbaisoinoconaclovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("baadcbacabadabaccabaadaaaab") == "baadcbacabadabaccabaadaaaabaaaadaabaccabadabacabcdaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnevoaapneumonoultranmicroscopicasialicovolcanoconioosiscanoconiosi") == "pnevoaapneumonoultranmicroscopicasialicovolcanoconioosiscanoconiosisoinoconacsisooinoconaclovocilaisacipocsorcimnartluonomuenpaaovenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrababecrar") == "rrababecrarcebabarr")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaabaccaaapneumonoultranmicroscopicsilicovolcanoconiosisba") == "abacabadaabaccaaapneumonoultranmicroscopicsilicovolcanoconiosisbabsisoinoconaclovociliscipocsorcimnartluonomuenpaaaccabaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpcnababamicroscopicsilicovzzabzzolcanoconiosisP") == "mmpcnababamicroscopicsilicovzzabzzolcanoconiosisPsisoinoconaclozzbazzvociliscipocsorcimababancpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("RgxE") == "RgxExgR")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaadracababecadrd") == "abaadracababecadrdacebabacardaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacacbadabacabcababaad") == "abacacbadabacabcababaadaababacbacabadabcacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicsilabcimcovolcanocon") == "pneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicsilabcimcovolcanoconaclovocmicbaliscipababaccaaacababadabacabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipocsorcimababanpmmocsorimartluonomuenprtluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abd") == "abdba")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdar") == "rpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdaradsisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcaabacabadaaabacabaconiosis") == "pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcaabacabadaaabacabaconiosisoinocabacabaaadabacabaaclovocmicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("bababacabca") == "bababacabcacbacababab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcaabacabadbbabadaaabacabaconiosis") == "pneumonoultramicroscoabacabadabaccababapicsilabcimcovolcaabacabadbbabadaaabacabaconiosisoinocabacabaaadababbdabacabaaclovocmicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababacsisoinoconaclovocilisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenpscipabazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpcomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovoolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovoolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaaloovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicnroscoabacababadovolcanoconiosis") == "pneumonoultramicnroscoabacababadovolcanoconiosisoinoconaclovodababacabaocsorncimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pppneumonoacabadabaccababapicsilicovolcanocoiniosisneumonoacabadabaccababapicsilicovolcanoconiosis") == "pppneumonoacabadabaccababapicsilicovolcanocoiniosisneumonoacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaonomuensisoinioconaclovociliscipababaccabadabacaonomuenppp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrmmmlicovolcanoconiosiabcaracabbarsababecrar") == "rrmmmlicovolcanoconiosiabcaracabbarsababecrarcebabasrabbacaracbaisoinoconaclovocilmmmrr")){ tests_passed++; } total_tests++;

    if((make_palindrome("aapneunmonoultramisclibaaddd") == "aapneunmonoultramisclibaadddaabilcsimartluonomnuenpaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("aad") == "aadaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacaa") == "abacabadabacaacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconicosisb") == "apneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconicosisbsisocinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioaacabadabaccababapicsilicovolcanoconmiosis") == "pneumonoultramicroscoabioaacabadabaccababapicsilicovolcanoconmiosisoimnoconaclovociliscipababaccabadabacaaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabca") == "zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabcacbaisoinoconaclovocilmmmabsiclovociliscipababaccabadabacaonomuenpacabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacasbadabaccababapicsilabcicovolcanobabbcconiosisacecar") == "rpneumonoultramicroscoabacasbadabaccababapicsilabcicovolcanobabbcconiosisacecaracecasisoinoccbbabonaclovocicbaliscipababaccabadabsacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabaaccrpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecar") == "abacabadabaaccrpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluocnomuenprccaabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnn") == "pnnp")){ tests_passed++; } total_tests++;

    if((make_palindrome("canoconiosisnoconoiommmmsisb") == "canoconiosisnoconoiommmmsisbsismmmmoionoconsisoinoconac")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisacecar") == "rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisacecaracecasisoinsoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbarbabecarc") == "bbarbabecarcracebabrabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicbbaracababecarcbadabaaaaaaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisb") == "apneumonoultramicbbaracababecarcbadabaaaaaaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbsisoinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccaaaaaabadabcracebabacarabbcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("raacababecar") == "raacababecaracebabacaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramiacroscoabacabadabaccababapicsilabcimcovolcanoconiosis") == "pneumonoultramiacroscoabacabadabaccababapicsilabcimcovolcanoconiosisoinoconaclovocmicbaliscipababaccabadabacabaocsorcaimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabaaaabdazzabaazyzzzbacc") == "abacabaaaabdazzabaazyzzzbaccabzzzyzaabazzadbaaaabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("UBIzzbabaazyzzz") == "UBIzzbabaazyzzzyzaababzzIBU")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadabaccababapicsiliecovolcanoconiosais") == "pneumonoacabadabaccababapicsiliecovolcanoconiosaisiasoinoconaclovoceiliscipababaccabadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzabaazabacacbaadabacabazz") == "zzabaazabacacbaadabacabazzabacabadaabcacabazaabazz")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnpneumonoultramicroscoabacabadabaccababapicsilicovolcanoconiosisoconiosisb") == "apneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnpneumonoultramicroscoabacabadabaccababapicsilicovolcanoconiosisoconiosisbsisoinocosisoinoconaclovociliscipababaccabadabacabaocsorcimartluonomuenpnsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneuababadmonoultramicrosis") == "pneuababadmonoultramicrosisorcimartluonomdababauenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpnababamiicroscopicsilicovzzabaazyzzzolcanoconiosisP") == "mmpnababamiicroscopicsilicovzzabaazyzzzolcanoconiosisPsisoinoconaclozzzyzaabazzvociliscipocsorciimababanpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabcaccaba") == "abacabadabcaccabaccacbadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszbadabaccababapicsilabcimcovolcanoconn") == "pneumonoultrazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszbadabaccababapicsilabcimcovolcanoconnoconaclovocmicbaliscipababaccabadabzsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabcabaccabaadaaabpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosis") == "baabacabadabcabaccabaadaaabpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosisoinoconaclovociliscipabazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpbaaadaabaccabacbadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadasilicovolcanoconmiosisz") == "zzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadasilicovolcanoconmiosiszsisoimnoconaclovocilisadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazz")){ tests_passed++; } total_tests++;

    if((make_palindrome("rdracabbabecarar") == "rdracabbabecararacebabbacardr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumoncoultramicroscoabacabadabaccababapicsilabciacovolcanoconiosisacecar") == "rpneumoncoultramicroscoabacabadabaccababapicsilabciacovolcanoconiosisacecaracecasisoinoconaclovocaicbaliscipababaccabadabacabaocsorcimartluocnomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosisbacabadabacaba") == "apneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosisbacabadabacabadabacabsisoinoconaclovocmicbaliscipababaccabadabacabaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaczcababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabaddpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconpneumonopneumonoacabadabaccababapicsilicovolcisultramicroscoabioacabadabaccababapicsilicovolcanoconiosisiosis") == "pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaczcababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabaddpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconpneumonopneumonoacabadabaccababapicsilicovolcisultramicroscoabioacabadabaccababapicsilicovolcanoconiosisiosisoisisoinoconaclovociliscipababaccabadabacaoibaocsorcimartlusiclovociliscipababaccabadabacaonomuenponomuenpnoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababacsisoinoconaclovocilisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpddabacabaocsorcimartluonomuenpscipabazsisoimnoconaclovociliscipababaczcabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpcomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("ddbaabacabadabcabacaaab") == "ddbaabacabadabcabacaaabaaacabacbadabacabaabdd")){ tests_passed++; } total_tests++;

    if((make_palindrome("aceacar") == "aceacaracaeca")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacaaabacabadaaabacaba") == "abacabadabacaaabacabadaaabacabaaadabacabaaacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicsilabcimcovolcaanocon") == "pneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicsilabcimcovolcaanoconaaclovocmicbaliscipababaccaaacababadabacabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipocsorcimababanpmmocsorimartluonomuenprtluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzaraddarabazabzyzzz") == "zzzaraddarabazabzyzzzyzbazabaraddarazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbacacbadabacabcababaad") == "abbacacbadabacabcababaadaababacbacabadabcacabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconniabaacabadabacabaosisb") == "apneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconniabaacabadabacabaosisbsisoabacabadabacaabainnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaaabaaaaaabzzabaazyzzzabcaba") == "abacabadaaabaaaaaabzzabaazyzzzabcabacbazzzyzaabazzbaaaaaabaaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcimcabdovolcanoconiosis") == "pneumonoultramicroscoabacabadabaccababapicsilabcimcabdovolcanoconiosisoinoconaclovodbacmicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccababapicsilabcimcovolcaanocon") == "pneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccababapicsilabcimcovolcaanoconaaclovocmicbaliscipababaccaaacababadabacabdacbacbbabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipocsorcimababanpmmocsorimartluonomuenprtluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolrpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisacecarcanoconiosis") == "mmmlicovolrpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisacecarcanoconiosisoinoconacracecasisoinsoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenprlovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnnn") == "pnnnp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabracabbabecarioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoco") == "pneumonoultramicroscoabracabbabecarioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconaclovociliscsisoinocvociliscipocsorcimartluonomuenpipababaccabadabacaoiracebabbacarbaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrpneumonoultramiroscommpnababamracabaacabadabacabaecaricpnababascopicspneumonoultramicroscopicsilicovolcanoaosisilicovolcanocoosisroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicovolcaanocon") == "pneumonoultrpneumonoultramiroscommpnababamracabaacabadabacabaecaricpnababascopicspneumonoultramicroscopicsilicovolcanoaosisilicovolcanocoosisroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicovolcaanoconaaclovocipababaccaaacababadabacabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipocsorsisooconaclovocilisisoaonaclovociliscipocsorcimartluonomuenpscipocsababanpciraceabacabadabacaabacarmababanpmmocsorimartluonomuenprtluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcissiabcas") == "zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcissiabcasacbaissiclovociliscipababaccabadabacaonomuenpacabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaabbadd") == "abaabbaddabbaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisd") == "abaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisdsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneunmonoultramismclibaad") == "apneunmonoultramismclibaadaabilcmsimartluonomnuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabbaad") == "baabacabbaadaabbacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("IuyepB") == "IuyepBpeyuI")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbabaabcad") == "bbabaabcadacbaababb")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmmm") == "mmmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabibabecarbadabaccababapicsilicovolcanoconiosiabcas") == "pneumonoultramicroscoabibabecarbadabaccababapicsilicovolcanoconiosiabcasacbaisoinoconaclovociliscipababaccabadabracebabibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonaaaaoacabadabaccababapicsilicobvolcis") == "pneumonaaaaoacabadabaccababapicsilicobvolcisiclovbociliscipababaccabadabacaoaaaanomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpnababamicroscsilicovolcanoconiosisP") == "mmpnababamicroscsilicovolcanoconiosisPsisoinoconaclovociliscsorcimababanpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaabab") == "aaaababaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("Pdbabzzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiaaaabababcad") == "PdbabzzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiaaaabababcadacbababaaaaisoinoconaclovocilmmmabsiclovociliscipababaccabadabacaonomuenpacabadabacaabazzzbabdP")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabracabbabecarioacabadabaccaabacacbadabacaababoabapipneumonoultramicroscopicsilicovconiosiscsilicovolcansoco") == "pneumonoultramicroscoabracabbabecarioacabadabaccaabacacbadabacaababoabapipneumonoultramicroscopicsilicovconiosiscsilicovolcansocosnaclovociliscsisoinocvociliscipocsorcimartluonomuenpipabaobabaacabadabcacabaaccabadabacaoiracebabbacarbaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapicsiosisb") == "apneumonoultramicroscoabioacabadabaccababapicsiosisbsisoiscipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolcanocpneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanocononpnevolcanoconiosiiosiabcaracabbars") == "mmmlicovolcanocpneumonoultramicroscoabacabadabaccababapicsilabcimcovolcanocononpnevolcanoconiosiiosiabcaracabbarsrabbacaracbaisoiisoinoconaclovenpnonoconaclovocmicbaliscipababaccabadabacabaocsorcimartluonomuenpconaclovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpcnababamiicroscopicsilicovzzabzzolcanoconiosisP") == "mmpcnababamiicroscopicsilicovzzabzzolcanoconiosisPsisoinoconaclozzbazzvociliscipocsorciimababancpmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabaacababacacbadabacabcababaadadabcabacbaabbacabab") == "baabaacababacacbadabacabcababaadadabcabacbaabbacababacabbaabcabacbadadaababacbacabadabcacababacaabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabzzz") == "zzzabzzzbazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabioacabadabaccababapicsilpneumonoulbtramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdar") == "rpneumonoultramicroscoabioacabadabaccababapicsilpneumonoulbtramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdaradsisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartbluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbacacbadabacabpnevoaapneumonoultranmicroscopicasialicovolcanoconioosiscanoconiosicababbbabaabcadaad") == "abbacacbadabacabpnevoaapneumonoultranmicroscopicasialicovolcanoconioosiscanoconiosicababbbabaabcadaadacbaababbbabacisoinoconacsisooinoconaclovocilaisacipocsorcimnartluonomuenpaaovenpbacabadabcacabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioaacabadabaccababapicsilbicovolcanoconmiosis") == "pneumonoultramicroscoabioaacabadabaccababapicsilbicovolcanoconmiosisoimnoconaclovocibliscipababaccabadabacaaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabbabdabazabzzzz") == "zzzabaacabbabdabazabzzzzbazabadbabbacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("pppneumonoacabadabaccababapicsilicovolcanoconiosisneccababapicsilicovolcanoconiosis") == "pppneumonoacabadabaccababapicsilicovolcanoconiosisneccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccensisoinoconaclovociliscipababaccabadabacaonomuenppp")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaccababapimcsilicovolcapnababamicroscopicsilicovolcanocbabadoniosisnoconiosisb") == "apneumonoultramicroscoabioacabadabaccababapimcsilicovolcapnababamicroscopicsilicovolcanocbabadoniosisnoconiosisbsisoinoconsisoinodababconaclovociliscipocsorcimababanpaclovociliscmipababaccabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("racarpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosisbbar") == "racarpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosisbbarabbsisoinoconaclsisoinocvociliscipocsorcimartluonomuenpaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpbabaccabacbadabacaabaabscipababaccabadabacabaocsorcimartluocnomuenpracar")){ tests_passed++; } total_tests++;

    if((make_palindrome("yzzzabaacabadabacaybaazyzzz") == "yzzzabaacabadabacaybaazyzzzyzaabyacabadabacaabazzzy")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaabzzaabaazyzzzaab") == "aaaaabzzaabaazyzzzaabaazzzyzaabaazzbaaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrosoconmiosis") == "pneumonoultramicrosoconmiosisoimnocosorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscozzabaazabacacbadabacabayzzzabioaacabadabaccababapicsilibad") == "apneumonoultramicroscozzabaazabacacbadabacabayzzzabioaacabadabaccababapicsilibadabiliscipababaccabadabacaaoibazzzyabacabadabcacabazaabazzocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrapneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadoscopicsilicovolcanoconiosi") == "pneumonoultramicrapneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadoscopicsilicovolcanoconiosisoinoconaclovociliscipocsodaabiliscabacabadabacabaipababaccabsisoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomuenparcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrosconiosis") == "pneumonoultramicrosconiosisoinocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abammpnaaaaababamicroscsilicovolcanoconiosisP") == "abammpnaaaaababamicroscsilicovolcanoconiosisPsisoinoconaclovociliscsorcimababaaaaanpmmaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("mpp") == "mppm")){ tests_passed++; } total_tests++;

    if((make_palindrome("aabaad") == "aabaadaabaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultraddarosi") == "pneumonoultraddarosisoraddartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrosilabcimcovolcanoconaaaaioabacabaaaabdabaccsis") == "pneumonoultramicrosilabcimcovolcanoconaaaaioabacabaaaabdabaccsisccabadbaaaabacabaoiaaaanoconaclovocmicbalisorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneuapneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbmonoulpneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosistramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibad") == "apneuapneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbmonoulpneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosistramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibadabiliscipababaccabadabacaoibazzzyabacabadabcacabazaabazzocsorcimartsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenpluonombsisoinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpauenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszbadabaccababapicsilabcimacovolcanoconn") == "pneumonoultrazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszbadabaccababapicsilabcimacovolcanoconnoconaclovocamicbaliscipababaccabadabzsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrpneumonoultramiroscommpnababamicroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccababapicsilabcimcovolcaanocon") == "pneumonoultrpneumonoultramiroscommpnababamicroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccababapicsilabcimcovolcaanoconaaclovocmicbaliscipababaccaaacababadabacabdacbacbbabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipaocsorcimababanpmmocsorimartluonomuenprtluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaazzzabzaacabbabdabazabzyzzza") == "aaazzzabzaacabbabdabazabzyzzzazzzyzbazabadbabbacaazbazzzaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abpneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicsilabcimcovolcaanoconabbadd") == "abpneumonoultrpneumonoultramiroscommpnababamicroscopicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoabacabadababacaaaccababapicsilabcimcovolcaanoconabbaddabbanoconaaclovocmicbaliscipababaccaaacababadabacabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipocsorcimababanpmmocsorimartluonomuenprtluonomuenpba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababapneumonoultramiroscopicsilicovolcanoaosisosis") == "pnababapneumonoultramiroscopicsilicovolcanoaosisosisoaonaclovociliscipocsorimartluonomuenpababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnzzzabaacabadabacabammmlicovolcanoconiosiabcasoeumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconiosis") == "pnzzzabaacabadabacabammmlicovolcanoconiosiabcasoeumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconiosisoinoconaclovodababcicbaliscipababaccabadabacabaocsorcimartluonomueosacbaisoinoconaclovocilmmmabacabadabacaabazzznp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisaceccar") == "rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisaceccaraccecasisoinsoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pppneumonoacabadabaccababapicsilicovolcanoconiosisneumonoacapbadabaccababapicsilicovolcanocs") == "pppneumonoacabadabaccababapicsilicovolcanoconiosisneumonoacapbadabaccababapicsilicovolcanocsconaclovociliscipababaccabadabpacaonomuensisoinoconaclovociliscipababaccabadabacaonomuenppp")){ tests_passed++; } total_tests++;

    if((make_palindrome("raaacababecar") == "raaacababecaracebabacaaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbbrpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarc") == "babbbrpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarcradsisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenprbbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("raacaebabecar") == "raacaebabecaracebabeacaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaabacaba") == "abacabadaabacabaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlirababecrarcovolcainoconiosiabcaracabbars") == "mmmlirababecrarcovolcainoconiosiabcaracabbarsrabbacaracbaisoinoconiaclovocrarcebabarilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoupneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisltramiacroscoabacabadabaccababapicsilabcimcovolcanoconiosis") == "pneumonoupneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisltramiacroscoabacabadabaccababapicsilabcimcovolcanoconiosisoinoconaclovocmicbaliscipababaccabadabacabaocsorcaimartlsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababacsisoinoconaclovocilisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenpscipabazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpcomuenpdabacabaocsorcimartluonomuenpuonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("gPHBVvlHnc") == "gPHBVvlHncnHlvVBHPg")){ tests_passed++; } total_tests++;

    if((make_palindrome("rababaecrmmmmmaar") == "rababaecrmmmmmaaraammmmmrceababar")){ tests_passed++; } total_tests++;

    if((make_palindrome("ammmlicovolcanoconiosiabcaracabbarscca") == "ammmlicovolcanoconiosiabcaracabbarsccaccsrabbacaracbaisoinoconaclovocilmmma")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaracababebaabacabcaca") == "bbaracababebaabacabcacacbacabaabebabacarabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadabaccababapicsiliscovolcis") == "pneumonoacabadabaccababapicsiliscovolcisiclovocsiliscipababaccabadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pabca") == "pabcacbap")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsiliconoconiosis") == "pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsiliconoconiosisoinoconociliscizizzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconioabacabadaaabacabasis") == "pneumonoultramicroscoabacabadabaccababapicsilabcicbabadovolcanoconioabacabadaaabacabasisabacabaaadabacabaoinoconaclovodababcicbaliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapicsilcanoconmiosis") == "pneumonoultramicroscoabioacabadabaccababapicsilcanoconmiosisoimnoconacliscipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadasilicovolcanoconmiosiszd") == "abzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadasilicovolcanoconmiosiszdzsisoimnoconaclovocilisadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzba")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecar") == "rpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecaracecasisoinoconaclovocicbcalibabaccabacbadabacaabsaabscipababaccabadabacabaocsorcimartluocnomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnevamma") == "pnevammavenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabaccabammmlicovolcanoconiosiabcas") == "zzzabaacabadabaccabammmlicovolcanoconiosiabcasacbaisoinoconaclovocilmmmabaccabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovoloconiosis") == "mmmlicovoloconiosisoinocolovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccabbapicsilicovolcanoconiosis") == "pneumonoultramicroscoabacabadabaccabbapicsilicovolcanoconiosisoinoconaclovociliscipabbaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonouddbaabacabadabcabacaaabltramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecar") == "rpneumonouddbaabacabadabcabacaaabltramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartlbaaacabacbadabacabaabdduonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzazyzzzz") == "zzzazyzzzzyzazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadaapneumonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibadbacabaazyzzz") == "zzzabaacabadaapneumonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabaccababapicsilibadbacabaazyzzzyzaabacabdabiliscipababaccabadabacaoibazzzyabacabadabcacabazaabazzocsorcimartluonomuenpaadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abadabacaba") == "abadabacabadaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("VNPgo") == "VNPgogPNV")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecarroscoabiacaracabazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapiocsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiosiabcas") == "pneumonoultramicrpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecarroscoabiacaracabazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapiocsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiosiabcasacbaisoinoconaclovociliccabadabracebzsisoimnoconaclovociliscoipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzabacaracaibaocsorracecasisoinoconaclovocicbcalibabaccabacbadabacaabsaabscipababaccabadabacabaocsorcimartluocnomuenprcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacacbadabd") == "abacacbadabdbadabcacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("racarpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisdabpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosisbbar") == "racarpneumoncoultramicroscoabacabadabaccababapicsbaabaacabadabcabaccababaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisdabpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaapneumonoultramicroscopicsilicovconiosislcanoconiosisbbarabbsisoinoconaclsisoinocvociliscipocsorcimartluonomuenpaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpbadsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpaababaccabacbadabacaabaabscipababaccabadabacabaocsorcimartluocnomuenpracar")){ tests_passed++; } total_tests++;

    if((make_palindrome("bunqzNWMJ") == "bunqzNWMJMWNzqnub")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramirbabbbcbadabaccababapicsilicoivolcanoconiosiabcas") == "pneumonoultramirbabbbcbadabaccababapicsilicoivolcanoconiosiabcasacbaisoinoconacloviociliscipababaccabadabcbbbabrimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolrpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisacebaadcbacabadabaccabaadaaaabcarcanoconiosis") == "mmmlicovolrpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosniosisacebaadcbacabadabaccabaadaaaabcarcanoconiosisoinoconacracbaaaadaabaccabadabacabcdaabecasisoinsoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenprlovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("poniosis") == "poniosisoinop")){ tests_passed++; } total_tests++;

    if((make_palindrome("aazzzazyzzzzad") == "aazzzazyzzzzadazzzzyzazzzaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapicsilpneumonoultrneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanocsisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosis") == "pneumonoultramicroscoabioacabadabaccababapicsilpneumonoultrneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanocsisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenrtluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pmpp") == "pmppmp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabacaba") == "abacabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecarroscoabiacaracabazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapiocsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiorarsiabcas") == "pneumonoultramicrpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecarroscoabiacaracabazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapiocsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiorarsiabcasacbaisraroinoconaclovociliccabadabracebzsisoimnoconaclovociliscoipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzabacaracaibaocsorracecasisoinoconaclovocicbcalibabaccabacbadabacaabsaabscipababaccabadabacabaocsorcimartluocnomuenprcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaba") == "aabaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbbrpneumonoultrasmicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarc") == "babbbrpneumonoultrasmicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarcradsisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimsartluonomuenprbbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbcabpneumonoultramicroscoabiacabadabaccababapicsilicpneumonoultramicroscoabiacaracababecarbadabaccababapicsilicovolcanoconiosiabcasovolcanoconiosiscad") == "abbcabpneumonoultramicroscoabiacabadabaccababapicsilicpneumonoultramicroscoabiacaracababecarbadabaccababapicsilicovolcanoconiosiabcasovolcanoconiosiscadacsisoinoconaclovosacbaisoinoconaclovociliscipababaccabadabracebabacaracaibaocsorcimartluonomuenpciliscipababaccabadabacaibaocsorcimartluonomuenpbacbba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramabacabadaabaccaaapneumonoultranmicroscopicsilicovolcanoconiosisbaicroscopicsilicovolcanoconiosis") == "pneumonoultramabacabadaabaccaaapneumonoultranmicroscopicsilicovolcanoconiosisbaicroscopicsilicovolcanoconiosisoinoconaclovociliscipocsorciabsisoinoconaclovociliscipocsorcimnartluonomuenpaaaccabaadabacabamartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrpneumonoultramiroscommpnababamicroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccsababapicsilabcimcovolcaanocon") == "pneumonoultrpneumonoultramiroscommpnababamicroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccsababapicsilabcimcovolcaanoconaaclovocmicbaliscipababasccaaacababadabacabdacbacbbabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipaocsorcimababanpmmocsorimartluonomuenprtluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoacabadabacabaazyzzzicsilicovolcvolcanoconmiosisdar") == "rpneumonoultramicroscoacabadabacabaazyzzzicsilicovolcvolcanoconmiosisdaradsisoimnoconaclovclovociliscizzzyzaabacabadabacaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("apnracababecaareumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaad") == "apnracababecaareumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadaabiliscabacabadabacabaipababaccabsisoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomueraacebabacarnpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramiroscopipneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosiscsilicovolcanoaosis") == "pneumonoultramiroscopipneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosiscsilicovolcanoaosisoaonaclovociliscsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpipocsorimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("bunqzNWMJJ") == "bunqzNWMJJMWNzqnub")){ tests_passed++; } total_tests++;

    if((make_palindrome("racabar") == "racabarabacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("ppneuzzzabzzzcababapicsilicovolcanoconiosis") == "ppneuzzzabzzzcababapicsilicovolcanoconiosisoinoconaclovociliscipababaczzzbazzzuenpp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbacacbadabacabpnevoaapneumonoultranmicroscopicasialivcovolcanoconioosiscanoconiosicababbbabaabcadaad") == "abbacacbadabacabpnevoaapneumonoultranmicroscopicasialivcovolcanoconioosiscanoconiosicababbbabaabcadaadacbaababbbabacisoinoconacsisooinoconaclovocvilaisacipocsorcimnartluonomuenpaaovenpbacabadabcacabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconabacaiosiscsailicovolcanoconiosis") == "pneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconabacaiosiscsailicovolcanoconiosisoinoconaclovociliascsisoiacabanocvociliscipocsorcimartluonomuenpipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pvamma") == "pvammavp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnnmmmlirababecrarcovolcanoconiosiabcaracabbars") == "pnnmmmlirababecrarcovolcanoconiosiabcaracabbarsrabbacaracbaisoinoconaclovocrarcebabarilmmmnnp")){ tests_passed++; } total_tests++;

    if((make_palindrome("IpBB") == "IpBBpI")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsilciconoconiosis") == "pneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsilciconoconiosisoinoconocicliscizizzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoacabadabacabaazyzzzicsilicovolcvzzzabaacabadabacapneumonoacabadabaccababapicsilicovolcissiabcasolcanoconmiosisdar") == "rpneumonoultramicroscoacabadabacabaazyzzzicsilicovolcvzzzabaacabadabacapneumonoacabadabaccababapicsilicovolcissiabcasolcanoconmiosisdaradsisoimnoconaclosacbaissiclovociliscipababaccabadabacaonomuenpacabadabacaabazzzvclovociliscizzzyzaabacabadabacaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacaobadabaccabzzabaappneumonoacabadabaccababapicsilicovolcanoconiosiszabacacbadabacabayzpneumonoultramicroscoaabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosis") == "pneumonoacaobadabaccabzzabaappneumonoacabadabaccababapicsilicovolcanoconiosiszabacacbadabacabayzpneumonoultramicroscoaabioacabadabaccababapicsilicovolcanoconmiosiszabapicsilicovolcanoconiosisoinoconaclovociliscipabazsisoimnoconaclovociliscipababaccabadabacaoibaaocsorcimartluonomuenpzyabacabadabcacabazsisoinoconaclovociliscipababaccabadabacaonomuenppaabazzbaccabadaboacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzabaacabadbdababaadazyzzzapneumonoultramicroscopicsilicovconiosis") == "zzzzabaacabadbdababaadazyzzzapneumonoultramicroscopicsilicovconiosisoinocvociliscipocsorcimartluonomuenpazzzyzadaababadbdabacaabazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacadbadabaccababapicsiliscovolcis") == "pneumonoacadbadabaccababapicsiliscovolcisiclovocsiliscipababaccabadabdacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramiczyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconpneumonopneumonoacabadabaccababapicsilicovolcisultramicroscoabioacabadabaccababapicsilicovolcanoconiosisiosis") == "pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramiczyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconpneumonopneumonoacabadabaccababapicsilicovolcisultramicroscoabioacabadabaccababapicsilicovolcanoconiosisiosisoisisoinoconaclovociliscipababaccabadabacaoibaocsorcimartlusiclovociliscipababaccabadabacaonomuenponomuenpnoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpcomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultrapnevoaapneumonoultranmicroscopicasialicovolcanoconioosiscanoconiosimicbbaracababecarcbadabaaaaaaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisb") == "apneumonoultrapnevoaapneumonoultranmicroscopicasialicovolcanoconioosiscanoconiosimicbbaracababecarcbadabaaaaaaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconiosisbsisoinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccaaaaaabadabcracebabacarabbcimisoinoconacsisooinoconaclovocilaisacipocsorcimnartluonomuenpaaovenpartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zbgPHBVvlHnczNWMJzzabaacabbabdabazabzyzz") == "zbgPHBVvlHnczNWMJzzabaacabbabdabazabzyzzyzbazabadbabbacaabazzJMWNzcnHlvVBHPgbz")){ tests_passed++; } total_tests++;

    if((make_palindrome("RgxEE") == "RgxEExgR")){ tests_passed++; } total_tests++;

    if((make_palindrome("raaacababecammmlicovolcanoconiosiabcaracabbarsr") == "raaacababecammmlicovolcanoconiosiabcaracabbarsrabbacaracbaisoinoconaclovocilmmmacebabacaaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbcaa") == "babbcaacbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioaocabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconicosisb") == "apneumonoultramicroscoabioaocabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconicosisbsisocinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccabadabacoaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabaabacabbadabaccabaadaaaab") == "abacabaabacabbadabaccabaadaaaabaaaadaabaccabadabbacabaabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscbabbcoabacabadabaccababapicsilabcicbabadovolcanoconiosis") == "pneumonoultramicroscbabbcoabacabadabaccababapicsilabcicbabadovolcanoconiosisoinoconaclovodababcicbaliscipababaccabadabacabaocbbabcsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabacabammmlicovolcanoconiosiabcacs") == "zzzabaacabadabacabammmlicovolcanoconiosiabcacscacbaisoinoconaclovocilmmmabacabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosiccababapiabacabadabacabacsilibaad") == "apneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosiccababapiabacabadabacabacsilibaadaabiliscabacabadabacabaipababaccisoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnrrababecrarlcanoconiosi") == "pnrrababecrarlcanoconiosisoinoconaclrarcebabarrnp")){ tests_passed++; } total_tests++;

    if((make_palindrome("racabbpneumonoultramicroscopicsilicovolcnanoconiosisabecar") == "racabbpneumonoultramicroscopicsilicovolcnanoconiosisabecaracebasisoinoconanclovociliscipocsorcimartluonomuenpbbacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("am") == "ama")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabaammadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisd") == "abaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabaammadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisdsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadammaabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababascopicsapneumonoultramicroscoabioacabadabaccababapicsiosisbilicovolcanoconiosis") == "pnababascopicsapneumonoultramicroscoabioacabadabaccababapicsiosisbilicovolcanoconiosisoinoconaclovocilibsisoiscipababaccabadabacaoibaocsorcimartluonomuenpascipocsababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("azzaazypneumonoultramicroscoabracabbabecarioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosiszzz") == "azzaazypneumonoultramicroscoabracabbabecarioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosiszzzsisoinoconaclovociliscsisoinocvociliscipocsorcimartluonomuenpipababaccabadabacaoiracebabbacarbaocsorcimartluonomuenpyzaazza")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosnisaceccar") == "rpneumonoultramicroscoabacabadabaccababapicsilabcicovolcanocosnisaceccaraccecasinsoconaclovocicbaliscipababaccabadabacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisd") == "abaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisdsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumapneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosisbacabadabacaba") == "apneumapneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosisbacabadabacabadabacabsisoinoconaclovocmicbaliscipababaccabadabacabaocsorcimartluonodaabiliscabacabadabacabaipababaccabsisoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomuenpamuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaaabacab") == "abacabadaaabacabaaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabaacabadabpabcacabaccabab") == "baabaacabadabpabcacabaccababaccabacacbapbadabacaabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabaccabzzzabzzaadaaaaab") == "baabacabadabaccabzzzabzzaadaaaaabaaaaadaazzbazzzbaccabadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("baacbcacabammmlicovolcanoconiosisdabaccabaadaaaab") == "baacbcacabammmlicovolcanoconiosisdabaccabaadaaaabaaaadaabaccabadsisoinoconaclovocilmmmabacacbcaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pabacabaaaabdazzabaazyzzzbaccnevammapneumonoultramicroscopicpneumonoultrpneumonoultramiroscommpnababamicroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccababapicsilabcimcovolcaanocon") == "pabacabaaaabdazzabaazyzzzbaccnevammapneumonoultramicroscopicpneumonoultrpneumonoultramiroscommpnababamicroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccababapicsilabcimcovolcaanoconaaclovocmicbaliscipababaccaaacababadabacabdacbacbbabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipaocsorcimababanpmmocsorimartluonomuenprtluonomuenpcipocsorcimartluonomuenpammavenccabzzzyzaabazzadbaaaabacabap")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbbrpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicrosbccoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarc") == "babbbrpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicrosbccoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarcradsisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaoccbsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenprbbbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadabaccababapicsilicovolcanoconiosisbbarbabrc") == "pneumonoultramicroscoabacabadabaccababapicsilicovolcanoconiosisbbarbabrcrbabrabbsisoinoconaclovociliscipababaccabadabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aabcpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosis") == "aabcpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpcbaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabacbababacaapneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconicosisbbcacababapicsilibad") == "apneumonoultramicroscozzabaazabacacbadabacabayzzzabioacabadabacbababacaapneumonoultramicroscoabioacabadabaccababapicsilicovolcapnababamicroscopicsilicovolcanoconiosisnoconicosisbbcacababapicsilibadabiliscipababacacbbsisocinoconsisoinoconaclovociliscipocsorcimababanpaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpaacabababcabadabacaoibazzzyabacabadabcacabazaabazzocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("azzabaaazyzzz") == "azzabaaazyzzzyzaaabazza")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovlolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovlolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababacsisoinoconaclovocilisisoinoconaclolvocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenpscipabazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpcomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmliolcanoconiosiabca") == "zzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmliolcanoconiosiabcacbaisoinoconacloilmmmabsiclovociliscipababaccabadabacaonomuenpacabadabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("pabaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapbicsilabcicovolcanoconiosisdnnn") == "pabaapneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapbicsilabcicovolcanoconiosisdnnndsisoinoconaclovocicbaliscibpababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpaabap")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadabaccababapicsiliecovolzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadasilicovolcanoconmiosiszcanoconiosis") == "pneumonoacabadabaccababapicsiliecovolzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadasilicovolcanoconmiosiszcanoconiosisoinoconaczsisoimnoconaclovocilisadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzlovoceiliscipababaccabadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pmppp") == "pmpppmp")){ tests_passed++; } total_tests++;

    if((make_palindrome("UBBBI") == "UBBBIBBBU")){ tests_passed++; } total_tests++;

    if((make_palindrome("raracUBUIecarcabaacabadabacabaecar") == "raracUBUIecarcabaacabadabacabaecaraceabacabadabacaabacraceIUBUcarar")){ tests_passed++; } total_tests++;

    if((make_palindrome("cpbabbc") == "cpbabbcbbabpc")){ tests_passed++; } total_tests++;

    if((make_palindrome("rnpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecar") == "rnpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluocnomuenpnr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pbpneumonoacabadabaccababapicsilicovolcanoconiosis") == "pbpneumonoacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaonomuenpbp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecarroscoabiacaracabazzabaazabacacbaddabacabayzpneumonoultramicroscoabioacabadabaccababapiocsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiosiabcas") == "pneumonoultramicrpneumoncoultramicroscoabacabadabaccababapicsbaasbaacabadabcabaccababilacbcicovolcanoconiosisacecarroscoabiacaracabazzabaazabacacbaddabacabayzpneumonoultramicroscoabioacabadabaccababapiocsilicovolcanoconmiosiszbecarbadabaccilicovolcanoconiosiabcasacbaisoinoconaclovociliccabadabracebzsisoimnoconaclovociliscoipababaccabadabacaoibaocsorcimartluonomuenpzyabacabaddabcacabazaabazzabacaracaibaocsorracecasisoinoconaclovocicbcalibabaccabacbadabacaabsaabscipababaccabadabacabaocsorcimartluocnomuenprcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aUBIzzbabaazyzzzbacacbadabacabcababaad") == "aUBIzzbabaazyzzzbacacbadabacabcababaadaababacbacabadabcacabzzzyzaababzzIBUa")){ tests_passed++; } total_tests++;

    if((make_palindrome("aapneumonoultranmicpneumonoultramicroscopicsilicovolcanoconiosiroscopconiosis") == "aapneumonoultranmicpneumonoultramicroscopicsilicovolcanoconiosiroscopconiosisoinocpocsorisoinoconaclovociliscipocsorcimartluonomuenpcimnartluonomuenpaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultrpneumonoultramiroscommpnababamicbbaracababecarcroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccsababapicsilabcimcovolcaanocon") == "pneumonoultrpneumonoultramiroscommpnababamicbbaracababecarcroscoapicsilicovolcanoconiosisPpicsilicovolcanoaosisamicroscoababbcabcadbacabadababacaaaccsababapicsilabcimcovolcaanoconaaclovocmicbaliscipababasccaaacababadabacabdacbacbbabaocsorcimasisoaonaclovociliscipPsisoinoconaclovociliscipaocsorcracebabacarabbcimababanpmmocsorimartluonomuenprtluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("racababecaazzabaazabacacbadabacabazz") == "racababecaazzabaazabacacbadabacabazzabacabadabcacabazaabazzaacebabacar")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicaroscoabioacabadabaccababapicsilicovolcanoconiosis") == "pneumonoultramicaroscoabioacabadabaccababapicsilicovolcanoconiosisoinoconaclovociliscipababaccabadabacaoibaocsoracimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadbabbbrpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarcabaccababapicsilicovolcanoconniabaacabadabacabaosisb") == "apneumonoultramicroscoabioacabadbabbbrpneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarcabaccababapicsilicovolcanoconniabaacabadabacabaosisbsisoabacabadabacaabainnoconaclovociliscipababaccabacradsisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenprbbbabdabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("aapneumonoultranmicroscopicasiailicovolcanoconiosis") == "aapneumonoultranmicroscopicasiailicovolcanoconiosisoinoconaclovociliaisacipocsorcimnartluonomuenpaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsicnanoconiosis") == "pneumonoultramicroscopicsicnanoconiosisoinoconanciscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadabaaaaaaccababapicsilicovolcapnababamicroscopicsaapneumonoultranmicroscopicasiailicovolcanoconiosisilicovolcanoconiosisnoconiosisb") == "apneumonoultramicroscoabioacabadabaaaaaaccababapicsilicovolcapnababamicroscopicsaapneumonoultranmicroscopicasiailicovolcanoconiosisilicovolcanoconiosisnoconiosisbsisoinoconsisoinoconaclovocilisisoinoconaclovociliaisacipocsorcimnartluonomuenpaascipocsorcimababanpaclovociliscipababaccaaaaaabadabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("reabaecraaarbazzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabcad") == "reabaecraaarbazzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabcadacbaisoinoconaclovocilmmmabsiclovociliscipababaccabadabacaonomuenpacabadabacaabazzzabraaarceabaer")){ tests_passed++; } total_tests++;

    if((make_palindrome("pzzabaazabacacbadabacabayzbabadpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosisznnn") == "pzzabaazabacacbadabacabayzbabadpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosisznnnzsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpdababzyabacabadabcacabazaabazzp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababamicroscopicsilaaazzzabzaacabbabdabazabzyzzzanoconiosis") == "pnababamicroscopicsilaaazzzabzaacabbabdabazabzyzzzanoconiosisoinoconazzzyzbazabadbabbacaazbazzzaaaliscipocsorcimababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("reabaecraarbaaad") == "reabaecraarbaaadaaabraarceabaer")){ tests_passed++; } total_tests++;

    if((make_palindrome("aracabbpneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsiliaapneumonoultranmicroscopicasiailicovolcanoconiosiscovconiosiscsilicovolcanoconiosisabecar") == "aracabbpneumonoultramicroscoabioacabadabaccababapipneumonoultramicroscopicsiliaapneumonoultranmicroscopicasiailicovolcanoconiosiscovconiosiscsilicovolcanoconiosisabecaracebasisoinoconaclovociliscsisoinocvocsisoinoconaclovociliaisacipocsorcimnartluonomuenpaailiscipocsorcimartluonomuenpipababaccabadabacaoibaocsorcimartluonomuenpbbacara")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultnramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosis") == "pneumonoultnramicroscoabioacabadabaccababapipneumonoultramicroscopicsilicovconiosiscsilicovolcanoconiosisoinoconaclovociliscsisoinocvociliscipocsorcimartluonomuenpipababaccabadabacaoibaocsorcimarntluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicRgxEovolcanoconiosisicovolcanoconmiosis") == "pneumonoultramicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicRgxEovolcanoconiosisicovolcanoconmiosisoimnoconaclovocisisoinoconaclovoExgRcicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazbzz") == "zzzzazbzzbzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaabababbaracababecarcrnpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecar") == "aaabababbaracababecarcrnpneumoncoultramicroscoabacabadabaccababapicsilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbaliscipababaccabadabacabaocsorcimartluocnomuenpnrcracebabacarabbababaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscobioacabadabaccababapicsilicovolcapnabaobamicroscopicsilicovolcanoconiosisnoconiosisb") == "apneumonoultramicroscobioacabadabaccababapicsilicovolcapnabaobamicroscopicsilicovolcanoconiosisnoconiosisbsisoinoconsisoinoconaclovociliscipocsorcimaboabanpaclovociliscipababaccabadabacaoibocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("RgxErpneumonoultramicroscoabacasbadabaccababapicsilabcicovolcanobabbcconiosisacecar") == "RgxErpneumonoultramicroscoabacasbadabaccababapicsilabcicovolcanobabbcconiosisacecaracecasisoinoccbbabonaclovocicbaliscipababaccabadabsacabaocsorcimartluonomuenprExgR")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoulrpneumonoultramicroscoabacabadabpneumonoultramicroscoabibabecarbadabaccababapicsilicovolcanoconiosiabcasaccababapicsilabcicovolcanocosniosisaceccartramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoulrpneumonoultramicroscoabacabadabpneumonoultramicroscoabibabecarbadabaccababapicsilicovolcanoconiosiabcasaccababapicsilabcicovolcanocosniosisaceccartramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartraccecasisoinsoconaclovocicbaliscipababaccasacbaisoinoconaclovociliscipababaccabadabracebabibaocsorcimartluonomuenpbadabacabaocsorcimartluonomuenprluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmpinababamicroscsilicovolcanocooniosisP") == "mmpinababamicroscsilicovolcanocooniosisPsisoinooconaclovociliscsorcimababanipmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("opneumonoultramicnroscoabacabadabaccababapicsilabcicbabadovolcanoconiosis") == "opneumonoultramicnroscoabacabadabaccababapicsilabcicbabadovolcanoconiosisoinoconaclovodababcicbaliscipababaccabadabacabaocsorncimartluonomuenpo")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaba") == "abacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabbbabaabcadaccababapicsilabcicovlolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumocpneumonoacaobadabaccabzzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabapicspneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabbbabaabcadaccababapicsilabcicovlolcanoconiosisilicovolcanoconiosiscababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababacsisoinoconaclovocilisisoinoconaclolvocicbaliscipababaccadacbaababbbasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenpscipabazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzbaccabadaboacaonomuenpcomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnababascopicsapneumonoultramicroscoabioacabnadabaccababapicsiosisbilicovolcanoconiosis") == "pnababascopicsapneumonoultramicroscoabioacabnadabaccababapicsiosisbilicovolcanoconiosisoinoconaclovocilibsisoiscipababaccabadanbacaoibaocsorcimartluonomuenpascipocsababanp")){ tests_passed++; } total_tests++;

    if((make_palindrome("babarbabecarc") == "babarbabecarcracebabrabab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacabaabacabadabaccabaadaaabnoconiosisabaccaababapicsilabcicovolcanoconiosis") == "pneumonoultramicroscoabacabadpneumoccababapzzzabaacabadabacabaazyzzzicsilicovolaaacabaabacabadabaccabaadaaabnoconiosisabaccaababapicsilabcicovolcanoconiosisoinoconaclovocicbaliscipababaaccabasisoinoconbaaadaabaccabadabacabaabacaaalovociliscizzzyzaabacabadabacaabazzzpababaccomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicnroscoabacabadabaccababapicsilabcicbabadovbolcanoconiosis") == "pneumonoultramicnroscoabacabadabaccababapicsilabcicbabadovbolcanoconiosisoinoconaclobvodababcicbaliscipababaccabadabacabaocsorncimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacabadabaccababapicsilabcicovcolcanocosniosisacecar") == "rpneumonoultramicroscoabacabadabaccababapicsilabcicovcolcanocosniosisacecaracecasisoinsoconaclocvocicbaliscipababaccabadabacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("rrpneumonoultramicroscoabacabadabaccababapicsilabcicovoabacabadaaabacabalcanobabbcconiosisacecaracabIuyepBBabecaar") == "rrpneumonoultramicroscoabacabadabaccababapicsilabcicovoabacabadaaabacabalcanobabbcconiosisacecaracabIuyepBBabecaaraacebaBBpeyuIbacaracecasisoinoccbbabonaclabacabaaadabacabaovocicbaliscipababaccabadabacabaocsorcimartluonomuenprr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabacabadpneumocpnabaccababapicsilicovolcisultramicroscoabioacabadabaccababapicsilicovolcanoconiosisiosis") == "pneumonoultramicroscoabacabadpneumocpnabaccababapicsilicovolcisultramicroscoabioacabadabaccababapicsilicovolcanoconiosisiosisoisisoinoconaclovociliscipababaccabadabacaoibaocsorcimartlusiclovociliscipababaccabanpcomuenpdabacabaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaacabcadabacaba") == "abaacabcadabacabadacbacaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabammpnababamicrobaabacabadabaccabaadaaabcovzzabzzolcanoconiosisPbdababaadazyzzz") == "zzzabaacabammpnababamicrobaabacabadabaccabaadaaabcovzzabzzolcanoconiosisPbdababaadazyzzzyzadaababadbPsisoinoconaclozzbazzvocbaaadaabaccabadabacabaaborcimababanpmmabacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abammpreabaecraaarbazzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabcadnaaaaababamicroscsilicovolcanoconiosisP") == "abammpreabaecraaarbazzzabaacabadabacapneumonoacabadabaccababapicsilicovolcisbammmlicovolcanoconiosiabcadnaaaaababamicroscsilicovolcanoconiosisPsisoinoconaclovociliscsorcimababaaaaandacbaisoinoconaclovocilmmmabsiclovociliscipababaccabadabacaonomuenpacabadabacaabazzzabraaarceabaerpmmaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("panebaabacabadabaccabaadaaabumonoultramicroscopicsilicovconiosis") == "panebaabacabadabaccabaadaaabumonoultramicroscopicsilicovconiosisoinocvociliscipocsorcimartluonomubaaadaabaccabadabacabaabenap")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoacabadabaccababapicsiliscaadovolcis") == "pneumonoacabadabaccababapicsiliscaadovolcisiclovodaacsiliscipababaccabadabacaonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabaacabadabcabacbazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabbacabab") == "baabaacabadabcabacbazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabbacababacabbazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzabcabacbadabacaabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnevolcanocoabcaniobabbceabcadsi") == "pnevolcanocoabcaniobabbceabcadsisdacbaecbbaboinacbaoconaclovenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("reabaecraaarbaad") == "reabaecraaarbaadaabraaarceabaer")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnzzzabaacapneumonoulrpneumonoultramicroscoabacabadabpneumonoultramicroscoabibabecarbadabaccababapicsilicovolcanoconiosiabcasaccababapicsilabcicovolcanocosniosisaceccartramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadapneumapneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosisbacabadabacabaabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosiscanoconiosis") == "pnzzzabaacapneumonoulrpneumonoultramicroscoabacabadabpneumonoultramicroscoabibabecarbadabaccababapicsilicovolcanoconiosiabcasaccababapicsilabcicovolcanocosniosisaceccartramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadapneumapneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadonoultramicroscoabacabadabaccababapicsilabcimcovolcanoconiosisbacabadabacabaabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosiscanoconiosisoinoconacsisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabaabacabadabacabsisoinoconaclovocmicbaliscipababaccabadabacabaocsorcimartluonodaabiliscabacabadabacabaipababaccabsisoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomuenpamuenpadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartraccecasisoinsoconaclovocicbaliscipababaccasacbaisoinoconaclovociliscipababaccabadabracebabibaocsorcimartluonomuenpbadabacabaocsorcimartluonomuenprluonomuenpacaabazzznp")){ tests_passed++; } total_tests++;

    if((make_palindrome("ddbaayzzzabaacabadabacabaazyzzzbacabadabcabacaaab") == "ddbaayzzzabaacabadabacabaazyzzzbacabadabcabacaaabaaacabacbadabacabzzzyzaabacabadabacaabazzzyaabdd")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiospiccababapiabacabadabacabacsilibaad") == "apneumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiospiccababapiabacabadabacabacsilibaadaabiliscabacabadabacabaipababaccipsoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumonoultramicroscoabacabadabaccababappicsilabcicovcolcanocosniosisacecar") == "rpneumonoultramicroscoabacabadabaccababappicsilabcicovcolcanocosniosisacecaracecasisoinsoconaclocvocicbaliscippababaccabadabacabaocsorcimartluonomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonnoacabadabaccabapicsiliscaadovolcis") == "pneumonnoacabadabaccabapicsiliscaadovolcisiclovodaacsiliscipabaccabadabacaonnomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("mmmlicovolrpneumonoultramicroscoabacabadabaccabocosniosisacecarcanoconiosis") == "mmmlicovolrpneumonoultramicroscoabacabadabaccabocosniosisacecarcanoconiosisoinoconacracecasisoinsocobaccabadabacabaocsorcimartluonomuenprlovocilmmm")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabaacabbabdabazabzzz") == "zzzabaacabbabdabazabzzzbazabadbabbacaabazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("rpneumoncoultramicroscoabacabadabaccababappicsbaabaacabadabcaabaccababilabcicovolcanoconiosisacecar") == "rpneumoncoultramicroscoabacabadabaccababappicsbaabaacabadabcaabaccababilabcicovolcanoconiosisacecaracecasisoinoconaclovocicbalibabaccabaacbadabacaabaabscippababaccabadabacabaocsorcimartluocnomuenpr")){ tests_passed++; } total_tests++;

    if((make_palindrome("baasbaacabadabcabacbazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabbacabab") == "baasbaacabadabcabacbazzabaazabacacbadabacabayzpneumonoultramicroscoabioacabadabaccababapicsilicovolcanoconmiosiszabbacababacabbazsisoimnoconaclovociliscipababaccabadabacaoibaocsorcimartluonomuenpzyabacabadabcacabazaabazzabcabacbadabacaabsaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("opneumonoultramicnrobabbbrpneumonoultrasmicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarcsilabcicbabadovolcanoconiosis") == "opneumonoultramicnrobabbbrpneumonoultrasmicroscoabioacabadabaccababapicsilpneumonoultramicroscoabacabadpneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzzicsilicovolaaacanoconiosisabaccababapicsilabcicovolcanoconiosisicovolcanoconmiosisdarcsilabcicbabadovolcanoconiosisoinoconaclovodababcicbaliscradsisoimnoconaclovocisisoinoconaclovocicbaliscipababaccabasisoinoconacaaalovociliscizzzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpdabacabaocsorcimartluonomuenpliscipababaccabadabacaoibaocsorcimsartluonomuenprbbbaborncimartluonomuenpo")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoasbacabadrpneumoncoultramicroscoabacabapneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsiliconoconiosisaccababapicsilabcimcocanocon") == "pneumonoultramicroscoasbacabadrpneumoncoultramicroscoabacabapneumonoultramicroscoabioacabadabaccababapzzzabaacabadabacabaazyzzizicsiliconoconiosisaccababapicsilabcimcocanoconacocmicbaliscipababaccasisoinoconociliscizizzyzaabacabadabacaabazzzpababaccabadabacaoibaocsorcimartluonomuenpabacabaocsorcimartluocnomuenprdabacabsaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzabzaacababdabazyzzz") == "zzzabzaacababdabazyzzzyzabadbabacaazbazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("ddbaabacabadabcabacabab") == "ddbaabacabadabcabacababacabacbadabacabaabdd")){ tests_passed++; } total_tests++;

    if((make_palindrome("abadaapnracababecaareumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadbaababaabacabadabcabacaabcabadabacaacaba") == "abadaapnracababecaareumonoultramicroscoabioacabadbapneumonoultramicroscopicsilicovolcanoconiosisbaccababapiabacabadabacabacsilibaadbaababaabacabadabcabacaabcabadabacaacabadabacbaacabacbadabacabaababaabdaabiliscabacabadabacabaipababaccabsisoinoconaclovociliscipocsorcimartluonomuenpabdabacaoibaocsorcimartluonomueraacebabacarnpaadaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzyzazyzzz") == "zzyzazyzzzyzazyzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopneumonoultramicrooscopicsicnanoconiosisabacabadabaccababapicsilabcimcovolcanocon") == "pneumonoultramicroscopneumonoultramicrooscopicsicnanoconiosisabacabadabaccababapicsilabcimcovolcanoconaclovocmicbaliscipababaccabadabacabasisoinoconanciscipocsoorcimartluonomuenpocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabacabadabacbcab") == "baabacabadabacbcabadabacabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramsiroscopicsilicovolcanoaosis") == "pneumonoultramsiroscopicsilicovolcanoaosisoaonaclovociliscipocsorismartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("rraraapneumonoultranmicroscopicasiailicovolcanoconiosis") == "rraraapneumonoultranmicroscopicasiailicovolcanoconiosisoinoconaclovociliaisacipocsorcimnartluonomuenpaararr")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneuababapdmonoultramicrosis") == "pneuababapdmonoultramicrosisorcimartluonomdpababauenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscoabioaacabadabaccababapicsilbicovolcanoconmcanoconiosisnoconoiommmmsisbiosis") == "pneumonoultramicroscoabioaacabadabaccababapicsilbicovolcanoconmcanoconiosisnoconoiommmmsisbiosisoibsismmmmoionoconsisoinoconacmnoconaclovocibliscipababaccabadabacaaoibaocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("yyyy") == "yyyy")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababbaba") == "ababbaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("xyyyx") == "xyyyx")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaaaaabac") == "aaaaaaaabacabaaaaaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abcdedcba") == "abcdedcba")){ tests_passed++; } total_tests++;

    if((make_palindrome("l4v4l4c4") == "l4v4l4c4l4v4l")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacba") == "abacabadabacbabcabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazyzzz") == "zzzzazyzzzyzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacbaa") == "abacabadabacbaabcabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababadabacabadabacba") == "abababadabacabadabacbabcabadabacabadabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacab") == "abacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacabaabc") == "abacabadabacabaabcbaabacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaabacabadabacabaaaaaaa") == "abaabacabadabacabaaaaaaabacabadabacabaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabacabaaaaaaaacabadabacaba") == "ababaabacabadabacabaaaaaaaacabadabacabadabacaaaaaaaabacabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazyz") == "zzzzazyzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaaaaaabacba") == "abacabadaaaaaabacbabcabaaaaaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacabacabadabacabaabcaba") == "abacabadabacabacabadabacabaabcabacbaabacabadabacabacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bab") == "bab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pnebabumonoultramicroscopicsilicovolcanoconiosis") == "pnebabumonoultramicroscopicsilicovolcanoconiosisoinoconaclovociliscipocsorcimartluonomubabenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrosracecarcopicsilicovolcanoconiosis") == "pneumonoultramicrosracecarcopicsilicovolcanoconiosisoinoconaclovociliscipocracecarsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabadabacabaabc") == "abacaabadabacabaabcbaabacabadabaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("babaabcd") == "babaabcdcbaabab")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacabadaaaaaabacbar") == "racecaabacabadaaaaaabacbarabcabaaaaaadabacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbab") == "bbabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabzzzzazyzzbabadadaabacabaabc") == "abacabzzzzazyzzbabadadaabacabaabcbaabacabaadadababzzyzazzzzbacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacaabadabacabaabcaba") == "abacabadabacaabadabacabaabcabacbaabacabadabaacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("babb") == "babbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzazyabcz") == "zzzazyabczcbayzazzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabadabacabaabac") == "abacaabadabacabaabacabadabaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzzazyzzzbaaabcd") == "bazzzzazyzzzbaaabcdcbaaabzzzyzazzzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaaabacabadaacabaaaaaaa") == "abaaabacabadaacabaaaaaaabacaadabacabaaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababadabacabadabacbabacabadabacbaa") == "abababadabacabadabacbabacabadabacbaabcabadabacababcabadabacabadabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazyzzzazyzzzz") == "zzzzazyzzzazyzzzzyzazzzyzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacbaabacabadabacabaa") == "abacabadabacbaabacabadabacabaabcabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabc") == "abababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcbaabacabadabacaabacabadabacaaaaaaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovolcanocovniosis") == "pneumonoultramicroscopicsilicovolcanocovniosisoinvoconaclovociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("bb") == "bb")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbab") == "abbabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaabb") == "aaaaabbaaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababazzzazyzzzabadabacba") == "ababazzzazyzzzabadabacbabcabadabazzzyzazzzababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("raabacaabadabacabaabcceca") == "raabacaabadabacabaabccecaceccbaabacabadabaacabaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacababdaaaaaabacbar") == "racecaabacababdaaaaaabacbarabcabaaaaaadbabacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacabacabadabacabaabcabaaabab") == "abacabadabacabacabadabacabaabcabaaababaaabacbaabacabadabacabacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("baab") == "baab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abb") == "abba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabadabacbaa") == "abacaabadabacbaabcabadabaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababadabacabadpnebabumonoultramicroscopicsilicovolcanoconiosisabacbabacabadabacbaa") == "abababadabacabadpnebabumonoultramicroscopicsilicovolcanoconiosisabacbabacabadabacbaabcabadabacababcabasisoinoconaclovociliscipocsorcimartluonomubabenpdabacabadabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrosracecarcoipicsilicovolcanoconiosis") == "pneumonoultramicrosracecarcoipicsilicovolcanoconiosisoinoconaclovociliscipiocracecarsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabaabacabadabacabadabacbaa") == "abacaabaabacabadabacabadabacbaabcabadabacabadabacabaabaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("dbabaaabcd") == "dbabaaabcdcbaaababd")){ tests_passed++; } total_tests++;

    if((make_palindrome("aabacabadabacbaabacabadabacab") == "aabacabadabacbaabacabadabacabaabcabadabacabaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabbbaaaaaaaacabadabacabaacabadabacabaabc") == "abababaabacabadabacabbbaaaaaaaacabadabacabaacabadabacabaabcbaabacabadabacaabacabadabacaaaaaaaabbbacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacabaabc") == "abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacabaabcbaabacabadabacaabacabadabacaaaaadcbaababaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabaca") == "abacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramabaaabacabadaacabaaaaaaaicrosracecarcopicsilicovolcanoconiosis") == "pneumonoultramabaaabacabadaacabaaaaaaaicrosracecarcopicsilicovolcanoconiosisoinoconaclovociliscipocracecarsorciaaaaaaabacaadabacabaaabamartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbbad") == "bbbadabbb")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaabacbbbadabadabacabaaaaaaa") == "abaabacbbbadabadabacabaaaaaaabacabadabadabbbcabaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("H") == "H")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabacaabadabacabaabcababadabacabadabacba") == "ababaabacabadabacaabadabacabaabcababadabacabadabacbabcabadabacabadababacbaabacabadabaacabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zabacabadabacaabadabacabaabcabazz") == "zabacabadabacaabadabacabaabcabazzabacbaabacabadabaacabadabacabaz")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzaabacabadabacabacabadabacabaabcabazyz") == "zzzzaabacabadabacabacabadabacabaabcabazyzabacbaabacabadabacabacabadabacabaazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbabbab") == "bbabbabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababb") == "ababbaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazracecaabacabadaaaaaabacbaryz") == "zzzzazracecaabacabadaaaaaabacbaryzyrabcabaaaaaadabacabaacecarzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaababazzzzazyzzzbaaabcdcabadabacabaaaaaaa") == "abaababazzzzazyzzzbaaabcdcabadabacabaaaaaaabacabadabacdcbaaabzzzyzazzzzababaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaaabadabacbaa") == "abacaaabadabacbaabcabadabaaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabbbaaaaaaaacaabadabacabaacabadabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcbaabc") == "abababaabacabadabacabbbaaaaaaaacaabadabacabaacabadabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcbaabcbaabacabadabacaabacabadabacaaaaaaaabacabadabacabaabababadabacaabacabadabaacaaaaaaaabbbacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abzzzzazyabacabadabacbaazzzazyzzzzbadabacba") == "abzzzzazyabacabadabacbaazzzazyzzzzbadabacbabcabadabzzzzyzazzzaabcabadabacabayzazzzzba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbd") == "bbdbb")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaabacaabaabacabadabacabadabacbaa") == "bbaabacaabaabacabadabacabadabacbaabcabadabacabadabacabaabaacabaabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("babaad") == "babaadaabab")){ tests_passed++; } total_tests++;

    if((make_palindrome("FBaYOc") == "FBaYOcOYaBF")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaababaabacabadabacabaaababaabcdaaaaacabadabacababacabaabc") == "abaababaabacabadabacabaaababaabcdaaaaacabadabacababacabaabcbaabacababacabadabacaaaaadcbaababaaabacabadabacabaababaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababadabacaabacabadabacabacabadabacabaabcabaaababbadpnebabumonoultramicroscopicsilicovolcanoconiosisabacbabacabadabacbaa") == "abababadabacaabacabadabacabacabadabacabaabcabaaababbadpnebabumonoultramicroscopicsilicovolcanoconiosisabacbabacabadabacbaabcabadabacababcabasisoinoconaclovociliscipocsorcimartluonomubabenpdabbabaaabacbaabacabadabacabacabadabacabaacabadabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabzzzzazyzzbabadadaabacabadabacabaaabacabaabc") == "abacabzzzzazyzzbabadadaabacabadabacabaaabacabaabcbaabacabaaabacabadabacabaadadababzzyzazzzzbacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabacaabadabacbaaacbaa") == "abacabacaabadabacbaaacbaabcaaabcabadabaacabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzaabacabadabacabacabadabacabaabcbazyz") == "zzzzaabacabadabacabacabadabacabaabcbazyzabcbaabacabadabacabacabadabacabaazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazyzz") == "zzzzazyzzyzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacaabacaaabadabacbaa") == "abacabadabacaabacaaabadabacbaabcabadabaaacabaacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaabacbbbadabadabbdbacabaaaaaaa") == "abaabacbbbadabadabbdbacabaaaaaaabacabdbbadabadabbbcabaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("babracecaabacabadaaaaaabacbar") == "babracecaabacabadaaaaaabacbarabcabaaaaaadabacabaacecarbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abzzzzazyzzzazyzzzzacabadabacabacabadabacabaabcabaaabab") == "abzzzzazyzzzazyzzzzacabadabacabacabadabacabaabcabaaababaaabacbaabacabadabacabacabadabacazzzzyzazzzyzazzzzba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabbbadabacab") == "abacaabbbadabacabadabbbaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicovolcanoconiosis") == "pneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicovolcanoconiosisoinoconaclovociliscipocracecarrabcabaaaaaadabacabaacecarbabrcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("raabacabadabacabacabadabacabaabcabaaababecar") == "raabacabadabacabacabadabacabaabcabaaababecaracebabaaabacbaabacabadabacabacabadabacabaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaapneumonloultramicrosrpnebabumonoultramicroscopicsilicovolcanoconiosisacecarcopicsilicovolcanoconiosisbacaabaabacabadabacabadabacbaa") == "bbaapneumonloultramicrosrpnebabumonoultramicroscopicsilicovolcanoconiosisacecarcopicsilicovolcanoconiosisbacaabaabacabadabacabadabacbaabcabadabacabadabacabaabaacabsisoinoconaclovociliscipocracecasisoinoconaclovociliscipocsorcimartluonomubabenprsorcimartluolnomuenpaabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicrosracecarcopiocsilicovolcanoconiosis") == "pneumonoultramicrosracecarcopiocsilicovolcanoconiosisoinoconaclovociliscoipocracecarsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacababdaaabbabaaabacbar") == "racecaabacababdaaabbabaaabacbarabcabaaababbaaadbabacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacababacabaabccabaaaaaaaacabadabacaba") == "ababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacababacabaabccabaaaaaaaacabadabacabadabacaaaaaaaabaccbaabacababacabadabacaaaaadcbaababaaabacabadabacabaababaabaabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazababaabacabadabacabaaaaaaaabaabacbbbadabadabacabaaaaaaaacabadabacabayzzz") == "zzzzazababaabacabadabacabaaaaaaaabaabacbbbadabadabacabaaaaaaaacabadabacabayzzzyabacabadabacaaaaaaaabacabadabadabbbcabaabaaaaaaaabacabadabacabaababazazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonoultramicroscopicsilicovolcanocovniosisbab") == "apneumonoultramicroscopicsilicovolcanocovniosisbabsisoinvoconaclovociliscipocsorcimartluonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaabacaabaabacazzzazyzzzbadabacabadabacbaa") == "bbaabacaabaabacazzzazyzzzbadabacabadabacbaabcabadabacabadabzzzyzazzzacabaabaacabaabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("raabacaabadabacabaapnebumonoultramicroscopicsilicovolcanocovniosisbababcceca") == "raabacaabadabacabaapnebumonoultramicroscopicsilicovolcanocovniosisbababccecaceccbababsisoinvoconaclovociliscipocsorcimartluonomubenpaabacabadabaacabaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabbbbadabacab") == "abacaabbbbadabacabadabbbbaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazyzzzazyzzabacabadabacbaabacabadabacabaazzz") == "zzzzazyzzzazyzzabacabadabacbaabacabadabacabaazzzaabacabadabacabaabcabadabacabazzyzazzzyzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaabacabadabacababaaaaaa") == "abaabacabadabacababaaaaaababacabadabacabaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazzyzzzazyzzabacabadabacbaabacabadabacabaazzz") == "zzzzazzyzzzazyzzabacabadabacbaabacabadabacabaazzzaabacabadabacabaabcabadabacabazzyzazzzyzzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabadabacaba") == "abacaabadabacabadabaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbbab") == "bbbabbb")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzazyzzzbaaabcd") == "bazzzazyzzzbaaabcdcbaaabzzzyzazzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("aabaababaabacabadabacabaaababaabcdaaaaacabadabacababacabaabc") == "aabaababaabacabadabacabaaababaabcdaaaaacabadabacababacabaabcbaabacababacabadabacaaaaadcbaababaaabacabadabacabaababaabaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabc") == "abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabcbacOYaBFabacabadabacaabacabadabacaaaaadcbaababaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abzzzzazyzzzazyzzzzacabadaabacabacabadabacababacabadabacbaabacabadabacabaaaabcabaaabab") == "abzzzzazyzzzazyzzzzacabadaabacabacabadabacababacabadabacbaabacabadabacabaaaabcabaaababaaabacbaaaabacabadabacabaabcabadabacababacabadabacabacabaadabacazzzzyzazzzyzazzzzba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzazyzzzbaabacaabadabacbaaaabcd") == "bazzzazyzzzbaabacaabadabacbaaaabcdcbaaaabcabadabaacabaabzzzyzazzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramicroscopicsilicovolcanniosis") == "pneumonoultramicroscopicsilicovolcanniosisoinnaclovociliscipocsorcimartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadaabacabaabc") == "abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadaabacabaabcbaabacabaadabacaabacabadabacaaaaadcbaababaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzzazyzzzbaaababaabacabadabacabaaaaaaaacabadabacabaabcd") == "bazzzzazyzzzbaaababaabacabadabacabaaaaaaaacabadabacabaabcdcbaabacabadabacaaaaaaaabacabadabacabaababaaabzzzyzazzzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazababaabacabadabacabaaaaaaababaabacbbbadabadabacabaaaaaaaacabadabacabayzzz") == "zzzzazababaabacabadabacabaaaaaaababaabacbbbadabadabacabaaaaaaaacabadabacabayzzzyabacabadabacaaaaaaaabacabadabadabbbcabaababaaaaaaabacabadabacabaababazazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaapneumonloultramicrosrpnebabumonoultramicroscopicsilicovolcanoconiosisaababaabacabadabacaabadabacabaabcababadabacabadabacbacecarcopicsilicovolcanoconiosisbacaabaabacabadabacabadabacbaa") == "bbaapneumonloultramicrosrpnebabumonoultramicroscopicsilicovolcanoconiosisaababaabacabadabacaabadabacabaabcababadabacabadabacbacecarcopicsilicovolcanoconiosisbacaabaabacabadabacabadabacbaabcabadabacabadabacabaabaacabsisoinoconaclovociliscipocracecabcabadabacabadababacbaabacabadabaacabadabacabaababaasisoinoconaclovociliscipocsorcimartluonomubabenprsorcimartluolnomuenpaabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaaaaaaacabadabacabaacabaabacabadabacbaabacabadabacabaadabacabaabc") == "abababaabacabadabacabaaaaaaaacabadabacabaacabaabacabadabacbaabacabadabacabaadabacabaabcbaabacabadaabacabadabacabaabcabadabacabaabacaabacabadabacaaaaaaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("acabadabacaebacabadabacabaabcabaaababecar") == "acabadabacaebacabadabacabaabcabaaababecaracebabaaabacbaabacabadabacabeacabadabaca")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabacaabadabacbbabaadaaaa") == "abacabacaabadabacbbabaadaaaadaababbcabadabaacabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabbbaaaaaaaacaabadabacabaacabadabababaabacabadabacabaaaaaaaacapneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicovolcanoconiosisbadabacabaacabadabacabaabcbaabc") == "abababaabacabadabacabbbaaaaaaaacaabadabacabaacabadabababaabacabadabacabaaaaaaaacapneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicovolcanoconiosisbadabacabaacabadabacabaabcbaabcbaabacabadabacaabacabadabsisoinoconaclovociliscipocracecarrabcabaaaaaadabacabaacecarbabrcimartluonomuenpacaaaaaaaabacabadabacabaabababadabacaabacabadabaacaaaaaaaabbbacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaabbb") == "aaaaabbbaaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzaabacabadabazzzzazyzzacabaabcabazyz") == "zzzzaabacabadabazzzzazyzzacabaabcabazyzabacbaabacazzyzazzzzabadabacabaazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabacaabaadabacbaaacbaa") == "abacabacaabaadabacbaaacbaabcaaabcabadaabaacabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbbaa") == "bbbaabbb")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabbbacaabacaaabadabacbaa") == "abacabbbacaabacaaabadabacbaabcabadabaaacabaacabbbacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("babbabaadzzzazyzabacabadabacaabadabacabaabcabazzbaaabcd") == "babbabaadzzzazyzabacabadabacaabadabacabaabcabazzbaaabcdcbaaabzzabacbaabacabadabaacabadabacabazyzazzzdaababbab")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazz") == "zzzzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadababababaabacabadabacabbbaaaaaaaacaabadabacabaacabadabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcbaabcBaYOcabc") == "abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadababababaabacabadabacabbbaaaaaaaacaabadabacabaacabadabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcbaabcBaYOcabcbacOYaBcbaabcbaabacabadabacaabacabadabacaaaaaaaabacabadabacabaabababadabacaabacabadabaacaaaaaaaabbbacabadabacabaababababadabacaabacabadabacaaaaadcbaababaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abaabacabadabacababaabacabadabacaabadabacabaabcabaaaaaa") == "abaabacabadabacababaabacabadabacaabadabacabaabcabaaaaaabacbaabacabadabaacabadabacabaababacabadabacabaaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzzazyzzzbaaababaabacbbdabadabacabaaaaaaaacabadabacabaabcd") == "bazzzzazyzzzbaaababaabacbbdabadabacabaaaaaaaacabadabacabaabcdcbaabacabadabacaaaaaaaabacabadabadbbcabaababaaabzzzyzazzzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbaab") == "abbaabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("babababcd") == "babababcdcbababab")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbbb") == "bbbb")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabacaabadabacaabaabcababadabacabadabacba") == "ababaabacabadabacaabadabacaabaabcababadabacabadabacbabcabadabacabadababacbaabaacabadabaacabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazracecaabacabadaaaaaabacbarabacabadabacabayz") == "zzzzazracecaabacabadaaaaaabacbarabacabadabacabayzyabacabadabacabarabcabaaaaaadabacabaacecarzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacabbabdaaaaaabacbar") == "racecaabacabbabdaaaaaabacbarabcabaaaaaadbabbacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacbaababacaabadabacbbabaadaaaa") == "abacbaababacaabadabacbbabaadaaaadaababbcabadabaacababaabcaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzzazyzzzbazaababaabacbbdabadabacabaaaaaaaacabadabacabaabcd") == "bazzzzazyzzzbazaababaabacbbdabadabacabaaaaaaaacabadabacabaabcdcbaabacabadabacaaaaaaaabacabadabadbbcabaababaazabzzzyzazzzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("apneumonouisbab") == "apneumonouisbabsiuonomuenpa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabbacba") == "abacabadabbacbabcabbadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabbbadpnebabumonoultramicroscopicsilnicovolcanoconiosisbacab") == "abacaabbbadpnebabumonoultramicroscopicsilnicovolcanoconiosisbacabsisoinoconaclovocinliscipocsorcimartluonomubabenpdabbbaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzaaaacabadabacabaabcd") == "bazzzaaaacabadabacabaabcdcbaabacabadabacaaaazzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaraabacaabadabacabaapnebumonoultramicroscopicsilicovolcanocovniosisbababccecaaabbb") == "aaaraabacaabadabacabaapnebumonoultramicroscopicsilicovolcanocovniosisbababccecaaabbbaaaceccbababsisoinvoconaclovociliscipocsorcimartluonomubenpaabacabadabaacabaaraaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zabzzabababadabacabadabacbabacabadabacbaazzazyabacabadabacbaazzzazyzzzzbadabacba") == "zabzzabababadabacabadabacbabacabadabacbaazzazyabacabadabacbaazzzazyzzzzbadabacbabcabadabzzzzyzazzzaabcabadabacabayzazzaabcabadabacababcabadabacabadabababazzbaz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabadbabaaabcdcabaaababaabcdaaaaacabadabacabaacabadaabacabaabc") == "abababaabacabadabadbabaaabcdcabaaababaabcdaaaaacabadabacabaacabadaabacabaabcbaabacabaadabacaabacabadabacaaaaadcbaababaaabacdcbaaababdabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababazzzazyzzzabadabacbaab") == "ababazzzazyzzzabadabacbaabcabadabazzzyzazzzababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacpneumonoultramicroscopicsilicovolcanniosisabaabc") == "abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacpneumonoultramicroscopicsilicovolcanniosisabaabcbaabasisoinnaclovociliscipocsorcimartluonomuenpcabadabacaabacabadabacaaaaadcbaababaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabaabaabababadabacababacabaabccabaaaaaaaacabadabacaba") == "ababaabacabadabaabaabababadabacababacabaabccabaaaaaaaacabadabacabadabacaaaaaaaabaccbaabacababacabadabababaabaabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacabadaaaaaaabaacbar") == "racecaabacabadaaaaaaabaacbarabcaabaaaaaaadabacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("dabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabc") == "dabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabcbacOYaBFabacabadabacaabacabadabacaaaaadcbaababaaabacabad")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzz") == "zzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacabacabadababcabaabcaba") == "abacabadabacabacabadababcabaabcabacbaabacbabadabacabacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacabababaababazzzzazyzzzbaaabcdcabadabacabaaaaaaadaaaaaabacbar") == "racecaabacabababaababazzzzazyzzzbaaabcdcabadabacabaaaaaaadaaaaaabacbarabcabaaaaaadaaaaaaabacabadabacdcbaaabzzzyzazzzzababaabababacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabpneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicisaaadaaaaaabacbar") == "racecaabpneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicisaaadaaaaaabacbarabcabaaaaaadaaasiciliscipocracecarrabcabaaaaaadabacabaacecarbabrcimartluonomuenpbaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababadbabaaabcdbadabacabadabacbabacabadabacbaa") == "ababadbabaaabcdbadabacabadabacbabacabadabacbaabcabadabacababcabadabacabadabdcbaaababdababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabcacab") == "racecaabcacabacacbaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababazzzazyzzzabadabaa") == "ababazzzazyzzzabadabaabadabazzzyzazzzababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacadabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabcba") == "ababaabacadabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabcbacOYaBFabacabadabacaabacabadabacaaaaadcbaababaaabacabadacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababazzzzzzabadabaa") == "ababazzzzzzabadabaabadabazzzzzzababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzaabzacabadabacabacabadabacabaabcbazabacabacaabadabacbaaacbaayz") == "zzzzaabzacabadabacabacabadabacabaabcbazabacabacaabadabacbaaacbaayzyaabcaaabcabadabaacabacabazabcbaabacabadabacabacabadabacazbaazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacabadaaaaaabacbarabb") == "racecaabacabadaaaaaabacbarabbarabcabaaaaaadabacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadaabacbaabababacabadaaaaaabacbaacaabadabacbbabaadaaaabacbaa") == "abacabadaabacbaabababacabadaaaaaabacbaacaabadabacbbabaadaaaabacbaabcabaaaadaababbcabadabaacaabcabaaaaaadabacabababaabcabaadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabbbaaaaaaaacabadabacaabaacabadabacabaabc") == "abababaabacabadabacabbbaaaaaaaacabadabacaabaacabadabacabaabcbaabacabadabacaabaacabadabacaaaaaaaabbbacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzzazyz") == "zzzzzazyzazzzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("bbaab") == "bbaabb")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzzazyzzzbaaababaabacabadabdacabaaaaaaaacabadabacabaabcd") == "bazzzzazyzzzbaaababaabacabadabdacabaaaaaaaacabadabacabaabcdcbaabacabadabacaaaaaaaabacadbadabacabaababaaabzzzyzazzzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabaabacabadabacabadaabacbaa") == "abacaabaabacabadabacabadaabacbaabcabaadabacabadabacabaabaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("aaaaabbabaaabacabadaacabaaaaaaab") == "aaaaabbabaaabacabadaacabaaaaaaabacaadabacabaaababbaaaaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzzazyzzzazyzzabacabadabacbabaababazzzzazyzzzbaaabcdcabadabacabaaaaaaaaabacabadabacabaazzz") == "zzzzazyzzzazyzzabacabadabacbabaababazzzzazyzzzbaaabcdcabadabacabaaaaaaaaabacabadabacabaazzzaabacabadabacabaaaaaaaaabacabadabacdcbaaabzzzyzazzzzababaababcabadabacabazzyzazzzyzazzzz")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzdzazyzzzbaaababaabacabadabdacabaaaaaaaacabadabacabaabcd") == "bazzzdzazyzzzbaaababaabacabadabdacabaaaaaaaacabadabacabaabcdcbaabacabadabacaaaaaaaabacadbadabacabaababaaabzzzyzazdzzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacababacaaaaaaaaacabadabacaba") == "ababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacababacaaaaaaaaacabadabacabadabacaaaaaaaaacababacabadabacaaaaadcbaababaaabacabadabacabaababaabaabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbapneumonoultramicroscopicsilicovolcanniosis") == "abbapneumonoultramicroscopicsilicovolcanniosisoinnaclovociliscipocsorcimartluonomuenpabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abbaaracecaabacababdaaabbabaaabacbarb") == "abbaaracecaabacababdaaabbabaaabacbarbrabcabaaababbaaadbabacabaacecaraabba")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabaabaababaabacabadabacababaababaabcdaaaaacabadabacababacabaabccabaaaaaaaacabadabacaba") == "ababaabacabadabaabaababaabacabadabacababaababaabcdaaaaacabadabacababacabaabccabaaaaaaaacabadabacabadabacaaaaaaaabaccbaabacababacabadabacaaaaadcbaababaababacabadabacabaababaabaabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzazyzzzbaabacaabadabacbaaaabacabadabacbaabcd") == "bazzzazyzzzbaabacaabadabacbaaaabacabadabacbaabcdcbaabcabadabacabaaaabcabadabaacabaabzzzyzazzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("bazzzdzazyzzzbbaaababaabacabadabdacabaaaaaaaacabadabacabaabcd") == "bazzzdzazyzzzbbaaababaabacabadabdacabaaaaaaaacabadabacabaabcdcbaabacabadabacaaaaaaaabacadbadabacabaababaaabbzzzyzazdzzzab")){ tests_passed++; } total_tests++;

    if((make_palindrome("pabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcneumoanniosis") == "pabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcneumoanniosisoinnaomuencbaabacabadabacaabacabadabacaaaaaaaabacabadabacabaabababap")){ tests_passed++; } total_tests++;

    if((make_palindrome("abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacabracecaabacababdaaabbabaaabacbaraabc") == "abababaabacabadabacabaaababaabcdaaaaacabadabacabaacabadabacabracecaabacababdaaabbabaaabacbaraabcbaarabcabaaababbaaadbabacabaacecarbacabadabacaabacabadabacaaaaadcbaababaaabacabadabacabaabababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabacaabaadabacbaaacbaabacabadabacabaabca") == "abacabacaabaadabacbaaacbaabacabadabacabaabcaaabcabadaabaacabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaabacabaar") == "racecaabacabaaraabacabaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababazzzazyzzzbaababazzzzazyzzzbaaababaabacabadabdacabaaaaaaaacabadabacabaabcdcaabadabacbaaaabcdaabc") == "ababazzzazyzzzbaababazzzzazyzzzbaaababaabacabadabdacabaaaaaaaacabadabacabaabcdcaabadabacbaaaabcdaabcbaadcbaaaabcabadabaacdcbaabacabadabacaaaaaaaabacadbadabacabaababaaabzzzyzazzzzababaabzzzyzazzzababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabacabaaaaaaaacabadabaababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacabaabacaaaaaaaaacabadabacabacaba") == "ababaabacabadabacabaaaaaaaacabadabaababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacabaabacaaaaaaaaacabadabacabacabadabacaaaaaaaaacabaabacabadabacaaaaadcbaababaaabacabadabacabaababaabaabadabacabaababaabadabacaaaaaaaabacabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abzzzzazyabacabadabacbaaazzzazyzzzzbadabacba") == "abzzzzazyabacabadabacbaaazzzazyzzzzbadabacbabcabadabzzzzyzazzzaaabcabadabacabayzazzzzba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abraabacaabadabacabaapnebumonoultramicroscopicsilicovolcanocovniosisbababccecaacaabadabacabaabacbbaabacaabaabacabadabcacabadabacbaa") == "abraabacaabadabacabaapnebumonoultramicroscopicsilicovolcanocovniosisbababccecaacaabadabacabaabacbbaabacaabaabacabadabcacabadabacbaabcabadabacacbadabacabaabaacabaabbcabaabacabadabaacaaceccbababsisoinvoconaclovociliscipocsorcimartluonomubenpaabacabadabaacabaarba")){ tests_passed++; } total_tests++;

    if((make_palindrome("raabacaabadabacabaabccecca") == "raabacaabadabacabaabcceccacceccbaabacabadabaacabaar")){ tests_passed++; } total_tests++;

    if((make_palindrome("baabazzzdzazyzzzbbaaababaabacabadabdacabaaaaaaaacabadabacabaabcdb") == "baabazzzdzazyzzzbbaaababaabacabadabdacabaaaaaaaacabadabacabaabcdbdcbaabacabadabacaaaaaaaabacadbadabacabaababaaabbzzzyzazdzzzabaab")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabacaabadabacaabaabcababadabacaabadabacba") == "ababaabacabadabacaabadabacaabaabcababadabacaabadabacbabcabadabaacabadababacbaabaacabadabaacabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaababazzzzazyzzzbazaababaabacbbdabadabacabaaaaaaaacabadabacabaabcddabacbaa") == "abacaababazzzzazyzzzbazaababaabacbbdabadabacabaaaaaaaacabadabacabaabcddabacbaabcabaddcbaabacabadabacaaaaaaaabacabadabadbbcabaababaazabzzzyzazzzzababaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("racecaaabababadabacabadabacbabacabadabacbaabcacab") == "racecaaabababadabacabadabacbabacabadabacbaabcacabacacbaabcabadabacababcabadabacabadabababaaacecar")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaabbbbadabaababaabacadabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabcbacab") == "abacaabbbbadabaababaabacadabacabaaababaabcdaaaaacabadabacabaacabadabacabaFBaYOcabcbacabcbacOYaBFabacabadabacaabacabadabacaaaaadcbaababaaabacabadacabaababaabadabbbbaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacababacaaaaaaaaacabadabacabaa") == "ababaabacabadabaabaababaabacabadabacabaaababaabcdaaaaacabadabacababacaaaaaaaaacabadabacabaabacabadabacaaaaaaaaacababacabadabacaaaaadcbaababaaabacabadabacabaababaabaabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacaabcadabacabaabcaba") == "abacabadabacaabcadabacabaabcabacbaabacabadacbaacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacabadabacabpneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicovolcanoconiosis") == "abacabadabacabpneumonoultramicrbabracecaabacabadaaaaaabacbarracecarcopicsilicovolcanoconiosisoinoconaclovociliscipocracecarrabcabaaaaaadabacabaacecarbabrcimartluonomuenpbacabadabacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("pneumonoultramabaaabacabadaacabaaaaaaaicrosracecarcopicsuilicovolcanoconiosis") == "pneumonoultramabaaabacabadaacabaaaaaaaicrosracecarcopicsuilicovolcanoconiosisoinoconaclovociliuscipocracecarsorciaaaaaaabacaadabacabaaabamartluonomuenp")){ tests_passed++; } total_tests++;

    if((make_palindrome("aabaababaabacabadabacabaaababaabbcdaaaaacabadabacababacabaaabc") == "aabaababaabacabadabacabaaababaabbcdaaaaacabadabacababacabaaabcbaaabacababacabadabacaaaaadcbbaababaaabacabadabacabaababaabaa")){ tests_passed++; } total_tests++;

    if((make_palindrome("oQbCC") == "oQbCCbQo")){ tests_passed++; } total_tests++;

    if((make_palindrome("abacaababazzzzazyzzzbazaababaabacbabdabadabacabaaaaaaaacabadabacabaabcddabacbaa") == "abacaababazzzzazyzzzbazaababaabacbabdabadabacabaaaaaaaacabadabacabaabcddabacbaabcabaddcbaabacabadabacaaaaaaaabacabadabadbabcabaababaazabzzzyzazzzzababaacaba")){ tests_passed++; } total_tests++;

    if((make_palindrome("ababaabacabadabacaabadabacaabzzzzazyabacabadabacbaazzzazyzzzzbadabacbaabadabacaabadabacba") == "ababaabacabadabacaabadabacaabzzzzazyabacabadabacbaazzzazyzzzzbadabacbaabadabacaabadabacbabcabadabaacabadabaabcabadabzzzzyzazzzaabcabadabacabayzazzzzbaacabadabaacabadabacabaababa")){ tests_passed++; } total_tests++;

    if((make_palindrome("zzzazabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcyzzz") == "zzzazabababaabacabadabacabaaaaaaaacabadabacabaacabadabacabaabcyzzzycbaabacabadabacaabacabadabacaaaaaaaabacabadabacabaabababazazzz")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


