#include <stdio.h>
#include <pthread.h>
void *fun(void *arg) {
    printf("Hello from thread\\n");
    return NULL;
}
int main() {
    pthread_t t1, t2;
    pthread_create(&t1, NULL, fun, NULL);
    pthread_create(&t2, NULL, fun, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}
