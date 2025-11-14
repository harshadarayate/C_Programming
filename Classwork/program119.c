#include <stdio.h>

                            // Array can be internally treared as pointer and pointer can be internally treated as array
void Display(int Arr[])
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int Brr[] = {10, 20, 30, 40,50,60,70};        //change   
    
    Display(Brr);               //call by address

    return 0;
}
