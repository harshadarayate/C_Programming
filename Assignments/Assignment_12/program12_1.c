#include <stdio.h>
void print_factors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}
int main()
{
    int iNumber;

    printf("Enter number : ");
    scanf("%d", &iNumber);

    print_factors(iNumber);

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(n/2)
//
////////////////////////////////////////////////////
