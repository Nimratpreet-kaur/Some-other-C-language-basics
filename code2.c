#include <stdio.h>
#include <math.h>
int main()
{
    // enter input frim user until user enters multiple of 7
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d \n", n);
        if (n % 7 == 0)
        {
            break;
        }
    } while (1);
    printf("You Entered a multuple of 7 ");
    return 0;
}