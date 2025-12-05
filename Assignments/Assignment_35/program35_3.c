#include <stdio.h>

int Diffrence(char *str)
{
    int iSmallCountt = 0, iCapitalCount;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCountt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapitalCount++;
        }
        str++;
    }

    return iSmallCountt-iCapitalCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = Diffrence(arr);

    printf("%d/n", iRet);

    return 0;
}