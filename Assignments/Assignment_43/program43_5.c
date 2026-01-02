#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("\n");
}

int* SumDigit(PNODE first, int* size)
{
    int* iSumArr = NULL;
    int i = 0;

    iSumArr = (int*)realloc(iSumArr,sizeof(int));

    while (first != NULL)
    {
        int iSum = 0;
        int iRem = 0;

        while (first->data != 0)
        {
            iRem = first->data % 10;
            iSum = iSum + iRem;
            first->data = first->data/10;
        }

        iSumArr[i] = iSum;
        i++;
        *size = i;
        
        first = first->next;
    }
    
    return iSumArr;
}

int main()
{
    PNODE First = NULL;

    int* iRet = NULL;

    int iCount = 0;
    int iCnt = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet = SumDigit(First,&iCount);

    printf("sum of digit of each elements is  : \n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("%d\t",iRet[iCnt]);
    }
    printf("\n");

    return 0;
}