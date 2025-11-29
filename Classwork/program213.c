#include <stdio.h>

int main()
{
    char Name[50] = {'\0'};
             
    printf("Enter your name  : ");
    scanf("%[^'\n']s",Name);               //regular exp

    printf("Hello  %s!!!\n",Name);

    return 0;
}