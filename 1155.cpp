#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
    float S = 0;
    int i;
    
	for (i = 1; i <= 100; i++)
	{
    	S += 1 / (float) i;
    }
    
    printf("%.2f\n", S);
    
    return 0;
}
