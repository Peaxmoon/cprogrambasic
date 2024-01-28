#include <stdio.h>

int main() {
    FILE *fptr;
    int id, score, i, s;
    char name[100], n[100];

    fptr = fopen("student", "w");

    if (fptr != NULL) {
        printf("File created successfully!\n");
    } else {
        printf("Failed to create the file.\n");
        return -1;
    }

    printf("Enter student name: ");
    gets(name);
    printf("Enter student ID: ");
    scanf("%d", &id);
    printf("Enter student score: ");
    scanf("%d", &score);

    fprintf(fptr, "%d %d %s", id, score, name);
    fclose(fptr);

    fptr = fopen("student", "r");

    if (fptr == NULL) {
        printf("Failed to open the file for reading.\n");
        return -1;
    }

    printf("\n Student Details:\n");
    fscanf(fptr, "%d %d %[^\n]s", &i, &s, n);

    printf("ID: %d\n", i);
    printf("Name: %s\n", n);
    printf("Score: %d\n", s);

    fclose(fptr);

    return 0;
}
