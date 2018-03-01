#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int main()
{
	int N, i;
	string jqp1, jqp2;

	cin >> N;

	for (i=0; i<N; i++)
	{
		cin >> jqp1 >> jqp2;

		if (jqp1 == jqp2) cout << "empate" << '\n';

		else if (jqp1=="tesoura" && jqp2=="papel"||
				 jqp1=="papel" && jqp2=="pedra" ||
				 jqp1=="pedra" && jqp2=="lagarto" ||
				 jqp1=="lagarto" && jqp2=="spock" ||
				 jqp1=="spock" && jqp2=="tesoura" ||
				 jqp1=="tesoura" && jqp2=="lagarto" ||
				 jqp1=="lagarto" && jqp2=="papel" ||
				 jqp1=="papel" && jqp2=="spock" ||
				 jqp1=="spock" && jqp2=="pedra" ||
				 jqp1=="pedra" && jqp2=="tesoura")cout<<"rajesh"<<'\n';
		
		else if (jqp2=="tesoura" && jqp1=="papel"||
				 jqp2=="papel" && jqp1=="pedra" ||
				 jqp2=="pedra" && jqp1=="lagarto" ||
				 jqp2=="lagarto" && jqp1=="spock" ||
				 jqp2=="spock" && jqp1=="tesoura" ||
				 jqp2=="tesoura" && jqp1=="lagarto" ||
				 jqp2=="lagarto" && jqp1=="papel" ||
				 jqp2=="papel" && jqp1=="spock" ||
				 jqp2=="spock" && jqp1=="pedra" ||
				 jqp2=="pedra" && jqp1=="tesoura")cout<<"sheldon"<<'\n';
	}
	
	system ("pause");
}
