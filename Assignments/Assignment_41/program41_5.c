#include <stdio.h>

int Mult(int iNo)
{

    int iDigit = 0;
    int iMult = 1;
    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iMult = iDigit*Mult(iNo);
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d\n", iRet);

    return 0;
}