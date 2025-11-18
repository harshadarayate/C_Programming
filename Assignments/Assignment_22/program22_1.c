#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;                  
    int iEven = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0 )
        {
            iEven++;
        }
    }

    return iEven;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);
    for (iCnt = 0; iCnt < sizeof(int); iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Even Numbers are %d\n", iRet);

    free(p);
    return 0;
}