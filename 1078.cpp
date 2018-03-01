#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int X, S, i;

	scanf("%d", &X);

	for (i=1; i<=10; i++)
	{
		S=X*i;
		printf("%d x %d = %d\n", i, X, S);
	}


	system ("pause");
    return 0;
}
