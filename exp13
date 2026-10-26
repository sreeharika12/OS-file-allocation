#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, head, total_movement = 0;
    int req[50], visited[50] = {0};

    printf("Enter number of requests: ");
    scanf("%d", &n);

    printf("Enter disk track requests (e.g., product catalog/cart read positions):\n");
    for (int i = 0; i < n; i++) {
        printf(" Request %d: ", i + 1);
        scanf("%d", &req[i]);
    }

    printf("Enter current head position: ");
    scanf("%d", &head);

    printf("\nExecution Sequence: %d", head);

    // SSTF Algorithm
    for (int i = 0; i < n; i++) {
        int min_dist = 1e9, next_idx = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && abs(req[j] - head) < min_dist) {
                min_dist = abs(req[j] - head);
                next_idx = j;
            }
        }

        visited[next_idx] = 1;
        total_movement += min_dist;
        head = req[next_idx];
        printf(" -> %d", head);
    }

    printf("\nTotal Head Movement: %d tracks\n", total_movement);
    return 0;
}
