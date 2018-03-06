#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	int n, k, i, j;
	string s, tmp;
	bool check;

	cin>> n; cin.ignore();

	for (i=0; i < n; ++i)
	{
		cin >> k; cin.ignore();
		check = false;

		for (j = 0; j < k; ++j)
		{
			getline(cin, s);
			if(j == 0)
				tmp=s;

			if(tmp!=s)
				check=true;
		}

		if(check) cout<< "ingles"<<'\n';
		else cout<< s<<'\n';
	}

	system("pause");
	return 0;
}
