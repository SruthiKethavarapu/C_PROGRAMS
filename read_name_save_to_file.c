// reading a name and saving into a file

#include <stdio.h>
#define FILENAME "names.txt"

int main()
{
	char name[20];
	printf("Enter name: ");
	scanf("%s", name);
	FILE *fpNames;
	fpNames = fopen(FILENAME, "a");
	fwrite(name, sizeof(name), 1, fpNames);
	fclose(fpNames);
	printf("Name saved");
}