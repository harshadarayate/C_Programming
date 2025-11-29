#include <stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;

        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Capital characters : %d and Small Characters : %d\n",iCountCapital, iCountSmall);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    CountAll(Arr);

    return 0;
}