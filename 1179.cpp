#include <stdio.h>
#include <stdlib.h>

main()
{
	int par[5], impar[5], Qp=0, Qi=0, X, i, j;

	for(i=0; i<15; i++)
	{
		scanf("%d", &X);

		if (X%2==0)
		{
			par[Qp] = X;
			Qp++;

			if (Qp==5)
			{
				for (j=0; j<5; j++) printf("par[%d] = %d\n", j, par[j]);

				Qp=0;
			}
  		}

		else
		{
			impar[Qi] = X;
			Qi++;

			if (Qi==5)
			{
				for (j=0; j<5; j++) printf("impar[%d] = %d\n", j, impar[j]);

				Qi=0;
			}
		}
	}


	for (j=0; j<Qi; j++)
	printf("impar[%d] = %d\n", j, impar[j]);

	for (j=0; j<Qp; j++)
	printf("par[%d] = %d\n", j, par[j]);

	system("pause");
	return 0;
}
