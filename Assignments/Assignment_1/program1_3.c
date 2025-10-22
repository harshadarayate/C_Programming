//Program to print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{   
    int iCount = 0;

    iCount = 5;

    while(iCount > 0)
    {   
        printf("%d\n",iCount);
        iCount--;
    }

}

int main()
{

    Display();

    return 0;
}