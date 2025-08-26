#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(const string& word) {
    // Find the first vowel from the right side of the word
    auto first_vowel = find_if(word.rbegin(), word.rend(), [](char c) { return isupper(c) || islower(c); });

    // If no vowel was found, return an empty string
    if (first_vowel == word.end()) {
        return "";
    }

    // Find the first consonant from the right side of the word
    auto first_consonant = find_if(word.rbegin(), word.rend(), [](char c) { return !isupper(c) && !islower(c); });

    // If no consonant was found, return an empty string
    if (first_consonant == word.end()) {
        return "";
    }

    // Return the vowel that is between the first consonant and the end of the word
    auto result = find_if(first_vowel + 1, first_consonant, [](char c) { return isupper(c) || islower(c); });
    if (result != first_consonant) {
        return string(1, *result);
    } else {
        return "";
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

    if((get_closest_vowel("yogurt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("full") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("easy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("eAsy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ali") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bad") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("most") =="o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ab") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ba") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("quick") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("anime") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Asia") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Above") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yogurt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("full") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("easy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("eAsy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ali") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bad") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("most") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ab") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ba") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("quick") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("anime") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Asia") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Above") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hello") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("cup") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kill") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bike") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("album") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("mute") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("nylon") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("jelly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hi") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("try") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("himute") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("jejellylly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hill") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hilljejellylly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("alb") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hilljhejellylly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttrty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("helo") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("lalb") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("aabuum") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehehilo") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttrjejellyllyt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kilbike") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bkike") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ccup") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehehi") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kiill") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("trjejellyllyt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("himuhilljejellyllyte") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhimute") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehehilohi") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knylonill") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bik") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhhimutehimute") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhimutehilljhejellyllbiky") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhhimutehimuute") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("halbilljhejellylly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knyloknill") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knyonnill") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("al") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhimue") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knylonbikill") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehello") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knyloknnill") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehehhhimutehimutehilohi") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hillhhhimutehimuute") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttrtybike") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhhimutehimuuehehilote") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kilil") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hii") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hiylljejellly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hialllhi") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knylonbik") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehhimutehilljhejellyllbiky") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kiliiil") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ljelly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("halbilljhejellyy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("thilljejellylly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knyloll") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("nyhialllhilon") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kiliil") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hillll") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("muthiie") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("heolo") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("lnyhialllhilon") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hialllihhi") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knkilbikieylonbikehehi") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("eheho") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hiill") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("lal") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("mte") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhiue") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hialllhhimutehi") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hiilhalbilljhejellyllyl") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("h") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hlialllihhehehoi") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("khhimueilbhiilhalbilljhejellyllylike") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehehjellyo") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("lehhello") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ljellly") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("jlemuthiielly") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kiihlialllihhehehoill") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("lly") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("jelely") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("jejhhimute") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hikillll") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("trthialllihhiy") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knyonnillhhimue") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehehhhimutehimutehilkilbikeohi") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("jlemutly") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("knylonbikilll") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hlikilhialllhhimutehilll") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("lalbkike") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhimutehilljhejellyllbikytmute") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhimutbkikee") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hillhhhimhimuute") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ehlo") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hhhimutehimuuehehilalbkikelote") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kooxnne") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyyiuy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("UVWXYZuvwxya") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrtt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdabbkrtfdoiyyiuyfghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQWERTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtiyyiuy") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkyrtfdoiyyiuy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kooxnzbcdabbkrtfdoiyyiuyfghijklmnoprszouzzzane") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprszuouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwertty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwertyxyzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Mss") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("sMss") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("sMbbkrtiyyiuyss") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnoprszuouzzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghoqwerttyjxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzzqaiozzxyzabcDEFghizbcdafghikooxnnejklmnoprszuouzzzazbcdafghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijklmnoprszouzzzacdmafghijklmnoprszuouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkllmnoprszuouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghioprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Msss") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERTYqwertywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEDFghDi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdefabcdzzzqaiozzczbcdafghijklmnoprszuouzzzazeffeedcbafeedcba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkllmnoaprszluouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("iqwertyxyzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdabbkrtfdoiyyiuyfghijklmnoprszouzozza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zjklmnoprstuvEQWERTYqwertywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQWERTYTqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abccdeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("s") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaauztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdeffeeba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqaiozzzbcdafghijklmnoprszuouzzzzazklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyhzabcDEDFghDi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlmnoprszuouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttrtt") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zxyzabcDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnobprszuouzzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzrtttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdeffeeMssdcbatttxuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovesmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlmnoprszuonuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxuxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzrtysMss") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkyyrtfdoiyyiuyy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTYqwerEty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwertyxyzabDcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzzzaqwertyty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzztrtttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("txyzabcDEDFghittuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERTYqwertywxeyzzouzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERTYqwertzzzszuouzzzazywxeyzzouzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDhEiFghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqxaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqaiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuouzzzazeffeedcbaxyaeyzzouzzzbgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaauztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbsMbbkrtiyyiuysscdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kooxnnzbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzae") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzrzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzztrttttxyzabczbsMbbkrtiyyiuysscdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERTYqwlertywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafgghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghijklmnoprtuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdeffeeMxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqxaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghissdcbatttxuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyttxuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhazbcdafghijklmnoprszuouzzzapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdefabcdzzzqaiozzczzbcdafghijklmnoprszuouzzzazeffeedcbafeedcba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyizbcdafghijklqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwertyxyzabDcrDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijaklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijklmnoprszouzzzacdmafghijklmnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zxyzabcDEDFghxyzabcDhEiFghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzxrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQzbcdabbkrtfdoiyyiuyfghijklmnoprszouzozzarqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabibkrtfdoiyyizbcdafghijklqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzrzzqaiozzzbcdafghijklmnoprszuouzfxyzabcDEFghizzazbbkrtiyyiuykooxnneefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTYqwzzzqaiozzzbcdafghijklmnxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghioprszuouzzzazerEty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERTYqWwlertywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzrtttabcdeffeezbcdabbkrtfdoiyyiuyfghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlmnopsrszutttxuxzrtiyouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("sMs") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyiuysscdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdhafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyiuysscdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kooxnzbcdabbkrtfdoiyyzbcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzane") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzahbcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyizzzqaiozzzuysscdafghijklminoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdefftttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqweedcbaerty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("sMbbkrtiyyzbcdafghijklmnoprstuvwwabcdzrzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyiuyss") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zjklmnoprstuvEQWERTYqwertywxpeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MszxyzabcDEDFghis") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbbkrtfdoiyyiuybcdafghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkbrtiyyiuy") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zfghijkzlmnoprszuonuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqaiozzzbcdafghijklmnoprszuouzzzzazklmnotttxuxzzzrttQWERTYqwertyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdaxyzabcDEFghizuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuraovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQzbcdabbkyrtfdoiyyiuyfghijklmnoprszohuzozzarqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrxyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFghirzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zfbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zjklmnoprstuvEQWERTYqwertywxezza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttxyzabczbcdafghirrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdaxyzabcDEFghizuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("sMabcdzzQWERTYqwertyzqaiozzzbcdafghijklmzuouzfzzazeffeedcbas") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijklmnoprszouzzzacdmafghijklumnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxsrtysMss") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Qnohs") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxziqwertyxyzabcDEFghirtysMss") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdeffeeMssdecbatttxuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlmnopsrszutttxuxzrtiyozbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwert") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvzbcdafghizbcdabibkrtfdoiyyizbcdafghijklqwertyydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zabzbcdafghijklmnoprszouzzzacdmafghaijklmnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzouzozzarqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzrxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttxyzabczbcdafghirrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdaxyzabcDEFghizuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghiy") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxzrtty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyizbcdzbcdafghijkzlmnopsrszutttxuxzrtiyozbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzztrttttxyzabczbsMbbkrtiyyiuysscdafghijklmnoouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxzrttuy") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjqwerttyxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijtttxuxzrtysMssklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qweertty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafaeyzzouzzzaqwerrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFabdcdeffeeMssdecbatttxuxzrtyghi") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyzzzszuouzzzazfeedcba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlzbcydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnoprszuouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstusMsvwxUVWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTYqwerEtyy") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghiqjklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghoqwerttyjxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazeffeedcbaRTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qweerty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("stttxuxzztrttttxyzabczbsMbbkrtiyyiuysscdafghijklmnoouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtysMssondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbgzxyzabcDEDFghihojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaghijklmnoypvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abccdeffeedczbcdafghijklmnoprstuvQWERTYqwertywxeyzzouzzzzaba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxzzbcdafghijkzlzbcydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnoprszuouzzzarttuy") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzzzqaiozzzbcdafghijklmnoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuuxzrtty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("txyzahbcDEDFghittuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhazbcdafghijklmnoprszuouzzzapqjriulawnpeytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdafghijklmsMbbkrtiyyzbcdafghijklmnoprstuvwwabcdzrzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyiuyssnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyiuysscdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvtttxuxzrxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttxyzabczbcdafghirrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdaxyzabcDEFghizuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghiynpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdaabbkrtfdoiyyiuyfghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvwza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqaiozzzbcdafghijklmnoprszuouzzzzazklmnotttxuxzzzrttQWERTYqwertyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzrtttabcdeffeezblmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVttctuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuoubbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnnezzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiitttxuxzzrttttiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghiQWERTYqwerEtyyghijklmnoprszuouzzzzazklmnotabdcdeffeedcbattxuxzzzrttQWERTYqwertyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghtttxuxzzzrtttijklmnoprszuouzzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuouzzzazeffeedcbaxyaeyzzouzzzbgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZukvzbcdafghijklmnoprstuvwxeyzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxsizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafgghijklmnoprstuvwwxyaeyzzouzzzakqwertyfeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("sMsss") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaauztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulopglbghojxxwnovsmrqajxWXYZurty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxsizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfwghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzaoprstuvwwxyaeyzzouzzzaqkooxnzbcdabbkrtfdoiyyzbcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzanea") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abzddcdefabcdzzzqaiozzczbcdafghijklmnoprszuouzzzazeffeedcbafeedcba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnoprszuouzzzzauz") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtysMssondjofzhhxyhzabcnylrlzhkemjxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijkzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("r") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdhafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyiuysscdafghijklmnoprxyhzabcDEDFghDizoukzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghilmnoprstuvwxUVWXYZukvzbcdafzghijklmnoprstuvwxeyzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qqwert") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzaoprstuvwwxyaeyzzouzzzaqkozbcdafghijklmnoprstuvwxUVWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzaoxnzbcdabbkrtfdoiyyzbcdafghizbcdafghijklmnoprstuvQWERTYqwertywxeyzzouzzzzajklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzanea") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknxsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtysMssondjofzhhxyhzabcnylrlzhkemjxbopglbghojxxwnovsmrqajxsjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvsajxzabcDEFghioprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERzzzqaiozzzbcdafghijklmnxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvsajxzabcDEFghioprszuouzzzazTYqwlertywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafgzbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzzzaqwertytyebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovesmrqajxiiiiiiiiiinprlxfaaaaaaaaaaauztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretzbcdafghijklmnoprstuvQWERTYqwertzzzszuouzzzazywxeyzzouzzzzaepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhazbcdafghijklmnoprszuouzzzapqjriulawnpeytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiuqqwertrovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnopurstuvwwxyaeyzzouzzzaqwertyfeedcbabdcdeffeeMxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqxaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghissdcbatttxuxzrtya") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaghijklmnoyprstttxuxzzzrtttuvwwxyaeyzzouzzzaqwerzbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzzzaqwertyty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffeedcb") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhawpqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvidzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxsizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfwghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaakooxnnzbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzaeaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkbrtttxuxzrtyy") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqzaiozzz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghihjklmnoprszuouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhtttuuxzrttyvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaxyhzabcDEDFghDighijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("txyzabcDEDFghittxuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmreqajxsizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfwghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaq") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiibbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnneinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnobprsabcdzrzzqaiozzzbcdafghijklmnoprszuouzfxyzabcDEFghizzazbbkrtiyyiuykooxnneefzbcdafghijklmnoprstuvwwxyaeyzzouzzzabazuouzzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qtweertty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouay") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("o") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuzbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzzaxzzbcdafghijkzlzbcydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnoprszuouzzzarttuy") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuouzzzazeffeedcbaxyaeyzzouzzzbgaqwaerty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvzbcbbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazeffexytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghoqwerttyjxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffeedba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnbbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvyMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtysMssondjofzhhxyhzabcnylrlzhkemjxbopglbghojxxwnovsmrqajxsdknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretzbcdafghijklmnoprstuvQWERTYqwertzzzszuouzzzazywxeyzzouzzzzaepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnneiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafaetttxuxzzrtttabcdeffeezbcdabbkrtfdoiyyiuyfghijklmnoprszouzzzayzzouzzzaqwerrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghieoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkybbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhazbcdafghijklmnoprszuouzzzapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnnefdoiyyiuyy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQzWERTYTqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzszuouzzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxzzttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzrtttabcdeffzbcdafghijklmnoprstuvQWERTYqWwlertywxeyzzouzzzamnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafacbcdeffeedcbaghijklmnoypvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkllmnoxyzabczbcdafghijklmnoprtuvwxeyzzouzzzaDEDFghiprszuouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedzjklmnoprstuvEQWERTYqwertywxpeyzzouzzzacba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffeedcbabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzaoprstuvwwxyaeyzzouzzzaqkooxnzbcdabbkrtfdoiyyzbcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzaneaa") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzszuozuzzuzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffeedbttttxuxzzrttta") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaabcdzzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedzjklmnoprstuvEQWERTYqwertywxpeyzzouzzzacbazabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qweezbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabczbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzaeffeedcbaxyaeyzzouzzzgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zjklmnoprstuvEQWERTYqwertywxeyzzozbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwertyuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ahijklmnoprszuouzzzazeffeedcbafeedcba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriuilawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxzaqwertyfghxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghiijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepwertywxpeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEDFFghDi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzDabcDEDF") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxzzzqaiozzzbcdafghijkzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzazbopglbgzxyzabcDEDFghihojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifptttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzzzqaiozzzbcdafghijklmnoprszuouzzzazaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttttExuxzzzrttQzbcdabbkrtfdoiyyiuyfghijklmnoprszouzozzarqajxWERTYqwzrttQWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugQWEabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazeffeedcbaRTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghtttxuxzzzrtttijklmnoprszuoubbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiibbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnneinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyzbcydafabcdeffeedcbaghijklmnoypvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnnezzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertycnvtvlztxxmgwabcdzzzqaiozzzbczzzqaiozzzbcdafghijkzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzazjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghieoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdeffeabdcdeffeeMxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqxaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghissdcbatttxuxzrtyeba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlmnopsrszutttxuxzrtiyozbcydafabcdeffeedcbaghijklmnoyprstuTvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqzbcdafghilmnoprstuvwxUVWXYZukvzbcdafzghijklmnoprstuvwxeyzouzzzaaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuouzzzazeffeedcbaxyaeyzzouzzzbgaqwaerty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaxyhzabcDEDFghDighijklmnoyprstuvwwxyaeyzzobbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhazbcdafghijklmnoprszuouzzzapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnneuzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvtttxuxzrtxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttxyzabczbcdafghirrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdaxyzabcDEFghizuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghiynpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFabdcdeffebbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhawpqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnneeMssdecbatttxuxzrtyghi") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknxsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvidzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxsizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfwghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdpeffeedcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtysMssondjofzhhxyhzabcnylrlzhkemjxbopglbghojxxwnovsmrqajxslmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdxyzabcDEDFghDiafghijklm") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemzjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghiQWERTYqwerEtyyghijklmnoprszuouzzzzazklmnotabdcdeffeedcbattxuxzzzrttQWERTYqwertyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyWXYZuvzbcdafghijklmnopzbcdafghijklmnoprstuvwxUVzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqaiozzzbcdafghijklmnoprszuouzzzzazklmnotttxuxzzzrttQWERTYqwertyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzarstuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("hijklmnoprszuouzzzzazklmnotttxuxzzzrttQWERTYqwerzbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaqwertytyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkirtiyyiuy") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffeedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("atttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuraovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxbfcdeffeedba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("stttxuxzztrttttxyzabczbsMbbkrtoiyyiuysscdafghijklmnoouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghiijklmnoprtuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxzzzqaiozzzbcdafghijkzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzazbopglbgzxyzabcDEDFghihojxxwnovsmxyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFabdcdeffebbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhawpqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnneeMssdecbatttxuxzrtyghirqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zobcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnopzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzarszbcdafghijklmnoprstuvwxUVWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzatuvQWERTYqwlertywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijklmnoprszaouzzzacdmafghijklmnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaghijklmnoyprstuvwwsxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfgdoiyyizbcdafghijklqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcxyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFabdcdeffeeMssdecbatttxuxzrtyghiertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqzbcdafghilmnoprstuvwxUVWXYZukvzbcdafzghijklmnoprstuvwxeyzouzzzaaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuouzzzazeffeedcbaxyaeyzzouzzzbgaqwaertytttxuxzzrtttabcdeffeezblmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwertyzzouzzzaqwertyfeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvjydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzlzhkemjxbopglbghojxxwnovsmrqajxzzzqaiozzzbcdafghijklmnoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("txyzabcDEDFgDhittuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafgtxyzabcDEDFghittuxzrtyhijklmnoprszouzzzacdmafghijklumnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdafghijklzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzzzaqwertytymnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyiuysscdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("IA") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdeffeeMxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafgghijklmnoprstuvwwxyaeyzzouzzzakqwertyfeedcbaurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqxaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghissdcbatttxuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEqRTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzszuouzzbcdafghizbcdabbkrtfdoiyyMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvidzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxsizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfwghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdpeffeedcbazzaqwertyzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofdzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepwertywxQnohszzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MszxyzabcDEDFgis") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinpzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprszbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwertyaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxuxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffeedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxrvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcMsssdatttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxzzzqaiozzzbcdafghijkzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzazbopglbgzxyzabcDEDFghihojxxwnovsmrqajxz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzbcdafghijklmnoprszuouzzzahirtysMss") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlmnopsrszutttxuxzrtiyozbcydafabcdeffeeadcbaghijklmnoyprstuvwwxyaeyzzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzzqaiEFghizbcdafghikooxnnejklmnoprszuouzzzazbcdafghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnoprszqweertyuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghzxyzabcDEDFghiijklmnoprstuvwxUVytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kooxnzbcdabbkrtfdoiyyzbrcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzane") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknxsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhe") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzxyzabcDEFghibcdatxyzahbcDEDFghittuxzrtyfghijklmnoprszuouzzzazeffeedzjklmnoprstuvEQWERTYqwertywxpeyzzouzzzacba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsMs") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouztttuuxzrttyzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuzbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzzaxzzbcdafghijkzlzbczbcdafghijkzlmnoprszuouzzzaydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnoprszuouzzzarttuy") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffezzzqaiozzzbcdafghijklmnoprszqweertyuouzzzazedbttttxuxzzrttta") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqxaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghozjxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzztrttttxyzabczbsMbbkrtiyyiuysscdafghijkclmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttrtt") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzabcdzrzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbarty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkuriifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzxyzabcDEFghibcdatxyzaertywxpeyzzouzzzacba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxzzbcdafghijkzlzbcydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnprszuouzzzarttuy") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtiytttrttyiruykooxnne") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzdafghijklmnoprszqweertyuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("e") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqaiozzzbcdafghijklmnoprszuouzzzzazklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertylcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEqRTYqwertttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxuxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqwty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYkooxnzbcdabbkrtfdoiyyzbrcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzanenoprstuvwxeyzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcxyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFabdcdeffeeMssdecbatttxuxzrtyghiertyfghijklmnoprszuouzzzaziiiiiinprlxfqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("LNFZmHOo") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafacbcdeffeedcbaghijklmnoypvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTkYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvQWERTYqwertzzzszzuzbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzaouzzzazywxeyzzouzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijklmnoprszouzzzacdmafghijklmnoprszuozbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzkooxnnzbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzaea") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiabfcdeffeedcbiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Mssss") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmacnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrlzhkemjxbopglbgwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafacbcdetttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuraovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxffeedcbaghijklmnoypvwwxyaeyzzouzzzsaqwerzjklmnoprstuvEQWERTkYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijkzbzbcdafghijklmnoprszouzzzacdmafghijklmnoprszuouzalmnoprszuouzzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertycnvtvlztxxmgwabcdzzzqaiozzzbczzzqaiozzzbcdafghijkzbcdafghijktttxuxzztrttttlmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzazjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghieoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydafabcdeffeedczbcdafghijkzlmnopsrszutttxuxzrtiyozbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzzaijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzzzaqwertyty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiitvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijklmnoprszaouzzzacdmafghijtttxuxzzrtttabcdeffeezbcdabbkrtfdoiyyiuyfghijklmnoprszouzzzaprszuouza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzrzzqaiozzzbcdafghijklmnoprszuouzfxyzabcDEFghizztttrttazbbkrtiyyiuykooxnneefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEqRTYqwerYty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaauztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvabcdzzzqaiozzzbcdafghijkzbzbcdafghijklmnoprszouzzzacdmafghijklmnoprszuouzalmnoprszuouzzzazeffeedcbayscurovmjxebakretepxhapqjriulopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MszabdcdeffeeMssdcbatttxuxzrtyxyzabcDEDFgis") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzazztrtttt") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhtttuuxzrttyvyscurovmxebakretepxhzbcdafghijklmnoprszuouzzzaapqjriulawnperyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjbbkrtiyyiuyjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmntttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepwertywxpeyzzouzzzaoprszuouzfzzazefzbcdafghzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzaoprstuvwwxyaeyzzouzzzaqkooxnzbcdabbkrtfdoiyyzbcdafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzanea") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("stttxuxzztrttttxyzabczbsMbbkrtoiyyiuyssctttxuxzzzrttQzWERTYTqwdafghijklmnoouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzzuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmdnoprstuvwxUVzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghiQWERTYqwerEtyyghijklmnoprszuouzzzzazklmnotabdcdeffuzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaizozzz") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzabcdzrzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbartyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQzWERTYzTqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjsjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffeedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwtttuzbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzzaxzzbcdafghijkzlzbczbcdafghijkzlmnoprszuouzzzaydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnoprszuouzzzarttuyiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsMzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretvepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwertys") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffezzzqaiozzzzzqaiEFghizbcdafghikooxnnejklmnoprszuouzzzazbcdafghijklmnoprszouzzzaafghijklmnoprszqweertyuouzzzazedbttttxuxzzrttta") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaizozz") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQzWERTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghizbcdabbkrtfdoiyyMsstttuxiozmcnrvxaxeeeeekzpzbcdafghijkMsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtysMssondjofzhhxyhzabcnylrlzhkemjxbopglbghojxxwnovsmrqajxslmnoprstuvwxeyzzouzzzawiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxsizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzajklmnoprstuvwvwxyaeyzzouzabcdeffeedcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("atttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiizbcdafghijklmnoprszouzzzaiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuraovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxbfcdeffeedba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzxyzabcDEFghibcdatxyzahbcDEDFghittuxzrtyfghijklmnoprszuouzzzazeffeedzjklmnoprstuvEQWERTYabbfcdeffeedcbqwertywxpeyzzouzzzacba") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaassxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQzWERTYTw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuryzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkllmnopaprszlpuouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtiyyiuykooxnnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyizzzqaiozzzuysscdafghijklmlinoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdabbkrtfdoiyyiuzyfghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijaklmnoprszouzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abccdeffeeda") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzzbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzabcdzrzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbartyzzouzzzaqwertyhkemjxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklhmnoprstuvwxUVttctuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuoubbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnnezzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprtepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxuxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffeedcbabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeytxyzabcDEDFghittuxzrtyaa") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttQzWERTYqwqwertyxyzabDcrDEFghierty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbzbcdafghijklmsMbbkrtiyyzbcdafghijklmnoprstuvwwabcdzrzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcbaxyaeyzzouzczzgaqwertyiuyssnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrticyyiuysscdafghijklmnoprstuvwxeyzzouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abdcdefazuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzrtyzbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzzasMss") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghiqjklmzzzqaiozzzbcdafghijklmnoprszuouzzzaznoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghoqwerttyjxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpmtbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrttuQWRTYqw") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknxsnhptbcttrrrzkurifpqjyypugyhliiiiiizbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwertyiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxtaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuryzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuryzabcDEDFghDijxkiyhfwmbvdtttrttzmssxxpwoaynylrzjklmnoprstuvEQWERTYqwertywxeyzzouzzzalzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtysMssondjofzhhxyhzabcnylrlzhkxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnotttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhtttuuxzrttyvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzaeffeedcbaxyaeyzzouzzzgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqzbcdafgVhilmnoprstuvwxUVWXYZukvzbcdafzghijklmnoprstuvwxeyzouzzzaaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuouzzzazeffeedcbaxyaeyzzouzzzbgaqwaertytttxuxzzrtttabcdeffeezblmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszzbcdafghijklmnoprstuvwxUVWXYZukvzbcdafghijklmnoprstuvwxeyzouzzzauouzzzzazklmnoaprszuouzzzazeffeedcbaxyaeyzzouzzzbgaqwaerty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghijklmnoprtuvwxeyzzLNFZmHOoouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("OLNFZ") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffeedbabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafgghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbaa") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzabcdzrzzqaiozzzbcdafghijklmnoprszuzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbartyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDFghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqzbcdafghilmnoprstuvwxUVWXYZukvzbcdafzghijklmnoprstuvwxeyzouzzzaaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuoupzzzazeffeedcbaxyaeyzzouzzzbgaqwaerty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaakooxnnzbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzaeaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffeedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxrvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwertyhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwertyxyzabDcDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiibbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiizbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjsjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffeedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwtttuzbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzzaxzzbcdafghijkzlzbczbcdafghijkzlmnoprszuouzzzaydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnoprszuouzzzarttuyiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwertywoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnneinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijklmnoprszaouzzzacdmafghijtttxuxzzrtttabcdeffeezbcdabbkrtfdotiyyiuyfghijklmnoprszouzzzaprszuouza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kooxtttxuxzzzrttQzWERTYzTqwnne") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqzatttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiizbcdafghijklmnoprszouzzzaiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuraovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxbfcdeffeedbaaizozz") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qqwerrt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafgtttxuxzzzrtthijklmnoprszouzzzacdmafghijklumnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffseedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("HtorPc") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmabcdzzzqaiozzzbcdafghijklmnobprsabcdzrzzqaiozzzbcdafghijklmnoprszuouzfxyzabcDEFghizzazbbkrtiyyiuykooxnneefzbcdafghijklmnoprstuvwwxyaeyzzouzzzabazuouzzzazeffeedcbaetepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaoqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqzbcdafghilmnoprstuvwxUVWXYZukvzbcdafzghijklmnotttExuxzzzrttQtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprtepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxuxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWERTYqwprstuvwxeyzouzzzaaiozzzxyzabcDEFghibcdafghijzzzqasiozzzbcdafghijklmnoprszuouzzzzazklmnoaprszuoupzzzazeffeedcbaxyaeyzzouzzzbgaqwaerty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlaztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeffeedcbaondjofzhhvyscurovmxebakretepxhapqjriuilawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("stttxuxzztrttttxyzabczbsMbbkrtoiryyiuysscdafghihjklmnoouzzzaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qtzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjsjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffeedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwtttuzbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzzaxzzbcdafghijkzlzbczbcdafghijkzlmnoprszuouzzzaydafabcdeffeedcbaghijklmnoyprstuvwwxzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatymnoprszuouzzzarttuyiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwertyweertty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttztxuzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabczbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzaeffeedcbaxyaeyzzouzzzgaqwertyxzxrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmabdcdeffeeMssdzabzbcdafghijklmnoprszouzzzacdmafghaijklmnoprszuouzaecbatttxuxzrtynoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zobcdafghijklmnoprstuvhQWERTYqwerWtywxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("DeMLGjH") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijkzlmnoxyzahbcDEFghipsrszutttxuxzrtiyozbcydafabcdeffeeadcbaghijklmnoyprstuvwwxyaeyzzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozzbzbcdafghijkzbcdafghijklmnoprszuouzzzalmnoprszouzzzacdmafghijklmnoprszuouzamcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyxhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzzzqaiozzzbcdafghijklmnoprszuouzzzaz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcdafghijklmnoprszqweertyuouzzzazssMsss") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvtttxuxzrxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknlsnhpbcttxyzabczbcdafghirrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdaxyzabcDEFghizuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghiynpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffeedcbafghijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzaneaa") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcydazbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzabcdzrzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbartyfacbcdeffeedcbaghijklmnoypvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTkYqwertywxeyzzouzzzaty") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzbcdafghijklmntttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepwertywxpeyzzkooxnzbcdabbkrtfdoiyyiuyfghijklmnoprszouzzzaneouzzzaoprszuouzfzzazefzbcdafghzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzaoprstuvwwxyaeyzzouzzzaqkooxnzbcdabbkrtfdoiyyzbcdafgabzddcdefabcdzzzqaiozzczbcdafghijklmnoprszuouzzzazeffeedcbafeedcbahijklmnoprstuvQWERTYqwerWtywxeyzzouzzzaiuyfghijklmnoprszouzzzanea") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzqaiozzzbcMsssdatttuxiozmcnrvxaxeeeeekzpwiktlvbjjxvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxzzzqaiozzzbcdafghijkzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzazbopglbgzxsyzabcDEDFghihojxxwnovsmrqajxz") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcxyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFabdcdeffeeMssdecbatttxuxzrtyghiertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qtweertwty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDbbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpsqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhazbcdafghijklmnoprszuouzzzapqjriulawnpeytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhxyhzabcDEDFghDiurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnnehEiFghi") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzabcdzrzzqaiozzzbcodafghijklmnoprszuzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbarteyzzouzzzaqwe") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zfghzbcdafghijklmnoprstuvQWERTYqWwlertywxeyzzouzzzaijkzlmnoprszuonuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zzzszzuozuzzuz") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MtttxuxzzzrttQWERTYqwertysbbkyyrtfdoiyyiuyyss") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaauztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyjscurovmxebakrezbcdafghijkllmnopaprszlpuouzzzatepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstusMsvwxUVWXYZuvzbcdafghijklmnoprstuuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvzbcbbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertylnylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTYqwertytttuxzrty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzabcdzrzzqaiozzzbcdafghijkIAlmnoprszuzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbartyzzouzzzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbgzxyzabcDzzzzqaiozzxyzabcDEFghizbcdafghikooxnnejklmnoprszuouzzzazbcdafghijklmnoprszouzzzaEDFghihojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqaiozzzxyzabcDEFghibcdatxyabdcdeffeabdcdeffeeMxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqxaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxzabcDEFghissdcbatttxuxzrtyebazaertywxpeyzzouzzzacbza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEabcdzzzoprszuouzfzzazeffeedcbaRTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgyhizbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzttdcbazzaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxzztttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzxyzabczbzbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzasMbbkrtiyyizzzqaiozzzuysscdafghijklmlinoprstuvwxeyzzouzzzaDEDFghizrtt") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsstttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwtttxuxzrtyzsMssondjofzhhxyhzabcnylrlzhkxbopglbghojxxwnovsmrqajxs") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkirtiyyxytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaabcdzzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedzjklmnoprstuvEQWERTYqwertywxpeyzzouzzzacbazabcDEFghiiuy") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zjklmnoprstuviEQWERTYqwertywxeyzzozbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvzzzzuouzzzazbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwertyuzzza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abccdeffeedzbcdafghizbcdabbkrtfdoiyyizbcdzbcdafghijkzlmnopsrszutttxuxzrtiyozbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzzaqwertya") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxzzzqaiozzzbcdafghijkzbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzalmnoprszuouzzzazbopglbgzxyzabcDEDFghihojxxwnovsmxyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFabdcdeffebbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhawpqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertynylrlzhkemjxbopglbghojxxwnzbcdafghijklmnoprstuvwxUVzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghiQWERTYqwerEtyyghijklmnoprszuouzzzzazklmnotabdcdeffeedcbattxuxzzzrttQWERTYqwertyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyWXYZuvzbcdafghijklmnoprstuvwxeyzzouzzzawxyaeyzzouzzzaovsmrqajxkrtiyyiuykooxnneeMssdecbatttxuxzrtyghirqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzztrttQzWERtTYTw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabczbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzbcdafghijklmnoprstuvwxUVWXYZukvzbcdafghijklmnoprstuvwxeyzouzzzazzouyzzzaeffeedcbaxyaeyzzouzzzgaqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcwdafghijkQWEqRTYqwertylmnoprnstuvwtzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyttxuxzrtyUVWXYZuvwza") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrxyzabczbcdafghijklmnoprstuvwxeyzzouzzzaDEDFghirzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxzzzqzatttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiizbcdafghijklmnoprszouzzzaiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscuraovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxbfcdeffeedbaaizozzebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MssszbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertys") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttttExuxzzzrttQzbcdabbkrtfdoiyyiuzbcdafghzxyzabcDEDFghiijklmnoprstuvwxUVytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyyfghijklmnoprszouzozzarqajxWERTYqwzrttQWERTYqw") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabczbcdafghiijklmnoprtuvwxeyzzouzzzbcdafghijklmnoprstuvwxUVWXYZuvzbcbbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoayzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdazbcdafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyfghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxnhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlezhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertylnylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnnezaDEDFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttztxuzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabczbcdafghijklmnoprstuvwxUVWXYZuvzbcdijklmnoprstuvwxeyzzouzzzawxyaeyzzouyzzzabccdeffeedzbcdafghizbcdabbkrtfdoiyyizbcdzbcdafghijkzlmnopsrszutttxuxzrtiyozbcydafabcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwerzjklmnoprstuvEQWERTYqwertywxeyzzouzzzatyuzzzaqwertyaaeffeedcbaxyaeyzzouzzzgaqwertyxzxrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("MsMzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretvepxhapqjynylrlzhkemjxbopglbghowjxxwnovsmrqajxWXYZuvwxyaeyzzouzzzaqwertys") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdzzzqasMbbkrtiyyzbcdafghijklmnoprstuvwwabcdzrzzqaiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyiuyssiozzzxyzabcDEFghibcdafghijklmnoprszuouzzzazeffeedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxUVzbcdafghijklmnoprstuvwwabcdzzzqaiozzzxyzabcDEFghibcdafghijzzzqaiozzzbcdafghiabcdzzzqaiozzzbcdafghijklmnoprszuouzfzzazefzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyfeedcbajklmnoprszuouzzzzazklmnotttxuxzzzrttQWERTYqwertyprszuouzzzazeffeedcbaxyaeyzzouzzzgaqwertyWXYZuvzbcdafghijklmnoprstuvwxeuyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zabzbcdafghijkttttxuxzzttttlmnoprszouzzzacdmafghaijklmnoprszuouza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("IUhh") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafughijklmnoprstusMsvwxUVWXYZuvzbcdafghijklmnoprstuuvwxeyzzouzzzawxyaeyzzouzzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaakooxnnzbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzaeaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwabcdzzzqaiozzzbcdafghijklmnoprszuouzzzazeulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvabjjvydknsnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaabdcdeffeedcbaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxrvlnufkwcyxyzabcDEDFghDijxkiyhfwmbvdtttrttzmzbcdafghijklmnoprstuvwxUVtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbctbbkrtiyyiuykooxnneWXYZuvwxyaeyzzouzaoqwertyhkemjxbopglbghojxxwnovsmrqajxzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzrtyzbcdafghijklmnoprstuvrQWERTYqwerWtywxeyzzouzzzasMbbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmnness") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiitttttExuxzzzrttQzbcdabbkrtfdoiyyiuzbcdafghzxyzabcDEDFghiijklmnoprstuvwxUVytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsbnhpbcttrrrzkurifpqtjyypugyhiiiiiiiizzzqaiozzzbcdafghijklmnoprszuouzzzaziiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcanvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxWXYZuvwxyaeyzzouzaqwertyyfghijklmnoprszouzozzarqajxWERTYqwzrttQWERTYqwiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmnne") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abfcdeffezzzqaiozzzbcddafghijklmnoprszqweertyuouzzzazedbttttxuxzzrttta") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qweezbcydafaibcdeffeedcbaghijklmnoyprstuvwwxyaeyzzouzzzaqwertyrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("qwertyrxyzabDcrDEFgqhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kooxtttxuxzbcdafghijklmnoprstuvwwxyaeyzzouzzzaqwertyWERTYzTqwnne") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdaabbbitttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhptbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwszmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxkrtiyyiuykooxnnebkrtfdoiyyiuyfghijklmnoprszouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttzbzbcdafghijklmnoprszouzzzacdmafghijklmnoprszuozbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzkooxnnzbcdabbkrtfdoiyyizbcdafghijklmnoprstuvwxUVWXYZuvwxyaeyzzouzzzaqwertyuyfghijklmnoprszouzzzaeatty") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("a") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("b") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("aAa") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bb") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("AAAAbbbbb") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ABCabc") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zyx") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("aa") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFyiYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyxyzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("seRyB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRyB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzQWERTzbcDEFyiYqwertyzzrttt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxtzQWERTzbcDEFyiYqwertyzzrttt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxt") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbRTzbcDEFzyiYqwertyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xttttxuxzzzrtttyzazbcDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEzbcydafghijklmnoprstuvwxeyzzouzaFghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdefftttxteedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyiiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzaFghity") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyiiuyoxne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFyiEYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzzzqaiozzzRTzbcDEFzyiYqwertzyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyierty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ztbcdafghijklmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkobbkrtfdoiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcDEyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyyiuzbcdafghQWERTzbcDEFyyiYqwertyeyzzouzyzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzozbcdafgheyzzouzzzauzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxkobbkrtfdoiyyiuyoxnnetzQWERTzbcDEFyiYqwertyzzrttt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyiuyrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghioiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkobbkrtfdoiyytttxtiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobrbkrtfdoiyyiuyrtfdoiyyykobbkrtfdoiyyiiuyoxunnee") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("KiUHqiz") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyxyz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("BSco") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttztxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRyRBzbRTzbcDEFzyiYqwertyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzodzbcdafgheyzzouzzzauzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERRTzbcDEFyiEYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQWERTzbcDEFEyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbccDE") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrttttxuxkobbkrtfdoiyyiuyoxnnetzQWERTzbcDEFyiYqwertyzzrtttoxnn") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytettxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbbkrtfdoiyyiuzbcdafghQWERTzbcDEFyyiYqwertyeyzzouzyzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyitYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktglbghzbcDEFyiojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbccDzbcdafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzzaE") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaTzbcDEFyiEYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QYPV") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WQWE") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbQWERTzbcDEFyiEYqwertycDEFyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDErty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQWERTzbcDEFEyiYqwertYQWERTzbcDEFyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzxyzazbcDEFyiabcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwertQy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcgdafghzbcdafdgheyzzouzzzauzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWErRTzbcDEFzyierty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QEWERTzbcDErtyYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbccDzbcdafzbcdafgheyzzouzzzaghijklmnopazbcdafghijzouzzzarstQWERTzbQWERTzbcDEFyiEYqwertycDEFyiYqwertYyuvwxeyzzouzzzaE") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("UVWXXYZuvwxya") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zyzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvsxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazzzqaiozzzbcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcDEFyiQWERTzbQWERTzbcDEFyiEYqwertycDEFyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafgzza") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyztazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzawTzbcDEFyiEYtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxzzzrtazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzzat") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyyiuzbcdafghQWERTzbcDEFyixyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzzzrtttYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkobbkrtfdkozbcdafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzzaiyytttxtiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuvwxeyyseRyRBzbRTzbcDEFzyiYqwertyDEFyizzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdefftttxteedcbtttuxiozmcnrvxaxeeeeekzpwiktglbghzbcDEFyiojxxwnovdsmrqajxa") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("p") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QEWERTzbcDErtywYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQWERTzbcWDEFEyiYqwertYQWERTzbcDEFyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzayzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbbzkrtfdoiyyiuzbcdafghQWERTzbcDEFyyiYqwertyeyzzouzyzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnone") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaauaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzzzqaiozzzRqwertzyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabczbcdafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzzaDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiduyoxnnekrtfdoiyyyiuyoxnone") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyyy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFyiYqwertyYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttx") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiaiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzayzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghoiyyiuyoxnnetx") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRyyB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifkobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnnepqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwlleyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyyz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijxyzazzzqaiozzzbcDEFgEhiklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifkobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnnepqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zkobbkrtfdoiyyyiuyoxnnebcdafgheyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffededcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyiuyrtfdyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("UVWXwYZuvwxya") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tbbkrtfdoiyyztttxuxkobbkrtzzrttt") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbbzkrtfdoiyyiuzbcdafghQWERTtttxuxtzQWERTzbcDEFyiYqwertyzzrtttzbcDEFyyiYqwertyeyzzouzyzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayzbcDEFyiYqwertyeyzzouzzzaytettxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzzzzaytettxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnkrvxaxeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzzzqaiozzzRTzbcDEFzyiYqwertzyDEFyiYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzz") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QeWERTYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnovdsmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttirrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcgdafghzbcdafdgheyzzouzzzauzzzzafzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnoprstuuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzozbcdafgheyzzouzzzauzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdtttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnovdsmrqtajxafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkbrtfdoifyyz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzbbkrtfdoiyyyxyzazbcDEFyiabcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbDEF") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttt") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ysseRyyB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfduyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafzbcdafgheyzzouzzzaghigjklmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaauaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofmzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkobbkrtfdxyzababcdeffededcbacDEFghioiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoifyyiuzbcdafghQWERTxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzzzzaytettxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERRTzbcDEFyiEYqweyrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWUVWXYZuvwxya") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaDEFyiYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ysseRyByB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbccDzbcdafzbcdafgheyzzouzzzaghijklmnopazbcdafghijzouzzzarstQWERTzbQWERTzbcDEFyseRBkobbkrtfdoiyyiuyoxnneyiEYqwertycDEFyiYqwertYyuvwxeyzzouzzzaE") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ysseRyByBB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiukzbcdafghQWERTxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayzbcDEFyiYqwertyeyzzouzzzaytettxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zBScobDEF") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzzzrtttttxuxkobbkrtfdoiyyiuyoxnnetzQWERTzbcDEFyiYqwertyzzrttt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzbbkrtfdoiyyzodzbcdafgheyzzouzzzauzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrrtfdoiyyyiuyoxnnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("seRyRQWERTzbcWDEFEyiYqwertYQWERTzbcDEFyiYqwertYyB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRByyB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzbzzzqaiozzzRqwertzyDEFyicdafgheyzzozbcdafgheyzzouzzzauzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoixyzazbcDEFyiQWERTzbQWERTzbcDEFyiEYqwertycDEFyiYqwertYyyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayzbcdafzbcdafgheyzzouzzzaghigjklmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbghojxmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzozbcdafgheyzzouzzzauzzztttuxiozmcnrvxaxeeeeekzpwxiktglbghojxmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bboiyyiuy") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("dSJxyzazbcDEFyiXDCfwPU") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrkooxnnetfdoiyxyz") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzzzqysseRyyBiozzzRqwertzyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvzouzzza") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobrbkrtfdoiyyiuyrtrfdoiyyykobbkrtfdoiyyiiuyoxunnee") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzbbkrtfdoiyyyxzbcdafgheyzzozbcdafgheyzzouzzzauzzztttuxiozmcnrvxaxeeeeekzpwxiktglbghojxmrqtajxyzazbcDEFyiabcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbDseRyRQWERTzbcWDEFEyiYqwertYQWERTzbcDEFyiYqwertYyBDEF") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiysseRyyByyiuyrtfdyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaauaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofmzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghorjxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzamgwondjofmzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghorjxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayiyyiiuyoxne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQyWERTzbckobbkrtfdxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghoiyyiuyoxnnetxDEFEyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFFzzyierty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDrEzbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcgdafghzbcdafdgheyzzouzzzauzzzzafzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvnlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcgdafghzbcdafdgheyzzouzzzauzzzzakobbkrrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozQWERTzbcDErtymcnkrvxaxeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xttttxuxzzzrtttzazbcDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("UVWXwxUya") == "U")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEQWERTYqwertyzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakreteptxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnovdsmrqaajx") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WQW") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWErRTzbcDDEFzyierty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiaiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopgzzzqaiozzzlbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzayzzaybcdafghQWERTzbcDEFyiYqwertyeyzztouzzzayapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwikxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghimjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yssRyBBB") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyifghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfdoiyyiuzbcdafghQWERTzbcDEFyixyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzKiUHqizzaytttxuxzzzbbkrtfdoiyyytyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttt") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttxttxuxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnovdsmrqtkobbkrtfdoiyyyiuyoxnneajx") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzbbkirtfdoiyyyxyzazbcDEFyiabcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzfouzzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QeWERTYqwert") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("KadH") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xttttxuxzzzrtttyzazbcDEFyiQWERRTzbcDEFyiEYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ysseRytttuxiozmcnkrvxaxeeeeekzpwiktglbghojxxwnovdsmrqajxByBB") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiysseRyyByyiuyrtfdyiutyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuttttxuxzzzrtttyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRyyBxyzazbcFyibbkrtfdoiyyiuzbcdbboiyyiuyt") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrErrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaDEFyiYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifkobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnnepqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzabkbrtfdoiyxyzabcDEFghi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tbbkrtfdoiyyztttxuxkobbkrtzzrtzbzzzqaiozzzRqwertzyDEFyitt") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFzbDEFyiyiYqwertyeyzzouzzzaytttxuxzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWErRTzbcDDEFzyiertty") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffededfcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEgFyiYqweabcdeffededfcbartyeyzzouzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttt") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tbbkryseRyyBtfdoiyyztttxuxkobbkrtzzrtzbzzzqaiozzzRqwertzyDEFyitt") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzlmnzbcdafzbcdafgheyzzouzzzaghigjklmnoprstuvwxeyzzouzzzaprstuvwxeyzzouzzzaFghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEQWERTzbcazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaDEFyiYqwertyerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xattttxuxzzzrtttzazbcDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkuriiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ysseRyy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazzzazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaqaiozzzbcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzzzqaiozzzRqwerQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaTzbcDEFyiEYqwertyFyi") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcDEFy") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxzzzrtazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfQWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzaFghitywmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzzat") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbkrtfkdoiyyz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxxzzzrtttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xttttxuxzzcDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttxttxuxztbbkryseRyyBtfdoiytttxuxkobbkrtzzrtzbzzzqaiozzzRqwertzyDEFyittttt") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttzrttxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzzzrtttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwikQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzawTzbcDEFyiEYtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxqwertytlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbzbcdafzbcdafgheyzzouzzzaghigjklmnoprstuvwxeyzzouzzzaiyyyiduyoxnnekrtfdoiyyyiuyoxnone") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijxyzazzzqaiozzzbcDEFgEhiklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifkobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnnepqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxxyzazbccDzbcdafzbcdafgheyzzouzzzaghijklmnopazbcdafghijzouzzzarstQWERTzbQWERTzbcDEFyiEYqwertycDEFyiYqwertYyuvwxeyzzouzzzaEeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrdSJxyzazbcDEFyiXDCfwPUqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WQWazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaE") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzrtttghojxmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkodedcbacDEFghioiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghijklmnvoprstuuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcgdafghzbcdafdgheyzzouzzzauzzzzakobbkrQWERTzbcDEFzyitYqwertyrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WW") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("akeobbkrrtfdoiyyyiuyoxnnebcdtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretebbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxefftttxteedcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbbzkrtfdoiyyiuzbcdafghQWERTzbcDEFyyiYqwerytyeyzzouzyzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("UVxWXYZuvwxya") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcgdafghzbcdafdgheyzzouzzzauzzzzakobbkrkobbkrtfdoiysseRyyByyiuyrtfdyiutyoxnnerotfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzzzqysseRyyeBiozzzRqwertzyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknfsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RYQWERTzbcDEFEyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzbbkcrtfdoiyyzodzbcdafgheyzzouzzzauzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WQWpE") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbbzkrtfdoiyyiuzbcdafghQWERTzbcDEFyyiYqwertyeyzzouzyzzaybcdafghQWERTzbcDEbFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ztzzzaa") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaauaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofmzhhvyscurovmxebakretepxhapqjriulawnpeyxvbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwikQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzawTzbcDEFyiEYtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxqwertytlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpbbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaywiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RyB") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbghojxmzzzqaiozzzrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyyiuyoxne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyifghQWERTzbcDEFyiYqwertyeyzzouzzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYkobbkrtfdoiysseRyyByyiuyrtfdyiuyoxnneqwertyeyzzouzzzayssRyBBBytttxuxzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEgFyiYqweabcdxttttxuxzzzrtttzazbcDEFyieffededfcbartyeyzzouzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWErRTzbcDDEFzyierttytttxuxzzzrtttttxuxkobbkrtfdoiyyiuyoxnnetzQWERTzbcDEFyiYqwertyzzrttt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekyseRByyBzpwxiktglbghojxxwnovdsmrqaajx") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzbbkirtfdoiyyyxyzazbcDhEFyiabcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekyseRByyBzpwxiktsmrqaajx") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QEWERTzbYcDErtywYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtkfduyoxnzbDEFne") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeceekzpwxiktglbgQWERTzbcDErtyhojxmzzzqaiozzzrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxyzazbcFyibbkrtfdoiyyiuzbbzkrtfdoiyyiuzbcdafghQWERTtttxuxtzQWERTzbcDEFyiYqwertyzzrtttzbcDEFyyiYqwkobbkrtfdoiyyyiuyoxnneertyeyzzouzyzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayxeeeeekyseRBByyBzpwxiktsmrqaajx") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzawTzbcDEFyiEtYtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobyrbkrtfdoiyyiuyrtrfdoiyyykobbkrtfdoiyyiiuyoxunnee") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbazabcDEzstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhttztxuxzzzrtttiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzozbcdatttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnovdsmrqajxfgheyzzouzzzauzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ZnjGWPk") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("czBScobDEF") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzbbkrtfdoiyyzodzbcdafgheykobbkrtfdxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghoiyyiuyoxnnetxzzouzzzauzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcgdafghzbcdafdgheyzzouzzzauzzzzafzhhvyscurovmxebakretepxhapqjriulawfnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvnlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tbbkryseRyyBtfdoiyyztttxuxkobbkrtzzrtzbzezzqaiozzzRqwertzyDEFyitt") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffQWERTzbQWERTzbcDEFyiEYqwertycDEFyiYqwertYyededfcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzzzqaiozzzRqzwertzyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrttkobbkrrtfdoiyyyiuyoxnneTzbcDEFyiYqwertyzzrtttoxnn") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaTzbcDEFyiEYqwertyuyoxnnekrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xttttxuxzzzrtttyzazb") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiQWERzbcdafgheyzzodzbcdafgheyzzoxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiuzzzauzzzzaTzbcDEFyiEYqwertyuyoxnnekrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbzcdafghezyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazzzqaiozzzbcDEFgEhEi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttxttxuxzzzrztt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEgFyiYqweabcdxttttxuxzzzrtttzazbcDZnjGWPkytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzbbkrtfdoiyyzodzbcdafgheykobbkrtfdxyzabcDazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvzouzzzaghoiyyiuyoxnnetxzzouzzzauzzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRyRBzbRTzbttttxuxzzzrtttcDEFzyiYqwertyDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrrtfdoiyyyzbcdafgheyzzozbcdafgheyzzouzzzauzzztttuxiozmcnrvxaxeeeeekzpwxiktglbghojxmrqtajxiuyoxnnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyiyseRBkobbkrtfdoiyyiuyoxnnebbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxxzzzrttt") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiuyoxnnekseRyBzrtttyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiaiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzayzzaybcdafghQWERTzbcDEFyiYqwerttxttxuxzzzrtttxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WE") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuUVxWXYZuvwxyaxiozmcnrvxaxeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Kqiz") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkobbkrtfdxyzababcdeffededcbacDEFghioiQWERTzbcDEFyiYqwertyYyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ysextiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdtttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnUVWXYZuvwxyaovdsmrqRYQWERTzbcDEFEyiYqwertYytajxafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttztxuxzzzrtttazbcdafghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzozbcdafgheyzzzouzzzauzza") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQyWERTzbckobbkrtfdxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghoiyyiuyoxnnetxabcdefftttxteedcbtttuxiozmcnrvxaxeeeeekzpwiktglbghzbcDEFyiojxxwnovdsmrqajxaDEFEyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrErrzkurifpqjyypugyhiiixyrzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaDEFyiYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkodeodcbacDEFghioiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WQWpExyzazbcFyibbkrtfdoiyyiuzbbzkrtfdoiyyiuzbcdafghQWERTtttxuxtzQWERTzbcDEFyiYqwertyzzrtttzbcDEFyyxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzaFghiqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzawTzbcDEFyiEtYtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfty") == "u")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozQWERkobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnoneovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjygypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzamgwondjofmzhhvyscurovmxebRyBakretepxhaxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghipqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghorjxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("AaXcik") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkodDEFghnne") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("rds") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzamFghiiiiiiiiiiiinprlxfaaauaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofmzhhvyscurovmxebakretepxhapqjriulawnpeyxvbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttttxuxzzzrtaxyzxyzazbcDEFyiabcDEFgEhizbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzzat") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQyWERTzEbckobbkrtfdxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghoiyyiuyoxnnetxDEFEyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdoiyyiuyoxtttuxiozQWERkobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnoneovdsmrqajxnne") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwiktglbghoojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyyiuyoxnone") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwikQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzawTzbcDEFyiEYtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvtttxuxzQWERTzbcDEFyiYqwertyzzrtttdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxqwertytlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurxovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseysseRytttuxiozmcnkrvxaxeeeeekzpwiktglbghojxxwnovdsmrqajxByBBRBkobbkrtfdoiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("bbbkrtfdoiyxyz") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERRTzbcDEDFyiEYqweyrty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlfzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERzbcnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzbbkirtfdoiyyyxyzazbcDhEFyiabcDEFgEczBScobDEFhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbghojxxwnovdsmrqtkobbkrtfdoiyyyiiuyoxnneajx") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafgheyzzozbcdafgheyzzouzzzauzzztttuozmcnrvxaxeeeeekzpwxiktglbghojxmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrtfdxyzabcDEzbcydafghijkmnoprstuvwxeyzzouzzzaFghioiyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlfzhkemjxbopglbghojxxwnxjyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzabcDEzbcydafghijklmnoprstuvwxeyzzoiuzaFghi") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdeffQWERTzbzbcgdafghzbcdafdgheyzzouzzzauzzzzakobbkrrtfdoiyyyiuyoxnneQWERTzbcDEFyiEYqwertycDEFyiYqwertYyededfcba") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WQ") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijxyzazzzqaiozzzbcDEFgEhiklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnbbkrtfdoiyyiuyhpbcttrrrzkurifkobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyyiuyoxnnepqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdpzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwxiktglbhghojxmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QeWERTYqwQert") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QxyzabcDEFgEhiWERTzbcDEFzyiYqwerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("pp") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktzbzzzqaiozzzRqzwertzyDEFyilvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzxyzaxzbcDcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("yseRBkodeodcbacDEFoghioiyytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqmrqajxiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbczbzzzqaiozzzRqwerQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaTzbcDEFyiEYqwertyFyigdafghzbcdafdgheyzzouzzzauzzzzakobbkrrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tbbkryseRyytttuxiozmcnrvxaxazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaeeeeekzpwiktglbghojxxwnovdsmrqajxBtfdoiyyztttxuxkobbkrtzzrtzbzezzqaiozzzRqwertzyDEFyitt") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafxghQWERTzbcDEgFyiYqweabcdxttttxuxzzzrtttzazbcDZnjGWPkytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("Qrty") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ttUVxWXYZuvwxyatuxiozmcnrvxaxeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("WQWazbcdafghifjzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqahijzouzzzaE") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaabbbkrtfdoiyxyzaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgiheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxrqajxghijzouzzzQWErRTzbcDDEFzyierttytttxuxzzzrtttttxuxkobbkrtfdoiyyiuyoxnnetzQWERTzbcDEFyiYqwertyzzrttta") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xttttxuxzzzrtttyzaxzbcDEFyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxuxzQWERTzBScobcDEFyiYqwertyzzrttt") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbczbzzzqaiozzzRqwerQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaThzbcDEFyiEYqwertyFyigdafghzbcdafdgheyzzouzzzauzzzzakobbkrrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbccDEFyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zbcdafghazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwikxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghimjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaeyzzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("abcdefftttxtazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaeedcba") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWEQWERTzbcazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaDEFyiYqwertyerty") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpbbkrtfdoiyyyxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyezbcdtttuxiozmcnrvxaxeeeeekzpwxiknUVWXYZuvwxyaovdsmrqRYQWERTzbcDEFEyiYqwertYytajxafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzzayzzouzzzaytttxuxzrtttghojxmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxesnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaatqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxxbopglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyzbczbzzzqaiozzzRqwerQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaTzbcDEFyiEYqwertyFyigdafghzbcdafdgheyzzouzzzauzzzzakobbkrrtfdoiyyyiuyoxnneyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbbzxyzlmnzbcdafzbcdafgheyzzouzzzaghigjklmnoprstuvwxeyzzouzzzaprstuvwxeyzzouzzzaFghiuzyzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzay") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghzijzouzzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdnzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzzaeeeeekzpwiktglbghojxxwnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiQWERzbcdafzauzzzzaTzbcDEFyiEYqwertyuyoxnnekfrtfdoiyyyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttxtt") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("zttzzzaa") == "")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQWERTzbcDYiEFEyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("RQWERTzbcWDExyzazbcFyibbkrtfdoiyyiuzbbzkrtfdoiyyiuzbcdafghQWERTzbcDEFyyiYqwertyeyzzouzyzzaybcdafghQWERTzbcDEFyiYqwertyeyzzouzzzayFEyiYqwertYQWERTzbcDEFyiYqwertYy") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("ysseRyBkobbkrtfdxyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghoiyyiuyoxnnetxyB") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xttttxuxzzzrtttyzazbcDEFzyi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbccDzbcdafzbczdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzzaE") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkrttkobbkrrtfdoiyyyiuyoxKiUHqiznneTzbcDEFyiYqwertyzzrtttoxnn") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpbbkrtfdoiyyyxyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyezbcdtttuxiozmcnrvxaxeeeeekzpxyzazbcFyiyseRBkobbkrtfdoiyyiuyoxnnebbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertyeyzzouzzzaytttxuxxzzzrttthwxiknUVWXYZuvwxyaovdsmrqRYQWERTzbcDEFEyiYqwertYytajxafzbcdafgheyzzouzzzaghijklmnoprstuvwxeyzzouzzzayzzouzzzaytttxuxzrtttghojxmrqtajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzbbkirtfdoiyyyxyzazbcDEFyiiabcDEFgEhi") == "E")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("tttuxiozmcnrvxaxeeeeekzpwikttztxuxzzzrtttazbcdafghijzouzzzatglbghzbcDEFyiojxxwjnovdsmrqajx") == "a")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbhcdafghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzawTzbcDEFyiEtYtttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovsmrqajxqwertyrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("kobbkobbkrtfdoiyyyiuyoxnnekrtfdoiyyzbzczbzzzqaiozzzRqwerQWERzbcdafgheyzzodzbcdafgheyzzouzzzauzzzzaTzbcDEFyiEYqwertyFyigdafghzbcdafdgheyzzouzzzauzzzzakobbkrrtfdoiyyyiuyoxnneyiuyoxnne") == "o")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("QWERTzbcDEFzyiYqwerxyzabcDEzbcydafghijklmnopxyzazbcFyibbkrtfdoiyyiuzbcdafghoQWERTzbcDEgFyiYqweabcdxttttxuxzzzrtttzazbcDEFyieffededfcbartyeyzzouzzzaytttxuxzzzrtttrstuvwxey") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("NZDMITxGSp") == "I")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxweeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyzbzzzqaiozzzRqzwertzyDEFyiYyuvwxeyzzouzzzaEeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghojxxwnxyzabcDEFgEhiovdsmrdSJxyzazbcDEFyiXDCfwPUqajxghijzouzzza") == "i")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("azbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaxeeeeekzpwiktazbcdafghijzouzzzaazbcdaftttuxiozmcnrvxaUVWXYZuvwxyaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaabbbkrtfdoiyxyzaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwwcyjxkiyhfwmbvdzmssxxpwdoaynylrlzhkemjxbopglbghojxxwnovdsmrqajxghijzzbcdafgiheyzzodzbcdafgheyzzouzzzauzzzzaouzzzalvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaaaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofzhhvyscurovmxebakretepxhapqjriulawnpeyxvlanufkwcyjxkiyhfwmbvdzmssxxrqajxghijzouzzzQWErRTzbcDDEFzyierttytttxuxzzzrtttttxuxkobbkrtfdoiyyiuyoxnnetzQWERTzbcDEFyiYqwertyzzrttta") == "e")){ tests_passed++; } total_tests++;

    if((get_closest_vowel("xyzazbcFyibbkrtfdoiyyiuzbcdafghQWERTzbcDEFyiYqwertytttuxiozmcnrvxaxeeeeekzpwiktlvbjjvydknsnhpbcttrrrzkurifpqjyypugyhiiixyzabcDEzbcydafghijklmnoprstuvwxeyzzouzzzaFghiiiiiiiiiiiinprlxfaaauaaaaaaaaztqdwllntofsacsitzzlcnvtvlztxxmgwondjofmzhhvyscurovmxebakretepxhapqjriulawnpeyxvlnufkwcyjxkiyhfwmbvdzmssxxpwoaynylrlzhkemjxbopglbghorjxxwnovdsmrqajxeyzzouzzzaytttxuxzrttt") == "u")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


