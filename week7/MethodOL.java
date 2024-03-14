import java.util.Scanner;
class Addition{
    public
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
}
public class MethodOL
    public static void main(String args[])
    {
    Addition obj = new Addition();
    int a,b,c;
    System.out.println("Enter values:");
    Scanner input = new Scanner(System.in);
    a = input.nextInt();
    b = input.nextInt();
    c = input.nextInt();
    input.close();
    System.out.println("sum of two numbers is "+obj.add(a,b));
    System.out.println("sum of three numbers is "+obj.add(a,b,c));
    }
}
