#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR; // syntax : typedef org_name new_name

void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Reverse Elements are : \n");
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
   
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

    // Step 2 : Use the memory

    ReverseDisplay(iPtr, iLength);
    
    // Step 3 : free the memory
    free(iPtr);

    return 0;
}