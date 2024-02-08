import java.util.Scanner;
class Evenorodd
{
void find(int a)
{
if(a==0)
{
System.out.print(a+" is neither even nor odd\n");
}
else if(a%2==0)
{
System.out.print(a+" is a even number\n");
}
else
{
System.out.print(a+" is a odd number\n");
}
}
public static void main(String[] args)
{
int a;
System.out.print("Enter the value of a : ");
Scanner input=new Scanner(System.in);
a=input.nextInt();
input.close();
Evenorodd get=new Evenorodd();
get.find(a);
}
}

