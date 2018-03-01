#include <cstdlib>
#include <iostream>
#include <list>
#include <time.h>
#include <algorithm>


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
int pular;
using namespace std;

list<int> *g;


void DFS_visit(int vA, int spc){
     int vB, i = 0;

     list<int>::iterator it;
     cor[vA] = CINZA; // Pinta de cinza o vértice que está sendo avaliado no momento, o que significa que ele acaba de ser descoberto.
     tempo++; // O tempo passa, uma vez que a chamada desta função representa o percorrimento de uma aresta (afastando-se da raiz).
     descoberta[vA] = tempo; // Guarda o tempo em que o vértice foi descoberto. Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vértice pela primeira vez.
	 spc ++;
     for(it = g[vA].begin(); it!=g[vA].end(); it++){ // Varre o vector, passando por todos os vértices adjacentes ao vértice u.

         vB = *it; // Recebe o valor para que o iterador está apontando
         if(cor[vB] == BRANCO){ // Se o vértice(vB) adjacente àquele que está sendo avaliado(vA) ainda não tiver sido descoberto (branco).
     		 pular = 1;
             predescessor[vB] = vA; // O predecessor do vértice adjacente se torna o vértice que está sendo avaliado pela função(vA).

			 for (int temp = 0; temp < spc; temp++)
			 	cout << "  " ;
			 cout << predescessor[vB] << "-"<< vB << " pathR(G," << vB << ")" << endl ;

			 DFS_visit(vB, spc); // A função é chamada, recursivamente, para avaliar o vértice adjacente.
         }
         else //if (cor[vB] == CINZA)
		 {
            for (int temp = 0; temp < spc; temp++)
			 	cout << "  " ;
            cout <<vA<< "-" <<vB << endl;
            pular = 1;

  		 }

  		 i++;
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
    

    int vA, spc = 0;

    for(vA=0; vA < numeroDeVertices; vA++){ // Coloca os valores iniciais em todas as posições dos vetores cor, descoberta e predecessor.

        cor[vA] = BRANCO;
        descoberta[vA] = INF;
        predescessor[vA] = NUL;
    }
	
    tempo = -1; // Inicia tempo como -1 pois, como a função DFS_visit o incrementa em seu inicio, o valor deste ser? 0 na execução da função para o primeiro vértice (raiz).
    for(int i=0; i <= numeroDeVertices; i++){
		if(cor[i]==BRANCO)
		{
            pular = 0;
      		DFS_visit(i, spc); // Chama uma segunda função, que será utilizada recursivamente, enviando o vértice raiz como parâmetro.

	  		if (pular == 1)
	  			cout << endl;

  		}
	}
}


int main(){
	int qtd;
	cin >> qtd;
	for (int j = 0; j < qtd; j++)
	{
		int N,M;
		cin>>N>>M;
		
	    g = new list<int> [N+1];
	    /*
	    vector< vector<int> > g;
		for (int i = 0; i <= n; i++){
	    	g.push_back( vector<int>(m+1, 0));// Create an empty row---declaração de lista de adjacencia com vector
	    }

	    */

	    int x,y;
		for(int i=0;i<M;i++){
			cin>>x>>y;
			g[x].push_back(y);
		}

  		list <int> ::iterator it;
		
  		for(int i = 0; i < N; i++)
		{
			//sort(g[i].begin(), g[i].end());
			g[i].sort();
			//cout << "ENTROU"<< endl;
		}
		cout << "Caso " << j + 1 << ":" << endl;
		
		DFS(N, 0); //primerio parâmetro = tamanho do grafo; segundo parâmetro = vértice inicial
/*
		for(int i=0; i <= N - 1 ; i++){
   cout<<i<<" = "<<descoberta[i]<<endl;
		}*/
	}

	system ("pause");
    return 0;
}
