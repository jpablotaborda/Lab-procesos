#include <stdio.h>
#include<fcntl.h> 
#include<errno.h> 
extern int errno; 
int main(){
 char buffer[200], item[100];
 FILE *ptr;
 ptr = fopen("foo.txt", "a+");
 //pt = fopen("foo.txt", "r");
 int rc = fork();
 if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        printf("hello, I am child (pid:%d)\n", (int) getpid());
	for(int i = 0; i<100;i++){
	 fputs("Hijo",ptr);
	}
	fgets(item, 100, ptr);
        printf("%s\n", item);

    } else {
        // parent goes down this path (original process)
        printf("hello, I am parent of %d (pid:%d)\n",
	       rc, (int) getpid());
	for(int e=0; e<100;e++){
	 fputs("Pera",ptr);
	}
	fgets(buffer, 100, ptr);
        printf("%s\n", buffer);

    }
 return 0;
}
