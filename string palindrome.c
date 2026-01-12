#include <stdio.h>
#include <string.h>
int main()
{
    char ster[100];
    int i = 0,len,ispalindrome =1;
    printf("Enter a string: ");
    fgets(ster,sizeof(ster),stdin);
    len = strlen(ster);
    if(ster[len-1] == '\n')
    {
        ster[len-1] = '\0';
        len--;
    }
    for (i=0;i<len/2;i++)
    {
        if(ster[i] != ster[len-i-1])
        {
            ispalindrome = 0;
            break;
        }
    }
    if(ispalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}