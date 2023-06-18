#include <stdio.h>

int isPrimeRecursive(int number, int divisor) {
    if (divisor == 1) {
        return 1; 
    } else {
        if (number % divisor == 0) {
            return 0;
        } else {
            return isPrimeRecursive(number, divisor);
        }
    }
}

int isPrime(int number) {
    if (number <= 1) {
        return 0; 
    } else {
        return isPrimeRecursive(number, number - 1);
    }
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error\n");
        return 1;
    }

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

