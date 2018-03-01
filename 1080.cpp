#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int N=0, a, b, c, d=0, e;


	for (a=1; a<=100; a++)
	{
		scanf("%d", &b);
		N++;
		if(b>d)
		{
			e=N;
			d=b;
		}
	}
	

	printf("%d\n", d);
	printf("%d\n", e);
	

	system ("pause");
	return 0;
}
