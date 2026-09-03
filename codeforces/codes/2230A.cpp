#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin >> n;
for(int i = 0;i<n;++i){
	long long int a,b,c,l;
	l = 0;
	cin >> a >> b >> c;
	l+= a%3!=0? (b*(a%3))<c?(b*(a%3)):c:0;
	a-= a%3;
	l+= (a*b)<(c*(a/3))?(a*b):(c*(a/3));
	cout << l << '\n'; 
}
}
