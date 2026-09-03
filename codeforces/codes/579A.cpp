#include <bits/stdc++.h>
using namespace std;

int main(){
long long int a,b,res=0;
cin >> a;
while(a>0){
b=1;
while(b*2<=a){
b*=2;
}
a-=b;
res++;
}
cout << res;

}
