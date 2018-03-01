#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <algorithm>
#include <string>


#define INF -1 // Não descoberto (desconexo).
#define NUL -2 // Orfão (raiz).
#define PRETO 0 // Descendentes já estão pretos ou não tem descendentes.
#define CINZA 1 // Descoberto.
#define BRANCO 2 // Não descoberto.


int *cor;
int *predescessor;
int *descoberta; // Tempo de descoberta
int *termino; // Tempo de término
int tempo; // "Relógio"

using namespace std;

vector<int> *g;


void DFS_visit(int vA)
{
     int vB;
     vector<int>::iterator it;
     cor[vA] = CINZA; // Pinta de cinza o vértice que está sendo avaliado no momento, o que significa que ele acaba de ser descoberto.
     tempo++; // O tempo passa, uma vez que a chamada desta função representa o percorrimento de uma aresta (afastando-se da raiz).
     descoberta[vA] = tempo; // Guarda o tempo em que o vértice foi descoberto. Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vértice pela primeira vez.

     for(it = g[vA].begin(); it != g[vA].end(); it++){ // Varre o vector, passando por todos os vértices adjacentes ao vértice u.

         vB = *it; // Recebe o valor para que o iterador está apontando
         if(cor[vB] == BRANCO){ // Se o vértice(vB) adjacente àquele que está sendo avaliado(vA) ainda não tiver sido descoberto (branco).

			 printf("%c,", vB);
             predescessor[vB] = vA; // O predecessor do vértice adjacente se torna o vértice que está sendo avaliado pela função(vA).
             DFS_visit(vB); // A função é chamada, recursivamente, para avaliar o vértice adjacente.
         }
         else cout << endl;
     }

     cor[vA] = PRETO; // Pinta de preto o vértice que está sendo avaliado pela função, já que todos os vértices descendentes dele já foram completamente avaliados (e também pintados de preto).
     termino[vA] = tempo; // Guarda o tempo em que todos os vértices descendentes daquele que está sendo avaliado (vA) são completamente avaliados (e também pintados de preto). Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vértice pela segunda vez.
     tempo++; // O tempo passa, uma vez que o fim desta função representa o percorrimento de uma aresta (aproximando-se da raiz).
}


void DFS(int numeroDeVertices, int raiz){
    // Alocação dinâmica
    cor = new int[numeroDeVertices];
    predescessor = new int[numeroDeVertices];
    descoberta = new int[numeroDeVertices];
    termino = new int[numeroDeVertices];

    int vA;

    for(vA=0; vA < numeroDeVertices; vA++){ // Coloca os valores iniciais em todas as posições dos vetores cor, descoberta e predecessor.

        cor[vA] = BRANCO;
        descoberta[vA] = INF;
        predescessor[vA] = NUL;
    }

    tempo = -1; // Inicia tempo como -1 pois, como a função DFS_visit o incrementa em seu inicio, o valor deste ser? 0 na execução da função para o primeiro vértice (raiz).
    for(int i=1; i <= numeroDeVertices; i++){
		if(cor[i]==BRANCO)
    		DFS_visit(i); // Chama uma segunda função, que será utilizada recursivamente, enviando o vértice raiz como parâmetro.
	}
}


int main(){
	int T;
	cin >> T;
	for (int j = 0; j < T;  j++)
	{
		int N,M;
		cin >> N >> M;
	    g = new vector<int> [130];
	    /*
	    vector< vector<int> > g;
		for (int i = 0; i <= n; i++){
	    	g.push_back( vector<int>(m+1, 0));// Create an empty row---declaração de lista de adjacencia com vector
	    }

	    */

	    char x,y;
	    
		for(int i=0;i<M;i++)
		{
			cin >> x >> y;
			g[x].push_back(y);
	  		g[y].push_back(x);
		}
		
		cout << "Case #" << j+1 << ":" << endl;
		
		DFS(130, 97); //primerio parâmetro = tamanho do grafo; segundo parâmetro = vértice inicial
		/*for(int i=1;i<=N;i++){
			cout<<i<<" = "<<descoberta[i]<<endl;
		}*/
	}
	system ("pause");
    return 0;
}
