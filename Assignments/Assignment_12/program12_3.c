#include <stdio.h>
int sum_of_factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main(void)
{
    int iNumber;

     printf("Enter number : ");
    scanf("%d", &iNumber);

    printf("Addition of positive factors is : %d\n", sum_of_factors(iNumber));

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(n/2)
//
////////////////////////////////////////////////////
