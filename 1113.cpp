#include <stdio.h>
#include <stdlib.h>


main()
{
	int X, Y;
	
	while (X!=Y)
	{
	scanf ("%d %d", &X, &Y);
	
	if (X>Y) printf("Decrescente\n");
	else if (Y>X) printf("Crescente\n");
	}
	
	
	system("pause");
	return 0;
}
