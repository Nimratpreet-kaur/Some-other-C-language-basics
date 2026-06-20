#include <stdio.h>
#include <math.h>
int main()
{
    // enter sum of all numbers from 5 to 50
    int sum;
    sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("Sum is %d", sum);
    return 0;
}