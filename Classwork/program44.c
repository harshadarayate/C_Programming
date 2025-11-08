// accept 2 no from user and check whether 1st number is completely  divisible by 2nd number
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibilty(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
       return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter First NUmber : ");
    scanf("%d",&iValue1);

    printf("Enter Second NUmber : ");
    scanf("%d",&iValue2);

    bRet = CheckDivisibilty(iValue1,iValue2);

    if(bRet == true)
    {
        printf("It is Completely Divivsible\n");
    }
    else
    {
        printf("It is not Divivsible\n");
    }

    return 0;
}
