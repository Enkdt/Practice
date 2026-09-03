#include <bits/stdc++.h>
using namespace std;

vector<string> V;
int m,n,stl,stc;
string l;

void solve(int &l,int &c){
	if(V[l][c] == '.'){
	return;
	}
	while (V[l][c] != '.') {
	    V[l][c] = '.';
	    if(l+1<V.size() && V[l+1][c]=='H')
		++l;
	    else if(l>0 && V[l-1][c]=='H')
		--l;
	    else if(c+1<V[l].size() && V[l][c+1]=='H')
		++c;
	    else if (c>0 && V[l][c-1]=='H')
		--c;
	    else
		break;
	}
}

int main(){
	cin >> m >> n;
	for(int i =0;i<m;++i){
	cin >> l;
	V.push_back(l);
	for(int j=0;j<n;++j){
		if(l[j]=='o'){
		stl = i;
		stc = j;
		}
		else continue;
	}
	}
	solve(stl,stc);
	cout << stl+1 << " " << stc+1 << '\n';
	return 0;
}


