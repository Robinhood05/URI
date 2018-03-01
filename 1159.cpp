#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int A, S, i;

	while (scanf("%d", &A) && (A!=0))
    {

		S=0;

		if(A%2!=0) A=A+1;
		
	        for (i=0; i<5; i++)
			{
				S+=A;
				A+=2;
    		}
    		
    		
		printf("%d\n", S);

	}
	
	//printf("\n");

    system ("pause");
    return 0;
}
