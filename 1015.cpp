#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
	float x1=0, y1=0, x2=0, y2=0, d=0;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

 	printf("%.4f\n", d);

    system("pause");
    return 0;
}
