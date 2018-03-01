#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double TA, T, A, i, C=0, R=0, S=0;
	double PC, PR, PS;
	char L;

	scanf("%lf\n", &T);

	for(i=0; i<T; i++)
	{
        scanf("%lf %c", &A, &L);
    	if (L=='C')C=C+A;
    	else if (L=='R')R=R+A;
    	else if (L=='S')S=S+A;

	}
	TA=C+R+S;
	
	PC=(C/TA)*(100);
	PR=(R/TA)*(100);
	PS=(S/TA)*(100);

	printf("Total: %.0lf cobaias\n", TA);
	printf("Total de coelhos: %.0lf\n", C);
	printf("Total de ratos: %.0lf\n", R);
	printf("Total de sapos: %.0lf\n", S);
	printf("Percentual de coelhos: %.2lf %%\n", PC);
	printf("Percentual de ratos: %.2lf %%\n", PR);
	printf("Percentual de sapos: %.2lf %%\n", PS);

	system ("pause");
	return 0;
}
