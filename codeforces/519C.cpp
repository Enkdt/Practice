#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,team=0;
cin >> a >> b;
//Teams = x n n or x x n
while (true){
	if(a>b){
	a-=2;
	b--;
	}
	else{
	a--;
	b-=2;
	}
	if (a<0 || b<0) break; 
	team++;
}
cout << team;
}

