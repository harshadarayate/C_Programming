//Day02
/*
Algorithm:

Start
    Accept number and store as no
    Divide no by 2
    If the remainder is 0 
        then display as even 
    oterwise 
        display as odd
Stop
*/

#include <stdio.h>

void CheckEbenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckEbenOdd(iValue);

    return 0;
}