#include <openssl/md5.h>
#include <string>
using namespace std;

// Function to convert string to md5 hash
string string_to_md5(const string& text) {
    if (text == "") return "";   // Return empty string if the input is an empty string
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    string md5string = "";
    const char* hexdigits = "0123456789abcdef";  // Hexadecimal digits for conversion
    
    for(int i = 0; i < MD5_DIGEST_LENGTH; ++i){
        md5string += hexdigits[result[i]>>4];   // Shift 4 bits to the right and select high nibble.
        md5string += hexdigits[result[i]&15];   // And with 15 (0xF) to get lower nibble.
    }
    
    return md5string;
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

    if((string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62")){ tests_passed++; } total_tests++;

    if((string_to_md5("") == "None")){ tests_passed++; } total_tests++;

    if((string_to_md5("A B C") == "0ef78513b0cb8cef12743f5aeb35f888")){ tests_passed++; } total_tests++;

    if((string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99")){ tests_passed++; } total_tests++;

    if((string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99")){ tests_passed++; } total_tests++;

    if((string_to_md5("5873hajsdklh") == "0dbb501bb9d84c751d2cf6394d9308c0")){ tests_passed++; } total_tests++;

    if((string_to_md5("89704560917293019") == "6af63c9a5d2e45bff1b65efa69f1a3b5")){ tests_passed++; } total_tests++;

    if((string_to_md5("abc") == "900150983cd24fb0d6963f7d28e17f72")){ tests_passed++; } total_tests++;

    if((string_to_md5("abcd1234") == "e19d5cd5af0378da05f63f891c7467af")){ tests_passed++; } total_tests++;

    if((string_to_md5("test123") == "cc03e747a6afbbcbf8be7668acfebee5")){ tests_passed++; } total_tests++;

    if((string_to_md5("ab") == "187ef4436122d1cc2f40dc2b92f0eba0")){ tests_passed++; } total_tests++;

    if((string_to_md5("a89704560917293019bc") == "1b7c0b20324038dddfbce74231a3f1ee")){ tests_passed++; } total_tests++;

    if((string_to_md5("abcd12") == "d57587b0f5bbb0c3fe9d8cb16e97b0fe")){ tests_passed++; } total_tests++;

    if((string_to_md5("ab4") == "d7af5d83fa0ee375faf1a386528f437d")){ tests_passed++; } total_tests++;

    if((string_to_md5("abb") == "ea01e5fd8e4d8832825acdd20eac5104")){ tests_passed++; } total_tests++;

    if((string_to_md5("bab") == "d9d7dbddc29177b121a6aa1bb09d15fd")){ tests_passed++; } total_tests++;

    if((string_to_md5("897047560917293019") == "e249c1d0180904739fec5234d7059737")){ tests_passed++; } total_tests++;

    if((string_to_md5("Ze") == "906055940fdb58b2c0b472c956d38e9c")){ tests_passed++; } total_tests++;

    if((string_to_md5("teathabcstbbbcsbtbb123") == "fa19e98ccbb261fe97d2c562b9c4afe0")){ tests_passed++; } total_tests++;

    if((string_to_md5("8970456091Ze7293019") == "f9e6b50d1ea66774022dc117c0c36905")){ tests_passed++; } total_tests++;

    if((string_to_md5("89704e56091Ze7293019") == "00e038c29f513dc20bbfc6167c2e28f2")){ tests_passed++; } total_tests++;

    if((string_to_md5("ZZee") == "dd0d3de17c54b059bac7609f61c310ea")){ tests_passed++; } total_tests++;

    if((string_to_md5("abcd1") == "c7d9eb0d2f54f8c1177976cf2e6ee6d5")){ tests_passed++; } total_tests++;

    if((string_to_md5("rbm") == "f16998c1cf44efc4b8cbb809f782caa3")){ tests_passed++; } total_tests++;

    if((string_to_md5("ts") == "4d682ec4eed27c53849758bc13b6e179")){ tests_passed++; } total_tests++;

    if((string_to_md5("teathabcstbbbcteathabcstbbbcsbtbb123sbtbb123") == "178927f6377a57f10ba864fc5feaedae")){ tests_passed++; } total_tests++;

    if((string_to_md5("brbm") == "fdd1cc243da059bbb9b99b46e0c79388")){ tests_passed++; } total_tests++;

    if((string_to_md5("tetst123") == "1d14e175f6cf0bedc81bc8816a4c00e9")){ tests_passed++; } total_tests++;

    if((string_to_md5("teathabcstbbbct1eathabcstbbbcsbtbb123sbtbb123") == "e127f58a336a994d6558fc477a4dcaff")){ tests_passed++; } total_tests++;

    if((string_to_md5("abcda1") == "eb0e57d9a58063b0a0c0bedec37386cf")){ tests_passed++; } total_tests++;

    if((string_to_md5("5873hateathabcstbbbcteathabcstbbbcsbtbb123sbtbb123js8dklh") == "6846946f0085196c87b2c464fff5e37b")){ tests_passed++; } total_tests++;

    if((string_to_md5("897047560917293089704756091729301919") == "910b3b86c24e55d9454e734a3c87110c")){ tests_passed++; } total_tests++;

    if((string_to_md5("a") == "0cc175b9c0f1b6a831c399e269772661")){ tests_passed++; } total_tests++;

    if((string_to_md5("omykzjNQ") == "c06f47ab4b8c4cab77092aeddeb5364a")){ tests_passed++; } total_tests++;

    if((string_to_md5("a89704560917293019bac") == "92f63f1d92b4698b2a78e277dc75033d")){ tests_passed++; } total_tests++;

    if((string_to_md5("ab12") == "749d7048edd2de31c2c7a88d4d196254")){ tests_passed++; } total_tests++;

    if((string_to_md5("a234") == "ba52fbe2da359d675ae02fb95d7f55dd")){ tests_passed++; } total_tests++;

    if((string_to_md5("89704e1Ze7293019") == "99942284047d1636b28163e6e56873c7")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-") == "9f0dc6df87aa1b06d5de798ccb4ecfd1")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjklzxcvbnm") == "e5daaa90c369adfd156862d6df632ded")){ tests_passed++; } total_tests++;

    if((string_to_md5("1234567890") == "e807f1fcf82d132f9bb018ca6738a19f")){ tests_passed++; } total_tests++;

    if((string_to_md5("abcde!!") == "298a91d3de4e0e8d32bd63fa64319fca")){ tests_passed++; } total_tests++;

    if((string_to_md5("you_are_beautiful_t0day!123") == "1a968aa5e9ec50a5659ae74027b76e65")){ tests_passed++; } total_tests++;

    if((string_to_md5("lazy") == "0ffe34b4e04c2b282c5a388b1ad8aa7a")){ tests_passed++; } total_tests++;

    if((string_to_md5("elit.") == "0eedc028fc779c2eb13e494a6362135c")){ tests_passed++; } total_tests++;

    if((string_to_md5("senlongtences.") == "3e3c8b93b67eeba1955a612fb47225a7")){ tests_passed++; } total_tests++;

    if((string_to_md5("has") == "3309a7a7941818e131b4dfb9a6349914")){ tests_passed++; } total_tests++;

    if((string_to_md5("you_arcontainotnse_beautiful_t0day!123") == "5ce18fb1ec904af387d5f50cbdc71815")){ tests_passed++; } total_tests++;

    if((string_to_md5("of") == "8bf8854bebe108183caeb845c7676ae4")){ tests_passed++; } total_tests++;

    if((string_to_md5("it") == "0d149b90e7394297301c90191ae775f0")){ tests_passed++; } total_tests++;

    if((string_to_md5("not1234567890") == "1346f32393156f4687f695e773310cbf")){ tests_passed++; } total_tests++;

    if((string_to_md5("turpis,") == "c12cea12e9e2447b49eb5b133ea78bf3")){ tests_passed++; } total_tests++;

    if((string_to_md5("loremlorem") == "f0124af82c1e6300811d98d6734002db")){ tests_passed++; } total_tests++;

    if((string_to_md5("you_arcontainotnse_tiful_t0day!123") == "a3c7a17cdce742cc00e5d413331ed243")){ tests_passed++; } total_tests++;

    if((string_to_md5("eli.") == "6aec5958cec4d865a64713c3c2e262c7")){ tests_passed++; } total_tests++;

    if((string_to_md5("cosmopolis") == "8cc007d06fc3c05d13b443a2d67edfe1")){ tests_passed++; } total_tests++;

    if((string_to_md5("diam") == "ad18a418da4e3cbf4e3e5a70710f2d85")){ tests_passed++; } total_tests++;

    if((string_to_md5("dam") == "76ca1ef9eac7ebceeb9267daffd7fe48")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattis,") == "35c31ffc535186c311a1d6d0e18e535c")){ tests_passed++; } total_tests++;

    if((string_to_md5("test") == "098f6bcd4621d373cade4e832627b4f6")){ tests_passed++; } total_tests++;

    if((string_to_md5("input") == "a43c1b0aa53a0c908810c06ab1ff3967")){ tests_passed++; } total_tests++;

    if((string_to_md5("dictum.") == "ee85e09de4e9c513c77a3fc015c0be67")){ tests_passed++; } total_tests++;

    if((string_to_md5("quis") == "bb98d4e9c281b175ea84c517b59308ea")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjklzfoxxcvbnm") == "b784878042c9e43054885899fc368387")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjklzfioxxcvbnm") == "9aafe90ff3f1376427318ffc392194f1")){ tests_passed++; } total_tests++;

    if((string_to_md5("and") == "be5d5d37542d75f93a87094459f76678")){ tests_passed++; } total_tests++;

    if((string_to_md5("iinputt") == "08ac0bb9c4858299605f9e7fd240f7f1")){ tests_passed++; } total_tests++;

    if((string_to_md5("iit") == "8fa985e47a9d6f1bd3bbb75427442f6b")){ tests_passed++; } total_tests++;

    if((string_to_md5("matti,") == "3df2801a081b3673956b4c41f7aad2a6")){ tests_passed++; } total_tests++;

    if((string_to_md5("fItound") == "cfcbdeb1697df5d63eaef8bf0bb7afe9")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjkvitaecvbnm") == "90df4ea721e37f0da43fa481c05ca592")){ tests_passed++; } total_tests++;

    if((string_to_md5("eili.") == "9e28391b57961a2bc1bcc7eb06b294fd")){ tests_passed++; } total_tests++;

    if((string_to_md5("condimentum") == "5593a9e1c77d4f919f3137578dcbe9f3")){ tests_passed++; } total_tests++;

    if((string_to_md5("dog") == "06d80eb0c50b49a509b49f2424e8c805")){ tests_passed++; } total_tests++;

    if((string_to_md5("ei.li.") == "ced3e77aeba4e35f8c77c11cdcde44f8")){ tests_passed++; } total_tests++;

    if((string_to_md5("consecteturd") == "d2d77ea2b5eff376064fb3e197bbabf6")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattis,vitae") == "14192d8cf76686f76c3c27f28c62a37c")){ tests_passed++; } total_tests++;

    if((string_to_md5("condimem") == "81239102dd2bd8b24be684250c494e7d")){ tests_passed++; } total_tests++;

    if((string_to_md5("12334567890") == "91ec68d3db253eb113fd3047f21f51ea")){ tests_passed++; } total_tests++;

    if((string_to_md5("astringbcde!!") == "cc4f1d7f27ad6bee07ae4c607bf7d1ae")){ tests_passed++; } total_tests++;

    if((string_to_md5("eilifIotound.") == "5b2c15894a0f73eff67ae0a54e1c28e3")){ tests_passed++; } total_tests++;

    if((string_to_md5("123345678930") == "1d4d4a3344cf836cff0232974c39080c")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpGlX") == "72d1d2b484b68d04cba6d848880e86fa")){ tests_passed++; } total_tests++;

    if((string_to_md5("not") == "d529e941509eb9e9b9cfaeae1fe7ca23")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpGlGX") == "79bf722d035e6ea142751abc40c44798")){ tests_passed++; } total_tests++;

    if((string_to_md5("eu") == "4829322d03d1606fb09ae9af59a271d3")){ tests_passed++; } total_tests++;

    if((string_to_md5("inpupt") == "72a90666d3bb00e789ceab39e863f172")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghyjkvitaecvbnm") == "c245339a4d1cf98189d8a0662ec81f4c")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhcondimLoremdnwjh&^*FHJD&&3lazyq2ed65d~~+++|||\\][=-") == "19bec263b5fbb8e44cbd146b7ca42e01")){ tests_passed++; } total_tests++;

    if((string_to_md5("cosmsquick") == "43aaf553114cf39b15b9ce12c0b61c13")){ tests_passed++; } total_tests++;

    if((string_to_md5("lazyth") == "aca9eaebe604659c25c5f6d46f310162")){ tests_passed++; } total_tests++;

    if((string_to_md5("fordui") == "1fe3c3004a20e66ac8c8b01bc7888a45")){ tests_passed++; } total_tests++;

    if((string_to_md5("volutpat") == "923b22997eabf29a2adf56e77f4d3861")){ tests_passed++; } total_tests++;

    if((string_to_md5("Aliquama") == "6da9c6e916930438cc705bfa7c8a13c0")){ tests_passed++; } total_tests++;

    if((string_to_md5("vocontainslut") == "33b67e90addf8d6e8c7ed10e8affafa6")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyufghjklzxcvbnm") == "afe51013312105d126f8c78d12a2911b")){ tests_passed++; } total_tests++;

    if((string_to_md5("eluctusTethe") == "f12f78170a12223223c2e366a30d2763")){ tests_passed++; } total_tests++;

    if((string_to_md5("limiutations") == "a1c931954a1417a5bb8d41d1de5e3269")){ tests_passed++; } total_tests++;

    if((string_to_md5("Alaiquama") == "c6fb1efdaccc1fabdd746ba597fbcd28")){ tests_passed++; } total_tests++;

    if((string_to_md5("eletters.gelt") == "0e6797d27cf9ba26e4c119a99a1c799f")){ tests_passed++; } total_tests++;

    if((string_to_md5("t") == "e358efa489f58062f10dd7316b65649e")){ tests_passed++; } total_tests++;

    if((string_to_md5("fItodund") == "2f400301b85872752e99f3f813de4beb")){ tests_passed++; } total_tests++;

    if((string_to_md5("nont") == "e7f19e042dbec9855fce2721e903e10d")){ tests_passed++; } total_tests++;

    if((string_to_md5("loresitorem") == "f7e24570b71b1891283cbef87f9dafe9")){ tests_passed++; } total_tests++;

    if((string_to_md5("eilifcontainsIotound.") == "cfef372e8f8eb27ae458bcbd3b21686a")){ tests_passed++; } total_tests++;

    if((string_to_md5("GlGXX") == "3c69c2132c17423a356090c225de15c5")){ tests_passed++; } total_tests++;

    if((string_to_md5("innppt") == "e83d2c66e1434d872666057a5f6ad1e6")){ tests_passed++; } total_tests++;

    if((string_to_md5("lorem") == "d2e16e6ef52a45b7468f1da56bba1953")){ tests_passed++; } total_tests++;

    if((string_to_md5("characters") == "2593c7ce3ff937293feb1e61c152e551")){ tests_passed++; } total_tests++;

    if((string_to_md5("yy") == "2fb1c5cf58867b5bbc9a1b145a86f3a0")){ tests_passed++; } total_tests++;

    if((string_to_md5("contains") == "857af22f119fefbfa24769ed2ad6d5e7")){ tests_passed++; } total_tests++;

    if((string_to_md5("telit.") == "4e9691b67fb9acae0b80c270cab1dbfa")){ tests_passed++; } total_tests++;

    if((string_to_md5("36eThe764563fvhhcondimLoremdnwjh&^*FHJD&&3lazyq2edo65d~~+++|||\\][=-") == "0936cf921487454daab573f622473e61")){ tests_passed++; } total_tests++;

    if((string_to_md5("function") == "c1c425268e68385d1ab5074c17a94f14")){ tests_passed++; } total_tests++;

    if((string_to_md5("ofunction") == "f3b9cd2c5ed707c8d0c172b5efef2b7f")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.entum") == "4eab9cfd9af493e2206f40bb2ff1455f")){ tests_passed++; } total_tests++;

    if((string_to_md5("$special@") == "3ed149ba7b0aad75dd217b4a8abdec31")){ tests_passed++; } total_tests++;

    if((string_to_md5("36eThe764563fvhhcondimLoeluctusTheremdnwjh&^*FHJD&&3lazyq2edo65d~~+++|||\\][=-") == "76b98ae3549a21e282666711ed04f061")){ tests_passed++; } total_tests++;

    if((string_to_md5("cosmopolisquick") == "f6d9a070559546edd9f1258ceb79a693")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpGGlGX") == "84176ba1b9631ea4a38f3f50575b65b0")){ tests_passed++; } total_tests++;

    if((string_to_md5("eii.") == "f6b1f88d7ce82c37fd6d8258ba80c17e")){ tests_passed++; } total_tests++;

    if((string_to_md5("functoion") == "c55a6cf243e729a4c48cba50f6407596")){ tests_passed++; } total_tests++;

    if((string_to_md5("encoding") == "84bea1f0fd2ce16f7e562a9f06ef03d3")){ tests_passed++; } total_tests++;

    if((string_to_md5("consecquisteturd") == "751b812de30aec3aa64bf3d6a3c06e6b")){ tests_passed++; } total_tests++;

    if((string_to_md5("egelt") == "1f873c6164d4698575fad61503181e83")){ tests_passed++; } total_tests++;

    if((string_to_md5("ditheseam") == "c05d3764116f00791b662bd2b7bfe68e")){ tests_passed++; } total_tests++;

    if((string_to_md5("limiutationinputsnecs") == "de016a6cdaa3feac02b119975c2564f6")){ tests_passed++; } total_tests++;

    if((string_to_md5("inputs") == "a8aff967e1649a1c82ea607c881e8091")){ tests_passed++; } total_tests++;

    if((string_to_md5("dofermentumrg") == "7cfe1ae576699c8ee0798230807a6991")){ tests_passed++; } total_tests++;

    if((string_to_md5("zjmattis,umps") == "02cb6f21cf8c5bd1da83e2806e1a1038")){ tests_passed++; } total_tests++;

    if((string_to_md5("non-trivial") == "a163c8c78b197f2ae19be2f5586b2a20")){ tests_passed++; } total_tests++;

    if((string_to_md5("jsumps") == "6c138a0750d48ce96755c99797c20322")){ tests_passed++; } total_tests++;

    if((string_to_md5("Plell.i.li.entesqueo") == "4eb4d7882efe8decb6dd708a557b1b54")){ tests_passed++; } total_tests++;

    if((string_to_md5("on") == "ed2b5c0139cec8ad2873829dc1117d50")){ tests_passed++; } total_tests++;

    if((string_to_md5("forduui") == "70421b9e86e12cba070eb5622ee0bbb0")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattisi,") == "a83b94f8f37c84bf2ac6d0d9d37b9e22")){ tests_passed++; } total_tests++;

    if((string_to_md5("FusceeeluctusTethe") == "6f19f398e4d2ccf95cec3b3232f02408")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpeluctusTheGlGX") == "1feb9058d8f6de0081b2d246de235264")){ tests_passed++; } total_tests++;

    if((string_to_md5("Fuscfermentum") == "e1dc8eda837c5e9c4ceb1083c3554757")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.functoiony!123ingilla") == "52bfc65e238467a9f82cc4b58b0ba72d")){ tests_passed++; } total_tests++;

    if((string_to_md5("nec") == "0490b305539f9a2d4fb47a454c3a0dda")){ tests_passed++; } total_tests++;

    if((string_to_md5("yyyy") == "71ca9079d08bfa85e1e803427d25205a")){ tests_passed++; } total_tests++;

    if((string_to_md5("jumps") == "55947829059f255e4ba2f536a2ae99fe")){ tests_passed++; } total_tests++;

    if((string_to_md5("yytelit.") == "82846243aca3e9ecb2e36ff41ef6f88a")){ tests_passed++; } total_tests++;

    if((string_to_md5("odio") == "81defa8f7aec3af6ec8392bf4594be48")){ tests_passed++; } total_tests++;

    if((string_to_md5("fItdofermentumrgound") == "d12c251d1c2feb5490e9c2b33a132286")){ tests_passed++; } total_tests++;

    if((string_to_md5("conseGQpGlGXcteturd") == "49513a924378c1e9205ea0c3c8a59fe4")){ tests_passed++; } total_tests++;

    if((string_to_md5("volutpot") == "fa03a46cfa0c4353cfd8e65901333d0f")){ tests_passed++; } total_tests++;

    if((string_to_md5("quickluctus") == "df1f8045fec2f17b6426f642fa2732e0")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpeluctuusTheGlGX") == "961aae98a89b33135bf756956fc1a06d")){ tests_passed++; } total_tests++;

    if((string_to_md5("astriingbcde!!") == "84229e217109e1406d285a542189390b")){ tests_passed++; } total_tests++;

    if((string_to_md5("Itt") == "76bb7364fdd041ad63a700bcbe8f2b80")){ tests_passed++; } total_tests++;

    if((string_to_md5("teli") == "9b6f203733f94f09b8284327ef4a2ca2")){ tests_passed++; } total_tests++;

    if((string_to_md5("sgravida,engte") == "d1fdeacf87e45f65537419960e1f37b5")){ tests_passed++; } total_tests++;

    if((string_to_md5("maeluctusTethettisi,") == "986e0a29577657c38b2651bca0c1a0ae")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattis,,vie") == "3bc6c6083010e69e5ae04501a451b92b")){ tests_passed++; } total_tests++;

    if((string_to_md5("nelower") == "d7212079b5ed54cea6f1b1bf2f3c4e1b")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjkjlzxcvbnm") == "15954c5f3655b1184b71af5c04bb82aa")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyuiopasdfghjklzfioxxcvbnmmlit") == "8ddfa20b90407d459beae24c2faf88b4")){ tests_passed++; } total_tests++;

    if((string_to_md5("Lorem") == "db6ff2ffe2df7b8cfc0d9542bdce27dc")){ tests_passed++; } total_tests++;

    if((string_to_md5("fordshould") == "2384769833f520215cd648c3d1403195")){ tests_passed++; } total_tests++;

    if((string_to_md5("onot") == "eb75c83f85fc853c61c68d0fa580e1d0")){ tests_passed++; } total_tests++;

    if((string_to_md5("eilifcontainsIPlell.i.li.entesqueootound.") == "5d667ee8a41144990e27cb0e566c8037")){ tests_passed++; } total_tests++;

    if((string_to_md5("letters.") == "03680f0bbe312c138f3be2a8d70847cc")){ tests_passed++; } total_tests++;

    if((string_to_md5("yyit.") == "5bfc11f21594e9e40297153bee115ebf")){ tests_passed++; } total_tests++;

    if((string_to_md5("ot") == "15773549ac72a773120e125f74b04393")){ tests_passed++; } total_tests++;

    if((string_to_md5("sollicitudin") == "b6efac761d379404008c1a17379cd73e")){ tests_passed++; } total_tests++;

    if((string_to_md5("llorem") == "3747928cdb88334bb1a68a2a4a3704ab")){ tests_passed++; } total_tests++;

    if((string_to_md5("mdofermentumrg") == "992fa34647c444621d6ec191701d5429")){ tests_passed++; } total_tests++;

    if((string_to_md5("s") == "03c7c0ace395d80182db07ae2c30f034")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563eilifIotound.fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-") == "4cd95e9d165ab0dede3dbee74df6e0df")){ tests_passed++; } total_tests++;

    if((string_to_md5("eget") == "a7f8fc3f802198bbb0e2d465f6673009")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpeluctuusThescentences.GlGX") == "f908b94aa739f751a2c56b2b6ee9b216")){ tests_passed++; } total_tests++;

    if((string_to_md5("eThe") == "ed8c6e0a36c936e6a1a60f96c25caebf")){ tests_passed++; } total_tests++;

    if((string_to_md5("luctuts") == "ac05d377a332dfc9d77f72deefc6f6b0")){ tests_passed++; } total_tests++;

    if((string_to_md5("lit.") == "8c6bc044beacc4c58c95fad8a751aaa4")){ tests_passed++; } total_tests++;

    if((string_to_md5("limons") == "2f118e05ff2f735ba19a0b6f50f64e2e")){ tests_passed++; } total_tests++;

    if((string_to_md5("ASCIII.") == "e73693afd103c5dc78933c5acee3e5b0")){ tests_passed++; } total_tests++;

    if((string_to_md5("amet") == "7f9a983a540e00931a69382161bdd265")){ tests_passed++; } total_tests++;

    if((string_to_md5("litfItdofermentumrgound") == "9abd9d259e40d010e8a350866de709f2")){ tests_passed++; } total_tests++;

    if((string_to_md5("$specaial@") == "365bf927e6117397c006e54cfef9eae5")){ tests_passed++; } total_tests++;

    if((string_to_md5("consemarks.GQpGlGXcteturd") == "21b15cc994071a20b41fbbae406fe836")){ tests_passed++; } total_tests++;

    if((string_to_md5("Ailaiquama") == "7c6c9e4e65a9bd15f989f854aa48deed")){ tests_passed++; } total_tests++;

    if((string_to_md5("you_arcontainotnsel_t0day!123") == "dcf2177d1cb77fb3e06c2660e04db5db")){ tests_passed++; } total_tests++;

    if((string_to_md5("eilifcontainsIotouund.") == "20ed33cbd254dd8f4c9eac91ca6fb50c")){ tests_passed++; } total_tests++;

    if((string_to_md5("cosmopolcharactersisquick") == "d66b2f84b9b54887c2240da68a809d4f")){ tests_passed++; } total_tests++;

    if((string_to_md5("Fusce") == "d7ae3621397d5975141a07e654cb1965")){ tests_passed++; } total_tests++;

    if((string_to_md5("fordsho") == "448bfb992967e6885e3df9a0f5a75de9")){ tests_passed++; } total_tests++;

    if((string_to_md5("volu") == "d7329f1b00e0586ae2f09317b96acc3e")){ tests_passed++; } total_tests++;

    if((string_to_md5("otnot") == "968c7f15d43c662db0356d54ce240152")){ tests_passed++; } total_tests++;

    if((string_to_md5("at") == "7d0db380a5b95a8ba1da0bca241abda1")){ tests_passed++; } total_tests++;

    if((string_to_md5("mdofermentrumrg") == "b3b9b2cdbc1fbe290efe522062093991")){ tests_passed++; } total_tests++;

    if((string_to_md5("innulut") == "a4b04352a32c1cf1e9ba38b0b014ef80")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpGfItodundlX") == "21bdf268c782902d609b77b4afed80d1")){ tests_passed++; } total_tests++;

    if((string_to_md5("amet,") == "5a3e3d45a946e52ce224472c5db8b6a6")){ tests_passed++; } total_tests++;

    if((string_to_md5("nareec") == "ab38b560a0cec0f1fa596e26c4811ed4")){ tests_passed++; } total_tests++;

    if((string_to_md5("limiutationinputsnecjjsumpss") == "1a139fce716c17f8342ab7edd782e8cb")){ tests_passed++; } total_tests++;

    if((string_to_md5("Nunciutationinputsnecs") == "61477b453f0ec9286c0fa899ab79076f")){ tests_passed++; } total_tests++;

    if((string_to_md5("non-trivimalesuadat,") == "48444a3062e494cefa55bc647854f42a")){ tests_passed++; } total_tests++;

    if((string_to_md5("conseconvalliscquisteturd") == "b9a9ac12012da18e97fd7f9a06193be7")){ tests_passed++; } total_tests++;

    if((string_to_md5("consemarks.GQpQGlGXcteturd") == "0308df1da550f7823c6264817af63602")){ tests_passed++; } total_tests++;

    if((string_to_md5("encodning") == "0385b4d695c407390231dd59cec716d4")){ tests_passed++; } total_tests++;

    if((string_to_md5("Nunc") == "ebe95242b20ae8d56aeaaa4f35bb4de9")){ tests_passed++; } total_tests++;

    if((string_to_md5("quick") == "1df3746a4728276afdc24f828186f73a")){ tests_passed++; } total_tests++;

    if((string_to_md5("12334567") == "32135a337f8dc8e2bb9a9b80d86bdfd0")){ tests_passed++; } total_tests++;

    if((string_to_md5("odi") == "95734b47c7b7d7c3be6da6d9aac3a7a1")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.y!123ingilla") == "a125f7a2df15fab77a1c6cd04bfd0430")){ tests_passed++; } total_tests++;

    if((string_to_md5("of12346567890") == "b79e3d788f3d39095c80b77733c122da")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhcondimLoremdnwjh&^*FHJD&&3lazyq2ed65d~~+++|||\\][-") == "cfede59436ffeff08a25c81eba0c92ff")){ tests_passed++; } total_tests++;

    if((string_to_md5("not12345n67890") == "3396d5d7905a066974db4a7c98a058f6")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyuiopasdfghjklzfioxxcveilifcontainsIPlell.i.li.entesqueootound.bnmmlit") == "f1b7323ae998aa2c5b9870e36176fb7f")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.y1!123ingilla") == "8149decdd0f3d9ac2cb058328ae5d7ef")){ tests_passed++; } total_tests++;

    if((string_to_md5("Aimlaiquama") == "40f22536980bed7eb686eafec16977b1")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.functoiony!123ingil") == "0fc2537e5e25a951f6be3aea68bee1c3")){ tests_passed++; } total_tests++;

    if((string_to_md5("of122346567890") == "a8314555b2ca00a1374556d01f1a1c92")){ tests_passed++; } total_tests++;

    if((string_to_md5("Ndunc") == "c116cbe7c52c0c40c17d73254e551d0c")){ tests_passed++; } total_tests++;

    if((string_to_md5("mdomfermentumrg") == "7eceaa28b5f9064b19b6c5d489b49ea4")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjklzfoxxcvmi.llicitudinbnm") == "d4fcf7cc8c81fbf6f105da9d82f92e01")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhcondimLoremdnwjh&^*FHJD&&3lazyq2ed65d~~+++|||\\][Lorem") == "64cb33a55e2f6051429f0f5e19055b2b")){ tests_passed++; } total_tests++;

    if((string_to_md5("conesectetur") == "db65a2b312b1cec9b82e679aa338b429")){ tests_passed++; } total_tests++;

    if((string_to_md5("$spThis") == "897cfece7cfc844d56e7c0e313be7ccb")){ tests_passed++; } total_tests++;

    if((string_to_md5("el$spThisit.") == "40a096ec96c904fed728be490edb73e0")){ tests_passed++; } total_tests++;

    if((string_to_md5("molestie") == "16b8e956f7e20230367efb963e8ac2f8")){ tests_passed++; } total_tests++;

    if((string_to_md5("inlut") == "b9eae8734899e98ab7a035d1840b064c")){ tests_passed++; } total_tests++;

    if((string_to_md5("not1234356780") == "17dd63ebebee27d05c11f93b682383ab")){ tests_passed++; } total_tests++;

    if((string_to_md5("litfIItdofermentumrgound") == "4bb4b10f58327a730bc4516a95c4eb95")){ tests_passed++; } total_tests++;

    if((string_to_md5("forduu") == "cd8b7cc87edaf22aa6c2b8a30bad5fea")){ tests_passed++; } total_tests++;

    if((string_to_md5("yyity.") == "05e65a158d078fb934540292bfac163d")){ tests_passed++; } total_tests++;

    if((string_to_md5("limitations") == "7984e947265cc8b94c06702adbf28865")){ tests_passed++; } total_tests++;

    if((string_to_md5("soLorem") == "67c8919cf9e40d8572419b89ee42b942")){ tests_passed++; } total_tests++;

    if((string_to_md5("consemarks.GQpQGlGXctetGurdnd") == "6f1741566a3b4654b081d7b878d03ea8")){ tests_passed++; } total_tests++;

    if((string_to_md5("nfordshouldon-triinnpptvialtt") == "dc3489f74acab5d5336362f9b429fb1e")){ tests_passed++; } total_tests++;

    if((string_to_md5("conseGQpGlurd") == "b6e3a4c0dc472163e5474934de092c3a")){ tests_passed++; } total_tests++;

    if((string_to_md5("eilinputifcontainsIotound.") == "117db74414171c97d3c04b7c6fc9b3e4")){ tests_passed++; } total_tests++;

    if((string_to_md5("AilaiquaAma") == "6113d89fc1ca2df1bd3cbe6491fdb255")){ tests_passed++; } total_tests++;

    if((string_to_md5("1you_arcontainotnse_beautiful_t0daLorem23345678930") == "f7c55a798fb436c1bd012ff15d46e36f")){ tests_passed++; } total_tests++;

    if((string_to_md5("qxwertyuiopasdfghjklzfioxxcvbnm") == "aaae59a0810ba69ae04100e013f73883")){ tests_passed++; } total_tests++;

    if((string_to_md5("eilinputifcontainsIotoundp.") == "4ce1373ccd0fa5815933d9a428fb3bc0")){ tests_passed++; } total_tests++;

    if((string_to_md5("qcuick") == "70523b8af9234ba609893b22d88b3b29")){ tests_passed++; } total_tests++;

    if((string_to_md5("mdofermefntrumrg") == "fa26e054541d2b811984bd993b850fef")){ tests_passed++; } total_tests++;

    if((string_to_md5("lazytath") == "dd061d48bd689c67b43315be856c4b68")){ tests_passed++; } total_tests++;

    if((string_to_md5("e36eThe764563fvhhcondimLoeluctusTheremdnwjh&^*FHJD&&3lazyq2edo65d~~+++|||\\][=-get") == "17b2f429731c2341da345d573f8381a4")){ tests_passed++; } total_tests++;

    if((string_to_md5("onoot") == "187bf7ec524edbcba18a18c3dfd51495")){ tests_passed++; } total_tests++;

    if((string_to_md5("ametm") == "ad63fe12e6a23b88481721729a03b21b")){ tests_passed++; } total_tests++;

    if((string_to_md5("nulla") == "bdfcacaa4e5a8b57727335c0cbf7614b")){ tests_passed++; } total_tests++;

    if((string_to_md5("contaoins") == "3a2bb11f2bbe69ab09e723f7b36cb332")){ tests_passed++; } total_tests++;

    if((string_to_md5("not12345n687890") == "414a1761185d8b8ac3863c603ba1dc6e")){ tests_passed++; } total_tests++;

    if((string_to_md5("tellus") == "ae1a11e90a45f0a32c2677af47378c6c")){ tests_passed++; } total_tests++;

    if((string_to_md5("fordshouldASCII.ecial@") == "62b18a7c4397580028ba415f947a6fe3")){ tests_passed++; } total_tests++;

    if((string_to_md5("met,") == "37d91064072aa8d6d7da5641c5b27827")){ tests_passed++; } total_tests++;

    if((string_to_md5("mdofeurmentrumrg") == "f1e3a3f97a6e0a27df5fb9c0c44d025d")){ tests_passed++; } total_tests++;

    if((string_to_md5("otnoteilifcontainsIotouund.") == "ab620975f8a7fc31050fc7b7141e290e")){ tests_passed++; } total_tests++;

    if((string_to_md5("soLore") == "f1533b548b00d0a64c31cdd522909b90")){ tests_passed++; } total_tests++;

    if((string_to_md5("ujsumps") == "41639fc7a857df4115333156f5bf1c71")){ tests_passed++; } total_tests++;

    if((string_to_md5("marks.") == "b76b8d80516f4fafc5701abba41426d8")){ tests_passed++; } total_tests++;

    if((string_to_md5("testt") == "147538da338b770b61e592afc92b1ee6")){ tests_passed++; } total_tests++;

    if((string_to_md5("mli.y!123ingillla") == "144a0d10c59d913786ca78f4eab9de50")){ tests_passed++; } total_tests++;

    if((string_to_md5("mdofermentnot1234356780rumrg") == "83207d95e4f4f4f5486495fa5c8c321b")){ tests_passed++; } total_tests++;

    if((string_to_md5("$specaial") == "34d9915dcf157c860567770f679c26b7")){ tests_passed++; } total_tests++;

    if((string_to_md5("that") == "21582c6c30be1217322cdb9aebaf4a59")){ tests_passed++; } total_tests++;

    if((string_to_md5("mauinnppt") == "aed6a64b889f90bea1c0fa4ddbd0b5a4")){ tests_passed++; } total_tests++;

    if((string_to_md5("al,") == "0e021eb1cedff5b93e26ff51598a72e3")){ tests_passed++; } total_tests++;

    if((string_to_md5("innpppAdditionally,t") == "55f0bd9ff55f3bba46f9e2e4275225e4")){ tests_passed++; } total_tests++;

    if((string_to_md5("you_arcontainotnse_beautiful_t0y!123") == "775392507ef344f1fe64aebcf67bd48c")){ tests_passed++; } total_tests++;

    if((string_to_md5("sentences") == "9cc49ff7cdca6cb5a0646f1e962943a4")){ tests_passed++; } total_tests++;

    if((string_to_md5("Pellenteesque") == "bca3fc25313e0301f68de03b19a0f3f9")){ tests_passed++; } total_tests++;

    if((string_to_md5("manec") == "e6ca07ecc6c456c7f9b69d596f6ce8df")){ tests_passed++; } total_tests++;

    if((string_to_md5("Thiis") == "3b1885f136a3e484012b4d042e87bd18")){ tests_passed++; } total_tests++;

    if((string_to_md5("viverra") == "2365f10b67df48b5648d9f4c397e633f")){ tests_passed++; } total_tests++;

    if((string_to_md5("typicallyn") == "e0285bd12f792b6cf1985160d202db3b")){ tests_passed++; } total_tests++;

    if((string_to_md5("sitcosmopolisquick") == "53d27931128ff3a6730c9a0d2e5e5f0e")){ tests_passed++; } total_tests++;

    if((string_to_md5("characeilifIotound.rs") == "a4953bcac902b4c55efb0f1c9dc37258")){ tests_passed++; } total_tests++;

    if((string_to_md5("l") == "2db95e8e1a9267b7a1188556b2013b33")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.llicitudof122346567890in") == "13848a919c9722eaf4934b3a9becfac4")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.") == "5ef925237dc79af8bb532fac49023a4e")){ tests_passed++; } total_tests++;

    if((string_to_md5("senttristiqueences.") == "4a7efc64b6c857e4141ed3eb414f1808")){ tests_passed++; } total_tests++;

    if((string_to_md5("markcofItdofermentumrgoundndimems.") == "6e0443b92b7d4e2d1d1706d19f90c936")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyuiopwasdfghjklzfioxLorem") == "3de967727f8ad79b85ab60fd33c6a2b1")){ tests_passed++; } total_tests++;

    if((string_to_md5("yyiyy.") == "28a06c268b2c2374ddfd03994318d161")){ tests_passed++; } total_tests++;

    if((string_to_md5("dithheseam") == "8311152bf5883e4b353eb0818faa07af")){ tests_passed++; } total_tests++;

    if((string_to_md5("chahtracters") == "9a574c7bec01db152fbd88131162593e")){ tests_passed++; } total_tests++;

    if((string_to_md5("mix") == "da386e629171b833abc1e85955664bf4")){ tests_passed++; } total_tests++;

    if((string_to_md5("dfordsho") == "5f77875e8adde7654e9b7920d7c201c3")){ tests_passed++; } total_tests++;

    if((string_to_md5("Tl") == "0de3ba01184b62b2d8e5b01ca4842f76")){ tests_passed++; } total_tests++;

    if((string_to_md5("am") == "c04cd38aeb30f3ad1f8ab4e64a0ded7b")){ tests_passed++; } total_tests++;

    if((string_to_md5("soLomremm") == "1b466c51ab9df26b57bae7ad10f26e7e")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattimixsi,") == "61fc3679e01829c78f1e35decc9f9de9")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpGGGlGX") == "8706523bf3c8822276816ae00b0a9cf1")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyufghbnm") == "261b92f891ad624a67fcb7339d3917d7")){ tests_passed++; } total_tests++;

    if((string_to_md5("senlongtencesfItdofermentumrgound.") == "19f0e157b5e512868f8ea11098876a38")){ tests_passed++; } total_tests++;

    if((string_to_md5("123456evestibuluqwertyuiopasdfghjklzfioxLorem7890") == "7d9f85f553b7d4e2bff5e5328655b9ba")){ tests_passed++; } total_tests++;

    if((string_to_md5("anyyytelit.") == "955a2ece8b529cca6c6848072f45a844")){ tests_passed++; } total_tests++;

    if((string_to_md5("auiinputtt") == "92d3406f0d0dd621f9b3fa135d0475dd")){ tests_passed++; } total_tests++;

    if((string_to_md5("marmks.") == "57d10f7c0b747e2987f0fab97b6fcf34")){ tests_passed++; } total_tests++;

    if((string_to_md5("aam") == "35c2d90f7c06b623fe763d0a4e5b7ed9")){ tests_passed++; } total_tests++;

    if((string_to_md5("chami.y!123TSCII.touund.") == "90aca0a9ddd4a03d08452311d60044fe")){ tests_passed++; } total_tests++;

    if((string_to_md5("GQpeluctuesTheGlGX") == "c659e00d1ed2d1d897e138ca9f78be3e")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyutiopasdfghjklzfioxxcvbnlit") == "a1e5286ebb76c83a3a548ccd8c193ce6")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwzxcvbnrem") == "133c6db240b76346debc2cc3318abea3")){ tests_passed++; } total_tests++;

    if((string_to_md5("I") == "dd7536794b63bf90eccfd37f9b147d7f")){ tests_passed++; } total_tests++;

    if((string_to_md5("ial@") == "96ec76a81f1d668fd5c1cb62350394e4")){ tests_passed++; } total_tests++;

    if((string_to_md5("oot") == "bb34bdb533b492a62429dd0541d70c6f")){ tests_passed++; } total_tests++;

    if((string_to_md5("innpppAdditional,ly,t") == "b89e2bf692d6b0f0f60cc973db4f30ea")){ tests_passed++; } total_tests++;

    if((string_to_md5("ItIt") == "1ea7967f0bc9369e1c634726092efdc3")){ tests_passed++; } total_tests++;

    if((string_to_md5("vitae") == "855b1fd6af108e5f418efaa817b07f30")){ tests_passed++; } total_tests++;

    if((string_to_md5("zjumps") == "67a26558170b41c667e1e096e16c0aed")){ tests_passed++; } total_tests++;

    if((string_to_md5("anyyyetelit.") == "a7eace26118185e170b77a94e833d6e7")){ tests_passed++; } total_tests++;

    if((string_to_md5("sinot1234567890t") == "d9f113b2f112547507bf2b25501196c0")){ tests_passed++; } total_tests++;

    if((string_to_md5("vestibuluqwertyuiopasdfghjklzfioxxcvbnmm") == "829e6e73c901022461a984144c156e30")){ tests_passed++; } total_tests++;

    if((string_to_md5("asbtrimi.entumingbcde!!") == "26140307b99bce854ffaa7b136cef9bf")){ tests_passed++; } total_tests++;

    if((string_to_md5("elucyou_are_beautiful_t0day!123tusTethe") == "5746ff776b877147ceb19b6f184e6135")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjkjlzxcvbanyyytelit.nm") == "d55f9e8e7eb3cb27b7804f88aa23a3e2")){ tests_passed++; } total_tests++;

    if((string_to_md5("ila") == "aafe26449a364e5d6b5db7dc565a9b6a")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.uctusThe") == "f2a6880579ca615e8d7c7af00e6a2b8c")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyugiopasdfghjkjlzxcvbnm") == "427573477b73e38b540de1d88a38dcc1")){ tests_passed++; } total_tests++;

    if((string_to_md5("TeThe") == "62af5d8f7cf2e703050fa8841b111f42")){ tests_passed++; } total_tests++;

    if((string_to_md5("sino8t1234567890t") == "2215130a6714f05808dcacfa80503fac")){ tests_passed++; } total_tests++;

    if((string_to_md5("thesemi.xcvbnmmlitt") == "9e61b7344001899ec6146383008f1489")){ tests_passed++; } total_tests++;

    if((string_to_md5("cr") == "324d8a1d3f81e730d5099a48cee0c5b6")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqmanecwertyuiopasdfghjklzfioxxcvbnmmlit") == "f37cdada09d105bf3172d47933684062")){ tests_passed++; } total_tests++;

    if((string_to_md5("doge!!ful_t0day!123tusTethe") == "f1fc49d22d60dd96169a98a4bff3ce99")){ tests_passed++; } total_tests++;

    if((string_to_md5("lteli") == "8cfc8eebe92d03dd728967509eb36212")){ tests_passed++; } total_tests++;

    if((string_to_md5("intheters") == "20bb931cda672c441c6b7704c30b2465")){ tests_passed++; } total_tests++;

    if((string_to_md5("esii.") == "52aba8e4cc37524e9b8d66348b5ffd2c")){ tests_passed++; } total_tests++;

    if((string_to_md5("Fuqwertyuiopasdfghjklzfoxxcvbnmsce") == "ca7e7c977f548a11212347828c16b22d")){ tests_passed++; } total_tests++;

    if((string_to_md5("nelwer") == "2aa1fead431cbd14126f14c4254048c9")){ tests_passed++; } total_tests++;

    if((string_to_md5("elLorem") == "d04ce2b6ea61622d94716c1f2845f84f")){ tests_passed++; } total_tests++;

    if((string_to_md5("froingillla") == "99ee668185a0b74481380255cd8dd9fa")){ tests_passed++; } total_tests++;

    if((string_to_md5("eii12334567890.") == "8b455065a44b92976c898267960a33ee")){ tests_passed++; } total_tests++;

    if((string_to_md5("conXseGQpGlGXcteturd") == "96f0a13ef4fe3b5bf6d2003ccb24ef01")){ tests_passed++; } total_tests++;

    if((string_to_md5("aametm") == "f4b40117550358e489a03d4c06048c11")){ tests_passed++; } total_tests++;

    if((string_to_md5("doge!!") == "627208a5e24caf3eed4a57007a13183b")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattisiTeThe,") == "642c7a5dc5ab173a2de62f686432a208")){ tests_passed++; } total_tests++;

    if((string_to_md5("conlurd") == "f36e11de893a9956ae75a7108b71019e")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyuiopwasdfghtjklzfioxLorem") == "93bc9259169640ab78220d4b80e3bb82")){ tests_passed++; } total_tests++;

    if((string_to_md5("mdofermentnumrg") == "a54579a335dcd77cad42dab073e8c9e4")){ tests_passed++; } total_tests++;

    if((string_to_md5("fastriingbcdTheox") == "be965fb52335c994cbf19a49cbcb9d5b")){ tests_passed++; } total_tests++;

    if((string_to_md5("regular") == "af37d08ae228a87dc6b265fd1019c97d")){ tests_passed++; } total_tests++;

    if((string_to_md5("sitcossmopolisquick") == "d14c50a07dba2ae553b29004f137738c")){ tests_passed++; } total_tests++;

    if((string_to_md5("conseconvallicquieturd") == "0038c636c4a1d1e266a53b7b3486b8a7")){ tests_passed++; } total_tests++;

    if((string_to_md5("coonsecteturd") == "a104c0a5062d2b614960d393698734f4")){ tests_passed++; } total_tests++;

    if((string_to_md5("vNunc") == "385b41ed7ed2ec6301d8c3d42dbdd741")){ tests_passed++; } total_tests++;

    if((string_to_md5("quickmp") == "d010abee9f7a58de55a9ea7a1490c19c")){ tests_passed++; } total_tests++;

    if((string_to_md5("froingilla") == "a4cc72cae7ddd0b7db4756ae4278f584")){ tests_passed++; } total_tests++;

    if((string_to_md5("reglar") == "67e69040eeef45a1cd8216c5c872ede2")){ tests_passed++; } total_tests++;

    if((string_to_md5("nfordshsinot1234567890touldon-triinottvialtt") == "f4c72e47b1adb6298fa3116d3f431132")){ tests_passed++; } total_tests++;

    if((string_to_md5("browneget") == "7df207bb20875d5318a7fab8a5ab9dd2")){ tests_passed++; } total_tests++;

    if((string_to_md5("ll") == "5b54c0a045f179bcbbbc9abcb8b5cd4c")){ tests_passed++; } total_tests++;

    if((string_to_md5("brrocharacte3676456i3fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-rswn") == "6525f276a212e161a482149118388aa0")){ tests_passed++; } total_tests++;

    if((string_to_md5("qduis") == "b310fd44e4950865c8c98745e7b6fba1")){ tests_passed++; } total_tests++;

    if((string_to_md5("voluctpat") == "94852e6c4296b0d6117729d666e29d27")){ tests_passed++; } total_tests++;

    if((string_to_md5("testtt") == "f55e23f49445a3cf708c19577f218a5b")){ tests_passed++; } total_tests++;

    if((string_to_md5("testmattisi,") == "01bdf795b8be46149de235bb415bd62b")){ tests_passed++; } total_tests++;

    if((string_to_md5("dictshouldum.") == "20a7440cf22919aa9f9c0885eef82876")){ tests_passed++; } total_tests++;

    if((string_to_md5("The") == "a4704fd35f0308287f2937ba3eccf5fe")){ tests_passed++; } total_tests++;

    if((string_to_md5("litfItdgound") == "f777a6109ccc2aa3e00cb9d2ab95a752")){ tests_passed++; } total_tests++;

    if((string_to_md5("e") == "e1671797c52e15f763380b45e841ec32")){ tests_passed++; } total_tests++;

    if((string_to_md5("TW") == "3d9975706be3087ca199f440b1589b9e")){ tests_passed++; } total_tests++;

    if((string_to_md5("eluctuesTethe") == "85f782843a31abcf5fc7867013b5ebb6")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattis,vitate") == "bfe7c2ebe08b712cd7e90e31b03febe5")){ tests_passed++; } total_tests++;

    if((string_to_md5("consecoteturd") == "6aedf77e0aa50822b06d9e6dc52f015a")){ tests_passed++; } total_tests++;

    if((string_to_md5("et,") == "e540943cda4d228ce771c0ed8eff398f")){ tests_passed++; } total_tests++;

    if((string_to_md5("non-tmattisiTeThe,rivial") == "86deb8fb7926b41fad6f77bcc6d32a7d")){ tests_passed++; } total_tests++;

    if((string_to_md5("fringilla") == "628e93f38039e0d664779477c11f2f6f")){ tests_passed++; } total_tests++;

    if((string_to_md5("conseconvalurd") == "ff687e1e2c6f98ce259ded710e21abd5")){ tests_passed++; } total_tests++;

    if((string_to_md5("yy.") == "e8cd7123de4b05c644c965066b72ffa6")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyuiopasdfgmattisiTeThe,hjklzfioxxcvbnmmlit") == "4627b5249cb155ed91b5348ed325e996")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwzxcvbnremThe") == "71b0d5bc47fae8d2104905f3c06eacd2")){ tests_passed++; } total_tests++;

    if((string_to_md5("eiii.") == "ec0300a2e694a61bdc48e77fb19f9cba")){ tests_passed++; } total_tests++;

    if((string_to_md5("mattisiTeTvitaehe,") == "e16db051c1762b15f03a81d0353b809f")){ tests_passed++; } total_tests++;

    if((string_to_md5("cosndimentum") == "8ffacdff4bd53acf5fa3533d8b4e3c26")){ tests_passed++; } total_tests++;

    if((string_to_md5("IlimonstIt") == "4c0b9e30ba3931498492291bf84af86b")){ tests_passed++; } total_tests++;

    if((string_to_md5("amattisi,") == "d431a1f0433cbdb9d23f7e0ee2fa6ef4")){ tests_passed++; } total_tests++;

    if((string_to_md5("jareumps") == "35820ed3e8829dd1f4978a6b9677c538")){ tests_passed++; } total_tests++;

    if((string_to_md5("loimons") == "4c50907e1a2ba3e4f29b3ec7be9c9337")){ tests_passed++; } total_tests++;

    if((string_to_md5("reglimiutationstudinular") == "33966b1dde7382a59188ba186e0d9477")){ tests_passed++; } total_tests++;

    if((string_to_md5("ASCII.ld") == "88cc7e49d0bf5b26da00c3def6439a77")){ tests_passed++; } total_tests++;

    if((string_to_md5("litfdItdgound") == "2ac05bfb187e73659b63223ff58c9c76")){ tests_passed++; } total_tests++;

    if((string_to_md5("Pellentesque") == "6d695300d47ed2d2b8e0c2280bd1591c")){ tests_passed++; } total_tests++;

    if((string_to_md5("jumpodios") == "8ca20ae42f67d081222b4407aee114ae")){ tests_passed++; } total_tests++;

    if((string_to_md5("nrelower") == "440364d6d7f5645b3f200f527d5575e7")){ tests_passed++; } total_tests++;

    if((string_to_md5("lazyconsemarks.GQpQGlGXctetGurdnd") == "4d047b43c61c8a18abfd6763a28ed110")){ tests_passed++; } total_tests++;

    if((string_to_md5("are") == "4015e9ce43edfb0668ddaa973ebc7e87")){ tests_passed++; } total_tests++;

    if((string_to_md5("amemtm") == "9c4fc474b8d71fc4237d8541881e10de")){ tests_passed++; } total_tests++;

    if((string_to_md5("qis") == "a45b7a2ef737842ef2ce1bcc3f6acf29")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyutiopasdfghjklzfioxxcvbinlit") == "530cff1367d5ec401644806646905a1e")){ tests_passed++; } total_tests++;

    if((string_to_md5("jotnoteilifcontainsIot.s") == "2c30ac8d7c3b38eb29a68e18ddf43efc")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjklconsemarks.GQpQGlGXcteturdzfioxxcvbnm") == "35ac5e413e847e84afaf44dde31705cc")){ tests_passed++; } total_tests++;

    if((string_to_md5("encodinig") == "88164f167eee1c8f451a57779a129ea9")){ tests_passed++; } total_tests++;

    if((string_to_md5("conseGQpGlGXctXeturd") == "62819e18355a954557d06af3f17cdb00")){ tests_passed++; } total_tests++;

    if((string_to_md5("evestibuluqwertyuiopasdfghjklzfioxxcveilifcreglimiutationstudinularontainsIPlell.i.li.entesqueootound.bnmmlit") == "6d003f59c2525227b33b3f0795b0902a")){ tests_passed++; } total_tests++;

    if((string_to_md5("qxwoertyuiopasdfghjklzfioxxcvbnm") == "e9f76df334c084993ce394a19c878a0d")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhcondimLoremdnwjh&^*FHJD&&3lazyq2ed65d~~+++||malesuadas,|\\][Lorem") == "5043851c265b95818fb9412e84d2a1a0")){ tests_passed++; } total_tests++;

    if((string_to_md5("$specAilaiquamaaial@") == "64d90ccaf9dc16446b7756835526b19d")){ tests_passed++; } total_tests++;

    if((string_to_md5("onooeilinputifcontainsIotound.t") == "cd82b20244a97053f2b1a6ea956ee05a")){ tests_passed++; } total_tests++;

    if((string_to_md5("mii.llicitudof122346567890in") == "41a58489bdf66264796d237d4d97b44a")){ tests_passed++; } total_tests++;

    if((string_to_md5("innppcharacte3676456i3fvhhdnwjhLorem") == "21a3d8c405895c41a1fc173fc9a6d0c9")){ tests_passed++; } total_tests++;

    if((string_to_md5("dictum.non-triinnppcharacte3676456i3fvhhdnwjhLorem") == "e27546bc1bf03a7fe04f42b2a6e22932")){ tests_passed++; } total_tests++;

    if((string_to_md5("cGQpGlXovolutpotntains") == "56efe1cf4e58a28ca1d775ed2fed6a82")){ tests_passed++; } total_tests++;

    if((string_to_md5("aZnJ") == "8effcaeb1f30286d755c67b535761885")){ tests_passed++; } total_tests++;

    if((string_to_md5("foThis") == "c3c6c32009c05c08a9e7d80926c19ac1")){ tests_passed++; } total_tests++;

    if((string_to_md5("scosmopolisquick") == "c7bc382079e971557f8fffb19ea490df")){ tests_passed++; } total_tests++;

    if((string_to_md5("quic36764563fvhhcondimLoremdnwjh&^*FHJD&&3lazyq2ed65d~~+++|||\\][-k") == "349649ebc182f6db3a3e84cf836ebf12")){ tests_passed++; } total_tests++;

    if((string_to_md5("cdictshouldum.haraceilifIotound.rs") == "ec3e3f779287d1373b76e30c6fe7392c")){ tests_passed++; } total_tests++;

    if((string_to_md5("i") == "865c0c0b4ab0e063e5caa3387c1a8741")){ tests_passed++; } total_tests++;

    if((string_to_md5("GlGXevestibuluqwertyutiopasdfghjklzfioxxcvbnlit") == "cfd68b11278152f703a93061776ee5a7")){ tests_passed++; } total_tests++;

    if((string_to_md5("onyyyiyy.ot") == "517c74d5b8d0ba47c8ccaeb85a239257")){ tests_passed++; } total_tests++;

    if((string_to_md5("otnoteiliifcontainsIotouund.") == "a373c846d210693443f6ad66c3087669")){ tests_passed++; } total_tests++;

    if((string_to_md5("should") == "55f195813a158d82e2934cfac569575d")){ tests_passed++; } total_tests++;

    if((string_to_md5("mmemt,") == "5506afd450d0918ba61db779f10f0b32")){ tests_passed++; } total_tests++;

    if((string_to_md5("jumpodcharios") == "0bfd2f039cb772008aa0f6e34bb8f8d0")){ tests_passed++; } total_tests++;

    if((string_to_md5("password123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789") == "4ef109386f967f1d70c605840dc4ba16")){ tests_passed++; } total_tests++;

    if((string_to_md5("abcdefghijklmnopqrstuvwxyz") == "c3fcd3d76192e4007dfb496cca67e13b")){ tests_passed++; } total_tests++;

    if((string_to_md5("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == "437bba8e0bf58337674f4539e75186ac")){ tests_passed++; } total_tests++;

    if((string_to_md5("dui") == "972890943b6cbe30175f19ee122669db")){ tests_passed++; } total_tests++;

    if((string_to_md5("367645Aliquam63fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-") == "8ce9886a704221d1a049919a71c4354e")){ tests_passed++; } total_tests++;

    if((string_to_md5("enim.") == "ea45685f5269d45936a5cba624a5f740")){ tests_passed++; } total_tests++;

    if((string_to_md5("encodifermentumng") == "c6db2c7fd81eb8aa5f09d63b8081d1a9")){ tests_passed++; } total_tests++;

    if((string_to_md5("senteences.") == "8bdd0429f023c2b361cc5b24fa9fe7dc")){ tests_passed++; } total_tests++;

    if((string_to_md5("tristiquee") == "32f5155ed400200941d49d77456e0b9a")){ tests_passed++; } total_tests++;

    if((string_to_md5("qwertyuiopasdfghjkloream,lzxcvbnm") == "ae6029e55eefa0f40e648b302eb08348")){ tests_passed++; } total_tests++;

    if((string_to_md5("punctuation") == "9ac6d441030eb0844ffb83ba4f100c94")){ tests_passed++; } total_tests++;

    if((string_to_md5("consectetur") == "4c480b2170d066b2af6f98af80902ce0")){ tests_passed++; } total_tests++;

    if((string_to_md5("julongmps") == "3c5d878219a96c2f8c75f13e18a9ead6")){ tests_passed++; } total_tests++;

    if((string_to_md5("sstring") == "749d2b576e15d77f0d14f186077e9ace")){ tests_passed++; } total_tests++;

    if((string_to_md5("367645Ali+++\\][=-") == "4d1f0fe923d9616b2cb4c7c51ab6ae66")){ tests_passed++; } total_tests++;

    if((string_to_md5("PbnbXpqN") == "df943de8623dec7e089f450ab55747f8")){ tests_passed++; } total_tests++;

    if((string_to_md5("hass") == "055cfe9f2e0413d479e5111d96e7ff6e")){ tests_passed++; } total_tests++;

    if((string_to_md5("et") == "4de1b7a4dc53e4a84c25ffb7cdb580ee")){ tests_passed++; } total_tests++;

    if((string_to_md5("chacracters") == "5ee75a8543de09a09acb3410475a9e71")){ tests_passed++; } total_tests++;

    if((string_to_md5("tesst") == "f2750fc6d623392c1c8ad1d9d18f7ea5")){ tests_passed++; } total_tests++;

    if((string_to_md5("abdictum.cde!!") == "b357aa9ab25e28831203f048837c538a")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabcde!!") == "824baa03dc6c040d679e40114a44dc28")){ tests_passed++; } total_tests++;

    if((string_to_md5("d") == "8277e0910d750195b448797616e091ad")){ tests_passed++; } total_tests++;

    if((string_to_md5("adipiscingtypically") == "a314624ae3b997ebd9ed41a478e6a5ef")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhdnwjh&^*FHJD&&3q2ed65d~~++punctuation|||\\][=-") == "4ca5c49d4ac82013ea00c412968111ba")){ tests_passed++; } total_tests++;

    if((string_to_md5("enmi.im.") == "11fd8db4561ff1b9bf00a3f1a115bbc8")){ tests_passed++; } total_tests++;

    if((string_to_md5("adipiscinngtsollicitudinypifcally") == "395fd6b7cf242c2e05d148fd07249911")){ tests_passed++; } total_tests++;

    if((string_to_md5("Al367645Aliquam63fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-iquam") == "e1a6435e210fdaf1753aeaeccbf90b28")){ tests_passed++; } total_tests++;

    if((string_to_md5("enmin.im.") == "0cb5629bef20584fbd2f40e4129fb596")){ tests_passed++; } total_tests++;

    if((string_to_md5("dolor") == "a98931d104a7fb8f30450547d97e7ca5")){ tests_passed++; } total_tests++;

    if((string_to_md5("Aliquam") == "c94e64c2400f89ad361ed8185facff8b")){ tests_passed++; } total_tests++;

    if((string_to_md5("nulmultiplela") == "7583e6bdf946576fe55f5ba7d39c5534")){ tests_passed++; } total_tests++;

    if((string_to_md5("for") == "d55669822f1a8cf72ec1911e462a54eb")){ tests_passed++; } total_tests++;

    if((string_to_md5("to") == "01b6e20344b68835c5ed1ddedf20d531")){ tests_passed++; } total_tests++;

    if((string_to_md5("triuee") == "97818a01339a9bd3b666e2f1c78402f1")){ tests_passed++; } total_tests++;

    if((string_to_md5("adllicitudinypifcally") == "6683ae0dd243c30bd24c6844103e4c94")){ tests_passed++; } total_tests++;

    if((string_to_md5("luctus") == "94689b864d58fabe76cf3d4352b7b040")){ tests_passed++; } total_tests++;

    if((string_to_md5("multiple") == "ce495ab8d79db0d37413d8e95b54e606")){ tests_passed++; } total_tests++;

    if((string_to_md5("tristiiquee") == "f1029d2d8bfc68d922b25546b6e2badf")){ tests_passed++; } total_tests++;

    if((string_to_md5("over") == "3b759a9ca80234563d87672350659b2b")){ tests_passed++; } total_tests++;

    if((string_to_md5("tsit") == "49649846c62e61643bc569cf1e360e0b")){ tests_passed++; } total_tests++;

    if((string_to_md5("Nuovernc") == "225c96bc18b616b09f5f0f69a14cc650")){ tests_passed++; } total_tests++;

    if((string_to_md5("anny") == "bc127e3caf638d0f59186f832ac718c1")){ tests_passed++; } total_tests++;

    if((string_to_md5("lolreme,") == "4be2fe7e8543dcba1c4baea8178ddfa7")){ tests_passed++; } total_tests++;

    if((string_to_md5("vestibulum") == "09777ca5702506d4e13ccdf9749cc975")){ tests_passed++; } total_tests++;

    if((string_to_md5("adllicchacractersitudinypifcally") == "a544912c7ebcc3435636c4994461097f")){ tests_passed++; } total_tests++;

    if((string_to_md5("eeu") == "8b6ba8a952208f5746276e64a0f1cb40")){ tests_passed++; } total_tests++;

    if((string_to_md5("xNunc") == "005ddc04d838fd59795df455610d76e4")){ tests_passed++; } total_tests++;

    if((string_to_md5("tuturpis,") == "88afdb34200c1898288a37b4d8bfe440")){ tests_passed++; } total_tests++;

    if((string_to_md5("ueeu") == "57e9b9511f4a172338ef41b67846255d")){ tests_passed++; } total_tests++;

    if((string_to_md5("tuturelit.pis,") == "f9d71290adafc13b753a33a38c836bf4")){ tests_passed++; } total_tests++;

    if((string_to_md5("malesuada,") == "5b9fc4cd908ff46bf684dc261dd70718")){ tests_passed++; } total_tests++;

    if((string_to_md5("Pellentesencodifermentumngque") == "0fe19ac799a523afad2648062aa30c6a")){ tests_passed++; } total_tests++;

    if((string_to_md5("mucontainsltiple") == "ef533da39f7462da038ad10ba39234ce")){ tests_passed++; } total_tests++;

    if((string_to_md5("convallis") == "f9d05f60d25ff30d2fc62f8442f8a070")){ tests_passed++; } total_tests++;

    if((string_to_md5("jumpssollicitudin") == "2fe32d123dfd6923d6c2e97218000d61")){ tests_passed++; } total_tests++;

    if((string_to_md5("engcThe") == "90ac03d84acc61ad584cfda24973c7af")){ tests_passed++; } total_tests++;

    if((string_to_md5("null") == "37a6259cc0c1dae299a7866489dff0bd")){ tests_passed++; } total_tests++;

    if((string_to_md5("vdqmkwETVi") == "e949cee3b35e2c9a05176f642ff89fb8")){ tests_passed++; } total_tests++;

    if((string_to_md5("eeuu") == "73c6b4c989377432d42352ad35c9c1eb")){ tests_passed++; } total_tests++;

    if((string_to_md5("ddabcde!!") == "34e5b818b40dfbcabd7c0190e55335f0")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhdnwjh&^*FHJD&&3q2ed65d~~++punctuataliquetion|||\\][=-") == "de25537bdb9a161f554f9c9a0e41888c")){ tests_passed++; } total_tests++;

    if((string_to_md5("multiadipiscingple") == "0edd9c35341b07540fc7623b5d1eee70")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhdnwjh&^*FHJD&&3q2ded65d~~+++|||\\][=-") == "d7aeca06c3179d153be7af3926e67c32")){ tests_passed++; } total_tests++;

    if((string_to_md5("dolror") == "039ffa9e906887c06dd4c3d0aa321940")){ tests_passed++; } total_tests++;

    if((string_to_md5("hast") == "fedcb086783a48b367a4d016baba0c75")){ tests_passed++; } total_tests++;

    if((string_to_md5("aliquet") == "8e1a786fc0c37a5a15ea3a58c7b4334f")){ tests_passed++; } total_tests++;

    if((string_to_md5("long") == "0f5264038205edfb1ac05fbb0e8c5e94")){ tests_passed++; } total_tests++;

    if((string_to_md5("adipiscing") == "d540f9a8003e11e009342a40200192ea")){ tests_passed++; } total_tests++;

    if((string_to_md5("abdictum.mauriscede!!") == "5d69afcd1c2b0184420ec615d65af334")){ tests_passed++; } total_tests++;

    if((string_to_md5("abdictu.m.cde!!") == "0a02477686357f870eb976b10842efe8")){ tests_passed++; } total_tests++;

    if((string_to_md5("lolreme") == "7777bdface327a7017c1d966ea6f2999")){ tests_passed++; } total_tests++;

    if((string_to_md5("ametUt") == "bfce6cd15938f368ae4065ba7c3233fe")){ tests_passed++; } total_tests++;

    if((string_to_md5("adipiscdolror") == "0ac0508f95d986951d4144e33d1f0076")){ tests_passed++; } total_tests++;

    if((string_to_md5("ZpesQVsW") == "0e089069b58916abd12af3f74f42e3e3")){ tests_passed++; } total_tests++;

    if((string_to_md5("hasss") == "b60a26dfa7843f7521907bc111a17a3d")){ tests_passed++; } total_tests++;

    if((string_to_md5("quiqwertyuiopasdfghjkloream,lzxcvbnms") == "7453a4d67aa773fb32d5b887dfcc27a3")){ tests_passed++; } total_tests++;

    if((string_to_md5("e!!") == "a509b39ee21ac5566f4e6c31035f0622")){ tests_passed++; } total_tests++;

    if((string_to_md5("enm36764563fvhhdnwjh&^*FHJD&&3q2ded65d~~+++|||\\][=-in.im.") == "c85539a6c47431e10279fd391f2f5176")){ tests_passed++; } total_tests++;

    if((string_to_md5("aliquett") == "95d4e7cf69554b0a6ed6c626ce20feb1")){ tests_passed++; } total_tests++;

    if((string_to_md5("enm.") == "53c771b61f5bba80d2663016fdd5f619")){ tests_passed++; } total_tests++;

    if((string_to_md5("WvVqSw") == "82067d623ee55b1c056d1a90ba5db8da")){ tests_passed++; } total_tests++;

    if((string_to_md5("trstiqee") == "1d2018092d4a7555b622265af1c23cfe")){ tests_passed++; } total_tests++;

    if((string_to_md5("sstrinsg") == "34fc4131cbc6367da9ccf9ae978da442")){ tests_passed++; } total_tests++;

    if((string_to_md5("enstringm.") == "974782dbb98b0768f7c7d332a4867465")){ tests_passed++; } total_tests++;

    if((string_to_md5("mue") == "17652180f8ef501edc196a83110d6014")){ tests_passed++; } total_tests++;

    if((string_to_md5("loweramet") == "78a5b3bc0ccb65dacea8786c189617cd")){ tests_passed++; } total_tests++;

    if((string_to_md5("dictuoxm.") == "6655a36fe9c92de74f0891ae9fd5586d")){ tests_passed++; } total_tests++;

    if((string_to_md5("charactdogodifermentumngers") == "dd162307f68b4c629d59fb1182bc606f")){ tests_passed++; } total_tests++;

    if((string_to_md5("haast") == "32e11cb6ebdda71bbe0b3c9d7dd5cf04")){ tests_passed++; } total_tests++;

    if((string_to_md5("do") == "d4579b2688d675235f402f6b4b43bcbf")){ tests_passed++; } total_tests++;

    if((string_to_md5("636764563fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-") == "f34c17c3b55186ae010cb560a3647176")){ tests_passed++; } total_tests++;

    if((string_to_md5("h") == "2510c39011c5be704182423e3a695e91")){ tests_passed++; } total_tests++;

    if((string_to_md5("tristiiquete") == "d906f71d20d46c6fef80282f1b1fc506")){ tests_passed++; } total_tests++;

    if((string_to_md5("en.min.imn.") == "7dac10bb998a58c2f5977b2d838321bf")){ tests_passed++; } total_tests++;

    if((string_to_md5("puncuation") == "ed249ad7708722f844c68d40b0f4cc3a")){ tests_passed++; } total_tests++;

    if((string_to_md5("adicpiscintristiqueegtypically") == "83f5561130fc288e44c7c738d640dc62")){ tests_passed++; } total_tests++;

    if((string_to_md5("haaast") == "47590ef51cad21bb38e6cc6b8da1d787")){ tests_passed++; } total_tests++;

    if((string_to_md5("senteencemauris.") == "0a5971be868eb1206034a0d8c1a9e237")){ tests_passed++; } total_tests++;

    if((string_to_md5("jumipssollicitudin") == "0d3a41277ca08c982ddb75fb61c4128f")){ tests_passed++; } total_tests++;

    if((string_to_md5("etenm.") == "b89d3be96e3e8edf6078bee862171fc8")){ tests_passed++; } total_tests++;

    if((string_to_md5("brown") == "6ff47afa5dc7daa42cc705a03fca8a9b")){ tests_passed++; } total_tests++;

    if((string_to_md5("enmin.im.limitations") == "e9c046d2b8f2d43e9e25990f16498cc3")){ tests_passed++; } total_tests++;

    if((string_to_md5("pnctuatioun") == "81baf2ace6a9a23e58ef080e4e2dd645")){ tests_passed++; } total_tests++;

    if((string_to_md5("pnctuadiaelit.dolortioun") == "01a47b03dc06b79e560088142d387c54")){ tests_passed++; } total_tests++;

    if((string_to_md5("tristiqueee") == "5bc9aaa6698904109967f0c571900d06")){ tests_passed++; } total_tests++;

    if((string_to_md5("ddo") == "df21cc51fb747f57287f6ad92b614785")){ tests_passed++; } total_tests++;

    if((string_to_md5("enm36764563fvhhdnwjh&^*FHJD&&3q2ded65d~~+++|||\\][=-in.i[m.") == "467d6c4c1ddebad6caf3b785924764ba")){ tests_passed++; } total_tests++;

    if((string_to_md5("oto") == "f94487fbe22f97f62bd76a3e73e664c4")){ tests_passed++; } total_tests++;

    if((string_to_md5("cadipiscingtypically") == "5fb4fd181e477415075a86f458477872")){ tests_passed++; } total_tests++;

    if((string_to_md5("lolonNunclreme") == "1c89d79751e5c6b7bceb1dc78035cb22")){ tests_passed++; } total_tests++;

    if((string_to_md5("$special@dolror") == "61cb320bca8d72a063895984e03ed432")){ tests_passed++; } total_tests++;

    if((string_to_md5("freliltla") == "14dccb57ecb3125756e4d65b6fca8262")){ tests_passed++; } total_tests++;

    if((string_to_md5("eelittentm.") == "55c18a434d065168bab17dd34eeecae6")){ tests_passed++; } total_tests++;

    if((string_to_md5("punctuanection") == "f2b3fa3ebe2a6afb489c437295121f4c")){ tests_passed++; } total_tests++;

    if((string_to_md5("trisiitquee") == "fde4167f44aa336c99a7b90ed08fc172")){ tests_passed++; } total_tests++;

    if((string_to_md5("condimUtentum") == "4ee5c6f8a4a686797e2e881e0a64f634")){ tests_passed++; } total_tests++;

    if((string_to_md5("dllusm") == "eccd271e6a1b319d55ed4abb3a3c64d6")){ tests_passed++; } total_tests++;

    if((string_to_md5("haaThjumipssollicitudint") == "a3acd5906d2992026098089a7a812a61")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabcdvestibulume!!") == "f1c8ef117812f387509e06ecae3c5f5d")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.dqmkwETVi") == "30516341f7f1f76966d47a73aa43156f")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabcd!!") == "6ecf7d486e1a86f0cbc0e9f20dff932e")){ tests_passed++; } total_tests++;

    if((string_to_md5("nuullda") == "35b3b6218134e73c87e748a3e910069e")){ tests_passed++; } total_tests++;

    if((string_to_md5("thee") == "d6c5e6869b2b3d4e4aaf323e6d542206")){ tests_passed++; } total_tests++;

    if((string_to_md5("tristique") == "e496a293dada26f0f0f3d32c78e0acb5")){ tests_passed++; } total_tests++;

    if((string_to_md5("367645Aliquamtristiqueee63fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-") == "fabd4fa1adbed8314b646217debae4c4")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabacd!!") == "6e40c55fcc86093c0e083536cd18a0f5")){ tests_passed++; } total_tests++;

    if((string_to_md5("lonNunc") == "773768466280b09f75254cc231556906")){ tests_passed++; } total_tests++;

    if((string_to_md5("m") == "6f8f57715090da2632453988d9a1501b")){ tests_passed++; } total_tests++;

    if((string_to_md5("trstiqeZpesQVsWe") == "adc7704aec83cfa86fc8f90fd0fd0b6c")){ tests_passed++; } total_tests++;

    if((string_to_md5("ttypicallydiam") == "716f024ac23a2725dd777f3fdc6ee2de")){ tests_passed++; } total_tests++;

    if((string_to_md5("multiiple") == "5473b188d00b9f65f48e4e7697463b9e")){ tests_passed++; } total_tests++;

    if((string_to_md5("alitrstiqeZpesQVsWequet") == "b5310875b83e2920b70b0dd61f77e2c9")){ tests_passed++; } total_tests++;

    if((string_to_md5("te") == "569ef72642be0fadd711d6a468d68ee1")){ tests_passed++; } total_tests++;

    if((string_to_md5("sollicitudign") == "c31cc4d877ab0c1bdab5875042ab2739")){ tests_passed++; } total_tests++;

    if((string_to_md5("enimi.im.") == "a99a367f7083376a393356e52260b491")){ tests_passed++; } total_tests++;

    if((string_to_md5("lonNuncadipiscing") == "be9ed4a5c5668a50aee37554edec8b3f")){ tests_passed++; } total_tests++;

    if((string_to_md5("thhee") == "7d79a64f4ffbb5c77ff4724a0bc20db9")){ tests_passed++; } total_tests++;

    if((string_to_md5("aletters.") == "6483043433bcd60302ee27467db132b3")){ tests_passed++; } total_tests++;

    if((string_to_md5("ZpesQVmultiipleW") == "cca677c0030e8bceda08258cb3d04ddb")){ tests_passed++; } total_tests++;

    if((string_to_md5("xNuxnc") == "fa90938e57020a4e81c6f0e3bf930555")){ tests_passed++; } total_tests++;

    if((string_to_md5("3676645Aliquam63fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-") == "c5475721537ee7c1ea555363759ff2e5")){ tests_passed++; } total_tests++;

    if((string_to_md5("browox") == "04fd647b094d19caa32efe9d8aa04ec5")){ tests_passed++; } total_tests++;

    if((string_to_md5("xNuncPbnbXpqN") == "f4dc389edfb0a248577d124bf1e72e76")){ tests_passed++; } total_tests++;

    if((string_to_md5("dogodifermentumngquete") == "e6259b8694fff4a1ecd7c4a1615520ae")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabcd!!dgitudin") == "b52c98c835a53fee778b63bf4347b237")){ tests_passed++; } total_tests++;

    if((string_to_md5("voluatpat") == "b92d4a9d197bd030b12d50426f54e9e5")){ tests_passed++; } total_tests++;

    if((string_to_md5("limitatiosns") == "96f698915178b813f7c812fff421676f")){ tests_passed++; } total_tests++;

    if((string_to_md5("nnuullda") == "e16b4f6c5335e8ae887e249823413d80")){ tests_passed++; } total_tests++;

    if((string_to_md5("12345567890") == "f9d64442454993887828555c55dcf613")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabcd!!dgitaudin") == "9ef5e39e6df3008e940827181b3648b2")){ tests_passed++; } total_tests++;

    if((string_to_md5("367664nwjh&^*FHJD&&3q2ed65d~~+++|=-") == "c49949e70921b7e3aa0e08e4397e172d")){ tests_passed++; } total_tests++;

    if((string_to_md5("judottypicallygmipssollitusdin") == "870ca650ba70be2144f5cbfb30f4cd0c")){ tests_passed++; } total_tests++;

    if((string_to_md5("vLorem") == "55bc98ebe804c8dce707ecb40230bbfd")){ tests_passed++; } total_tests++;

    if((string_to_md5("annny") == "e8123ed10d5ac3598796c40bddb9897c")){ tests_passed++; } total_tests++;

    if((string_to_md5("en.m.") == "dcd435bc1fd07373b8fd5a53953979bf")){ tests_passed++; } total_tests++;

    if((string_to_md5("nuenm36764563fvhhdnwjh&^*FHJD&&3q2ded65d~~+++|||\\][=-in.im.ullda") == "858a45bc942192e8c055b1c5ab6d66a5")){ tests_passed++; } total_tests++;

    if((string_to_md5("ttypicallydim") == "5bf1c192624cf7fc9a914f025787e9c3")){ tests_passed++; } total_tests++;

    if((string_to_md5("ttypically") == "c1b0e6c0528666d4f662761de9012eb8")){ tests_passed++; } total_tests++;

    if((string_to_md5("pnctuadiaelit.dooun") == "20ec9b21ec3a2ad869ccd5f5f62b42bc")){ tests_passed++; } total_tests++;

    if((string_to_md5("upuncuation") == "463880efc2c5ce056199ecb43b28a6d9")){ tests_passed++; } total_tests++;

    if((string_to_md5("uppercase") == "2e994c40ceadb76184f4d10fc617f864")){ tests_passed++; } total_tests++;

    if((string_to_md5("sistring") == "ec43f92bafcaebe180e3cdae522a658d")){ tests_passed++; } total_tests++;

    if((string_to_md5("sstrinsqisg") == "68214d2e41dee1ef92ba19e7bb8de1c3")){ tests_passed++; } total_tests++;

    if((string_to_md5("sole!!licit") == "82bfd9b4168eeda7195febfcf411cfab")){ tests_passed++; } total_tests++;

    if((string_to_md5("chaengcThe") == "187e7e2161dd55735918af7b6716d312")){ tests_passed++; } total_tests++;

    if((string_to_md5("consectetrur") == "eaba69fa624565bef8828e5367f763a2")){ tests_passed++; } total_tests++;

    if((string_to_md5("reg") == "33c0ee425e2c0efe834afc1aa1e33a4c")){ tests_passed++; } total_tests++;

    if((string_to_md5("mauris") == "75bf68b7982d399df2c2ec675ffcd030")){ tests_passed++; } total_tests++;

    if((string_to_md5("pannnynctuatioun") == "cadf93765384dbb0bb2e19db66643ac0")){ tests_passed++; } total_tests++;

    if((string_to_md5("lower") == "81e073b428b50247daba38531dcf412a")){ tests_passed++; } total_tests++;

    if((string_to_md5("ipsuatm") == "4d52101be4fe10d47949f008c014a3e1")){ tests_passed++; } total_tests++;

    if((string_to_md5("mi.dqtristiqueemkwETVenm.i") == "821024ce5ec6c8b4d77d161d387d3855")){ tests_passed++; } total_tests++;

    if((string_to_md5("smattis,tritng") == "5bb42ccc00ce72086afef0fe82c96bb9")){ tests_passed++; } total_tests++;

    if((string_to_md5("Nunnc") == "0807e795eabf52cf9c6e41b760c8d404")){ tests_passed++; } total_tests++;

    if((string_to_md5("maupnctuadiaelit.dolortiounris") == "38c17ee9f5e69485d0da0466d8becb22")){ tests_passed++; } total_tests++;

    if((string_to_md5("trstenmi.im.iqeZpesQVsWe") == "105b0cf918f8507ad5be89263b62403b")){ tests_passed++; } total_tests++;

    if((string_to_md5("hassss") == "197430ae5170876459cf3fd12f0c8481")){ tests_passed++; } total_tests++;

    if((string_to_md5("ejumpseu") == "eb7aed87cc05fc5b6ecc8c6a80cdca53")){ tests_passed++; } total_tests++;

    if((string_to_md5("multiadipiscingpl") == "b425f0acbc2c6509f9c3a53d3040534b")){ tests_passed++; } total_tests++;

    if((string_to_md5(".en.min.imn.") == "c20aa8957d1fbef20e502e8b56214566")){ tests_passed++; } total_tests++;

    if((string_to_md5("hassentencessss") == "507ca46b53f1506730386666787cef58")){ tests_passed++; } total_tests++;

    if((string_to_md5("found") == "6cfe61694ee1bb13ae719d47c2f80b7a")){ tests_passed++; } total_tests++;

    if((string_to_md5("bMWk") == "9260ebb7844ae56d4a64dea23611bc8f")){ tests_passed++; } total_tests++;

    if((string_to_md5("adicpiscintristiqueeically") == "e626582d574d8b5d8449b86a1fddba52")){ tests_passed++; } total_tests++;

    if((string_to_md5("636764563fvhhdnwjodioh&^*FHJD&&3q2ed65d~~+++|||\\][=-") == "84e16b48f278bd04b272b85dfbceaa47")){ tests_passed++; } total_tests++;

    if((string_to_md5("apannnynctuatioun") == "58037b24c73aafe1e3cdfa4cf9f1852a")){ tests_passed++; } total_tests++;

    if((string_to_md5("jumpssollicitutsitin") == "4ae63283e091437801a3cddf9270c479")){ tests_passed++; } total_tests++;

    if((string_to_md5("hassentencesnsss") == "5fef62c9418faf1dd38ce1b32868c224")){ tests_passed++; } total_tests++;

    if((string_to_md5("nulabcondimentumdictu.m.cde!!l") == "19a951f7d4a6ead5048c67ee34d5676d")){ tests_passed++; } total_tests++;

    if((string_to_md5("dgauris.") == "ff4129f385e7efe6abcc105924ce90db")){ tests_passed++; } total_tests++;

    if((string_to_md5("dogodifermg") == "8b170e8b4cc57c1fe083c785f930f7ee")){ tests_passed++; } total_tests++;

    if((string_to_md5("ovseder") == "7057bf05bc7489d697702991da0c690a")){ tests_passed++; } total_tests++;

    if((string_to_md5("dogdo") == "647ed1cc671f0765dd84d96a2af319bf")){ tests_passed++; } total_tests++;

    if((string_to_md5("quiLorem") == "73d397d60887d63e148bf1d5ebd8314a")){ tests_passed++; } total_tests++;

    if((string_to_md5("triinputstiqtue") == "25740313bd354bd51f8df9cd1d5e1c8c")){ tests_passed++; } total_tests++;

    if((string_to_md5("ametnuulldaUt") == "95c5cbacbfb22b2bf22a5afac9f61a86")){ tests_passed++; } total_tests++;

    if((string_to_md5("assollicitudignat") == "bd5fe19dab827408901019a18f752062")){ tests_passed++; } total_tests++;

    if((string_to_md5("en.minsollicengcThe.imn..") == "ad67bed3add1261b948e3668619d998e")){ tests_passed++; } total_tests++;

    if((string_to_md5("aKA") == "f4fbb65b7057e2df19b1178404f8202c")){ tests_passed++; } total_tests++;

    if((string_to_md5("pnct") == "55fc520425d74dfd307febc234156cbe")){ tests_passed++; } total_tests++;

    if((string_to_md5("fox") == "2b95d1f09b8b66c5c43622a4d9ec9a04")){ tests_passed++; } total_tests++;

    if((string_to_md5("typically") == "f917270cfd2a1249601411e01f96b073")){ tests_passed++; } total_tests++;

    if((string_to_md5("eet") == "ba62fd6169414cfb7c2d7e4b896ef184")){ tests_passed++; } total_tests++;

    if((string_to_md5("Al367645Aliquam63fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-iquamipsuatm") == "668bfbfdd69780105d639a085788fb06")){ tests_passed++; } total_tests++;

    if((string_to_md5("ttypicallmydim") == "09f241d162cccaea84429e4a8f9a3695")){ tests_passed++; } total_tests++;

    if((string_to_md5("diiadogodifermentumngcters") == "a0bc347215c374b2d0d04e202305d643")){ tests_passed++; } total_tests++;

    if((string_to_md5("convallisreg") == "b67c37e10ff5030d6a48d751998b5031")){ tests_passed++; } total_tests++;

    if((string_to_md5("cosmopoliregs") == "21c70d4dc52a3964461ba25b9c95872d")){ tests_passed++; } total_tests++;

    if((string_to_md5("etenm.ametUt") == "f373fd9e34cbffd55822aa5d7c65d371")){ tests_passed++; } total_tests++;

    if((string_to_md5("PbXpqN") == "fb1346df07d1ce428b91206b094754d9")){ tests_passed++; } total_tests++;

    if((string_to_md5("ttypicatllmydim") == "6304fd1aa49458a07b93f5b8790166cf")){ tests_passed++; } total_tests++;

    if((string_to_md5("p$special@") == "3a524ef6e0c61bee5e1bcf4f924a8b68")){ tests_passed++; } total_tests++;

    if((string_to_md5("fnound") == "dcb481e220f16bf362855d3afe66ee52")){ tests_passed++; } total_tests++;

    if((string_to_md5("loweramqiset") == "d682adac7be8ed55bde4746432964c45")){ tests_passed++; } total_tests++;

    if((string_to_md5("mauris.") == "0fd93ad7484a921d9e545dd9b367f5cf")){ tests_passed++; } total_tests++;

    if((string_to_md5("Pellentesquefreliltla") == "434a820e0031a573a4afe1d36c538087")){ tests_passed++; } total_tests++;

    if((string_to_md5("maurims.") == "ec9c5c45034bd9f8cd43f54d03b35e50")){ tests_passed++; } total_tests++;

    if((string_to_md5("sistringvoluatpat") == "b51966ae2e2ed07b8e7bd23a1e5ddd15")){ tests_passed++; } total_tests++;

    if((string_to_md5("o") == "d95679752134a2d9eb61dbd7b91c4bcc")){ tests_passed++; } total_tests++;

    if((string_to_md5("ccosmopoliregsharactersmengcThe") == "c8c61edda05f6a67e7768b9133c8845f")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabac") == "ffe5936b14c0906af41edfc97e56845a")){ tests_passed++; } total_tests++;

    if((string_to_md5("alitrstiqeuet") == "9e99debac68c9dbe03db05afe34b65eb")){ tests_passed++; } total_tests++;

    if((string_to_md5("jjulongmps") == "53323ec53b05fd5a03f08ef369daf89d")){ tests_passed++; } total_tests++;

    if((string_to_md5("tristiiquetamet,e") == "b026ba6793fd0dc1edba343f9393ea62")){ tests_passed++; } total_tests++;

    if((string_to_md5("UHiy") == "b626c8dc48ad1d93f95caf9609679f29")){ tests_passed++; } total_tests++;

    if((string_to_md5("nuulluda") == "3875ff9b588e181b9b2efaa2667424f1")){ tests_passed++; } total_tests++;

    if((string_to_md5("ssdabcd!!dgitaudintring") == "aee234f035e57ebaf28c3300b6bd7a80")){ tests_passed++; } total_tests++;

    if((string_to_md5("ssdabcd!!dgitaudintrin") == "86248e7f9848226e2e4256396b5d0a37")){ tests_passed++; } total_tests++;

    if((string_to_md5("ivadipiscingoluatpat") == "a7e8a9cf4d8be76fad5f8e7ae21cbeb7")){ tests_passed++; } total_tests++;

    if((string_to_md5("ox") == "5360b37c5130191f972e0e5c0805f52d")){ tests_passed++; } total_tests++;

    if((string_to_md5("636764563fvhhdnwjodioh&^*FHJD&&3q2ed65fermentum++|||\\][=-") == "2f0df55f12ee90c6b8a71c833d56ff00")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabacd!!!") == "a2ddcf7ad26af6edd10f76b9b17881f2")){ tests_passed++; } total_tests++;

    if((string_to_md5("nanny") == "301c85613d4ddd27a440498fca3b3c0b")){ tests_passed++; } total_tests++;

    if((string_to_md5("adipiosng") == "2946fbd53aa8d0ab2c901cec2edc2099")){ tests_passed++; } total_tests++;

    if((string_to_md5("dolordabcd!!dgitudin") == "a1e0a8e57b9fc92527cc8c4314d5f691")){ tests_passed++; } total_tests++;

    if((string_to_md5("chaePellentesquengcThe") == "4c1cb10393885fe792860723fa6c75da")){ tests_passed++; } total_tests++;

    if((string_to_md5("lome,") == "fd86241b681575ba0d40ee2e462c7540")){ tests_passed++; } total_tests++;

    if((string_to_md5("adllicchacractersitudcinypifcally") == "947826fdbec2d0894e6eac96e362fb37")){ tests_passed++; } total_tests++;

    if((string_to_md5("hassas") == "41943b9a5bd00d22b39f5ef0a0873c94")){ tests_passed++; } total_tests++;

    if((string_to_md5("pntct") == "68710b7231d48e97d52f6b18e9e8b17e")){ tests_passed++; } total_tests++;

    if((string_to_md5("tuturelit.piis,") == "9b5bf3aa44a1944c9d9285a2c37a81d8")){ tests_passed++; } total_tests++;

    if((string_to_md5("julongmpps") == "aae30821f9e680f6a6674b9c416a08d1")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764563fvhhdnwjh&^*FHJD&&3q2ed65d~||\\][=-") == "742d44df351f81868ad350e4d2cc87a3")){ tests_passed++; } total_tests++;

    if((string_to_md5("charactdogodifermentumng") == "fe7d8bf97f13631c96eccd0ee3030008")){ tests_passed++; } total_tests++;

    if((string_to_md5("obrowox") == "fd1c75c6ad7b85e2b5a90666a78cddb4")){ tests_passed++; } total_tests++;

    if((string_to_md5("tuturtelit.piis,") == "d57c1e90261be33cf74f4dd41241d1fc")){ tests_passed++; } total_tests++;

    if((string_to_md5("volutpatPbXpqN") == "186bb4269bc8000e206fc71e13d79a5d")){ tests_passed++; } total_tests++;

    if((string_to_md5("ASCII.") == "969206b90a5eae847bf10a5f9a1eddb5")){ tests_passed++; } total_tests++;

    if((string_to_md5("trstenmi.im.iqeZpxNuncesQVsWe") == "ec123fa394c966ddf9cce0ba04eb8171")){ tests_passed++; } total_tests++;

    if((string_to_md5("tristiiquturpmauris.is,ee") == "4cf83cae962904bc5328866652a0eb98")){ tests_passed++; } total_tests++;

    if((string_to_md5("nulabcondimentummixdictu.m.cde!!l") == "a18738d241b489c5c0c1b674ff5bfeb8")){ tests_passed++; } total_tests++;

    if((string_to_md5("encodifnermentumng") == "9defdde0135c18eead5c0afee63b22f6")){ tests_passed++; } total_tests++;

    if((string_to_md5("mengcThe") == "fd87af91a579079a628e62c4d3f2cccc")){ tests_passed++; } total_tests++;

    if((string_to_md5("odhaaThjumipssollicitudintio") == "3f8dc75762b8730dff7d80332d36d186")){ tests_passed++; } total_tests++;

    if((string_to_md5("PellentesencodNunuciferumngque") == "7d4daef5e3ae355eca2a969ab4c94ea5")){ tests_passed++; } total_tests++;

    if((string_to_md5("brbowox") == "8a5bb223e2ab9ab69db571277e3751eb")){ tests_passed++; } total_tests++;

    if((string_to_md5("mengche") == "2347b3c7a324752bee436d8b5cd812aa")){ tests_passed++; } total_tests++;

    if((string_to_md5("367645Aliquam63fv&&3q2ed65d~~+++|||\\][=-") == "b94d2e946bd6fe458bbbfa4a64a6f028")){ tests_passed++; } total_tests++;

    if((string_to_md5("doFccusce") == "5321489b839bbe090aa79f6ad829e254")){ tests_passed++; } total_tests++;

    if((string_to_md5("adllicchacractersitudinypivdqmkwETVifcally") == "7c0814b81866773cc90533673b27aa87")){ tests_passed++; } total_tests++;

    if((string_to_md5("chosen") == "ca071943e5acd1c8bcfbe0d2ee36fec2")){ tests_passed++; } total_tests++;

    if((string_to_md5("diiadogodisentencesfermentumngcters") == "578f5de7d070b8e3c5d6702946792ccf")){ tests_passed++; } total_tests++;

    if((string_to_md5("in") == "13b5bfe96f3e2fe411c9f66f4a582adf")){ tests_passed++; } total_tests++;

    if((string_to_md5("mucontainsltieeuuple") == "4ba9a25f64c0737b431b0545116e1de5")){ tests_passed++; } total_tests++;

    if((string_to_md5("cosmopoli") == "af0ee4ad3975be823272664b4444352b")){ tests_passed++; } total_tests++;

    if((string_to_md5("contabdictum.cde!!ainsl") == "eabbcc72334de34d8e5875a3f32af35f")){ tests_passed++; } total_tests++;

    if((string_to_md5("12345567890ezy") == "4bc94cfd91da628a81612018ad9f4dcb")){ tests_passed++; } total_tests++;

    if((string_to_md5("lonNregularunc") == "b4a9ad2c2c49eb77d3f3c6ac160eeddf")){ tests_passed++; } total_tests++;

    if((string_to_md5("dictuoxaemetm.") == "500bb4b6f5eb18539a416c29cd4ed4bc")){ tests_passed++; } total_tests++;

    if((string_to_md5("pannnynctuatabdictum.cde!!ioun") == "85535dd8a4a9ddf6e5b435a7c85373da")){ tests_passed++; } total_tests++;

    if((string_to_md5("ue") == "31f644026e4c96dee546c228a1894c68")){ tests_passed++; } total_tests++;

    if((string_to_md5("dabcd!!dgitaudianlongygravida,n") == "3a3751db7e6e510c1b16fd51bfbf7d80")){ tests_passed++; } total_tests++;

    if((string_to_md5("seilit.") == "bf43c2101e5d4c46e6851faf5f362e94")){ tests_passed++; } total_tests++;

    if((string_to_md5("loreme") == "95dac2bbd65451b6df2873f448979518")){ tests_passed++; } total_tests++;

    if((string_to_md5("consectetetenm.ametUttrur") == "af57bdf13a682559b3fa4d0c1f35fc80")){ tests_passed++; } total_tests++;

    if((string_to_md5("adipdiosng") == "966531594249cf8f128fbd1f0da2a77c")){ tests_passed++; } total_tests++;

    if((string_to_md5("36764u5Aliquam63fv&&3q2ed65d~~+++|||\\][=-") == "b81717bb4c20341fdbbb61387ec7bb19")){ tests_passed++; } total_tests++;

    if((string_to_md5("TeowengcThe") == "e2aa20b1469bd8a12a9f7296e75206ab")){ tests_passed++; } total_tests++;

    if((string_to_md5("string") == "b45cffe084dd3d20d928bee85e7b0f21")){ tests_passed++; } total_tests++;

    if((string_to_md5("ejsumpseu") == "27b1bd0bd6dac4b09f548f1b006019ba")){ tests_passed++; } total_tests++;

    if((string_to_md5("neregulars") == "caa5a6f01619bdc7e58b95d174fcb451")){ tests_passed++; } total_tests++;

    if((string_to_md5("browoox") == "b6a582f487c316e8e28baeb2bd56fb5e")){ tests_passed++; } total_tests++;

    if((string_to_md5("jumpssoullicitutsitin") == "8f2e1974309742a125d38865002f6f96")){ tests_passed++; } total_tests++;

    if((string_to_md5("vdqmkwETodhaaThjumipssollicitudintioVi") == "32bbe64c000d3a78b2638d80f9378fd2")){ tests_passed++; } total_tests++;

    if((string_to_md5("sollicirra") == "f61251f92e57a7cb17ab5856d2d78e1e")){ tests_passed++; } total_tests++;

    if((string_to_md5("Nunnnc") == "b8df6fadcac5f51db5b944d65af7a3dd")){ tests_passed++; } total_tests++;

    if((string_to_md5("abdictbum.cde!!") == "d5e0975567534cc6ac42d5e16cb9f134")){ tests_passed++; } total_tests++;

    if((string_to_md5("Loremalitrstiqeuetopolis") == "3da16be41c51ab0a8bac90b2ebd15a85")){ tests_passed++; } total_tests++;

    if((string_to_md5("TowengcThe") == "9523ff16c4a475c1f1b3aeebd7b61f83")){ tests_passed++; } total_tests++;

    if((string_to_md5("haadipiscingtypicallyss") == "e6bfa5cca1e2987e487f4f7c29aba585")){ tests_passed++; } total_tests++;

    if((string_to_md5("lonNregularAl367645Aliquam63fvhhdnwjh&^*FHJD&&3q2ed65d~~+++|||\\][=-iquamunc") == "8659fa1efc7d34819f8befe1b73f1948")){ tests_passed++; } total_tests++;

    if((string_to_md5("ttty") == "b6c56672be04c4f55fd9c39c24d78e3e")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


