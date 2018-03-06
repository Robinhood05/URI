#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	int C=0, A=0, G=0, D=0;
	
	while (C != 4)
	{
		if (C==1)
		{
			A+=1;
		}
		
		if (C==2)
		{
			G+=1;
		}
		
		if (C==3)
		{
			D+=1;
		}
		cin>>C;
	}
	
	cout << "MUITO OBRIGADO"<< endl;
	cout << "Alcool: "<< A << endl;
	cout << "Gasolina: "<< G << endl;
	cout << "Diesel: " << D << endl;
}
