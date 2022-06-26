#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 */


int main(int argc, char *argv[])
{
int n = 6;
int i = 2;
int new = 0;
while (i < n)
{
    if (n % i == 0)
    { 
        new = n / i;
        if ( new % i == 0)
            {
                i++;
            }
            else 
            {
                break;
            }
    }
    else
    {
        i++;
    }

}
printf("%d*%d \n",n , i);

}


