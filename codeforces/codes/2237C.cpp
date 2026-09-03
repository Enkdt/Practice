#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin >> n;
vector<int> a(n);
for(int i=0;i<n;++i){
cin >> a[i];
}
long long s = 0;
for(int i=0;i<n;++i){
if (s>a[i]){
s+=a[i];
}
else{
s=a[i];
}
}
cout << s << '\n';
}

int main(){
int m;
cin >> m;
while(m--){
solve();
}
return 0;
}
