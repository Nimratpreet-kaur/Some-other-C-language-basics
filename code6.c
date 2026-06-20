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
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}