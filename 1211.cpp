#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;
int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		string num;
		list <string> tel;
		list <string> :: iterator it;
		list <string> :: iterator at;
		
		for (int i=0; i<N; i++)
		{
			cin >> num;
			tel.push_back(num);
		}
		tel.sort();
		
		int cont = 0;
		string temp1, temp2;

		for (it = tel.begin(); it!=tel.end(); it++)
		{
            temp1 = *it;
			at = it;
			at++;
   			temp2 = *at;
   			
   			if (at == tel.end())
   			    break;

			
			for (int i=0; i<num.size(); i++)
			{
				if (temp1[i] == temp2[i])
				{
					cont ++;
				}
				else
					break;
			}
		}


		printf("%d\n", cont);
	}

	system("pause");
	return 0;
}
