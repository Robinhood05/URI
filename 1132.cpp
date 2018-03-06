#include <stdio.h>
#include <stdlib.h>

int main()
{
	int X, Y, i, S=0, temp;
	
	scanf("%d %d", &X, &Y);
	
	if (Y<X)
	{
		temp = X;
		X = Y;
		Y =temp;
	}
	
	for (i=X; i<=Y; i++)
	{
		if (i%13!=0)
		{
			S+=i;
		}
	}
	printf ("%d\n", S);
}
