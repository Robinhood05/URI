#include <stdio.h>
#include <stdlib.h>

int main()
{
	float X, N=0;
	int i=0;
		
	while (i != 2)
	{
		scanf("%f", &X);
		
		if (X>=0 && X<=10)
		{
			N+=X;
			i++;
		}
		else printf("nota invalida\n");
	}
	N=N/2;
	printf("media = %.2f\n", N)	;
	
	system ("pause");
	return 0;
}
