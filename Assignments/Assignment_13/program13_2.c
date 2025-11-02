#include <stdio.h>
void print_even_numbers(int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");
}
int main()
{
   int iLimit;

    printf("Enter number : ");
    scanf("%d", &iLimit);

    print_even_numbers(iLimit);

    return 0;
}

////////////////////////////////////////////////////
//
// Time Complexity : O(n)
//
////////////////////////////////////////////////////
