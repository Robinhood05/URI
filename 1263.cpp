#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int i, V[100], cont=0;
	string F;
	
	while(getline(cin, F)!="EOF")
	{
		for(i=0; i<F.size(); i++)
		{
			if (i==0 && F[0]!= 32) V[i]=F[i];
			else if (F[i-1]== 32) V[i]=F[i];
		}
		for (i=1; i<F.size(); i++)
		{
			if (V[i]==V[i-1])
			{
				if (i=1) cont++;
				else if(V[i-2]!=V[i]) cont++;
			}
		}
		cout<<cont<<endl;
	}

	system("pause");
	return 0;
}
