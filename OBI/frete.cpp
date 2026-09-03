#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 1e8;

//dict vai guardar as relações, o cost guarda o valor mínimo pra chegar lá
vector<vector<pair<int,int> >> dict;
vector<int> costs;

void dijkstra(int starting_node){
	//1 - oq vai armazenar | 2 - como vai armazenar | 3 - como vai priorizar
	//é usado greater no 3 pq vai ficar de modo decrescente esse djikstra
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	//A gente zera o cost do starting node pq o cara já tá lá, e coloca na queue
	costs[starting_node] = 0;
	pq.push({0,starting_node});

	//se você ver bem, é só um bfs fresco
	while(!pq.empty()){
		//igual bfs
		auto [cost,cur] = pq.top();
		pq.pop();
		
		//Isso aq é pra não ficar em loop infinito
		if(costs[cur]!=cost) continue;

		//isso aq é o loop pra pegar as conexões
		//.first é o custo e .second é o próximo node
		for(auto [nCost,next]: dict[cur]){
			if(cost + nCost < costs[next]){
				costs[next] = cost+nCost;
				pq.push({costs[next],next});
			}
		}
	}	
}

int main(){

int n,e;
cin >> n >> e;

dict.resize(n+1);
costs.resize(n+1,inf);

while(e--){
int n1,n2,c;
cin >> n1 >> n2 >> c;
dict[n1].push_back({c,n2});
dict[n2].push_back({c,n1});
}
dijkstra(1);

cout << (costs[n]==inf?-1:costs[n]) << '\n';
}
