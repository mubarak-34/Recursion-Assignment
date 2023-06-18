#include <stdio.h>

int printnumbers(int number) 
{
    if (number > 0) 
	{
        printnumbers(number - 1);
        printf("%d ", number);
    }
}

int main() 
{
    int number;
    printf("Enter the value of numbers to printed: ");
    scanf("%d", &number);
    printnumbers(number);
    printf("\n");
    return 0;
}

