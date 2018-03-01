#include <stdio.h>
#include <stdlib.h>


int main(void)
 {
	float A=0, B=0, C=0, TRI=0, CIR=0, TRA=0, QUA=0, RET=0;

    scanf("%f %f %f", &A, &B, &C);

	TRI=A*C/2;
	CIR=3.14159*C*C;
	TRA=(A+B)*C/2;
	QUA=B*B;
	RET=A*B;

 	printf("TRIANGULO: %0.3f\n", TRI);
    printf("CIRCULO: %0.3f\n", CIR);
    printf("TRAPEZIO: %0.3f\n", TRA);
    printf("QUADRADO: %0.3f\n", QUA);
    printf("RETANGULO: %0.3f\n", RET);

    system("pause");
    return 0;
}
