#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int modulo,num,elev;
	printf("Introduce el numero: ");
	scanf("%d",&num);
	modulo=num%2;
	if(modulo==0)
	{
		printf("\n El numero es par");
		elev= (num,2);
			printf("\nEl numero elevado al cuadrado es: %d ",elev);
	}
	else
	{
		printf("\nEl numero es impar");
		elev=(num,3);
			printf("\nEl numero elevado al cubo es: %d ",elev);
	}
	return 0;
	getch();
}
