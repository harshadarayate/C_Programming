
#include <stdio.h>
void StrRevX(char *str)
{
    char *iStart = str, *iEnd = str;
    char iTemp;  // Fixed: Changed from char *iTemp to char iTemp

    while (*iEnd != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while (iStart < iEnd)
    {
        iTemp = *iStart;      
        *iStart = *iEnd;
        *iEnd = iTemp;       
        iStart++;
        iEnd--;
    }
    
}

int main()
{
    char arr[60] = {'\0'};

    printf("Enter string : ");
    scanf("%[^\n]s", arr);  

    StrRevX(arr);

    printf("Modified String : %s \n", arr);
    return 0;
}
