#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i, N[10], X;

	scanf("%d", &X);
	
    for (i=0; i<10; i++)
    {
		N[i]=N[i-1]*2;
		N[0]=X;
		
		printf("N[%d] = %d\n", i, N[i]);

	}


    system ("pause");
    return 0;
}
