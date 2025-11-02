#include <stdio.h>
int KMtoMeter(int iNo)
{
    int iResult = 0;
    iResult = iNo * 1000;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("%d Kilometers is %d in meters!\n",iValue,iRet);

    return 0;
}


////////////////////////////////////////////////////
//
// Time Complexity : O(1)
//
////////////////////////////////////////////////////
