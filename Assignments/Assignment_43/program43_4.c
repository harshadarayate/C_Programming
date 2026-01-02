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

int SecMaximum(PNODE first)
{
    int iSecMax = 0;
    int iMax = 0;

    iMax = iSecMax = first->data;

    while (first != NULL)
    {
       if(first-> data > iMax)
        {
            iSecMax = iMax;
            iMax = first->data; 
            if(iSecMax > iMax)
            {
                iSecMax = iMax;
            }           
        }
        first = first->next;
    }
    return iSecMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet = SecMaximum(First);

    printf("2nd max Number : %d\n",iRet);

    return 0;
}