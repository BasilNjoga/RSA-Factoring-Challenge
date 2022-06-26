#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is program that computes the next smallest divisors of prime factors
 * 
 * @argc -  number count of command line arguments
 * @argv - name of the text file
 * @Return: Always 0 
 */

int main(int argc, char *argv[])
{
long long x;
int k=0;
FILE *fptr;
long long int numberline[150];
int num;
char *filename = argv[1];

fptr = fopen(filename,"r");
while(!feof(fptr))
{
fscanf(fptr,"%lli",&x);
numberline[k] = x;
k++;
}
long long int i = 2;
long long int n;

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
printf("%lli=%lli*%lli\n",numberline[j],n , i);
}
return (0);
}

