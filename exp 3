#include <pthread.h>
int spo2;
void *sensor(void *arg) {
    printf("Thread 1: Reading SpO2 = %d%%\n", spo2);
    return NULL;
}
void *monitor(void *arg) {
    if (spo2 < 90)
        printf("Thread 2: ALERT - Low SpO2!\n");
    else
        printf("Thread 2: SpO2 is Normal.\n");
    return NULL;
}
void *alert(void *arg) {
    printf("Thread 3: Alert system checked.\n");
    return NULL;
}
int main() {
    pthread_t t1, t2, t3;
    printf("Enter SpO2 level: ");
    scanf("%d", &spo2);
    pthread_create(&t1, NULL, sensor, NULL);
    pthread_create(&t2, NULL, monitor, NULL);
    pthread_create(&t3, NULL, alert, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    printf("Monitoring completed.\n");
    return 0;
}
