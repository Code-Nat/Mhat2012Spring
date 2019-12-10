#include <stdio.h>

int main()
{
	char c;
	int i,j;
	printf("Please enter a non-captial english letter:\n");
	scanf_s("%c", &c);
	if (c < 97 || c > 122) //ASCII Table valuess 97 = 'a' 122 = 'z'
	{
		printf("You have entered an unlegal number, program teminated");
		return 0;
	}
	printf("\n\n");
	for (i = 0; i <= (c - 97); i++) //Run the value of the letter that was given
	{
		for (j = i; j < (c - 97); j++) // spaces go down by one ever line, and are max of value of the letter given
			printf(" ");
		for (j = 0; j <= i; j++) //First letters start at lowest and going up to the letter given
			printf("%c", j + 97);
		for (j--; j > 0; j--) //Letters after given letter, starting -1 from the one before as we don't need the letter we where given printed
			printf("%c", j + 97-1);
		printf("\n");
	}
}