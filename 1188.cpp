#include <stdio.h>
#include <stdlib.h>

main()
{
	double M[12][12], S=0;
	int i, j, X;
	char L;

	scanf("%c", &L);

	for (i=0; i<12; i++)
	{
		for (j=0; j<12; j++)
		{
			scanf("%lf", &M[i][j]);
			if (j+i>11 && j<i)
			{
				if (L=='S')
				{
					S+=M[i][j];
				}

				if (L=='M')
				{
                    S+=M[i][j];
				}
			}
		}
	}
    if (L=='M') S=S/30;

	printf("%.1lf\n", S);




	system("pause");
	return 0;
}
