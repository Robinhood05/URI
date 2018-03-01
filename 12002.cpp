#include<iostream>
#include<vector>
#include<queue>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int mudar(int numChar)
{
    int pos;

	if (numChar >= 'a')
		pos = numChar - 70;
	else
		pos = numChar - 65;
		
	return pos;
}
vector<int> *g;

int inserir(int numChar, int X, int Y){
	if (g[X][Y] == '|')
		g[X][Y] = numChar;
	
	else if (g[X][Y] > numChar)
	{
		X++;
		Y = 0;
	}
		
	
	else
	{
		X++;
		Y = 1;
	}
}

int main(){
    g = new vector<int> [54];
    
    for (int i = 0; i < 54; i ++)
    {
        g['|'].push_back('|');
        g['|'].push_back('|');
	}
    
    int j = 0;
    bool vet[130];
    string N;
    
	for (int i = 'A'; i <= 'z'; i++)
	{
        vet[i] = false;
	}
	
	while (cin >> N)
	{
		char M;

		if (N == "I")
		{
		    cin >> M;
		    vet[M] = true;
		    j++;
		    M = mudar(M);
		    //inserir(M, 0, 0);
		}

		else if (N == "INFIXA")
		{
			int p = 0;
   			for(int i = 0; i < 56; i ++)
			{
				if (vet['A'+ i] && p == 0)
				{
					printf("%c", 'A'+i);
					p = 1;
				}

				else if (vet['A'+i])
				    printf(" %c", 'A'+i);
			}
			cout << endl;
		}

		//else if (N == "POSFIXA")

		//else if (N == "PREFIXA")

		else if (N == "P")
		{
			cin >> M;
			
            if (vet[M])
            	printf("%c existe\n", M);
            
			else
				printf("%c nao existe\n", M);
		}
        
    }
	system("pause");
    return 0;
}
