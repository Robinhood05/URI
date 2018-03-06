#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
    float S = 0;
    int i, j = 1;
    
	for (i = 1; i <= 39; i += 2)
	{
    	S += (float) i / (float) j;
    }
    
    printf("%.2f\n", S);
    
    return 0;
}
