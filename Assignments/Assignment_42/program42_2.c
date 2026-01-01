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

int SearchLastOcc(PNODE first , int no )
{
    int iCount, iPos = 0;

    while (first != NULL)
    {
        iCount++;
        if(first->data == no)
        {
            iPos = iCount;
        }
       first = first->next;
    }
    return iPos;
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
    int iValue = 0;
    int iRet = 0;
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    InsertFirst(&head,51);

    Display(head);

    printf("Enter te Element to searc : ");
    scanf("%d",&iValue);

    iRet = SearchLastOcc(head,iValue);
    
    if(iRet)
    {
        printf("Element %d is at position %d : \n",iValue,iRet);
    }
    else
    {
        printf("Element %d is not present in Linkedlist \n",iValue);
    }

    

    return 0;
}