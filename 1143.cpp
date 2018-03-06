#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	int i, X;
	
	cin >> X;
	
	for (i=1; i<=X; i++)
	{
		cout << i << " " << i*i << " " << i*i*i << endl;
	}
}
