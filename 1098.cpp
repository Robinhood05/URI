#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double I=0, J, i, f=0, l=0;

	for(i=0; i<=32; i++)
	{
    	J=1+f+l;
    	if (I==0 || I==2 || I==1) printf("I=%.0lf ", I);
		else printf("I=%.1lf ", I);
		if (J==1 || J==2 || J==3 || J==4 || J==5) printf("J=%.0lf\n", J);
		else printf("J=%.1lf\n", J);
		f++;
		if (f==3){f=0; l=l+0.2; I=l;}
	}


	system ("pause");
	return 0;
}
