#include<stdio.h>
int main()
{
    int ch, prev_blank = 0;
    while( (ch = getchar()) != EOF)
    {
      if(ch == ' ')
      {
        if(prev_blank =0)
          putchar(' ');
          prev_blank = 1;
      }
      if(ch == '\n' || ch == '\t'  || ch == '\b' || ch == '\\')
      {
          if(ch=='\n')
            printf(" \\n ");
          if(ch == '\t')
            printf(" \\t ");
          if(ch == '\b')
            printf(" \\b ");
          if(ch == '\\')
            printf(" \\ ");
      }
      else{
          putchar(ch);
          prev_blank = 0;
      }
    }
}
