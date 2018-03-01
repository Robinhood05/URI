#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i, X[10], N;
    
    for (i=0; i<10; i++)
    {
		scanf("%d", &N);
		
		if (N<=0) N=1;
		
		X[i]= N;
		
		printf("X[%d] = %d\n", i, X[i]);
	}
    
    
    system ("pause");
    return 0;
}
