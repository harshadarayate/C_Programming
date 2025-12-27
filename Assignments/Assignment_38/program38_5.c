#include <stdio.h>

void StrCpyToggle(char *src, char *dest)
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
    if (*src >= 'A' && *src <= 'Z')
    {
      *dest = *src+32;
    }
    else if (*src >= 'a' && *src <= 'z')
    {
      *dest = *src-32;
    }
    else
    {
      *dest = *src;
    }
      iCnt--;
      dest++;
      src--;
    
    
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Python 2";
  char brr[30] = {'\0'};

  StrCpyToggle(arr, brr);

  printf("%s\n", brr);

  return 0;
}