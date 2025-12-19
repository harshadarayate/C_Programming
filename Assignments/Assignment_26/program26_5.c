
#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }

    /*  in case you want to optimize any how and logic is not the matter
    for (iCnt = 2; iCnt <= iNo * 2; iCnt +=2)
    {

        printf("%d\t", iCnt);
    }
    */
    printf("\n");
}

int main()
{

    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}