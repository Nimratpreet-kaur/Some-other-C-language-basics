#include <stdio.h>
#include <math.h>
int main()
{
    // print factorial of number n
    int n, f; // f is factorial
    f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i > 1; i--)
    {
        f = f * i;
    }
    printf("Factorial is %d", f);
    return 0;
}
