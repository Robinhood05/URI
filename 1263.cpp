#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int i, cont=0, V[100], C;
	string F;

	while(getline(cin, F)&& F!="EOF")
	{
		C=0;
		cont=0;
		int V[100]={};
		
		for(i=0; i<F.size(); i++)
		{
			if (i==0 && F[i]!= 32) V[0]=F[i];
			else if (F[i-1]== 32)
			{
				C++;
				V[C]=F[i];
			}
		}
		for (i=1; i<=C; i++)
		{
			if (i==1 && (V[i]==V[i-1] || V[i]==V[i-1]+32 || V[i]==V[i-1]-32))
				cont++;
			else if (V[i]==V[i-1] || V[i]==V[i-1]+32 || V[i]==V[i-1]-32)
				if (V[i]!=V[i-2] && V[i]!=V[i-2]+32 && V[i]!=V[i-2]-32)
					cont++;
		}
		cout<<cont<<endl;
	}

	system("pause");
	return 0;
}
