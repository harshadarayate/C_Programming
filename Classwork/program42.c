//2 4 6 8 10
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if(iCount % 2 == 0)
        {
            printf("%d\t",iCount);
        } 
    }
    printf("\n");
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Please enter frequency : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}
