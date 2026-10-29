#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
    if (fork() == 0) {
        printf("Child exits\\n");
        exit(0);
    } else {
        sleep(10);
        printf("Parent exits\\n");
    }
    return 0;
}
