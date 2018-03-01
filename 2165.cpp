#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int main()
{
	int N, i;
	string TWEET;

	cin >> N;

	for (i=0; i<N; i++)
	{
		cin >> TWEET;
		
		if (TWEET>140c) cout << "MUTE" << endl;
		
		else cout << "TWEET" << endl;

		
	}

	system ("pause");
}
