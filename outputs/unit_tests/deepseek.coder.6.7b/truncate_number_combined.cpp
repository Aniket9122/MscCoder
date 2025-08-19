#include<cmath> // for fmod
double truncate_number(double number){
    return fmod(number, 1.0);
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

 if((truncate_number(3.5) == 0.5)){ tests_passed++; } total_tests++;
 
 if((abs(truncate_number(1.33) - 0.33) < 1e-4)){ tests_passed++; } total_tests++;

  if((abs(truncate_number(123.456) - 0.456) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.5) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.33) - 0.33000000000000007) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123.456) - 0.45600000000000307) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999.99999) - 0.9999900000000252) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.3333333) - 0.3333333) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.999999) - 0.999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(500.00678) - 0.006779999999992015) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(11.11) - 0.10999999999999943) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.25) - 0.25) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.99) - 0.9900000000000002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.284163165748358) - 0.2841631657483581) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8517611088029418) - 0.8517611088029418) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7713842427275083) - 0.7713842427275083) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.1842364304976463) - 0.18423643049764626) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0738831860229472) - 0.07388318602294719) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.04320870526393539) - 0.04320870526393539) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1369261836552624) - 0.13692618365526243) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0630407193724771) - 0.06304071937247713) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(10.291122396192739) - 0.2911223961927387) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.7558893686701653) - 0.7558893686701653) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9650030856354603) - 0.9650030856354603) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.984438743601213) - 0.984438743601213) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(10.488539525905054) - 0.488539525905054) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4874349659668864) - 0.4874349659668864) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7636841418734611) - 0.7636841418734611) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0550866750250807) - 0.05508667502508069) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.333802704974898) - 0.33380270497489795) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.05907618779899971) - 0.05907618779899971) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(10.340562837282636) - 0.34056283728263637) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(14.594425286718018) - 0.5944252867180175) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0662932553410105) - 0.06629325534101049) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.31915096006147237) - 0.31915096006147237) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.18237813427406302) - 0.18237813427406302) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3346032282437121) - 0.33460322824371214) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8553603762907702) - 0.8553603762907702) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.332961000883547) - 0.3329610008835471) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.021680163914408097) - 0.021680163914408097) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.5819493135932516) - 0.5819493135932516) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.8694186154267374) - 0.8694186154267374) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(11.915419340683165) - 0.9154193406831652) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.261530828471214) - 0.2615308284712139) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.563415501784793) - 0.5634155017847933) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.6876956198100403) - 0.6876956198100403) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6637488925155729) - 0.6637488925155729) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(11.020840370441608) - 0.020840370441607803) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2298279240135677) - 0.22982792401356766) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.111878426342652) - 0.11187842634265222) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3280193020046864) - 0.32801930200468643) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.33346058589665) - 0.33346058589664995) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.216338505526772) - 0.21633850552677192) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8986838916527826) - 0.8986838916527826) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9469650857716427) - 0.9469650857716427) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9128948300399008) - 0.9128948300399008) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2816583458068265) - 0.28165834580682647) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.174933571987024) - 0.1749335719870242) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.609939684332363) - 0.609939684332363) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.8754599167744213) - 0.8754599167744213) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(8.9080357328357) - 0.9080357328356996) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.2010885708651687) - 0.2010885708651687) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.274114559041777) - 0.2741145590417773) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(12.855609011975265) - 0.8556090119752646) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(11.056395819673522) - 0.05639581967352214) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(16.92988868999689) - 0.9298886899968899) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1490031104601102) - 0.14900311046011017) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7385135848830934) - 0.7385135848830934) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.9996633588901283) - 0.9996633588901283) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4811920749857561) - 0.4811920749857561) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5472841211344637) - 0.5472841211344637) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.136405572849686) - 0.1364055728496858) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.989795959151301) - 0.9897959591513006) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(8.24642675895752) - 0.24642675895752042) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(9.79035608010344) - 0.7903560801034395) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.8588962106051605) - 0.8588962106051605) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(17.731635169844186) - 0.7316351698441856) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(11.808291888432494) - 0.8082918884324943) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1526994290821804) - 0.15269942908218037) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(11.765894737711209) - 0.7658947377112089) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(13.527786959840032) - 0.5277869598400322) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(9.628578465053991) - 0.628578465053991) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.32946796610280166) - 0.32946796610280166) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(15.352967268085987) - 0.3529672680859868) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.1928538004835197) - 0.1928538004835197) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.3212272614517486) - 0.3212272614517486) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.558921334743221) - 0.5589213347432209) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.3421343646351933) - 0.3421343646351933) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.7128061250419595) - 0.7128061250419595) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(10.960003695431494) - 0.9600036954314941) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1718244416613808) - 0.17182444166138078) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.509772867652324) - 0.5097728676523241) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2870936824597337) - 0.28709368245973366) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.6727514187220556) - 0.6727514187220556) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.8116446061258343) - 0.8116446061258343) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(16.517704921540986) - 0.5177049215409859) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(67.49215499058909) - 0.49215499058908563) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.21854770645681287) - 0.21854770645681287) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0064607362588194) - 0.006460736258819377) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.999) - 0.999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456789.87654321) - 0.8765432089567184) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.0) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(9.32911434557313e-14) - 9.32911434557313e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.5e-323) - 2.5e-323) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.3333333333333335) - 0.3333333333333335) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.999999999999999) - 0.9999999999999991) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.01) - 0.010000000000000009) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.445784998329154) - 0.4457849983291542) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456789.87035146) - 0.8703514635562897) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8826600356459733) - 0.8826600356459733) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8115841500661258) - 0.8115841500661258) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(18.135161889053037) - 0.1351618890530375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(160272523.20529267) - 0.20529267191886902) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.8877808) - 0.8877807855606079) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.6010063) - 0.601006269454956) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.7123298892113925) - 0.7123298892113925) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5e-323) - 1.5e-323) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.519752) - 0.519752025604248) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.9804922690972266) - 0.9804922690972266) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(150436029.01193357) - 0.011933565139770508) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.652484424146342) - 0.6524844241463419) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5152518396359669) - 0.5152518396359669) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72999331.16870269) - 0.16870269179344177) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72999331.86348532) - 0.8634853214025497) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6634754089111754) - 0.6634754089111754) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.198779002134755) - 0.19877900213475463) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456790.81811383) - 0.8181138336658478) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.794679851869683) - 0.7946798518696827) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456791.1152048) - 0.11520479619503021) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715158.05022265) - 0.05022265017032623) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.462709133028266) - 0.462709133028266) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2625298014230917) - 0.2625298014230917) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1e-323) - 1e-323) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1010925072.8576772) - 0.8576772212982178) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.8689998) - 0.8689998388290405) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.319625895008866e-13) - 1.319625895008866e-13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.555526127930596) - 0.5555261279305963) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8635392957700825) - 0.8635392957700825) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1010925073.2121989) - 0.21219885349273682) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1564571336470584) - 0.15645713364705838) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.390954965157863) - 0.3909549651578632) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.638855399123406) - 0.6388553991234058) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.140436236372345) - 0.14043623637234504) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.7740143753811126) - 0.7740143753811126) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8059703311001947) - 0.8059703311001947) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3e-323) - 3e-323) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(9.781312122101996e-14) - 9.781312122101996e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(160272524.5457365) - 0.5457364916801453) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72999330.90505825) - 0.9050582498311996) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1470423298796195) - 0.14704232987961952) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.1744922651011397) - 0.1744922651011397) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4439317935136886) - 0.4439317935136886) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(26349039.586728778) - 0.5867287777364254) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8469364005316296) - 0.8469364005316296) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2895798371355272) - 0.28957983713552715) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.481216180561204) - 0.4812161805612041) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.0189582579378045) - 0.01895825793780448) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.98664449195926) - 0.9866444919592601) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.528436995804495) - 0.528436995804495) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000001.6386046) - 0.6386046409606934) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000001.7050426) - 0.7050426006317139) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5627036513731054) - 0.5627036513731054) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1677039780515606) - 0.16770397805156056) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4742532194314457) - 0.4742532194314457) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.8581470553539504) - 0.8581470553539504) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.131177828251349) - 0.13117782825134938) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1492742792268493) - 0.14927427922684933) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.661848359779834) - 0.6618483597798344) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152212563.68798697) - 0.6879869699478149) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(79568565.64931653) - 0.6493165343999863) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.923400716022232) - 0.923400716022232) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.05498959935514458) - 0.05498959935514458) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.3533781303390207) - 0.35337813033902066) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.2882017614066665) - 0.28820176140666653) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.0184889018907777) - 0.018488901890777676) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.1164878710091473) - 0.11648787100914726) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.573743299302671) - 0.573743299302671) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.4581802475578987) - 0.45818024755789866) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(189986233.7046723) - 0.7046723067760468) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.7007225844395357) - 0.7007225844395357) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.1061366811606566) - 0.10613668116065655) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8886991860707234) - 0.8886991860707234) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(28893008.920844864) - 0.9208448641002178) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(79568564.67553371) - 0.6755337119102478) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.682182097150205) - 0.6821820971502048) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(705714765.5983905) - 0.5983904600143433) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.020030702454516) - 0.020030702454516103) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8770064465964318) - 0.8770064465964318) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1028338481604116) - 0.10283384816041163) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(175809246.64348242) - 0.6434824168682098) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.42431661518684255) - 0.42431661518684255) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.5212216746997607) - 0.5212216746997607) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(146587325.7356192) - 0.7356191873550415) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(58831087.84316938) - 0.8431693837046623) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.746116762482217) - 0.746116762482217) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.6615496692061957) - 0.6615496692061957) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(100916720.7695719) - 0.7695719003677368) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9883294846441752) - 0.9883294846441752) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.093286483400629) - 0.09328648340062906) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.721059134675138) - 0.721059134675138) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.2866591259050346) - 0.2866591259050346) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72999331.37231973) - 0.3723197281360626) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.47664467032008) - 0.47664467032007996) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(103901647.0025852) - 0.00258520245552063) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.36098338371786576) - 0.36098338371786576) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.699074502248208) - 0.6990745022482079) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.375013030132074) - 0.37501303013207377) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.126642953202345) - 0.12664295320234498) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.167194630611698) - 0.16719463061169804) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9795677856345728) - 0.9795677856345728) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.515003762223958) - 0.5150037622239578) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9852820814421548) - 0.9852820814421548) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0497478677533256) - 0.049747867753325625) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(150436029.84275985) - 0.8427598476409912) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(845428263.2293222) - 0.22932219505310059) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.0801520003341434) - 0.08015200033414338) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1822887609936412) - 0.18228876099364122) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152212564.19843605) - 0.19843605160713196) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(16.41610969370442) - 0.41610969370442064) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.743780512834984) - 0.7437805128349839) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1416555648.7581606) - 0.7581605911254883) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1430360274.6746924) - 0.6746923923492432) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.25278928738271) - 0.25278928738271) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152212564.225985) - 0.22598499059677124) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4273719838780847) - 0.4273719838780847) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1429680774.7930136) - 0.7930135726928711) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.502679753494202) - 0.502679753494202) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1772324322.377769) - 0.37776899337768555) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(176775780.85323083) - 0.8532308340072632) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(109416178.07148522) - 0.07148522138595581) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.183769011641052) - 0.18376901164105197) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.598412908644545) - 0.5984129086445451) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(17.696529964211166) - 0.696529964211166) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.3743582109102555) - 0.37435821091025545) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.296055697325035) - 0.296055697325035) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.3373269509519523) - 0.3373269509519523) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.092571488216962) - 0.09257148821696193) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9542994114102682) - 0.9542994114102682) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(23.309569638807375) - 0.30956963880737476) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.270821859833556) - 0.2708218598335561) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4493396583498814) - 0.44933965834988143) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.287966209433857) - 0.28796620943385687) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.121560215176112) - 0.12156021517611215) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6868909655876363) - 0.6868909655876363) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.2274787597855052) - 0.22747875978550525) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.037809217353667) - 0.037809217353666824) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1416555647.9186053) - 0.9186053276062012) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(113584240.95728153) - 0.9572815299034119) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.0276883364808933) - 0.027688336480893305) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456791.7281209) - 0.728120893239975) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.044017685681736) - 0.04401768568173603) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72.19764766807585) - 0.19764766807584522) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(160272524.23746663) - 0.23746663331985474) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(100196200.36723432) - 0.36723431944847107) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.471148414375479) - 0.47114841437547916) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8139484014112275) - 0.8139484014112275) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(705714765.592123) - 0.5921230316162109) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152212563.88458076) - 0.8845807611942291) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715158.2886888) - 0.2886887937784195) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.5e-323) - 3.5e-323) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(146587324.07966906) - 0.0796690583229065) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(92961559.50287504) - 0.5028750449419022) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8706867818100157) - 0.8706867818100157) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0151226303017156) - 0.015122630301715567) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(160272524.58134723) - 0.5813472270965576) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(89154878.08467923) - 0.08467923104763031) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.565318084602408) - 0.5653180846024082) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.7376876373326633) - 0.7376876373326633) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(58831087.29625991) - 0.29625990986824036) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.173935356919032) - 0.17393535691903228) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(144827239.0827088) - 0.08270880579948425) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.415679198582467) - 0.4156791985824668) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715157.39441195) - 0.39441195130348206) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.767620085001745) - 0.7676200850017452) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.223325224215468) - 0.22332522421546797) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.975879108505155) - 0.975879108505155) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(215268867.56871042) - 0.5687104165554047) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3629991859337562) - 0.36299918593375624) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.709243484253177) - 0.709243484253177) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71821597.18352589) - 0.18352589011192322) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(18.56087651129403) - 0.5608765112940297) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6710473395901302) - 0.6710473395901302) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(144827239.27426428) - 0.27426427602767944) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(103901647.80268791) - 0.8026879131793976) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000002.5168852) - 0.5168851613998413) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(128052923.01911041) - 0.019110411405563354) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152212563.36466226) - 0.3646622598171234) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(24.13926203132389) - 0.13926203132389148) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.39283584267023075) - 0.39283584267023075) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(47988184.00313117) - 0.003131173551082611) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72999331.87087576) - 0.8708757609128952) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.012209582716504) - 0.012209582716503853) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(103901646.1691807) - 0.1691807061433792) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3559182448146114) - 0.35591824481461143) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.4221837138732041) - 0.4221837138732041) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1512952485.078303) - 0.07830309867858887) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.25089200550351454) - 0.25089200550351454) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(69917173.22005546) - 0.2200554609298706) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1228590802.0046532) - 0.004653215408325195) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.349677271986964) - 0.3496772719869643) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.609799651351639) - 0.609799651351639) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.476009903386441) - 0.4760099033864411) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(80305785.4798553) - 0.4798552989959717) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4728421701590824) - 0.47284217015908236) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9939766983739273) - 0.9939766983739273) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152461650.27579722) - 0.2757972180843353) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.5606325284153026) - 0.5606325284153026) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000002.8530337) - 0.8530336618423462) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(215268868.40989217) - 0.40989217162132263) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9742180497747979) - 0.9742180497747979) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(155037879.86268485) - 0.8626848459243774) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(88793517.62025908) - 0.6202590763568878) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.546851013145387) - 0.546851013145387) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(89154879.02236004) - 0.022360041737556458) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.8525081365857305) - 0.8525081365857305) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.233022921730213) - 0.2330229217302131) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.09177851810771813) - 0.09177851810771813) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(40688055.09062066) - 0.09062065929174423) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0187950874808553) - 0.018795087480855344) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.6729098096852857) - 0.6729098096852857) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(80305786.21000707) - 0.21000707149505615) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.583364427685972) - 0.583364427685972) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3882366317393324) - 0.3882366317393324) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5999246693081488) - 0.5999246693081488) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6249727914321912) - 0.6249727914321912) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(91840506.80673286) - 0.8067328631877899) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715158.26413897) - 0.26413896679878235) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(189986234.65180102) - 0.6518010199069977) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(176775780.43807706) - 0.43807706236839294) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.151812980720573) - 0.15181298072057303) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(127955426.5559983) - 0.555998295545578) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(107008190.53202428) - 0.5320242792367935) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.8589476213311955) - 0.8589476213311955) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.564636488056597) - 0.564636488056597) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.1218687093490485) - 0.12186870934904848) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1048312218.6730692) - 0.6730692386627197) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(965667185.13778) - 0.13777995109558105) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.4093526665411484) - 0.4093526665411484) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71165575.44037801) - 0.44037801027297974) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.57693416302272) - 0.5769341630227203) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(85122396.02909544) - 0.029095441102981567) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.648330024224058) - 0.6483300242240579) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.7012984266073585) - 0.7012984266073585) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.120412984697993) - 0.12041298469799333) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(48.76043540586227) - 0.7604354058622675) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.495658562592636) - 0.4956585625926362) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(85122395.2268395) - 0.22683949768543243) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.229419046594004) - 0.22941904659400425) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6015085003001182) - 0.6015085003001182) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6760536585910413) - 0.6760536585910413) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1994982296458598) - 0.19949822964585984) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1010794396.6547742) - 0.6547741889953613) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1010794396.5098057) - 0.5098056793212891) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(153417089.22221673) - 0.22221672534942627) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.152002360329047) - 0.15200236032904701) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.712429362421401) - 0.7124293624214011) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9093160669630782) - 0.9093160669630782) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.348024683214573) - 0.348024683214573) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(122248764.23259409) - 0.2325940877199173) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6831800572808668) - 0.6831800572808668) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.069206395097386) - 0.06920639509738602) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5064737221142537) - 0.5064737221142537) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(8.716948583581814e-14) - 8.716948583581814e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(17.083075994086023) - 0.08307599408602329) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5474916306192323) - 0.5474916306192323) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.7401173651453745) - 0.7401173651453745) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8203059263006383) - 0.8203059263006383) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1512622500.0805044) - 0.0805044174194336) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(40688055.04662351) - 0.04662351310253143) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(205488600.18597928) - 0.18597927689552307) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.309032201672641) - 0.309032201672641) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.47392908520534) - 0.4739290852053397) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(142058308.98699012) - 0.9869901239871979) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(130875471.0380795) - 0.03807950019836426) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(169879620.11764595) - 0.11764594912528992) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1772324322.6225414) - 0.6225414276123047) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9489519908683832) - 0.9489519908683832) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(118822195.34540734) - 0.3454073369503021) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6166567697365697) - 0.6166567697365697) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.42200967993559446) - 0.42200967993559446) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9686456768812532) - 0.9686456768812532) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9490759201830523) - 0.9490759201830523) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.644413686677947) - 0.6444136866779471) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715158.9129067) - 0.9129067063331604) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.7068113811262728) - 0.7068113811262728) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.761746961832214) - 0.7617469618322144) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(47988184.879423074) - 0.8794230744242668) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2016192110889325) - 0.20161921108893255) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5676786659028618) - 0.5676786659028618) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6722419214137425) - 0.6722419214137425) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.45149133525133) - 0.4514913352513301) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3821641614499425) - 0.3821641614499425) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.386700109446696) - 0.38670010944669597) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.768930147758783) - 0.7689301477587831) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.224494581929987) - 0.22449458192998684) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(99041047.65530457) - 0.655304566025734) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.814440085327677) - 0.8144400853276772) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(105087143.66257249) - 0.6625724881887436) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4234977580164692) - 0.42349775801646916) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(102623306.32845166) - 0.32845166325569153) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2180564967147436) - 0.2180564967147436) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.001913132962167) - 0.0019131329621666637) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(995853919.9248793) - 0.9248793125152588) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715157.65491812) - 0.6549181193113327) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.09900222436262) - 0.09900222436261963) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.489932912077975) - 0.48993291207797496) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2455493017228814) - 0.24554930172288136) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(40.02980804497223) - 0.029808044972227776) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456789.98564644) - 0.985646441578865) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8294531741784663) - 0.8294531741784663) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(169879619.64555934) - 0.6455593407154083) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6682922961154265) - 0.6682922961154265) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715158.73092033) - 0.7309203296899796) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.721008758225073) - 0.7210087582250733) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(85970027.61167794) - 0.6116779446601868) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(165731002.61921397) - 0.6192139685153961) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(146587324.8043661) - 0.8043661117553711) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.7416064141531233) - 0.7416064141531233) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9694645596990121) - 0.9694645596990121) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.65966097146055) - 0.6596609714605499) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.451042494689095) - 0.4510424946890952) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(140576362.14362016) - 0.14362016320228577) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2818545061065951) - 0.2818545061065951) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(64159799.84253342) - 0.8425334170460701) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(210871829.56473884) - 0.5647388398647308) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(108867285.86630318) - 0.8663031756877899) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(165791438.08694223) - 0.08694222569465637) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(85970026.85145691) - 0.8514569103717804) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.776088612171603) - 0.7760886121716029) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152212563.7637076) - 0.7637076079845428) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.214941422324843) - 0.21494142232484315) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.161199139427915) - 0.16119913942791508) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0475619115628318) - 0.04756191156283185) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5779607786881473) - 0.5779607786881473) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2040606417384176) - 0.20406064173841765) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4998813553652672) - 0.49988135536526723) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(99708119.1405163) - 0.14051629602909088) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1228590800.8463624) - 0.8463623523712158) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.859807299707288) - 0.8598072997072883) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(129986732.71872947) - 0.7187294661998749) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456790.11626266) - 0.11626265943050385) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(885732378.0342572) - 0.03425717353820801) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(79568565.74741061) - 0.7474106103181839) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.9407057242361816) - 0.9407057242361816) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0059321549355131) - 0.005932154935513134) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(69917173.82070811) - 0.8207081109285355) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(934904600.7262503) - 0.7262502908706665) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(103901647.25244018) - 0.2524401843547821) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(23.432625867237217) - 0.43262586723721697) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.480894212667249) - 0.4808942126672491) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(892327399.9821093) - 0.9821093082427979) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(103901647.30333556) - 0.3033355623483658) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2078713925069458) - 0.20787139250694575) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(70256740.2708059) - 0.27080589532852173) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.111801410410773) - 0.11180141041077318) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.0024908730502404) - 0.0024908730502404275) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(127955427.22776476) - 0.22776475548744202) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9644723056729113) - 0.9644723056729113) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(45.875209692352264) - 0.8752096923522643) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.6854038711548482) - 0.6854038711548482) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.2456616395979863) - 0.24566163959798626) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.366129592374307) - 0.36612959237430687) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.37881257655771333) - 0.37881257655771333) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.239730326375177) - 0.23973032637517733) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3707080934579263) - 0.3707080934579263) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.101448150667928) - 0.10144815066792834) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152212564.2426438) - 0.242643803358078) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.8948495863461208) - 0.8948495863461208) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.861144501035589) - 0.8611445010355889) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5217863769612878) - 0.5217863769612878) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2335573494964835) - 0.23355734949648355) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1637751440827753) - 0.16377514408277527) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.9583607736879247) - 0.9583607736879247) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.469435978678375) - 0.4694359786783746) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.053575469383812815) - 0.053575469383812815) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2457203775539736) - 0.24572037755397358) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000001.1321005) - 0.13210046291351318) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1006089875.076846) - 0.07684600353240967) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6918541917840608) - 0.6918541917840608) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.8249905652306655) - 0.8249905652306655) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1419776056.1154466) - 0.11544656753540039) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.972050090752265) - 0.9720500907522647) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(20.715983391477206) - 0.7159833914772058) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.048089164041137) - 0.04808916404113717) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.7699747638540608) - 0.7699747638540608) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.365129904599676) - 0.36512990459967565) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8137937849121724) - 0.8137937849121724) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(971773012.8434243) - 0.8434243202209473) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(199068786.95279548) - 0.9527954757213593) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.153995756077129e-13) - 1.153995756077129e-13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.068560265473651) - 0.0685602654736508) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72999332.77292487) - 0.7729248702526093) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(47988185.35787119) - 0.3578711897134781) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.497244651150888) - 0.4972446511508881) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.841018813581627) - 0.841018813581627) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.368990519330397) - 0.3689905193303966) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7253931749442393) - 0.7253931749442393) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2648775379699755) - 0.2648775379699755) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(102291146.47871837) - 0.4787183701992035) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(31.054544691235577) - 0.05454469123557715) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1006089874.537642) - 0.5376420021057129) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.161195098170445) - 0.1611950981704453) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7672173921458424) - 0.7672173921458424) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.6406030996885343) - 0.6406030996885343) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(675898762.3700281) - 0.37002813816070557) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.62883132667762) - 0.62883132667762) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2325502630134941) - 0.23255026301349413) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.2074957652265406) - 0.20749576522654056) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.7129793793402177) - 0.7129793793402177) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0638686802658897) - 0.06386868026588965) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6986394779433207) - 0.6986394779433207) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.422285596119231) - 0.4222855961192309) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.0721490595114784) - 0.07214905951147843) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(968285411.0685716) - 0.06857156753540039) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.919223367045232) - 0.9192233670452321) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.7383829748041504) - 0.7383829748041504) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(155869812.6985208) - 0.6985208094120026) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(81657494.91447921) - 0.914479210972786) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4483390412564068) - 0.4483390412564068) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.352304895642353) - 0.3523048956423529) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2425326639458927) - 0.24253266394589268) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.508136123839446) - 0.5081361238394457) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(17.515612451054224) - 0.5156124510542242) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(88744064.45841798) - 0.45841798186302185) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.5993867182527106) - 0.5993867182527106) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.3634036476711005) - 0.3634036476711005) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.14818330198331) - 0.14818330198330987) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(956527934.9385203) - 0.9385203123092651) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.520793864750637) - 0.5207938647506372) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.3465154691927355) - 0.34651546919273546) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.938402206005644) - 0.9384022060056436) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.100089638676446) - 0.1000896386764456) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(129544293.13352145) - 0.1335214525461197) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.498703317680476) - 0.49870331768047604) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6740097750362195) - 0.6740097750362195) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(653027733.8232279) - 0.8232278823852539) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(72999331.19192737) - 0.19192737340927124) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.117955701746306) - 0.11795570174630576) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1553211647796764) - 0.1553211647796764) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.784136858006861) - 0.7841368580068608) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.4633944828628183) - 0.46339448286281826) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(129986733.69689786) - 0.6968978643417358) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(26.3955133855236) - 0.39551338552359994) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.91336531977808) - 0.9133653197780802) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.8502862235693445) - 0.8502862235693445) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(15.62693992992976) - 0.62693992992976) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.7533150174835392) - 0.7533150174835392) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9610188874754886) - 0.9610188874754886) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.815451273906486) - 0.8154512739064859) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(26349040.00178345) - 0.0017834492027759552) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.159352773362228) - 0.15935277336222775) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.84118054093856) - 0.8411805409385602) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.466728180588806) - 0.46672818058880594) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(37.89588753091561) - 0.8958875309156085) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.2311497474524185) - 0.23114974745241845) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.897335852598901) - 0.897335852598901) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.155529397249772) - 0.15552939724977222) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(279633266.0636109) - 0.06361091136932373) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8903640353980733) - 0.8903640353980733) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5879028870350205) - 0.5879028870350205) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.231583142692421) - 0.23158314269242108) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(598109094.097449) - 0.09744894504547119) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000001.1951027) - 0.19510269165039062) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(118822194.39709312) - 0.39709311723709106) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.05286469170150809) - 0.05286469170150809) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.40758048479924) - 0.40758048479924014) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(756590995.0195402) - 0.01954019069671631) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.7700156573715375) - 0.7700156573715375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1254747452.6117423) - 0.6117422580718994) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(102623305.64383408) - 0.6438340842723846) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4074156499067956) - 0.4074156499067956) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.8432429867195856) - 0.8432429867195856) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(96369038.43482052) - 0.4348205178976059) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(187560222.0893026) - 0.08930259943008423) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(893866957.0346322) - 0.034632205963134766) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(93513771.27305332) - 0.2730533182621002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8693321925653903) - 0.8693321925653903) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6417216683966669) - 0.6417216683966669) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.504896352869404) - 0.5048963528694039) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.147499120792044) - 0.14749912079204375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1654142220.5871673) - 0.5871672630310059) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.46534713541301165) - 0.46534713541301165) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(830688231.8381917) - 0.8381917476654053) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4492363814309515) - 0.44923638143095146) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.715051244372558) - 0.7150512443725576) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(71715158.4868071) - 0.48680709302425385) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(266427705.23481366) - 0.2348136603832245) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0309799207968124) - 0.030979920796812443) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.3059891919832824) - 0.30598919198328245) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(159707685.35819337) - 0.35819336771965027) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.912160789111475) - 0.9121607891114749) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(149951713.40640524) - 0.4064052402973175) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.674305171441476e-14) - 6.674305171441476e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(103901646.3240433) - 0.32404330372810364) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(85987202.98388521) - 0.9838852137327194) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.033376509981014824) - 0.033376509981014824) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7918273056198739) - 0.7918273056198739) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(73240795.29430585) - 0.29430584609508514) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.3929459872882646) - 0.3929459872882646) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.882135001101608) - 0.882135001101608) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.911444862890861) - 0.9114448628908614) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(73240795.29440881) - 0.29440881311893463) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229865.1402571) - 0.1402571201324463) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456789.61373438) - 0.6137343794107437) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.917257871868941) - 0.9172578718689408) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.858923580280865) - 0.858923580280865) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6635554426074395) - 0.6635554426074395) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.4860209) - 0.48602092266082764) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9023534234967674) - 0.9023534234967674) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5029843859651806) - 0.5029843859651806) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229865.8553157) - 0.8553156852722168) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(99566554.9084163) - 0.9084163010120392) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1294654307.9610417) - 0.9610416889190674) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.4891675) - 0.4891674518585205) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.2660866082683056e-14) - 5.2660866082683056e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.083491531346205) - 0.0834915313462048) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.978377459089754) - 0.9783774590897538) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1038044479035123) - 0.10380444790351229) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9555841616563527) - 0.9555841616563527) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.8641990896352985) - 0.8641990896352985) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229865.7012644) - 0.7012643814086914) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.930922427236803) - 0.9309224272368031) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456788.97332755) - 0.9733275473117828) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4928323623182234) - 0.49283236231822336) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.45809496103848) - 0.4580949610384799) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1384580558.1315536) - 0.13155364990234375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.680356945912665) - 0.6803569459126648) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.1642697) - 0.16426968574523926) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(62.873852229672735) - 0.8738522296727353) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.71212428116326) - 0.71212428116326) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.065170574106334) - 0.0651705741063342) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456788.26121484) - 0.26121483743190765) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6786620763518647) - 0.6786620763518647) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.7742487) - 0.7742487192153931) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.856367834411976) - 0.8563678344119761) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.6258154191137786) - 0.6258154191137786) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(73240794.75702275) - 0.7570227533578873) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(45923672.20052228) - 0.200522281229496) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456790.4923905) - 0.4923904985189438) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.161976498149151) - 0.16197649814915138) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3773504063015731) - 0.3773504063015731) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1073429520.4802737) - 0.4802737236022949) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.238183291805815) - 0.23818329180581532) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9475445651677811) - 0.9475445651677811) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456789.10631168) - 0.10631167888641357) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456787.87268664) - 0.8726866394281387) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8514903094717257) - 0.8514903094717257) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.8038161366236887) - 0.8038161366236887) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.9052295641745283) - 0.9052295641745283) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.738055552597417) - 0.7380555525974168) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.028791238220267) - 0.02879123822026708) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.499479890100028) - 0.49947989010002836) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.5893494745632624) - 0.5893494745632624) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229866.5380485) - 0.538048505783081) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.2883691790192975) - 0.2883691790192975) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5428356289955849) - 0.5428356289955849) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7969820102774821) - 0.7969820102774821) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1351125324.1225882) - 0.1225881576538086) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1384580558.5685396) - 0.5685396194458008) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.1487079034789054) - 0.1487079034789054) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.289558971354532) - 0.2895589713545319) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8877400816707917) - 0.8877400816707917) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.7686475879605545) - 0.7686475879605545) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.8227768192473903) - 0.8227768192473903) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(36.78671574816508) - 0.7867157481650793) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.0767468183802) - 0.07674681838020003) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.88240710280967) - 0.8824071028096698) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.48715763260143174) - 0.48715763260143174) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(677528898.3094705) - 0.309470534324646) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(766121920.3722042) - 0.3722041845321655) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.3170331660745653) - 0.31703316607456533) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229865.5798495) - 0.5798494815826416) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5642363472800015) - 0.5642363472800015) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.645141870039688) - 0.645141870039688) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.393461110547214e-14) - 5.393461110547214e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.793313274865695) - 0.793313274865695) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.891071920894634) - 0.891071920894634) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.2625579729956993) - 0.2625579729956993) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1206157407.981305) - 0.9813048839569092) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(163531743.5166275) - 0.5166274905204773) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8771727402721947) - 0.8771727402721947) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.003320969221821) - 0.003320969221820569) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.9501672901725) - 0.9501672901724998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229866.7411385) - 0.7411384582519531) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.695637034282437) - 0.695637034282437) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.913474123234836) - 0.913474123234836) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(102453751.13899957) - 0.1389995664358139) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9374816253115514) - 0.9374816253115514) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1723108271.3807466) - 0.38074660301208496) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.5756305324119158) - 0.5756305324119158) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(73240794.13624364) - 0.13624364137649536) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6120323388811058) - 0.6120323388811058) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.5865912499383046) - 0.5865912499383046) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2318752365430112) - 0.23187523654301123) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.641693936199377) - 0.6416939361993768) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.222873397249589) - 0.2228733972495891) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6488359107293853) - 0.6488359107293853) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(848961777.5784919) - 0.5784919261932373) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.7967012601226822) - 0.7967012601226822) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.5146304716490455) - 0.5146304716490455) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.391052425043679) - 0.39105242504367865) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.470615312555069) - 0.4706153125550694) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.271747588894711) - 0.2717475888947112) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.5908134764808763e-14) - 5.5908134764808763e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.1863974) - 0.18639743328094482) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.090319354363427) - 0.09031935436342708) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7909611825056085) - 0.7909611825056085) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456789.38177297) - 0.3817729651927948) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.3212856) - 0.321285605430603) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.979308639514864) - 0.979308639514864) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1471360913.9633186) - 0.9633185863494873) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1723108272.2679431) - 0.2679431438446045) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1970917246863646) - 0.1970917246863646) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.9812582314541087) - 0.9812582314541087) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.930447499556583) - 0.9304474995565828) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0735815716701733) - 0.07358157167017332) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.42683101686930675) - 0.42683101686930675) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(134973157.7987596) - 0.7987596094608307) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(893339812.558286) - 0.5582859516143799) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456788.06590854) - 0.0659085363149643) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0738715197476145) - 0.07387151974761452) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.664689946018536) - 0.664689946018536) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.161413122862707) - 0.16141312286270715) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(182374052.988497) - 0.9884969890117645) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(60.30615572770495) - 0.30615572770494737) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229866.966963) - 0.9669630527496338) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.22494631007442) - 0.22494631007441956) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(65070291.11403904) - 0.11403904110193253) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(782547117.4665667) - 0.46656668186187744) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(114214533.70884219) - 0.7088421881198883) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.70653481653552) - 0.7065348165355201) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.015066579785924) - 0.015066579785924183) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.90607317872839) - 0.90607317872839) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.140503686609774) - 0.1405036866097742) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1577322113695923) - 0.15773221136959226) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.856020528177181) - 0.8560205281771811) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(919744840.2478453) - 0.24784529209136963) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.484794293586382) - 0.4847942935863818) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.7022843729355105e-14) - 4.7022843729355105e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229865.6592944) - 0.6592943668365479) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.981009430076146) - 0.9810094300761456) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1986418289.245226) - 0.2452259063720703) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(93455188.34470399) - 0.3447039872407913) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.646553880806146) - 0.6465538808061462) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8345638414414873) - 0.8345638414414873) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.419818942563205) - 0.41981894256320507) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.941482764434534) - 0.941482764434534) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.219269860085964) - 0.21926986008596394) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8795690386551904) - 0.8795690386551904) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.898984246287797) - 0.8989842462877968) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(182374053.50176996) - 0.5017699599266052) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1723108270.4858537) - 0.4858536720275879) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4883455940739276) - 0.48834559407392764) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8445209035218229) - 0.8445209035218229) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(664163512.9412829) - 0.9412828683853149) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1597262695.0750153) - 0.07501530647277832) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(73240793.9346574) - 0.9346573948860168) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0340432845946337) - 0.03404328459463368) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.875955692732683) - 0.875955692732683) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.598922505520863) - 0.5989225055208629) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.3827333214216395) - 0.3827333214216395) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.8264782) - 0.8264782428741455) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1384580557.4301362) - 0.43013620376586914) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.768732537605109) - 0.7687325376051088) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.884604642638587) - 0.8846046426385872) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7845732144390045) - 0.7845732144390045) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(36.904156632137365) - 0.9041566321373651) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.5414175) - 0.5414174795150757) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.993941384643309) - 0.9939413846433087) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2742165774045446) - 0.27421657740454464) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(140801122.81218356) - 0.8121835589408875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8816191596252043) - 0.8816191596252043) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4457258268165862) - 0.44572582681658623) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.587041111338507) - 0.587041111338507) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8308791886637201) - 0.8308791886637201) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.642286004919871) - 0.6422860049198711) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7994421867451703) - 0.7994421867451703) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.8029589290534256) - 0.8029589290534256) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.978127229268625) - 0.9781272292686252) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.4923104995186036) - 0.4923104995186036) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5130749528156522) - 0.5130749528156522) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.253385239670681) - 0.2533852396706813) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(134973157.61863142) - 0.6186314225196838) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.205395249404691) - 0.2053952494046909) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.329278726033276) - 0.3292787260332761) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(21.805294850523033) - 0.8052948505230333) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.536211190094444) - 0.536211190094444) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.344458939951214) - 0.3444589399512139) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.045168224231271) - 0.0451682242312712) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.783168993031427) - 0.7831689930314267) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(66999503.12475923) - 0.12475922703742981) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.259950864919679) - 0.2599508649196789) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.987133584995163) - 0.987133584995163) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.240960218327359) - 0.24096021832735914) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.476288945408861) - 0.4762889454088608) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.2992400809298648) - 0.29924008092986476) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(996636660.2874261) - 0.2874261140823364) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(73240794.58909574) - 0.5890957415103912) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.417040590811407) - 0.417040590811407) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152513631.04137567) - 0.04137566685676575) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.106908186223707) - 0.10690818622370735) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.19262408857043) - 0.19262408857043) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1464633345.0109391) - 0.01093912124633789) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(55.28382817708639) - 0.2838281770863915) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1597262694.838057) - 0.8380570411682129) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(90469854.40398492) - 0.4039849191904068) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.4589981582660956) - 0.4589981582660956) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1082927605.9870417) - 0.987041711807251) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.460697474629477) - 0.460697474629477) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.113554753828084) - 0.11355475382808411) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.9075883242759875) - 0.9075883242759875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(263758492.4909119) - 0.49091190099716187) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6674154758282402) - 0.6674154758282402) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.36168293045779254) - 0.36168293045779254) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.993297) - 0.9932969808578491) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(152513630.9948088) - 0.9948087930679321) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.322218141624517) - 0.3222181416245169) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(105172788.75918725) - 0.759187251329422) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.357294426031714) - 0.35729442603171435) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7290579755459562) - 0.7290579755459562) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.0238454764740426) - 0.02384547647404256) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.562591235912451) - 0.5625912359124512) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(664163512.7971014) - 0.7971013784408569) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456789.41458373) - 0.4145837277173996) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1058781831112812) - 0.10587818311128117) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2017580671284946) - 0.20175806712849464) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(175328559.43259108) - 0.4325910806655884) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.6110351775233362) - 0.6110351775233362) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1082927605.3966713) - 0.3966712951660156) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(646662589.8603498) - 0.8603497743606567) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.742272044774383) - 0.7422720447743831) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(877967248.8858345) - 0.8858344554901123) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.6769913144945825) - 0.6769913144945825) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(50.65164625410452) - 0.65164625410452) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(664163512.6699505) - 0.6699504852294922) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1449768367173228) - 0.14497683671732275) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.033550771948594) - 0.033550771948593905) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.721355448381416) - 0.721355448381416) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1082927604.9299798) - 0.9299798011779785) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.824840553345343e-14) - 4.824840553345343e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.354644497379619) - 0.3546444973796188) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(669622968.063163) - 0.06316304206848145) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1351125323.9961414) - 0.9961414337158203) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.4896160061839256) - 0.48961600618392564) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(217573194.43245178) - 0.4324517846107483) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2543890394826862) - 0.2543890394826862) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.515391008083752) - 0.5153910080837516) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1066526832.6733472) - 0.6733472347259521) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229868.049613) - 0.049612998962402344) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1694988007610359) - 0.16949880076103585) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(650832530.1513349) - 0.15133488178253174) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.9718553) - 0.9718552827835083) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.707236543333476) - 0.707236543333476) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.7604539677470585) - 0.7604539677470585) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.655667101588029) - 0.6556671015880289) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.047621464467575) - 0.04762146446757498) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.05189920542536752) - 0.05189920542536752) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.08794494741007) - 0.08794494741006975) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.1316361401991273) - 0.13163614019912728) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4226493680879435) - 0.4226493680879435) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(893339812.0990623) - 0.09906232357025146) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.400497895714986) - 0.4004978957149863) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(615338120.6687125) - 0.6687124967575073) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.918216465127125) - 0.9182164651271254) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.733865634033387) - 0.7338656340333873) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6605424612703235) - 0.6605424612703235) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(999999999.9461185) - 0.9461184740066528) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.4445597938419295) - 0.44455979384192945) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9778365407795) - 0.9778365407795) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(217573193.43526092) - 0.43526092171669006) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(9.332627907064017) - 0.33262790706401724) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1090935584.7609901) - 0.7609901428222656) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456788.29602514) - 0.2960251420736313) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.10379882677787544) - 0.10379882677787544) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1723108271.1351836) - 0.13518357276916504) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.842178058670941) - 0.8421780586709406) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.20266307434997) - 0.20266307434997) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1106424669.9524183) - 0.952418327331543) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.02354472078337) - 0.02354472078337011) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(48.950870844883234) - 0.9508708448832337) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.001758005350385459) - 0.001758005350385459) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1294654307.112075) - 0.1120750904083252) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.994706057525245) - 0.9947060575252451) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.131745598483911) - 0.13174559848391088) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.3627566701346625) - 0.3627566701346625) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(105378469.94508764) - 0.9450876414775848) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6681010016576117) - 0.6681010016576117) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.5676599004053826) - 0.5676599004053826) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1000000000.0058513) - 0.005851268768310547) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.539906358401206) - 0.5399063584012058) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.27672862118226) - 0.27672862118226016) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1085302460.3708425) - 0.37084245681762695) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.340157564283577) - 0.3401575642835768) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.996964342868165) - 0.9969643428681652) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.018546268805337) - 0.01854626880533705) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8619790591779233) - 0.8619790591779233) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.3728951180799692) - 0.3728951180799692) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.3991957218297122) - 0.3991957218297122) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.155487976218455e-14) - 5.155487976218455e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.036226004256484) - 0.036226004256484146) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6970123381373079) - 0.6970123381373079) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.2249590188964707) - 0.22495901889647074) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456787.18552905) - 0.18552905321121216) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.1618409124840974) - 0.16184091248409738) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1723108271.997475) - 0.9974749088287354) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.9734819465815625) - 0.9734819465815625) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.920473543790961) - 0.920473543790961) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.8435920626367714) - 0.8435920626367714) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(158917689.95124128) - 0.9512412846088409) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.9372025694972956) - 0.9372025694972956) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.807212242209201) - 0.807212242209201) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.510902988096851) - 0.5109029880968512) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.5449533855060036) - 0.5449533855060036) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.089361995862452) - 0.0893619958624523) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.004599772858476) - 0.004599772858475681) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.814742635418957) - 0.8147426354189573) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.0668427642834204) - 0.0668427642834204) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.915669717009991) - 0.9156697170099912) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.152398561613328) - 0.1523985616133281) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(275643913.27707875) - 0.2770787477493286) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1986418288.2958624) - 0.29586243629455566) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.9177989873931445) - 0.9177989873931445) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.460649663167366) - 0.460649663167366) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.217885299187503) - 0.2178852991875031) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(114214534.04054706) - 0.04054705798625946) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1085302459.7894087) - 0.7894086837768555) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.48766061926811) - 0.48766061926810966) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.79072365937356) - 0.79072365937356) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.7619332487651943) - 0.7619332487651943) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.7666482426650125) - 0.7666482426650125) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(35.92522727463808) - 0.9252272746380825) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(70.02074193640142) - 0.020741936401421412) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(823684455.4438579) - 0.44385790824890137) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(3.006426926531699) - 0.006426926531699184) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.040047572999139) - 0.04004757299913919) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(8.687515297580886) - 0.6875152975808856) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.182106381147949) - 0.18210638114794886) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(824766492.7477044) - 0.7477043867111206) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(73240794.35596104) - 0.35596103966236115) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(10.89462555210993) - 0.8946255521099307) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(9.574326072968619) - 0.5743260729686188) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.23875095618413633) - 0.23875095618413633) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.6408912697708957) - 0.6408912697708957) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0756313214858582) - 0.07563132148585816) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.55391467984184) - 0.5539146798418404) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.6252488281656963) - 0.6252488281656963) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456791.2361226) - 0.23612259328365326) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2408641519411558) - 0.24086415194115585) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1229229867.5450604) - 0.545060396194458) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(114214535.35449347) - 0.35449346899986267) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.85239108523822) - 0.8523910852382199) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.9379060141393113) - 0.9379060141393113) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.018399968753522344) - 0.018399968753522344) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(0.36196762181635134) - 0.36196762181635134) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.2149144302339392) - 0.2149144302339392) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.0293132231308781) - 0.02931322313087814) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.4602748862251587e-14) - 2.4602748862251587e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.6545550268805593) - 0.6545550268805593) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.6600822358584795) - 0.6600822358584795) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1.8813790109677413) - 0.8813790109677413) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(4.869263033194584) - 0.8692630331945841) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(774025829.4255886) - 0.42558860778808594) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(182374053.9140266) - 0.9140265882015228) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(7.122831784956886e-14) - 7.122831784956886e-14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(2.998720971722422) - 0.9987209717224221) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1723108272.3818932) - 0.3818931579589844) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(123456788.98954034) - 0.9895403385162354) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(5.995693783949557) - 0.995693783949557) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(6.990901192878196) - 0.9909011928781961) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(85459139.52462885) - 0.5246288478374481) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(9.93444512586173) - 0.9344451258617301) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(truncate_number(1915434693.6848624) - 0.6848623752593994) < 1e-4)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


