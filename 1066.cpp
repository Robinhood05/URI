#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int A, B, C, D, E, i, h, j, k;

	scanf ("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
	i=0;
	h=0;
	j=0;
	k=0;
	
	if (A>0)i++;
	if (B>0)i++;
	if (C>0)i++;
	if (D>0)i++;
	if (E>0)i++;

	if (A<0)h++;
	if (B<0)h++;
	if (C<0)h++;
	if (D<0)h++;
	if (E<0)h++;


	if (A%2==0)j++;
	if (B%2==0)j++;
	if (C%2==0)j++;
	if (D%2==0)j++;
	if (E%2==0)j++;

	k=5-j;

	printf("%d valor(es) par(es)\n", j);
	printf("%d valor(es) impar(es)\n", k);
	printf("%d valor(es) positivo(s)\n", i);
	printf("%d valor(es) negativo(s)\n", h);

	system ("pause");
	return 0;
}
