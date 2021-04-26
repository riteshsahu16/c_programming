#include<stdio.h>
int main()
{
  int fahr;
  printf("Fahrenheit \t Celesius\n");
  for (fahr=0; fahr<500; fahr=fahr+5 )
      printf("%3f \t %8.1f\n", fahr, (5.0/9.0)*(fahr-32) );

  return 0;
}
