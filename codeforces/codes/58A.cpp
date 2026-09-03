#include <bits/stdc++.h>
using namespace std;

int main(){
string a;
cin >> a;
a = ' ' + a;
int x=0;
for(int i=0;i<a.size();++i){
if (a[i] == 'h'){
if (x==1) x=x;
else if (x==0) x++;
}
else if(a[i] == 'e'){
if (x==2) x=x;
else if (x==1) x++;
}
else if(a[i] == 'l'){
if (x==4) x=x;
else if (x==2||x==3) x++;
}
else if(a[i] == 'o'){
if (x==4){
x++;
break;
}
}
}
cout << (x==5?"YES":"NO");
}
