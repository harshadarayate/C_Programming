#include <stdio.h>

int Addition(int no1, int no2)
{
    int result = 0;
    result = no1 + no2;
    return result;
}

int main()
{

    int i=0, j=0, ans=0;

    printf("Enter First Number : ");
    scanf("%d",&i);

    printf("Enter Second Number : ");
    scanf("%d",&j);

    ans = Addition(i,j);

    printf("Addition of %d and %d is : %d\n",i,j,ans);

    return 0;
}