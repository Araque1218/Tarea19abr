#include <stdio.h>
int main(int argc, char const *argv[])
{
int n,suma;
printf("Ingrese un numero entero positivo \n");
scanf ("%d", &n);
suma=((n* (n+1))/2);
printf("La suma de Gauss de ese numero es %d ", suma);
return 0;
}