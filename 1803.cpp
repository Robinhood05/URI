#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;
main()
{
	int i, j, tam_s, qnt_c, Vet[80]={}, F=0, L=0, N;
	string S;

	for(i=0; i<4; i++)
	{
        cin>>S;
        
        tam_s = S.size();
        qnt_c = tam_s - 2;
        
		F+= (S[0] - '0') * pow(10, (3-i));
		L+= (S[tam_s - 1] - '0') * pow(10, 3-i);
		
		for(j=1; j<=qnt_c; j++)
		{
			Vet[i] += (S[j] - '0') * pow(10, 3-i);
		}
	}
	for(i=0; i<S.size(); i++)
	cout<<Vet[i]<<endl;
    cout<<endl;

	char a;
	
	for (i=1; i<=qnt_c; i++)
	{
		a=(Vet[i] * F + L) % 257;
		cout<<a;
	}
	cout<< endl;

	system("pause");
	return 0;
}
