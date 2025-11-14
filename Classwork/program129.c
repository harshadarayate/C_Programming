#include <stdio.h>              //scanf, printf
#include <stdlib.h>         //malloc free


int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
        
    }
    return iCount;

}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int bRet = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(NULL == ptr)                                 //Industrial Way of Coding
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter the elements : ");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = CountEven(ptr, iLength);

    
        printf("Number of even elements are : %d",bRet);
    

    free (ptr);

    return 0;
}
