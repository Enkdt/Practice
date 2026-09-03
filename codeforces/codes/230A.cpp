#include <bits/stdc++.h>
using namespace std;

int main(){
vector<vector<int>> rD;
int s,n;
cin >> s >> n;

while(n--){
int ds,drw;
cin >> ds >> drw;
if(s>ds){
s+=drw;
}else{
rD.push_back({ds,drw});
}
}

sort(rD.begin(),rD.end());

for(int i=0;i<rD.size();i++){
if(s>rD[i][0]){
s+=rD[i][1];
}else{
cout << "NO" << '\n';
return 0;
}
}
cout << "YES" << '\n';
return 0;
}
