#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int i, C=0, X, Y;
	string R, A;

	cin >> R;
	X= R.size();
	for(i=0; i<X ; i++)
	{
		if (R[i]=='a' || R[i]=='e' || R[i]=='i' || R[i]=='o' || R[i]=='u')
		{
			A+=R[i];
		}
	}
	Y= A.size();
	for(i=0; i<Y ; i++)
	{
		if (A[i]==A[Y-1-i])
		{
   			C++;
		}
	}
	if (Y%2==0 && C==Y)
	{
		cout<<"S"<<endl;
	}
	else if (Y%2!=0 && C==Y)
	{
        cout<<"S"<<endl;
	}
	else
	{
		cout<<"N"<<endl;
	}


	system("pause");
	return 0;
}
