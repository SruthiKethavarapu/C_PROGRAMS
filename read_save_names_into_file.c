// reading and saving names into a file using fprintf

#include <stdio.h>
#define FILENAME "name.txt"
int main()
{
	char name[20];
	printf("Enter name: ");
	scanf("%s", name);
	FILE *fpNames;
	fpNames = fopen(FILENAME, "a");
	fprintf(fpNames, "%s\n", name);
	fclose(fpNames);
	printf("Name saved");
}