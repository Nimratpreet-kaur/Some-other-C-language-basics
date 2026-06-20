#include <stdio.h>
#include <math.h>
int main()
{
    /*
    draw pattern 
    * * * *
    * * * * 
    * * * * 
    * * * * 
    * * * * 
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("%c ", '*');
        }
        printf("\n");
    }

    return 0;
}