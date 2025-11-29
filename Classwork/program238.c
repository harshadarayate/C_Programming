#include <stdio.h>

void StruprX(char str[])
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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

    StruprX(Arr);

    printf("Convert to lowercase : %s\n", Arr);
    return 0;
}