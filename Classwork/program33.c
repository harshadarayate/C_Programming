//1 *   2   *   3   *   4   *   5   *

#include<stdio.h>

void Display()
{
    int iCount = 0;

    for(iCount = 1; iCount <= 5; iCount++)      //static loop bcoz loop of body is not changing
    {
        // printf("%d\t",iCount);
        // printf("*\t");

        printf("%d\t*\t",iCount);
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}