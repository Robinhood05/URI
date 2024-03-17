#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;
int main()
{
	string P;
	
	map <char, float> nota;

	nota.insert(pair <char, float> ('W', 1));
	nota.insert(pair <char, float> ('H', (float) 1/2));
	nota.insert(pair <char, float> ('Q', (float) 1/4));
	nota.insert(pair <char, float> ('E', (float) 1/8));
	nota.insert(pair <char, float> ('S', (float) 1/16));
	nota.insert(pair <char, float> ('T', (float) 1/32));
	nota.insert(pair <char, float> ('X', (float) 1/64));
	
	while ( cin >> P && P != "*")
	{
		int cont = 0;
		float comp = 0;
		
		for (int i=0; i < P.size(); i++)
		{
			if (P[i] != '/')
			{
				comp += nota[P[i]];
			}
			else 
			{
				if (comp == 1)
					cont++;
				comp = 0;
			}
		}
		cout << cont << endl;		
	}
	
	system ("pause");
	return 0;
}
	#why my code showing wrong answer
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
 using namespace std;

 
int
main ()
{
  
map < char, float >mp;
  
mp.insert (pair < char, float >('W', 1));
  
mp.insert (pair < char, float >('H', (float) 1 / 2));
  
mp.insert (pair < char, float >('Q', (float) 1 / 4));
  
mp.insert (pair < char, float >('E', (float) 1 / 8));
  
mp.insert (pair < char, float >('S', (float) 1 / 16));
  
mp.insert (pair < char, float >('T', (float) 1 / 32));
  
mp.insert (pair < char, float >('X', (float) 1 / 64));
  
 
string s;
  
while (cin >> s && s != "*")
	{
	  
int sum = 0;
	  
int counts = 0;
	  
for (int i = 0; i < s.size (); i++)
		{
		  
if (s[i] != '/')
			{
			  
sum += mp[s[i]];
			
}
		  else
			{
			  
if (sum == 1)
				{
				  
counts++;
sum = 0;
				
}
			  
		
			}
		
}

		

	  
cout << counts << endl;
	
}
  
system ("pause");
  
return 0;

}
