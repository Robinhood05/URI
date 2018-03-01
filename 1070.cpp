#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int A, B, C, D, E, F;

	scanf ("%d", &A);

	if (A%2==0)
	{
        A=A+1;
		B=A+2;
		C=B+2;
		D=C+2;
		E=D+2;
		F=E+2;
	}
	else
	{
		B=A+2;
		C=B+2;
		D=C+2;
		E=D+2;
		F=E+2;
	}
	
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("%d\n", D);
	printf("%d\n", E);
	printf("%d\n", F);

	system ("pause");
	return 0;
}
