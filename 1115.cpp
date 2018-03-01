#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int Y,X;


	while (X!=0 || Y!=0)
	{
        scanf("%d %d", &X, &Y);
        if (X==0 || Y==0)break;
        
    	if (X>0 && Y>0)printf ("primeiro\n");
		else if (X<0 && Y>0)printf ("segundo\n");
		else if (X<0 && Y<0)printf ("terceiro\n");
		else if (X>0 && Y<0)printf ("quarto\n");
	}
    

	system ("pause");
    return 0;
}
