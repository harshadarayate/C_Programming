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

int Frequency(PNODE first, int No)
{
    int iCount = 0;

    while (first != NULL)
    {
        if((first->data) == No)
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
    int iValue = 0;
    int iRet = 0;
    
    InsertFirst(&First,11);
    InsertFirst(&First,32);
    InsertFirst(&First,11);
    InsertFirst(&First,11);
    InsertFirst(&First,21);

    Display(First);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Frequency(First,iValue);
    printf("Frequency of %d is : %d\n",iValue,iRet);

    return 0;
}