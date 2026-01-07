#include <stdio.h>
int main()
{
    int digit,reversed_num = 0,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        digit = num %10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    printf("Reversed num: %d\n",reversed_num);
    return 0;
}