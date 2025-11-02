#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart < iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
    else{
        printf("Invalid Range!!\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}


////////////////////////////////////////////////////
//
// Time Complexity : O(n)
//
////////////////////////////////////////////////////
