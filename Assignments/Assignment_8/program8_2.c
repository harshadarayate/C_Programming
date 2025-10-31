#include <stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

     if (iNo == 1)
    printf("One\n");
    if(iNo == 2)
    printf("Two\n");
    if(iNo == 3)
    printf("Three\n");
    if(iNo == 4)
    printf("Four\n");
    if(iNo == 5)
    printf("Five\n");
    if(iNo == 6)
    printf("Six\n");
    if(iNo == 7)
    printf("Seven\n");
    if(iNo == 8)
    printf("Eight\n");
    if(iNo == 9)
    printf("Nine\n");

    while (iNo > 0)
    {
        iNo = iNo / 10;
        iCount++;
    }
  
    if (iCount > 1)
    {
        printf("Invalid Number\n");
    }

   
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}