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