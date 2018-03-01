#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int I=1, J, i, f=0;

	for(i=0; i<=14; i++)
	{
		J=7-f;
		printf("I=%d J=%d\n", I, J);
		f++;
		if (f==3){f=0; I+=2;}

	}


	system ("pause");
	return 0;
}
