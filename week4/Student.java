/*Using a constructor and destructor in Java, Write a Java class 'Student' and assign the following :
* string fullName
* int rollNum
* double semPerentage
* string collegeName
* int collegeCode*/
import java .util.Scanner;
class Student01 {
    //constructor
    Student01() {
        System.out.println("HELLO FOLKS!!!");
    }
    Student01(int admNum)
    {
        Num = admNum;
        System.out.println("BE FOCUSED");
    }
    //variables
    String name;
    int Num;
    double semPer;
    String colName;
    int colCode;
    void fullName()
    {
        System.out.println("My name is "+name);
    }
    void rollNum()
    {
        System.out.println("My number is "+Num);
    }
    void semPercentage()
    {
        System.out.println("My sem percentage is "+semPer);
    }
    void collegeName()
    {
        System.out.println("My college name is "+colName);
    }
    void collegeCode()
    {
        System.out.println("My college code is "+colCode);
    }
    //destructor
    void finalized()
    {
        System.out.println("OOPS :(");
    }
}
public class Student{
    public static void main (String args[])
    {
    Student01 obj = new Student01();;
    System.out.println("Enter your name:");
    Scanner input = new Scanner (System.in);
    obj.name = input.next();
    System.out.println("Enter your number:");
    obj.Num = input.nextInt();
    System.out.println("Enter your sem percentage:");
    obj.semPer = input.nextDouble();
    System.out.println("Enter your college Name:");
    obj.colName = input.next();
    System.out.println("Enter your college Code:");
    obj.colCode = input.nextInt();
    input.close();
    obj.fullName();
    obj.rollNum();
    obj.semPercentage();
    obj.collegeName();
    obj.collegeCode();
    obj.finalized();
}
}
