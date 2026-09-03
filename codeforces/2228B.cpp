//2228B - Codeforrces << TOUHOU MENTIONED!1!1!!
//Comp - C++20 (GCC 13-64)
//Time: 93ms	   Memory: 100KB

#include <bits/stdc++.h>
using namespace std;

int solve(){
long long int mx,x1,x2,mv,d1,d2,res;
cin >> mx >> x1 >> x2 >> mv;
//stall não tem se for menor q 3
if(mx<=3) return 1;
d1 = abs((x1-x2));
d2 = min(x1,x2) + (mx - max(x1,x2));
//cout << d1 << '\t' <<  d2 << '\n';
res = min(d1,d2) + mv;
return res;
}

int main(){
int n;
cin >> n;
while(n--){
cout << solve() << '\n';
}
}

