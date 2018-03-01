#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
using namespace std;
int main ()
{
	//float auxF;
	int N, aux;
	int total, qtd;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i ++)
	{
		scanf("%d", &qtd);
		total = 0;
	
		do {
			total += qtd;
			
			aux = sqrt(total);
			
			cout << pow(aux, 2) << "   " << total << endl;
		}
		while ( pow(aux, 2) != total );
		
		cout << "Caso #" << i + 1 << ": " << total << endl; 
	}
	
	return 0;
}*/

bool calcularQuadradoPerfeito (int num) {
	int aux = sqrt(num);
	printf("%f    %d", pow(aux, 2), num);
	if (pow(aux, 2) == num)
		return false;
	return true;
}

using namespace std;
int main ()
{
	int N = 1, total, qtd;
	
	int primo[1000][2], num = 1, div;
	
	while (num <= 1000)
	{
		div = 0;
		
		for (int i = 2; i < N; i ++)
		{
			if (N % i == 0)
				div ++;
		}
		
		if (div == 0)
		{
			primo[num][0] = N;  
			num ++;
		}
		N ++;
	}
	int j = 1, qtdAux;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i ++)
	{
		scanf("%d", &qtd);
		total = qtd;
		qtdAux = qtd;
		
		while (true) {
			while (qtdAux >= primo[j])
			{
				if (qtdAux % primo[j] == 0)
					qtdAux = qtdAux / primo[j];
				else
					j ++; 
			}
			if (qtdAux == 0)
				break;
			else 
			{
				total += qtd;
				
			}			
		}
		cout << "Caso #" << i + 1 << ": " << total << endl; 
	}
	
	return 0;
}
