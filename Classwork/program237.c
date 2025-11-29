#include <stdio.h>

void StrlwrX(char str[])
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        } 
    
    str++;
    }
}


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    printf("Original String : %s\n", Arr);

    StrlwrX(Arr);

    printf("Convert to lowercase : %s\n", Arr);
    return 0;
}