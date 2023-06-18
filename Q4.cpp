#include <stdio.h>

int fibonacci(int terms) 
{
    if (terms <= 1) 
	{
        return terms;
    } 
	
	else 
	{
        return fibonacci(terms - 1) + fibonacci(terms - 2);
    }
}

int main() {
    int terms, i;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    if(terms<0)
    {
    	printf("Error");
	}
    
    printf("Fibonacci series with %d terms: ", terms);
    for (i = 0; i < terms; i++) 
	{
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}

