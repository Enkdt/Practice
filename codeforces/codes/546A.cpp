#include <bits/stdc++.h>
using namespace std;

int main(){
long long int a,b,c,n=0;
cin >> a >> b >> c;
for(int i=1;i<=c;++i){
n += i*a;
}
cout << ((n-b<=0)?0:(n-b));
return 0;
}
