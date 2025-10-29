#include <stdio.h>

int FindMax(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    int iResult = 0;

    printf("Enter Two Numbers : ");
    scanf("%d%d", &iNum1, &iNum2);

    iResult = FindMax(iNum1, iNum2);
    printf("Maximum is %d\n",iResult);

    return 0;
}