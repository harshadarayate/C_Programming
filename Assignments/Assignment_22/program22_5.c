#include <stdio.h>
#include <stdlib.h>

int Check(int Arr[], int iLength, int iValue)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iValue)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

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

    iRet = Check(p, iSize, iValue);

    printf("%d is present %d times \n", iValue,iRet);

    free(p);
    return 0;
}