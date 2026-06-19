#include <stdio.h>
#include <math.h>
int main()
{
    printf("All numbers from 1 to 10 except 3 \n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            continue;
        }
        // to skip 3
        printf("%d \n", i);
    }
    printf("All odd numbers from 5 to 50 \n");

        for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        // to skip even numbers
        printf("%d ", i);
    }
    return 0;
}