#include<stdio.h>
int main()
{
  int ch;
  while(ch = getchar() != EOF)
    printf("%d\n", ch);
  printf("%d\n", ch);
  return 0;
}
