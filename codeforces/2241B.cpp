#include <bits/stdc++.h>
using namespace std;

string solve(){
long long x;
cin >> x;
if (to_string(x).size() == 1) return "11";
string y(to_string(x).size()-1,'0');
y = "1" + y + "1";
return y;
}

int main(){
int n;
cin >> n;
while(n--){
cout << solve() << '\n';
}
return 0;
}
