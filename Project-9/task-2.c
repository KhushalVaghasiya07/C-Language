#include <stdio.h>

struct Student {
    int id;
    char fullName[50];
    float chemistry;
    float mathematics;
    float physics;
};

int main() {
    struct Student studentList[5];
    float percentages[5];

    for (int studentIndex = 0; studentIndex < 5; studentIndex++) {
        printf("Enter details for Student %d:\n", studentIndex + 1);

        printf("Roll Number: ");
        scanf("%d", &studentList[studentIndex].id);

        printf("Name: ");
        scanf(" %[^\n]%*c", studentList[studentIndex].fullName);

        printf("Marks in Chemistry (out of 100): ");
        scanf("%f", &studentList[studentIndex].chemistry);

        printf("Marks in Mathematics (out of 100): ");
        scanf("%f", &studentList[studentIndex].mathematics);

        printf("Marks in Physics (out of 100): ");
        scanf("%f", &studentList[studentIndex].physics);

        percentages[studentIndex] = (studentList[studentIndex].chemistry +
                                     studentList[studentIndex].mathematics +
                                     studentList[studentIndex].physics) / 3.0;
    }
    
    printf("\n Mark Sheet:\n");
    printf(" Roll No  Name              Chemistry  Mathematics  Physics    %%     \n");
    for (int studentIndex = 0; studentIndex < 5; studentIndex++) {
        printf(" %-8d  %-17s  %-9.2f  %-11.2f  %-7.2f  %-5.2f \n",
               studentList[studentIndex].id, studentList[studentIndex].fullName, 
               studentList[studentIndex].chemistry, studentList[studentIndex].mathematics, 
               studentList[studentIndex].physics, percentages[studentIndex]);
    }

    return 0;
}
