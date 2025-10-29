#include <stdio.h>

int CheckLeapYear(int year)
{
    if ((((year % 4) == 0) && ((year % 400) == 0)) || ((year % 100) != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int iYear = 0;
    int iResult = 0;

    printf("Enter Year : ");
    scanf("%d", &iYear);

    iResult = CheckLeapYear(iYear);

    if (iResult == 1)
    {
        printf("%d is a Leap Year!!",iYear);
    }
    else{
        printf("%d is not a Leap Year!!",iYear);
    }
    return 0;
}