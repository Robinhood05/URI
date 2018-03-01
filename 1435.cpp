#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int N, i, j, m;
	
	while(N!=0)
	{
		scanf("%d", &N);
		
		if (N==0) return 0;

		int M[N+1][N+1];

		for (i=0; i<N; i++)
		{
			for (j=0; j<N; j++)
			{
			if (i+j<N)
			{
				if (i<j)M[N][N]=i+1;
				else M[N][N]=j+1;
   			}

			else
			{
				if (abs(i-N) < abs(j-N)) M[N][N]=abs(i-N);
				else M[N][N]=abs(j-N);
			}


			if (j==N-1) printf("%3d", M[N][N]);
			else printf("%3d ", M[N][N]);
			}
		printf("\n");
		}
		printf("\n");
	}

	system("pause");
}

