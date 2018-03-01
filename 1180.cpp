#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i, N, h, j, m;


	scanf("%d", &N);
	
	int X[N];
	
	m=1000;

    for (i=0; i<N; i++)
    {
		scanf("%d", X[i]);

		if (X[i]<m)
		{
			m=h;
			j=i;
		}
		printf("Menor valor: %d\n", m);
		printf("Posicao: %d\n", j);
	}



    system ("pause");
    return 0;
}
