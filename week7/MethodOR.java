class Addition{
    public
    void add(int a,int b)
    {
        System.out.println("sum is "+(a+b));
    }
    void add(double a,double b)
    {
        System.out.println("sum is "+(a+b));
    }
}
public class MethodOR {
    public static void main(String args[])
    {
        Addition obj = new Addition();
        obj.add(2,3);
        obj.add(2.3,3.2);
    }
}
