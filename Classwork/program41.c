//2 4 6 8 10
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 2; iCount <= iNo; iCount += 2)               
    {
        printf("%d\t",iCount);
    }

    printf("\n");
}
//Time complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Please enter frequency : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}

//if loop is in main its time complexity is not calculated 
