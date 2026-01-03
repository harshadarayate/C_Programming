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

bool Search(PNODE first, int No)
{
    while (first != NULL)
    {
        if((first->data) == No)
        {
            return true;
        }
        first = first->next;
    } 
}

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    bool bRet = false;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    printf("Enter Number to Searc : \n");
    scanf("%d",&iValue);

    bRet = Search(First,iValue);

    if(bRet == true)
    {
        printf("Element Found\n");
    }
    else
    {
        printf("Element not Found\n");
    }

    printf("\n");

    return 0;
}