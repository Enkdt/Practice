#include <bits/stdc++.h>
using namespace std;
int main(){
string a,b;
int x=0;
cin >> a;
cin >> b;
for(int i = 0; i < a.size(); ++i){
a[i] = (char)tolower(a[i]);
b[i] = (char)tolower(b[i]);
if (a[i]!=b[i]){
x = a[i]-b[i]<0?-1:1;
break;
}
}
cout << x << '\n';
}
