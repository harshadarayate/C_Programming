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

void DisplayEven(PNODE first)
{
    while (first != NULL)
    {
        if(((first->data) % 2) == 0)
        {
            printf("%d\t",first->data);
        }
        first = first->next;
    }
}

int main()
{
    PNODE First = NULL;
    
    InsertFirst(&First,12);
    InsertFirst(&First,32);
    InsertFirst(&First,11);
    InsertFirst(&First,11);
    InsertFirst(&First,22);

    Display(First);

    DisplayEven(First);
    
    printf("\n");

    return 0;
}