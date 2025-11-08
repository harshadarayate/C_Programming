//1   2   3   4   5
#include<stdio.h>

void Display()
{
    int iCount = 0;

    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("%d\t",iCount);
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}