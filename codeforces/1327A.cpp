#include <bits/stdc++.h>
using namespace std;

string solve(long long a,long long b){
if(a < b*b) return "NO";
//can use: (& checks for last bit)
//if((n&1) != (k&1)) return "NO";
if(b%2==0 && a%2==0) return "YES";
if(b%2!=0 && a%2!=0) return "YES";
return "NO";
}

//all odd sums are perfect squares (may be useful, idk)
int main(){
long long n,k,l;
cin >> n;
while(n--){
cin >> k >> l;
cout << solve(k,l) << '\n';
}
}


