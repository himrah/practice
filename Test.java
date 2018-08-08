import java.util.Scanner;
public class Test{
    public static void main(String args[])
    {
        //System.out.println("Hello world");
        //String name;
        Scanner s = new Scanner(System.in);
        int a,b,c;
        System.out.print("Enter the first value");
        a = s.nextInt();
        System.out.print("Enter the second value");
        b = s.nextInt();
        c = a+b;  

        System.out.print("The sum is "+c);

}
}