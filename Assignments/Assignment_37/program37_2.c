#include <stdio.h>

int ChkChar(char *str, char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
       if(*str == ch)
       {
        iCnt++;
       }
       str++;
    }
    return iCnt;
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

    iRet = ChkChar(arr, cValue);

    if(iRet > 0)
    {
         printf("Frequency : %d\n",iRet);
    }
    else
    {
        printf("Character not Found\n");
    }
       
    

    return 0;
}