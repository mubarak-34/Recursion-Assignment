#include <stdio.h>

int decimalToBinary(int decimal) 
{
    if (decimal > 0) 
	{
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) 
	{
        printf("Error\n");
        return 1;
    }

    printf("Binary representation: ");
    if (decimal == 0) 
	{
        printf("0");
    } 
	
	else 
	{
        decimalToBinary(decimal);
    }
    printf("\n");

    return 0;
}

