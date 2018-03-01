#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    long long int i, T;
    double N[100];


	scanf("%lld", &T);
		
    for (i=0; i<100; i++)
    {
		if (i==0) N[i]=T;
		else  N[i]=N[i-1]/2;
		
		
		printf("N[%lld] = %.4lf\n", i, N[i]);
	}
	

    system ("pause");
    return 0;
}
