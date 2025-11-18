#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0, iMax = 0;

    iMin = iMax = Arr[iCnt];
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return (iMax - iMin);
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    printf("Enter % d elements ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
    iRet = Difference(p, iSize);

    printf("Diffrence between Number is %d\n", iRet);
    free(p);
    return 0;
}