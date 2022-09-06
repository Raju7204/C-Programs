//Checking whether the given number is prime or not.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            printf("It is not a prime number\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a prime number\n");
    }
return 0;
}
