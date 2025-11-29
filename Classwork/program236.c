#include <stdio.h>

void Change(char str[])
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')        //how this is foundation of cyptography encrypt decrypt
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String  : ");
    scanf("%[^'\n']s", Arr); // regular exp

    printf("Original String : %s\n",Arr);

    Change(Arr);

    printf("Changed String : %s\n",Arr);
    return 0;
}