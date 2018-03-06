#include<iostream>
#include <cstring>
#include <algorithm>
#include <list>
  
using namespace std;  
int main()
{
  
    int T, D, I, B;
    list <int> precobolo;
    
    cin >> T;
    
    for(int i=0; i < T; i++)
	{
        cin >> D >> I >> B;
          
        int p[I];
        list <int> precobolo;
        list <int> ::iterator it;
          
        for(int j=0; j < I; j++)
            cin >> p[j];
            
        for(int j=0; j < B; j++)
		{
            int Q;
            
            cin >> Q;
            
            for(int k=0; k < Q; k++)
			{
                int II, qt;
                
                cin >> II >> qt;
                precobolo.push_back(p[II] * qt);
            }
        }
        precobolo.sort();
        
        for(it = precobolo.begin(); it != ++it; it++)
        	cout << D/(*it) << endl;
    }
}
