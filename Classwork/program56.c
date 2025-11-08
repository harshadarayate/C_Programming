#include <stdio.h>
#include <stdbool.h>

//input 


int CheckPrime(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            break;                                        //optimization due to break
        }
    }

    if (iCnt >= (iNo/2))                                    //no factor
    {
        return true;
    }
    else                                                    //atleast one factor
    {
        return false;
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