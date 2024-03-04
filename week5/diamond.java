class mainclass
{
public
void aClass()
{
System.out.println("I am a mainclass");
}
}
class subclass1 extends  mainclass
{
public
void bClass()
{
System.out.println("I am a subclass1");
}
}
class subclass2 extends mainclass
{
public
void cClass()
{
System.out.println("I am asubclass2");
}
}
/*class subclass3 extends  subclass2+subclass1
{
public
void dClass()
{
System.out.println("I am a subclass3");
}
}*/
public class diamond {
    public static void main(String args[])
    {
    subclass1 obj1 = new subclass1();
    subclass2 obj2 = new subclass2();
    obj1.aClass();
    obj1.bClass();
    obj2.aClass();
    obj2.cClass();
    }
}
