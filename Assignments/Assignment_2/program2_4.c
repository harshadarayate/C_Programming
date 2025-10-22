// i/p : 12 5
// o/p : 12 12 12 12 12


#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //updater 

    for(iCnt = 1; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d\t",iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Number : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}