#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int a = 10;

    pid_t pid = fork();
    if (pid == -1) {
        fprintf(stderr, "Error: fork failed\n");
        exit(1);
    }
    else if (pid == 0) {
        a++;
        printf("%d\n", a);
        exit(0);
    }
    else {
        wait(NULL);
        printf("%d\n", a);
        exit(0);
    }
}
output:
gcc example.c -o example