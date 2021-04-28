#include<stdio.h>
int main()
{
  //Count No. of LINES, TABS & Blank space
  int nl=0, nb=0, nt=0, ch;
  while( (ch = getchar()) != EOF){
    if(ch == ' ')
      nb++;
    if(ch == '\n')
      nl++;
    if(ch == '\t')
      nt++;
  }
  printf("No. of blanks: %d \n", nb);
  printf("No. of lines: %d \n", nl);
  printf("No. of tabs: %d \n", nt);
  return 0;
}
