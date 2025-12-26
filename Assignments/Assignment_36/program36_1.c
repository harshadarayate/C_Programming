#include<stdio.h>

void strlwrX(char *str)
{
    
    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z' )
        {
            *str = *str+32;
        }
       str++;
    }
    
}
int main()
{
    char Arr[20] = {'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Modified String is %s\n", Arr);

    return 0;
}