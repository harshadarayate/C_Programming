#include <stdio.h>

void Reverse(char *str)
{
    char *temp = '\0';

    char *start = str, *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
        *temp = *start;
        *start = *end;
        *end  = *temp;

        start++;
        end--;
    }
}

int main()
{
   char Arr[50] = {'\0'};
  

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    printf("Updated string is %s \n",Arr);
    return 0;
}