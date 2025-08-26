#include<cmath>
#include<vector>
using namespace std;

double getMean(const vector<double>& numbers){
    double sum = 0;
    for(int i=0; i < numbers.size(); ++i) 
        sum += numbers[i];
    
    return sum / numbers.size();
}

double mean_absolute_deviation(const vector<double>& numbers){
    double mean = getMean(numbers);
    double mad = 0;
    for(int i=0; i < numbers.size(); ++i) 
        mad += abs(numbers[i] - mean);
    
    return mad / numbers.size();
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

    if((abs(mean_absolute_deviation({1.0, 2.0, 3.0}) - 2.0/3.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,2.0,3.0}) - 0.6666666666666666) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,2.0,3.0,4.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,2.0,3.0,4.0,5.0}) - 1.2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,4.5,0.0,2.5,-3.0}) - 2.32) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,0.0,0.0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,2.0}) - 2.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,1.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.0,1.0,2.0,2.0,2.0}) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,-1.0,0.0,1.0,2.0}) - 1.2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.5,1.5,2.5}) - 0.6666666666666666) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-5.5,7.5,-5.5,7.5}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,-3.0,4.0,5.0}) - 3.12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,10.0,9.232092283615625}) - 0.24573046924300002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,-3.0,5.0}) - 2.625) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,5.0}) - 2.888888888888889) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,10.0,9.232092283615625,10.0,10.0}) - 0.18805903258392803) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,10.0,9.232092283615625,10.0,10.0,10.0}) - 0.1679798129590817) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,10.0,9.232092283615625,10.0,10.0,9.985189420898806,10.0}) - 0.15131978153021683) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,0.0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,1.0,1.0,1.0}) - 0.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-5.5,7.5,-5.5,10.416066198571809}) - 7.229016549642952) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,1.0,1.0,2.0,2.0,2.0}) - 0.8333333333333334) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.0,1.0,2.0,2.0,2.0,1.0,10.0}) - 1.875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-5.5,8.006967641333711,-5.5,10.416066198571809}) - 7.35575845997638) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,4.5,0.0,2.5,-3.0,-5.5}) - 2.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,2.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,1.0,1.0,2.0,2.0}) - 0.8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,0.0,5.0}) - 1.6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,5.049334549043888}) - 1.8935004558914579) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,10.0,9.232092283615625,10.0,10.0,10.0,0.0}) - 1.9563479576201392) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,5.0}) - 1.875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,2.0,2.0}) - 1.777777777777778) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.6403752298016823,2.0,-1.0}) - 1.6978611621781516) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,1.0,1.0}) - 0.96) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,5.0,0.0}) - 1.6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,5.0,-1.0}) - 2.375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,4.5,0.0}) - 1.6875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0}) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,1.0,-0.14848795937485382}) - 0.8237580734999765) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,5.049334549043888,5.049334549043888}) - 2.524667274521944) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,2.0,-2.0}) - 1.469387755102041) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,4.5,0.0,2.5,7.5}) - 2.6399999999999997) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.6403752298016823,-1.0}) - 0.8201876149008411) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,1.0,-0.14848795937485382,-5.5,4.0}) - 1.9410014743622628) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,5.0}) - 2.222222222222222) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.0,2.0,2.0,2.0}) - 0.48) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({7.5,-5.5,10.416066198571809,10.416066198571809}) - 5.604016549642953) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,5.0,9.232092283615625,4.556069003616063}) - 3.72610580595707) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,2.0,1.4955482911935327}) - 1.6656773980430073) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,5.0,0.0,5.7682420395965925}) - 2.39294267546591) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({7.5,-5.5,10.416066198571809,10.416066198571809,10.416066198571809}) - 4.859855887657234) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.5}) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,9.232092283615625}) - 0.2879653936441402) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.2120988051006742,0.0,5.0}) - 1.95286693219985) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,2.4267204433287306}) - 0.2133602216643653) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.416066198571809,-1.0,1.0,1.0,-0.14848795937485382,-5.5,4.0,0.0868013662924878}) - 2.988117824299862) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,2.0,-2.0,2.7500345836492754,1.2120988051006742}) - 1.2820806611728368) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,2.0,-0.14848795937485382}) - 1.09152815497446) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.0,2.0,2.0,2.0,1.410033320598176,2.0402809275768705,2.4726166299065415}) - 0.4527664396706049) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,2.4267204433287306,2.4267204433287306}) - 0.18965353036832466) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,2.0,10.416066198571809}) - 4.629362754920804) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.5,1.5}) - 0.4444444444444444) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,-3.0,4.0,5.0,-3.0}) - 3.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,1.0,-0.14848795937485382,-5.5,4.0,-0.21656423755989618}) - 1.7001513565373672) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,-0.14848795937485382}) - 1.1441084354166342) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.6403752298016823,2.0,-0.6846214759932707,-2.6403752298016823}) - 1.6490322459025233) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,0.0,0.0,5.0,0.0,0.0}) - 1.4444444444444444) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.0,1.0,2.0,2.0,2.0,1.0,10.0,10.0,1.0}) - 2.7600000000000002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,0.0,0.0,5.0,0.0,0.0,0.0,0.0}) - 1.125) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,4.5,2.5,-3.0,-5.5}) - 3.2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,-0.14848795937485382,-5.5,4.0}) - 2.058585340104191) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,0.0868013662924878,0.0868013662924878,0.0868013662924878}) - 0.5299494876403171) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0540014624285938,2.0,10.416066198571809,2.0}) - 3.537775007268002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,-0.14848795937485382,2.9190756023754556}) - 1.1665547347602114) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,5.604766823261059,5.049334549043888}) - 2.6635253430762367) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,0.0,5.0,5.7682420395965925}) - 2.3929426754659096) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,-0.21656423755989618,-0.14848795937485382,-5.5,4.0,-0.21656423755989618}) - 1.5860984592661267) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.0,2.0,2.0,2.0,2.0,1.0}) - 0.489795918367347) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,5.0}) - 2.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.0,2.5}) - 1.25) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,9.232092283615625,10.0,10.0,9.985189420898806,10.0}) - 0.1675169823621694) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,2.4267204433287306,2.4267204433287306,2.4267204433287306}) - 0.16002016624827387) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,0.0,4.556069003616063}) - 1.4579420811571402) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-5.5,7.5,-5.5,10.416066198571809,-5.5}) - 6.939855887657235) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,5.049334549043888,-0.6846214759932707}) - 1.6705567737735059) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,2.4267204433287306,2.4267204433287306,2.4267204433287306,1.410033320598176,3.3687304220687535}) - 0.4254250123176215) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-5.5,7.5,-5.5}) - 5.777777777777778) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,2.0,2.5567212714240335}) - 1.0477617883376367) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,5.0,-2.0}) - 2.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,0.0,0.0,5.0,0.0,0.0,0.0,0.0,0.0,-1.0}) - 0.9400000000000001) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-1.0,1.0,-0.21656423755989618,-0.14848795937485382,-5.5,4.0,-6.4523436914092915}) - 2.40574867983082) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-5.5,8.006967641333711,-5.5,10.416066198571809,-5.463621965026399}) - 7.055707635981548) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.6403752298016823,2.0}) - 2.320187614900841) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-0.21656423755989618,0.0,2.5,-3.0}) - 1.3253497219904165) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({4.5,2.5,-3.0,-5.5,-5.174476065704185}) - 3.8679161705126694) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.0,0.0,0.0,0.0,0.0,0.0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,10.0,10.0,10.0,9.232092283615625,-6.4523436914092915}) - 4.527433930036782) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0540014624285938,2.0,10.416066198571809,5.049334549043888,2.0}) - 3.2403364134163426) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({4.5,2.5,-3.0,-5.5}) - 3.875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-5.5,7.5,4.0,9.985189420898806}) - 4.748148677612351) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-2.0,1.0,1.0,2.0,2.0,1.4023465069741052,-2.0,2.7500345836492754,1.2120988051006742,-2.0}) - 1.5218687937434432) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0}) - 100000000.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 25.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 35.70247933884297) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.99,3.01,3.05,3.1,3.25}) - 0.1518518518518518) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,3.5,4.0}) - 0.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,7.0,7.5,8.0}) - 0.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.002,0.003,0.004,0.005,9999.995,9999.996,9999.997,9999.998,9999.999}) - 4999.997) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,5.5,6.0,6.5,7.5,10.0}) - 1.25) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,3.0,4.0,5.0}) - 34.31999999999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,2.5,3.0,3.5,4.0}) - 0.7346938775510203) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0}) - 35.074380165289256) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 22.22222222222222) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,5.5,6.0,6.5,7.5,10.0,6.0}) - 1.2244897959183674) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,3.5,1.7968360300361357,4.0}) - 0.7595710983629222) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,60.0,70.0,80.0,90.0,100.0}) - 23.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,2.0,60.0,50.51467930227886,70.0,80.0,90.0,100.0}) - 25.748532069772118) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 37.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0}) - 34.082840236686394) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.9,2.95,2.99,3.01,3.05,3.1,3.25}) - 0.10249999999999992) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,7.0,7.5,3.25}) - 1.0555555555555556) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,3.5,4.0,2.0}) - 0.7346938775510203) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0,90.0}) - 25.619834710743802) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0}) - 1413.550153846154) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,2.5,3.0,3.5,4.0}) - 0.721327344912485) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 94999999.65800002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,4.0,99999999.88224646,400000000.0}) - 111999999.37884057) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,58.67263492064459,90.0,100.0}) - 23.03079627443344) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,2.5,3.0,3.5,3.1148637087934263}) - 0.6263098418930727) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0}) - 26.702273665674365) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,2.5,3.0,3.5,4.0,3.5}) - 0.703125) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.99,3.01,3.05,3.1,3.9174287938154095,3.25}) - 0.23009145525784924) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,1.5,2.0,2.5,3.0,3.5,4.0,3.5}) - 87499999.375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,9999.999,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0}) - 1518.1149679001876) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,4.0,3.5}) - 1.003293898078466) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10000.702716116059,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0}) - 1518.2224800845852) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,80.0,90.0,100.0}) - 25.925925925925924) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0}) - 36.73611111111111) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,2.7025347144325655,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7}) - 104938271.23084855) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,80.0,2.0,2.5,3.0,3.5,4.0,50.0,3.5}) - 19.86) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,3.5,4.0,3.5}) - 0.7346938775510203) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.9,2.95,2.99,3.01,3.05,3.1,3.25,2.9}) - 0.10123456790123456) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,4.0,99999999.88224646,400000000.0,4.0}) - 111111110.23530595) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.004,50.0,60.0,70.0,80.0,90.0,100.0,2.0,9999.998,4.0,5.0,2.0,50.0,2.0}) - 1321.2752040816326) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,50.0,2.0}) - 32.24999999999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,1.654732131931256,2.5,3.0,3.5,4.0}) - 0.793158483508593) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.99,3.01,3.05,3.1,3.9174287938154095,3.25,2.9}) - 0.21854548027616325) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,2.5,3.0,3.1148637087934263}) - 0.6024772847989044) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 21.25) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,100.0}) - 34.74999999999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0}) - 61111103.291666664) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,2.5,3.0,3.5,4.0,3.5}) - 0.7363549979314951) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,2.5,3.0,3.5,4.0,3.098997828558572,2.0}) - 0.6039589177826823) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,80.0,2.0,2.5,3.0,3.5,4.0,50.0,3.5,3.0}) - 18.46280991735537) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,60.0,80.0,90.0}) - 23.33333333333333) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,10.0,20.0,30.0,40.0,50.0,60.0,80.0,90.0,100.0}) - 71999990.4) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 25.92592592592593) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,38.50410272414793,100.0,2.0,3.0,4.0,5.0}) - 31.983064192646488) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0}) - 27.2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,29.42670336259685,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0}) - 26.74965355306306) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,99.32299855953764,100.0,2.0,100.0,4.0,5.0,50.0,2.0}) - 33.19453244209735) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,9999.996,200000000.0,3.0,3.5,4.0}) - 55554999.33355555) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,80.0,90.0,99.32299855953764,100.0,2.0,100.0,4.0,5.0,50.0,2.0}) - 35.49465267774567) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,50.0}) - 1320.3570102040824) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,9999.996,200000000.0,3.5,4.0}) - 63999199.28032) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.9,2.95,3.01,3.05,3.1,3.25,2.9}) - 0.11374999999999996) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,100.0,2.0,4.0,5.0,2.0}) - 35.92592592592593) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0}) - 38.18181818181818) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({200000000.0,4.0,99999999.88224646,400000000.0,400000000.0}) - 143999999.37884057) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,80.0,100.0,2.0,100.0,4.0,5.0,2.0,2.0,80.0}) - 39.00826446280991) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,3.098997828558572,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0}) - 29.34962898316818) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,70.0,80.0,3.098997828558572,100.0,1.0,2.0,3.0,4.0,5.0}) - 34.55208017371531) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.002,10.0,20.0,30.0,70.32312812754411,40.0,50.0,60.0,70.0,90.0,100.0}) - 26.472787448557366) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.5,3.1148637087934263,3.1148637087934263}) - 0.5967563868138965) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,3.0,2.99,5.0}) - 34.441199999999995) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0,10.0}) - 26.446280991735534) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,50.0,70.0}) - 1238.4443200000003) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,2.5,3.0,3.5,4.0,3.0,2.109160016548039}) - 0.6574498732744615) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,100000000.0,200000000.0,4.0,99999999.88224646,400000000.0,4.0}) - 97959183.0300207) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,9999.999,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0,90.0}) - 1410.8198424711654) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.002,0.003,0.004,0.005,9999.995,9999.996,9999.997,9999.998,10000.381530384688}) - 5000.035253038469) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,400000000.0,100000000.0,100000000.0,100000000.0}) - 115625000.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({25.000058830521493,60.0,80.0,3.25,90.0,100.0,2.0,4.0,5.0,2.0}) - 36.29999529355828) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({25.000058830521493,60.0,80.0,3.25,90.0,100.0,2.0,4.0,5.0,2.0,3.25}) - 35.239665531866336) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,389139843.14684427,100000000.0}) - 114856640.52447404) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,3.5,2.0}) - 0.7799737098300886) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.2604224241965685,1.5,70.32312812754411,2.0,2.5,3.0,3.5,4.0,3.5}) - 12.190771414143043) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.8874862541396014,2.99,3.01,3.05,3.1,3.25}) - 0.14350164950324779) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,3.0}) - 36.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,1.654732131931256,2.5,3.0,105.71131118650902,3.5,4.0}) - 20.346561910126937) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.95,2.99,3.01,3.05,3.1,3.9174287938154095,3.25}) - 0.24332278426894968) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,60.0,80.0,90.0,40.0}) - 21.63265306122449) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,0.003,4.0,5.0,2.0}) - 35.90052892561984) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,99.32299855953764,100.0,100.0,4.0,2.7025347144325655,50.0,2.0}) - 31.051350691620275) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,389139843.14684427,100000000.0,100000000.0}) - 116594260.1056072) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,144647566.04988787,400000000.0,389139843.14684427,100000000.0}) - 111127211.20153931) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,99.32299855953764,50.0,60.0,70.0,80.0,100.0,10.0}) - 28.93229985595376) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,67.843815042106,2.0}) - 32.69611301235235) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.002,0.02555078040559666,0.004,0.005,9999.995,9999.996,9999.997,9999.998,10000.381530384688,9999.998}) - 4958.704171028777) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,99.32299855953764,98.8500430921985,100.0,2.0,100.0,4.0,5.0,50.0,1.0,2.0,99.32299855953764}) - 35.597439699054036) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,80.0,30.0,50.51467930227886,50.0,60.0,70.0,80.0,90.0,100.0}) - 23.75061031712937) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,4.0,1.8777897434625945,3.5}) - 0.9561600381642698) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 23.92218881583286) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({200000000.0,2.75,2.95,2.8874862541396014,2.99,3.01,3.05,3.1,3.25,2.8874862541396014}) - 35999999.46250055) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.002,10.0,20.0,30.0,70.32312812754411,40.0,50.0,60.0,70.0,90.0,100.0,30.0}) - 25.860094010628675) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,20.0,30.0,40.0,60.0,70.0,80.0,90.0,100.0}) - 24.861421052674434) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,99.32299855953764,90.0,99.32299855953764,100.0,100.0,4.0,2.7025347144325655,50.0,2.0}) - 31.37228686051389) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,2.0,60.0,50.51467930227886,70.0,80.0,90.0,2.567418340479382,389139843.14684427}) - 64320627.874154456) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,9999.999,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0}) - 1410.9538941289093) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,80.0,100.0,2.0,3.098997828558572,100.0,4.0,5.0,2.0,2.0,80.0}) - 39.32508351428679) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,4.0,1.8777897434625945,3.5,4.0,3.5,4.0}) - 0.9770368374009845) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,1.1592059112460973,2.5,3.0,3.5,3.1148637087934263}) - 0.7635823461794241) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,4.0,300000000.0,144647566.04988787,400000000.0}) - 109225404.99168535) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,60.0,144647566.04988787,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0}) - 75645481.59026219) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0,60.0}) - 34.67455621301775) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.25,10.0,20.0,80.0,30.0,50.51467930227886,50.0,60.0,70.0,80.0,90.0,100.0}) - 26.35294339147676) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,50.0,60.0,70.0,80.10367424442046,90.0,100.0}) - 22.235021511656846) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,5.5,6.0,6.5,7.5,10.31119115924337,7.5}) - 1.140145856233882) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,2.0,60.0,50.51467930227886,70.0,80.0,2.8874862541396014,100.0,100.0}) - 28.64873518986044) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,7.5,3.25}) - 1.1800000000000002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,3.5,3.5}) - 0.9199605647451327) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,400000000.0,100000000.0,100000000.0,100000000.0,400000000.0}) - 125925925.92592594) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100.03327743022699,50.0,1.0,70.0,80.0,90.0,99.32299855953764,100.0,100.0,4.0,2.7025347144325655,50.0,33.01214550051202,2.0,100.0}) - 35.85579102407819) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,38.50410272414793,100.0,2.0,3.0,4.0,5.0,3.0}) - 32.874658106321) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,5.0,100.0,60.0,90.0}) - 32.68639053254438) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,2.5,3.0,3.1148637087934263,2.5}) - 0.5289573402111716) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.177796669110723,6.0,7.5,3.25}) - 1.6069491672776808) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,326309516.59178865,400000000.0,100000000.0,100000000.0,100000000.0,400000000.0}) - 116828335.3817023) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,9999.999,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0}) - 1518.4905050705463) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.999,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0,58.67263492064459}) - 1517.9533851410936) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,98.8500430921985,100.0,5.0,2.0,50.0,67.843815042106,2.0}) - 29.129814090787253) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,10000.381530384688,60.0,70.0,80.0,90.0,100.0,50.66963449602627,1.0,2.0,3.0,5.0,100.0,60.0,90.0}) - 1237.7215270301292) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,4.0}) - 35.183673469387756) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,326309516.59178865,400000000.0,244992351.53341857,100000000.0,38.50410272414793,100000000.0,100000000.0,400000000.0}) - 116162165.55753273) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({4.086843866079424,1.5,2.0,2.5,3.0,3.1148637087934263,2.5}) - 0.6247685836527103) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.178049360544698,9999.996,200000000.0,3.5,5442.05326006151,4.0}) - 55554697.18181614) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.178049360544698,9999.996,200000000.0,400000000.0,3.5,5442.05326006151,4.0}) - 122447718.30797473) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,400000000.0,100000000.0}) - 100000000.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.999,59.21352436744138,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0,58.67263492064459}) - 1411.0464994768192) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.002,1.2604224241965685,60.0,70.0,80.0,2.0,100.0,4.0,5.0,2.0,2.0,1.2604224241965685}) - 33.470953063978165) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,6.393816185538867,5.5,6.0,6.5,7.5,10.0}) - 1.1762674058523837) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,9999.996,2.0,3.0,5.0,100.0,60.0,90.0,100.0,100.0}) - 1236.3550577777776) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,6.0,400000000.0,100000000.0}) - 130612244.1632653) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99999999.88224646,60.0,70.0,90.0,99.32299855953764,100.0,2.0,100.0,4.0,5.0,50.0,2.0}) - 15277769.671968227) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.9,2.95,2.99,3.05,3.1,2.6779794490678,3.25}) - 0.139002568866525) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,5.5,6.0,6.5,7.5,11.053466235242924,10.31119115924337,7.5}) - 1.4944777178884836) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,3.5,4.0,3.5,2.5}) - 0.6875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,2.5,3.0,2.0465378224234207,3.5,4.0,3.0,3.0}) - 0.6344302161028541) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,80.0,2.0,2.5,3.0,3.5,4.0,50.0,3.5,3.0,3.5}) - 17.222222222222225) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.654732131931256,2.5,3.0,3.5,4.0}) - 0.7769715756818869) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,2.5,3.0,3.1148637087934263,5.5,3.0,1.5}) - 0.8631964156833014) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0,80.0,30.0,20.0}) - 25.214024474887083) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100.03327743022699,50.0,1.0,0.02555078040559666,70.0,80.0,90.0,99.32299855953764,100.0,100.0,4.0,2.7025347144325655,50.0,33.01214550051202,2.0}) - 36.583720808450366) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,389139843.14684427,100000000.0,200000000.0}) - 104349362.14642356) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({25.000058830521493,60.0,80.0,3.25,90.0,100.0,2.0,4.0,50.66963449602627,2.0}) - 34.44195756655047) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({58.00000593868845,0.002,10.0,20.0,30.0,70.32312812754411,40.0,50.0,60.0,70.0,90.0,100.0,30.0}) - 24.61449472659639) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,90.0}) - 1319.9488469387748) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,99.23067676029065,4.0,5.0,2.0,50.0,2.0,50.0,70.0}) - 1238.4511584287968) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,1.860855894192014,2.5,3.0,9999.999,4.0,3.098997828558572,2.0}) - 2186.922910821164) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,20.0,30.0,40.0,50.0,70.0,80.0,90.0,100.0}) - 26.095988953908993) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,4.0,99999999.88224646,400000000.0,105.71131118650902,67156047.58717318,4.0}) - 95802739.92620432) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.9,2.95,3.01,3.05,3.1,3.25,2.9,3.1,3.25}) - 0.12400000000000003) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({25.211386967102,60.0,80.0,4.677927171701372,90.0,100.0,2.0,4.0,51.538678895195,50.66963449602627,2.0}) - 31.96207739046754) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,2.5,3.0,2.722350268490859,2.0465378224234207,3.5,4.0,3.0,3.0,3.0}) - 0.5558592565229733) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,199999999.80664238,300000000.0,326309516.59178865,400000000.0,244992351.53341857,100000000.0,38.50410272414793,100000000.0,100000000.0,400000000.0}) - 116162165.57351269) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,2.0,100.0,4.0,5.0,2.0,50.0,100.0}) - 33.53719008264463) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.4168467628,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0,90.0}) - 1524.914684614995) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,7.5,10.0}) - 1.3199999999999998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,6.393816185538867,3.5}) - 1.4022632623349438) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,53.141327018040194,80.0,90.0,38.50410272414793,100.0,2.0,3.0,4.0,5.0,3.0}) - 31.12803837916219) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.4168467628,30.0,40.0,60.0,70.0,80.0,90.0,90.0,90.0}) - 1640.9982500445042) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,10000.381530384688,60.0,70.0,80.0,90.0,100.0,50.66963449602627,1.0,2.0,3.0,5.0,100.0,60.0,90.0,1.0}) - 1165.9613540724552) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,199999999.1783595,200000000.0,4.0,99999999.88224646,400000000.8417644,4.0,200000000.0}) - 99999999.01723468) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.9,2.95,3.01,3.05,3.1,3.25,6.5}) - 0.7653125000000002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.926034094861598,2.75,2.9,2.95,2.99,3.05,3.1,2.6779794490678,3.25}) - 0.2395621289374367) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({25.000058830521493,60.0,80.0,3.25,90.0,100.0,1.8745816509527913,2.0,4.0,99.15854930176937,50.66963449602627,2.0}) - 36.80862860969345) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,50.0}) - 1413.786840236686) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,10.31119115924337,100.0,1.0,2.0,3.0,5.0,100.0,60.0,90.0,50.0}) - 31.81787085089825) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,2.7025347144325655,60.0,70.0,80.0,90.0,99.32299855953764,100.0,1.3260530476744576,100.0,4.0,5.0,50.0,2.0}) - 34.592457914102184) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({25.000058830521493,60.0,80.0,3.25,90.0,100.0,1.8745816509527913,2.0465378224234207,4.0,99.15854930176937,50.66963449602627,2.0}) - 36.804750457824824) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,29.42670336259685,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0,60.0}) - 25.305900666005247) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,80.0,100.0}) - 35.857988165680474) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,98.8500430921985,100.0,5.0,2.0,50.0,67.843815042106,2.0,50.0}) - 27.838399477610484) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({200000000.0,2.75,2.95,4.0,2.99,3.01,3.05,3.1,3.25,2.8874862541396014}) - 35999999.44025028) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.4576681,400000000.0,400000000.0,100000000.0,100000000.0,100000000.0,200000000.0,200000000.0}) - 94000000.06407355) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,1.5,100.0,60.0}) - 36.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,20.0,30.0,40.0,50.0,70.0,80.0,90.0,100.0,20.0}) - 27.92218881583286) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,4.0}) - 0.72) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,62.42198837120362,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 20.242198837120362) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,3.098997828558572,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,78.68590989376426,90.0,100.0,50.51467930227886,90.0}) - 27.66514052780218) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.0,1.5,8.0,2.0,2.5,3.0,2.0465378224234207,3.5,4.0,3.0,3.0}) - 1.1120251800857117) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,99999999.88224646,400000000.0}) - 104000000.01884057) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,50.82476780440175,100.0}) - 35.404497764194566) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,80.0,90.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,4.0}) - 35.916666666666664) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.594410940003277,60.0,70.0,80.0,90.0,99.32299855953764,2.0,100.0,4.0,5.0,50.0,2.0}) - 36.6313071696898) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.0,1.5,8.0,2.0,2.5,3.0,7.5,2.0465378224234207,3.5,4.0,3.0,3.0}) - 1.4955882679776826) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,7.0,7.5,3.25,3.25}) - 1.346938775510204) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,79.0638059804664,90.0,99.32299855953764,100.0,2.0,81.08813381399271,4.0,5.0,50.0,2.0}) - 34.116315163472) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,400000000.0,389139843.14684427,100000000.0,200000000.0,400000000.0}) - 120675892.75866845) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.4168467628,30.0,40.0,60.0,70.0,80.0,90.0,90.0}) - 1775.8422670486193) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({105.71131118650902,20.0,30.0,40.0,2.0,60.0,50.51467930227886,70.0,80.0,90.0,100.0}) - 27.660636035022677) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,9999.997,100.0,2.0,100.0,4.0,5.0,2.0,2.0,80.0}) - 1645.8672727272728) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,29.42670336259685,2.109160016548039,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0,70.0}) - 28.01919960660627) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,9999.999,30.0,40.0,60.0,70.0,80.0,100.0,90.0,90.0}) - 1518.1149679001876) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,400000000.0,100000000.0,100000000.0}) - 118367346.93877551) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.883843468527003,2.95,2.99,3.01,3.05,3.1,3.9174287938154095,3.25}) - 0.23340845326694945) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,4.0,5.0,3.0}) - 35.70247933884297) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,50.66963449602627,1.0,2.0,3.0,5.0,100.0,60.0,3.01,90.0,80.0}) - 31.85846319949816) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,2.7025347144325655,60.0,70.0,80.0,90.0,99.32299855953764,100.0,1.3260530476744576,100.0,4.0,98.8500430921985,5.0,50.0,2.0}) - 35.26206746191375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.99,3.01,3.05,2.0465378224234207,3.25}) - 0.2634758781594931) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,3.0,1.0,2.0,3.0,4.0,5.0,3.0}) - 32.56944444444445) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,300000000.0,400000000.0,389139843.14684427,100000000.0,100000000.0}) - 131523307.19114071) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,300000000.4576681,200000000.0,300000000.0,99999999.88224646,400000000.0,400000000.0}) - 106122449.0548579) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.3852814948719425,2.95,3.01,3.05,3.1,1.654732131931256,2.9,3.1,3.25}) - 0.3309980922475523) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,9999.997,2.0,2.5,3.0,3.1148637087934263,2.5}) - 2448.3006994404573) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({200000000.0,4.0,199999999.76194745,99999999.88224646,400000000.0,400000000.0}) - 122222221.81731178) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,99.23067676029065,40.0,50.0,60.0,70.0,80.10367424442046,90.0,100.0}) - 23.933435100471108) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.999,59.21352436744138,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0,58.67263492064459,9999.999}) - 2433.335289914107) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,62.42198837120362,30.0,40.0,50.0,60.0,70.0,80.0,67.843815042106,90.0,100.0}) - 19.03023168705038) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,300000000.4576681,2.95,2.99,3.01,3.05,3.1,3.9174287938154095,3.25}) - 49586776.43238434) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,70.0,20.0,30.0,40.0,50.0,70.0,50.66963449602627,80.0,90.0,100.0,20.0}) - 24.87935447185853) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,99.32299855953764,98.8500430921985,100.0,2.0,144647566.04988787,4.0,5.0,51.57851300983106,50.0,1.0,2.0,99.32299855953764,100.0}) - 15179059.62823173) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,4.0,3.5,4.0}) - 1.0236348389340075) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,9999.999,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0,90.0,20.0}) - 1318.3089356001383) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,2.0,60.0,50.51467930227886,30.0,70.0,14.387809343061292,80.0,90.0,100.0}) - 26.17723916326813) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,80.0,100.0,100.0}) - 36.326530612244895) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,339837993.58006203,326309516.59178865,400000000.0,100000000.0,100000000.0,100000000.0,400000000.0}) - 121746606.19405563) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.584596847562561,1.8521371502623292,2.5,2.75,2.95,2.99,3.01,3.05,3.2759247382344467,3.9174287938154095,3.25}) - 0.36705812440269187) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,70.32312812754411,2.0,100.0,4.0,5.0,2.0,50.0,2.0,2.0}) - 1238.8681144166442) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,400000000.0,80.0,90.0,99.32299855953764,2.0,100.0,4.0,5.0,50.0,2.0}) - 66115694.34176863) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,9999.996,200000000.0,3.885611721306203,3.5,4.0}) - 55554999.2843549) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.8521371502623292,100000000.0,6.0,7.5,3.25}) - 31999998.511829026) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,2.5,3.0,3.5,4.0,3.098997828558572,3.098997828558572}) - 0.452815794749038) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.99,3.01,2.2605696812961398,3.05,3.1,3.9174287938154095,3.25,2.9}) - 0.2547382593766058) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,300000000.0,9999.996,2.0,3.0,5.0,100.0,60.0,90.0,100.0,100.0}) - 37333237.24448001) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100.03327743022699,50.0,1.0,0.02555078040559666,70.0,80.0,999999999.7,99.32299855953764,100.0,100.0,3.460317038362515,2.7025347144325655,50.0,33.01214550051202,2.0}) - 124444438.25993934) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,9999.996,200000000.0,3.885611721306203,2.75,3.5,4.0}) - 48979183.03544443) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,6.393816185538867,5.5,5.4540673533728095,6.5,7.5,10.0}) - 1.2431163013577538) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,7.5,3.25,7.0}) - 1.125) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.8521371502623292,139587520.52129036,6.0,7.5,3.25}) - 44668005.07864195) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({14.387809343061292,6.0,6.5,7.0,7.5,3.25,3.25}) - 2.389846423356946) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,3.0}) - 37.19008264462811) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,80.0,90.0,99.32299855953764,2.0,100.0,4.0,5.0,50.0,2.0}) - 71999991.35354) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,3.2503848093472767,3.0,3.5,4.0,3.098997828558572,3.647324850433938}) - 0.4406994965350757) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.48530966653453,70.0,80.0,90.0,100.0,2.0,99.23067676029065,4.0,5.0,2.0,3.1,2.0,70.0}) - 1238.685955676206) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,80.0,100.0}) - 23.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100.03327743022699,50.0,1.0,70.0,90.0,99.32299855953764,100.0,100.0,4.0,2.7025347144325655,50.0,33.01214550051202,2.0,100.0}) - 36.90297112677287) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,60.0,144647566.04988787,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,90.0}) - 70900852.78755939) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({80.3476701265547,20.0,30.0,40.0,60.0,80.0,90.0,40.0}) - 22.543458765819338) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,4.379225312715933,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0}) - 38.38506455727367) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,326309516.59178865,20.0,9999.999,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0,10.0}) - 43285847.04064225) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({105.71131118650902,20.0,10000.381530384688,40.0,2.0,60.0,50.51467930227886,70.0,80.0,90.0,100.0,100.0}) - 1517.8607061630946) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,20.0,30.0,40.0,50.0,70.0,80.0,90.0}) - 24.902736019791075) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,59.513894124236124,9999.999,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0,58.67263492064459}) - 1411.0429448051414) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,1.2604224241965685,80.0,90.0,100.0,1.0,2.0,4.0,5.0,3.0,5.0}) - 35.468026220541894) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,50.0,2.0,60.0}) - 30.402366863905325) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.0,1.5,8.0,2.5,3.0,2.0465378224234207,3.5,4.0,3.0}) - 1.2606581296617123) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,3.01,3.05,3.1,3.25}) - 0.16656249999999995) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,50.0,5.0,2.0}) - 32.24999999999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,-0.5922881227694902,90.0,100.0,2.0,0.003,4.0,5.0,2.0}) - 36.46577401023079) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.594410940003277,60.0,70.0,80.0,90.0,99.32299855953764,2.0,100.0,4.0,5.0,50.0,2.0,4.0}) - 37.38197768967104) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,60.0,70.0,80.0,90.0,100.0,120.91036269918699,90.0,20.0}) - 30.909196891598913) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,3.5,6.393816185538867,3.5}) - 1.2726810695770752) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.002,1.2604224241965685,60.0,70.0,80.0,2.0,100.0,4.0,5.0,2.0,2.0,1.2604224241965685,2.0}) - 32.093593143271335) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0}) - 27.30975113546599) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.60559550547181,80.0,90.0,100.0,2.0,3.0,4.0,5.0}) - 33.46152697556838) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,32.93494749919239,60.0,70.0,80.0,90.0,100.0}) - 24.63313156260095) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,4.0,99999999.4829637,400000000.0}) - 111999999.4427258) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,3.0,1.0,2.0,3.0,4.0,5.0,3.0,70.0}) - 33.301775147928986) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,9999.999,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0,40.0}) - 1411.7315427820045) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,70.0,80.0,3.098997828558572,100.0,1.0,2.0,4.0,5.0,80.0,4.0}) - 36.10752084061499) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,9999.999,30.0,39.72365572880419,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0,40.0,60.0}) - 1318.6897011158217) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.638157948698464,8.0,5.5,5.102062277753876,6.5,7.5,6.374548256709973,6.0}) - 1.016791003782204) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,1.654732131931256,2.5,3.0,105.71131118650902,3.5,4.0,4.0}) - 18.514941370933006) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({200000000.0,2.95,4.0,1.3963374489270861,2.99,3.01,3.05,3.1,3.25,2.8874862541396014}) - 35999999.46732353) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,400000000.0,100000000.0,100000000.0,100000000.0,100000000.0,400000000.0}) - 124000000.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,30.0,40.0,60.0,70.0,80.0,90.0,100.0,90.0,90.0}) - 27.89661883239646) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,6.393816185538867,3.5}) - 1.286140526906163) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,6.0,6.5,7.5,10.0,6.0}) - 1.1666666666666667) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.1571959032806265,1.5,2.0,2.5,3.0,3.570456180926328,4.0,3.0,2.109160016548039}) - 0.6614038821065922) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,-0.5922881227694902,90.0,100.0,2.0,4.0,70.32312812754411,2.0}) - 33.544438501976245) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,3.5,4.0,1.7313745506292364,2.0}) - 0.7283086358785091) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,100.0,2.0,4.0,5.0}) - 33.90625) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.002,0.02555078040559666,0.004,0.005,9999.995,9999.996,9999.997,9999.998,10000.381530384688,9999.998,10000.381530384688}) - 4861.159339560888) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,100.0,1.0,3.6710389724234243,2.0,3.0,4.0,5.0,100.0}) - 38.444080085631384) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,3.3415991824925753,4.0,99999999.88224646,400000000.0}) - 111111110.30846159) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,3.098997828558572,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,78.68590989376426,90.0,100.0,50.51467930227886,90.0,90.0}) - 28.440696008399048) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.005,5.102062277753876,2.75,2.9,3.01,3.05,3.1,3.25}) - 0.7591913923596171) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.0,60.0,80.0,99.16524130646621}) - 23.129018988810806) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,53.613922661455135,20.0,30.0,50.0,70.0,80.0,90.0}) - 23.20099568710918) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.258841556073,30.0,40.0,60.0,70.0,80.0,90.0,90.0,90.0}) - 1640.974110360143) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,60.0,144647566.04988787,80.0,100.0,2.0,100.0,4.0,5.0,2.0,90.0}) - 75645481.59026219) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,2.1571959032806265,100.0,1.0,2.0,3.0,4.0,5.0,80.0,100.0,100.0}) - 37.78308604871178) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,60.0,80.0,90.0,40.0,40.0}) - 20.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,2.5,3.0,3.5,4.0,3.098997828558572,2.8291309936210185,2.0}) - 0.5337333543671943) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.95,50.0,70.0,80.0,3.098997828558572,100.0,1.0,2.0,4.0,5.0,80.0,4.0}) - 35.41326403968343) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.002,10.0,20.0,30.0,70.32312812754411,40.0,50.0,-0.09437586975959777,60.0,70.0,90.0,14.231251393425142,100.0,30.0}) - 27.119916039575095) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,100000000.0,70.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0}) - 15277771.041666666) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,29.42670336259685,40.0,2.0,60.0,50.51467930227886,70.0,14.387809343061292,80.0,90.0,100.0,29.42670336259685}) - 26.27278860283532) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({25.211386967102,60.0,80.0,4.677927171701372,1.7313745506292364,100.0,2.0,4.0,51.538678895195,50.66963449602627,2.0}) - 30.663577469424208) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,80.0,2.0,2.5,3.5,4.0,50.0,3.5}) - 21.456790123456795) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,60.0,144647566.04988787,80.0,1.7313745506292364,90.0,100.0,1.7006181621934007,100.0,4.0,5.0,2.0}) - 70900854.88384357) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,60.0,144647566.04988787,80.0,1.7313745506292364,90.0,100.0,2.229317625444934,100.0,4.0,5.0,2.0}) - 70900854.87132998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,1.4802366115292032,3.5,4.0,1.8777897434625945,3.5,4.0,3.5,2.75,4.0}) - 0.8270368374009841) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.758103001708571,3.01,3.05,3.1,2.548780722396582,3.25}) - 0.19397395310738155) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({40.630304346043914,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 35.07187567388067) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.002,0.003,0.004,0.005,9999.995,9999.997,9999.998,9999.999}) - 4938.268765432099) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,2.6828796173458698,5.0,2.0}) - 35.2050036743128) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,70.0,20.0,30.0,40.0,100.03327743022699,70.0,50.66963449602627,80.0,90.0,100.0,20.0}) - 26.68872758986936) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,3.1,80.0,90.0,100.0}) - 27.689999999999998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,53.141327018040194,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,50.0,2.0,60.0}) - 29.91536049832238) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({4.379225312715933,50.0,60.0,70.0,80.0,90.0,38.50410272414793,100.0,2.0,3.0,4.0,5.0,3.0}) - 33.02603587903926) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,400000000.0,100000000.0,400000000.0}) - 128000000.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,99.95995609950876,70.32312812754411,2.0,100.0,4.0,5.0,2.0,50.182452590690275,2.0,2.0}) - 1238.8668485616197) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,99.32299855953764,100.0,2.0,100.0,4.0,5.0,50.0,2.6653430663066757}) - 33.13941526500685) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,2.5,3.0,3.5,3.5,3.0}) - 0.6122448979591837) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,400000000.0,25.211386967102,100000000.0,100000000.0,400000000.0}) - 135802466.64578894) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,1.654732131931256,2.5,3.0,105.71131118650902,3.5,4.0,4.0,4.0}) - 16.982783136085274) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,5.5,6.0,6.5,7.5,10.0,6.0,5.5}) - 1.21875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.242693917204057,6.0,6.5,7.0,7.5,3.25}) - 1.1127346850657651) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,2.7025347144325655,60.0,70.0,90.0,99.32299855953764,1.3260530476744576,100.0,4.0,98.8500430921985,5.0,50.0,2.0,60.0}) - 33.220488963262426) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.4168467628,30.0,40.0,1.3963374489270861,70.0,90.0,90.0}) - 1935.4728794445953) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,1.0,0.02555078040559666,70.0,80.0,90.0,99.32299855953764,100.0,100.0,4.0,2.7025347144325655,50.0,33.01214550051202,2.0}) - 35.65322595300433) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,300000000.0,400000000.0,400000000.0,25.211386967102,100000000.0,100000000.0,400000000.0}) - 149999996.84857664) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,100.0,5.0,2.0,50.0,2.0,50.0}) - 1413.0057751479287) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,3.0,3.5,4.0}) - 0.8151399972419936) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,99.32299855953764,90.0,99.32299855953764,100.0,100.0,4.0,2.7025347144325655,50.0,2.0,2.0}) - 33.737303112234606) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,3.1,80.0,90.0,100.0,40.0}) - 25.859504132231404) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.2759247382344467,0.005,5.102062277753876,2.75,2.9,3.01,3.05,3.1,3.25}) - 0.702073112295431) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({200000000.0,2.75,2.95,4.0,2.99,3.01,2.618193011893701,2.599018233941602,3.05,3.1,3.25,2.8874862541396014}) - 30555555.094379205) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,400000000.0,100000000.0,100000000.0,100000000.0,100000000.0,400000000.0,100000000.0}) - 120661157.02479339) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0,90.0,59.513894124236124,30.0}) - 24.107495440774155) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,0.001,2.0,3.0,4.0,5.0}) - 36.24991666666667) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,144647566.04988787,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,5.0}) - 75645483.11804003) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10000.702716116059,30.0,40.0,60.0,79.01689679113485,70.0,80.0,90.0,100.0,90.0}) - 1411.0497560404149) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({200000000.0,2.75,2.95,4.0,4.179530756791099,3.01,2.618193011893701,2.599018233941602,3.05,3.1,3.25,2.8874862541396014}) - 30555555.077857938) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99999999.88224646,60.0,70.0,90.0,99.32299855953764,100.0,100.0,4.0,5.0,50.0,2.0}) - 16528916.008255633) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.99,3.01,2.2605696812961398,3.05,79.01689679113485,3.1,3.9174287938154095,3.25,2.9}) - 10.800293053473451) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0,70.0}) - 35.26627218934911) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100.03327743022699,50.0,1.0,0.02555078040559666,70.0,80.0,999999999.7,99.32299855953764,100.0,100.0,3.460317038362515,2.7025347144325655,50.0,33.01214550051202,2.0,2.0}) - 117187494.54643108) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,3.5,3.5,1.5}) - 0.9207873536903016) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.0,2.5,3.0,3.1148637087934263,2.5,3.1148637087934263,3.5}) - 0.5535533251937632) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.002,10.0,5.242693917204057,20.0,30.0,70.32312812754411,40.0,50.0,60.0,70.0,90.0,100.0}) - 27.92320285086167) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,29.42670336259685,2.75,2.9,2.95,2.99,3.01,3.5,3.05,3.1,3.9174287938154095,3.25}) - 4.024670947149305) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({4.379225312715933,50.0,60.0,70.0,80.0,90.0,38.50410272414793,100.0,2.0,3.0,4.0,5.362056646017906,3.0}) - 33.00032771482496) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,2.5,2.0,100.0,4.0,5.0,2.0,50.0,2.0,50.0,70.0}) - 1239.310986666667) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.75,2.9,2.95,2.99,3.05,3.1,2.6779794490678,2.261848827607997,3.25}) - 0.21187729234432628) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.0,4.0,99999999.4829637,400000000.0}) - 137499998.93962955) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,2.5,3.0,3.1148637087934263,2.5,3.1148637087934263,3.5}) - 0.5059119453987675) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 99722991.33074795) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.1346065862586165,2.0,50.0,67.843815042106,2.0}) - 32.683751183002066) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.638157948698464,8.0,5.5,5.102062277753876,6.5,7.5,6.0}) - 1.113442421250734) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.999,58.62454182829088,30.0,40.0,60.0,58.67263492064459,80.0,90.0,100.0,90.0,90.0,58.67263492064459,9999.999}) - 2433.347309965927) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,50.0,50.0}) - 1320.5610918367345) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({110.30519609109437,30.0,40.0,50.0,80.0,99.16524130646621,50.0}) - 26.44415304449969) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,400000000.0,400000000.0,389139843.14684427,100000000.0,100000000.0}) - 148189973.85780737) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.258841556073,40.0,60.0,70.0,80.0,90.0,90.0,389139843.14684427,90.0,389139843.14684427}) - 101314244.1572813) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({40.630304346043914,60.0,70.0,80.0,90.0,100.0,1.0,59.705289138598424,2.0,3.0,4.0,5.0}) - 33.67291539937954) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({99.22188815832858,20.0,30.0,40.0,60.0,70.0,400000000.0,80.0,90.0,100.0}) - 71999988.21556222) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,9999.996,70.0,200000000.0,3.885611721306203,2.75,3.5,4.0}) - 43749684.82401214) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,9999.996,200000000.0,3.885611721306203,3.5,29.42670336259685,4.0}) - 48979181.94659938) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.258841556073,30.0,58.978197336195244,40.0,59.21352436744138,60.0,70.0,80.0,90.0,90.0,90.0}) - 1424.8822643606) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,58.67263492064459,90.0,100.0,30.0}) - 23.222719576720383) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,0.003,3.3,3.3,3.3,999999999.7,3.3,3.3}) - 90702947.53422678) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,50.182452590690275,2.0,100.0,2.6828796173458698,5.0,2.0,2.0}) - 34.21833403567675) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,99.32299855953764,50.0,60.0,70.0,80.0,100.0,10.0,50.0}) - 26.544429609210344) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,70.0,80.0,3.098997828558572,100.0,1.0,2.0,3.0,4.0,5.0,70.0,70.0}) - 35.158416847620124) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,9999.999,30.0,40.0,60.0,58.67263492064459,84.40204386712122,90.0,99.89458821788836,90.0,90.0}) - 1518.4308296249217) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.638157948698464,8.0,3.638157948698464,5.102062277753876,120.91036269918699,7.5,6.0}) - 28.227910123264127) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,69.76449063943501,80.0,90.0,50.82476780440175,2.0,100.0,99.32299855953764,50.0,2.0}) - 25.892377506916578) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.2503848093472767,3.0,3.5,4.0,3.098997828558572,5.4540673533728095}) - 0.6731946743155302) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,1.4802366115292032,3.5,4.0,1.8777897434625945,3.5,4.0,3.5,4.0,3.5}) - 0.9255176118191311) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.638157948698464,50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0,60.0}) - 35.82545649398379) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,50.0}) - 31.785714285714285) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,399999999.0387684,400000000.0,25.211386967102,100000000.0,3.098997828558572,400000000.0}) - 149999997.07283837) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,2.7025347144325655,3.3,3.3,3.3,3.3,3.3,3.3,1.794094515132357,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 99722991.34240097) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.8874862541396014,3.01,3.05,3.1,3.25}) - 0.154384413069185) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,3.05,3.1,3.25}) - 0.18163265306122442) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,50.0,70.0,100.0,70.0}) - 1101.4185743944638) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({105.71131118650902,20.0,10000.381530384688,40.0,2.0,60.0,50.51467930227886,70.0,80.10836599247982,90.0,100.0,100.0}) - 1517.859201079865) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,100.0,1.0,2.0,3.0,4.0,5.0,100.0,70.0,99.9303716082188,100.0}) - 35.86295315243833) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.1148637087934263,50.0,60.0,39.45340482232082,70.0,80.0,100.0,2.0,100.0,4.0,5.0,50.0,2.0,60.0,4.0}) - 31.2307009044541) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,2.5,3.0,3.5,4.0,4.179530756791099,3.5}) - 0.7943783443067702) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,1.5,3.0210265973324804,80.0,2.0,2.5,3.0,3.5,4.0,50.0,3.0,3.5}) - 17.235527038962985) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,144647566.04988787,400000000.0,389139843.14684427,100000000.0,144647566.19469765,400000000.0}) - 115765893.50014517) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,7.5,3.25,7.0,3.25}) - 1.4081632653061225) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.05,8.0,6.393816185538867,5.5,6.0,6.5,10.0}) - 1.4354510793217712) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,9999.999,70.0,80.0,90.0,100.0,2.0,100.0,4.0,5.0,2.0,50.0,2.0,90.0,2.0}) - 1238.6932088888889) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.0,1.4802366115292032,3.5,4.0,1.8777897434625945,3.5,1.4802366115292032}) - 0.958580044915796) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,389139843.14684427,99999999.88224581,200000000.0,100000000.0}) - 104553100.50273387) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,90.0,2.0,100.0,4.0,5.0,2.0,50.0}) - 32.84) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,7.938358175576009,30.0,40.0,50.0,60.0,3.1,80.0,90.0,100.0,40.0,90.0}) - 28.210294094041938) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,105.71131118650902,20.0,10803.4168467628,30.0,40.0,60.0,70.0,80.0,90.0,90.0,90.0,60.0}) - 1525.3880573960598) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.2503848093472767,0.002,0.003,0.004,0.005,9999.995,9999.996,9999.997,9999.998,9999.999}) - 4999.672061519065) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,144647566.04988787,400000000.0,389139842.3890193,100000000.0}) - 111127211.0778128) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({400000000.0,50.0,60.0,144647566.04988787,80.0,90.0,112.4822840591051,2.0,100.0,4.0,5.0,2.0}) - 75645481.24353208) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.109160016548039,1.5,2.0,2.5,3.0,3.5,4.0,4.179530756791099,2.8204083338458177}) - 0.7328242069723474) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,40.0,50.0,60.0,70.0,80.0,90.0,2.95,90.95808127061625}) - 24.66869938475222) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({8.0,5.5,6.5,7.5,11.053466235242924,10.31119115924337,7.5}) - 1.502991304997203) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,99.32299855953764,100.0,2.0,100.0,3.023954871009962,5.0,50.0,2.0}) - 33.27538825159948) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,300000000.0,400000000.0,389139843.14684427,99999999.88224581,200000000.0,100000000.0,200000000.0}) - 94687384.1786254) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,-0.5922881227694902,90.0,100.0,2.0,0.003,4.0,5.0,2.0,-0.5922881227694902}) - 36.438928490807506) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.0,1.0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,-2.0,3.0,4.0}) - 2.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.1,2.2,3.3,4.4}) - 1.1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1e-308}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,1.00000001,1.00000002,1.00000003}) - 1.0000000050247593e-08) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.0,2.0,2.0,3.0}) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({-1.0,1.0,-1.0,1.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0}) - 28.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,49.463845425693606,60.0,70.0,80.0,90.0,100.0}) - 25.053615457430645) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 24.678422558135992) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0,70.0}) - 23.64802237170511) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,60.0,70.0,80.0,90.0,100.0}) - 26.05361545743064) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0}) - 26.91358024691358) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,4.0,5.0}) - 36.15064203930627) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,49.773450447024764,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 33.24815628104338) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0,100.0}) - 28.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.291030709725918,2.0,2.5,2.4994321923502856,3.0,3.5,4.0}) - 0.6991269915825057) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,70.0,80.0,126.29073532991643,100.0}) - 32.68143938140266) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,49.773450447024764,90.0,1.0,2.0,3.0,4.0,5.0}) - 31.55152483033263) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,3.0,3.5,4.0}) - 0.8400000000000001) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3,3.3}) - 86776859.19173552) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3}) - 99722991.33245856) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,7.0,8.0}) - 0.72) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,2.554806632198653,3.3,3.3,828201982.1781489,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7}) - 157532143.00124812) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.996,30.0,40.0,50.0,1.0,70.0,80.0,90.0,100.0}) - 1790.57928) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,3.0,3.5,4.0,3.5,3.0}) - 0.6734693877551019) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,2.991231774154428,30.0,30.0,300000000.0,49.463845425693606,60.0,70.0,80.0,90.0,100.0}) - 49586768.223883025) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7}) - 104938271.22716048) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,70.0,14.481622339226005,80.0,126.29073532991643,100.0}) - 32.8392508183964) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,141.81774959304587,1.0,2.0,3.0,4.0,5.0,50.0,4.0}) - 37.25896100462294) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,100.0,7.0,8.0,5.5}) - 26.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,9999.995,60.0,60.0,100.0,80.0,90.0,100.0,50.0}) - 1518.8881249999997) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,1.1922955283247763,2.991231774154428,30.0,30.0,300000000.0,49.463845425693606,60.0,70.0,80.0,90.0,100.0}) - 45833326.060453154) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,49.463845425693606,999999999.7,70.0,80.0,90.0,100.0}) - 179999990.15672308) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,90.0,100.0,70.0}) - 23.678422558135985) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.002,0.003,0.004,0.005,9999.995,9999.672036776217,9999.997,9999.999}) - 4938.228523058792) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,2.95,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 94999999.65975001) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,141.81774959304587,1.0,2.0,3.0,4.0,5.0,50.0,4.0,60.0}) - 36.010541181553094) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,8.0}) - 0.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0,10.0}) - 29.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,100.0,7.0,8.0,5.5}) - 29.919999999999998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,3.01,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 27.02396694214876) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0,10.0,10.0,60.0}) - 28.33333333333333) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,8.0,5.5}) - 0.8800000000000001) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.63468316584145,10.0,1.1922955283247763,2.991231774154428,30.0,30.0,300000000.0,103.9388706194337,49.463845425693606,60.0,70.0,80.0,90.0,102.81009280257041,100.0}) - 37333326.035279825) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,3.7609253911481755,8.0,6.0}) - 0.8864610241892942) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.9,2.95,2.99,3.01,3.05,3.1,3.25}) - 0.13906249999999987) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,30.0,49.463845425693606,70.0,80.0,100.0}) - 24.963610764200787) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,90.0,1.1922955283247763,141.81774959304587,1.0,2.0,4.0,4.367504348746251,50.0,4.0,60.0}) - 35.68033015880211) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,3.0,7.0,4.0,3.5,3.0,1.5,7.0}) - 1.5925925925925926) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({9.657809016182954,30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0,10.0,10.0,60.0}) - 28.361849248651424) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3,3.3}) - 94999999.65799998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,9999.996,6.5,7.0,8.0}) - 2775.943333333333) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,3.4908151790033317,5.0}) - 36.193074107722644) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.1922955283247763,20.0,30.0,30.0,49.463845425693606,70.0,80.0,126.29073532991643,100.0}) - 33.55133611934589) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,100.0,7.9233132434288756,8.0,400000000.0}) - 111111104.03203815) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.7,70.0,80.0,90.0,100.0}) - 179999990.8815046) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.3489045785395586,2.0,103.9388706194337,3.5,4.5756777070295165,3.5,3.0,3.5}) - 19.940404510367912) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,1.5695280358818793,141.81774959304587,1.0,2.0,3.0,4.0,5.0,50.0,4.0,60.0}) - 36.25349537680245) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3}) - 99722991.07670318) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,3.7609253911481755,8.0,6.0,3.7609253911481755}) - 1.118881504931208) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,200000000.0,300000000.0,400000000.2827599}) - 124999998.57068998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,49.773450447024764,70.0,80.0,100.0}) - 22.0007981580989) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,2.554806632198653,3.3,3.3,828201982.1781489,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7}) - 164538177.78248534) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.3489045785395586,2.0,103.9388706194337,3.5,4.5756777070295165,4.852743487198158,3.5,3.0,3.5}) - 18.13345019604272) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,3.5,4.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,300000000.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3,3.3}) - 107438015.95867766) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,4.0,5.0,80.0,2.0}) - 37.88312476357196) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,49.463845425693606,999999999.7,80.0,90.0,100.0}) - 197530853.7811396) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({44.07742079869188,13.516948827900045,20.0,30.0,40.0,50.0,60.0,70.0,90.0,100.0,70.0}) - 22.3475727581329) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,3.812083947456091,2.0,3.5,4.0}) - 0.9699334315929745) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.63468316584145,10.0,1.1922955283247763,2.991231774154428,30.0,30.0,300000000.0,103.9388706194337,49.463845425693606,60.0,70.0,80.0,90.0,102.81009280257041,100.0,49.463845425693606}) - 35156243.199258864) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.7,70.0,80.0,90.0,34.99098147402468,100.0}) - 165289248.07907847) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,4.0,5.0,80.0,2.0,60.0}) - 37.993796532800495) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,3.0,3.5,4.0,2.0}) - 0.8333333333333334) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,1.5695280358818793,141.81774959304587,1.0,2.0,3.0,4.0,5.698041136164186,50.0,4.0,60.0,1.1922955283247763}) - 36.17399629417196) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,49.463845425693606,70.0,80.0,126.29073532991643,100.0}) - 33.35336123802786) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.3489045785395586,2.0,103.9388706194337,3.5,4.5756777070295165,34.99098147402468,3.5,3.0,3.5}) - 21.271793043530586) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,1.1922955283247763,2.991231774154428,30.0,30.0,300000000.0,49.463845425693606,60.0,70.0,80.0,100.0,10.0,2.991231774154428}) - 42603545.01019405) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0,70.0,60.0}) - 21.90957748707665) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,400000000.0,3.3,3.3,3.3,3.3,3.3,3.707326232303277,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 125999999.37492676) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.3489045785395586,2.0,3.5,4.5756777070295165,3.5,3.0,3.5}) - 0.7807034446372112) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,5.5,70.0,80.0,49.773450447024764,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 33.78864736901951) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.00164010145102,100.0,70.0,60.0}) - 21.909691383010752) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.3489045785395586,2.0,3.5,4.5756777070295165,3.5,3.0,3.5,4.276728904550143,3.5}) - 0.7663239795016257) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,8.0,5.5,8.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,3.0,3.5,4.384425501449117,4.0,2.0}) - 0.8974042502415195) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0,10.0}) - 26.91358024691358) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,41.72055257930202,49.773450447024764,70.0,80.0,100.0}) - 20.48371234490826) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.3263922,999999999.7,70.0,80.0,90.0,100.0}) - 297520646.0295535) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,300000000.0,7.0,8.0,5.5,8.0}) - 73469386.122449) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,9999.996,3.0,3.5,4.0}) - 2776.998888888889) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,3.01,19.39446047337968,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 27.074011531125645) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.003,0.005,9999.995,9999.996,9999.997,9999.998,9999.999}) - 4687.4971875) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.374298258979812,6.0,6.5,3.7609253911481755,8.0,6.0}) - 0.8522288113052728) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,70.0,14.481622339226005,68.90458824240277,126.29073532991643,100.0,30.0}) - 30.0923205611001) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.573502645381446,60.0,100.0,80.0,90.0,100.0,10.0}) - 28.942649735461863) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3,3.3}) - 86776858.83347109) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,200000000.0,60.0,70.0,80.0,90.0,100.87293165430344,1.0,2.0,3.0,4.0,5.0}) - 30555549.08509818) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({19.39446047337968,3.3,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3}) - 99722990.98753719) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,90.0,1.1922955283247763,141.81774959304587,1.0,4.0,4.367504348746251,50.0,4.0,60.0}) - 34.821807622579605) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.5095597082878824,2.9,2.95,2.99,3.01,3.05,3.1,3.25}) - 0.1874726358092026) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,3.4834417459133986,2.99,3.01,3.05,3.1,3.25}) - 0.20418021823917482) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,3.0,3.5,4.384425501449117,4.0,2.0,13.215774418640153,4.384425501449117}) - 2.1794240602369634) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3}) - 94999999.65800002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,80.0,49.773450447024764,90.0,1.0,2.0,3.0,4.0,5.0}) - 33.477345044702474) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,3.7609253911481755,6.0,6.5,3.7609253911481755,8.0,6.0,3.7609253911481755,8.0}) - 1.3354597316735153) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.01,19.39446047337968,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 25.75955395266203) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,4.0,5.0,80.0,1.295110146595121,60.0}) - 38.0378521486383) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,400000000.0,3.3,3.3,3.3,3.3,3.3,3.707326232303277,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 125999999.37292674) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,1.1922955283247763,2.991231774154428,2.598294464930153,30.0,30.0,300000000.0,49.463845425693606,60.0,70.0,80.0,100.0,10.0,2.991231774154428}) - 39795913.78329694) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,70.0,14.481622339226005,80.0,126.29073532991643,100.0,126.29073532991643}) - 37.120024547676024) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.374298258979812,6.0,6.5,3.7609253911481755,6.616788613279709,8.0,6.0,3.7609253911481755,6.5}) - 0.9710918090973968) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,60.0,70.0,80.0,49.773450447024764,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 36.10612087058541) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,3.865073243449636,2.0,2.5,3.0,3.5,4.0}) - 0.7793967236877106) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({9.657809016182954,30.0,40.0,60.0,100.0,80.0,2.991231774154428,10.0,10.0,60.0}) - 27.788076736773007) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,4.0,5.0,9999.997,1.295110146595121,60.0}) - 1167.4240199552496) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,70.0,80.0,49.773450447024764,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 37.291581862514846) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,3.5,4.0,2.0}) - 0.9199999999999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.5095597082878824,2.9,1.1922955283247763,2.99,1.7570485411520125,3.05,3.1,3.25}) - 0.5275427434858431) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.3489045785395586,2.0,103.9388706194337,3.5,4.604612018193867,1.295110146595121,4.852743487198158,3.5,3.0,3.5,2.3489045785395586}) - 16.668403824549923) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.0,60.0,100.0,80.0,2.95,100.0,100.0}) - 30.705000000000002) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,80.0,90.0,1.1922955283247763,1.5695280358818793,141.81774959304587,1.0,2.0,3.0,4.0,5.698041136164186,50.0,4.0,60.0,1.1922955283247763,50.0}) - 36.17399629417196) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.865073243449636,3.3,3.3,999999999.7,2.869383821118558,3.3,3.3}) - 86776858.83291544) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,49.463845425693606,60.0,70.0,80.0,90.0,100.0}) - 22.288414144976098) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3}) - 94999999.65104386) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,3.4834417459133986}) - 24.330078383544645) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,90.0,2.0,103.9388706194337,3.5,4.5756777070295165,4.852743487198158,3.5,3.0,3.5}) - 29.973082451340282) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.374298258979812,6.0,6.5,3.7609253911481755,6.616788613279709,8.0,6.0,90.00164010145102,3.7609253911481755,6.5,6.616788613279709,6.5}) - 12.824837706223969) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({19.39446047337968,3.3,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3}) - 104938270.84475595) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,2.0,3.0,4.0,5.0,80.0,1.295110146595121,60.0}) - 37.75735142197839) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.022850297755034,2.0,3.0,3.5,4.0,2.0}) - 0.7931203717034653) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,400000000.0,3.3,3.3,3.3,3.3,3.3,3.707326232303277,3.3,3.3,3.3,3.3,90.00164010145102,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 120634919.24844477) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,90.0,8.0,5.5,8.0}) - 20.408163265306126) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,7.825146418506947,7.5,8.0}) - 0.8875244030844911) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,70.0,14.481622339226005,80.0,126.29073532991643,100.0,126.29073532991643,20.0,30.0}) - 35.51389853791792) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.99,3.01,3.05,3.1,3.25}) - 0.18571428571428564) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({30.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0,100.0}) - 24.19753086419753) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,90.0,2.2180852449630564,2.0,103.9388706194337,3.5,4.5756777070295165,4.852743487198158,3.5,3.0,3.5}) - 27.90341855696731) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({100000000.0,200000000.0,400000000.0}) - 111111111.11111112) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,49.773450447024764,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 34.03086367330783) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.996,30.0,40.0,50.0,1.0,70.0,80.0,5.5,100.0}) - 1792.2692800000004) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.3263922,999999999.7,70.0,80.0,90.0,122.21832735028029,100.0,122.21832735028029}) - 260355012.94636047) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,0.001,49.463845425693606,70.0,14.481622339226005,80.0,126.29073532991643,100.0,126.29073532991643}) - 38.17136049714211) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,3.1923226333039425,6.5,3.7609253911481755,8.0,6.0,3.7609253911481755,8.0}) - 1.535728323049963) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.7,70.0,80.0,90.0,3.2339028700898096,100.0,20.0}) - 152777771.11446282) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.7915956564497671,0.002,0.003,1.5695280358818793,0.005,9999.995,9999.672036776217,9999.997,9999.999,9999.995}) - 4958.447728961911) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({19.39446047337968,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,10.0,3.3,3.3}) - 6.390746254096521) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3,3.3}) - 90702947.1260771) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,9999.996,1.0,2.0,3.0,3.4908151790033317,5.0}) - 1522.698234573509) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,3.865073243449636,2.0,2.5,2.470363840094207,3.0,3.5,4.0}) - 0.7368386754194287) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.9489691459904055,1.5,2.3489045785395586,2.0,3.5,4.5756777070295165,3.5,3.0,3.5,4.276728904550143,3.5}) - 0.7481515864546008) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,300000000.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3}) - 112018139.99501133) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,49.463845425693606,70.0,80.0,126.29073532991643,100.0}) - 31.47007446069285) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.374298258979812,6.5,3.7609253911481755,8.0,6.5}) - 0.9864477355509683) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,1.1922955283247763,2.991231774154428,30.0,30.0,300000000.0,49.463845425693606,60.0,70.0,80.0,100.0,10.0,2.991231774154428,10.0,49.463845425693606}) - 37333328.83464489) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.01,19.39446047337968,40.0,50.0,60.0,70.0,80.0,90.0,100.0}) - 25.629078953903743) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({9999.999,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 94999949.67450501) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,6.5,3.7609253911481755,8.0,6.0}) - 0.9582519374162921) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.01,19.39446047337968,30.0,40.0,55.269452794728835,60.0,70.0,80.0,90.0,100.0,100.0,100.0}) - 27.69384056099096) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.996,30.0,0.004,50.0,1.0,70.0,80.0,90.0,100.0}) - 1791.3791999999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,9999.996,6.616788613279709,9999.918057026343,2.0,3.0,3.4908151790033317,5.0,60.0}) - 2440.167029445662) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.63468316584145,3.05,1.1922955283247763,2.991231774154428,30.0,30.0,300000000.0,103.9388706194337,49.463845425693606,60.0,70.0,80.0,90.0,102.81009280257041,49.463845425693606,49.463845425693606}) - 35156243.64836945) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.003,0.005,9999.995,9999.996,9999.997,9999.999}) - 4897.95612244898) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,300000000.0,7.0,8.0,5.5,7.665849777787074,5.5}) - 65624998.58856719) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0,60.0}) - 22.821576090713375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.1,3.360554359804471,3.5,4.384425501449117,4.0,1.2400326729593498}) - 0.7294349461483209) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({4.604612018193867,5.5,6.0,5.739181757421845,6.5,4.907228154543746,8.0,6.0}) - 0.7186222587300678) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,60.0,70.0,49.773450447024764,90.0,100.0,1.0,2.0,3.0,4.0,5.0}) - 35.308110788134684) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.0,60.0,100.0,90.0,100.0,100.0,6.374298258979812,10.0}) - 32.53104973066283) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,3.0,3.5,4.384425501449117,4.0,2.0,1.5}) - 1.006256183850912) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,90.0,5.5,8.0}) - 23.222222222222225) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,9999.997,999999999.7,3.3}) - 94999949.44523962) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({19.39446047337968,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,10.0,3.3,90.00164010145102,3.3}) - 13.097980280808452) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,100.0,70.0}) - 21.904614872233072) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,3.7609253911481755,8.0}) - 1.057377906124438) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.3489045785395586,2.0,103.9388706194337,3.5,4.5756777070295165,4.852743487198158,3.5,3.0,3.5,103.9388706194337}) - 29.97264495213672) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,2.991231774154428,30.0,30.0,300000000.0,49.463845425693606,80.0,90.0,100.0}) - 59259249.56901043) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,3.7609253911481755,8.0,6.0}) - 1.089652978319434) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.374298258979812,6.0,7.8336618499894906,6.5,3.7609253911481755,6.616788613279709,8.0,6.0,90.00164010145102,3.7609253911481755,6.5,6.616788613279709,6.5}) - 11.900074474551328) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({30.0,137.09809335349595,40.0,50.0,60.0,100.0,80.0,90.61353519879702,100.0,100.0}) - 27.016930284183434) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,1.1922955283247763,2.991231774154428,30.0,30.0,300000000.0,49.463845425693606,60.0,70.0,80.0,100.0,10.0,10.0,49.463845425693606}) - 39795913.233559005) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,70.0}) - 21.678422558135985) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.5,400000000.0,3.3,3.3,3.3,3.3,3.3,3.707326232303277,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 131855955.02207951) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,300000000.0,400000000.2827599}) - 155555552.9517244) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.865073243449636,3.3,3.3,999999999.7,2.869383821118558,3.3,3.449805487032002,3.3,3.3}) - 83175802.77435061) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.374298258979812,6.0,7.8336618499894906,6.5,3.7609253911481755,6.616788613279709,8.0,90.00164010145102,7.1072971223864805,3.7609253911481755,6.5,6.616788613279709,6.5}) - 11.886970366594094) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,49.463845425693606,60.0,70.0,80.0,90.0,100.0,40.0}) - 24.011252444157552) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,297692211.3597524,300000000.0,400000000.2827599}) - 124711524.20531404) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,4.0,5.0,80.0,2.0,60.0,89.14304005313281,80.0}) - 38.11028200967208) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3,3.3}) - 99722991.33074795) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,4.5756777070295165,49.463845425693606,60.0,70.0,80.0,90.0,100.0}) - 27.766366295641173) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,4.504374213573867,80.0,49.773450447024764,90.0,1.0,2.0,2.5994383138597996,3.0,4.0,5.0}) - 32.47076514572229) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,5.211281152854525,7.0,8.0}) - 0.9261950155432761) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,70.0,80.0,90.0,1.1922955283247763,84.6446595183346,9999.996,6.616788613279709,9999.918057026343,2.0,2.991231774154428,3.0,3.4908151790033317,5.0,60.0}) - 2179.3822282589267) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.3263922,999999999.7,80.0,90.0,100.0}) - 319999984.51523197) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,80.0,90.0,1.1922955283247763,1.5695280358818793,141.81774959304587,1.0,2.0,3.0,4.0,5.698041136164186,50.0,4.0,60.0,1.1922955283247763,50.0,90.0}) - 37.12031052024169) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,84.6446595183346,3.0,4.0,5.0,9999.997,1.295110146595121,60.0}) - 1166.7783585527625) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({7.8336618499894906,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,3.4908151790033317,5.0}) - 37.25577968351961) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.003,9999.995,9999.997,9999.999}) - 4799.9976) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3,3.3,3.3,3.3}) - 83175803.09795375) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,9999.996,3.0,3.5,4.852743487198158,4.0}) - 2448.2091125107263) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({7.5,10.0,20.0,30.0,40.0,49.463845425693606,80.0,90.0,49.773450447024764}) - 22.621888379347947) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,1.0,2.0,3.0,4.0,5.0,80.0,2.0,60.0,1.0}) - 37.953972292398596) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,19.728462954455587,30.0,30.0,49.463845425693606,70.0,14.481622339226005,68.90458824240277,126.29073532991643,100.0,30.0}) - 30.110273423615425) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({19.39446047337968,3.3,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3}) - 110726642.77128349) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,4.782436984517929,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3,3.3}) - 86776859.18560976) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,49.463845425693606,70.0,80.0,126.29073532991643,100.0,20.0}) - 33.66909370239031) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({9.657809016182954,30.0,40.0,60.0,100.0,80.0,2.991231774154428,10.0,10.0,60.0,2.991231774154428}) - 28.294192350042) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,100.0,70.0,13.215774418640153}) - 23.356845116271973) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.3263922,999999999.7,70.0,80.0,90.0,122.21832735028029,100.0,122.21832735028029,30.0}) - 244897944.21422294) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,40.0,50.0,60.0,100.0,80.0,90.0,100.0,10.0,10.0,60.0}) - 28.59504132231405) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,49.463845425693606,60.0,70.0,80.0,90.0,4.384425501449117}) - 22.86254948630935) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,16.045416519836035,70.0,80.0,126.29073532991643,100.0}) - 32.7141472839476) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,7.0,62.029282698318745,90.0,5.5,8.0}) - 28.414139326187495) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,3.7609253911481755,8.0,6.0,8.0,6.5}) - 0.9673843261064781) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,70.0,80.0,126.29073532991643,100.0,126.29073532991643,20.0,30.0}) - 35.70487593736613) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,3.812083947456091,90.0,3.4834417459133986}) - 25.5775785031397) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,90.0,2.2180852449630564,2.0,103.9388706194337,3.5,4.5756777070295165,4.852743487198158,6.374298258979812,2.9,3.5,3.0,3.5}) - 24.34894635996958) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,4.782436984517929,3.3,3.3,3.3,3.3,3.3,3.3,828201982.1781489,999999999.7,3.3,3.3,3.3,4.782436984517929}) - 151091072.312534) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,100.0,7.699479532889756,7.560787057774588,5.5}) - 29.899178672746853) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,40.0,50.0,60.0,100.0,90.0,100.0,10.0,10.0,60.0}) - 29.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,200000000.0,60.0,70.0,80.0,90.0,100.87293165430344,1.0,2.0,3.0,4.0,5.0,200000000.0}) - 52070994.890581496) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,3.7609253911481755,6.0,6.5,8.0,6.0,3.7609253911481755,6.616788613279709}) - 1.0700347477611678) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,19.728462954455587,30.0,30.0,49.463845425693606,70.0,14.481622339226005,68.90458824240277,126.78403630183132,100.0,30.0}) - 30.167349569126245) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,3.7609253911481755,8.0}) - 1.4395887150452553) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,70.0,80.0,49.773450447024764,90.0,100.0,1.0,2.5287813908926378,3.0,4.0,5.0}) - 37.247880921118764) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,49.463845425693606,4.782436984517929,60.0,70.0,80.0,90.0,4.384425501449117}) - 25.029698293972654) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,3.7609253911481755,49.463845425693606,999999999.7,70.0,80.0,90.0,34.99098147402468,100.0,3.7609253911481755}) - 152777770.89893505) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,6.5,3.7609253911481755,4.0,8.0,6.0}) - 1.2197943575226275) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({50.0,60.0,80.0,49.773450447024764,1.1922955283247763,90.0,100.0,1.0,2.0,3.0,14.481622339226005,5.0,60.0}) - 32.56713937999163) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,3.01,14.481622339226005,30.0,40.0,50.0,60.0,70.0,80.0,90.0,90.13265058398068,100.0,14.481622339226005}) - 29.101645988368666) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,4.441276881707008,8.0}) - 1.2352718040651094) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,3.7609253911481755,8.0,6.0,5.5}) - 0.8349509565472367) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.55344018402163,6.374298258979812,6.5,8.0,6.5}) - 0.5657809245598848) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,0.005,60.0,70.0,80.0,90.0,100.0}) - 29.677922558135993) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.446843646862527,3.7609253911481755,8.0,6.0}) - 0.8805547627295752) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,30.0,49.463845425693606,70.0,14.481622339226005,80.0,100.0,126.29073532991643,20.0,30.0}) - 30.66491602212695) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.9,2.95,2.99,9999.997,3.01,3.05,3.1,6.616788613279709}) - 1799.402124227734) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,41.72055257930202,49.773450447024764,70.0,80.0,62.029282698318745,49.773450447024764}) - 15.508478611143609) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.3489045785395586,2.0,3.5,4.5756777070295165,3.5,3.0,4.276728904550143,3.5}) - 0.8188914457684159) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,1.8029218152876385,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3}) - 99722991.3407526) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.003,0.005,9999.995,9999.996,9999.997,9999.998,9999.999,9999.998}) - 4444.441851851852) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,50.0,60.0,70.0,90.0,100.0,70.0}) - 21.23456790123457) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,3.0,3.5,4.384425501449117,4.0,2.0,2.0301596998612945,13.215774418640153,4.384425501449117}) - 2.0695623069048503) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({0.001,0.003,9999.997,9999.999,9999.999}) - 4799.998239999999) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({89.14304005313281,3.05,60.0,70.0,80.0,90.0,1.1922955283247763,100.0,2.0,3.0,4.0,5.0,80.0,1.295110146595121,7.9233132434288756,60.0}) - 37.605145070924) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.865073243449636,3.3,3.3,999999999.7,2.869383821118558,3.3,3.3,3.3}) - 83175802.77491698) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,49.463845425693606,70.0,80.0,100.0}) - 25.089359095717736) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.865073243449636,3.3,3.3,999999999.7,2.869383821118558,3.3,3.3,3.3,3.3}) - 79861110.52210258) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,30.0,40.0,50.573502645381446,60.0,100.0,80.0,90.0,9.232931163040913,100.0,10.0}) - 30.263931090213024) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,4.139540681450292,3.3,2.95,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3}) - 90702947.51705422) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,999999999.7,3.3,3.3}) - 94999999.42872462) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,40.0,50.0,3.707326232303277,60.0,2.022850297755034,90.0,100.0,70.0,4.604612018193867}) - 28.40208359105354) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({2.5,2.75,2.99,3.05,3.25,3.05}) - 0.20444444444444443) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({13.215774418640153,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,3.4834417459133986,20.0}) - 24.239734201276573) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.01,19.39446047337968,30.0,40.0,55.269452794728835,60.0,70.0,80.0,90.0,100.0,100.0,49.773450447024764,19.659907762221618,3.01}) - 27.887259579435913) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.50428171064232,30.0,40.0,60.0,100.0,80.0,2.991231774154428,9.232931163040913,10.0,10.0,60.0,2.991231774154428}) - 28.07502247069499) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,100.0,7.699479532889756,7.560787057774588,5.5,5.5,100.0}) - 38.22365170688454) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.374298258979812,6.0,7.8336618499894906,6.5,3.7609253911481755,6.616788613279709,8.0,90.00164010145102,7.0,3.7609253911481755,6.5,6.616788613279709,6.5}) - 11.888240155024695) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({60.0,70.0,4.504374213573867,80.0,49.773450447024764,90.0,0.07808732746785707,2.0,2.5994383138597996,3.0,4.0,5.0}) - 32.534786859092584) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({3.3,3.3,3.3,3.3,3.3,3.3,3.121125756863509,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.1923226333039425,999999999.7,3.3,3.3,3.3}) - 94999999.65943275) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,9999.996,30.8359552577593,7604.197665377717,40.0,50.0,1.0,70.0,80.0,5.5,100.0,80.0}) - 2432.045343656411) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,7.699479532889756,7.560787057774588,5.5,100.0}) - 29.899178672746853) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,0.7915956564497671,8.0}) - 1.826689389936074) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,2.3541411246909063,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.865073243449636,3.3,3.3,999999999.7,2.869383821118558,3.3,3.3,3.3}) - 83175802.77849303) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({6.0,8.0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({9999.999,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,2.5994383138597996,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,999999999.7,3.3,3.3}) - 86776817.88595688) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,49.99849106738436,40.0,49.463845425693606,4.782436984517929,60.0,70.0,80.0,90.0,4.384425501449117}) - 23.1786860751998) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({90.0,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.865073243449636,3.3,3.3,999999999.7,2.869383821118558,3.3,3.3,3.812083947456091,3.3}) - 79861110.52032453) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,6.0,6.5,8.0,5.5}) - 0.76) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({20.0,30.0,30.0,49.463845425693606,70.0,80.0,100.0,20.0,70.0}) - 24.744311562894456) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({30.0,40.0,60.0,100.0,80.0,90.0,100.0,100.0}) - 23.75) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({19.39446047337968,3.3,3.3,3.3,3.4834417459133986,3.3,3.3,49.463845425693606,3.3,3.3,3.3,3.3,3.3,2.991231774154428,3.3,3.3,10.0,3.3,90.00164010145102,3.3}) - 12.562975307243546) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({5.5,7.294790002652797,6.0,6.5,7.825146418506947,7.5,8.0}) - 0.8106044597338462) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({1.5,2.0,3.5}) - 0.7777777777777778) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(mean_absolute_deviation({10.0,20.0,30.0,40.0,49.463845425693606,60.0,70.0,80.23776903555098,80.0,90.0,100.0}) - 24.86621111774535) < 1e-4)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


