#include<stdio.h>
#include<stdlib.h>

int* DisplayNumbers(int no)
{
    int iCnt = 0;
    int* numbers = NULL;

    numbers = (int*)malloc(no * sizeof(int));

    if(numbers == NULL)
    {
        return NULL;
    }

    for(iCnt = 0; iCnt < no; iCnt++)
    {
        numbers[iCnt] = iCnt+1;
    }

    return numbers;
}

int main()
{
    int* Array = NULL;

    int iCnt = 0;
    int iNo = 10;

    Array = DisplayNumbers(iNo);

    if(Array == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Elements of the array :\n");
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d \t",Array[iCnt]);
    }

    free(Array);

    return 0;
}