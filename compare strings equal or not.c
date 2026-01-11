#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int i = 0 , isequal = 1;
    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);
    while(str1 != '\0' || str2 != '\0')
    {
        if(str1[i] != str2[i])
        {
            isequal = 0;
            break;
        }
        i++;
    }
    if(isequal = 1)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("Both strings are different.\n");
    }
    return 0;
}