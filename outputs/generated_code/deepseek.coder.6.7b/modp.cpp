#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll modp(int n, int p){
    if (n == 0) return 1;
    else if (n == 1) return 2 % p;
    
    ll res = 1;
    ll base = 2;
    while(n > 0){
        if((n&1) != 0) // Check the last bit of n is set or not. If it's set then multiply 'res' with 'base'. 
            res = (res * base) % p;
        base = (base * base) % p; // Square 'base' and take modulo with 'p' to prevent overflow.
        n >>= 1; // Right shift 'n' by 1 bit. Equivalent to n / 2.
    }
    
    return res < 0 ? res + p : res;
}