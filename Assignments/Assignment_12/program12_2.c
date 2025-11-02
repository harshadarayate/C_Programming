#include <stdio.h>
int count_factors(int iNo)
{
    int iCnt = 0;
    int iCounter = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCounter++;
        }
    }
    return iCounter;
}
int main()
{
    int iNumber;

    printf("Enter number : ");
    scanf("%d", &iNumber);

    printf("%d\n", count_factors(iNumber));

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(n/2)
//
////////////////////////////////////////////////////
