#include<stdio.h>
int main()
{
  //Print Fahrenheit-Celsius Table
  int start=0, end=50 ;
  float fahr, cls;
  printf("Fahrenheit \t Celesius\n");
  while(start<=end)
  {
    fahr = start;
    cls = 5.0/9 * (fahr-32);
    printf("%10.0f \t %8.1f\n", fahr, cls);
    start++;
  }
  return 0;
}
