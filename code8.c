#include <stdio.h>
#include <math.h>
int main()
{
    // to print all prime numbers in a range
    int n, is_prime;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
            }
        }
        if (is_prime)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}