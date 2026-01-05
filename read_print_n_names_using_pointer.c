// reading and printing n names using pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int namesCounter = 0;
	int namesCount;
	printf("Enter how many names you want to read and print: ");
	scanf("%d", &namesCount);
	char (*names)[50];
	names = malloc(namesCount * sizeof(*names));
	for (namesCounter = 0; namesCounter < namesCount; namesCounter++)
	{
		printf("Enter stuent%d name: ", namesCounter + 1);
        scanf("%s", names[namesCounter]);
	}
	printf("\nNames are:\n");
    for (namesCounter = 0; namesCounter < namesCount; namesCounter++)
    {
        printf("%s ", names[namesCounter]);
    }

}