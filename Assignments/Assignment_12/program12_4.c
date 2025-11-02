#include <stdio.h>
int sum_of_even_factors(int iNo)
{
    int iCnt = 0;
    int iEvenSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iCnt % 2 == 0 && iNo % iCnt == 0)
        {
            iEvenSum = iEvenSum + iCnt;
        }
    }
    return iEvenSum;
}
int main()
{
    int iNumber;

    printf("Enter number : ");
    scanf("%d", &iNumber);

    printf("Sum of even factors is : %d\n", sum_of_even_factors(iNumber));

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(n/2)
//
////////////////////////////////////////////////////
