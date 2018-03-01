#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {

	int X=0, Y=0, Z=0;

	scanf("%d %d", &X, &Y);
	
	if (X==Y)printf("%d\n", Z);
	else if (X<Y)
	    {
			for (X=X+1; X<Y; X++);
   			{
   				if (X%2==1 || X%2==-1)
   				{
					Z+=X;
     				printf("%d\n", Z);
				}
			}
		}
		
    else if (Y<X)
	    {
			for (Y=Y+1; Y<X; Y++)
   			{
   				if (Y%2==1 || Y%2==-1)
   				{
					Z=Z+Y;
     			    printf("%d\n", Z);
				}
			}
		}





	system("pause");
    return 0;
}
