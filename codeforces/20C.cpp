#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

// cheat sheet right here:
// pq.push({pair})
// pq.top() -> Gets the 1st on prio list
// pq.pop() -> Removes the 1st on prio list
// pq.empty() -> same as dq
// pq.size() -> same as dq
// priority_queue<
//     type of data stored,
//     structure used to store,
//     comparison shit
// >
//Djistrika is bfs like, somehow
//Dijkstra pq will store the cur price and neigh, to then get the neighs from neigh
//skip if sum node + sum next node < or != from the og cost (ts here invalidates loops, since it will be cumulative)
//check all nodes until the last one (then the pq will be empty)

//first = cost, second = dest
vector< vector <pair <ll,int> > > dict;
vector<ll> costs; 
vector<int> order;

void nomeBizonho(int n){
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;

	//since starts at one
	costs[1] = 0;
	pq.push({0,1});

	//bfs type shi
	while(!pq.empty()){
		auto [cost, cur] = pq.top();
		pq.pop();

		//This is for no looping
		if(cost != costs[cur]) continue;
		//for each conn it has, will check to register
		for(auto [nCost, next]: dict[cur]){
			if(cost + nCost < costs[next]){
				costs[next] = cost+nCost;
				pq.push({costs[next],next});
				order[next] = cur;
			}
		}
	}
}

void recPrint(int n){
    vector<int> path;
    while(n != -1){path.push_back(n); n = order[n];}
    reverse(path.begin(), path.end());
    for(int x : path)
        cout << x << ' ';
}

int main(){
int n,e;
cin >> n >> e;

costs.resize(n+1,INF);
dict.resize(n+1);
order.resize(n+1,-1);

//population bomb
while(e--){
int p1,p2;
ll c;
cin >> p1 >> p2 >> c;
dict[p1].push_back({c,p2});
dict[p2].push_back({c,p1});
}

nomeBizonho(n);

if(costs[n] == INF){ cout << "-1" << '\n'; return 0;}
recPrint(n);
}
