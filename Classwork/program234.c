#include <stdio.h>

void CountDigits(char str[])
{
    int iCountSpace = 0;

    while (*str != '\0')
    {
        if(*str == ' ')             //it does not count tab 
        {
            iCountSpace++;

        }
        
        str++;
    }

    printf("Count of White Spaces : %d\n",iCountSpace);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    CountDigits(Arr);

    return 0;
}