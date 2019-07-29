#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int x=100;
    int rc = fork();
    if(rc==0){ // si es el hijo fork retorna 0
        printf("El valor de x al inicio en el hijo: %d\n",x);
        x=30;
        printf("El valor por el que cambio  x en el hijo es: %d\n",x);

    }
    else if(rc>0){
        printf("El valor de x al inicio en el padre: %d\n",x);
        x=50;
        printf("El valor por el que cambio  x en el padre es: %d\n",x);

    }
  
}