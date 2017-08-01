#include <bits/stdc++.h>

#define MAT_TAM 101
#define INF 0x3f3f3f3f
using namespace std;

vector< vector<int> > G(MAT_TAM);
vector<int> P(MAT_TAM);
vector<int> D(MAT_TAM);
vector<int> Vis(MAT_TAM);

void bfs(int u){
	fill(P.begin(), P.end(), -1);
	fill(D.begin(), D.end(), INF);
	fill(Vis.begin(), Vis.end(), 0);

	queue<int> fila;
	D[u] = 0;
	Vis[u] = 1;
	fila.push(u);

	while(!fila.empty()){
		u = fila.front();
		fila.pop();

		for(int i=0; i<G[u].size(); i++){
			int v = G[u][i];
			if(!Vis[v]){
				P[v] = u;
				D[v] = D[u] + 1;
				Vis[v] = 1;
				fila.push(v);
			}
		}
	}
}

int main(){
	return 0;
}
