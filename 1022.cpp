#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	int qt, N1, D1, N2, D2, X, Y, Z;
	char op;
	
	scanf("%d", &qt);
	
	for (int i=0; i < qt; i++)
	{
		scanf("%d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2);
		
		X = D1 * D2;
		
		if (op == '+')
			Z = N1 * (X / D1) + N2 * (X / D2);
			
		else if (op == '-')
			Z = N1 * X / D1 - N2 * (X / D2);
			
		else if (op == '*') 
			Z = N1 * N2;
		
		printf ("%d / %d\n", Z/Y);
		
		if(Y < 0) 
			Y = -1 * Y;
			
        printf("%d / %d\n", Z / Y, X / Y);
        
        if (op == '/')
        {
        	X = D1 * N1;
            Z = N1 * D2;
            printf("%d / %d = ", Z, X);
            
            printf("%d / %d\n", Z / Y, X / Y);
		}
	}
	return 0;
}
