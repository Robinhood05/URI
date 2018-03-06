#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int i, j, li, ci, lf, cf, Img[50][50], X, Y, k, z;
	string I;
	
	while(true)
	{
		cin>>li>>ci;
		if (li==0 && ci==0) break;
		
		for (i=0; i<li; i++)
		{
			cin>>I;
			for (j=0; j<ci; j++)
			{
				Img[i][j]=I[j];
			}
		}
		
		cin>>lf>>cf;
		
		X=lf/li;
		Y=cf/ci;
		
		for (i=0; i<lf; i++)
		{
			for(z=0; z<X; z++)
			{
				for(j=0; j<cf; j++)
				{
					I=Img[i][j];
					for (k=0; k<Y; k++)
					{
						cout<<I; 
					}
				}
				cout<<endl;
			}
		}
	}
	system("pause");
	return 0;
}
