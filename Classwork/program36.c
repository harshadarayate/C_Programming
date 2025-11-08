//1   2   3   4   5
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t",iCount);
    }

    printf("\n");
}

int main()
{
    Display(7);

    return 0;
}