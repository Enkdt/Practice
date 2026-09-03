#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> D = {{-1,0},{0,1},{0,-1},{1,0}};
vector<vector<int>> V;
int m,n,cnt=0;

void solve(int x, int y){
	while(V[x][y] == 1){
	V[x][y] = 0;	
		for(auto [Dx,Dy]: D){
			int nx=x+Dx,ny=y+Dy;
			if(nx<0||ny<0||nx >= m||ny>=n) continue;
			if(V[nx][ny] != 1) continue;
			//update x/y before looking at the 2nd one;
			x = nx;
			y = ny;
			//continue looking;
			nx = x + Dx;
			ny = y + Dy;
			if(nx >= 0 && ny >= 0 && nx < m && ny < n) cnt+= V[nx][ny] == 2;
			break;
		}
	}
}

int main(){
	int x=-1,y=-1;
	cin >> m >> n;
	V.resize(m,vector<int>(n));
	for(int i=0;i<m;++i){
		for(int j = 0;j<n;j++){
		cin >> V[i][j];
		if(x==-1 && V[i][j]==1)x=i,y=j; 
		}
	}
	solve(x,y);
	// for(auto i: V){
	// 	for(auto j:i){
	// 	cout << j << " ";
	// 	}
	// 	cout << '\n';
	// }
	cout << cnt << '\n';
	return 0;
}
