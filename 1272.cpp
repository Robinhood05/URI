#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int i, N, j;
	string F;
	
	cin>>N;
	
	for(i=0; i<=N; i++)
	{
		getline(cin,F);
		
	  	for (j=0; j<F.size(); j++)
		{
			if (F[j]!=' ' && F[j-1]==' ')
			{
				cout<< F[j];
			}
			else if (j==0 && F[j]!=' ')
			{
	        	cout<< F[j];
			}
			if (j==(F.size()-1))
			{
                cout<<endl;
			}
		}
	}

	system ("pause");
	return 0;
}
