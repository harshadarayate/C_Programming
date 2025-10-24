// a to z = 97 to 122
// A to z = 65 to 90
#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))            //The difference between the lowercase and uppercase of a letter is a constant 32 (e.g., (97-65=32))
    {
        cValue = cValue+32;
        printf("%c\n",cValue);
    }
    else if((cValue >= 97) && (cValue <= 122))
    {
        cValue = cValue-32;
        printf("%c\n",cValue);
    }
}

int main()
{

    char cVlaue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cVlaue);

    DisplayConvert(cVlaue);

    return 0;
}