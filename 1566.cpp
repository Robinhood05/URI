#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;
int main()
{
	int N, A, i, j;
	scanf("%d", &N);
	
	for (i=0; i<N; i++)
	{
  		int cm, k, vet[232] = {};
  		bool prim = true;
  		
		scanf("%d", &A);
		
		for (j=0; j<A; j++)
		{
			scanf()
			vet[cm]++;
		}
	    
	    for (j=20; j<=230; j++)
	    {
			if (vet[j] > 0)
			{
    			for (k=0; k < vet[j]; k++)
    			{
					if (prim)
					{
						printf("%d", j);
						prim = false;
					}
					else printf(" %d", j);
				}
			}
		}
		puts("");
	}
	
	system("pause");
	return 0;
}
