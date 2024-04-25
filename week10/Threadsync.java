public class Threadsync  extends Thread{
    int num;
    Threadsync(int num){
        this.num=num;
    }
    public void run(){
        multiply();
    }
    public void multiply(){
        for(int i=0;i<13;i++){
            System.out.println(num+" * "+i+ "=" +num*i);
            try{
                Thread.sleep(1000);
            }catch(Exception e){
                System.out.println(e);

            }
        }
    }
    public static void main(String[] args) {
        Threadsync obj = new Threadsync(3);
        Threadsync obj1 = new Threadsync(5);
        obj.start();
        obj1.start();
    }
}
