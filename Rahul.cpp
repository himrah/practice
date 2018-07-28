#include<stdio.h>
int main()
{
int num1,num2,num3,num4,Total,average;
printf("Enter the marks ");
scanf("%d",&num1);
printf("Enter the marks ");
scanf("%d",&num2);
printf("Enter the marks ");
scanf("%d",&num3);
printf("Enter the marks ");
scanf("%d",&num4);
Total=num1+num2+num3+num4;
printf("The sum is %d",Total);

average=Total/4;

if (average>80)

{

    printf("You have got A grate");
}


else
if (average>60)
{
    printf("you have got B grate");
}

else
if(average>40)
{
   printf("you have got C grate");
}

else
if (average<40)

{
  printf("you have got fail at this class");
}


else

{
    printf("you are out of the mark");
}

return 0;

}
