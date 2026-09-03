//https://olimpiada.ic.unicamp.br/pratique/p2/2020/f2/estrada/
//Compiler: C++ 17/G++
//Time: 0.006s
//Memory: 504.0 KB
#include <bits/stdc++.h>
using namespace std;

int main(){
int a,n;
float b,c=10000000;
vector<float> V;
cin >> a;
cin >> n;
while(n--){
cin >> b;
V.push_back(b);
}
sort(V.begin(),V.end());
n = V.size();
while(n--){
float l=0;
if(V[n] == V[V.size()-1]){
l = (V[n]-V[n-1])/2 + (a-V[n]);
}
else if(V[n] == V[0]){
l = (V[n+1]-V[n])/2 + V[n];
}
else{
l = (V[n+1]-V[n-1])/2;
}
c = min(c,l);
}
cout.setf(ios::fixed);
cout.precision(2);
cout << c << '\n';
return 0;
}
