#include <stdio.h>

int main(){
 int rc = fork();
 if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
	int wh = wait(NULL);
        printf("hello, I am child (pid:%d)\n", (int) getpid());
	printf("valor de retorno del wait en el hijo: %d\n", wh);

    } else {
        // parent goes down this path (original process)
	int wc = wait(NULL);
        printf("hello, I am parent of %d (pid:%d)\n",
	       rc, (int) getpid());
	printf("Valor retorno del wait: %d\n", wc);

    }
 return 0;
}
