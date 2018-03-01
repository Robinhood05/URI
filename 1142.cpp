#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int N, i;

	scanf("%d", &N);

	for (i=1; i<=4*N; i++)
	{
		if (i%4==0)printf("PUM\n");
		else printf("%d ", i);
	}


	system ("pause");
    return 0;
}
