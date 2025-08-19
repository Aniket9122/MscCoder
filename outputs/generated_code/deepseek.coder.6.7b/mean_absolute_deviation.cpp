double getMean(vector<double> numbers){
    double sum = 0;
    for(int i=0; i<numbers.size(); i++) 
        sum += numbers[i];
    
    return sum / numbers.size();
}