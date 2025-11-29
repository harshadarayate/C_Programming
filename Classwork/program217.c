#include <stdio.h>

int strlenX(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {
        iCount++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    iRet = strlenX(Arr);

    printf('length of string %d = ',iRet);

    Display(Arr);
    return 0;
}