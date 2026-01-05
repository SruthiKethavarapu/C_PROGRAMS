// read and show account details of a customer

#include <stdio.h>

struct customerAccountDetails
{
	char bankAccountNumber[10];
	char customerName[15];
	int balance;
};

struct customerAccountDetails user;

int main()
{
	printf("Enter bank account number of the customer: ");
	scanf("%s", user.bankAccountNumber);
	printf("Enter customer name: ");
	scanf("%s", user.customerName);
	printf("Enter Balance: ");
	scanf("%d", &user.balance);

	printf("\n---Account Details---\n");
	printf("Account number: %s\n", user.bankAccountNumber);
	printf("Customer Name: %s\n", user.customerName);
	printf("Balance: %d\n", user.balance);
}