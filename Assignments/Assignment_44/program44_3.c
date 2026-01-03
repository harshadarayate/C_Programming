#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

int CountOdd(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
    {
        if(((first->data) % 2) != 0)
        {
            iCount++;
        }
        first = first->next;
    }
    
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    iRet = CountOdd(First);
    printf("Odd Numbers : %d\n",iRet);

    return 0;
}