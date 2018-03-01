#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int A, B, i=1, f;

	scanf("%d %d", &A, &B);

	for(f=1; f<=B; f++)
	{
		if (A==i)
		{
			printf("%d\n", f);
			i=1;
		}
		else
		{
			printf("%d ", f);
			i++;
		}
	}


	system ("pause");
	return 0;
}
