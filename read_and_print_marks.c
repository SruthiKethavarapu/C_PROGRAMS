// read and print 5 marks using array

#include <stdio.h>
#define COUNT 5

int main() {
    int marks[COUNT];
    int marks_counter;
    printf("Enter marks of %d students to read and print: ", marks_count)
    for (marks_counter = 0; marks_counter < COUNT; marks_counter++) {
        printf("Enter marks %d: ", marks_counter + 1);
        scanf("%d", &marks[marks_counter]);
    }

    printf("\nMarks are:\n");
    for (marks_counter = 0; marks_counter < COUNT; marks_counter++) {
        printf("%d ", marks[marks_counter]);
    }

}
