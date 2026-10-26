#include <stdio.h>

#define MAX 10

struct Student {
    int roll;
    char name[30];
    int marks;
};

int main() {
    struct Student students[MAX];
    int index[MAX];
    int n, i, searchRoll, found = 0;

    printf("Indexed File Allocation - Student Records\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter student details:\n");

    for (i = 0; i < n; i++) {
        index[i] = i;

        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\nIndex Table:\n");
    printf("Index\tRoll Number\tBlock\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\n",
               index[i],
               students[i].roll,
               index[i] + 100);
    }

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("\nStudent Record Found!\n");
            printf("Roll Number: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            printf("Located using Index -> Block %d\n", index[i] + 100);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent record not found.\n");
    }

    return 0;
}
