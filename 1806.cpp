#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>

using namespace std;

// Estrutura usada para implementar a lista de adjacência
class Vertice{
    public:
        double w; // peso da aresta
        int ind; // identificação do vertice destino da aresta
        
        // Construtores
        Vertice(){};
        
        Vertice(int ind, double w){
            this->w = w;
            this->ind = ind;
        }
};


vector< vector<Vertice> > g; // Lista de Adjacência.


// Vetores utilizados no algoritmo de Dijkstra

//para os 3 vetores a seguir, cada posição do vetor representa um vertice do grafo.
vector<int> d; // Vetor que armazena o peso da aresta usada para alcançar o vértice.
vector<bool> cor; // Define se cada vertice ja foi encontrado ou não.
vector<int> p; // Vetor que armazena o pai de cada vertice.


// Função de comparação para utilizar a estrutura heap de minimo.
// Pois a biblioteca <algorithm> tem por padrão a implementação do heap de máximo.
bool comp(const int A, const int B){
    return d[A] > d[B];
}


// Algoritmo calcula a menor distancia para alcançar todos os vertices do grafo partindo de um vertice inicial.
// Só funciona para arestas ponderadas.
void dijkstra(int s, int Final){
    vector<int> Q; // Vetor utilizado no heap de minimo binário
    
	// Inicialização
	p.resize(g.size(), -1);
	cor.resize(g.size(), false);
    d.resize(g.size(), INT_MAX);
	Q.push_back(s);
    d[s] = 0;
    cor[s] = true;
    
    // Enquanto o heap não estiver vazio
    while(!Q.empty()){
    	// Procedimento para retirar a raiz da estrutura de heap
        int u = Q[0];
        pop_heap(Q.begin(),Q.end(), comp);
		Q.pop_back();
        
        // Para todo vertice adjacente à "u"
        for(int i = 0; i < g[u].size(); i++) {
        	// Se o vertice adjacente à "u" for diferente do vertice pai de "u"
        	// E se a aresta para alcançar o vertice adjacente for mais leve do que a já utilizada.
            if(d[u] + g[u][i].w < d[g[u][i].ind]){
                // Processo de relaxamento
				d[g[u][i].ind] = d[u] + g[u][i].w;
                p[g[u][i].ind] = u;
            }
            // Se o vértice adjacente ainda não foi encontrada.
            if(cor[g[u][i].ind] == false){
                cor[g[u][i].ind] = true; // Define o vertice adjacente como encontrado
                Q.push_back(g[u][i].ind); // Adiciona o vertice adjacente no heap
            }
        }

        make_heap(Q.begin(), Q.end(), comp); // Constroi o heap
    }
}

int main(){
	int i, n, m, RC, C;
	int x, y, z;
	
	scanf("%d %d %d %d", &n, &m, &RC, &C);
	
	g.resize(n+1);
	
	for(i = 0; i < m; i++){
		scanf("%d %d %d", &x, &y, &z);
		g[x].push_back(Vertice(y, z));
		g[y].push_back(Vertice(x, z));
	}
	int Inicial, Final;
	
	scanf("%d %d", &Inicial, &Final);	
	
	
	dijkstra(Inicial, Final);
	printf("%d\n", d[n]);
	
	
	return 0;
}
