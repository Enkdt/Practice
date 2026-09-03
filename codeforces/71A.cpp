#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<string> x;
	int n;	
	string wd,ap;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> wd;
		ap = wd.length()>10?wd[0]+to_string(wd.length()-2)+wd[wd.length()-1]:wd;
		x.push_back(ap);
	}
	for(auto a:x){
		cout << a << '\n';
	}
}
