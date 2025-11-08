//*  *   *   *   *
#include<stdio.h>

void Display()
{
    int iCount = 0;

    for(iCount = 1; iCount <= 5; iCount++)      //static loop bcoz loop of body is not changing
    {
        printf("*\t");
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}