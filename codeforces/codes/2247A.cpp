#include <bits/stdc++.h>
using namespace std;

string solve(){
int m,a,b,m1=0,p1=0;
cin >> m;
for(int i=0;i<m;++i){
cin >> a;
if (a==-1) m1-=a;
else p1+=a;
}
//cout << p1 << '\t' << m1 << '\n';
if(m%2!=0) return "NO";
if(p1==m1) return "YES";
a = max(m1,p1);
b = min(m1,p1);
while(b<a){
b+=2;
a-=2;
}
//cout << a << '\t' << b << '\n';
if(abs(b)==abs(a)) return "YES";
return "NO";
}


int main(){
int n;
cin >> n;
while(n--){
cout << solve() << '\n';
}

return 0;
}


