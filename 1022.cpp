#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
int mdc(int x, int y){
  if (!y) return x;
  else return mdc(y, x % y);
}
int main()
{
	int qt, N1, D1, N2, D2, NR, DR, X;
	char op;

	scanf("%d", &qt);

	for (int i=0; i < qt; i++)
	{
		scanf("%d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2);

		if (D1 > D2)
		{
            swap(N1, N2);
            swap(D1, D2);

			if (op == '-')
				N1 = - N1;
		}

		NR = 0;
		
		if (op == '+')
		{
		    DR = D1 * D2;
			NR = N1 * D2;
            NR += N2 * D1;
		}
		
		else if (op == '-')
		{
		    DR = D1 * D2;
			NR = N1 * D2;
            NR -= N2 * D1;
		}
		
		else if (op == '*')
		{
		    DR = D1 * D2;
			NR = N1 * N2;
		}
		
		else if (op == '/')
		{
		    DR = D1 * N2;
			NR = N1 * D2;
		}
		
		printf("%d/%d = ", NR, DR);
		int j = 0;

		X = mdc(NR, DR);

		if (X < 0)
		{
		    DR = - DR / X;
		    NR = - NR / X;
		}
		else
		{
            DR = DR / X;
		    NR = NR / X;
		}
		printf("%d/%d\n", NR, DR);
	}
	system("pause");
	return 0;
}
