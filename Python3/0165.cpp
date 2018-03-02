#include <stdio.h>
#include <stdlib.h>

int main(void)
 {

	int i, b,c=0;


	for (i=0; i<5; i++)
	{
        scanf("%d",&b);
        if(b%2==0)c=c+1;
    }

    printf("%d valores pares\n", c);
    


	system("pause");
    return 0;
}
