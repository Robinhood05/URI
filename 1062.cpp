#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack> 

using namespace std;
int main()
{
    int N, chefe[1001];
    bool parar = false;
     
    while(scanf("%d",&N))
	{
        if(N == 0)
		{
			break;
		}
        
		while(true)
		{
			int i, j;
            stack <int> vag;
             
            for(i = 1; i <= N; i++)
			{
                scanf("%d",&chefe[i]);
            
			    if(chefe[i] == 0)
				{
                    parar = true;
                    printf("\n");
                    break;
                }
            }
            
            i = 1;
            j = 1;
            
            while(true)
			{					
                for(i = 1; i <= N; i++)
				{
                    if(!vag.empty() && vag.top() == chefe[i])
					{
                        vag.pop();
                    }
                    
					else if(j <= N)
					{
                        vag.push(j);
                        j++;
                        
                        if(vag.top() == chefe[i])
						{
                            vag.pop();
                        }
                    }
					else
					{
						parar = true;
                        break;
                    }
                }
                
                i++;
                    
            }
            if (parar)
            	printf("\n");
            
			if(vag.empty()) 
				printf("Yes\n");
            
			else  
				printf("No\n");
        }
    }
    
	return 0;
} 
