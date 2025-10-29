#include <stdio.h>
#include <stdbool.h>

int CheckEvenOdd(int iNum)
{
    if ((iNum % 2) == 0)
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
    int iNumber = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iNumber);

    bRet = CheckEvenOdd(iNumber);

    if (bRet == 1)
    {
        printf("%d is Even Number!\n", iNumber);
    }
    else
    {
        printf("%d is Odd Number!\n", iNumber);
    }
    return 0;
}