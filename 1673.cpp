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
		int cont = 1;
		bool entra = true;

		for (int i=0; i < N.size(); i++)
		{
			if (cont == 1 && N[i] != N[i + 1])
			{
				if (entra)
				{
					printf ("1");
					entra = false;
				}

				if (N[i] == '1')
					printf ("1");

				printf ("%c", N[i]);
			}

			else
			{
		    	if (entra == false)
				{
					printf("1");
					entra = true;
				}
				
				if (N[i] != N[i + 1] )
				{
					while (cont > 0)
					{
						if (cont > 9)
							printf("9");

						else
						{
				    		printf ("%d", cont);
							if (cont == 1)
							    entra = false;
						}
						
						cont -= 9;
				    	printf ("%c", N[i]);
				    }
				    cont = 1;
				}
				else
				    cont++;
			}
		}
		if (entra == false)
		{
			printf("1");
			entra = true;
		}
	
		printf("\n");
	}


	system ("pause");
	return 0;
}
