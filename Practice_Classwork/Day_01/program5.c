//give meaningful names to identifiers
#include <stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iResult = 0;
    iResult = iNo1 + iNo2;
    return iResult;
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    int iAnswer;

    printf("Enter First Number : ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    iAnswer = Addition(iValue1,iValue2);

    printf("Addition of %d and %d is : %d\n",iValue1,iValue2,iAnswer);

    return 0;
}