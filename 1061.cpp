#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int X1, H1, M1, S1, X2, H2, M2, S2;

	scanf ("Dia %d", &X1);
	scanf ("%d : %d : %d\n", &H1, &M1, &S1);
	scanf ("Dia %d", &X2);
	scanf ("%d : %d : %d", &H2, &M2, &S2);

	X1 = X2 - X1;
	H1 = H2 - H1;
	M1 = M2 - M1;
	S1 = S2 - S1;
	
	if (S1<0) {M1=M1-1;S1=S1+60;}
	if (M1<0) {H1=H1-1;M1=M1+60;}
	if (H1<0) {X1=X1-1;H1=H1+24;}
    
   

	printf ("%d dia(s)\n", X1);
	printf ("%d hora(s)\n", H1);
    printf ("%d minuto(s)\n", M1);
	printf ("%d segundo(s)\n", S1);


	system ("pause");
	return 0;
}
