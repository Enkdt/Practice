#include <bits/stdc++.h>
using namespace std;

bool primeShi(long long n){
if(n<=1) return false;
if(n == 2 || n == 3)return true;
if(n%2==0 || n%3==0)return false;
long long l = sqrt(static_cast<double>(n));
for(int i=5;i<=l;i+=6){
if(n % i == 0 || n%(i+2) == 0)return false;
}
return true;
}

string lol(long long p){
if (p <= 1) return "NO";
if (sqrt(p)!=static_cast<int>(sqrt(p))) return "NO";
if (primeShi(sqrt(static_cast<double>(p))) == true) return "YES";
return "NO";
}

//tprime is prime*prime
int main(){
int n;
cin >> n;
while(n--){
long long a;
cin >> a;
cout << lol(a) << '\n';
}
}
