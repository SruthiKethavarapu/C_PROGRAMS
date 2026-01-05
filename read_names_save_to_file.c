// reading multiple names and saving them into file

#include <stdio.h>
#define COUNT 5
#define FILENAME "names.txt"
int main()
{
	char name[20];
	int counter = 0;
	printf("Enter %d names: \n", COUNT);
	FILE *fpNames;
	fpNames = fopen(FILENAME, "a");
	for(counter = 0; counter < COUNT; counter++)
	{
		printf("Enter name %d: ", counter + 1);
        scanf("%s", name);
        fwrite(name, sizeof(name), 1, fpNames);
	}
	fclose(fpNames);
	printf("Names saved.");
	
}