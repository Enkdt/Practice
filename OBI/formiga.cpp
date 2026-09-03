#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> dict;
vector<int> H;

int mval = 0;

void solve(vector<int>neighbors,int sVal,int cDep){
	mval = max(mval,cDep);
	for(int i=0;i<neighbors.size();++i){
		int next = neighbors[i];
		solve(dict[next],next,cDep+1);
	}
	return;
}

int main(){
	int vR,n,m,ini;
	cin >> vR >> n >> ini;
	H.resize(vR);

	for(int i=1;i<vR+1;++i){
		dict[i] = {};
	}

	for(int i=0;i<vR;++i){
		int a;
		cin >> a;
		H[i] = a;
	}

	while(n--){
		int a,b;
		cin >> a >> b;
		if(H[a-1] > H[b-1]){
			dict[a].push_back(b);
		}
		else{
			dict[b].push_back(a);
		}
	}

	solve(dict[ini],ini,0);
	cout << mval;
}

