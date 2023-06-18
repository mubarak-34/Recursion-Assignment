#include <stdio.h>

int add(int number) 
{
    if (number != 0) 
	{
        return number + add(number - 1); 
    } 
	
	else 
	{
        return 0;
    }
}

int main() {
    int number, sum;
    printf("Enter the value of number to be added: ");
    scanf("%d", &number);
    sum = add(number);
    printf("The sum of numbers from 1 to %d is %d\n", number, sum);
    return 0;
}

