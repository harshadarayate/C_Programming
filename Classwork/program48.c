#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount < iNo; iCount++)               
    {
        if(iNo % iCount == 0)
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

    DisplayFactors(iValue);

    return 0;
}
