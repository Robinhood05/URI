#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int N, i;

	scanf("%d", &N);
	
	for (i=1; i<=N; i++)
	{
		printf("%d %d %d\n", i, i*i, i*i*i);
        printf("%d %d %d\n", i, i*i+1, i*i*i+1);
	}



	system ("pause");
	return 0;
}
