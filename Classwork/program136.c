#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR; // syntax : typedef org_name new_name

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{

    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0, iRet = 0, iValue = 0;
    int iCnt = 0;
    IPTR iPtr = NULL;

    printf("Enter Number of Elemets : \n");
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the Values : ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter Which Number whose frequency you want to count : \n");
    scanf("%d", &iValue);

    // Step 2 : Use the memory

    iRet = FrequencyCalculate(iPtr, iLength, iValue);

    printf("Frequency of %d is %d\n", iValue, iRet);

    // Step 3 : free the memory
    free(iPtr);

    return 0;
}