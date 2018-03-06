#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	long long int N, i, j, cont=0;
	string A, B;
	
	cin>>N;
	for (i=0; i<N; i++)
	{
		cont=0;
		cin>>A>>B;
		for (j=0; j<B.size(); j++)
		{
			if (A[A.size()-B.size()+j]==B[j])
			{
				cont++;
			}
		}
		if (cont==B.size()) cout<<"encaixa"<<endl;
		else cout<<"nao encaixa"<<endl;
	}
	
	
	system("pause");
	return 0;
}
