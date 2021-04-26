#include<stdio.h>
int main()
{
  int res;
  res = 5/2;
  printf("%d\n", res); //OUTPUT : 2
  printf("%.1f\n", res); //OUTPUT : 0 

  float result; //OUTPUT of result = 5/2  => 2.0
  result = 5.0/2; //OUTPUT : 2.5
  printf("%d\n", result); //OUTPUT : Obscure value
  printf("%.1f\n", result);
  return 0;

}
