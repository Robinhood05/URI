#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>

using namespace std;
int main()
{
	string EQ;
	
	while (cin >> EQ)
	{
		int cont = 0;
		stack <char> eq;
		
		for (int i = 0; i < EQ.size(); i++)
		{
			if (EQ[i] == '(')
			{
				eq.push(EQ[i]);
			}
			else if (EQ[i] == ')')
			{
				if (eq.size() > 0)
				{
					cont++;
					eq.pop();
				}
				else
				{
					cont=-1;
					break;
				}
			}
			
		}
		if (eq.size() == 0 && cont >= 0)
			cout << "correct" << endl;
		else 
			cout << "incorrect" << endl;
	}
}
