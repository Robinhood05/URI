#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int cont=0, i;
	string F;
	
	while(getline(cin, F))
	{
		cont=0;
		if (F.size()>50) break;
		for (i=0; i<F.size(); i++)
		{
			if(F[i]>=65 && F[i]<=90 || F[i]>=97 && F[i]<=122)
			{
				cont++;
				if (cont%2!=0)
				{
					if (F[i]>=97 && F[i]<=122) F[i]-=32;
				}
				else
				{
					if(F[i]>=65 && F[i]<=90) F[i]+=32;
				}
			}
		}
		cout<<F<<endl;
	}
	
	system("pause");
	return 0;
}
