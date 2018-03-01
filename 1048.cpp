#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	double SI, SF, R;
	int A;

	scanf ("%lf", &SI);

	if (SI<=400.00)
	{A=15;SF=(SI*(100+A))/100;}
	
	else if (SI<=800.00 && SI>=400.01)
	{A=12;SF=(SI*(100+A))/100;}
	
	else if (SI<=1200.00 && SI>=800.01)
	{A=10;SF=(SI*(100+A))/100;}

	else if (SI<=2000.00 && SI>=1200.01)
	{A=7;SF=(SI*(100+A))/100;}
	
	else if (SI>=2000.01)
	{A=4;SF=(SI*(100+A))/100;}

    R=abs(SF-SI);


	printf ("Novo salario: %.2lf\n", SF);
	printf ("Reajuste ganho: %.2lf\n", R);
    printf ("Em percentual: %d %%\n", A);



	system ("pause");
	return 0;
}
