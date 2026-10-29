#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
int main() {
    int id = shmget(IPC_PRIVATE, 1024, 0666 | IPC_CREAT);
    char *p = (char *)shmat(id, NULL, 0);
    sprintf(p, "Hello");
    printf("%s\\n", p);
    shmdt(p);
    shmctl(id, IPC_RMID, NULL);
    return 0;
}
