#include <stdio.h>
#include <stdlib.h>


int main(void)
 {
	double A=0, B=0, M=0;

    scanf("%lf %lf", &A, &B);

	M=(3.5*A+7.5*B)/11;

 	printf("MEDIA = %.5lf\n", M);

    system("pause");
    return 0;
}
