#include <bits/stdc++.h>

using namespace std;

#define MAX_TAM 5000
vector< vector< int > > G(MAX_TAM);
vector< int > Vis(MAX_TAM);

void dfs(int u){
	Vis[u] = 1;
	for(int i=0; i < G[u].size(); i++){
		if(!Vis[ G[u][i] ]){
			dfs(G[u][i]);
		}
	}
}

int main(){
	return 0;
}

