#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <set>

using namespace std;
int main()
{
	int N, i;
	
	while (scanf("%d", &N) != EOF)
	{
		int para, I, F;
        multiset <int> P;
        multiset<int>::iterator it;
        
		for (i=0; i < N; i++)
		{
			scanf("%d %d", &I, &F);
			for (int j=I; j<=F; j++)
			{
				P.insert(j);
			}
		}
		scanf("%d", &para);
		
		int cont = 0, quant = 0;
		bool entra = true;
		
		for (it = P.begin(); it != P.end(); it++)
		{
			if (*it == para)
			{
				quant++;
				entra = false;
			}
			if (entra)
				cont++;
		}

		if (entra)
		    printf("%d not found\n", para);
  		else
  		    printf("%d found from %d to %d\n", para, cont, (cont + quant - 1));
  		    
	}

	system("pause");
	return 0;
}
