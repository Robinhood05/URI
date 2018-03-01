#include <stdio.h>
#include <stdlib.h>

int main(void)
 {

    int N, i;
    float B, C, D, M;

	scanf("%d", &N);

	for (i=0; i<N; i++)
	{
		scanf("%f %f %f", &B, &C, &D);
		M = (B * 2 + C * 3 + D * 5)/10.0;
		printf("%.1f\n", M);
	}



	system("pause");
    return 0;
}
