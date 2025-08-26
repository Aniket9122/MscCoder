#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

double triangle_area(double base, double height){
    return 0.5 * base * height;
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

    if((abs(triangle_area(5, 3) - 7.5)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2, 2) - 2.0)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10, 8) - 40.0)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 3.5) - 18.375)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 5.5) - 15.125)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 550.123) - 275125.864391)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 1e+50) - 0.5)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e+50, 1e-50) - 0.5)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 1e-06) - 5e-13)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 3.7763622848915785) - 19.825901995680788)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 10.5) - 55.125)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 3.7763622848915785) - 5.691005006755327)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 1e-50) - 5e-101)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 3.0140143224731513) - 4.542141168036644)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e+50, 1e+50) - 5.000000000000001e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 5.933203128831868) - 16.316308604287634)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.11337213124403, 304.11337213124403) - 46242.471554518255)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.351228473089266e-51, 1e+50) - 0.3175614236544633)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5171570275185937, 2.5171570275185937) - 3.1680397505931213)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.32261214198862, 10.5) - 59.44371374544025)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 550.123) - 1038.7318746257051)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.768668237973262, 14.768668237973262) - 109.05678076166014)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 2.5) - 3.125)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.123, 550.123) - 151317.65756450003)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.594645686633063, 5.933203128831868) - 16.5970846463185)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.860558211363623, 3.7763622848915785) - 20.506701211131563)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 10.5) - 13.125)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 2.944801050034961) - 15.460205512683546)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.7017291578964, 1e+50) - 1.5235086457894822e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.944801050034961, 1e-50) - 1.4724005250174806e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 400.0476921945371) - 755.3625084806825)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.351228473089266e-51, 6.351228473089266e-51) - 2.0169051558689905e-101)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5171570275185937, 3.5) - 4.405024798157539)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5171570275185937, 2.654434753799174) - 3.3408145473075894)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.9008879248837105, 550.123) - 1072.9840839504009)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 1.912103537027174) - 2.3901294212839677)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.9697216977517569, 6.351228473089266e-51) - 3.079462028866711e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.933203128831868, 5.594645686633063) - 16.5970846463185)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.4652809018704174, 2.5) - 4.331601127338022)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 3.7763622848915785) - 7.130456053375772)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 550.9464604050861) - 1040.2867170341392)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.6046772448926214, 3.6046772448926214) - 6.49684901992333)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 3.0140143224731513) - 15.823575192984045)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.9008879248837105, 3.9008879248837105) - 7.608463301251771)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.32261214198862, 0.0008819244812954113) - 0.004992844420116219)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.944801050034961, 6.140317150374408e-51) - 9.041006195985119e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6146614673790448, 1e-06) - 3.073307336895224e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.4652809018704174, 3.7763622848915785) - 6.5430780521892595)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 2.7863944083610077) - 3.48299301045126)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.933203128831868, 1000.234) - 2967.295749182007)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 10.96884213871541) - 13.711052673394262)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4033919011136194, 0.4033919011136194) - 0.08136251294203004)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.3276207140237215, 3.0140143224731513) - 5.014748245912916)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.371412117716168, 5.933203128831868) - 15.934839591539488)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.875523280977146, 3.0140143224731513) - 5.840441337971628)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.351228473089266e-51, 2.944801050034961) - 9.351552138282607e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 7.812178926069052e+49) - 0.3906089463034526)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 5.594645686633063) - 2.7973228433165314e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(13.480958308989692, 0.0008819244812954113) - 0.005944593582010399)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.933203128831868, 1e+50) - 2.966601564415934e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6146614673790448, 1e+50) - 3.073307336895224e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.4652809018704174, 1e+50) - 1.7326404509352088e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 399.4602512887493) - 754.2533136400727)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 6.351228473089266e-51) - 1.1114649827906215e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.0673642213468528e-50, 9.84945648409047e-51) - 5.256478725415468e-101)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.944801050034961, 304.11337213124403) - 447.77668879088014)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.351228473089266e-51, 3.0140143224731513) - 9.571346791595166e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4936953752559635, 0.9517175397135795) - 0.234929273953289)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.969905813228654e+49, 399.4602512887493) - 1.591830289449991e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.637374596492362, 1e+50) - 8.186872982461811e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.7017291578964, 5.594645686633063) - 852.3491073714305)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 3.7763622848915785) - 6.608633998560262)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 1e-50) - 1.75e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(420.7690765020686, 3.280012252143434) - 690.0638631249313)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.1, 0.1) - 0.005000000000000001)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(589.979065005584, 550.9464604050861) - 162523.43878896433)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.9464604050861, 2.944801050034961) - 811.2138575569713)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.11337213124403, 0.9697216977517569) - 147.4526677660609)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.875523280977146, 3.9008879248837105) - 7.558990984684724)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7454685188344277, 3.7454685188344277) - 7.014267212789881)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 550.123) - 829.0393005609487)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.4652809018704174, 4.283908123603071) - 7.422472503044629)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 2.0296538480668818) - 2.5370673100836023)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.3276207140237215, 3.3276207140237215) - 5.536529808199871)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.933203128831868, 5.933203128831868) - 17.601449683990133)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.9656455435118383, 1.9656455435118383) - 1.931881201363975)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.351228473089266e-51, 0.001) - 3.175614236544633e-54)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1490554776938622e+50, 2.702723670662734) - 1.5527897192339383e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.933203128831868, 1e-06) - 2.9666015644159337e-06)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.654434753799174, 2.5171570275185937) - 3.3408145473075894)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 0.09250267285921429) - 0.11562834107401787)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.7817326614876008, 9.84945648409047e-51) - 3.849820915757175e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.994131567452262, 3.2184036971992116) - 16.082574993491857)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.000892498679469718, 0.3939374001878353) - 0.00017579430473068844)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 0.18106944719981674) - 0.22633680899977093)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.438338770643817, 0.0008819244812954113) - 0.006366762215533737)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 2.654434753799174) - 5.012053645976332)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.6046772448926214, 2.5171570275185937) - 4.536769329458912)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(13.480958308989692, 15.841514130026637) - 106.7793957690801)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.09171547982908979, 0.001) - 4.5857739914544895e-05)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 3.280012252143434) - 4.943001952923863)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.7345680037675, 1.4378969913777674e-06) - 6.2797045268009e-06)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.60477221802488, 5.933203128831868) - 19.593727594603504)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.0673642213468528e-50, 1.097798385610294e+50) - 0.5858753595263818)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.11337213124403, 277.92691648636287) - 42260.645889353225)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.944801050034961, 2.944801050034961) - 4.3359266121435045)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.436986216437411, 1e+50) - 4.218493108218706e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.441907709963407, 10.96884213871541) - 13.39245009395033)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 14.768668237973262) - 22.256488796552865)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.033319650274528, 3.4652809018704174) - 5.255652326682288)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.607199296199486, 10.5) - 13.6877963050473)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1516831895873947, 0.7697217147886755) - 0.44323777979125034)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.812178926069052e+49, 10.5) - 4.101393936186253e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 4.644005626042233) - 6.998549735268592)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 7.671717478682375e-51) - 1.1561333179358145e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.994131567452262, 7.969905813228654e+49) - 3.98261436388049e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.20898316984005957, 0.20898316984005957) - 0.02183698263819959)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.6621164999522327, 3.7454685188344277) - 6.858171031437603)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e+50, 2.7863944083610077) - 1.393197204180504e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6026770947089608, 1.5515192066475425) - 0.4675325439237463)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0140143224731513, 3.2582396789187547) - 4.910190529155724)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0718661171503449, 2.944801050034961) - 0.1058157086231356)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1490554776938622e+50, 8.7345680037675) - 5.018251605009294e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0008819244812954113, 0.0008819244812954113) - 3.888953953540901e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1516831895873947, 1.1516831895873947) - 0.6631870845890975)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.8981476266724497, 2.7863944083610077) - 4.03769117078242)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4033919011136194, 3.0140143224731513) - 0.607914483763061)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 10.04973171300669) - 52.76109149328512)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6146614673790448, 0.6146614673790448) - 0.18890435974028028)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.955633115846987, 2.5171570275185937) - 2.4613178204011636)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.969905813228654e+49, 0.000892498679469718) - 3.5565652069023016e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.111073757664684, 399.4602512887493) - 2219.216157662281)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.7017291578964, 1.9656455435118383) - 299.4677980097851)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.6669048346089, 3.9008879248837105) - 1072.0944958887646)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.794518953850641, 4.794518953850641) - 11.493705999416523)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.734287213931633, 5.933203128831868) - 17.01134541965987)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7454685188344277, 11.111073757664684) - 20.808088484890213)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.969905813228654e+49, 3.0140143224731513) - 1.2010705134916596e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.280012252143434, 3.280012252143434) - 5.379240187105521)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.037956426981518, 2.7863944083610077) - 4.232472400492844)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.725006778745118, 1.1516831895873947) - 0.9933306545025273)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.812178926069052e+49, 11.279588112345333) - 4.405908027300161e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.768668237973262, 2.702723670662734) - 19.957814615467615)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e+50, 0.42877480808894286) - 2.1438740404447144e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6026770947089608, 2.998900970971135) - 0.9036844622523826)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1516831895873947, 14.438338770643817) - 8.314196023859207)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.4378969913777674e-06, 1.4378969913777674e-06) - 1.0337738789066177e-12)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.654434753799174, 550.123) - 730.1328050321315)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6251271674999125, 0.6251271674999125) - 0.19539198777323183)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5171570275185937, 2.702723670662734) - 3.401589940524775)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.8981476266724497, 2.8981476266724497) - 4.199629832993576)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.280012252143434, 5.933203128831868) - 9.73048947851214)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.438338770643817, 1.9656455435118383) - 14.190328130115107)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.665398666653302, 5.5) - 12.829846333296581)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.235248373941634, 2.5171570275185937) - 6.588971117636237)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.4652809018704174, 3.4652809018704174) - 6.004085864433927)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.3916697224644832e+50, 13.480958308989692) - 9.380520754213477e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.2789244163895868, 1000.234) - 1139.728842351511)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.09171547982908979, 3.5) - 0.16050208970090712)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.7345680037675, 5.594645686633063) - 24.433406603440503)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(333.51227550642744, 5.734287213931633) - 956.2275885628756)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.235248373941634, 2.998900970971135) - 7.84999571594431)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.594645686633063, 2.7863944083610077) - 7.794444728997699)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.84945648409047e-51, 4.283908123603071) - 2.1097083322635055e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.7017291578964, 304.01008824251437) - 46316.1997844694)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.851524593655582, 3.7763622848915785) - 5.384194964960861)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.33264056665255, 8.7345680037675) - 40.75829184207298)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 0.09250267285921429) - 4.6251336429607146e-08)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.0296538480668818, 4.644005626042233) - 4.712861944670434)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.9129099568914203, 2.8053940598661615) - 2.6832331150610127)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.827786770016711e-51, 6.351228473089266e-51) - 2.1682416870956165e-101)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.671717478682375e-51, 2.8981476266724497) - 1.1116884901672436e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.687208350682112, 3.049326487166235) - 5.621751043717746)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(589.979065005584, 589.979065005584) - 174037.64857243153)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 13.480958308989692) - 23.59167704073196)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.812178926069052e+49, 7.812178926069052e+49) - 3.0515069786458705e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.5969764171560052, 1.097798385610294e+50) - 3.2767987350063996e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.2582396789187547, 304.7017291578964) - 496.39563208870686)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.560154963854028, 2.301688592769729) - 11.002249812706857)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.6046772448926214, 1e+50) - 1.8023386224463109e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.84945648409047e-51, 3.3511589168364306) - 1.650354696132609e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.9464604050861, 550.9464604050861) - 151771.00111644654)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.9656455435118383, 2.5171570275185937) - 2.4739192467307145)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.279588112345333, 11.279588112345333) - 63.61455399208108)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.441907709963407, 14.779981384753318) - 18.045675248272378)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.18106944719981674, 0.0008819244812954113) - 7.984478915007262e-05)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 2.312809121647276) - 4.367002569570996)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.4378969913777674e-06, 6.351228473089266e-51) - 4.5662061565039337e-57)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.6338864535323308, 3.0140143224731513) - 5.4762929085938055)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.9008879248837105, 0.20898316984005957) - 0.407609961866505)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.725006778745118, 2.654434753799174) - 2.2894589720201015)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 1.9656455435118383) - 2.4570569293897977)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.037956426981518, 0.4033919011136194) - 0.6127435092902065)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.22415785893309084, 0.20898316984005957) - 0.02342260995219912)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.60477221802488, 5.5) - 18.16312359956842)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.60477221802488, 2.1246067258982233) - 7.016271738720693)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.6669048346089, 6.351228473089266e-51) - 1.7455300483502078e-48)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.514708903074948, 1.1516831895873947) - 0.8722323903948901)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.11337213124403, 4.283908123603071) - 651.39687268468)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.01008824251437, 0.000892498679469718) - 0.13566430115095826)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.436986216437411, 8.436986216437411) - 35.59136820817743)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.6338864535323308, 1e-06) - 1.8169432267661652e-06)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.11289334265091495, 0.13099553205389838) - 0.007394261742949832)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.000892498679469718, 0.000892498679469718) - 3.9827694642759523e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4033919011136194, 0.001) - 0.0002016959505568097)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6237210212535688, 0.001) - 0.0003118605106267844)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.969905813228654e+49, 1.282144501068545e-50) - 0.5109285456232675)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 1.1490554776938622e+50) - 3.1599025636581213e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.234984698888863, 333.51227550642744) - 372.69741632423614)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0011763529060220604, 6.351228473089266e-51) - 3.735643035564306e-54)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.0673642213468528e-50, 10.04973171300669) - 5.36336203229908e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.560154963854028, 4.27091147693402) - 20.415287778195957)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.812178926069052e+49, 1.4378969913777674e-06) - 5.616554286949744e+43)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2556785207164284e+50, 1.097798385610294e+50) - 6.892409264440086e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5171570275185937, 304.11337213124403) - 382.7505559112691)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.8887622085921509, 4.283908123603071) - 1.9036878226696614)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.001, 0.001) - 5e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.545815336874533, 304.11337213124403) - 235.05155739455464)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1516831895873947, 0.1) - 0.057584159479369734)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.594645686633063, 0.0718661171503449) - 0.20103273116512174)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.998900970971135, 2.998900970971135) - 4.496703516845808)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.15441836003326, 3.2184036971992116) - 17.949710645018904)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.813583165985591, 2.998900970971135) - 2.7193781587055468)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.9656455435118383, 550.9464604050861) - 541.4827273044394)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(589.979065005584, 6.60477221802488) - 1948.3386688825876)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.05568828938279, 1e-50) - 7.027844144691395e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.7345680037675, 304.7017291578964) - 1330.7189870975963)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 9.560154963854028) - 18.051304321608683)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.905964252318878, 1.955633115846987) - 2.8414999626511634)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(13.604205114667401, 14.779981384753318) - 100.53494917457503)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.8458823990267295, 9.560154963854028) - 37.50392578143517)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.779981384753318, 14.779981384753318) - 109.2239248668273)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.09171547982908979, 0.0005869312950948745) - 2.6915342678167752e-05)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6237210212535688, 400.0476921945371) - 124.759077562855)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.879498151942725, 4.794518953850641) - 11.697423187384285)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.27091147693402, 0.001) - 0.0021354557384670103)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(333.51227550642744, 1.097798385610294e+50) - 1.8306461881608581e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.875523280977146, 2.944801050034961) - 5.706322513628218)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6026770947089608, 3.174698774390269) - 0.956659116962813)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6026770947089608, 2.490929195847712) - 0.7506129854396136)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(333.51227550642744, 0.42686056688899165) - 71.18161949355559)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.351228473089266e-51, 6.827786770016711e-51) - 2.1682416870956165e-101)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.04973171300669, 10.04973171300669) - 50.49855375170619)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.259484252759964, 3.7838976206198947) - 6.166777354233222)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 2.1246067258982233) - 1.0623033629491117e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.3197661199970594, 304.7017291578964) - 505.7692385814523)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(333.51227550642744, 11.111073757664684) - 1852.83974611925)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(18.950769019824136, 1.9656455435118383) - 18.62524733496976)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(12.240281538434914, 12.240281538434914) - 74.9122460700753)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(13.319692463483465, 10.04973171300669) - 66.92966787888298)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 1.955633115846987) - 10.267073858196682)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.851524593655582, 2.851524593655582) - 4.065596254111316)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 3.0429731122338364) - 8.36817605864305)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.42686056688899165, 10.04973171300669) - 2.1449170880481563)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.779981384753318, 1e+50) - 7.38999069237666e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.510668457454576, 7.812178926069052e+49) - 9.806895606836467e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.84945648409047e-51, 2.654434753799174) - 1.3072369798701181e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.098851344083411, 5.5) - 16.77184119622938)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.510668457454576, 2.510668457454576) - 3.1517280516286696)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2271875063959215e-50, 2.1246067258982233) - 1.303645415013522e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.994131567452262, 9.994131567452262) - 49.94133289377291)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.9656455435118383, 54.72828094135602) - 53.788200768220165)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(400.0476921945371, 8.436986216437411) - 1687.5984324814528)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.0870142809524648, 3.7454685188344277) - 3.908423143832663)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.15679708927114747, 3.0525124431290185) - 0.23931253302329458)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.560154963854028, 9.560154963854028) - 45.69828146645141)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.2789244163895868, 2.968862381334059) - 3.3829064848613597)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0005869312950948745, 9.84945648409047e-51) - 2.8904771250939145e-54)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.7345680037675, 8.7345680037675) - 38.14633910621948)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.9197013252602397, 2.441907709963407) - 2.3438667334899748)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.514708903074948, 1.4693169600875302) - 1.1127937404418)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.020029419215433, 8.7345680037675) - 35.02574617717658)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6026770947089608, 0.6026770947089608) - 0.18160984024341686)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.0673642213468528e-50, 11.121686262046902) - 5.935444998576841e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.220255434568307, 3.4652809018704174) - 17.70802798482345)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(54.72828094135602, 14.866896817750803) - 406.81985288400887)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.9036234950966294, 1.4378969913777674e-06) - 6.496587524688532e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(303.4087129268291, 0.5969764171560052) - 90.56392318848668)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6251271674999125, 1e-50) - 3.1256358374995625e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.312809121647276, 2.5171570275185937) - 2.9108518669317736)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.3175034167817614, 1.9656455435118383) - 2.277695131635264)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.7345680037675, 3.875523280977146) - 16.925510823939508)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.8626364849141614, 3.174698774390269) - 2.9566548828957937)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.8887622085921509, 6.827786770016711e-51) - 3.03413942475816e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0905822402815604, 6.354357897088894) - 9.819332832567909)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(15.918799001546322, 15.918799001546322) - 126.70408082581609)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(13.11648252834381, 2.654434753799174) - 17.408423535417732)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.111073757664684, 3.0905822402815604) - 17.169843612948487)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.716851810187464, 12.240281538434914) - 71.70878245040765)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.768668237973262, 3.0140143224731513) - 22.256488796552865)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0429731122338364, 4.402642372417788) - 6.698561181024359)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(13.11648252834381, 0.000892498679469718) - 0.005853221667917239)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.22415785893309084, 0.22415785893309084) - 0.025123372860733725)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(14.768668237973262, 3.862761898750768) - 28.523924482466878)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.32261214198862, 2.5171570275185937) - 14.250396361537005)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.8053940598661615, 304.7017291578964) - 427.40421050525526)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0005869312950948745, 0.3939374001878353) - 0.000115607094239277)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(590.4954617610108, 589.979065005584) - 174189.98020990085)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 2.0427652504617875) - 2.5534565630772343)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.905964252318878, 3.037956426981518) - 4.414096388455338)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1516831895873947, 0.8655397197246333) - 0.49841377256352265)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.671717478682375e-51, 3.3813368428220913) - 1.2970330479195459e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.23363542862130937, 1e-50) - 1.1681771431065469e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.0429731122338364, 5.734287213931633) - 8.72464090491012)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(333.51227550642744, 3.2582396789187547) - 543.3314647307627)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(303.4087129268291, 2.312809121647276) - 350.863219422215)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(12.240281538434914, 1.6547629986987604) - 10.127382491728817)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.998900970971135, 13.303574826111191) - 19.948051731706)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.387886646384953, 9.560154963854028) - 44.874825561268025)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.8851910418849274, 2.0276571353113435) - 2.9250891014071714)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.562579842154142, 4.0666300912371804) - 1.1439020574137486)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.15441836003326, 3.6046772448926214) - 20.10403902121218)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.000892498679469718, 0.5866217721476052) - 0.00026177957849496175)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7454685188344277, 5.683494585385186e+49) - 1.0643675023263072e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.43727468144641113, 11.111073757664684) - 2.4292956189552015)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0010065362974608783, 0.7697217147886755) - 0.0003873764224393158)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(13.11648252834381, 13.11648252834381) - 86.0210569581742)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.13099553205389838, 3.862761898750768) - 0.2530022750621918)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.033319650274528, 7.812178926069052e+49) - 1.1848417923952908e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.235248373941634, 188.0942895677646) - 492.36016180367324)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(15.513891130838266, 2.0296538480668818) - 15.743914416098276)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.562579842154142, 1.955633115846987) - 0.5500998848123054)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.866060163973655, 550.123) - 1338.4658077928398)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.6621164999522327, 3.6621164999522327) - 6.7055486296111955)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.144025426925843, 3.9008879248837105) - 6.132245411711187)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2271875063959215e-50, 3.0640156914299244) - 1.880060887961932e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.0870142809524648, 6.351228473089266e-51) - 6.627552262464608e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 5.292469980695496) - 6.61558747586937)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.3175034167817614, 0.000892498679469718) - 0.0010341843695721407)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.3813368428220913, 6.354357897088894) - 10.743112234952092)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0005869312950948745, 0.8655397197246333) - 0.00025400617432701683)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.436986216437411, 3.9008879248837105) - 16.4558688270555)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.8815947842262033, 0.562579842154142) - 1.0918534905081592)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.7763622848915785, 10.702461747984978) - 20.208186450292636)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.6547629986987604, 1.4378969913777674e-06) - 1.1896893686361e-06)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 6.909600955216463) - 8.637001194020579)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 2.407256478248396) - 3.009070597810495)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(15.918799001546322, 11.279588112345333) - 89.77874799032833)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(15.841514130026637, 15.513891130838266) - 122.88176278043466)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6026770947089608, 3.3276207140237215) - 1.002740392110587)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.7837741983252546, 1.710390000212614e-50) - 1.5254747757263939e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.586130448338354, 10.860558211363623) - 52.055363877951976)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6146614673790448, 1.2819212511615293e+50) - 3.939737986516633e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.594645686633063, 5.594645686633063) - 15.65003017948097)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.6859502932503763, 1.1516831895873947) - 0.9708403056081983)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(304.3562548680278, 5.594645686633063) - 851.3827042486025)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.60477221802488, 3.5) - 11.55835138154354)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4936953752559635, 0.4936953752559635) - 0.12186756177456332)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.794518953850641, 11.32261214198862) - 27.14323926093192)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 5.150384751173319) - 14.163558065726628)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(15.691840496308831, 7.812178926069052e+49) - 6.129373281825039e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.441306763932948, 1.955633115846987) - 3.3649667346677514)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.4705078542636985, 6.140317150374408e-51) - 1.6795326599396645e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.312809121647276, 2.312809121647276) - 2.674543016587422)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.594645686633063, 3.8700323087876214) - 10.82572978174463)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(54.72828094135602, 413.092534152517) - 11303.922131937827)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6026770947089608, 2.8596777431094558) - 0.8617311370105424)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4033919011136194, 8.436986216437411) - 1.701705954759045)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(11.75986472241807, 14.779981384753318) - 86.90529084227816)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.18106944719981674, 3.0429731122338364) - 0.27549472963804333)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.7863944083610077, 6.60477221802488) - 9.201750188401327)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.933203128831868, 2.905964252318878) - 8.620838097065961)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.560154963854028, 3.9008879248837105) - 18.646546529257623)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(295.64175607593984, 0.000892498679469718) - 0.1319299384469424)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.784457831984944, 4.665398666653302) - 13.493400928327404)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.7345680037675, 2.8053940598661615) - 12.25195259663319)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1490554776938622e+50, 249.75027757548597) - 1.4348846225183737e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.9464604050861, 304.8895804612961) - 83988.91758477139)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.441907709963407, 10.04973171300669) - 12.270258676527396)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.1485905046419096, 0.1485905046419096) - 0.011039569034868678)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.441907709963407, 2.441907709963407) - 2.981456631989365)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.6146614673790448, 1.514708903074948) - 0.4655165985080755)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.033319650274528, 0.0008819244812954113) - 0.0013375794295857708)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 1.3630788305486801e+50) - 6.816988954975143e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.3630788305486801e+50, 1.3630788305486801e+50) - 9.289919491449786e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 5.5) - 16.431042105746826)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e+50, 3.5) - 1.7500000000000002e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 1.2548915767220992e-06) - 0.000627592610675526)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 3.5) - 9.625)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.001, 1.3630788305486801e+50) - 6.8153941527434e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 1e-06) - 0.000500117)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.0032433265208, 1.3630788305486801e+50) - 3.7484888885574753e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.069041860932906e+49, 1.0598538918942554e+50) - 4.276002710083703e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.0032433265208, 550.0032433265208) - 151251.783834846)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.123, 549.9027289880141) - 151257.06948953666)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(485.63510270157553, 0.001) - 0.24281755135078778)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 1e-06) - 1.75e-06)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2548915767220992e-06, 1.2548915767220992e-06) - 7.87376434664038e-13)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1500693869738566e-06, 1.2548915767220992e-06) - 7.216061931797205e-13)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.3630788305486801e+50, 8.907222302866668e+49) - 6.070623080014309e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.069041860932906e+49, 1.0580805187525374e+50) - 4.2688479990259145e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.114184754387546e+49, 1.0598538918942554e+50) - 4.299925145743337e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.797297289894419, 3.5) - 4.895270257315233)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 550.0032433265208) - 1643.113899890069)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.92924132889435, 5.5) - 19.055413654459464)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.3492377394188, 550.123) - 151104.82535646114)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.772674948554135, 5.5) - 13.124856108523872)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.1834270152505, 1000.234) - 500208.734968586)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.015043666335268e+49, 8.069041860932906e+49) - 3.233686143043222e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.7817609749760175, 5.5) - 15.899842681184047)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 294.02079955093836) - 147044.80020901666)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 1e+50) - 5e+43)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 1000.234) - 500234.027378)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(767.3290355151506, 0.4542507960587521) - 174.27991261087584)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0010316265792822956, 0.0010316265792822956) - 5.321266995408453e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.146820248386406, 5.974924402089755) - 18.363393148671673)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.172984176264254, 4.312744584715087) - 13.311252038857793)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.069041860932906e+49, 6.270108721907589e+49) - 2.529688487483643e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.13932135029960732, 8.114184754387546e+49) - 5.652395882808803e+48)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 0.0006140392383884579) - 3.0701961919422893e-54)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(294.02079955093836, 1e+50) - 1.470103997754692e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 0.000804346648273894) - 0.4022674326947951)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(594.6585361139911, 1.3630788305486801e+50) - 4.052832309910245e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1459.3869630288782, 1001.0743515844817) - 730477.4288624901)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 3.5) - 6.125)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 639.7025803616297) - 319926.1353827171)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 767.3290355151506) - 2110.1548476666644)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.13932135029960732, 0.11937813506723759) - 0.008315961486908222)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 5.5) - 2.75e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.7817609749760175, 1e-06) - 2.8908804874880085e-06)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.983327741112275, 3.5142315083049835) - 17.541862452775987)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 916.7189142883354) - 458466.7132571395)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.172984176264254, 4.3000771926188825) - 13.27215423337559)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 0.4542507960587521) - 1.3570570830200674)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 8.907222302866668e+49) - 2.660998994611808e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 0.1) - 5e-08)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.903881784005102, 5.974924402089755) - 17.63762366915264)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0006140392383884579, 1e+50) - 3.0701961919422897e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0006647983494232811, 2.9883899064023636) - 0.0009933383386047424)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.5520481891140395, 0.1) - 0.027602409455701978)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 7.603869644900625) - 20.91064152347672)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0006140392383884579, 0.0006140392383884579) - 1.8852209314033871e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1500693869738566e-06, 8.907222302866668e+49) - 5.121961846748865e+43)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.907222302866668e+49, 0.001) - 4.453611151433334e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 600.8571902460975) - 300498.89541430754)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0006140392383884579, 5.5) - 0.0016886079055682592)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.29913366383325e+49, 5.903881784005102) - 2.7450492922466875e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.7817609749760175, 4.837574582905011) - 13.98484996848804)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0005508636405061713, 1e+50) - 2.7543182025308565e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(594.6585361139911, 1.5911495641287068e+50) - 4.730953352715959e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.4121078546231256e+50, 1.4121078546231256e+50) - 9.970242965441632e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.720589016261991e+49, 1.0598538918942554e+50) - 4.621275104247784e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.193315905177731e+49, 1e+50) - 3.0966579525888655e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.911842232100844, 1e-50) - 3.4559211160504224e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 0.0006647983494232811) - 3.3239917471164056e-54)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 5.386215851000227) - 16.091116261531944)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.92924132889435, 1.0580805187525374e+50) - 3.665847629919028e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.015043666335268e+49, 639.7025803616297) - 2.5636220575329036e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.29913366383325e+49, 5.974924402089755) - 2.7780810323165795e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.3630788305486801e+50, 0.0010316265792822956) - 7.030941756255234e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0010154651915701967, 0.0010316265792822956) - 5.237904409799015e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(767.3290355151506, 767.3290355151506) - 294396.9243723056)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e+50, 8.015043666335268e+49) - 4.0075218331676345e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2609505278442564e+50, 8.907222302866668e+49) - 5.615783332212929e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(294.02079955093836, 1.4121078546231256e+50) - 2.075945402342258e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.267448154730178, 6.172984176264254) - 16.257937054220868)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.526686994059155, 5.5) - 17.948389233662674)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(822.2055060209535, 767.3290355151506) - 315451.0789651523)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 0.2517146114391781) - 1.2585730571958905e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 8.015043666335268e+49) - 2.204137008242199e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.9260977190598565, 5.5) - 13.546768727414605)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 1.0598538918942554e+50) - 1.854744310814947e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 10.490447249302113) - 55.07484805883609)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.29913366383325e+49, 8.114184754387546e+49) - 3.772744430204388e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9027289880141, 803.43737854765) - 220906.20351716445)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.903881784005102, 9.29913366383325e+49) - 2.7450492922466875e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 5.974924402089755) - 17.84986080534381)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(294.02079955093836, 294.02079955093836) - 43224.11528428654)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.202258074315077, 1e-06) - 1.011290371575385e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(594.6585361139911, 594.6585361139911) - 176809.38728661742)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.015043666335268e+49, 0.000804346648273894) - 3.223436754392838e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.193315905177731e+49, 6.193315905177731e+49) - 1.9178580950663725e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.3343133651227918e+50, 8.907222302866668e+49) - 5.942512882417403e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.1500693869738566e-06, 0.7032009952181469) - 4.0436496874497005e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 1.5911495641287068e+50) - 7.957609465633565e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.069041860932906e+49, 8.069041860932906e+49) - 3.255471827674379e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.015043666335268e+49, 0.0006140392383884579) - 2.4607756542633705e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 8.907222302866668e+49) - 1.1134027878583335e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.404351965432616, 10.5) - 54.62284781852123)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(803.43737854765, 1.0580805187525374e+50) - 4.2505071913943816e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.312744584715087, 6.146820248386406) - 13.25483286972276)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.7868446941255465, 1e-50) - 3.934223470627732e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 822.2055060209535) - 2261.065141557622)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.361837597510845e+49, 8.069041860932906e+49) - 3.777052973478528e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(594.6585361139911, 595.5863196317731) - 177085.24448087488)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.123, 3.5) - 962.7152500000001)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.270108721907589e+49, 0.5520481891140395) - 1.7307010827386147e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.0598538918942554e+50, 1.0598538918942554e+50) - 5.616451360817001e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.8037417021210681, 0.7032009952181469) - 0.2825959824149312)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.2517146114391781, 916.7189142883354) - 115.3757726545168)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.518685967627258, 594.6585361139911) - 1046.2083232770337)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 0.1) - 0.525)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.4121078546231256e+50, 485.63510270157553) - 3.4288457150280156e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4542507960587521, 8.720589016261991e+49) - 1.9806672513691098e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5142315083049835, 8.069041860932906e+49) - 1.417824057476115e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2548915767220992e-06, 8.114184754387546e+49) - 5.091211050123904e+43)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 3.5) - 1.75e-06)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.962880154636738, 8.907222302866668e+49) - 2.2102738399917364e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.1834270152505, 1e+50) - 5.000917135076253e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.9280621984315783, 549.3492377394188) - 254.91513064157837)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 916.7189142883354) - 0.0004583594571441677)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.2394268990636, 550.123) - 275127.3571219968)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.6737498519983935, 7.6737498519983935) - 29.443218395522685)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 1.276203748094594e+50) - 1.5952546851182424e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.8037417021210681, 548.8276535424473) - 220.5578362146592)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.4542507960587521, 4.837574582905011) - 1.0987360526390937)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.105759464034772, 767.3290355151506) - 2726.227778070228)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(695.8091600969792, 1000.234) - 347985.98972022097)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.3630788305486801e+50, 9.992176917724965e+49) - 6.81006241382403e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 7.105759464034772) - 12.43507906206085)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.061930287127616, 4.312744584715087) - 13.071778509365)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(485.63510270157553, 1.3128947147670992e+50) - 3.18793879821138e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.061930287127616, 548.8276535424473) - 1663.4774877110715)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 0.07797070380124412) - 38.99447447296681)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.5, 10.5) - 18.375)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(639.7025803616297, 0.1) - 31.985129018081484)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.88396784199347, 9.88396784199347) - 48.846410150780535)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.907222302866668e+49, 8.907222302866668e+49) - 3.966930457634269e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 0.5520481891140395) - 2.7602409455701975e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.3492377394188, 803.43737854765) - 220683.8557382542)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.000804346648273894, 0.000804346648273894) - 3.234867652947237e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 7.6737498519983935) - 21.10281209299558)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.312744584715087, 4.312744584715087) - 9.299882926494655)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9727652573737, 3.5) - 962.4523392004039)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0008410540816875681, 0.000804346648273894) - 3.3824951581123664e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.2517146114391781, 0.000804346648273894) - 0.00010123290201633425)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.772674948554135, 4.772674948554135) - 11.389213082278108)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.1960098031524, 9.992176917724965e+49) - 4.997067741177836e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.123, 600.8571902460975) - 165272.68003487698)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.19124041832697045, 0.19124041832697045) - 0.018286448800937327)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.160241711251553e+49, 9.29913366383325e+49) - 3.7941589201057783e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.739083222128726, 0.1) - 0.33695416110643633)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(639.0733523762065, 0.1) - 31.953667618810325)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(294.10124115248755, 295.00098750371177) - 43380.07828302555)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.069041860932906e+49, 8.907222302866668e+49) - 3.593637481323317e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.9247881751012205, 0.24470918674655573) - 0.11315208112092552)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.267448154730178, 8.015043666335268e+49) - 2.1109413485159752e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(822.2055060209535, 0.1) - 41.11027530104768)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(456.1578303814912, 0.38843387915427663) - 88.59357778084058)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.172984176264254, 0.22507983497707104) - 0.6947071298548146)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2334585447714025e+50, 5.267448154730178) - 3.248589467796147e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(485.63510270157553, 2.5) - 607.0438783769694)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(999.6965952529107, 550.123) - 274978.0450351585)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.490447249302113, 1e+50) - 5.245223624651057e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(594.6585361139911, 550.123) - 163567.66893131856)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(522.7942554783411, 550.123) - 143800.57210325575)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.22507983497707104, 0.13932135029960732) - 0.015679213267109162)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(916.7189142883354, 1.3128947147670992e+50) - 6.017777087480945e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2478458236610548, 1e-50) - 6.239229118305274e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.38843387915427663, 1e-50) - 1.942169395771383e-51)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0010154651915701967, 0.000804346648273894) - 4.083930116391477e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.361837597510845e+49, 1e-06) - 4.680918798755423e+43)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(456.1578303814912, 1e+50) - 2.280789151907456e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.71357594772759, 9.29913366383325e+49) - 1.7266519554357548e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 803.43737854765) - 2400.238799317689)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 6.193315905177731e+49) - 3.2514908502183088e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-06, 0.0008410540816875681) - 4.2052704084378403e-10)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.11937813506723759, 1000.234) - 59.70303477542166)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.837574582905011, 916.7189142883354) - 2217.3480597147645)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(414.7107377757936, 0.1) - 20.73553688878968)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.001, 0.0009276711988323191) - 4.638355994161596e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(455.7970383157958, 1e+50) - 2.2789851915789793e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.9404843496046933, 0.0010154651915701967) - 0.0020007123474753458)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.422002958791852, 10.422002958791852) - 54.30907283653306)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(999.6965952529107, 0.001) - 0.4998482976264554)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5128675755458665, 7.105759464034772) - 8.927916278400577)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.29913366383325e+49, 822.2055060209535) - 3.8228994498142505e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.160241711251553e+49, 7.6737498519983935) - 3.130982681199386e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.3492377394188, 10.490447249302113) - 2881.459599974849)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5, 549.3492377394188) - 1510.7104037834015)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.30990076118675e+49, 1.4121078546231256e+50) - 5.161184140693687e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.123, 1.0580805187525374e+50) - 2.910372146088511e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.526686994059155, 455.7970383157958) - 1487.4223009531934)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0006140392383884579, 8.015043666335268e+49) - 2.4607756542633705e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(577.5592552891643, 695.8091600969792) - 200935.5101644951)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2609505278442564e+50, 0.0010316265792822956) - 6.504150398420877e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2334585447714025e+50, 7.526549464352233) - 4.641843374724942e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.3492377394188, 5.5) - 1510.7104037834015)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.312744584715087, 6.92924132889435) - 14.942024008686543)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.29913366383325e+49, 9.29913366383325e+49) - 4.3236943448918403e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.114184754387546e+49, 550.123) - 2.2318998298189702e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(455.7970383157958, 550.123) - 125372.21705470028)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.974496839187692, 5.5) - 21.929866307766154)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0014082326823942387, 0.001) - 7.041163411971193e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.061930287127616, 6.061930287127616) - 18.373499402997552)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.267448154730178, 4.791542019359697) - 12.619599584094173)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9092533811172, 8.015043666335268e+49) - 2.2037733391857397e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9727652573737, 5.7817609749760175) - 1589.9055357323646)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.769321291285576, 1.2334585447714025e+50) - 4.79156786690529e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.147431849021719e+49, 8.114184754387546e+49) - 2.0883606516790466e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.11937813506723759, 0.2517146114391781) - 0.015024610441391716)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1001.3872384163295, 1001.0743515844817) - 501231.54019130097)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.327812772387224, 4.658083846954506) - 10.079657383850163)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(484.7742452591313, 1.3128947147670992e+50) - 3.182287722279615e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.312744584715087, 9.939539320939666) - 21.43334719047261)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(456.1578303814912, 456.1578303814912) - 104039.98310917465)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0010366218326548584, 0.0010366218326548584) - 5.372924119683587e-07)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(548.8276535424473, 548.8276535424473) - 150605.89664645426)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(696.3053462592248, 485.63510270157553) - 169075.1591711274)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.267448154730178, 9.939539320939666) - 26.178004027475843)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(999.6965952529107, 999.6965952529107) - 499696.64128013095)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.9260977190598565, 0.0009276711988323191) - 0.002284899488302705)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.7087647107963838, 0.8735022534214422) - 0.309553786013119)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.5520481891140395, 8.720589016261991e+49) - 2.4070926872176075e+49)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.193315905177731e+49, 8.625076751984068) - 2.6708912515720802e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.2405719205775565, 7.658048480320529) - 12.408228435874168)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.0598538918942554e+50, 8.069041860932906e+49) - 4.276002710083703e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.15523794245751846, 0.7032009952181469) - 0.0545817378158722)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.92924132889435, 6.92924132889435) - 24.00719269702877)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1001.3872384163295, 600.8571902460975) - 300845.36121156736)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.2872373907775382, 0.38843387915427663) - 0.055786366968936)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9027289880141, 2.5) - 687.3784112350177)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2609505278442564e+50, 0.000804346648273894) - 5.071206653553626e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.769321291285576, 0.13932135029960732) - 0.5412161666066976)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.92924132889435, 5.903881784005102) - 20.454710829317328)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9727652573737, 0.0006647983494232811) - 0.18281049328542984)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.056912549536895, 0.13932135029960732) - 0.49158929267386237)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2.5, 1.0186449354129719e+50) - 1.273306169266215e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.837574582905011, 4.837574582905011) - 11.701063922584298)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0008410540816875681, 1e+50) - 4.205270408437841e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(171.65942130687165, 1.4121078546231256e+50) - 1.212008085737469e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.1960098031524, 1e-06) - 0.0005000980049015761)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.4121078546231256e+50, 3.5) - 2.47118874559047e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.147431849021719e+49, 548.8276535424473) - 1.4125264717341253e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.3000771926188825, 7.6737498519983935) - 16.49885836022041)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9727652573737, 1459.3869630288782) - 401311.54181877634)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.3000771926188825, 0.202258074315077) - 0.4348626661926388)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(522.7942554783411, 550.1316336478457) - 143802.8289140045)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.147431849021719e+49, 5.147431849021719e+49) - 1.3248027320161576e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.056912549536895, 595.5863196317731) - 2101.500286670976)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.603869644900625, 0.202258074315077) - 0.7689720158602343)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.5379365114689865, 639.7025803616297) - 1771.3161381327961)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.11937813506723759, 550.123) - 32.83632889879697)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.22507983497707104, 6.172984176264254) - 0.6947071298548146)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.905142554837278, 3.905142554837278) - 7.625069186800512)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(484.7742452591313, 0.19124041832697045) - 46.35421472874882)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.329830569369943, 0.1) - 0.5164915284684971)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.9280621984315783, 5.386215851000227) - 2.4993716619531425)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(600.8571902460975, 0.0010366218326548584) - 0.31143084085837924)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.329830569369943, 1.3630788305486801e+50) - 7.040186686131394e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.9634064227234154, 550.123) - 540.0575157439367)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.13932135029960732, 11.178404308824208) - 0.7786951912501686)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(639.7025803616297, 639.7025803616297) - 204609.69566066362)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2691522215004502e+50, 1.2691522215004502e+50) - 8.053736806697638e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(594.6585361139911, 1000.234) - 297398.8431057209)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(550.123, 11.178404308824208) - 3074.74865679165)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10.5, 10.14613224857702) - 53.267194305029356)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.911842232100844, 5.998834559163835) - 20.731499024707322)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(696.3053462592248, 696.3053462592248) - 242420.5676145895)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 8.015043666335268e+49) - 0.40075218331676343)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1e-50, 4.772674948554135) - 2.3863374742770674e-50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2609505278442564e+50, 1.2609505278442564e+50) - 7.949981168353544e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(171.65942130687165, 639.7025803616297) - 54905.48737669495)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(695.4045369598745, 696.3053462592248) - 242106.94844904065)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.92924132889435, 1.409139478012455e+50) - 4.882133754610257e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(549.9027289880141, 171.65942130687165) - 47197.99211657599)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.603869644900625, 7.603869644900625) - 28.909416788320577)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.2517146114391781, 0.2517146114391781) - 0.03168012280598821)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.3343133651227918e+50, 0.0014082326823942387) - 9.395118446606762e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.582770372047262, 1.0580805187525374e+50) - 4.011590804418569e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.8487886624206227, 3.8487886624206227) - 7.406587083988763)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(9.88396784199347, 696.3053462592248) - 3441.1298253171535)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.7032009952181469, 0.38843387915427663) - 0.1365735451988664)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.739083222128726, 295.00098750371177) - 994.0181026988349)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(639.7025803616297, 171.65942130687165) - 54905.48737669495)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.1960098031524, 1000.1960098031524) - 500196.0290130738)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.720589016261991e+49, 4.837574582905011) - 2.1093249886514814e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1001.3872384163295, 803.899039609307) - 402507.1196199517)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.11937813506723759, 2.9142916394548886) - 0.17395135048008348)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.091243020011593, 9.29913366383325e+49) - 1.9022507847156307e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(334.99192343571764, 550.123) - 92143.38094811366)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2334585447714025e+50, 1.2334585447714025e+50) - 7.607099908347929e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.992183551199873, 7.231551081385231) - 25.282166260461732)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.658048480320529, 1e+50) - 3.829024240160265e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.19868343255902e+49, 8.907222302866668e+49) - 3.651374796231658e+99)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4.772674948554135, 10.5) - 25.05654347990921)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.7883243761745513, 0.8037417021210681) - 0.3168045879650315)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.92924132889435, 7.512522727184062) - 26.02804148273095)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1000.234, 163.36233559394003) - 81700.28119023451)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(5.974924402089755, 0.38600856735515987) - 1.1531860042530258)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.015043666335268e+49, 639.9920782277771) - 2.564782226552145e+52)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.8978611439326938, 0.8037417021210681) - 0.3608242220464163)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(485.63510270157553, 485.63510270157553) - 117920.72648798491)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.0009276711988323191, 0.1442589155457731) - 6.691242056329881e-05)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(519.8238114362156, 549.9027289880141) - 142926.26625086291)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(7.853555205001856, 5.398908191906165) - 21.20031176593591)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2609505278442564e+50, 0.13932135029960732) - 8.78386651001322e+48)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(639.7025803616297, 4.837574582905011) - 1547.304471688085)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.11937813506723759, 1000.5238317055768) - 59.72033455966921)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1.2609505278442564e+50, 6.92924132889435) - 4.368715255614784e+50)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.229947285377706, 7.769321291285576) - 24.20123104393589)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(6.739083222128726, 600.8571902460975) - 2024.6133048414417)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(3.71357594772759, 3.5) - 6.498757908523282)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(8.160241711251553e+49, 0.000804346648273894) - 3.281831534775006e+46)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(0.8978611439326938, 8.069041860932906e+49) - 3.622439577849006e+49)<1e-4)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


