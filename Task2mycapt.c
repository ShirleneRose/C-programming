#include <stdio.h>
#include <stdlib.h>
int main()
{
float celsius, farenheit;
printf("\nEnter temperature in celsius: ");
scanf("%f", &celsius);
fahrenheit = (1.8) * celsius + 32;
printf("\n%f deg celsius is %f farenheit\n", celsius, farenheit);
return 0;
}
