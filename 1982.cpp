/***** ALGORITMO CONVEX-HULL *************************************************/
//    Dado um grupo de pontos, calcula o menor polígono convexo que abrange a todos os mesmos.
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

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
	vector<Ponto> H(2*n);
 
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
		vector <Ponto> P;
		
		vector <Ponto> HULL;
		
		for (int i = 0; i < N; i ++)
		{
			cin >> X >> Y;
			Ponto p(X,Y);
			P.push_back(p);
		}
		
		HULL = convex_hull(P);
		
		float dist = 0;
		
		for (int i = 0; i < HULL.size() - 1; i ++)
		{
			//cout << HULL[i].x << "  " << HULL[i].y << endl;	
			//cout << HULL[i+1].x << "  " << HULL[i+1].y << endl;	
			dist += sqrt((pow(HULL[i].x - HULL[i + 1].x, 2)) + (pow(HULL[i].y - HULL[i + 1].y, 2)));
			
		}
		printf("Tera que comprar uma fita de tamanho %.2f.\n", dist);
	}
	
	return 0;
}
