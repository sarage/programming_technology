import java.util.Scanner;
class ThirdJavaProg
{
    public static void main(String[] args)
    {
    Phone x = new Phone("Sony Xperia Miro","ST23i","4.0.4","7500");
    x.getName();
    x.getModelNumber();
    x.getAndroidVersion();
    x.getCost();
       
        System.out.println();
        System.out.println();
        
        Phone y= new Phone();
        Scanner sc = new Scanner(System.in);
        System.out.println("Please, write information about your phone");
        System.out.println("Your phone's name?");
        String s;
        s=sc.nextLine();
        if (y.isSetName()) y.setName(s); else System.out.println("You didn't write your phone's name");
        System.out.println("Your phone's modelNumber?");
        s=sc.nextLine();
        if (y.isSetModelNumber()) y.setModelNumber(s); else System.out.println("You didn't write your phone's model number");
        System.out.println("Your phone's androidVersion?");
        s=sc.nextLine();
        if (y.isSetAndroidVersion()) y.setAndroidVersion(s); else System.out.println("You didn't write your phone's android version");
        System.out.println("Your phone's cost?");
        s=sc.nextLine();
        if (y.isSetCost()) y.setCost(s); else System.out.println("You didn't write your phone's cost");
        System.out.println();
        System.out.println();
        System.out.println("Information about your phone");
        
        y.getName();
        y.getModelNumber();
        y.getAndroidVersion();
        y.getCost();
        
        System.out.println();
        System.out.println();
        
        System.out.println("Information about other phone");
        int ss;
        ss=sc.nextInt();
        y.setName(ss);
        y.getName();
    }
}
class Phone
{
    private String name;
    private String modelNumber;
    private String androidVersion;
    private String cost;
    
    Phone()
    {
       System.out.println("Information about your phone"); 
    }
    Phone(String name,String modelNumber,String androidVersion,String cost)
    {
        this.name=name;
        this.modelNumber=modelNumber;
        this.androidVersion=androidVersion;
        this.cost=cost;
        System.out.println("Information about my phone");
    }
    
    void setName (String s)
    {
        this.name=s;
    }
    boolean isSetName()
    {
        if (this.name!=null) return true; else return false;
    }

    void setName (int ss)
    {
        switch (ss)
        {
            case 0: this.name="2300";break;
            case 1: this.name="6220";break;
            case 2: this.name="6300";break;
            case 3: this.name="6233";break;
            case 4: this.name="3110";break;
        }
    }    
    void getName()
    {
        System.out.println(this.name);
    }    
    void setModelNumber(String s)
    {
        this.modelNumber=s;
    }
        
    boolean isSetModelNumber()
    {
        if (this.modelNumber!=null) return false; else return true;
    }    

    void getModelNumber()
    {
        System.out.println(this.modelNumber);
    }    
    void setAndroidVersion(String s)
    {
        this.androidVersion=s;
    }
    
     boolean isSetAndroidVersion()
    {
        if (this.androidVersion!=null) return false; else return true;
    }   
    void getAndroidVersion()
    {
        System.out.println(this.androidVersion);
    }    
    void setCost(String s)
    {
        this.cost=s;
    }
    
    boolean isSetCost()
    {
        if (this.cost!=null) return false; else return true;
    }  
    void getCost()
    {
        System.out.println(this.cost);
    }
}