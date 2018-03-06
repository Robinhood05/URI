#include <iostream>
#include <stdio.h>
#include <string>
#include <set>

using namespace std;
int main()
{
	int n, N;
	
	cin >> N;
	set <int> H;
	
	for (int i = 0; i < N; i++)
	{
		cin >> n;
		int A;
		
		for (int j = 0; j < n; j++)
		{
			cin >> A;
			H.insert(A);
		}
		for (int j = 0; j < n; j++)
		{
			cout << H.top();
			H.pop();
		}
	}
}
