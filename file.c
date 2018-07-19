#include<stdio.h>
int main()

{

//clrscr();
int num1,num2,num3,num4,Result;

printf("Enter your Marks ");
scanf("%d",&num1);
printf("Enter your Marks ");
scanf("%d",&num2);
printf("Enter your Marks ");
scanf("%d",&num3);
printf("Enter your Marks ");
scanf("%d",&num4);

Result=num1+num2+num3+num4;

if(Result>175)
{

    printf("your result is good");

}

else

{

printf("your result is pathatic");

return 0;

}


}


