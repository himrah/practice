#include<stdio.h>
#include<conio.h>

int main()
{

 int pr,qu,total;
 float dis,netam;
 char name[20];

 dis=0;
 printf("Enter Product Name :   ");
 scanf("%s",&name);
 printf("Enter product unit price:  ");
 scanf("%d",&pr);
 printf("Enter product Quantity:  ");
 scanf("%d",&qu);

 total=pr*qu;
 printf("****************************************************************************\n\n\n");
 printf("Total Amount :  %d\n",total);

 if(qu>30)
 {

     dis=float(total)*0.25;
     printf("you got discout:  %f\n",dis);
 }
 else
 if(qu>20)
 {

dis=float(total)*0.1;
printf("You got discount:  %f\n",dis);

}

else
if (qu>15) 
{
    dis=float(total)*0.08;
    printf("You got discount:  %f\n",dis);
}

else
if (qu>10)
{

dis=float(total)*0.05;
printf("You got discount:   %f\n",dis);

}

else
{
    printf("your quantity is less then 10 u got 0 percent discount\n",dis);
}

netam=total-dis;
printf("you will have to pay:  %f",netam);
return (0);


}