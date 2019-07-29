#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char *argv[])
{

    int rc = fork();
    int estado;
    char *args[]={"/bin/ls","/",NULL} ;
    char *argum[]={"ls","/",NULL} ;
    char *path;
    char *env={path,NULL};
    if(rc==0){
        int rc2=fork();
        if(rc2==0){
            int rc3=fork();
            if(rc3==0){
               int rc4=fork();
                if(rc4==0){
                    int rc5=fork();
                     if(rc5==0){
                         int rc6=fork();
                        if(rc6==0){
                    
        
                        }
                         else if(rc6>0){
                            wait(&estado);
                            printf("Desde el hijo 5\n");
                            execvpe("/bin/ls",argum,0);
                   

                    }     
        
                     }
                     else if(rc5>0){
                        wait(&estado);
                        printf("Desde el hijo 4\n");
                        execle("/bin/ls","ls" ,"/" ,(char*) NULL,env);
                   

                    }     
        
                 }
                 else if(rc4>0){
                    wait(&estado);
                    printf("Desde el hijo 3\n");
                    execlp("ls", argum[0], argum[1],(char *)NULL);
                   

                }     
        
            }
             else if(rc3>0){
                wait(&estado);
                printf("Desde el hijo 2\n");
                execv("/bin/ls",args);
                //execle("/bin/ls",args[0],args[1]);

            }
        
        }
        else if(rc2>0){
            wait(&estado);
            printf("Desde el hijo 1\n");
            execvp("ls",args);

        }

    }
    else if(rc>0){
        wait(&estado);
        printf("Desde el padre\n");
        execl("/bin/ls", "/bin/ls", "/", NULL);

    }
     

    
  
}