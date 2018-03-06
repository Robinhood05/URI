#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int X, Y, A, B=0;
    
    scanf("%d %d", &X, &Y);
    
    while(Y<=0)
        scanf("%d", &Y);
        
    for(A=1; A<=Y; A++)
    {
        B+=X;
        X++;
    }
    printf("%d\n",B);
    
    system ("pause");
    return 0;
}
