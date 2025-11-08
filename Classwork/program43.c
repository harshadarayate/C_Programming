// accept 2 no from user and check whether 1st number is completely  divisible by 2nd number
#include<stdio.h>

int main()
{
    
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First NUmber : ");
    scanf("%d",&iValue1);

    printf("Enter Second NUmber : ");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not divisible\n");

    }

    return 0;
}
