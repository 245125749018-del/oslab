#include <stdio.h>
#include <unistd.h>
int main() {
    if (fork() == 0) {
        sleep(2);
        printf("Child PPID: %d\\n", getppid());
    } else {
        printf("Parent exits\\n");
    }
    return 0;
}
