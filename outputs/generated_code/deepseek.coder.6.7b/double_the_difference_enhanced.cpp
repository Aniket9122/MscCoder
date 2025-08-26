#include <vector>
namespace std {}  // This is already included in diagnostics, no need for changes

long long double_the_difference(const std::vector<float>& lst) {  
    if (lst.empty()) return 0;
        
    long long sum = 0;
    
    for(size_t i=0; i < lst.size(); ++i){
        // Check if number is positive and odd
        if((lst[i] > 0) && ((int)lst[i] % 2 == 1)){  
            sum += (long long)(lst[i] * lst[i]);  // add square of the element to sum, cast float to long long before multiplication
         }
     }   

     return sum;
}