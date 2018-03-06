#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;
int main()
{
	int N, P[100];
	
	scanf("%d", &N);
	
	P['('] = 0;
	P[')'] = 0;
	P['+'] = 1;
	P['-'] = 1;
	P['*'] = 2;
	P['/'] = 2;
	P['^'] = 3;
	
	char temp;
	
	for (int i=0; i < N; i++)
	{
		string eq;
		bool entra = false;
		
		cin >> eq;
		
		stack <char> sinais;
		
		for (int j=0; j < eq.size(); j++)
		{
			if (eq[j] == '-' || eq[j] == '+' || eq[j] == '/' || eq[j] == '^' || eq[j] == '*' || eq[j] == '(' || eq[j] == ')' )
			{
                if (sinais.empty() || eq[j] == '(') 
                    sinais.push(eq[j]);
                
				else if (eq[j] == ')')
				{
                    while(!sinais.empty() && sinais.top() != '(') 
					{
                        printf("%c", sinais.top());
                        sinais.pop();
                    }
                    
                    sinais.pop();
                } 
				
				else 
				{
                    while (!sinais.empty()  && P[eq[j]] <= P[sinais.top()]) 
					{
                    	printf("%c", sinais.top());
                    	sinais.pop();
                	}
                	
                    sinais.push(eq[j]);
                }
            } 
			
			else 
			{
                printf("%c", eq[j]);
            }
        }

        while (sinais.size() > 0) 
		{
            printf("%c", sinais.top());
			sinais.pop();
        }
		printf("\n");
		
    }
	
	
	system("pause");
	return 0;
}
