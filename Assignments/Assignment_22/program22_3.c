#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>


bool Check(int Arr[], int iLength)
{
   int iCnt = 0, iFlag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFlag = 1;
            break;
        }   
    }

    return iFlag;    
            
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

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

    bRet = Check(p, iSize);

    if (bRet == true)
    {
        printf("11 is present \n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);
    return 0;
}