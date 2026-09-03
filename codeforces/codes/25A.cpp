#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> x;
int n,e=0,o=0;
cin >> n;
while(n--){
	int a;
	cin >> a;
	x.push_back(a);
	a%2==0?e++:o++;
}
for(int i=0;i<x.size();++i){
	if(e>o){
	if(x[i]%2==0){
	continue;}
	else{
	cout << i+1 << '\n';
	break;
	}
	}
	else{
	if(x[i]%2!=0){
	continue;}
	else{
	cout << i+1 << '\n';
	break;
	}
	}
}
}
