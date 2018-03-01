#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, X, Y, A, a, b, c=0, temp;

	scanf("%d", &N);
	
	for (A=1; A<=N; A++)
	{
  		scanf("%d %d", &X, &Y);
  		
  		if (Y<X)
  		{
			temp=X;
			X=Y;
			Y=temp;
		}
		
		
		if (X==Y)printf("0\n");
		
		else
		{
			for (b=X+1,c=0; b<Y; b++)
			{
				if (b%2==-1 || b%2==1) c+=b;
			}
			printf ("%d\n", c);
   		}

	}



    system ("pause");
    return 0;
}
