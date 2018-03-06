#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;
int main()
{
    int N, i;
    
    while(true)
	{
        scanf("%d",&N);
        
        if (N == 0) 
			break;
			
        list <int> carta;
        
        for (i = 1; i <= N; i++)
            carta.push_back(i);
                  
        printf("Discarded cards: ");
        
    	while(carta.size() > 1)
    	{
    		if(carta.size() != 2) 
				printf("%d, ", carta.front());
            else 
				printf("%d\n", carta.front());
				
            carta.pop_front();
            carta.push_back(carta.front());
            carta.pop_front();
		}
        printf("Remaining card: %d\n",carta.front());
    }
    
	system ("pause");
	return 0;
}
