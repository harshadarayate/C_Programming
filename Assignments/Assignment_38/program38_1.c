#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int iCnt = 0;
  while (*src != '\0')
  {
    src++;
    iCnt++;
  }
  src--;

  while (iCnt != 0)
  {
    *dest = *src;
    dest++;
    src--;
    iCnt--;
  }
  *dest = '\0';
  
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30] = {'\0'};

    StrCpyRev(arr, brr);

    printf("%s\n", brr); 

    return 0;
}