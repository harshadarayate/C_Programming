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
        else 
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Capital characters : %d \nSmall Characters : %d\n",iCountCapital, iCountSmall);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    CountAll(Arr);

    return 0;
}