// ========================
// Compilador online da OBI
// ========================

#include <bits/stdc++.h>
using namespace std;

int main() {
    // comandos para agilizar entrada/saída
    //vai dar pau no desempate
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //first = c, second = index
    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    vector<vector<int>> lists;

    int n, l;
    cin >> n >> l;
    lists.resize(l);

    for(int i=0;i<l;++i){
        pq.push({0,i});
    }

    while(n--){
        int p;
        cin >> p;
        auto[val,cur] = pq.top();
        pq.pop();
        pq.push({val+p,cur});
        lists[cur].push_back(p);
        //cout << "new val" << val+p << "cur index: " << cur << '\n';
    }

    for(int i=0;i<l;++i){
        for(int j=0;j<lists[i].size();++j){
            cout << lists[i][j];
            if(j != lists[i].size()-1){
            cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}