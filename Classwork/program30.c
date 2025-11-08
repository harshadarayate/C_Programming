//1   2   3   4   5
#include<stdio.h>

void Display()
{
    int iCount = 0;

    iCount = 1; 
    while(iCount <= 5)                      //dynamic loop bcoz body of loop is changing
    {
        printf("%d\t",iCount);
        iCount++;
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}