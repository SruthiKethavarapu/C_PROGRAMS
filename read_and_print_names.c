// read and print 5 names using array

#include <stdio.h>
#define COUNT 5

int main() {
    char names[COUNT][50];
    int names_counter;
    printf("Enter names of %d students to read and print: ", names_counter);
    for(names_counter = 0; names_counter < COUNT; names_counter++) {
        printf("Enter marks %d: ", names_counter + 1);
        scanf("%s", names[names_counter]);
    }

    printf("\nNames are:\n");
    for(names_counter = 0; names_counter < COUNT; names_counter++) {
        printf("%d ", names[names_counter]);
    }

}
