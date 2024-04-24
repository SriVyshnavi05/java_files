public class ExceptionHandling extends Thread{
    @SuppressWarnings("null")
    public static void main(String[] args){
        //Interrupted Exception
        Thread obj=new Thread();
        try{
            Thread.sleep(1000);
            System.out.println("The thread suspended its work for 1 seconds.");
        }catch(InterruptedException e){  
            Thread.currentThread().interrupt();
            System.out.println("Interruption occured.");
        }
        obj.start();
        obj.interrupt();
        try{
            int a[]={1,2,3,4,5};
            System.out.println(a[6]);
        }catch(IndexOutOfBoundsException e){
            System.out.println("The index given is out of range.");
        }
        try{
            Integer num=null;
            System.out.println(num.intValue());
        }catch(NullPointerException e){
            System.out.println("The value is NULL.");
        }
        try{
            int a=2/0;
            System.out.println(a);
        }catch(ArithmeticException e){
            System.out.println("Division by zero is not possible.");
        }
    }
}
