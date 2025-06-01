#include <stdio.h>

void main()
{
  float fahr, celsius;
  float lower, upper, step;
  
  lower = 0;                  // lower limit of temperature scale
  upper =300;                 // upper limit
  step = 20;                  // step size

  celsius = lower;

  printf("Temp in °C | Temp in °F\n");
  printf("-----------------------\n");
  while(celsius <= upper)
  {
    fahr = ((9.0 / 5.0) * celsius) + 32.0;
    printf("%3.0f °C     |%6.1f °F\n", celsius, fahr);
    celsius = celsius + step;
  }

}
