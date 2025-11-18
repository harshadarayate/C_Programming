#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iValue)
{
    int iCnt = 0, iCur = 0;

                           // 6
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iValue) //66
        {
            iCur = iCnt+1; // 4
        }
    }

    if (iCur == 0)
    {
        return -1;
    }
    else
    {
        return (iCur);
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;

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

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number \n");
    }
    else
    {
        printf("Last occurrence of %d is %d \n",iValue, iRet);
    }

    free(p);
    return 0;
}