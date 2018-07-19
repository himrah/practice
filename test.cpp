#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
float A,B,C,Total;
printf("Enter the your value ");
scanf("%f",&A);

printf("Enter the your value ");
scanf("%f",&B);

printf("Enter the your value ");
scanf("%f",&C);

Total=A-B-C;
printf("The subtracrion is %f\n",Total);

Total=+A+B+C;
printf("The sum is %f\n",Total);

Total=A*B*C;
printf("The maltiply is %f\n",Total);

Total=A/B/C;
printf("The devide is %f\n",Total);
return 0;


}