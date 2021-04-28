#include<stdio.h>
int main()
{
  int ch, prev_blank  = 0;
  while ((ch = getchar()) != EOF)
  {
    if(ch == '\n' ||  ch =='\t' || ch == ' ' )
    {
      if (prev_blank == 0)
      {
        putchar(' ');
        prev_blank = 1;
      }
    }
    else
    {
      putchar(ch);
      prev_blank = 0;
    }
  }
return 0;
}
