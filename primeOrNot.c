// checking whether a number is prime or not using function

#include <stdio.h>
#include <math.h>

int isPrime(int number);

int main()
{
	int number;
	printf("Enter number to check whether the number is prime or not: ");
	scanf("%d", &number);
	if(isPrime(number))
	{
		printf("%d is a prime number.", number);
	}
	else
	{
		printf("%d is not a prime number.", number);
	}
}

int isPrime(int number)
{
	int counter;
	int sqrt_number;
	sqrt_number = (int)sqrt(number);
	if (number<2 || number > 2 && number %2 == 0)
	{
		return 0;
	}
	for(counter = 3; counter <= sqrt_number; counter += 2)
	{
		if(number % counter == 0)
			return 0;
	}
	return 1;	

}