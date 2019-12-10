#include <stdio.h>

int main()
{
	int num1, num2, result = 0, index = 1;
	printf("Please enter first number: (Must be a postive integer)\n");
	scanf_s("%d", &num1);
	if (num1 < 0)
	{
		printf("You have entered an unlegal number");
		return 0;
	}
	printf("\nPlease enter second number: (Must be a postive integer)\n");
	scanf_s("%d", &num2);
	if (num2 < 0)
	{
		printf("You have entered an unlegal number");
		return 0;
	}

	while (num1 || num2)
	{
		if (num1 % 10 > num2 % 10)
			result += (num1 % 10)*index;
		else
			result += (num2 % 10)*index;
		index *= 10;
		num1 /= 10;
		num2 /= 10;
	}
	printf("%d", result);
}