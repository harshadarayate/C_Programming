#include <stdio.h>

int Fact(int iNo)
{

    if (iNo <= 1)
    {
        return 1;
    }
    else
    {
        return (iNo * Fact(iNo - 1));
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d\n", iRet);

    return 0;
}