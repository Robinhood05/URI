#include <stdio.h>
#include <stdlib.h>


main()
{
	int N, i;
	float X, Y;

	scanf("%d", &N);
	
	for(i=0; i<N; i++)
	{
	scanf ("%f %f", &X, &Y);

	X=X/Y;
	
	if (Y==0) printf("divisao impossivel\n");
	else printf("%.1f\n", X);
	}


	system("pause");
	return 0;
}
