#include <stdio.h>
#include <string.h>

int main()
{

    char Arr[] = {'H', 'E', 'L', 'L' , 'O', '\0'};

    printf("%s\n",Arr);                 // Hello

    printf("%lu",sizeof(Arr));          // 6
    printf(strlen(Arr));                // 5

    return 0;
}