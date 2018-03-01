#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double A, B, C, temp, P;

	scanf ("%lf %lf %lf", &A , &B, &C);

	if (A < B){
		temp=A;
		A=B;
		B=temp;
	}

	if (A < C){
		temp=A;
		A=C;
		C=temp;
	}

		if (B < C){
		temp=B;
		B=C;
		C=temp;
	}

	if (A>=B+C)
	{
		P= ((A + B))*C/(2.0);
		printf("Area = %.1lf\n", P);
	}

	else
	
	{
		P = A + B +C;
		printf("Perimetro = %.1lf\n", P);
	}
	
	
	system ("pause");
	return 0;
}
