#include<stdio.h>

int multi(int number) {
    if (number>=1)
    {
        return number*multi(number-1);
    }
    
	else
	{
        return 1;
    }
}


int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    int fact=multi(number);
    printf("Factorial of %d = %ld", number, multi(number));
    return 0;
}
