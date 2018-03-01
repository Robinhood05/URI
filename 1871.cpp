#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int X, Y, i;
	char Z[25];

 	while (X!=0 && Y!=0)
 	{
		cin>> X >> Y;
		
		if(X!=0 && Y!=0)
		{
			sprintf(Z,"%d", X+Y);

			for (i=0; i<strlen(Z); i++)
			{
				if(Z[i]!='0')
				{
					printf("%c", Z[i]);
				}
			}
			cout<<endl;
		}
	}
	

	system ("pause");
	return 0;
}
