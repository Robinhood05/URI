#include <stdio.h>
#include <stdlib.h>


int main(void)
 {
	double R=0, V=0;

    scanf("%lf", &R);

	V=(4.0/3.0)*3.14159*R*R*R;

 	printf("VOLUME = %0.3lf\n", V);


    system("pause");
    return 0;
}
