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

int Minimum(PNODE first)
{
    int iMin = 0;

    iMin = first->data; 

    while (first != NULL)
    {
        if(first->data < iMin)
        {
            iMin = first->data;
        }
        first = first->next;
    }
    return iMin;
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

    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    InsertFirst(&head,51);

    Display(head);

    iRet = Minimum(head);

    printf("Minimum element of Linkedlist is : %d \n",iRet);

    return 0;
}