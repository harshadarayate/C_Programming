#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR; // syntax : typedef org_name new_name

//  < O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{

    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)           // return should not be written in loop
        {
            return true;            //not good programming practice why? read instruction pointer and x86 processor diagram
        }
    }
    return false;
}

int main()
{
    int iLength = 0, iValue = 0, iCnt = 0;
    bool bRet = false;
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

    printf("Enter the number to Search : \n");
    scanf("%d", &iValue);

    // Step 2 : Use the memory

    bRet = LinearSearch(iPtr, iLength, iValue);
    
    if (bRet == 1)
    {
        printf("%d is present in data\n", iValue);
    }
    else
    {
        printf("%d is not present in data\n", iValue);
    }

    // Step 3 : free the memory
    free(iPtr);

    return 0;
}