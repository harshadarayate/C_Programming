#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
   int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
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

int* DisplayPrime(PNODE first, int* size)
{
    int iCnt = 0, i = 0;
    int *PrimeNumbers = NULL;

    PrimeNumbers = (int*)realloc(PrimeNumbers, sizeof(int));

    while (first != NULL)
    {   
        int iCount = 0;
        for(iCnt = 2; iCnt < first->data; iCnt++)
        {
            if((first->data)%iCnt == 0)
            {
                iCount++;
            } 
        }
        if(iCount == 0)
        {
            PrimeNumbers[i] = first->data; 
            i++;
            *size = i;
        }
        first = first->next;
    }
    
    return PrimeNumbers;
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

int main()
{
    PNODE head = NULL;

    int *RetArray = NULL;

    int iCount = 0;
    int iCnt = 0;

    InsertFirst(&head,89);
    InsertFirst(&head,22);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,20);
    InsertFirst(&head,11);
    
    Display(head);

    RetArray = DisplayPrime(head, &iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("%d\t", RetArray[iCnt]);
    }

    printf("\n");

    return 0;
}