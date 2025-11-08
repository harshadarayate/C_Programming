#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0, iFrequency1 = 0, iFrequency2 = 0;            // iFrequency1 = factors

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }

    printf("Number of Factors are : %d\n", iFrequency1);
    printf("Number of Non Factors are : %d\n", iFrequency2);

} // Time Complexity = O(N)

int main()                          //entry point function
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}
