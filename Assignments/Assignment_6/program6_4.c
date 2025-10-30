#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;

    if (iNo1 == 0)
    {
        iResult = iNo2 * iNo3;
        return iResult;
    }
    else if (iNo2 == 0)
    {
        iResult = iNo1 * iNo3;
        return iResult;
    }
    else if (iNo3 == 0)
    {
        iResult = iNo1 * iNo3;
        return iResult;
    }
    else 
    {
        iResult = iNo1 * iNo2 * iNo3;
        return iResult;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of %d %d %d is %d : \n", iValue1, iValue2, iValue3, iRet);

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(n)
//
////////////////////////////////////////////////////
