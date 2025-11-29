#include <stdio.h>

int CountOccurence(char str[], char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    fflush(stdin);                          //not applicable on all os  need of system call here see that

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    iRet = CountOccurence(Arr, cValue);

    printf("Count d :  %d \n",iRet);

    return 0;
}