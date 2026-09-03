#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
unordered_map<string,int> nMap;
vector<string> lol;
cin >> n;
while(n--){
string l;
cin >> l;
if(nMap.find(l) == nMap.end()){
nMap[l] = 0;
lol.push_back("OK");
}else{
nMap[l] +=1;
l += to_string(nMap[l]);
lol.push_back(l);
}
}
for(int i=0;i<lol.size();i++){
cout << lol[i] << '\n';
}
}
