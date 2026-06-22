#include <stdio.h>
#include <math.h>
int main()
{
    // to check if a number is prime or not
    int n;
    int is_prime;
    is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
        
    }
    if(is_prime)
    {
        printf("Number is Prime.");
    }
    else
    {
        printf("Number is not prime.");
    }
    return 0;
} 