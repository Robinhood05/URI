#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;
int main()
{
	int N, i;

	scanf("%d", &N);
	
	for (i=0; i<N; i++)
	{
		int n;
		
		scanf("%d", &n);
		
		float P;
		string fruta;
		map <string, float> feira;
		
		for (int j=0; j<n; j++)
		{
			cin >> fruta >> P;
			feira[fruta] = (float)P;
		}
		
		float PT = 0;
		
		scanf("%d", &n);
		
		for (int j=0; j<n; j++)
		{
            cin >> fruta >> P;
            PT+= P * feira[fruta];
		}
		printf ("R$ %.2f\n", PT);
	}
            


	system("pause");
	return 0;
}
