#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of drones: ");
    scanf("%d", &n);

    float distance[n];
    int assigned[n];

    // Enter distances
    for (int i = 0; i < n; i++)
    {
        printf("Enter distance of Drone-%d: ", i + 1);
        scanf("%f", &distance[i]);

        assigned[i] = 0;
    }

    printf("\nDRONE WORK ASSIGNMENT\n\n");

    // Assign work according to shortest distance
    for (int work = 1; work <= n; work++)
    {
        float minDistance = 99999;
        int nearestDrone = -1;

        for (int i = 0; i < n; i++)
        {
            if (assigned[i] == 0 && distance[i] < minDistance)
            {
                minDistance = distance[i];
                nearestDrone = i;
            }
        }

        assigned[nearestDrone] = 1;

        printf("Work-%d -> Drone-%d | Distance = %.2f\n",
               work, nearestDrone + 1, minDistance);
    }

    return 0;
}
