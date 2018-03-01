#include <stdio.h>
#include <stdlib.h>

int main(void)
 {

	int i;
    double a=0,b,c=0;


	for (i=0; i<6; i++)
	{
        scanf("%lf",&b);
        if(b>0) 
		{
			c++;
			a = a + b;
		}
    }
    a= a / c;
    
    printf("%.0lf valores positivos\n", c);
    printf("%.1lf\n", a);


	system("pause");
    return 0;
}
