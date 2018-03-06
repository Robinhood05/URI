#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int N, i, j, k;
	string F;
	
	cin>>N;
	for (i=0; i<N; i++)
	{
		if (i==0)cin.ignore();
		getline(cin, F);
		for(j=0; j<F.size(); j++)
		{
			if(F[j]>=65 && F[j]<=90 || F[j]>=97 && F[j]<=122)F[j]+=3;
		}
		for(j=0, k=F.size()-1; k>=F.size()/2; k--, j++) swap(F[j], F[k]);
		
		for(j=F.size()/2; F[j]!='\0'; j++) F[j]--;
		
		cout<<F<<endl;
	}
	
	
	
	system("pause");
	return 0;
}
