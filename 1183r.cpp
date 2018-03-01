#include <stdio.h>
#include <stdlib.h>

main()
{
	int N, i, j;

	while (scanf("%d", &N) != EOF)
	{
 	int M[N][N];

	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
		   	if (j+i==N-1) M[i][j]=2;
		   	else if (j==i) M[i][j]=1;
		   	else M[i][j]=3;

            printf("%d", M[i][j]);
		}
		printf("\n");
		}
	}
}


