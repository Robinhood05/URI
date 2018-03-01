#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    long long int N, b, i=2, X[60];
    
    scanf("%lld", &N);
    
    for (i=0; i<=60; i++)
    {
		X[i]=X[i-1]+X[i-2];
		X[0]=0;
		X[1]=1;
	}
    
    
	for (i=0; i<N; i++)
	{
		scanf("%lld", &b);

		printf ("Fib(%lld) = %lld\n", b, X[b]);
	}


    system ("pause");
    return 0;
}
