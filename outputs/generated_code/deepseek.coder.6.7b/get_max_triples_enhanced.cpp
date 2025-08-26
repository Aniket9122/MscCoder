#include <vector>
using namespace std;

int get_matrix_triples(int n) {
    vector<int> a(n);
    
    // Generate the integer vector 'a'
    for (int i = 1; i <= n; ++i) 
        a[i-1] = i * i - i + 1;
        
    int count_rem0 = 0, count_rem1 = 0;
    
    // Count triples where sum is multiple of three
    for (int num : a) {
        if(num % 3 == 0) ++count_rem0;
        else if(num % 3 == 1) ++count_rem1;
    }
        
    int count = (count_rem0 * (count_rem0 - 1) / 2 + count_rem1 * (count_rem1 - 1) / 2);
	
    // Special cases where sum is multiple of three
    count += count_rem0 * (count_rem0 - 1) * (count_rem0 - 2) / 6;
    count += count_rem1 * (count_rem1 - 1) * (count_rem1 - 2) / 6;
    
    return count;
}