#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(const vector<int>& x) {
    vector<int> result;
    for (int i = 0; i < x.size(); ++i) {
        int num = x[i];
        while (num != 0) {
            if ((num % 10) % 2 == 0) {
                break;
            }
            result.push_back(num);
            num /= 10;
        }
    }
    sort(result.begin(), result.end());
    return result;
}