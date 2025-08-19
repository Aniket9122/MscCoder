#include <string_view>
using namespace std;

int countBoredom(const string& S) {
    int count = 0;  // Initialize counter variable
  
    size_t pos = 0;
    
    while (true) {
        // Find the next sentence starting with 'I'
        pos = S.find('I', pos);
        
        if (pos == string::npos || (pos != 0 && S[pos-1] != '.') || 
            (pos+2 < S.size() && (S[pos+2] == '.' || S[pos+2] == '?' || S[pos+2] == '!'))) {
            break;  // No more sentences starting with 'I' or found a sentence not followed by '.', '?', '!'.
        } else {
            ++count;  
        }
        
        pos += 3; // Skip 'I ', which has been found.
    }
  
    return count;  // Return the number of sentences starting with 'I' or not followed by '.', '?', '!'.
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

    if((is_bored("Hello world") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Is the sky blue?") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("I love It !") == 1)){ tests_passed++; } total_tests++;

    if((is_bored("bIt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("I feel good today. I will be productive. will kill It") == 2)){ tests_passed++; } total_tests++;

    if((is_bored("You and I are going for a walk") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("bIt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wish") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeMkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stgill") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("will") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("time.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lxzoTZlWQp") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("museums") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("I") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Ugh!report.i") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("have") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("you") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("opportunity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("around") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("expensive.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hate") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("duue") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("inside") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hod.ave") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeMYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeMeYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("w") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("this") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("just") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeMkYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("talked") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wanted") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("thigngs") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("spedrive,nt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movie") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("some") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("report.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stggill") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wishbought") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stand") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("always") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("abackround") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("She") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("exchanged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("her.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("som") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nI") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("extension.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeknows!MYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("go") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeMYDtiHeMkfeYYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("not,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("urun.l") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gooAlthough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("parks") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("milk.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("We") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("me.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lahughedsaw") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("the") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("edxchanged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("project.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("talk") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("spent") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("behistoryt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("opportbeachunity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gggooAlthough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("today.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hour.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("day") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("finish") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Hello") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("jusst") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gooAlthou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeMeYYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("duuego") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("timet.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rert.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("get") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Are") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("vkcaRSvxRr") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ggooAlthoughgoohd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("was") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("exepnloring") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("traiculture.n") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gdot") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("spedtrit") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Arspentelive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("spedrive,nctalkgot") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("active!ng") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beiYesteerday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHfeMeYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Dt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beiYeteerday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("haave") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("t") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("opbportbeachunity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("want") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("meetings") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("projectc.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hDptiHeMkfeYope") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("soo.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Itof") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("spedcrive,nctallkgot") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("opHowever,bportbeachunity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtareiHeMYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("visited") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("art") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("back") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("parking") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Dtspedcrive,nctallkgot") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wgoohdishbought") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beautiful") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("The") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("work.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("many") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("also") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("vkcaRSvxR") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("learntalk") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("things") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("good?") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("manyaged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ahod.ave") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("retoort.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Howeverr,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("eo.n.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("repwgoohdishboughtort.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beautifuenjoyl") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("to") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("pYesterday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beiYesterday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ggooAlth") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("reopwgoohdigdotshboughtort.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("spedrivve,nt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("goo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("traiculturecomplete.n") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("someleaopbportbeachunityrntalk") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("too") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("omeetingsever,bportbeachunity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("honaave") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hDptacYope") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wantleearned") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("spedpcrive,nctallkgtrain") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("can") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("so") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Ifwanted") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("grat") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("timefeeling") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aart") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Thetreove") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tactivehoot") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hDptacYoe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("green?") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beachggooAlHello") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("turned") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("extensioen.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("projjectc.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("eHUAgcb") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Ugh!") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stgillgooAlthough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiH") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("me.too") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("parkinIg") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beiYestetrday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("eHUAgHoweverr,cb") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aPhAa") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("googardens.hd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("partomorrow.kinisactive!per.herIg") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ally") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lastDtiHeknows!MYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("isactive!per.her") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ac!") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("forrun.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("musems") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("su") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hope") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Thetereove") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("n") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Shhe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("somreleaopbportbeachunityboughttalk") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("isI") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("foer") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("project.n.her") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wafinishs") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("drive,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wnishs") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("pars") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nII") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gggooAlthoughThe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("sti") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("bet") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movibute") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Howcevera,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("activve!ng") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("came") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("good") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("outside.houghgoohd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("bu!sy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("learnatalk") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("exchacnged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("such") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("mfeelinganaged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("cThetereovean") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ItdI") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("back.go") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("reporpt.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beeiYeteerday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Yest!erday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("weather.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beautifuenjoyjl") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("WWe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("laughed") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("parsShe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("fph") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gde.work.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("isday.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("opportunitbeautifuly") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("went") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Dtspedlkgot") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rert") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("opbportbeacbgoodghthunity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("mums") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("duuduringe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Yesat!erday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("fee") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("trai") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hThe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("getnight.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("suchmany") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("great") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seppent") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("andain.her") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("alsyss") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wantleearwnishsned") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hinsideThe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tgdeThehis") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("horert.ur.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("exchangecd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ADtareiHeMYkfeYrspentelive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("projectec.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("W") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("me.aYesterday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("yThetreeove") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("behistoryotlastDtiHeknows!MYkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("DtiHeMbackkfeY") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("bask") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("edxopportbeachunitychanged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tooo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ctalkgo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("n.her") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ecd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hoave") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("pain.herhe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tai") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("duued.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("IH") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lreabetlly") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("waactivehoots") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("edxopportbeachunityouTheychanged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("exchansugecd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tart") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("bed?ay.spedpcrive,nctallkgtrain") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wwill") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rthigntraings") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("abackdround") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("WWerert") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("greasoon!me.t") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("city.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("galleries.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("active!lways") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beachggooAlHelsomreleaopbpogrtbeachuanityboughttalko") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gggooAlthotraiinThe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("vhonavave") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("haYesterday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lovesom") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("active!peed") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rtor") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("huour.ited") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beiYestereday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aPhAamI") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("edxoppdortbeachunitychanged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Ther") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("partomorrow.kinisactive!per.hestayrIg") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tactive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("so!") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ggooAlthoughdgoohd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("back.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("F") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("opportbeachuninity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("YesterdayahoYesterday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wehather.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Paris,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Drusht") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hDptiHeMkfope") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ling") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("b!u!sy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("manyyaaged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("meetingknows!kgo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("specompleetedtrit") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("active!pepain.herhe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beiYestea") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("exploaas") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tihme") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("edxoppsride.ortbeachunitychanged") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("numbderss.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movoie") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("turbeiYesteerdayned") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("UmvV") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ssoo.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wiwsh") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rerlxzoTZlWQpt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("laugghed") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("see.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("RXNeOJO") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stag") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ecdayd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("beautihalvingfuenjoyjl") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("dItdI") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("omeetingsever,bportbeachunityyou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Shhegde.work.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("suchmamny") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("way") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stWWereet.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("about") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("see") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("a") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("anHowever,d") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("vlive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("D") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("for") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("do") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("sstore") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seetomorrow..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Why") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("during") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("whorushle") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("live") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("d") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("urbs,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("at") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("urbss,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notcould,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stoday.dee") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("complete") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nigh.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("street.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("folivver") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Yesterday") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("However,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("att") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("foobetd.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ur") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notocould,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("walked") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("udady.rbs,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nopaerks") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Who") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("sstorte") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("selike") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("enjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wl") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Wo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Parsehaveliksmiledeis,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("in") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("UJHpsxQi") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("all") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("vlivUJHpsxQie") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("sub") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hot") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notcouldstore,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Wsawho") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("caAlthough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seAlthough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lvisitedive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aa") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("night.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("today.yyou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seetohours.morrow..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("outstoreside.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("sw..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("If") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("asstwillorea") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rreal") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aall") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Iftime") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("store") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aaa") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("alwways") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seetohours.moorrow..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seetohatvtItendours.moorrow..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nibackght.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("P,aris,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ask") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("away.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gardens.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("on") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("arodunnd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("caday.n") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seAlthoAugh") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("dbtraineing") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wwZQ") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("so.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("greenworld.?") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("arou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("had") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("n.UJHpsxQi") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aroseAlthoAughund") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("visiparksgsWo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nibacht.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("runbought.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("atfood.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lvisitedaughd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("knows!") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("UJHpsxQiapain.utrbs,aa") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aactive!utday.yyouall") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("allenjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seAlthtough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("mtomorrow.e.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("arexpensive.ound") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("liv") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("visiting") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("assk") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notcouldstore") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stcity.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Whoa") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("raeally") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("but") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seli") == 0)){ tests_passed++; } total_tests++;

    if((is_bored(".gardens.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("atvtend") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("There") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lviin") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lean") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("exbe?,tension.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("dbtrg") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("suburbs,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("crowded") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aaall") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("no") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ssasstwilloreatore") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notcoudld,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movieenjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("garden") == 0)){ tests_passed++; } total_tests++;

    if((is_bored(".gardenns.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aactiraeallyve!utday.yyouall") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ithen") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("so.abouIt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wlsw..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("feeling") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Whorunbought.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nhight.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("outstorecanside.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("eto") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Ifte") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("outside.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Arlthough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("uwholerbs,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wayt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wuhorushle") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seetohours..morrow..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Woo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("odo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Iextension.f") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("eseeli") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("having") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("atfood.done") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("vliv") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rrWholeal") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movieennjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("suburbsus,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gyouarden") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("anlvisitedive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("hours.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("alwwexploringays") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notcoudldlivve") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("dd") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("paerks") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("eiseeli") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("onn") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notucould,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("whorushloe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("UJHpsxQipthisarks") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("laughewholedall") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ganhightt.rden") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("alalways") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lliv") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Iwill") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("o") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("run.like") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("due") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("foaughed") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ganhigalwwexploringayshtt.rden") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("are") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notucouHoweverl,,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("swatfood.done") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("food.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("night.gardens.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tutrbs,o") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("really") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("done") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wwsawQ") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("day..") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("llenjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movienjoyearou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("being") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nibachAlthoungardvpthIens.ight.g") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("good?allenjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gylaughedouarden") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Whotraineing") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("ants") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("crowwYesterdayded") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nibaght.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("could") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("laughewholed") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("active!ut") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("run.elike") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lvistitedive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("l") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("UJHpsxQiapain.utrrbs,aa") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("tuWhoarned") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seAlthtougAlthoughlean") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("n.UJHpsxQ") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("n.highnibachAlthoungardvpthIens.ight.g") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aarou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("lvissitedive") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("n.UJHpxsxQi") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("UJHpsxQ") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("thhe") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("pain.o") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("saw") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("i.gardenns.then") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("moyearou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gItardens.se") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("oppportunity") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("aadurexbe?,tension.ingrou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("bnibackght.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Whysstorte") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Jn.UJHpsxQi") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("GlosYIiJIA") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("agardens.hnHowever,d") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("staroseAlthoAughunde") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wantstand") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("galleries.today.yyou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("notucoppportunityould,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("stree") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("atrt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("dguring") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("v") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("seAlthtoough") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("be?,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("n.UJxsxQi") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("uddady.rbs,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored(".ggardenns.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nopaerksstrrreet.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored(".outsmuseumside.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("active!utt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("nightnve") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("crowwYesterdayed") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Whotrainepain.og") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("UJH,psxQiapain.utrbs,aa") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Howevern,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movienjoyeearou") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("manageng") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("greaboughtt") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("arto") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("erreal") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("movite") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("urHowever,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("svpthIaw") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("suburbsaaa,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("moenjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("angetId") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("fouddady.rbs,r") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("wwork.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("iso.store") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Ugh!g") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Whysstortebe?,") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("visiparksgsgWo") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rcrowded") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Parsehaveliksm") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("like") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("was.gardens.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("dbboughttrg") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("run.liher") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("selcity.i") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("outstorecansitodayde.") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("gdardenmovieengylaughedouardenjoy") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("havin.UJxsxQing") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("rcrowTheded") == 0)){ tests_passed++; } total_tests++;

    if((is_bored("Howeovern,") == 0)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


