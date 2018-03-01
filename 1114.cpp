#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int var=0;

	
	while  (var != 2002)
	{
		scanf("%d", &var);
		if (var != 2002)
		printf("Senha Invalida\n");
	}
		printf("Acesso Permitido\n");

	system ("pause");
	return 0;
}
