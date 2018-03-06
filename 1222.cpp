#include <iostream>
#include <string>
#include <stdio.h>
#include <list>

using namespace std;
int main()
{
	int X, Y, Z;
	
	while (scanf("%d %d %d", &X, &Y, &Z))
	{
		string palavra;
		int linha = 1, pagina = 1, cont = 0, i, tam = 0;
		bool entra = false;
		
		for (i=0; i < X; i++)
		{
			cin >> palavra;
			
			tam += palavra.size();
			
			if (i != X - 1)
				tam++;
		}
		
		if (tam > Z)
		{
			linha = tam / Z;
			if (linha >= Y || linha == Y && tam % Z > 0)
			{
				pagina = linha / Y;
				
				if (tam % Z > 0)
					entra = true;
			}
		}
		if (entra)
			printf("%d\n", pagina + 1);
		else 
			printf("%d\n", pagina);
	}
}
