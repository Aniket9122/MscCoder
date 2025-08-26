#include<string>
#include<vector>
using namespace std;

// Function to find longest palindrome suffix using KMP Algorithm
int LongestPalindromicSuffix(string str, int start)  {
    if (str.size() <= 1) return 0; // Single character or empty string is a palindrome in itself
    
    int n = str.length();
    vector<int> lps(n);
    lps[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = lps[i-1];
        while ((j > 0) && (str[i] != str[j])) j = lps[j - 1];
        if(str[i] == str[j]) j++;
        lps[i] = j;
    }
    return lps.back();
}

string make_palindrome(string str) {
    int n = str.length();
    
    //Find longest palindromic suffix using KMP Algorithm
    int len = LongestPalindromicSuffix(str, 0);

    if (len == 0){
        return str;
    } else {
      string rev_prefix=str.substr(0, len);
      reverse(rev_prefix.begin(), rev_prefix.end());  //reverse the prefix
      return str+rev_prefix.substr(n-len);   //append it to end of the original string
    }
}