#include <stdio.h>

int CountCapital(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    iRet = CountCapital(Arr);

    printf("Count of Capital characters are :  %d \n",iRet);

    return 0;
}