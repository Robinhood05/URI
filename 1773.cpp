#include<iostream>
#include<vector>
#include<queue>
#include <cstdlib>

using namespace std;

#define PRETO 0 //ja passei por ele e tinha a chave
#define CINZA 1 // tem a chave e não passei ainda
#define BRANCO 2 // Não passei por ele


int *molchav;
int *cores;

void chaves(int totalChaves, int u){
	
	for (int i = 0; i < totalChaves - 1 ; i++){
		if(u == molchav[i])
		{
			cores[i + 2] = CINZA;
			//cout <<"cor: " << cores[i+2] << endl;
		}
	}
}

vector< vector<int> > g; // Lista de Adjacência

// Algoritmo calcula a menor distancia para alcançar todos os vertices do grafo partindo de um vertice inicial.
void bfs(int inicio, int qtd){
    cores = new int[qtd + 1];
    

	//para os 3 vetores a seguir, cada posição do vetor representa um vertice do grafo.
    vector<int> d(g.size(), -1); // Vetor de distância minima para alcançar o vertice.
	vector<int> p(g.size(), -1); // Vetor que armazena o pai de cada vertice.
    vector<bool> cor(g.size(), false); // Define se cada vertice ja foi encontrado ou não.

	queue<int> Q; // Fila que define a ordem de acesso aos vertices.

	cores[1] = CINZA;
	
	for (int i = 2; i <= g.size(); i++)
	{
        cores[i] = BRANCO;
	}

	// Inicialização
    cor[inicio] = true; // Define a cor do vértice raiz como acessado.
    d[inicio] = 0; // Define a distância da raiz para ela mesma como 0.

    Q.push(inicio); // Enfileira a raiz.
	int cont = 0, numero = 0;
    // Enquanto a fila não estiver vazia.
    while(!Q.empty()){
		//cout << "entrou" << endl;

		
        int u = Q.front(); // Define u como sendo o vértice na frente na fila.
        cout << "u = " << u << " e cor = " << cores[u]<< endl;
        cout << cont << endl;
        if (cores[u] == CINZA)
        {
            cores[u] == PRETO;
            chaves(qtd, u);
			cont = 0;
			numero ++;
			//cout << "ENTROU!" << endl;
			Q.pop(); // Desenfileira.
			//cout << "vertice atual: " << u << endl;

			//cores[u] = PRETO;

	        // Para todo vertice adjacente à "u".
	        for(int i = 0; i < g[u].size(); i++){

            // Se o vertice adjacente à "u" não tiver sido encontrado.
				if(cor[g[u][i]] == false){
					//cout << "g[u][i] = " << g[u][i] << endl;
		            Q.push(g[u][i]); // Enfileira o vertice adjacente.
		            cor[g[u][i]] = true; // Define o vertice adjacente como encontrado.
		            d[g[u][i]] = d[u]+1; // Define a distancia minima para alcançar o vertice.
		            p[g[u][i]] = u; // Define o pai do vertice adjacente como "u".

	            }
	        }
		}
		
        else {
			Q.push(u);
			Q.pop();
			cont ++;
		}
		if (cont > qtd)
		{
			cout << "nao" << endl;
			break;
		}
		else if (numero == qtd)
		{
            cout << "sim" << endl;
            break;
		}//cout << "Analizando; " << Q.front() << endl;
    }
    while (!Q.empty())
    {
		Q.pop();
	}

}

int main(){
    int N, M;
    
    while (cin >> N >> M)
	{
		int teste[N];
		//N = quanotos vertices são; M = quantas ligações tem

        molchav = new int[N + 1];
        

			
		int x, y;
		g.resize(N + 1);

		/*
	    vector< vector<int> > g;
		for (int i = 0; i <= n; i++){
	    	g.push_back( vector<int>(m+1, 0));// Create an empty row---declaração de lista de adjacencia com vector
	    }

	    */
		int cont = 0;
		
		for(int i = 0; i < M; i++)
		{
			//int contx = 0, conty = 0;
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
			/*
			for (int k = 0; k <= i; k++)
			{
				if (teste[k] == x)
				    contx ++;
				if (teste[k] == y)
				    conty ++;
			}
			if (contx == 0)
			{
				teste[cont] = x;
				cont ++;
			}
			if (conty == 0)
			{
				teste[cont] = y;
				cont ++;
			}
			*/
		}
		/*int entra = false;
		if (cont  < N)
		    entra = true;*/
		int a;

		for (int i = 0; i < N - 1; i++)
		{
			cin >> a;
			molchav[i] = a;
		}
		
		bfs(1, N); //passa o vetor "inicio" com o número digitado
		
		/*if (entra)
		    //cout << "nao" << endl;
		int contTeste = 0;
		for (int i = 1; i < N ; i++)
		{
			if(cores[i] == CINZA)
			    contTeste ++;
		}
		/*cout <<  contTeste << endl;
		if (contTeste == N - 1)
		    cout << "sim" << endl;
		else
		    cout << "nao" << endl;
		//g.clear();*/
		
		

	}


	system("pause");
    return 0;
}
