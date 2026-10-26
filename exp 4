#include <stdio.h>
#include <pthread.h>

char router_ip[16] = "192.168.1.1";
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void* update_ip(void* arg) {
    pthread_mutex_lock(&lock);
    printf("Enter new Router IP: ");
    scanf("%15s", router_ip);
    printf("Updated IP: %s\n", router_ip);
    pthread_mutex_unlock(&lock);
    return NULL;
}

int main() {
    pthread_t t1, t2;
    pthread_create(&t1, NULL, update_ip, NULL);
    pthread_create(&t2, NULL, update_ip, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}
