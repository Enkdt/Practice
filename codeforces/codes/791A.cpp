#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b,ct;
cin >> a >> b;
while(a<=b){
ct+=1;
a *=3;
b *=2;
}
cout << ct;
}
