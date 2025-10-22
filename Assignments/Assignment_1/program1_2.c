//Program to print 5 times "Marvellous" on screen

#include<stdio.h>

void Display()
{   
    int iCount = 0;

    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("Marvellous\n");
    }

}

int main()
{

    Display();

    return 0;
}