#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,t1=0,t2=0;
cin >> a >> b >> c;
vector<int> l = {a+b+c,(a+b)*c,a*(b+c),a*b*c};
sort(l.begin(),l.end());
cout << l[3] << '\n';
}
