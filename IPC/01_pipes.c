#include <stdio.h>
#include <unistd.h>
int main() {
    int fd[2];
    char msg[] = "Hello", buf[20];
    pipe(fd);
    write(fd[1], msg, sizeof(msg));
    read(fd[0], buf, sizeof(buf));
    printf("%s\\n", buf);
    return 0;
}
