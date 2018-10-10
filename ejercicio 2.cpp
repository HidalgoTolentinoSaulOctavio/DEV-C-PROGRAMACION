#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
 int main (void)
 {
 	int calificacion;
 	printf(" introduce la calificacion");
 	scanf("%d, &calificacion");
 	if(calificacion>=70)
 	{
 		printf("\n felicidades has aprobado");
	 }
	 else
	 {
	 	printf("\n continua con tus estudios nesecitas esforzarte mas");
	 }
	 getch ( );
	 return 0;
 }
