#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float X, A[100];
    int i;
    
	for (i=0; i<100; i++)
	{
		scanf("%f", &X);
		
		A[i]=X;
		if (X<=10)	printf("A[%d] = %.1f\n", i, A[i]);
	}


    system ("pause");
    return 0;
}
