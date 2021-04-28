#include<stdio.h>
#define STEPS 1
int main()
{
  // Fahrenheit - Celsius
  // fahr=300 ..... 0
  float fahr;
  printf("Fahrenheit \t Celesius\n");
  for(fahr=50; fahr>=0; fahr = fahr-STEPS)
    printf("%10.0f \t %8.1f\n", fahr, (5/9.0) * (fahr-32));
  return 0;
}
