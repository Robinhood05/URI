#include <stdio.h>
#include <stdlib.h>

main()
{
	double M[12][12], S=0;
	int i, j, X;
	char L;
	
	scanf("%d\n",&X);
	scanf("%c", &L);

	for (i=0; i<12; i++)
	{
		for (j=0; j<12; j++)
		{
			scanf("%lf", &M[i][j]);
		}
	}
	
	if (L=='S')
	{
		for (j=0; j<12; j++)
		S+=M[X][j];
	}
	
	if (L=='M')
	{
		for (j=0; j<12; j++)
		{
			S+=M[X][j];
		}
	S=S/12;
	}
	
	printf("%.1lf\n", S);
	
	
	

	system("pause");
	return 0;
}
