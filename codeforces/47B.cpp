#include<bits/stdc++.h>
using namespace std;

int main(){
	int cnt[3] = {0};
	for(int i = 0;i<3;++i){
		string str;
		cin >> str;
		cnt[str[1] == '>'?str[0]-'A':str[2]-'A']++;
	}
	string ans = "lll";
	for(int i=0;i<3;++i){
		if(ans[cnt[i]]!='l'){
		cout << "Impossible";
		return 0;
		}
		ans[cnt[i]] = 'A' + i;
	}
	cout << ans;
} 
