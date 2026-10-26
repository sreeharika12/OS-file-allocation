#include <stdio.h>
#include <pthread.h>

typedef struct {
    char ip[16];
    int busy;
    pthread_mutex_t lock;
    pthread_cond_t cond;
} RouterMonitor;

RouterMonitor mon = {"192.168.1.1", 0, PTHREAD_MUTEX_INITIALIZER, PTHREAD_COND_INITIALIZER};

void set_ip() {
    pthread_mutex_lock(&mon.lock);
    while (mon.busy) pthread_cond_wait(&mon.cond, &mon.lock);

    mon.busy = 1;
    printf("Enter new Router IP: ");
    scanf("%15s", mon.ip);
    printf("Updated IP: %s\n", mon.ip);
    mon.busy = 0;

    pthread_cond_signal(&mon.cond);
    pthread_mutex_unlock(&mon.lock);
}

void* worker(void* arg) { set_ip(); return NULL; }

int main() {
    pthread_t t1, t2;
    pthread_create(&t1, NULL, worker, NULL);
    pthread_create(&t2, NULL, worker, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
