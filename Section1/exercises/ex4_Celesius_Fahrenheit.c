#include<stdio.h>
int main()
{
  //Celesius to fahrenheit
  float cls, fahr;
  int start=0, end=50, steps=2;
  printf("Celesius \t Fahrenheit\n");
  while (start<=end)
  {
    cls = start;
    fahr = 9.0 * cls /5.0 + 32;
    printf("%8.0f \t %10.1f\n", cls, fahr);
    start = start + steps;
  }
  return 0;
}
