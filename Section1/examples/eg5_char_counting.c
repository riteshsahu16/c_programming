#include<stdio.h>
int main()
{
  int ch, count=0;
  //Using while-loop
  while( (ch = getchar())!= EOF )
    count++;
  //Using for-loop
  count = 0;
  for(ch; (ch=getchar()) != EOF; count++);
  printf("Total no. of characters : %d\n", count);
  return 0;
}
