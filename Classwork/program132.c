#include <stdio.h>  //scanf, printf
#include <stdlib.h> //malloc free

float Avgerage(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum / (float)iSize);              
}

int main()
{
    int iLength = 0, iCnt = 0;
    float fRet = 0.0f;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }
    printf("Enter the elements : ");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    fRet = Avgerage(ptr, iLength);

    printf("Average of all array elements is : %.2f\n", fRet);

    free(ptr);
    return 0;
}
