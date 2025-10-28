#include <stdio.h>

int FactDff(int iNo)
{
    int iCnt = 0;
    int iFactResult = 0;
    int iNonFactResult = 0;
    int DiffResult = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactResult = iCnt + iFactResult;
        }
        else
        {
            iNonFactResult = iCnt + iNonFactResult;
        }
    }

    DiffResult = iFactResult - iNonFactResult;
    return DiffResult;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactDff(iValue);

    printf("%d\n",iRet);

    return 0;
}