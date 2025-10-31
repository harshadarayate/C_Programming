#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iResult = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iResult = iCnt * iNo;
        printf("%d\t",iResult);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(n)
//
////////////////////////////////////////////////////
