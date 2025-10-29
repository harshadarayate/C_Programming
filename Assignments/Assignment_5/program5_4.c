#include<stdio.h>
//positive negative or zero

void CheckNumberType(int iNum)
{
    if(iNum == 0)
    {
        printf("The Number is Zero!\n");
    }
    else if(iNum > 0)
    {
        printf("The Number is Positive!\n");
    }
    else if(iNum < 0)
    {
        printf("The Number is Negative!\n");
    }
    
}
int main()
{
    int iNumber;

    printf("Enter Number : ");
    scanf("%d",&iNumber);

    CheckNumberType(iNumber);

    return 0;
}