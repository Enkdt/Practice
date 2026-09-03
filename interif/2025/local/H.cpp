#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e,n;
	cin >> a >> b >> c >> d >> e >> n;
	e *= e;
	while(n--){
		int x,y;
		cin >> x >> y;
		int dx = x - c, dy = y - d;
		if(dx * dx + dy * dy <=e){
			cout << "Uma casinha no meio de todas" << '\n';
			return 0;
		}
	}
	cout << "Uma casinha no meio do nada" << '\n';
	return 0;
}
