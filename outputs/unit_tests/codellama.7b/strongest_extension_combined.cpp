#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to calculate the strength of an extension based on its name
int getStrength(const string& extension) {
    int cap = 0, sm = 0;
    for (char c : extension) {
        if (isupper(c)) {
            ++cap;
        } else if (islower(c)) {
            ++sm;
        }
    }
    return cap - sm;
}

// Function to find the strongest extension in a vector of extensions
string Strongest_Extension(const string& class_name, const vector<string>& extensions) {
    int max_strength = 0;
    string strongest_extension;
    for (const string& extension : extensions) {
        int strength = getStrength(extension);
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
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

    if((Strongest_Extension("Watashi", {"tEN", "niNE", "eIGHt8OKe"}) == "Watashi.eIGHt8OKe")){ tests_passed++; } total_tests++;

    if((Strongest_Extension("Boku123", {"nani", "NazeDa", "YEs.WeCaNe", "32145tggg"}) == "Boku123.YEs.WeCaNe")){ tests_passed++; } total_tests++;

    if((Strongest_Extension("__YESIMHERE", {"t", "eMptY", "(nothing", "zeR00", "NuLl__", "123NoooneB321"}) == "__YESIMHERE.NuLl__");
    assert (Strongest_Extension("K", {"Ta", "TAR", "t234An", "cosSo"}) == "K.TAR");
    assert (Strongest_Extension("__HAHA", {"Tab", "123", "781345", "-_-"}) == "__HAHA.123");
    assert (Strongest_Extension("YameRore", {"HhAas", "okIWILL123", "WorkOut", "Fails", "-_-"}) == "YameRore.okIWILL123");
    assert (Strongest_Extension("finNNalLLly", {"Die", "NowW", "Wow", "WoW"}) == "finNNalLLly.WoW");
    assert (Strongest_Extension("_", {"Bb", "91245"}) == "_.Bb");
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    assert(Strongest_Extension("Watashi", {"tEN","niNE","eIGHt8OKe"}) == "Watashi.eIGHt8OKe");
    assert(Strongest_Extension("Boku123", {"nani","NazeDa","YEs.WeCaNe","32145tggg"}) == "Boku123.YEs.WeCaNe");
    assert(Strongest_Extension("__YESIMHERE", {"t","eMptY","nothing","zeR00","NuLl__","123NoooneB321"}) == "__YESIMHERE.NuLl__");
    assert(Strongest_Extension("K", {"Ta","TAR","t234An","cosSo"}) == "K.TAR");
    assert(Strongest_Extension("__HAHA", {"Tab","123","781345","-_-"}) == "__HAHA.123");
    assert(Strongest_Extension("YameRore", {"HhAas","okIWILL123","WorkOut","Fails","-_-"}) == "YameRore.okIWILL123");
    assert(Strongest_Extension("finNNalLLly", {"Die","NowW","Wow","WoW"}) == "finNNalLLly.WoW");
    assert(Strongest_Extension("_", {"Bb","91245"}) == "_.Bb");
    assert(Strongest_Extension("Sp", {"671235","Bb"}) == "Sp.671235");
    assert(Strongest_Extension("Test1", {"UPPERCASE","uppercase","1111"}) == "Test1.UPPERCASE");
    assert(Strongest_Extension("Test2", {"capitalLETTERS","lowercaseletters","mIxEdcAsE"}) == "Test2.capitalLETTERS");
    assert(Strongest_Extension("Test3", {"oneUPPERcaseletter","TWoUPPERcaseletTErs","threeUppercaseletters","fourlowercaseletters"}) == "Test3.TWoUPPERcaseletTErs");
    assert(Strongest_Extension("Test4", {"ALLUPPERcaseletters","ALLlowercaseletters","Nolettersatall123","12345"}) == "Test4.12345");
    assert(Strongest_Extension("Test5", {"ZERO","one","Two","THREE","four","FIVE","six","seven","eight","nine","10"}) == "Test5.THREE");
    assert(Strongest_Extension("Person", {"TEst","Name","naMe","AGE"}) == "Person.AGE");
    assert(Strongest_Extension("Animal", {"CAMel","hOrSE","DoG"}) == "Animal.CAMel");
    assert(Strongest_Extension("Vehicle", {"Automobile","CAR","SuPerbIkE","Z"}) == "Vehicle.CAR");
    assert(Strongest_Extension("Computer", {"Laptop","DEsktop","TABLET","MONITOR","MOUSE","KEYboard"}) == "Computer.MONITOR");
    assert(Strongest_Extension("Book", {"NOVEL","picturebook","COOkbook","Dictionary","Encyclopedia"}) == "Book.NOVEL");
    assert(Strongest_Extension("Computer", {"Laptop","DEsktop","TABLET","MONITOR","MOUSE","KEYboard","KEYeightboard"}) == "Computer.MONITOR");
    assert(Strongest_Extension("Compter", {"Laptop","DEsktop","TABLET","MONITOR","MOUSE","KEYboard","KEYeightboard"}) == "Compter.MONITOR");
    assert(Strongest_Extension("Computer", {"Laptop","DEsktop","TABLET","MONITOR","MOUSE","KEYeightboard"}) == "Computer.MONITOR");
    assert(Strongest_Extension("Vehcice", {"Automobile","CAR","Vehicle","SuPerbIkE",""}) == "Vehcice.CAR");
    assert(Strongest_Extension("VehciceBook", {"Automobile","CAR","Vehicle","SuPerbIkE",""}) == "VehciceBook.CAR");
    assert(Strongest_Extension("Animaal", {"CAMel","hOrSE","DoG"}) == "Animaal.CAMel");
    assert(Strongest_Extension("Animal", {"capitalLETTERS","lowercaseletters","mIxEdcAsE"}) == "Animal.capitalLETTERS");
    assert(Strongest_Extension("Test1", {"UPPERCASE","uppercase","uppercasse","1111"}) == "Test1.UPPERCASE");
    assert(Strongest_Extension("Test1", {"UPPERCASE","uppercase","Animal"}) == "Test1.UPPERCASE");
    assert(Strongest_Extension("Vehcice", {"Automobile","CAR","Vehicele","SuPerbIkE",""}) == "Vehcice.CAR");
    assert(Strongest_Extension("T1e1st1", {"UPPERCASE","uppercase","1111"}) == "T1e1st1.UPPERCASE");
    assert(Strongest_Extension("Test3", {"oneUPPERcaseletter","threeUppercaseletters","fourlowercaseletters","threeUppercaseletters"}) == "Test3.oneUPPERcaseletter");
    assert(Strongest_Extension("Vehcice", {"bIkE","Automobile","CAR","Vehicle","SuPerbIkE",""}) == "Vehcice.CAR");
    assert(Strongest_Extension("eightTeste3", {"UPPERCASE","uppercase","Animal"}) == "eightTeste3.UPPERCASE");
    assert(Strongest_Extension("AniVehcicemal", {"CAMel","hOrSE","DoG"}) == "AniVehcicemal.CAMel");
    assert(Strongest_Extension("Test5", {"ZERO","one","Two","THREE","four","FIVE","six","FVIVE","seven","eight","nine","10"}) == "Test5.THREE");
    assert(Strongest_Extension("VehciceBo", {"Automobile","CAR","Vehicle","SuPerbIkE",""}) == "VehciceBo.CAR");
    assert(Strongest_Extension("Test1", {"UPPERSCASE","uppercase","Animal"}) == "Test1.UPPERSCASE");
    assert(Strongest_Extension("Test1", {"UPPERCASE","uppercase","uppercasse","1Test5111"}) == "Test1.UPPERCASE");
    assert(Strongest_Extension("Animal", {"Do","CAMel","hOrSE","ZERO"}) == "Animal.ZERO");
    assert(Strongest_Extension("eightTeste3", {"aAnimal","UPPERCASE","uppercase","Animal"}) == "eightTeste3.UPPERCASE");
    assert(Strongest_Extension("TeTst3CTest3omputer", {"oneUPPERcaseletter","TWoUPPERcaseletTErs","fourlowercaseletteNamers","threeUppercaseletters","fourlowercaseletters"}) == "TeTst3CTest3omputer.TWoUPPERcaseletTErs");
    assert(Strongest_Extension("Vehcpicturebccookoobk", {"Automobile","CAR","Vehicle","SuPerbIkE",""}) == "Vehcpicturebccookoobk.CAR");
    assert(Strongest_Extension("Test5", {"ZERO","one","Two","THREE","fur","four","FIVE","six","FVIVE","seven","eight","nine","10"}) == "Test5.THREE");
    assert(Strongest_Extension("AnimAnimaonelal", {"CAMel","hOrSE","DoG"}) == "AnimAnimaonelal.CAMel");
    assert(Strongest_Extension("_", {"yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!"}) == "_.GIMMETH3L00TZ!");
    assert(Strongest_Extension("ClassName", {"XXXXXXx","AAA","ffffff","Bbcde","GHIJKLMN"}) == "ClassName.GHIJKLMN");
    assert(Strongest_Extension("My_class", {"Aaa","ZZZZ","ddd","E","HHHHHH"}) == "My_class.HHHHHH");
    assert(Strongest_Extension("Another_class", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z"}) == "Another_class.AbCdEfG");
    assert(Strongest_Extension("MYCLASS", {"qwerty","asdfgh","zxcvbn","QWERTY","ASDFGHJKL","ZXCVBNM"}) == "MYCLASS.ASDFGHJKL");
    assert(Strongest_Extension("testing1", {"TESTING2","TEST","test","tEstin3g"}) == "testing1.TESTING2");
    assert(Strongest_Extension("AnotherClass", {"hello","WORLD","Python321","TEST","Extend"}) == "AnotherClass.WORLD");
    assert(Strongest_Extension("MyClass", {"AbcDEFg","hIjKlmn","OPqrst","UVWxYZ"}) == "MyClass.UVWxYZ");
    assert(Strongest_Extension("YetAnotherClass", {"1","BBB","ccc","DDDDDD","EEEeeeE","ffffff"}) == "YetAnotherClass.DDDDDD");
    assert(Strongest_Extension("OneMoreClass", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","FgHiJ","kLMNop"}) == "OneMoreClass.AAAaA");
    assert(Strongest_Extension("s3cr3tK3y", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z"}) == "s3cr3tK3y.AbCdEfG");
    assert(Strongest_Extension("MyCslass", {"hIjKlmn","OPqrst","UVWxYZ"}) == "MyCslass.UVWxYZ");
    assert(Strongest_Extension("AnotherClass_", {"hello","WORLD","Python321","TEST","Python3yolo21","Extend"}) == "AnotherClass_.WORLD");
    assert(Strongest_Extension("MExtendy_class", {"Aaa","ZZZZ","ddd","E","HHHHHH"}) == "MExtendy_class.HHHHHH");
    assert(Strongest_Extension("MYCLASS", {"qwerty","asdfgh","zxcvbn","QWERTY","ASDFGHJKL","qweqrty","ZXCVBNM"}) == "MYCLASS.ASDFGHJKL");
    assert(Strongest_Extension("My_classMYCLASS", {"Aaa","ZZZZ","ddd","E","HHHHHH","ZZZZ"}) == "My_classMYCLASS.HHHHHH");
    assert(Strongest_Extension("ClassaName", {"XXXXXXx","AAA","ffffff","Bbcde","GHIJKLMN"}) == "ClassaName.GHIJKLMN");
    assert(Strongest_Extension("ClassaName", {"XXXXXXx","AAA","ffffff","Bbcde","GHIJKLN"}) == "ClassaName.GHIJKLN");
    assert(Strongest_Extension("otherClahellorss", {"hello","WORLD","Python321","TEST","Extend"}) == "otherClahellorss.WORLD");
    assert(Strongest_Extension("s3cr3tK3y", {"Hijklmno","pqrstuvwxy","Z"}) == "s3cr3tK3y.Z");
    assert(Strongest_Extension("s3cr3tK3y", {"Hijklmno","12345","pqrstuvwxy","Z","Hijklmno"}) == "s3cr3tK3y.Z");
    assert(Strongest_Extension("ClassaName", {"GHIHJKLN","XXXXXXx","AAA","ffffff","Bbcde","GHIJKLN"}) == "ClassaName.GHIHJKLN");
    assert(Strongest_Extension("otherClahellorss", {"hello","WORLD","ExtAbCdEfGend","TEST","Extend"}) == "otherClahellorss.WORLD");
    assert(Strongest_Extension("My_classMYCLASS", {"Aaa","ZZZZ","dddd","E","HHHHHH","ZZZZ"}) == "My_classMYCLASS.HHHHHH");
    assert(Strongest_Extension("Python321_", {"yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!"}) == "Python321_.GIMMETH3L00TZ!");
    assert(Strongest_Extension("My_classLMYCLASS", {"Aaa","ZZZZ","ddd","E","HHHHHH","ZZZZ"}) == "My_classLMYCLASS.HHHHHH");
    assert(Strongest_Extension("s3cr3tK3y", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy"}) == "s3cr3tK3y.AbCdEfG");
    assert(Strongest_Extension("YetAnotherClass", {"1","BBB","GIMMETH3L00TZ!","ccc","DDDDDD","EEEeeeE","ffffff"}) == "YetAnotherClass.GIMMETH3L00TZ!");
    assert(Strongest_Extension("Another_class", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z","12345"}) == "Another_class.AbCdEfG");
    assert(Strongest_Extension("MExtendy_class", {"Aaa","ddd","E","HHHHHH"}) == "MExtendy_class.HHHHHH");
    assert(Strongest_Extension("My_class", {"qwerty","asdfgh","zxcvbn","ASDFGHJKL","qwewrty","ZXCVBNM"}) == "My_class.ASDFGHJKL");
    assert(Strongest_Extension("Another_class", {"AbCdEfG","Hijklmno","12345","AbCdEfASDFGHJKLG","pqrstuvwxy","Z","12345"}) == "Another_class.AbCdEfASDFGHJKLG");
    assert(Strongest_Extension("dddd", {"Hijklmno","pqrstuvwxy","Hijklmno"}) == "dddd.Hijklmno");
    assert(Strongest_Extension("ClassaNamse", {"XXXXXXx","AAA","ffffff","Bbcde","GHIJKLMN","XXXXXXx"}) == "ClassaNamse.GHIJKLMN");
    assert(Strongest_Extension("MyClass", {"AbcDEFg","hIjKlmn","OPqrst","UVotherClahellorssWxYZ"}) == "MyClass.AbcDEFg");
    assert(Strongest_Extension("_", {"yolo","900000000","s3cr3tKK3y","GIMMETH3L00TZ!"}) == "_.GIMMETH3L00TZ!");
    assert(Strongest_Extension("My_classLMYCLASS_", {"yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!"}) == "My_classLMYCLASS_.GIMMETH3L00TZ!");
    assert(Strongest_Extension("s3cr3tK3y", {"AbCdEfG","Hijklmno","My__classMYCLASS","pqrstuvwxy","Hijklmno"}) == "s3cr3tK3y.My__classMYCLASS");
    assert(Strongest_Extension("_", {"yolo","900000000","s3cr3tK3y"}) == "_.900000000");
    assert(Strongest_Extension("s3cr3tK3y", {"Hijklmno","pqrstuvwxy","Z","pqrstuvwxy"}) == "s3cr3tK3y.Z");
    assert(Strongest_Extension("ClassaName", {"XXXXXX","AAA","ffffff","Bbcde","GHIJKLN"}) == "ClassaName.GHIJKLN");
    assert(Strongest_Extension("MYCLASS", {"qwerty","zxcvbn","QWERTY","ASDFGHJKL","ZXCVBNM"}) == "MYCLASS.ASDFGHJKL");
    assert(Strongest_Extension("MyClasss", {"AbcDEFg","hIjKlmn","OPqrst","UVWxYZ"}) == "MyClasss.UVWxYZ");
    assert(Strongest_Extension("s3cr3tK3y", {"AbCdEfG","My__classMYCLASS","pqrstuvwxy","Hijklmno"}) == "s3cr3tK3y.My__classMYCLASS");
    assert(Strongest_Extension("otherClahellorss", {"ClassaNamse","WORLD","ExtAbCdEfGend","TEST","Extend"}) == "otherClahellorss.WORLD");
    assert(Strongest_Extension("My_classMYCLASS", {"Aaa","ZZZZ","dddd","E","HHHHHH","ZZZZ","ZZZZ"}) == "My_classMYCLASS.HHHHHH");
    assert(Strongest_Extension("MYCLASMyClasssS", {"qwerty","asdfgh","zxcvbn","QWERTY","ASDFGHJKL","qweqrty","ZXCVBNM"}) == "MYCLASMyClasssS.ASDFGHJKL");
    assert(Strongest_Extension("Another_class", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z","12345","AbCdEfG"}) == "Another_class.AbCdEfG");
    assert(Strongest_Extension("AnotherClas_", {"hello","WORLD","Python321","TEST","Python3nyolo21","Extend","Python3yolo21"}) == "AnotherClas_.WORLD");
    assert(Strongest_Extension("ClassaNamse", {"XXXXXXx","AAA","bbBbB","Bbcde","MyClasss","XXXXXXx"}) == "ClassaNamse.XXXXXXx");
    assert(Strongest_Extension("ddGHIHJKLNdd", {"Hijklmno","pqrstuvwxy","Hijklmno"}) == "ddGHIHJKLNdd.Hijklmno");
    assert(Strongest_Extension("qwewrty", {"ylo","yolo","900000000","s3cr3tK3y"}) == "qwewrty.900000000");
    assert(Strongest_Extension("OPqrst", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy"}) == "OPqrst.AbCdEfG");
    assert(Strongest_Extension("MExtendy_class", {"Aaa","ZZZZ","ddd","E","HHHHHH","ZZZZ"}) == "MExtendy_class.HHHHHH");
    assert(Strongest_Extension("AnotAbCdEfASDFGHJKLGher_class", {"AbCdEfG","Hijklmno","12345","AbCdEfASDFGHJKLG","pqrstuvwxy","Z","12345"}) == "AnotAbCdEfASDFGHJKLGher_class.AbCdEfASDFGHJKLG");
    assert(Strongest_Extension("My_class", {"Aaa","ZZZzxcvbnZ","ddd","E","HHHHHH"}) == "My_class.HHHHHH");
    assert(Strongest_Extension("otherClahellorss", {"ClassaNamsse","WORLD","ExtAbCdEfGend","TEST","Extend"}) == "otherClahellorss.WORLD");
    assert(Strongest_Extension("ys3cr3tK3y", {"Hijklmno","pqrstuvwxy","Z"}) == "ys3cr3tK3y.Z");
    assert(Strongest_Extension("YetAnotherClasUVWxYZs", {"1","BBB","ccc","DDDDDD","EEEeeeE","ffffff","EEEeeeE"}) == "YetAnotherClasUVWxYZs.DDDDDD");
    assert(Strongest_Extension("MnYetAnSlaassYCLASS", {"qwerty","zxcvbn","QWERTY","ASDFGHJKL","ZXCVBNM"}) == "MnYetAnSlaassYCLASS.ASDFGHJKL");
    assert(Strongest_Extension("My_class", {"ddddDDD","asdfgh","zxcvbn","ASDFGHJKL","qwewrty","ZXCVBNM","asdfgh"}) == "My_class.ASDFGHJKL");
    assert(Strongest_Extension("nYetAnotherCMYCLASSlassnothGIM!METYoetAnoEEErClassH3L00TZ!yoloerClass", {"qwerty","zxcvbn","QWERTY","ASDFGHJKL","ZXCVBNM"}) == "nYetAnotherCMYCLASSlassnothGIM!METYoetAnoEEErClassH3L00TZ!yoloerClass.ASDFGHJKL");
    assert(Strongest_Extension("ClassaName", {"XXXXXX","AAA","ffffff","Bbcde","GHIJKLN","GHIJKLN"}) == "ClassaName.GHIJKLN");
    assert(Strongest_Extension("Python321_", {"yolo","nYetAnotherCMYCLASSlaass","s3cr3tK3y","GIMMETH3L00TZ!"}) == "Python321_.GIMMETH3L00TZ!");
    assert(Strongest_Extension("test", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z","12345","AbCdEfG"}) == "test.AbCdEfG");
    assert(Strongest_Extension("MMy_classMYCLASS", {"Aaa","ZZZZ","ddd","E","HHHHHH","ZZZZ"}) == "MMy_classMYCLASS.HHHHHH");
    assert(Strongest_Extension("x1UXXXXXXxVWxYZ", {"1","BBB","ccc","DDDDDD","EEEeeeE","ffffff","EEEeeeE"}) == "x1UXXXXXXxVWxYZ.DDDDDD");
    assert(Strongest_Extension("Another_css", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z","12345"}) == "Another_css.AbCdEfG");
    assert(Strongest_Extension("test", {"Hijklmno","12345","pqrstuvwxy","Z","12345","AbCdEfG"}) == "test.Z");
    assert(Strongest_Extension("My_class", {"Aaa","ZZZZ","ddd","E","HHHHHH","E"}) == "My_class.HHHHHH");
    assert(Strongest_Extension("MMy_classMYCLASS", {"Aaa","ZZZZ","ddd","HHHHHH","ZZZZ"}) == "MMy_classMYCLASS.HHHHHH");
    assert(Strongest_Extension("My_class", {"ddddDDD","asdfgh","Aaa","zxcvbn","ASDFGHJKL","qwewrty","ZXCVBNM","asdfgh"}) == "My_class.ASDFGHJKL");
    assert(Strongest_Extension("MYCLASS", {"Aaa","ZZZZ","ddd","E","HHHHHH","ZZZZ"}) == "MYCLASS.HHHHHH");
    assert(Strongest_Extension("My_classMYCLASS", {"Aa","ZZZZ","HHHHHH","ZZZZ"}) == "My_classMYCLASS.HHHHHH");
    assert(Strongest_Extension("Another_class", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z","AbCdEfG"}) == "Another_class.AbCdEfG");
    assert(Strongest_Extension("ClassNaMqwertyy_classLMYCLA_e", {"XXXXXXx","AAA","ffffff","Bbcde","GHIJKLMN"}) == "ClassNaMqwertyy_classLMYCLA_e.GHIJKLMN");
    assert(Strongest_Extension("My__classMYCLASS", {"ZZZZ","dddd","E","HHHHHH","ZZZZ","ZZZZ","ZZZZ"}) == "My__classMYCLASS.HHHHHH");
    assert(Strongest_Extension("My_class", {"Aaa","ZZZZ","HHHMeyOneMoreClassClass","ddd","E","HHHHHH","E","ZZZZ"}) == "My_class.HHHHHH");
    assert(Strongest_Extension("My_class", {"Aaa","ZZZZ","ddd","E","HHHHH","HHHHHH"}) == "My_class.HHHHHH");
    assert(Strongest_Extension("ddGHIHJKLNdd", {"hello","WORLD","Python321","TEST","Python3yolo21","Extend"}) == "ddGHIHJKLNdd.WORLD");
    assert(Strongest_Extension("OPqrst", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","12345"}) == "OPqrst.AbCdEfG");
    assert(Strongest_Extension("ClassaNamse", {"XXXXXX","AAA","ffffff","Bbcde","GHIJKLN","GHIJKLN"}) == "ClassaNamse.GHIJKLN");
    assert(Strongest_Extension("otherClahellorss", {"ClassaNamsse","WORLD","ExtAbCdEfGend","Extend"}) == "otherClahellorss.WORLD");
    assert(Strongest_Extension("ClassaNamse", {"Aaa","ZZZZ","ddd","E","HHHHHH","ZZZZ"}) == "ClassaNamse.HHHHHH");
    assert(Strongest_Extension("MExty_class", {"Aaa","ddd","E","HHYetAnotherClassHHHH"}) == "MExty_class.E");
    assert(Strongest_Extension("MMExtendy_classy_classMYCLASS", {"Aaa","ZZZZ","dddd","AAaa","HHHHHH","ZZZZ"}) == "MMExtendy_classy_classMYCLASS.HHHHHH");
    assert(Strongest_Extension("s3cr3tKK3y", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z","12345"}) == "s3cr3tKK3y.AbCdEfG");
    assert(Strongest_Extension("MExtendy_clasAnotherClasss", {"Aaa","ZZZZ","ddd","E","HHHHHH","ZZZZ"}) == "MExtendy_clasAnotherClasss.HHHHHH");
    assert(Strongest_Extension("My_class", {"qwerty","asdfgh","zxcvbHHHMeyOneMoreClassClassn","ASDFGHJKL","qwewrty","ZXCVBNM"}) == "My_class.ASDFGHJKL");
    assert(Strongest_Extension("JDLRFD", {"AbcDEFg","hIjKlmn","OPqrst","UVotherClahellorssWxYZ","hIjKlmn"}) == "JDLRFD.AbcDEFg");
    assert(Strongest_Extension("test", {"AbCdEfG","Hijklmno","12345","pqrstuvwxy","Z","12345","AbCdEfG","pqrstuvwxy"}) == "test.AbCdEfG");
    assert(Strongest_Extension("My_classLMYCLASS_nnYetAnotherCMYsCLASSUVWxYZlass", {"yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!"}) == "My_classLMYCLASS_nnYetAnotherCMYsCLASSUVWxYZlass.GIMMETH3L00TZ!");
    assert(Strongest_Extension("YoetAnoEEErClasslassaName", {"XXXXXXx","AAA","ffffff","Bbcde","GHIJKLMN"}) == "YoetAnoEEErClasslassaName.GHIJKLMN");
    assert(Strongest_Extension("MExtendyc_class", {"Aaa","ZZZZ","E","HHHHHH"}) == "MExtendyc_class.HHHHHH");
    assert(Strongest_Extension("MyClasssnYetAnotherCMYsCLASMqwertyy_classLMYCLASS_", {"AbcDEFg","hIjKlmn","OPqrst","UVWxYZ","OPqrst"}) == "MyClasssnYetAnotherCMYsCLASMqwertyy_classLMYCLASS_.UVWxYZ");
    assert(Strongest_Extension("My_class", {"qwerty","asdfgCcCcC","zxcvbHHHMeyOneMoreClassClassn","ASDFGHJKL","qwewrty","ZXCVBNM"}) == "My_class.ASDFGHJKL");
    assert(Strongest_Extension("MMy_clasMEAAAaAxtendy_classsMYCLASS", {"Aaa","ZZZZ","HHHHHH","ZZZZ"}) == "MMy_clasMEAAAaAxtendy_classsMYCLASS.HHHHHH");
    assert(Strongest_Extension("", {"HhAas","okIWILL123"}) == ".okIWILL123");
    assert(Strongest_Extension("$pecial_&_Cl@ss_name", {"YoUReXt"}) == "$pecial_&_Cl@ss_name.YoUReXt");
    assert(Strongest_Extension("123ThisIsTheClassName456", {"Ex1","ex2","ex3","EX4"}) == "123ThisIsTheClassName456.EX4");
    assert(Strongest_Extension("ThisIsTheClassName", {"ThisIsTheExtension"}) == "ThisIsTheClassName.ThisIsTheExtension");
    assert(Strongest_Extension("NoExtensionHasUpperCaseOrLowerCase", {"1234","5678","9987","hello"}) == "NoExtensionHasUpperCaseOrLowerCase.1234");
    assert(Strongest_Extension("", {"abc","DEF","gHi"}) == ".DEF");
    assert(Strongest_Extension("SampleClass", {"Abc","ddD","eFG"}) == "SampleClass.eFG");
    assert(Strongest_Extension("SampleClass", {"AAA","BBB","CCC"}) == "SampleClass.AAA");
    assert(Strongest_Extension("SampleClass", {"aBc","dEf","Ghi"}) == "SampleClass.aBc");
    assert(Strongest_Extension("SampleClass", {"AbC","DeF","gHI"}) == "SampleClass.AbC");
    assert(Strongest_Extension("UVWxYZ", {"hello","WORLD","Python321","Exteasdfghnd","TEST","Extend"}) == "UVWxYZ.WORLD");
    assert(Strongest_Extension("AAA", {"AbcDEFg","hIjKlmn","OPqrst","UVWxYZ"}) == "AAA.UVWxYZ");
    assert(Strongest_Extension("testing1", {"TESTING2","TOPqrstEST","test","tEstin3g"}) == "testing1.TESTING2");
    assert(Strongest_Extension("MyClass", {"AbcDEFg","hIjKlmn","OPqrst"}) == "MyClass.AbcDEFg");
    assert(Strongest_Extension("AbCdEfG", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","FgHiJ","kLMNop"}) == "AbCdEfG.AAAaA");
    assert(Strongest_Extension("UVWxYZ", {"WORLD","Python321","Exteasdfghnd","TEST","Extend"}) == "UVWxYZ.WORLD");
    assert(Strongest_Extension("YetAnotherClass", {"1","BBB","ccc","DDDDDD","ffffff"}) == "YetAnotherClass.DDDDDD");
    assert(Strongest_Extension("MyClass", {"AbcDEFg","hIjKlmn","Bbcde","UVWxYZ"}) == "MyClass.UVWxYZ");
    assert(Strongest_Extension("My_class", {"Aaa","ZZZZ","ddd","E"}) == "My_class.ZZZZ");
    assert(Strongest_Extension("AbCdETESTING2fG", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","FgHiJ","kLMNop"}) == "AbCdETESTING2fG.AAAaA");
    assert(Strongest_Extension("AbCdEfG", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","FgHiJ","kLMNop","ddddDDD"}) == "AbCdEfG.AAAaA");
    assert(Strongest_Extension("MYCLASS", {"hello","WORLD","Python321","TEST","Extend"}) == "MYCLASS.WORLD");
    assert(Strongest_Extension("Tg1", {"TESTING2","TOPqrstEST","TOPqrsttEST","test","tEstin3g"}) == "Tg1.TESTING2");
    assert(Strongest_Extension("fffffBbcdeAaaff", {"AAAaA","bbBbB","CcCcC","ass","EEE","FgHiJ","kLMNop","ddddDDD"}) == "fffffBbcdeAaaff.AAAaA");
    assert(Strongest_Extension("Another_class", {"AbCdEfG","1235","Hijklmno","12345","vpqrstuvwxy","Z"}) == "Another_class.AbCdEfG");
    assert(Strongest_Extension("Tg", {"TESTING2","TOPqrstEST","TOPqrsttEST","test","tEstin3g"}) == "Tg.TESTING2");
    assert(Strongest_Extension("TESTING2", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","FgHiJ","kLMNop"}) == "TESTING2.AAAaA");
    assert(Strongest_Extension("M1235yClass", {"AbcDEFg","hIjKlmn","Bbcde","UVWxYZ"}) == "M1235yClass.UVWxYZ");
    assert(Strongest_Extension("T1", {"TESTING2","TOPqrstESST","TOPqrsttEST","test","tEstin3g"}) == "T1.TESTING2");
    assert(Strongest_Extension("MYCLASS", {"qwerty","asdfgh","zxcvbn","QWERTY","MYCLASS","ASDFGHJKL","ZXCVBNM"}) == "MYCLASS.ASDFGHJKL");
    assert(Strongest_Extension("1", {"TESTING2","TOPqrstEST","TOPqrsttEST","test","tEstin3g"}) == "1.TESTING2");
    assert(Strongest_Extension("TESTING2", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","hello","kLMNop"}) == "TESTING2.AAAaA");
    assert(Strongest_Extension("T1", {"hello","WORLD","Python321","Exteasdfghnd","TEST","Extend"}) == "T1.WORLD");
    assert(Strongest_Extension("TESTING2", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","kLMNop"}) == "TESTING2.AAAaA");
    assert(Strongest_Extension("OneMorCassNaame", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","FgHiJ","kLMNop"}) == "OneMorCassNaame.AAAaA");
    assert(Strongest_Extension("testing1", {"yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!"}) == "testing1.GIMMETH3L00TZ!");
    assert(Strongest_Extension("M1235yClas", {"AbcDEFg","hIjKlmn","Bbcde","UVWxYZ"}) == "M1235yClas.UVWxYZ");
    assert(Strongest_Extension("T1", {"TESTING2","TOPqrstEST","TOPqrsttEST","test","tEstin3g"}) == "T1.TESTING2");
    assert(Strongest_Extension("T1", {"hello","WORLD","Python321","Exteasdfghnd","TEST","Extend","WORLD"}) == "T1.WORLD");
    assert(Strongest_Extension("MCyClass", {"AbcDEFg","hIjKlmn","OPqrst","UVWxYZ"}) == "MCyClass.UVWxYZ");
    assert(Strongest_Extension("_", {"yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!","GIMMETH3L00TZ!"}) == "_.GIMMETH3L00TZ!");
    assert(Strongest_Extension("1234GHIJKLMN5", {"TESTING2","TOPqrstEST","TOPqrsttEST","test","tEstin3g"}) == "1234GHIJKLMN5.TESTING2");
    assert(Strongest_Extension("YetAtEstin3gnotherClass", {"1","BBB","ccc","DDDDDD","EEEeeeE","ffffff"}) == "YetAtEstin3gnotherClass.DDDDDD");
    assert(Strongest_Extension("Ye1234GHIJKLMN5tAnotherClass", {"1","BBB","ccc","DDDDDD","ffffff"}) == "Ye1234GHIJKLMN5tAnotherClass.DDDDDD");
    assert(Strongest_Extension("M1235yClass", {"AbcDEFg","hIjKlmn","Bbcde","UVWxYZ","AbcDEFg"}) == "M1235yClass.UVWxYZ");
    assert(Strongest_Extension("Tg", {"AbcDEFg","hIjKlmn","OPqrst","UVWxYZ","UVWxYZ"}) == "Tg.UVWxYZ");
    assert(Strongest_Extension("Ye1234GHIJKLMN5tAnotherClass", {"HHHHHM1235yClassHExteand1","BBB","ccc","DDDDDD","ffffff"}) == "Ye1234GHIJKLMN5tAnotherClass.DDDDDD");
    assert(Strongest_Extension("TESTINT2G2", {"AAAaA","bbBbB","CcCcC","testiffffffngg1","EEE","kLMNop","bbBbB"}) == "TESTINT2G2.AAAaA");
    assert(Strongest_Extension("_Exteasdfghnd", {"yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!"}) == "_Exteasdfghnd.GIMMETH3L00TZ!");
    assert(Strongest_Extension("T11", {"hello","WORLD","Python321","Exteasdfghnd","TEST","Extend"}) == "T11.WORLD");
    assert(Strongest_Extension("AbCEdEfG", {"AAAaA","bbBbB","CcCcC","ddddDDD","EEE","FgHiJ","kLMNop"}) == "AbCEdEfG.AAAaA");
    assert(Strongest_Extension("YetAtEstin3gnotherClass", {"1","BBB","ccc","DDDDDD","bbBbBeeE","ffffff"}) == "YetAtEstin3gnotherClass.DDDDDD");
    assert(Strongest_Extension("AbCdEfG", {"AAAaA","bbBbB","CcCcC","ddddDDD","xcvbnAAAaA","EEE","FgHiJ","kLMNop","ddddDDD"}) == "AbCdEfG.AAAaA");
    assert(Strongest_Extension("MyClMasss", {"1","BBB","ccc","DDDDDD","bbBbBeeE","ffffff"}) == "MyClMasss.DDDDDD");
    assert(Strongest_Extension("TgTg1", {"AbcDEFg","hIjKlmn","OPqrst","UVWxYZ","UVWxYZ"}) == "TgTg1.UVWxYZ");
    assert(Strongest_Extension("Another_class", {"AbCdEfG","1235","Hijklmno","12345","vpqrstuvwxy","Z","Hijklmno"}) == "Another_class.AbCdEfG");
    assert(Strongest_Extension("YCBBBLASS", {"1","BBB","ccc","DDDDDD","ffffff"}) == "YCBBBLASS.DDDDDD");
    assert(Strongest_Extension("T1", {"hello","Python321","Exteasdfghnd","TEST","Extend"}) == "T1.TEST");
    assert(Strongest_Extension("M12ss", {"AbcDEFg","hIjKlmn","Bbcde","UVWxYZ","AbcDEFg"}) == "M12ss.UVWxYZ");
    assert(Strongest_Extension("BBBB", {"AAAaA","bbBbB","CcCcC","testiffffffngg1","EEE","kLMNop","bbBbB"}) == "BBBB.AAAaA");
    assert(Strongest_Extension("_Exteasdfghnd", {"yMCyClassolo","yolo","900000000","s3cr3tK3y","GIMMETH3L00TZ!"}) == "_Exteasdfghnd.GIMMETH3L00TZ!");
    assert(Strongest_Extension("T1", {"hello","WORLD","Python321","Exteasdfghnd","helHHHHHHEHxteasdkLMNopfBBBghndo","TEST","Extend"}) == "T1.WORLD");

    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
})){ tests_passed++; } total_tests++;

