#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of drones: ");
    scanf("%d", &n);

    float distance[n];

    // Enter distance of each drone
    for (int i = 0; i < n; i++)
    {
        printf("Enter distance of Drone-%d: ", i + 1);
        scanf("%f", &distance[i]);
    }

    printf("\nDRONE WORK ASSIGNMENT (FCFS)\n\n");

    // FCFS: assign work in arrival order
    for (int i = 0; i < n; i++)
    {
        printf("Work-%d -> Drone-%d | Distance = %.2f units\n",
               i + 1, i + 1, distance[i]);
    }

    return 0;
}
