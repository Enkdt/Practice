#include <bits/stdc++.h>
using namespace std;

int main(){
string b;
int l=0,k=0;

for(int i=0;i<5;++i){
getline(cin,b);
if (b.find('1')!= string::npos){
l = i;
k = b.find('1')/2;
break;
}
}
cout << abs((2-l))+abs((2-k)) << '\n';
}
