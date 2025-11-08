#include<stdio.h>

int CountFactor(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}                                   // Time Complexity = O(n/2)

int main()                          //entry point function
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountFactor(iValue);

    printf("Number of factors are : %d\n", iRet);

    return 0;
}
