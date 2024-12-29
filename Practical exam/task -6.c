//6. Write a C program that writes any N number of employees' name along with their role(designation) in a file called data.txt by taking input from user dynamically.

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    char role[50];
};

int main() {
    int n;
    FILE *file;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Role: ");
        fgets(employees[i].role, sizeof(employees[i].role), stdin);
        employees[i].role[strcspn(employees[i].role, "\n")] = '\0';
    }

    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role: %s\n\n", employees[i].role);
    }

    fclose(file);
    printf("\nEmployee details have been written to data.txt successfully.\n");

    return 0;
}
