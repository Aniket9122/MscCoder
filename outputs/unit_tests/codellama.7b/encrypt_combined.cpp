#include <iostream>
#include <string>

using namespace std;

string encrypt(string s) {
    string encrypted = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c -= 2 * ('a' - 'A'); // Rotate by 2 places
            encrypted += c;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
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

    if((encrypt("hi") == "lm")){ tests_passed++; } total_tests++;

    if((encrypt("asdfghjkl") == "ewhjklnop")){ tests_passed++; } total_tests++;

    if((encrypt("gf") == "kj")){ tests_passed++; } total_tests++;

    if((encrypt("et") == "ix")){ tests_passed++; } total_tests++;

    if((encrypt("faewfawefaewg")=="jeiajeaijeiak")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfriend")=="lippsqcjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("dxzdlmnilfuhmilufhlihufnmlimnufhlimnufhfucufh")=="hbdhpqrmpjylqmpyjlpmlyjrqpmqryjlpmqryjljygyjl")){ tests_passed++; } total_tests++;

    if((encrypt("a")=="e")){ tests_passed++; } total_tests++;

    if((encrypt("hi") == "lm")){ tests_passed++; } total_tests++;

    if((encrypt("asdfghjkl") == "ewhjklnop")){ tests_passed++; } total_tests++;

    if((encrypt("gf") == "kj")){ tests_passed++; } total_tests++;

    if((encrypt("et") == "ix")){ tests_passed++; } total_tests++;

    if((encrypt("faewfawefaewg") == "jeiajeaijeiak")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfriend") == "lippsqcjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("dxzdlmnilfuhmilufhlihufnmlimnufhlimnufhfucufh") == "hbdhpqrmpjylqmpyjlpmlyjrqpmqryjlpmqryjljygyjl")){ tests_passed++; } total_tests++;

    if((encrypt("a") == "e")){ tests_passed++; } total_tests++;

    if((encrypt("abcde") == "efghi")){ tests_passed++; } total_tests++;

    if((encrypt("uvwxyz") == "yzabcd")){ tests_passed++; } total_tests++;

    if((encrypt("monitor") == "qsrmxsv")){ tests_passed++; } total_tests++;

    if((encrypt("abc") == "efg")){ tests_passed++; } total_tests++;

    if((encrypt("kmt") == "oqx")){ tests_passed++; } total_tests++;

    if((encrypt("park") == "tevo")){ tests_passed++; } total_tests++;

    if((encrypt("mtkmt") == "qxoqx")){ tests_passed++; } total_tests++;

    if((encrypt("uvuvwxyzwxyz") == "yzyzabcdabcd")){ tests_passed++; } total_tests++;

    if((encrypt("pamonitork") == "teqsrmxsvo")){ tests_passed++; } total_tests++;

    if((encrypt("uvwabcxyuz") == "yzaefgbcyd")){ tests_passed++; } total_tests++;

    if((encrypt("uvuvwxyzwxz") == "yzyzabcdabd")){ tests_passed++; } total_tests++;

    if((encrypt("t") == "x")){ tests_passed++; } total_tests++;

    if((encrypt("uvz") == "yzd")){ tests_passed++; } total_tests++;

    if((encrypt("kuvz") == "oyzd")){ tests_passed++; } total_tests++;

    if((encrypt("kkuvz") == "ooyzd")){ tests_passed++; } total_tests++;

    if((encrypt("abct") == "efgx")){ tests_passed++; } total_tests++;

    if((encrypt("at") == "ex")){ tests_passed++; } total_tests++;

    if((encrypt("tkmtkmtuvwabcxyuzmt") == "xoqxoqxyzaefgbcydqx")){ tests_passed++; } total_tests++;

    if((encrypt("uvuvwxyzwxzyz") == "yzyzabcdabdcd")){ tests_passed++; } total_tests++;

    if((encrypt("tkmtkmtuvwabuvuvwxyzwxzcxyuzmt") == "xoqxoqxyzaefyzyzabcdabdgbcydqx")){ tests_passed++; } total_tests++;

    if((encrypt("uvutvwxyzwxzyz") == "yzyxzabcdabdcd")){ tests_passed++; } total_tests++;

    if((encrypt("uvwparrkxyz") == "yzatevvobcd")){ tests_passed++; } total_tests++;

    if((encrypt("abctabcde") == "efgxefghi")){ tests_passed++; } total_tests++;

    if((encrypt("uvwabbczxyuz") == "yzaeffgdbcyd")){ tests_passed++; } total_tests++;

    if((encrypt("uvvz") == "yzzd")){ tests_passed++; } total_tests++;

    if((encrypt("paabctak") == "teefgxeo")){ tests_passed++; } total_tests++;

    if((encrypt("zz") == "dd")){ tests_passed++; } total_tests++;

    if((encrypt("pamonintork") == "teqsrmrxsvo")){ tests_passed++; } total_tests++;

    if((encrypt("uvutvwxyzwxzyzabckuvz") == "yzyxzabcdabdcdefgoyzd")){ tests_passed++; } total_tests++;

    if((encrypt("uvutvwzzxyzwxzyz") == "yzyxzaddbcdabdcd")){ tests_passed++; } total_tests++;

    if((encrypt("tabcdtabcde") == "xefghxefghi")){ tests_passed++; } total_tests++;

    if((encrypt("uvwxwyz") == "yzabacd")){ tests_passed++; } total_tests++;

    if((encrypt("aabcde") == "eefghi")){ tests_passed++; } total_tests++;

    if((encrypt("mtuvwxyzkmt") == "qxyzabcdoqx")){ tests_passed++; } total_tests++;

    if((encrypt("uvutvwxyzwxzyzabckumtkmtvz") == "yzyxzabcdabdcdefgoyqxoqxzd")){ tests_passed++; } total_tests++;

    if((encrypt("uvwaubcxyuz") == "yzaeyfgbcyd")){ tests_passed++; } total_tests++;

    if((encrypt("abuvutvwxyzwxzyzabckuvzct") == "efyzyxzabcdabdcdefgoyzdgx")){ tests_passed++; } total_tests++;

    if((encrypt("uvwxpaabctakyzuvutvuvutvwxyzwxzyzwxyzwxzywz") == "yzabteefgxeocdyzyxzyzyxzabcdabdcdabcdabdcad")){ tests_passed++; } total_tests++;

    if((encrypt("xuvuvwxyzwxzyz") == "byzyzabcdabdcd")){ tests_passed++; } total_tests++;

    if((encrypt("wuvwxyz") == "ayzabcd")){ tests_passed++; } total_tests++;

    if((encrypt("aabdcde") == "eefhghi")){ tests_passed++; } total_tests++;

    if((encrypt("uvwxyzwxyz") == "yzabcdabcd")){ tests_passed++; } total_tests++;

    if((encrypt("tkumtkmtuvwabuvuvwxyzwxzcxyuzmt") == "xoyqxoqxyzaefyzyzabcdabdgbcydqx")){ tests_passed++; } total_tests++;

    if((encrypt("wuvwxyzz") == "ayzabcdd")){ tests_passed++; } total_tests++;

    if((encrypt("xzyzabckumtkmtvz") == "bdcdefgoyqxoqxzd")){ tests_passed++; } total_tests++;

    if((encrypt("zzz") == "ddd")){ tests_passed++; } total_tests++;

    if((encrypt("uvzmonitorz") == "yzdqsrmxsvd")){ tests_passed++; } total_tests++;

    if((encrypt("uvutvwzzxz") == "yzyxzaddbd")){ tests_passed++; } total_tests++;

    if((encrypt("uvuvzwxyzwxz") == "yzyzdabcdabd")){ tests_passed++; } total_tests++;

    if((encrypt("pamonintorkpamonitoork") == "teqsrmrxsvoteqsrmxssvo")){ tests_passed++; } total_tests++;

    if((encrypt("xzyzauvwxyzwxyzbckumtzkmtvz") == "bdcdeyzabcdabcdfgoyqxdoqxzd")){ tests_passed++; } total_tests++;

    if((encrypt("testtpark") == "xiwxxtevo")){ tests_passed++; } total_tests++;

    if((encrypt("xzyzabckumtkmtvzz") == "bdcdefgoyqxoqxzdd")){ tests_passed++; } total_tests++;

    if((encrypt("uvuvwxyzzyzpamonitork") == "yzyzabcddcdteqsrmxsvo")){ tests_passed++; } total_tests++;

    if((encrypt("abuvutvwxyzwxvzyzabckuvzct") == "efyzyxzabcdabzdcdefgoyzdgx")){ tests_passed++; } total_tests++;

    if((encrypt("monitormuvvztkmt") == "qsrmxsvqyzzdxoqx")){ tests_passed++; } total_tests++;

    if((encrypt("uvxwpuvuvwxyzwxyzarrkxyz") == "yzbatyzyzabcdabcdevvobcd")){ tests_passed++; } total_tests++;

    if((encrypt("uvwxzwyz") == "yzabdacd")){ tests_passed++; } total_tests++;

    if((encrypt("monitomrmuvvztkmt") == "qsrmxsqvqyzzdxoqx")){ tests_passed++; } total_tests++;

    if((encrypt("parkk") == "tevoo")){ tests_passed++; } total_tests++;

    if((encrypt("uvwabbcxzxyuz") == "yzaeffgbdbcyd")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxjumpsoverthelazydog") == "xliuymgofvsarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyz") == "efghijklmnopqrstuvwxyzabcd")){ tests_passed++; } total_tests++;

    if((encrypt("wxy") == "abc")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzzzzzzzzzzzz") == "cddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxjumpsoverthelazydo") == "xliuymgofvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hello") == "lipps")){ tests_passed++; } total_tests++;

    if((encrypt("wxxy") == "abbc")){ tests_passed++; } total_tests++;

    if((encrypt("ho") == "ls")){ tests_passed++; } total_tests++;

    if((encrypt("helo") == "lips")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxjumpsoverthelazydo") == "lipsxliuymgofvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzzzzzzzzzzzzz") == "cdddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrownfoxjumpsoverthelazydo") == "cxliuymgofvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("heloworld") == "lipsasvph")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyzythequickbrownfoxjumpsoverthelazydo") == "efghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("rgf") == "vkj")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydo") == "efghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxumpsoverthelazydo") == "lipsxliuymgofvsarjsbyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydoe") == "efghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchsi")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxumpsovekrthelazydo") == "lipsxliuymgofvsarjsbyqtwsziovxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxjumpsgetoverthelazydo") == "lipsxliuymgofvsarjsbnyqtwkixszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yywxy") == "ccabc")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfrienhellod") == "llippsqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijfklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydo") == "efghijklmnjopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfriendoxjumpsoverthelazydo") == "lippsqcjvmirhsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yywx") == "ccab")){ tests_passed++; } total_tests++;

    if((encrypt("helowythequickbrownfhiorld") == "lipsacxliuymgofvsarjlmsvph")){ tests_passed++; } total_tests++;

    if((encrypt("wxxyy") == "abbcc")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzzzzzzzzzzz") == "cdddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfrinhellod") == "llippsqcjvmrlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfoxjumpsoverthelazydojumpsoverthelazydo") == "lippsqcjvmirlippshvsarjsbnyqtwszivxlipedchsnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellodhequickbrownfoxjumpsoverthelazydogod") == "lippsixqcjvmirlippshliuymgofvsarjsbnyqtwszivxlipedchsksh")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrownfhi") == "cxliuymgofvsarjlm")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydoexyy") == "abefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchsibcc")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfoxjumpsoverthelazydo") == "lippsqcjvmirlippshvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("eetrgft") == "iixvkjx")){ tests_passed++; } total_tests++;

    if((encrypt("eetrgf") == "iixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyferienhellod") == "lippsqcjivmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("yywxxy") == "ccabbc")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxwxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydoexyyyzythequickbrhownfoxjumpsoverthelazydoe") == "efghijklmnopqrstuvwxyzababefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchsibcccdcxliuymgofvlsarjsbnyqtwszivxlipedchsi")){ tests_passed++; } total_tests++;

    if((encrypt("ohhellomyfrienhellod") == "sllippsqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjupmpsoverthelazydoexyy") == "abefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnytqtwszivxlipedchsibcc")){ tests_passed++; } total_tests++;

    if((encrypt("ohhellomyfriend") == "sllippsqcjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienheod") == "lippsqcjvmirlish")){ tests_passed++; } total_tests++;

    if((encrypt("wolrld") == "aspvph")){ tests_passed++; } total_tests++;

    if((encrypt("heloworlthequickbheti") == "lipsasvpxliuymgoflixm")){ tests_passed++; } total_tests++;

    if((encrypt("ergft") == "ivkjx")){ tests_passed++; } total_tests++;

    if((encrypt("hel") == "lip")){ tests_passed++; } total_tests++;

    if((encrypt("tlet") == "xpix")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijfklmnopeetrgftqrstuvwxyzythequickbrhownfoxjumpsoverthelazydo") == "efghijklmnjopqrstiixvkjxuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helowythehquickbrownfhhiorld") == "lipsacxliluymgofvsarjllmsvph")){ tests_passed++; } total_tests++;

    if((encrypt("ohhelyfrienhellod") == "sllipcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellod") == "lippsqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("eeetrgft") == "iiixvkjx")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfriendoxjumpsovelrthelazydo") == "lippsqcjvmirhsbnyqtwszipvxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellood") == "lippsqcjvmirlippssh")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrownfoxthequickbheti") == "cxliuymgofvsarjsbxliuymgoflixm")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrietrgf") == "lippsqcjvmixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrieonhello") == "lippsqcjvmisrlipps")){ tests_passed++; } total_tests++;

    if((encrypt("ehel") == "ilip")){ tests_passed++; } total_tests++;

    if((encrypt("helflomyfrietrgf") == "lipjpsqcjvmixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("hhellyomyfrienhellod") == "llippcsqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthelquickbrownfoxjumpsoverthelazydoyfrienhellod") == "lippsixqxlipuymgofvsarjsbnyqtwszivxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("ythehelloetmthelquickbrownfoxjumpsoverthelazydoyienhellodnfhi") == "cxlilippsixqxlipuymgofvsarjsbnyqtwszivxlipedchscmirlippshrjlm")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsovierthi") == "abefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszmivxlm")){ tests_passed++; } total_tests++;

    if((encrypt("eeet") == "iiix")){ tests_passed++; } total_tests++;

    if((encrypt("let") == "pix")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfriendoxjumpsovelrathelazydo") == "lippsqcjvmirhsbnyqtwszipvexlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helloomyfrienheod") == "lippssqcjvmirlish")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyzythequickbrownfoxjumpsoveletthelazydo") == "efghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqtwszipixxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("d") == "h")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodllomyfrienhellod") == "lippsqcjvmirlippshppsqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("hhelothequickbrownfoxumpsovekrthelazydo") == "llipsxliuymgofvsarjsbyqtwsziovxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helll") == "lippp")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxjumpsgetovehrthelazydo") == "lipsxliuymgofvsarjsbnyqtwkixszilvxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hellthi") == "lippxlm")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyzythequickbrownfoxjumabcdefghijklmnopqrstuvwxyzythequickbrownfoxjumpsoverthelazydopsoveletthelazydo") == "efghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqefghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqtwszivxlipedchstwszipixxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzzzzzzzzzzzhel") == "cddddddddddddddddddddddddlip")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrowoxjumpsoverthelazydoyfrienhellod") == "lippsixqxliuymgofvsasbnyqtwszivxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrieendoxjumpsovelrthelazydo") == "lippsqcjvmiirhsbnyqtwszipvxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellodhequickbrownfoxjumpsoverthelazydogodoworld") == "lippsixqcjvmirlippshliuymgofvsarjsbnyqtwszivxlipedchskshsasvph")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodllomyfrhoienhellod") == "lippsqcjvmirlippshppsqcjvlsmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("woolrld") == "asspvph")){ tests_passed++; } total_tests++;

    if((encrypt("bcd") == "fgh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfergetienhellod") == "lippsqcjivkixmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrowonfoxumpsovekrthelazydo") == "lipsxliuymgofvsasrjsbyqtwsziovxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfriod") == "llippsqcjvmsh")){ tests_passed++; } total_tests++;

    if((encrypt("mgf") == "qkj")){ tests_passed++; } total_tests++;

    if((encrypt("etrf") == "ixvj")){ tests_passed++; } total_tests++;

    if((encrypt("helhi") == "liplm")){ tests_passed++; } total_tests++;

    if((encrypt("e") == "i")){ tests_passed++; } total_tests++;

    if((encrypt("wwxy") == "aabc")){ tests_passed++; } total_tests++;

    if((encrypt("hlelll") == "lpippp")){ tests_passed++; } total_tests++;

    if((encrypt("eheel") == "iliip")){ tests_passed++; } total_tests++;

    if((encrypt("heolo") == "lisps")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhelloyzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthigfthequickbhetid") == "lippsixqcjvmirlippscdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmkjxliuymgoflixmh")){ tests_passed++; } total_tests++;

    if((encrypt("ehelloetmyfrthirgft") == "ilippsixqcjvxlmvkjx")){ tests_passed++; } total_tests++;

    if((encrypt("ohhelolomyfrienhellodrgf") == "sllipspsqcjvmirlippshvkj")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellothequickbhetid") == "lippsixqcjvmirlippsxliuymgoflixmh")){ tests_passed++; } total_tests++;

    if((encrypt("trhequickbrownfoxjumpsoverthelazydog") == "xvliuymgofvsarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfriendoxjumpsojverthelazydo") == "lippsqcjvmirhsbnyqtwsnzivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("eeetrgfthellomyfrienhellodrownfoxjumpsoverthelazydo") == "iiixvkjxlippsqcjvmirlippshvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("gfrieonhello") == "kjvmisrlipps")){ tests_passed++; } total_tests++;

    if((encrypt("heloo") == "lipss")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrowoxjumpsoverthelazydoyfrienhellodget") == "lippsixqxliuymgofvsasbnyqtwszivxlipedchscjvmirlippshkix")){ tests_passed++; } total_tests++;

    if((encrypt("ehellgft") == "ilippkjx")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyy") == "lippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibcc")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrsquickbrownfoxjumpsovferthelazydo") == "efghijklmnopqrstuvwuymgofvsarjsbnyqtwszjivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellod") == "lippsixqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmoxjumpsoverthelazydoexyy") == "abefghijklmnopqsbnyqtwszivxlipedchsibcc")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxjumpsovertheazydo") == "xliuymgofvsarjsbnyqtwszivxliedchs")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijfklmnopeetrgftqazydo") == "efghijklmnjopqrstiixvkjxuedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfonxjumpsgetoverthelazydo") == "lipsxliuymgofvsarjsrbnyqtwkixszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrie") == "lippsqcjvmi")){ tests_passed++; } total_tests++;

    if((encrypt("eehia") == "iilme")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellomyfrienhellodd") == "fgsllippsqcjvmirlippshh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfergetienhelllod") == "lippsqcjivkixmirlipppsh")){ tests_passed++; } total_tests++;

    if((encrypt("aa") == "ee")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjupompsoverthelazydoexyy") == "abefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnytsqtwszivxlipedchsibcc")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxjuhielazydo") == "lipsxliuymgofvsarjsbnylmipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzeheelzzzzzzzzzzz") == "cddddddddddddddiliipddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellomyfrieythequickbrownfoxthequickbhetinhellodd") == "fgsllippsqcjvmicxliuymgofvsarjsbxliuymgoflixmrlippshh")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyffrienhellod") == "llippsqcjjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrowonfoxumpsovekrwxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydoexyythelazydo") == "lipsxliuymgofvsasrjsbyqtwsziovabefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchsibccxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("ef") == "ij")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellodhequicokbrownfoxjumpsoverthelzazydogod") == "lippsixqcjvmirlippshliuymgsofvsarjsbnyqtwszivxlipdedchsksh")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhelloyzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthigfthequickbhetidheloworld") == "lippsixqcjvmirlippscdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmkjxliuymgoflixmhlipsasvph")){ tests_passed++; } total_tests++;

    if((encrypt("erghi") == "ivklm")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfriengfrieonhellohellodnhellodlod") == "llippsqcjvmirkjvmisrlippslippshrlippshpsh")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxjumpsgmetovehrthelazydo") == "lipsxliuymgofvsarjsbnyqtwkqixszilvxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrieonhellod") == "lippsqcjvmisrlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("get") == "kix")){ tests_passed++; } total_tests++;

    if((encrypt("helhlellllthi") == "liplpippppxlm")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellohellomyfrienhellodrownfoxjumpsoverthelazydothequickbhetid") == "lippsixqcjvmirlippslippsqcjvmirlippshvsarjsbnyqtwszivxlipedchsxliuymgoflixmh")){ tests_passed++; } total_tests++;

    if((encrypt("ohhelolomyfetrienhellrgf") == "sllipspsqcjixvmirlippvkj")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhelloyzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthigbhetiid") == "lippsixqcjvmirlippscdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmkflixmmh")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxwxabcdefghijklmnopqrstuvwxyyzythequickbrhownfoxjumpsoverthelazydoe") == "efghijklmnopqrstuvwxyzababefghijklmnopqrstuvwxyzabccdcxliuymgofvlsarjsbnyqtwszivxlipedchsi")){ tests_passed++; } total_tests++;

    if((encrypt("efrgft") == "ijvkjx")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrownfoxjumpsoverthelazydoythequickbrownoxjumpsoverthelazydo") == "cxliuymgofvsarjsbnyqtwszivxlipedchscxliuymgofvsarsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("ehehif") == "ililmj")){ tests_passed++; } total_tests++;

    if((encrypt("hllelll") == "lppippp")){ tests_passed++; } total_tests++;

    if((encrypt("hhellyomyfrielod") == "llippcsqcjvmipsh")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodlomyferienhellodt") == "lippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshpsqcjivmirlippshx")){ tests_passed++; } total_tests++;

    if((encrypt("ft") == "jx")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzzeheelzzzzzzzzzzz") == "cdddddddddddddddiliipddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("ythequichi") == "cxliuymglm")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellodhequickbrownfoxjumpsoverthelazeydog") == "lippsixqcjvmirlippshliuymgofvsarjsbnyqtwszivxlipedichsk")){ tests_passed++; } total_tests++;

    if((encrypt("aickbrownfoxjumpsoveletthelazydo") == "emgofvsarjsbnyqtwszipixxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxjumphellomyfergetienhelllodsoverthelazydo") == "lipsxliuymgofvsarjsbnyqtlippsqcjivkixmirlipppshwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("df") == "hj")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickhelothequichellomyfrienhellodrownfoxjumpsoverthelazydojumpsoverthelazydokbrownfoxumpsovekrthelazydobrownfoxjumpsoverthelazydo") == "lipsxliuymgolipsxliuymglippsqcjvmirlippshvsarjsbnyqtwszivxlipedchsnyqtwszivxlipedchsofvsarjsbyqtwsziovxlipedchsfvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hehi") == "lilm")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmtwxxyyhequickbrownfoxjumpsovehelloetmthequickbhrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzzrthelazydoyfrienhellodfoxthequickbheti") == "lippsixqxabbccliuymgofvsarjsbnyqtwszilippsixqxliuymgoflvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddddddddddddddddddvxlipedchscjvmirlippshjsbxliuymgoflixm")){ tests_passed++; } total_tests++;

    if((encrypt("hemlloetmyfrienhelloyzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthigfthequickbhetidheloworld") == "liqppsixqcjvmirlippscdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmkjxliuymgoflixmhlipsasvph")){ tests_passed++; } total_tests++;

    if((encrypt("hhelloetmyfrienhellodhelazydol") == "llippsixqcjvmirlippshlipedchsp")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrownfoxjum") == "cxliuymgofvsarjsbnyq")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodkbrownfhi") == "lippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshofvsarjlm")){ tests_passed++; } total_tests++;

    if((encrypt("helothequetovehrthelazydo") == "lipsxliuyixszilvxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("llomyfrienhehellomyfrienhellodrownfoxjumpsoverthelazyollod") == "ppsqcjvmirlilippsqcjvmirlippshvsarjsbnyqtwszivxlipedcsppsh")){ tests_passed++; } total_tests++;

    if((encrypt("hhelothequickbrowhelowythequicckbrownfhihinfoxumpsovekrthelazydo") == "llipsxliuymgofvsalipsacxliuymggofvsarjlmlmrjsbyqtwsziovxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbheti") == "xliuymgoflixm")){ tests_passed++; } total_tests++;

    if((encrypt("fwwxy") == "jaabc")){ tests_passed++; } total_tests++;

    if((encrypt("helhlellelltihi") == "liplpippippxmlm")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellomyfyrienhellodd") == "fgsllippsqcjcvmirlippshh")){ tests_passed++; } total_tests++;

    if((encrypt("hhelllomyfriod") == "llipppsqcjvmsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfooxjumpsoverthelazydo") == "lippsqcjvmirlippshvsarjssbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhellzodhequickbrownfoxjumpsoverthelazydogodoworld") == "lippsixqcjvmirlippdshliuymgofvsarjsbnyqtwszivxlipedchskshsasvph")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfoxjumpabcdefghijklmnopqrstuvwxyzythequickbrownfoxjumpsoveletthelazydosoverthelazydojumpsoverthelazydoickbrownfoxjumpsoverthelazydog") == "lippsqcjvmirlippshvsarjsbnyqtefghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqtwszipixxlipedchswszivxlipedchsnyqtwszivxlipedchsmgofvsarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfoxjuhelothequickbrownfoxjumpsgetoverthelazydompsoverthelazydojumpsoverthelazydo") == "lippsqcjvmirlippshvsarjsbnylipsxliuymgofvsarjsbnyqtwkixszivxlipedchsqtwszivxlipedchsnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzeheelzzzzzzzzzzzz") == "cddddddddddddddiliipdddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("etrgf") == "ixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("yzhzzzzzzzzzzzzzzeheelzzzzzzzzzzz") == "cdlddddddddddddddiliipddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrownfoxjumpsovownoxjumpsoverthelazydo") == "cxliuymgofvsarjsbnyqtwszsarsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yywahellomyfriendoxjumupsoverthelazydoxy") == "ccaelippsqcjvmirhsbnyqytwszivxlipedchsbc")){ tests_passed++; } total_tests++;

    if((encrypt("hhellyoomyfrielod") == "llippcssqcjvmipsh")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellhomyfrienhellodd") == "fgsllipplsqcjvmirlippshh")){ tests_passed++; } total_tests++;

    if((encrypt("ehelothequickbrownfonxjumpsgetoverthelazydot") == "ilipsxliuymgofvsarjsrbnyqtwkixszivxlipedchsx")){ tests_passed++; } total_tests++;

    if((encrypt("hlel") == "lpip")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrthi") == "lippsixqcjvxlm")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfergetienfhelllod") == "lippsqcjivkixmirjlipppsh")){ tests_passed++; } total_tests++;

    if((encrypt("ohhhelllellomyfrienhellod") == "slllipppippsqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("eff") == "ijj")){ tests_passed++; } total_tests++;

    if((encrypt("helhlomyfriend") == "liplpsqcjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("eeewxabcdefghijklmohelloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzzxjumpsoverthelazydoexyyt") == "iiiabefghijklmnopqslippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddddddddddddddddddbnyqtwszivxlipedchsibccx")){ tests_passed++; } total_tests++;

    if((encrypt("hhelothequickbrowhelhowythequicckbrownfhihinfoxumpsovekrthelazydo") == "llipsxliuymgofvsaliplsacxliuymggofvsarjlmlmrjsbyqtwsziovxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellomyfyrienhellodwxabcdefghijklmoxjumpsoverthelazydoexyyd") == "fgsllippsqcjcvmirlippshabefghijklmnopqsbnyqtwszivxlipedchsibcch")){ tests_passed++; } total_tests++;

    if((encrypt("helolomyfrienhellorgf") == "lipspsqcjvmirlippsvkj")){ tests_passed++; } total_tests++;

    if((encrypt("heeloo") == "liipss")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellomyfyrienhellodwxabcdefghijklmoxjumpsovertyhelazydoexyyd") == "fgsllippsqcjcvmirlippshabefghijklmnopqsbnyqtwszivxclipedchsibcch")){ tests_passed++; } total_tests++;

    if((encrypt("fhellfomyfrie") == "jlippjsqcjvmi")){ tests_passed++; } total_tests++;

    if((encrypt("gget") == "kkix")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyzythequickbrhownfoxjuyzwxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthickbrownfoxjumpsodverthelazydoyfrienhellod") == "efghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnycdabefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmgofvsarjsbnyqtwshzivxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("heelazydo") == "liipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("eeetrwxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjupompsoverthelazydoexyygft") == "iiixvabefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnytsqtwszivxlipedchsibcckjx")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodsoverthelazydo") == "lippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrowoxjumpsoverthelazydoyfrieunhellodget") == "lippsixqxliuymgofvsasbnyqtwszivxlipedchscjvmiyrlippshkix")){ tests_passed++; } total_tests++;

    if((encrypt("ahellomyfriendoxjumupsoverthelazydo") == "elippsqcjvmirhsbnyqytwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helowythehquickbrownfhhiorlde") == "lipsacxliluymgofvsarjllmsvphi")){ tests_passed++; } total_tests++;

    if((encrypt("ithi") == "mxlm")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrietrogf") == "lippsqcjvmixvskj")){ tests_passed++; } total_tests++;

    if((encrypt("habcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydoi") == "lefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchsm")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrowunfoxthequickbheti") == "cxliuymgofvsayrjsbxliuymgoflixm")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellomyfyrienhellofdwxabcdefghijklmoxjumpsovertyhelazydoexyyd") == "fgsllippsqcjcvmirlippsjhabefghijklmnopqsbnyqtwszivxclipedchsibcch")){ tests_passed++; } total_tests++;

    if((encrypt("helhlellelltiihi") == "liplpippippxmmlm")){ tests_passed++; } total_tests++;

    if((encrypt("ohhhelllellomyfrienheellod") == "slllipppippsqcjvmirliippsh")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrowonfoxumpsovekrwxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelahelflomyfrietrgfzydoexyythelazydo") == "lipsxliuymgofvsasrjsbyqtwsziovabefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipelipjpsqcjvmixvkjdchsibccxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hhellyomyfrienyhello") == "llippcsqcjvmirclipps")){ tests_passed++; } total_tests++;

    if((encrypt("ohhhelllellomyfriabcdefghijfklmnopeetrgftqrstuvwxyzythequickbrhownfoxjumpsoverthelahzydoenhellod") == "slllipppippsqcjvmefghijklmnjopqrstiixvkjxuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipeldchsirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodlflomyfrietrgf") == "lippsqcjvmirlippshpjpsqcjvmixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("helxloetmthequickbrowoxjumpsoverthelazydoyfrieunhellodget") == "lipbpsixqxliuymgofvsasbnyqtwszivxlipedchscjvmiyrlippshkix")){ tests_passed++; } total_tests++;

    if((encrypt("helhlellelletiihi") == "liplpippippixmmlm")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvwxyzythequickbrhownfoxjuyzwxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthickbrownfoxjumpsodverthyfrienhellod") == "efghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnycdabefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmgofvsarjsbnyqtwshzivxlcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrsteuvwxwxabcdefghijklmnopqrstuvwxyyzythequickbrhownfoxjsumpsoverthelazydoe") == "efghijklmnopqrstuvwxiyzababefghijklmnopqrstuvwxyzabccdcxliuymgofvlsarjsbnwyqtwszivxlipedchsi")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfriengrieonhellohellodnhellodlod") == "llippsqcjvmirkvmisrlippslippshrlippshpsh")){ tests_passed++; } total_tests++;

    if((encrypt("hhellyomyfriehello") == "llippcsqcjvmilipps")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfoxjuhelothequickbrownfoxjumpsgetoverthelazydompsoverthelazydojumhellomyfrienheodpsoverthelazydo") == "lippsqcjvmirlippshvsarjsbnylipsxliuymgofvsarjsbnyqtwkixszivxlipedchsqtwszivxlipedchsnyqlippsqcjvmirlishtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydooexyy") == "abefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchssibcc")){ tests_passed++; } total_tests++;

    if((encrypt("heloloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzhhelloetmyfrienhellodhelazydolzzzzzzzzzzzzzzzz") == "lipspsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddllippsixqcjvmirlippshlipedchspdddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("helflomyfriietrgf") == "lipjpsqcjvmmixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("ehiabcdefghijklmnopqrwnfxjumpsoveletthelazydoa") == "ilmefghijklmnopqrstuvarjbnyqtwszipixxlipedchse")){ tests_passed++; } total_tests++;

    if((encrypt("healloetmyfrienhellodhequickbrownfoxjumpsoverthelazeydog") == "lieppsixqcjvmirlippshliuymgofvsarjsbnyqtwszivxlipedichsk")){ tests_passed++; } total_tests++;

    if((encrypt("lhgfrieonhelloellomyfrie") == "plkjvmisrlippsippsqcjvmi")){ tests_passed++; } total_tests++;

    if((encrypt("hhellylomyfrienhellod") == "llippcpsqcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("hfsoverthigfthequickbhetid") == "ljwszivxlmkjxliuymgoflixmh")){ tests_passed++; } total_tests++;

    if((encrypt("aheallomyfriendoxjumpsoverthelazydo") == "elieppsqcjvmirhsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("aheallomyfriendoxjumpsoverthwxabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsovierthielazydo") == "elieppsqcjvmirhsbnyqtwszivxlabefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszmivxlmipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hhellohelloetmyfrienhellodhequickbrownfoxjumpsoverthelazydogodoworldmyfrienhellodeod") == "llippslippsixqcjvmirlippshliuymgofvsarjsbnyqtwszivxlipedchskshsasvphqcjvmirlippshish")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodlflomyfrietrgfumpsovehelloetmthequickbhrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzhi") == "lippsqcjvmirlippshpjpsqcjvmixvkjyqtwszilippsixqxliuymgoflvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccdddddddddlm")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhelloyzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoveorthigfthequickbhetidheloworld") == "lippsixqcjvmirlippscdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszisvxlmkjxliuymgoflixmhlipsasvph")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmtwxxyyhequickbrownfoxjumpsovehelloetmthequickbhrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzzrthelazydoyfrienhellod") == "lippsixqxabbccliuymgofvsarjsbnyqtwszilippsixqxliuymgoflvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddddddddddddddddddvxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("eflie") == "ijpmi")){ tests_passed++; } total_tests++;

    if((encrypt("ohhelyfrienhellood") == "sllipcjvmirlippssh")){ tests_passed++; } total_tests++;

    if((encrypt("ehellioetmhi") == "ilippmsixqlm")){ tests_passed++; } total_tests++;

    if((encrypt("ahellomyfriendoxjumupsoverthelaefzydo") == "elippsqcjvmirhsbnyqytwszivxlipeijdchs")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrieonhenllod") == "lippsqcjvmisrlirppsh")){ tests_passed++; } total_tests++;

    if((encrypt("hlelloetmtheqoxjumpsoverthelazydoyfrienhellod") == "lpippsixqxliusbnyqtwszivxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("hl") == "lp")){ tests_passed++; } total_tests++;

    if((encrypt("helhii") == "liplmm")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfriendoxjumpsojvertaheallomyfriendoxjumpsoverthelazydoazydo") == "lippsqcjvmirhsbnyqtwsnzivxelieppsqcjvmirhsbnyqtwszivxlipedchsedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodverthelazyollod") == "lippsqcjvmirlippshzivxlipedcsppsh")){ tests_passed++; } total_tests++;

    if((encrypt("eheihif") == "ilimlmj")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxjumtpsgmetovehrthelazydo") == "lipsxliuymgofvsarjsbnyqxtwkqixszilvxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("ythequickbrownfoxthuickbheti") == "cxliuymgofvsarjsbxlymgoflixm")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmnopqrstuvwxyzythequickbrhowhelloetmthequickbrownfoxjumpsoverthelazydoyhellomyfrienhellodrownfoxjumpabcdefghijklmnopqrstuvwxyzythequickbrownfoxjumpsoveletthelazydosoverthelazydojumpsoverthelazydoickbrownfoxjumhetinfoxjupmpsoverthelazydoexyy") == "abefghijklmnopqrstuvwxyzabcdcxliuymgofvlsalippsixqxliuymgofvsarjsbnyqtwszivxlipedchsclippsqcjvmirlippshvsarjsbnyqtefghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqtwszipixxlipedchswszivxlipedchsnyqtwszivxlipedchsmgofvsarjsbnyqlixmrjsbnytqtwszivxlipedchsibcc")){ tests_passed++; } total_tests++;

    if((encrypt("fhellfomyfrieheeloo") == "jlippjsqcjvmiliipss")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhelloyzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthigfthequickbheohhellomyfriendtidftd") == "lippsixqcjvmirlippscdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmkjxliuymgoflisllippsqcjvmirhxmhjxh")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickhelothequichellomyfrienhelloddrownfoxjumpsoverthelazydojumpsoverthelazydokbrownfoxumpsovekrthelazydobrownfoxjumpsoverthelazydo") == "lipsxliuymgolipsxliuymglippsqcjvmirlippshhvsarjsbnyqtwszivxlipedchsnyqtwszivxlipedchsofvsarjsbyqtwsziovxlipedchsfvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfriengfrieonhellohellodoverthelazydoythequickbrownoxjumpsoverthelazydollllomyfrienhehellomyfrienhellodrownfoxjumpsoverthelazydojumpsoverthelazydolleodgftomyfrietrgf") == "llippsqcjvmirkjvmisrlippslippshszivxlipedchscxliuymgofvsarsbnyqtwszivxlipedchsppppsqcjvmirlilippsqcjvmirlippshvsarjsbnyqtwszivxlipedchsnyqtwszivxlipedchsppishkjxsqcjvmixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodlflomyfrietrgfumpsoveheylloetmthequickbhrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzhi") == "lippsqcjvmirlippshpjpsqcjvmixvkjyqtwszilicppsixqxliuymgoflvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccdddddddddlm")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzzet") == "lippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddddddddddddddddddix")){ tests_passed++; } total_tests++;

    if((encrypt("ohhellomyfrienheellod") == "sllippsqcjvmirliippsh")){ tests_passed++; } total_tests++;

    if((encrypt("iheheti") == "mlilixm")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodlomyferienhellodtgf") == "lippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshpsqcjivmirlippshxkj")){ tests_passed++; } total_tests++;

    if((encrypt("f") == "j")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfoxjumpabcdefghijklmnopqrstuvwxyzythequickhelloetmthequickbrowoxjumpsoverthelazydoyfrieunhellodgetbrownfoxjumpsoveletthelazydosoverthelazydojumpsoverthelazydoickbrownfoxjumpsoverthelazydog") == "lippsqcjvmirlippshvsarjsbnyqtefghijklmnopqrstuvwxyzabcdcxliuymgolippsixqxliuymgofvsasbnyqtwszivxlipedchscjvmiyrlippshkixfvsarjsbnyqtwszipixxlipedchswszivxlipedchsnyqtwszivxlipedchsmgofvsarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("thequhelothequickbrownfoxjumpsgetovehrthelazydoyfrienhellodrownfoxjumpsoverthelazydo") == "xliuylipsxliuymgofvsarjsbnyqtwkixszilvxlipedchscjvmirlippshvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helolomyfrienhhelloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodellorgf") == "lipspsqcjvmirllippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshippsvkj")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyferienhelhabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelazydoiod") == "lippsqcjivmirliplefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipedchsmsh")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmtwxxyyhequickbrownfoxjumpsovehelloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzzrthelazydoyfrienhellod") == "lippsixqxabbccliuymgofvsarjsbnyqtwszilippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddddddddddddddddddvxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("heeoloo") == "liispss")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodxjumpsoverthelazydo") == "lippsqcjvmirlippshbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("aickbrownfoxjhumpsoveletthelazydo") == "emgofvsarjsbnlyqtwszipixxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hemlloetmyfrienhelloyzwxabcdefghcijklmnopqrsjtuvwxyzythequickbrhownfoxjumpsoverthigfthequickbhetidheloworld") == "liqppsixqcjvmirlippscdabefghijklgmnopqrstuvwnxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmkjxliuymgoflixmhlipsasvph")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfriengfrieonhellohellodoverthelazydoythequickbrownoxjumpsoverthelazydollomyfrietrgf") == "llippsqcjvmirkjvmisrlippslippshszivxlipedchscxliuymgofvsarsbnyqtwszivxlipedchsppsqcjvmixvkj")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodrownfoxjumpsothequickbhetiverthelazydohi") == "lippsqcjvmirlippshvsarjsbnyqtwsxliuymgoflixmzivxlipedchslm")){ tests_passed++; } total_tests++;

    if((encrypt("wlorld") == "apsvph")){ tests_passed++; } total_tests++;

    if((encrypt("ythehelloetmthelquickbrownfoxjumpsoverthelhellomyfrienhellodellomyfrienhelloodazydoyienhellodnfhi") == "cxlilippsixqxlipuymgofvsarjsbnyqtwszivxliplippsqcjvmirlippshippsqcjvmirlippsshedchscmirlippshrjlm")){ tests_passed++; } total_tests++;

    if((encrypt("hellomdyfriendoxjumpsojverthelazydo") == "lippsqhcjvmirhsbnyqtwsnzivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmtheqoxjumpsoverthelazydoyfrienhellod") == "lippsixqxliusbnyqtwszivxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("llomyfrienhehellomyfrienhellooxjumpsoverthelazyollod") == "ppsqcjvmirlilippsqcjvmirlippssbnyqtwszivxlipedcsppsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhellodlflomyfrietrgfumpsoveheylloetmthequicheelazydokbhrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzhi") == "lippsqcjvmirlippshpjpsqcjvmixvkjyqtwszilicppsixqxliuymgliipedchsoflvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccdddddddddlm")){ tests_passed++; } total_tests++;

    if((encrypt("yzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthi") == "cdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlm")){ tests_passed++; } total_tests++;

    if((encrypt("helolnhelnlo") == "lipsprliprps")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmtwxxyyhequickbrownfoxjumpsovehelloetmtheabcdefghijklmnopqrstuvwxyzythequickbrownfoxjumabcdefghijklmnopqrstuvwxyzythequickbrownfoxjumpsoverthelazydopsoveletthelazydoquickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzzrthelazydoyfrienhellod") == "lippsixqxabbccliuymgofvsarjsbnyqtwszilippsixqxliefghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqefghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqtwszivxlipedchstwszipixxlipedchsuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddddddddddddddddddvxlipedchscjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("wxxyyworld") == "abbccasvph")){ tests_passed++; } total_tests++;

    if((encrypt("bcohhellomyfhi") == "fgsllippsqcjlm")){ tests_passed++; } total_tests++;

    if((encrypt("heloethequickbrownfoxjumpsgmetovehrthelazydo") == "lipsixliuymgofvsarjsbnyqtwkqixszilvxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yzhzzzzzzzzzzzzzzeyheelzzzzzzzzzzz") == "cdlddddddddddddddicliipddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmpsoverthelazydoyfrienhellodfhelllod") == "lippsixqtwszivxlipedchscjvmirlippshjlipppsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellll") == "lipppp")){ tests_passed++; } total_tests++;

    if((encrypt("helhlelthi") == "liplpipxlm")){ tests_passed++; } total_tests++;

    if((encrypt("ohhellomyfrieod") == "sllippsqcjvmish")){ tests_passed++; } total_tests++;

    if((encrypt("ohhelllomyfriend") == "sllipppsqcjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("hellhi") == "lipplm")){ tests_passed++; } total_tests++;

    if((encrypt("thelothequickbrownfonxjumpsgetoverthelazydo") == "xlipsxliuymgofvsarjsrbnyqtwkixszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("hhhellyomyfrienhellodl") == "lllippcsqcjvmirlippshp")){ tests_passed++; } total_tests++;

    if((encrypt("helloetmyfrienhelloyzwxabcdefghcijkqlmnopqrstuvwxyzythequickbrhownfoxjumpsoverthigfthequickbheohhellomyfriendtidftd") == "lippsixqcjvmirlippscdabefghijklgmnoupqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmkjxliuymgoflisllippsqcjvmirhxmhjxh")){ tests_passed++; } total_tests++;

    if((encrypt("ohhelolomyfrienhellodgf") == "sllipspsqcjvmirlippshkj")){ tests_passed++; } total_tests++;

    if((encrypt("hhelyfrienhellod") == "llipcjvmirlippsh")){ tests_passed++; } total_tests++;

    if((encrypt("bchllomyfhi") == "fglppsqcjlm")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfrienhellodehi") == "llippsqcjvmirlippshilm")){ tests_passed++; } total_tests++;

    if((encrypt("helothequickbrownfoxumpsovekrthelazydodehel") == "lipsxliuymgofvsarjsbyqtwsziovxlipedchshilip")){ tests_passed++; } total_tests++;

    if((encrypt("gehelloetmpsoverthelazydoyfrienhellodfhelllod") == "kilippsixqtwszivxlipedchscjvmirlippshjlipppsh")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienhelleodrownfoxjumpabcdefghijklmnopqrstuvwxyzythequickbrownfoxjumhello") == "lippsqcjvmirlippishvsarjsbnyqtefghijklmnopqrstuvwxyzabcdcxliuymgofvsarjsbnyqlipps")){ tests_passed++; } total_tests++;

    if((encrypt("hod") == "lsh")){ tests_passed++; } total_tests++;

    if((encrypt("hhellomyfriengfrieonhelheti") == "llippsqcjvmirkjvmisrliplixm")){ tests_passed++; } total_tests++;

    if((encrypt("ehabcdefghijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthelcazydoit") == "ilefghijklmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlipgedchsmx")){ tests_passed++; } total_tests++;

    if((encrypt("eeewxabcdefghijklmohelloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzhelloetmthequickbrownfoxjumpsoverthelazydoyfrienhellodhelazydoexyyzzzzzzzzzzzzzzzzzzetzxjumpsoverthelazydoexyyt") == "iiiabefghijklmnopqslippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccdddddddddddddddddlippsixqxliuymgofvsarjsbnyqtwszivxlipedchscjvmirlippshlipedchsibccddddddddddddddddddixdbnyqtwszivxlipedchsibccx")){ tests_passed++; } total_tests++;

    if((encrypt("ehelloetyfrienhelloyzwxabcdefghcijklmnopqrstuvwxyzythequickbrhownfoxjumpsoverthiet") == "ilippsixcjvmirlippscdabefghijklgmnopqrstuvwxyzabcdcxliuymgofvlsarjsbnyqtwszivxlmix")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbromwnfoxjumpsoverthelazydog") == "xliuymgofvsqarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickbrownfoxjumpsoverthelazydog") == "xliugymgofvsarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzzzzzzzzzzzzzz") == "cdddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerthelazydog") == "xliuymgivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("ehello") == "ilipps")){ tests_passed++; } total_tests++;

    if((encrypt("yzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz") == "cdcddddddddddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuvxyz") == "efghijklmnopqrstuvwxyzbcd")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerthelazydoag") == "xliuymgivxlipedchsek")){ tests_passed++; } total_tests++;

    if((encrypt("thequicertthelazydog") == "xliuymgivxxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("hellogfa") == "lippskje")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrthequicerthelazydogownfoxjumpsoverthelazydo") == "xliuymgofvxliuymgivxlipedchsksarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxydo") == "xliuymgofvsarjsbchs")){ tests_passed++; } total_tests++;

    if((encrypt("thequicwkbrthequicerthelazydogownofoxjumpsoverthelazydo") == "xliuymgaofvxliuymgivxlipedchsksarsjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("thequickborownfoxydo") == "xliuymgofsvsarjsbchs")){ tests_passed++; } total_tests++;

    if((encrypt("world") == "asvph")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghihjklmnopqrstuvxyz") == "efghijklmlnopqrstuvwxyzbcd")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbromwnfoxjumpsovertheletazydog") == "xliuymgofvsqarjsbnyqtwszivxlipixedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("hellogmyfriend") == "lippskqcjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("thequicekbromwnfoxjumpsoverthelazydog") == "xliuymgiofvsqarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("yzz") == "cdd")){ tests_passed++; } total_tests++;

    if((encrypt("thkbrownfoxjumpsoverthelazydo") == "xlofvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxjumpsoverthelazydfo") == "xliuymgofvsarjsbnyqtwszivxlipedchjs")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickbrownfoxjumpsoverthelazbydog") == "xliugymgofvsarjsbnyqtwszivxlipedfchsk")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickabcdefghihjklmnopqrstuvxyzbrownfoxjumpsoverthelhellogmyfriendazydog") == "xliugymgoefghijklmlnopqrstuvwxyzbcdfvsarjsbnyqtwszivxliplippskqcjvmirhedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("helllogfa") == "lipppskje")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrthequicerthelazydogownfoxjumpsovelazydo") == "xliuymgofvxliuymgivxlipedchsksarjsbnyqtwszipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("ehellott") == "ilippsxx")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbromwnfoxjumpsoverdog") == "xliuymgofvsqarjsbnyqtwszivhsk")){ tests_passed++; } total_tests++;

    if((encrypt("wetorld") == "aixsvph")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerthequicekbromwnfoxjumpsoverthelazydogthelazydog") == "xliuymgivxliuymgiofvsqarjsbnyqtwszivxlipedchskxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("thequiuckbrownfoxjumpsoverthelazydo") == "xliuymygofvsarjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("theqthequicerthequicekbromwnfoxjumpsoverthelazydogthelazydogdog") == "xliuxliuymgivxliuymgiofvsqarjsbnyqtwszivxlipedchskxlipedchskhsk")){ tests_passed++; } total_tests++;

    if((encrypt("ehelloyzz") == "ilippscdd")){ tests_passed++; } total_tests++;

    if((encrypt("thequtickborownfoxydo") == "xliuyxmgofsvsarjsbchs")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerthequicezkbromwnfoxjumpsoverthelazydogthelazydog") == "xliuymgivxliuymgidofvsqarjsbnyqtwszivxlipedchskxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("hellogmythequicertthelazydogfriend") == "lippskqcxliuymgivxxlipedchskjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("ello") == "ipps")){ tests_passed++; } total_tests++;

    if((encrypt("yzyz") == "cdcd")){ tests_passed++; } total_tests++;

    if((encrypt("helbcy") == "lipfgc")){ tests_passed++; } total_tests++;

    if((encrypt("afbcdefghijklhellogfa") == "ejfghijklmnoplippskje")){ tests_passed++; } total_tests++;

    if((encrypt("ehellot") == "ilippsx")){ tests_passed++; } total_tests++;

    if((encrypt("theqkbrownfoxydo") == "xliuofvsarjsbchs")){ tests_passed++; } total_tests++;

    if((encrypt("worl") == "asvp")){ tests_passed++; } total_tests++;

    if((encrypt("worlwxyyd") == "asvpabcch")){ tests_passed++; } total_tests++;

    if((encrypt("yzzz") == "cddd")){ tests_passed++; } total_tests++;

    if((encrypt("ehe") == "ili")){ tests_passed++; } total_tests++;

    if((encrypt("hellogfaello") == "lippskjeipps")){ tests_passed++; } total_tests++;

    if((encrypt("glhello") == "kplipps")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickabcdefghihjklmnoownfoxjumpsoverthelhellogmyfriendazydog") == "xliugymgoefghijklmlnopqrssarjsbnyqtwszivxliplippskqcjvmirhedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("yzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz") == "cdcdddddddddddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("heleloo") == "lipipss")){ tests_passed++; } total_tests++;

    if((encrypt("eheellot") == "iliippsx")){ tests_passed++; } total_tests++;

    if((encrypt("ywxy") == "cabc")){ tests_passed++; } total_tests++;

    if((encrypt("helllo") == "lippps")){ tests_passed++; } total_tests++;

    if((encrypt("woworwethorldrlwxyyd") == "asasvaixlsvphvpabcch")){ tests_passed++; } total_tests++;

    if((encrypt("thequiceurtthelazydog") == "xliuymgiyvxxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienduvxyz") == "lippsqcjvmirhyzbcd")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerthequicezkbroomwnfoxjumpsoverthelazydogthelazydog") == "xliuymgivxliuymgidofvssqarjsbnyqtwszivxlipedchskxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("fgf") == "jkj")){ tests_passed++; } total_tests++;

    if((encrypt("yzyzzzzzzzzzzzz") == "cdcdddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("theqeutickborownfoxydo") == "xliuiyxmgofsvsarjsbchs")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxjumpsoverthelazyd") == "xliuymgofvsarjsbnyqtwszivxlipedch")){ tests_passed++; } total_tests++;

    if((encrypt("woworwethorlldrlwxd") == "asasvaixlsvpphvpabh")){ tests_passed++; } total_tests++;

    if((encrypt("gglhello") == "kkplipps")){ tests_passed++; } total_tests++;

    if((encrypt("thequicertthequickbrthequicerthelazydogownfoxjumpsovelazydohelazydoag") == "xliuymgivxxliuymgofvxliuymgivxlipedchsksarjsbnyqtwszipedchslipedchsek")){ tests_passed++; } total_tests++;

    if((encrypt("s") == "w")){ tests_passed++; } total_tests++;

    if((encrypt("thequickborownfoxydfo") == "xliuymgofsvsarjsbchjs")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbromownfoxjumpsoverdog") == "xliuymgofvsqsarjsbnyqtwszivhsk")){ tests_passed++; } total_tests++;

    if((encrypt("ggff") == "kkjj")){ tests_passed++; } total_tests++;

    if((encrypt("hhillogfaello") == "llmppskjeipps")){ tests_passed++; } total_tests++;

    if((encrypt("thequicwkbrthequicerthelazydogownofoxjumpszydo") == "xliuymgaofvxliuymgivxlipedchsksarsjsbnyqtwdchs")){ tests_passed++; } total_tests++;

    if((encrypt("worethorld") == "asvixlsvph")){ tests_passed++; } total_tests++;

    if((encrypt("thequiceurtazydog") == "xliuymgiyvxedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("helbcthequickbryzzoy") == "lipfgxliuymgofvcddsc")){ tests_passed++; } total_tests++;

    if((encrypt("worwethorld") == "asvaixlsvph")){ tests_passed++; } total_tests++;

    if((encrypt("eehello") == "iilipps")){ tests_passed++; } total_tests++;

    if((encrypt("thequicydog") == "xliuymgchsk")){ tests_passed++; } total_tests++;

    if((encrypt("theqkbrowfnfoxydo") == "xliuofvsajrjsbchs")){ tests_passed++; } total_tests++;

    if((encrypt("hwellogfa") == "laippskje")){ tests_passed++; } total_tests++;

    if((encrypt("wyorlwxyyd") == "acsvpabcch")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxjumpsovworwethorlderthelazyd") == "xliuymgofvsarjsbnyqtwszasvaixlsvphivxlipedch")){ tests_passed++; } total_tests++;

    if((encrypt("thequicwkbrthequicerthelazydogaownofoxjumpsoverthelazydo") == "xliuymgaofvxliuymgivxlipedchskesarsjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("worlwxd") == "asvpabh")){ tests_passed++; } total_tests++;

    if((encrypt("herienduvxyz") == "livmirhyzbcd")){ tests_passed++; } total_tests++;

    if((encrypt("abcdyzzefghijklmnopqrstuvxyz") == "efghcddijklmnopqrstuvwxyzbcd")){ tests_passed++; } total_tests++;

    if((encrypt("yxwxy") == "cbabc")){ tests_passed++; } total_tests++;

    if((encrypt("yzyzzzzzhellozzzzzzzzzzzzzzzzzzzzzzzzzzzz") == "cdcdddddlippsdddddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("myfriendvwxyz") == "qcjvmirhzabcd")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickabcdefghihjklmehellotnfoxjumpsoverthelhellogmyfriendazydog") == "xliugymgoefghijklmlnopqilippsxrjsbnyqtwszivxliplippskqcjvmirhedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrthequiceerthelazydogownfoxjumpsovelazydo") == "xliuymgofvxliuymgiivxlipedchsksarjsbnyqtwszipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("yzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzztheqcuickabcdefghihjklmnopqrstuvxyzbrownfoxjumpsoverthelhellogmyfriendazydogzzzz") == "cdcdddddddddddddddddddddddddddddxliugymgoefghijklmlnopqrstuvwxyzbcdfvsarjsbnyqtwszivxliplippskqcjvmirhedchskdddd")){ tests_passed++; } total_tests++;

    if((encrypt("gfs") == "kjw")){ tests_passed++; } total_tests++;

    if((encrypt("hloglfa") == "lpskpje")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerpsoverthelazydogthelazydog") == "xliuymgivtwszivxlipedchskxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("hellogmyfiend") == "lippskqcjmirh")){ tests_passed++; } total_tests++;

    if((encrypt("thequiutckbrownfoxjumpstoverthelazydo") == "xliuymyxgofvsarjsbnyqtwxszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("helelooywxy") == "lipipsscabc")){ tests_passed++; } total_tests++;

    if((encrypt("helbcmld") == "lipfgqph")){ tests_passed++; } total_tests++;

    if((encrypt("heriennduvxyz") == "livmirrhyzbcd")){ tests_passed++; } total_tests++;

    if((encrypt("yzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz") == "cddcdddddddddddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("hihihellogmyfriendellogmyfriiend") == "lmlmlippskqcjvmirhippskqcjvmmirh")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxydhhillogfaelloo") == "xliuymgofvsarjsbchllmppskjeippss")){ tests_passed++; } total_tests++;

    if((encrypt("thequiutckbrownfoxjumpstovelazydo") == "xliuymyxgofvsarjsbnyqtwxszipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickabcdefghinhjklmnopqrstuvxyzbrownfoxjumpsoverthelhellogmyfriendazydog") == "xliugymgoefghijklmrlnopqrstuvwxyzbcdfvsarjsbnyqtwszivxliplippskqcjvmirhedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("yzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz") == "cdcdddddddddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("ywxytheqcuickbrownfoxjumpsoverthelazydog") == "cabcxliugymgofvsarjsbnyqtwszivxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickabcdefghihjklmehellotnfoxjumpsoverthoelhellogmyfriendazydog") == "xliugymgoefghijklmlnopqilippsxrjsbnyqtwszivxlsiplippskqcjvmirhedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("r") == "v")){ tests_passed++; } total_tests++;

    if((encrypt("hellogmyfienid") == "lippskqcjmirmh")){ tests_passed++; } total_tests++;

    if((encrypt("hhelelooywxy") == "llipipsscabc")){ tests_passed++; } total_tests++;

    if((encrypt("fgyzyzzzzzhellozzzzzzzzzzzzzzzzzzzzzzzzzzzzf") == "jkcdcdddddlippsddddddddddddddddddddddddddddj")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbeheofgyzyzzzzzhellozzzzezzzzzzzzzzzzzzzzzzzzzzzzfo") == "xliuymgofilisjkcdcdddddlippsddddiddddddddddddddddddddddddjs")){ tests_passed++; } total_tests++;

    if((encrypt("hhelelooywxys") == "llipipsscabcw")){ tests_passed++; } total_tests++;

    if((encrypt("hellogmyfthequickbeheofgyzyzzzzzhellozzzzezzzzzzzzzzzzzzzzzzzzzzzzfoiend") == "lippskqcjxliuymgofilisjkcdcdddddlippsddddiddddddddddddddddddddddddjsmirh")){ tests_passed++; } total_tests++;

    if((encrypt("thequicetazydog") == "xliuymgixedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("woretaahorld") == "asvixeelsvph")){ tests_passed++; } total_tests++;

    if((encrypt("ld") == "ph")){ tests_passed++; } total_tests++;

    if((encrypt("woretarahorld") == "asvixevelsvph")){ tests_passed++; } total_tests++;

    if((encrypt("wethorldwnfoxjumpsoverdog") == "aixlsvpharjsbnyqtwszivhsk")){ tests_passed++; } total_tests++;

    if((encrypt("etabcdefghijklhellogfa") == "ixefghijklmnoplippskje")){ tests_passed++; } total_tests++;

    if((encrypt("thequicwkbrthequicerthelazydogownofoxjumpszytdo") == "xliuymgaofvxliuymgivxlipedchsksarsjsbnyqtwdcxhs")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerthequicekbromwnfoxjumpsoverthelazydogthelazytheqcuickabcdefghihjklmnopqrstuvxyzbrownfoxjumpsoverthelhellogmyfriendazydogdog") == "xliuymgivxliuymgiofvsqarjsbnyqtwszivxlipedchskxlipedcxliugymgoefghijklmlnopqrstuvwxyzbcdfvsarjsbnyqtwszivxliplippskqcjvmirhedchskhsk")){ tests_passed++; } total_tests++;

    if((encrypt("ahellhi") == "elipplm")){ tests_passed++; } total_tests++;

    if((encrypt("myfedamnopqrstrhind") == "qcjiheqrstuvwxvlmrh")){ tests_passed++; } total_tests++;

    if((encrypt("ahelthequickbrownfoxydolhi") == "elipxliuymgofvsarjsbchsplm")){ tests_passed++; } total_tests++;

    if((encrypt("thequicerthequcekbromwnfoxjumpsoverthelazydogthelazydog") == "xliuymgivxliuygiofvsqarjsbnyqtwszivxlipedchskxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("worlafbcdefghijklhellogfa") == "asvpejfghijklmnoplippskje")){ tests_passed++; } total_tests++;

    if((encrypt("heflbklmnopqrsthilomyfriend") == "lijpfopqrstuvwxlmpsqcjvmirh")){ tests_passed++; } total_tests++;

    if((encrypt("yzyyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz") == "cdccdddddddddddddddddddddddddddddddddd")){ tests_passed++; } total_tests++;

    if((encrypt("helbcmlld") == "lipfgqpph")){ tests_passed++; } total_tests++;

    if((encrypt("myfrieendvwxyz") == "qcjvmiirhzabcd")){ tests_passed++; } total_tests++;

    if((encrypt("thsaequicerthequcekbromwnfoxtyhequickbrthequicerthelazydogownfoxjumpsovelazydojumpsooverthelazydogthelazydog") == "xlweiuymgivxliuygiofvsqarjsbxcliuymgofvxliuymgivxlipedchsksarjsbnyqtwszipedchsnyqtwsszivxlipedchskxlipedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("theqfkbrowfnfoxydo") == "xliujofvsajrjsbchs")){ tests_passed++; } total_tests++;

    if((encrypt("eello") == "iipps")){ tests_passed++; } total_tests++;

    if((encrypt("hellond") == "lippsrh")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklmnopqrstuhi") == "efghijklmnopqrstuvwxylm")){ tests_passed++; } total_tests++;

    if((encrypt("hellomyfrienduvxyzo") == "lippsqcjvmirhyzbcds")){ tests_passed++; } total_tests++;

    if((encrypt("thequicwkbrthequicerthelazydogownofoxjheleloompszydo") == "xliuymgaofvxliuymgivxlipedchsksarsjsbnlipipssqtwdchs")){ tests_passed++; } total_tests++;

    if((encrypt("orlwxyyd") == "svpabcch")){ tests_passed++; } total_tests++;

    if((encrypt("ggfgf") == "kkjkj")){ tests_passed++; } total_tests++;

    if((encrypt("abcdetuvxyz") == "efghixyzbcd")){ tests_passed++; } total_tests++;

    if((encrypt("rworl") == "vasvp")){ tests_passed++; } total_tests++;

    if((encrypt("bb") == "ff")){ tests_passed++; } total_tests++;

    if((encrypt("athequicwkbrthequicerthelazydogaownofoxjumpsoverthelazydo") == "exliuymgaofvxliuymgivxlipedchskesarsjsbnyqtwszivxlipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("ahellogfa") == "elippskje")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrthequicqerthelazydogownfoxjumpsovelazydo") == "xliuymgofvxliuymguivxlipedchsksarjsbnyqtwszipedchs")){ tests_passed++; } total_tests++;

    if((encrypt("abcdyzzefghijklmnopqrsthi") == "efghcddijklmnopqrstuvwxlm")){ tests_passed++; } total_tests++;

    if((encrypt("hmyfriendfyfriendelgflo") == "lqcjvmirhjcjvmirhipkjps")){ tests_passed++; } total_tests++;

    if((encrypt("thequhellogmyfthequickbeheofgyzyzzzzzhellozzzzezzzzzzzzzzzzzzzzzzzzzzzzfoiendrtazydog") == "xliuylippskqcjxliuymgofilisjkcdcdddddlippsddddiddddddddddddddddddddddddjsmirhvxedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("thequickbrownfoxjumpsovertheloazydfo") == "xliuymgofvsarjsbnyqtwszivxlipsedchjs")){ tests_passed++; } total_tests++;

    if((encrypt("yzzzz") == "cdddd")){ tests_passed++; } total_tests++;

    if((encrypt("hellogfatoorld") == "lippskjexssvph")){ tests_passed++; } total_tests++;

    if((encrypt("theqcuickbrownfoxjumheleloopsooverthelazbydog") == "xliugymgofvsarjsbnyqlipipsstwsszivxlipedfchsk")){ tests_passed++; } total_tests++;

    if((encrypt("woworwethorlldrwlwxd") == "asasvaixlsvpphvapabh")){ tests_passed++; } total_tests++;

    if((encrypt("theqcrownfoxjumpsoverthelhellogmyfriendazydog") == "xliugvsarjsbnyqtwszivxliplippskqcjvmirhedchsk")){ tests_passed++; } total_tests++;

    if((encrypt("heflbklmnopqrsthilomyfrien") == "lijpfopqrstuvwxlmpsqcjvmir")){ tests_passed++; } total_tests++;

    if((encrypt("helbcml") == "lipfgqp")){ tests_passed++; } total_tests++;

    if((encrypt("wxabcdefghijklmnopqrstuhi") == "abefghijklmnopqrstuvwxylm")){ tests_passed++; } total_tests++;

    if((encrypt("abcdefghijklhellogfa") == "efghijklmnoplippskje")){ tests_passed++; } total_tests++;

    if((encrypt("yzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzztheqcuickabcdefghihjklmnopqrstuvxyzbrownfoxjumpsoverthelhellzz") == "cdcdddddddddddddddddddddddddddddxliugymgoefghijklmlnopqrstuvwxyzbcdfvsarjsbnyqtwszivxliplippdd")){ tests_passed++; } total_tests++;

    if((encrypt("abacdefghijklmnopqrstuvwxyz") == "efeghijklmnopqrstuvwxyzabcd")){ tests_passed++; } total_tests++;

    if((encrypt("hefmnopqrsthilomyfrien") == "lijqrstuvwxlmpsqcjvmir")){ tests_passed++; } total_tests++;

    if((encrypt("zyzzz") == "dcddd")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


