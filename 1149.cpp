#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int A, N, i, S;

	scanf("%d %d", &A, &N);

	if (N<=0) scanf("%d", &N);

	for(i=1; i<=N; i++)
	{
		A= A+i;
	}

	
	printf("%d\n", S);


	system ("pause");
	return 0;
}
