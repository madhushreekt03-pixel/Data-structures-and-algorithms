#include<stdio.h>
#include<string.h>
int validParantheses(char s[])
{
    int count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='(')
        {
            count++;
        }
        else if(s[i]==')')
        {
            count--;
        }
        if(count<0)
        {
            return 0;
        }
    }
    return count==0;
}
int main()
{
    char s[100];
    printf("Enter Parantheses string:");
    scanf("%s",s);
    if(validParantheses(s))
    {
        printf("Valid Parantheses");
    }
    else
    {
        printf("Invalid Parantheses");
    }
    return 0;
}
