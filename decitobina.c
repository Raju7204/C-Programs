//Converting decimal number to binary number.
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,a[30];
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("The binary number of the given number is :\n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
return 0;
}
