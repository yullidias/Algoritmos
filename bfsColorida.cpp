#include <bits/stdc++.h>

#define BRANCO 0 //não visitado
#define CINZA 1 //visitado
#define PRETO 2 //visitado todoas as adjacencias
#define MAXTAM 51
#define INF 0x3f3f3f3f

using namespace std;

vector< vector<int> > G(MAXTAM);
vector<int> Pai(MAXTAM);
vector<int> Cor(MAXTAM); 
vector<int> Dist(MAXTAM);


void bfsColorida(int u){
	queue<int>fila;
	fill(Pai.begin(), Pai.end(), -1);
	fill(Cor.begin(), Cor.end(), BRANCO);
	fill(Dist.begin(), Dist.end(), INF);

	Dist[u] = 0;
	Cor[u] = CINZA;
	fila.push(u);

	while(!fila.empty()){
		u = fila.front();
		fila.pop();
		for(int i=0; i< G[u].size(); i++){
			int v = G[u][i];
			if(Cor[v] == BRANCO){
				Cor[v] = CINZA;
				Pai[v] = u;
				Dist[v] = Dist[u] + 1;
				fila.push(v);
			}
		}
		Cor[u] = PRETO;
	}
}

int main(){
	return 0;
}
