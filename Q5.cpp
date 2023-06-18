#include <stdio.h>

int sumOfDigits(int number)
 {
    if (number == 0) 
	{
        return 0;
    }
    
	 else 
	{
        return (number % 10) + sumOfDigits(number / 10);
    }
}

int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0)
	 {
        printf("Error\n");
        return 1;
    }

    int sum = sumOfDigits(number);
    printf("Sum of digits of %d is %d\n", number, sum);

    return 0;
}

