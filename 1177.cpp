#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i, N[1000], T, j;

 	scanf("%d", &T);
 	
 	j=0;

    for (i=0; i<1000; i++)
    {
		N[i]=j;
		
  		if (j%T==0) j=0;

		printf("N[%d] = %d\n", i, j);
		
		j++;
	}


    system ("pause");
    return 0;
}
