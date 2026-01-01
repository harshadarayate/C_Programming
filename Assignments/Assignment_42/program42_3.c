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

int Addition(PNODE first)
{
    int iSum = 0;

    while (first != NULL)
    {
        iSum = first->data+iSum;
        first = first->next;
    }
    return iSum;
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

    iRet = Addition(head);

    printf("Addition of all elements in Linkedlist is : %d \n",iRet);

    return 0;
}