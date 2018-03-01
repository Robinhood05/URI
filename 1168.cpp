#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int main()
{
	int N, i, T;
	string led;

	cin >> N;
	
	T=0;

	for (i=0; i<N; i++)
	{
		cin >> led;
		
		for (j=0; j<led.size(); j++)

		if ( ==1)T+=2;
		
		if ( ==2 || ==3 || ==5)T+=5;
		
		if ( ==4)T+=4;
		
		if ( ==6 || ==0 || ==9)T+=6;
		
		if ( ==7)T+=3;
		
		if ( ==8)T+=7;

		cout << T << "leds" << endl;
	}

	system ("pause");
}
