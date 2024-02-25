import java.util.Scanner;
class Student
}

public class Constructor
{
  public static void main(String[] args)
  {
    @SuppressWarnings("unused")
    Student venkat=new Student();
    Scanner input=new Scanner(System.in);
    System.out.print("FullName : ");
    String fullName=input.nextLine();
    System.out.print("SemPercentage : ");
    double semPercentage=input.nextDouble();
    input.close();
    @SuppressWarnings("unused")
    Student venkat01=new Student(fullName,semPercentage);

  }
}
