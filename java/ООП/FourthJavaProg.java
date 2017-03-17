import java.util.Scanner;
class FourthJavaProg
{
    public static void main(String[] args)
    {
    Phone x = new Phone();
    Scanner sc = new Scanner(System.in);
    String s,s1;
    System.out.println("Please, write phones name");
    s=sc.nextLine();   
    System.out.println("Please, write phones android version");    
    s1=sc.nextLine();
        System.out.println("We have these models:");
        System.out.println();
    Phone y = new Phone();
        y.setName(s);
        y.setAndroidVersion(s1);
        y.getName();
        y.getAndroidVersion();        
        y.setModelNumber(6578);
        y.getModelNumber();
        y.setCost(7800);
        y.getCost();
        System.out.println();
        System.out.println();
    Phone z = new Phone();
        z.setName(s);
        z.setAndroidVersion(s1);
        z.getName();
        z.getAndroidVersion();
        z.setModelNumber(2341);
        z.getModelNumber();
        z.setCost(2500);
        z.getCost();        
        System.out.println();
        System.out.println();
    Phone q = new Phone();
        q.setName(s);
        q.setAndroidVersion(s1);
        q.getName();
        q.getAndroidVersion();
        q.setModelNumber(7200);
        q.getModelNumber();
        q.setCost(5000);
        q.getCost();    
        
    }
}
class Phone
    {
       private static String name;
       private int modelNumber;
       private static String androidVersion;
       private int cost;
    void setName(String s)
        {
            this.name=s;
        }
    void getName()
        {
            System.out.println(this.name);
        }   
    void setAndroidVersion(String s1)
        {
            this.androidVersion=s1;
        }
    void getAndroidVersion()
        {
            System.out.println(this.androidVersion);
        }
    void setModelNumber(int s)
        {
            this.modelNumber=s;
        }
    void setCost(int s)
        {
            this.cost=s;
        }               
    void getModelNumber()
        {
            System.out.println(this.modelNumber);
        }           
    void getCost()
        {
              System.out.println(this.cost);
        }
    }