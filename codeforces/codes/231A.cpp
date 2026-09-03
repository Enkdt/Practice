#include <bits/stdc++.h>
using namespace std;

int main(void){
int l,a,r,p,fr=0;
vector<int> x;
cin >> l;
for(int i = 0; i< l;++i){
	cin >> a >> r >> p;
	a+r+p>=2?fr+=1:0;
}
cout << fr;
}
