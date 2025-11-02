#include <stdio.h>
int MultDigits(int iNo)
{
    int iMultiply = 1;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMultiply = iMultiply * iDigit;
        iNo = iNo / 10;
    }
    return iMultiply;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number  : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}