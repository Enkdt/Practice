#include <bits/stdc++.h>
using namespace std;

long long int solve(){
long long int pN,tN,tMX;
long long int x=0,tbC=0,abC=0;
string pO;
cin >> pN >> tN >> tMX;
cin >> pO;
for(long long int i=0;i<pN;++i){
if(pO[i]=='I'){
//int can only be added if there are tables
if(tbC<tN) x++,tbC++;
}
else if(pO[i]=='A'){
//ambi will go to occ table if there's space (tbC*s)
if(x < tbC*tMX)x++,abC++;
//will go to a empty one if there's one
else if(tbC < tN)x++,tbC++;
}
else{
//if there's space, goes to space
if(x < tbC*tMX)x++;
//if no space, but an ambivert exists, they just occupy a table and go together
else if(abC>0 && tbC < tN)x++,tbC++,abC--;
}
}
return x;
}

int main(){
int n;
cin >> n;
while(n--){
cout << solve() << '\n';
}
}
