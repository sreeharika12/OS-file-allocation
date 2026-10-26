#include <stdio.h>

#define MAX 100

int main() {
    int start, n, i;
    int blocks[MAX];

    printf("Sequential File Allocation - Video File\n");

    printf("Enter starting block: ");
    scanf("%d", &start);

    printf("Enter number of blocks required for video: ");
    scanf("%d", &n);

    printf("\nVideo file is allocated sequentially:\n");

    for (i = 0; i < n; i++) {
        blocks[i] = start + i;
        printf("Video Block %d -> Disk Block %d\n", i + 1, blocks[i]);
    }

    printf("\nFile allocation successful!\n");

    printf("Video file occupies blocks: ");
    for (i = 0; i < n; i++) {
        printf("%d ", blocks[i]);
    }

    printf("\n");

    return 0;
}
