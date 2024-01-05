#include <stdio.h>

// Define a union to store different types of data for a student
union StudentInfo
{
    int age;
    float gpa;
    char name[50];
};

int main()
{
    // Create a student and initialize its information
    union StudentInfo info;
    info.age = 20;

    // Print student's age
    printf("Student's Age: %d\n", info.age);

    // Update student information to store GPA
    info.gpa = 3.5;

    // Print student's GPA
    printf("Student's GPA: %.2f\n", info.gpa);

    // Update student information to store name
    snprintf(info.name, sizeof(info.name), "John Doe");

    // Print student's name
    printf("Student's Name: %s\n", info.name);

    return 0;
}
