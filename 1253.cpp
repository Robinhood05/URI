#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int N, n, i, j;
	string P;
	
	cin>>N;
	for(i=0; i<N; i++)
	{
		cin>>P>>n;
		for (j=0; j<P.size(); j++)
		{
			P[j]-=n;
			if (P[j]<65)P[j]+=26;
		}
		cout<<P<<endl;
	}
	
	system("pause");
	return 0;
}

