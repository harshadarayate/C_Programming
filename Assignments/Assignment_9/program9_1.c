#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo*2); iCnt++)
    {
        if(iCnt <= (iNo*2)/2)
        {
           printf("*\t"); 
        }
        if(iCnt > (iNo*2)/2)
        {
           printf("#\t"); 
        }
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


////////////////////////////////////////////////////
//
// Time Complexity : O(2N)
//
////////////////////////////////////////////////////
