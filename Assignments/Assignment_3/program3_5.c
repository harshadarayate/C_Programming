// check whether character isvowel or not

#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cAlphabet)
{
    if (cAlphabet == 'A' || cAlphabet == 'E' || cAlphabet == 'I' || cAlphabet == 'O' || cAlphabet == 'U' || cAlphabet == 'a' || cAlphabet == 'e' || cAlphabet == 'i' || cAlphabet == 'o' || cAlphabet == 'u')               
    {
        return TRUE;    //if ((cAlphabet == 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u')) - this is syntactically correct the program compiles also but it will not run correctly as it will only consider the last value i.e 'u' and if(u) will always return true 
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == 1)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    return 0;
}