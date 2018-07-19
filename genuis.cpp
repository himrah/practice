#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2,num3,Total;

printf("Enter the first value ");
scanf("%d",&num1);
printf("Enter the second value ");
scanf("%d",&num2);
printf("Enter the third value ");
scanf("%d",&num3);
Total=+num1+num2+num3;
printf("The sum is %d",Total);

Total=num1-num2-num3;
printf("The subtraction is %d",Total);

Total=num1*num2*num3;
printf("The maltiply is %d",Total);

Total=num1/num2/num3;
printf("The devide is %d",Total);

return 0;




}