import java.util.Scanner;
 public class Test2{
     public static void main(String args[]){
         Scanner s = new Scanner(System.in);
         System.out.print("enter the table no  =");
         int a = s.nextInt();
          for (int b=1; b<=10;b++)
          {int c = a*b;
          System.out.println(c);}
     }
 }