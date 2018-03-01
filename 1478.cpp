#include <stdio.h>
#include <stdlib.h>

main()
{
	int X, i, j;
	
	while (X!=0)
	{
	scanf("%d", &X);
	
	int M[X][X];
	
	if (X==0) return 0;
	
	for (i=0; i<X; i++)
	{
		for (j=0; j<X; j++)
		{
		   	if (j==i) M[i][j]=1;
			else if (j>i) M[i][j]= j-i+1;
			else M[i][j]= i-j+1;

            if (j==X-1) printf("%3d", M[i][j]);
			else printf("%3d ", M[i][j]);
			}
		printf("\n");
		}
		printf("\n");
	}

	system("pause");
}

	
