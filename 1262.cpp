#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int C=0, cont=0, i, N;
	string L;
	
	while (true)
	{
		cin>>L;
		if(L=="EOF") break;
		else
		{
			cin>>N;
			
			for(i=0;i<L.size(); i++)
			{
				if (L[i]=='W')
				{
					C++;
					cont=0;
				}
				else if (L[i]=='R')
				{
					cont++;
					if(cont==1) C++;
					if(cont==N) cont=0;
				}
				
			}
			cout<<C<<endl;
			cont=0;
			C=0;	
		}
	}
	
	
	system("pause");
	return 0;
}
