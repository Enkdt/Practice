//1152B - Codeforces
//Comp - C++23 (GCC 14-64, msys2)
//Time: 46ms	   Memory: 100KB
#include <bits/stdc++.h>
using namespace std;

vector<int> V; 

string solve(unsigned int n){
int ct = 0;
if(n==(pow(2,ceil(log(n))-1))) return "0"; 

unsigned int mask, maskednn, highzero=1U, xorMask, xorN;
while(highzero != 0){
mask =  (1U << (bit_width(n)-1)) - 1; 
maskednn = ~n & mask;
highzero = bit_width(maskednn);
if(highzero==0)break;
if(ct%2==0){
xorMask = (1U << highzero)-1;
xorN = n^xorMask;
n = xorN;
V.push_back(highzero);
}
else{
n++;
}
ct++;
}
return to_string(ct);
}

int main(){
unsigned int n;
cin >> n;
cout << solve(n) << '\n'; 
for(int i=0;i<V.size();++i){ 
cout << V[i] << " ";
}
}
