#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iValue)
{
    int iCnt = 0, iFlag = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iValue)
        {

            break;
        }
    }

    return Arr[iCnt];
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if (bRet == TRUE)
    {
        printf("%d is present \n", iValue);
    }
    else
    {
        printf("%d is not present \n", iValue);
    }

    free(p);
    return 0;
}