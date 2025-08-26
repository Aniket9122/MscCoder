#include <bits/stdc++.h>  // for all Standard Library
using namespace std;

string decimal_to_binary(int n) { 
    stringstream ss;
    ss << "db" << bitset<32>(n).to_string() << "db";  
    return ss.str();
}