#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;
int main()
{
	string N;
	
	while (getline(cin, N))
	{
		int vet[130] = {}, cont = 0;
		bool entra = true;
		
		for (int i=0; i < N.size(); i++)
		{
			vet[N[i]] ++;
		}
		
		for (int i=0; i < N.size(); i++)
		{
			cont++;
			if (cont == 1 && N[i+1] != N[i])
			{
				if (entra)
				{
					printf ("1");
					entra = false;
				}
				
				if (N[i] == '1')
					printf ("1");
				
				printf ("%c", N[i]);
				
				if (vet[N[i]] != vet[N[i + 1]])
				{
					printf ("1");
					entra = true;
				}
				cont = 0;
			}
			
			else if ((cont != 0 && vet[N[i]] != vet[N[i + 1]]) || (vet[N[i]] == ' ' && vet[N[i + 1]] == ' '))
			{
				while (cont > 0)
				{
					if (cont > 9)
					{
						printf("9");
						cont -= 9;
					}
					else
					{
			    		printf ("%d", cont);
			    		cont -= 9;
			    	}
			    	printf ("%c", N[i]);
			    }
			}
			
		}
		printf("\n");
	}
	
	
	system ("pause");
	return 0;
}
