#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
main()
{
	int V[46], i, N;
	
	cin>> N;

	for (i=0; i<N; i++)
	{
		if (i==0)
		{
			V[i]=0;
		}
		else if (i==1)
		{
			V[i]=1;
		}
		else
		{
			V[i]=V[i-1]+V[i-2];
		}
		if (i!=N-1)
		{
			cout<< V[i] << " ";
		}
		else
		{
			cout<< V[i];
		}

	}
	cout<<endl;
	
	system ("pause");
	return 0;
}
