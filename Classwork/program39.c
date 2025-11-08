//1   2   3   4   5
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = iNo; iCount >= 0; iCount--)
    {
        printf("%d\t",iCount);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Please enter frequency : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}