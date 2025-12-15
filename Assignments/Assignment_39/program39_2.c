#include <stdio.h>
void Display(int iNo)
{
    if (iNo >= 1)
    {
        iNo--;
        Display(iNo);
        printf("%d\t", iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    printf("\n");
    return 0;
}