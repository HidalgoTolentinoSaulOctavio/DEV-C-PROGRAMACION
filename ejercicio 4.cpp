#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int 1,2,3;
	printf("Introduce el primer numero: ");
	scanf("%d",&uno);
	printf("\nIntroduce el segundo numero: ");
	scanf("%d",&dos);
    printf("\nIntroduce el tercer numero: ");
	scanf("%d",&tres);

	if(uno>dos & uno>tres)
	{
	printf("\n El mayor es: %d",uno);
	}
	if(dos>uno & dos>tres)
	{
	printf("\n El mayor es: %d",dos);
	}
	if(tres>uno & tres>dos)
	{
	printf("\n El mayor es: %d",tres);
	}
	
	getch();
	return 0;
}
