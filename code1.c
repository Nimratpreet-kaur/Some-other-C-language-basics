#include <stdio.h>
#include <math.h>
int main()
{
    // enter input from user until user enters an odd number
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d \n", n);
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("You entered an odd number");
    printf("Thank You");
    return 0;
}