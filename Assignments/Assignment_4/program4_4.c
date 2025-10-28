#include <stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumResult = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumResult = iCnt + iSumResult;
        }
    }
    return iSumResult;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n",iRet);

    return 0;
}