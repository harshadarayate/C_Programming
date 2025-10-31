#include <stdio.h>
int FactorialDiff(int iNo)
{
    int EvenFact = 1;
    int OddFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            EvenFact = EvenFact * iCnt;
        }
        if (iCnt % 2 != 0)
        {
            OddFact = OddFact * iCnt;
        }
    }

    return (EvenFact-OddFact);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n", iRet);
    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(N)
//
////////////////////////////////////////////////////
