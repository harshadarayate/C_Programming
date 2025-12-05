#include <stdio.h>
#include <stdbool.h>

typedef bool BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    int flag = 0;

    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' || 
            *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U')
        {
            flag++;
        }
        str++;
    }
    if(flag > 0)
    return TRUE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}