#include <stdio.h>
#include <stdlib.h>

void Swap(int *p , int *q)
{
    int iTemp = 0;

    iTemp = *p;
    *p = *q;
    *q = iTemp;

}

int main()
{
    int iValue1 = 11;
    int iValue2 = 21;

    printf("Before swap : \n");
    printf("%d\n",iValue1);
    printf("%d\n",iValue2);

    Swap(&iValue1, &iValue2);

    printf("After swap : \n");
    printf("%d\n",iValue1);
    printf("%d\n",iValue2);

    return 0;
}