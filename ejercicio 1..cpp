  Desarroollar  un  programa  que  indique  si  el  número  introducido  por  el  usuario  es  par  oimpar.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void)
{int n;
printf("introduce un numero\n");
scanf("%d" , &n);
if(n%2==0)
{
	printf("%d es par", n);
}
else
{
	printf("%d es impar", n);
}
getch();
return 0;
}


