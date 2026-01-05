// reading and printing n names using array

#include <stdio.h>

int main()
{
	int namesCounter = 0;
	int namesCount;
	printf("Enter how many names you want to read and print: ");
	scanf("%d", &namesCount);
	char names[namesCount][50];
	for (namesCounter = 0; namesCounter < namesCount; namesCounter++)
	{
		printf("Enter student%d name: ", namesCounter+1);
		scanf("%s", names[namesCounter]);
	}
	printf("Names are: \n");
	for (namesCounter = 0; namesCounter < namesCount; namesCounter++)
	{
        printf("%s ", names[namesCounter]);
    }
}