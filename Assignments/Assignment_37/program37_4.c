
/*
    ./myexe 
    Enter string : What could be the possible reasons for this and how do I rectify it
    Enter the character : i
    Character location  : 65
    *** stack smashing detected ***: terminated
    Aborted (core dumped)
*/

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iPrev = 0, iCurr = 0;
    
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPrev = iCurr;
           
        }
        str++;
        iCurr++;
       
    }
    return iPrev;
}

int main()
{
    char arr[20];           //Important
    char cValue;
    int iRet = 0;
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    if(iRet >= 0)
    printf("Character location  : %d\n", iRet);
    else
    printf("Character not found \n");
    return 0;
}