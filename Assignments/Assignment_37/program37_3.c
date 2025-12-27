#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iCnt;
        }
        str++;
        iCnt++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    if(iRet >= 0)
    printf("Character location  : %d\n", iRet);
    else
    printf("Character not found \n");
    return 0;
}