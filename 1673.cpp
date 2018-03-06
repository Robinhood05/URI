#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;
int main()
{
	string N;
	
	while (cin >> N)
	{
		int vet[130];
		list <char> cod;
		list <char> :: iterator it;
		list <char> :: iterator at;
		list <char> :: iterator ot;
		        
		for (int i=0; i < N.size(); i++)
		{
			cod.push_back(N[i]);
		}
		
		int cont = 0;
		bool entra = true;
		char temp1, temp2;
		
		for (it = cod.begin(); it != cod.end(); it++)
		{
		    temp1 = *it;
			at = it;
			*at++;
		    temp2 = *at;
			
			for (ot = cod.begin(); ot == it; ot++)
				vet[*ot]++;
				
			if (vet[temp1] == 1)
			{
				if (entra)
				{
					printf ("1");
					entra = false;
				}
				
				if (temp1 == '1')
					printf ("1");
					
				printf ("%c", *it);
				
				if (vet[temp1] != vet[temp2] && entra == false)
				{
				    printf ("1");
					entra = true;
				}
			}
			
			else if (vet[temp1] > 1)
			{
				if (temp1 != temp2)
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
				    		
				    		
				    	printf ("%c", temp1);
				    	cont = 0;
				    }
				}
			    else
					cont++;
			}
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
