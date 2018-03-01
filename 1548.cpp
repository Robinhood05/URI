#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;
int main()
{
	int N;
	
	scanf("%d", &N);
	for(int i=0; i<N; i++)
	{
		int nota, A;
		
		list <int> ordemE;
		list <int> :: iterator it;
		list <int> ordemC;
		list <int> :: iterator at;
		
		scanf("%d", &A);
		for (int j=0; j<A; j++)
		{
			scanf("%d", &nota);
			ordemE.push_back(nota);
		}
		ordemC = ordemE;
		ordemC.sort();
        ordemC.reverse();
        
        int cont = 0;
        
        for(it = ordemC.begin(), at = ordemE.begin(); it != ordemC.end(); it++, at++)
        {
			if (*it == *at) cont++;
		}
		printf ("%d\n", cont);
	}
        

	system("pause");
	return 0;
}
