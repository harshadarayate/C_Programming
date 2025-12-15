#include <stdio.h>

int Sum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iDigit+Sum(iNo);
    }
    return iSum;
    
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    
printf("%d\n",iRet);
    return 0;
}