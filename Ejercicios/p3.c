#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{

    int rc = fork();
    int estado;
  
    if(rc==0){ // si es el hijo fork retorna 0
        printf("Hello\n");


    }
    else if(rc>0){ // si es el padre retorna positivo, generalmente el pid del padre
        waitpid(rc,&estado,0);
         printf("Goodbye\n");

    }
     
   
  
}