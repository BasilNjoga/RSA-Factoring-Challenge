#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 */


int main(int argc, char *argv )
{

int val;
int k=0;
FILE *fptr;
int numberline[150];
int num;
char * filename = &argv[1];
fptr = fopen(filename,"r");
int x;

while(!feof(fptr))
{
fscanf(fptr,"%d",&x);
numberline[k] = x;
k++;
}
int i = 2;
int n;


for(int j = 0;j < k; j++)
{
n = numberline[j];
while (i < n)
{
    if (n % i == 0)
       { n = n / i;
        break;
       }
    else
    {
        i++;
    }
}
printf("%d=%d*%d \n",numberline[j],n , i);

}
}

