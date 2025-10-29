#include <stdio.h>
//       2 5 8

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 > iNo2)
    {
        if (iNo1 > iNo3)
        {
            return iNo1;
        }
        else
        {
            return iNo3;
        }
    }
    else
    {
        if (iNo1 > iNo3)
        {
            return iNo2;
        }
        else
        {
            return iNo3;
        }
    }
}
int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    int iNum3 = 0;
    int iResult = 0;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d", &iNum1, &iNum2, &iNum3);

    iResult = FindLargest(iNum1, iNum2, iNum3);
    printf("%d is the largest among %d, %d, %d\n", iResult, iNum1, iNum2, iNum3);

    return 0;
}