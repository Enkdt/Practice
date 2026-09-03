//Link: https://codeforces.com/contest/580/problem/C
//Time: 343 ms 	
//Memory: 11200 KB

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> isCat;
unordered_map<int,vector<int>> dict;
int nVer, mCat,ans=0;

//Will start always from 1
void dfs(int start,int prev,int catCnt){
	if(isCat[start-1]){catCnt++;} else{catCnt = 0;}
	if(catCnt > mCat) return;
	//if leaf
	if(dict[start].size() == 1 && start!=1){
	ans++;
	return;
	}
	for(auto& i: dict[start]){
	if(i!=prev) dfs(i,start,catCnt);
	}
}

int main(){
cin >> nVer >> mCat;
isCat.resize(nVer);

//population bomb
for(int i=0;i<nVer;++i){
bool a;
cin >> a;
isCat[i] = a;
}

for(int i=0;i<nVer-1;++i){
int p1,p2;
cin >> p1 >> p2;
//Always bidirect if nothing is said;
dict[p1].push_back(p2);
dict[p2].push_back(p1);
}

dfs(1,0,0);

cout << ans << endl;
return 0;
}

