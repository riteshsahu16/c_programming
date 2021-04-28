#include<stdio.h>
int main()
{
  long count=0;
  int ch;
  while( (ch = getchar()) != EOF)
    if(ch == '\n')
      count++;
  printf("Total No. of lines : %ld\n", count);
  return 0;
}
