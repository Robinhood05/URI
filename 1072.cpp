#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int A, X, i, L, M;

	scanf ("%d\n", &A);

	L=0;
	M=0;

	for (i=0; i<A; i++)
	{
		scanf("%d", &X);
		if (X>=10 && X<=20)L++;
		if (X<10 || X>20)M++;
	}

	printf ("%d in\n", L);
	printf ("%d out\n", M);
    



	system ("pause");
	return 0;
}
