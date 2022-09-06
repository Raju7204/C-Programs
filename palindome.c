//Checking weather the given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,flag=0;
    printf("Enter the palindrome :\n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==str[strlen(str)-i-1])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
return 0;
}
