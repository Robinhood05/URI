#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int N, cont=0, i, j, M;
	string F;

 	cin>>N;
	for (i=0; i<N; i++)
	{
		if (i==0) cin.ignore();
		getline(cin, F);
		
		int Vet[26]={};
		cont=0;
		
		for (j=0; j<F.size(); j++)
		{
			if (F[j]>=97 && F[j]<=122)
			{
				Vet[F[j]-'a']++;
			}
		}
		for (j=0; j<26; j++)
		{
			if(Vet[j]>0)
			{
				   cont++;
			}
		}
		
		if (cont==26) cout<<"frase completa"<<endl;
		else if (cont>13) cout<<"frase quase completa"<<endl;
		else cout<<"frase mal elaborada"<<endl;
	}


	system("pause");
	return 0;
}
