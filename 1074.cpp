#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int X, N, i;


	scanf("%d\n", &N);

	for (i=1; i<=N;i++)
	{
		scanf("%d", &X);
		if (X==0)printf("NULL\n");
		else if (X%2==0)printf("EVEN ");
		else printf("ODD ");
		if (X>0)printf("POSITIVE\n");
		else if(X<0) printf("NEGATIVE\n");
	}
	
	system ("pause");
	return 0;
}
