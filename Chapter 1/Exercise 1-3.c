#include <stdio.h>

void main()
{
  float fahr, celsius;
  float lower, upper, step;
  
  lower = 0;                  // lower limit of temperature scale
  upper =300;                 // upper limit
  step = 20;                  // step size

  fahr = lower;

  printf("Temp in °F | Temp in °C\n");
  printf("-----------------------\n");
  while(fahr <= upper)
  {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f °F     |%6.1f °C\n", fahr, celsius);
    fahr = fahr + step;
  }

}
