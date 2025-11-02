#include <stdio.h>
int sum_natural_numbers(int iFrequency)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iLimit;

    printf("Enter number : ");
    scanf("%d", &iLimit);

    printf("Sum of natural numbers : %d\n", sum_natural_numbers(iLimit));

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(N)
//
////////////////////////////////////////////////////
