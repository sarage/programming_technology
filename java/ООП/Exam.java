class Houses
{
    String window;
    int Door;
    int floor;
    int room;
        
    
    void build (String time)
    {
        System.out.println(time);
    }    
    
}

class NotMobiles extends Houses
{
    boolean hasElevator;
    boolean hasBalcony;
    
    void comeDownRise ()
    {
        System.out.println("UpDown"); 
    }
    
    void live(String window)
    {
        System.out.println(window);
    }
}

class Campers extends Houses
{
    String material;
    boolean traveling;
    
    void coming (int door)
    {
        System.out.println(door);
    }
    
    void buildingwith(String material)
    {
        System.out.println(material);
    }
}

class Exam
{
    public static void main (String args[])
    {
        NotMobiles apartments = new NotMobiles();
        apartments.hasBalcony = true;
        apartments.hasElevator = true;
        
        apartments.build("1 year");
        apartments.live("CloseOpen");
        
        Campers bozui = new Campers();
        bozui.buildingwith("Wood");
        bozui.traveling = true;
        bozui.coming(1);
    }
}