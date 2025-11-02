#include <stdio.h>
int sum_even_numbers(int iFrequency)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}
int main(void)
{
    int iLimit;

    printf("Enter number : ");
    scanf("%d", &iLimit);

    printf("Sum of Even Natural Number is : %d\n", sum_even_numbers(iLimit));
    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(N)
//
////////////////////////////////////////////////////
