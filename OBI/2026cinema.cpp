#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N,M,C,cnt=0;
ll t,h;
vector<ll> ppl;
vector<ll> ses;
vector<ll> cap;

int main(){

cin >> N >> M >> C;

ppl.resize(N);
ses.resize(M);
cap.resize(M,0);

for(int i=0;i<N;++i) cin >> ppl[i];
for(int i=0;i<M;++i) cin >> ses[i];

for(int i=0;i<ppl.size();++i){
	while(cnt < M && (ppl[i] > ses[cnt] || cap[cnt] == C)) cnt++;
	if(cnt >= M) break;
	cap[cnt]++;
}

for(auto i: cap) cout << i << " ";

return 0;
}
