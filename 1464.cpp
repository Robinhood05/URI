/***** ALGORITMO CONVEX-HULL *************************************************/
//    Dado um grupo de pontos, calcula o menor polígono convexo que abrange a todos os mesmos.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
class Ponto {
	public:
        int x;
        int y;
        
        Ponto(){} //construtor padrao
        
        Ponto(int x, int y){ //construtor
        	this -> x = x;
        	this -> y = y;
        }
};

bool operator <(const Ponto &p1, const Ponto &p2) {
	return p1.x < p2.x || (p1.x == p2.x && p1.y < p2.y);
}

// Função que auxilia a construção das bordas superior e inferior.
// Verifica a "curva" da ligação entre dois pontos consecutivos em x, o retorno tem o seguinte comportamento:
//    - > 0 caso ocorra uma "curva" para esquerda;
//    - < 0 caso ocorra uma "curva" para a direita;
//    - == 0 caso os pontos sejam coolineares.
int verCurva(const Ponto &O, const Ponto &A, const Ponto &B)
{
	return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

// Retorna a lista de pontos que representam o convex hull em ordem antí-horária.
// Obs: O último ponto da lista retornada é o mesmo que o primeiro.
vector<Ponto> convex_hull(vector<Ponto> P)
{
	int n = P.size(), k = 0;
	vector <Ponto> H(2*n);
 
	// Ordena os pontos
	// Obs: Conforme função que sobrecarrega o operador "<"
	sort(P.begin(), P.end());
 
	// Constrói a borda superior do convex hull
	for (int i = 0; i < n; i++) {
		while (k >= 2 && verCurva(H[k-2], H[k-1], P[i]) < 0) k--;
		H[k++] = P[i];
	}
 
	// Constrói a borda inferior do convex hull
	for (int i = n-2, t = k+1; i >= 0; i--) {
		while (k >= t && verCurva(H[k-2], H[k-1], P[i]) < 0) k--;
		H[k++] = P[i];
	}

	H.resize(k);
	
	return H;
}

int main ()
{
	int N = 1, X, Y, retorno;

	while (cin >> N  && N != 0)
	{
		vector <Ponto> entra, sai;
		vector <Ponto> ::iterator it;
		vector <Ponto> ::iterator at;
		vector <Ponto> HULL;
		
		for (int i = 0; i < N; i ++)
		{
			cin >> X >> Y;
			Ponto p(X,Y);
			entra.push_back(p);
		}
		
		sai = entra;
		HULL = convex_hull(sai);
		
		int aux = 0;
		
		while (sai.size() > 2)
		{
			aux ++;
			
			HULL.clear();
			HULL = convex_hull(sai);
			
			for (int i = 0; i < HULL.size(); i++)
			{
				for (int j = 0; j < sai.size(); j ++)
				{
					if (HULL[i].x == sai[j].x && HULL[i].y == sai[j].y)
						sai.erase(sai.begin() + j);
				}
			}
			/*
			cout << "sai: " << endl;	
			for (int j = 0; j < sai.size(); j ++)
				{
					cout << sai[j].x << "  " << sai[j].y << endl;	
				}
			
			cout << "hull: " << endl;
			
			for (int i = 0; i < HULL.size(); i++)
			{
				cout << HULL[i].x << "  " << HULL[i].y << endl;	
			}*/
		}
		/*
		}
		while (sai.size() > 2)
		{
			
			
			for (it = sai.begin(); it != sai.end(); ++it){
				for (at = HULL.begin(); at != HULL.end(); ++at)
				{
					if (it == at)
						sai.pop_back();
				}
			}
		}*/
		//cout << sai.size() << endl;
		if (aux % 2 == 0) cout << "Do not take this onion to the lab!" << endl;
		else cout << "Take this onion to the lab!" << endl;
	}
	
	
	return 0;
}
