#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int N, i, j, C;
	string X, Y;
	
	cin>>N;
	
	for(i=0; i<N; i++)
	{
		cin>>X >>Y;
		for (j=0; j<X.size(); j++)
		{
			while (X[j]!=Y[j])
			{
				if((X[j]-Y[j]<0 && abs(X[j]-Y[j])<=13) || (X[j]-Y[j]>0 && abs(X[j]-Y[j])>13))
				{
					C++;
				    X[j]+=1;
				    if (X[j]<=96)
					{
                        X[j]=122;
					}
				}
	            else if((X[j]-Y[j]>0 && abs(X[j]-Y[j])<13) || (X[j]-Y[j]<0 && abs(X[j]-Y[j])>13))
				{
					C++;
					X[j]--;
					if (X[j]>=123)
					{
                        X[j]=97;
					}
				}
			}
		}
		cout<<C<<endl;
	}



	system ("pause");
	return 0;
}

