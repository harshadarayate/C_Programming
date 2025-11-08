#include <stdio.h>
#include <stdbool.h>

// input

int CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    bFlag = true;             //if this is a part of for loop then it should not be initialized naked and out of loop
    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            bFlag = false;
            break; // optimization due to break
        }
    }
}

int main() // entry point function
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == 1)
    {
        printf("%d is Prime Number!\n", iValue);
    }
    else
    {
        printf("%d is not Prime Number!\n", iValue);
    }
    return 0;
}

// Time Complexity for prime = O(n/2) and for non prime either 1(even number eg.4,6) or 2(odd number eg. 9)