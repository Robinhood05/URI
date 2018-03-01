#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;
main()
{
	int N, i, j, L, t=0;

	while (N != 0)
	{
	scanf("%d", &N);

	if (N==0)
	{
		system("pause");
		return 0;
	}

 	int M[N][N];

	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
		   	if (j==0 && i==0) M[i][j]=1;
            else if (j>i) M[i][j]= (M[i][j-1])*2;
            else M[i][j]= (M[i-1][j])*2;
		}
	}
	
	L=M[i-1][j-1];
	
	while (L!=0)
	{
		L=L/10;
		t++;
	}
	
	for (i=0; i<N; i++)
	{
	for (j=0; j<N; j++)
		{
			if (j==0) cout<< fixed<< setw(t)<<M[i][j];
			else cout<< fixed<< " " << setw(t)<<M[i][j];
   		}
		printf("\n");
		}
	printf("\n");
	
	t=0;
	}
}
