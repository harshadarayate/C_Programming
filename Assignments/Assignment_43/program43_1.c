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

int* DisplayPerfect(PNODE first,int *size)
{
    int iCnt,i = 0;
    int* PerfercNumbers = NULL;
    *size = 0;

    PerfercNumbers = (int*)realloc(PerfercNumbers, sizeof(int));

    while (first != NULL)
    {
        int iFact = 0;

        for(iCnt = 1; iCnt <= (first->data/2); iCnt++)
        {
            if( first->data % iCnt == 0)
            {
                iFact = iFact + iCnt;
            }    
        }

        if(iFact == first->data)
        { 
            PerfercNumbers[i] = first->data;
            i++;  
            *size = i;  
        }
        first = first->next;
    }
    return PerfercNumbers; 
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

    int* iRet = NULL;
    int i = 0;
    int Count = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,28);
    InsertFirst(&head,28);
    InsertFirst(&head,41);
    InsertFirst(&head,6);
    InsertFirst(&head,89);
    
    Display(head);

    iRet = DisplayPerfect(head,&Count);

    printf("All Perfect elements from Linkedlist are :\n");
    for(i = 0; i < Count; i++)
    {
        printf("%d\t",iRet[i]);
    }
    printf("\n");

    return 0;
}