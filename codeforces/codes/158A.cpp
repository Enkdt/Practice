#include <bits/stdc++.h>
using namespace std;

int main(){
int x,y,z=0;
cin >> x >> y;
cin.ignore();
string l;
getline(cin,l);
stringstream ll(l); 
vector<int> nums;
int num;

while(ll>>num){
nums.push_back(num);
}

for(int i=0;i<nums.size();++i){
if(nums[i]>=nums[y-1] and nums[i]>0){
z++;
}

}
cout << z;
}
