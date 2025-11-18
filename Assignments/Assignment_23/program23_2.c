#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iValue)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iValue)
        {
            break;
        }
    }

    if (iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return (iCnt+1);
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

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number \n");
    }
    else
    {
        printf("First occurrence of %d is %d \n",iValue, iRet);
    }

    free(p);
    return 0;
}