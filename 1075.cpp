#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int N,X;
    
    scanf("%d",&N);
    
    for(X=2;X<=10000;X+=N)printf ("%d\n",X);
        
	system ("pause");
    return 0;
}
