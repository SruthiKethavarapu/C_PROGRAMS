// read and print n marks using array

#include <stdio.h>
#include <stdlib.h>
//#define COUNT 5

int main()
{
	int marks_counter;
	int count;
	printf("Enter number of students: ");
    scanf("%d", &count);
    int studentmarks[count];
	printf("Enter marks %d of students to read and print: \n", count);
	for(marks_counter = 0; marks_counter < count; marks_counter++)
	{
		printf("Enter marks of student %d: ", marks_counter+1);
		scanf("%d", &studentmarks[marks_counter]);
	}

	printf("Marks of %d students are: \n", count);
	for(marks_counter=0; marks_counter<count; marks_counter++)
	{
		printf("Marks of student %d are: %d\n", marks_counter+1, studentmarks[marks_counter]);
	}
}