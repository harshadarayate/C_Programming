#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;                 //syntax : typedef org_name new_name


int main()
{
    int iLength = 0;
    int iCnt = 0;
    IPTR iPtr = NULL; 

    printf("Enter Number of Elemets : \n");
    scanf("%d",&iLength);

    //Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the Values : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Step 2 : Use the memory

    // Call to the function which contains the buisness logic 

    // Function(iPtr, iLength)


    //Step 3 : free the memory 
    free(iPtr);

    return 0;
}