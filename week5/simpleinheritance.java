class Space {
    public
    void Sun()
    {
        System.out.println("I appear during day time.");
    }
    void Moon(){
        System.out.println("I appear during night time.");
    }
}
class SolarSystem extends Space {
    void Earth(){
        System.out.println("I'm the only planet with life!");
    }
    void Jupiter(){
        System.out.println("I'm having 8 moons.");
    }
}
public class simpleinheritance
{
  public static void main(String[] args)
  {
    SolarSystem obj = new SolarSystem();
    obj.Sun();
    obj.Moon();
    obj.Earth();
    obj.Jupiter();
  }
}
