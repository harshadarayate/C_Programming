#include <stdio.h>
#include <stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFrequency++;
        }
    }

    if (iFrequency == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

} // Time Complexity = O(n/2)

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
