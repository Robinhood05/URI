#include <stdio.h>
#include <stdlib.h>


int main(void)
 {
	float X=0, Y=0, D=0;

    scanf("%f\n%f", &X, &Y);

	D=X/Y;

 	printf("%0.3f km/l\n", D);

    system("pause");
    return 0;
}
