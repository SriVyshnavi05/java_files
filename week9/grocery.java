class GroceryException extends Exception{
    GroceryException(){
        System.out.println("The quality of the groceries is not up to the mark\nVery disappointed.");
    }
}
public class grocery{
    public static void main(String[] args) throws GroceryException{
      int groceryQuality=35;
        if(groceryQuality>80){
            System.out.println("The quality of the groceries are good.");
        }
        else{
            try{
                throw new GroceryException();
            }catch(GroceryException e){
            }
        }
   }
}
