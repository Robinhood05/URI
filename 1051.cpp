#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double S, P=0, L;

	scanf("%lf", &S);
	
	if (S<=2000)printf("Isento\n");
	else if(S>2000 && S<=3000)
	{
		P=S-2000;;
		L=(P*8)/(100.0);
		printf("R$ %.2lf\n", L);
	}

	else if((S>3000) && (S<=4500))
	{
		P=S-3000;
		L=(1000*8)/(100.0);
		L=L+(P*18)/(100.0);
		printf("R$ %.2lf\n", L);
	}
	
	else if(S>4500)
	{
		P=S-4500;
		L=(1000*8)/(100.0);
		L=L+(1500*18)/(100.0);
		L=L+(P*28)/(100.0);
		printf("R$ %.2lf\n", L);
	}
	
	

	system ("pause");
	return 0;
}
