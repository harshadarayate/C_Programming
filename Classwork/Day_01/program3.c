#include <stdio.h>

int main()
{

    int i=0, j=0, ans=0;

    printf("Enter First Number : ");
    scanf("%d",&i);

    printf("Enter Second Number : ");
    scanf("%d",&j);

    ans = i+j;

    printf("Addition of %d and %d is : %d\n",i,j,ans);

    return 0;
}