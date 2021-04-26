#include<stdio.h>
int main()
{
  //Print Fahrenheit - Celsius Table
  float fahr, cls;
  int start=0, end=100, steps=5;
  printf(" ________________________ \n");
  printf("|Fahrenheit \t Celesius|\n");
  while(start<=end)
  {
    fahr = start;
    cls = 5 * (fahr-32) / 9.0;
    printf("|%10.0f \t %8.1f|\n", fahr, cls);
    start = start + 5;
  }
  printf(" ------------------------- \n");
  return 0;
}
