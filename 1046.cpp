#include <stdio.h>
#include <stdlib.h>


int main(void)
 {
	int A=0, B=0, T=0;

    scanf("%d %d", &A, &B);

    if (A>B)
	{
		T=24-A+B;
		printf("O JOGO DUROU %d HORA(S)\n", T);
	}
 	else
 	{
	if (A==B)
	{
		printf("O JOGO DUROU 24 HORA(S)\n", T);
	}
	else
	{
		T=B-A;
		printf("O JOGO DUROU %d HORA(S)\n", T);
	}
	}

    system("pause");
    return 0;
}
