#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
  int iCnt = 1;
  while (*src != '\0')
  {
    src++;
    iCnt++;
  }
  src--;

  while (iCnt > 0)
  {
    if (*src == ' ')
    {
      iCnt--;
      
      src--;
      continue;
    }
    else
    {
      *dest = *src;
      iCnt--;
      dest++;
      src--;
    }
    
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Python";
  char brr[30] = {'\0'};

  StrCpyX(arr, brr);

  printf("%s\n", brr);

  return 0;
}