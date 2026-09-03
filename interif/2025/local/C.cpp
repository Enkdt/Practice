#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//Isso aq é só pq o pow n retorna int
ll solve(int e,ll n){
	ll res=1;
	for(int i=0;i<n;++i) res*=3;
	return (e?res*2:res);
}

int main(){
	ll n;
	cin >> n;
	cout << solve(n%2,n/2) << endl;
	return 0;
}
