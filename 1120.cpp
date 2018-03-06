#include <iostream>
#include <string>
#include <stdio.h>
#include <list>

using namespace std;
int main()
{
	string num;
	char M;
	
	while (true)
	{
		cin >> M >> num;
		
		if (M == '0' && num == "0")
		{
			break;
		}
		list <char> imp;
		list <char> ::iterator it;
		bool entra = true;
		
		for (int i=0; i < num.size(); i++)
		{
			if (M != num[i])
				imp.push_back(num[i]);
		}
		
		if (imp.empty())
			printf("0\n");
			
		else 
		{
			for (it = imp.begin(); it != imp.end(); it++)
			{
				if (*it == '0' && entra)
				{
					
				}
				else
				{
					printf("%c", *it);
					entra = false;
				}		
			}
			if (entra)
				printf("0");
			puts("");
		}
	}
	
}
