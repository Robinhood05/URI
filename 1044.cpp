#include <stdio.h>
#include <stdlib.h>


int main(void)
 {
	int A=0, B=0;

    scanf("%d %d", &A, &B);

    if ((A%B==0) || (B%A==0))
	{
		printf("Sao Multiplos\n");
	}
 	else
 	{
		printf("Nao sao Multiplos\n");
	}


    system("pause");
    return 0;
}
