import java.util.Scanner;
class AccessSpecifier{
    private
    int priVar;
    protected
    int proVar;
    public
    int pubVar;
    public
    void setVar(int priValue,int proValue, int pubValue)
    {
        priVar=priValue;
        proVar=proValue;
        pubVar=pubValue;
    }
    void getVar(){
        System.out.println("Private value: "+priVar);
        System.out.println("Protected value: "+proVar);
        System.out.println("Public value: "+pubVar);
    }
}
public class AccessSpecifiersDemo {

    public static void main(String[] args)
    {
        AccessSpecifier obj = new AccessSpecifier();
        int priVar,proVar,pubVar;
        System.out.println("Enter private value: ");
        Scanner input = new Scanner(System.in);
        priVar = input.nextInt();
        System.out.println("Enter protected value: ");
        proVar = input.nextInt();
        System.out.println("Enter public value: ");
        pubVar = input.nextInt();
        //input.close();
        obj.setVar(priVar,proVar,pubVar);
        obj.getVar();
    }
}
