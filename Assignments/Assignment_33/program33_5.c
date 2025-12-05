#include <stdio.h>

void DisplaySchedule(char ch)
{
    if(ch >= 'a' || ch <= 'z')
    {
        ch = ch - 32;
    }

    if (ch == 'A')
    {
        printf("Your Division is : %c \nExam Time : 7 AM\n",ch);
    }
    else if (ch == 'B')
    {
        printf("Your Division is : %c \nExam Time : 8.30 AM\n",ch);
    }
    else if (ch == 'C')
    {
        printf("Your Division is : %c \nExam Time : 9.20 AM\n",ch);
    }
    else if (ch == 'D')
    {
        printf("Your Division is : %c \nExam Time : 10.30 AM\n",ch);
    }
    else{
        printf("Enter Division between A to D\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Your Division : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}