#include <bits/stdc++.h>
using namespace std;

int p1,p2,n,a,p;

int main(){
cin >> n;
n-=1;
cin >> a;
p = a;
while(n--){
cin >> a;
if(a > 0 && p > 0 && a!=p) p1++;
if(a < 0 && p < 0 && a!=p) p2++;
p = a;

}
cout << p1 << '\n' << p2 << '\n';
return 0;
}
