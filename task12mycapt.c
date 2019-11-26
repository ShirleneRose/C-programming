#include<stdio.h>

main()
{

 float a,b,centigrade, fahrenheit;
 int x,i=1;
 
 do
 {
 	printf("Enter -1 to exit");
 	printf("1.\n For Fahrenheit To Celsius\n");
    printf("2. \nFor Celsius To Fahrenheit\n");
    printf("\n\nEnter Your Choice\n");
    scanf("%d",&x);
 
 switch(x)
 {
 case 1:
  printf("\nEnter The Value of Fahrenheit Temperature: ");
  scanf("%f",&a);
  centigrade=5*(a-32)/9;
  printf("\n\nCelsius Temperature: %f ",centigrade);
  break;
 case 2:
  printf("\nEnter The Value of Celsius Temperature: ");
  scanf("%f",&b);
  fahrenheit=((9*b)/5)+32;
  printf("\n\nFahrenheit Temperature: %f \n",fahrenheit);
  break;
  case -1:
  	exit(1);
  default:
 printf("\n\nWrong Choice.....Try Again!!!\n");
}}while(i!=-1);
 getch();
 return(0);

}
