#include<iostream>
#include <cstring>
#include <algorithm>
  
using namespace std;  
int main()
{
  
    int T, D, I, B;
    
    cin >> T;
    
    for(int i=0; i < T; i++)
	{
        cin >> D >> I >> B;
          
        int p[I], precobolo[B];
        
        memset(precobolo, 0, sizeof(precobolo));
          
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
                precobolo[j] += p[II] * qt;
            }
        }
        sort(precobolo, precobolo + B);
        
        cout << D / (precobolo[0]) << endl;
    }
}
