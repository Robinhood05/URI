#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int i, N, j, tam;
	string P1, P2, R;

	cin>>N;

	for(i=0; i<N; i++)
	{
		cin>> P1>> P2;
		if (P1.size()>=P2.size()) tam=P1.size();
		else tam=P2.size();
		
		for(j=0; j<tam; j++)
		{
			if(j<P1.size())cout<< P1[j];
			if(j<P2.size())cout<< P2[j];
		}
		cout<<endl;
	}


	system("pause");
	return 0;
}

