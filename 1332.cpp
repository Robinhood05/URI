#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int N, i;
	string P;

	cin>> N;

	for (i=0; i<N; i++)
	{
		cin>>P;
		if ((P[0]=='o' && P[1]=='n') || (P[0]=='o' && P[2]=='e') || (P[2]=='e' && P[1]=='n'))
		{
			cout<<"1"<<endl;
		}
		else if ((P[0]=='t' && P[1]=='w') || (P[0]=='t' && P[2]=='o') || (P[2]=='o' && P[1]=='w'))
		{
			cout<<"2"<<endl;
		}
		else if (P.size()==5)
		{
			cout<<"3"<<endl;
		}
	}



	system ("pause");
	return 0;
}
