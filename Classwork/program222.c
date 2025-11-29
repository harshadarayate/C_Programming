#include <stdio.h>

int Count(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') 
        || (*str == 'E') || (*str == 'A') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        
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

    iRet = Count(Arr);

    printf("Count of vowels are %d = ",iRet);

    return 0;
}