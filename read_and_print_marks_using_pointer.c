// read and print n marks using pointer

#include <stdio.h>
#include <stdlib.h>
//#define COUNT 5

int main()
{
	int marks_counter;
	int *Studentmarks;
	int count;
	printf("Enter number of students: ");
    scanf("%d", &count);
	Studentmarks = malloc(count *sizeof(int));
	printf("Enter marks %d of students to read and print: \n", count);
	for(marks_counter = 0; marks_counter < count; marks_counter++)
	{
		printf("Enter marks of student %d: ", marks_counter+1);
		scanf("%d", &Studentmarks[marks_counter]);
	}

	printf("Marks of %d students are: \n", count);
	for(marks_counter=0; marks_counter<count; marks_counter++)
	{
		printf("Marks of student %d are: %d\n", marks_counter+1, Studentmarks[marks_counter]);
	}
}