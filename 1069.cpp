#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>

using namespace std;
int main()
{
	int N;
	bool tem = false; 
	
	cin >> N;
	
	for (int i=0; i < N; i++)
	{
		string AD;
		int cont = 0, dim = 0;
		cin >> AD;
		
		stack <char> DIA;
		
		for (int j=0; j < AD.size(); j++)
		{
			DIA.push(AD[j]);
		}
		
		for (int j=0; j < AD.size(); j++)
		{
			if (DIA.top() == '>')
			{
				cont++;
			}
			
			if (cont > 0)
				tem = true;
			else 
				tem = false;
				
			if (DIA.top() == '<' && tem)
			{
				dim++;
				cont--;
			}
			DIA.pop();
		}
		cout << dim << endl;
	}
	system ("pause");
	return 0;
}
