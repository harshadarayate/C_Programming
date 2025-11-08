#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount < iNo; iCount++)               
    {
        if(iNo % iCount != 0)
        {
            printf("%d\n",iCount);
        } 
    }
}
// Time Complexity = O(N)

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}
