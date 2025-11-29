#include <stdio.h>

void CountDigits(char str[])
{
    int iCountDigit = 0;

    while (*str != '\0')
    {
        if((*str >= 48) && (*str <= 57))
        {
            iCountDigit++;

        }
        
        str++;
    }

    printf("Count of Digits : %d\n",iCountDigit);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    CountDigits(Arr);

    return 0;
}