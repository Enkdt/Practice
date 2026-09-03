#include <bits/stdc++.h>
using namespace std;

int main(){
int A,L,n,best = -1,bx=1000,by=1000;
cin >> A >> L >> n;
for(int i=0;i<n;++i){
int b,c;
cin >> b >> c;
if((A<=b&&L<=c)||(L<=b&&A<=c)){
if((b*c)<(bx*by)){
best = i+1;
bx = b;
by = c;
}
}
}
//printf("best:%i bx:%i by:%i",best,bx,by);
cout << best << '\n';
return 0;
}
