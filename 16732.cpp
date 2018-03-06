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
			if (vet[N[i]] == 1)
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
			}
			
			else if ((vet[N[i]] != 0 && vet[N[i]] != vet[N[i + 1]]) || (vet[N[i]] == ' ' && vet[N[i + 1]] == ' '))
			{
				while (vet[N[i]] > 0)
				{
					if (vet[N[i]] > 9)
					{
						printf("9");
						vet[N[i]] -= 9;
					}
					else
					{
			    		printf ("%d", vet[N[i]]);
			    		vet[N[i]] -= 9;
			    	}
			    		
			    		
			    	printf ("%c", N[i]);
			    }
			}
			cont++;
		}
		printf("\n");
	}
	
	
	system ("pause");
	return 0;
}
