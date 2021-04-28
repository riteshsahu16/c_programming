#include<stdio.h>
int main()
{
  int  ch;
  while((ch = getchar())!=EOF)
    ;
  printf("value of EOF : %d\n", ch);
  return 0;
}
