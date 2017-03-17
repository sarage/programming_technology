import java.util.Scanner;
class Sinak
{
     public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Point p1 = new Point();
        Point p2 = new Point("10", "20", "Blue");
        Point p3 = new Point();
        
        String s;
        
        s=sc.nextLine();
        if (p1.isSetX()) p1.setX(s); else System.out.println("You didn't write first point's first coordinate X");
        p1.getX();
        
        s=sc.nextLine();
        if (p2.isSetX()) p2.setX(s); else System.out.println("You didn't write second point's first coordinate X");
        p2.getX();
        
        s=sc.nextLine();
        if (p3.isSetX()) p3.setX(s); else System.out.println("You didn't write third point's first coordinate X");
        p3.getX();
        
        s=sc.nextLine();
        if (p1.isSetY()) p1.setY(s); else System.out.println("You didn't write first point's second coordinate Y");
        p1.getY();
        
        s=sc.nextLine();
        if (p2.isSetY()) p2.setY(s); else System.out.println("You didn't write second point's second coordinate X");
        p2.getY();
        
        s=sc.nextLine();
        if (p3.isSetY()) p3.setY(s); else System.out.println("You didn't write third point's second coordinate X");
        p3.getY();
        
        s=sc.nextLine();
        if (p1.isSetColor()) p1.setColor(s); else System.out.println("You didn't write first point's color");
        p1.getColor();
        
        s=sc.nextLine();
        if (p2.isSetColor()) p2.setColor(s); else System.out.println("You didn't write second point's color");
        p2.getColor();
        
        s=sc.nextLine();
        if (p3.isSetColor()) p3.setColor(s); else System.out.println("You didn't write third point's color");
        p3.getColor();     
        
        
    }
}
class Point
{
    private String x;
    private String y;
    private String color;   
    private static int pointCount;
    static int e=0;
        
    Point ()
    {
         e++;
    }

    int getPointCount()
    {
        return e;
    }
        
    Point(String x, String y, String color)
    {
        e++;
        this.x=x;
        this.y=y;
        this.color=color;
    }
    
    void setColor(String s)
    {
        this.color=s;
    }
    
    void setX(String s)
    {
        this.x=s;
    }
    
    void setY(String s)
    {
        this.y=s;
    }
    
    String getX()
    {
        return this.x;
    }
    
    String getY()
    {
        return this.y;
    }
    
    String getColor()
    {
        return this.color;
    }
    
    boolean isSetX()
    {
      if (this.x!= null) return false; else return true;   
    }
    
    boolean isSetY()
    {
         if (this.y!= null) return false; else return true;
    }
    
    boolean isSetColor()
    {
         if (this.color!=null) return false; else return true;
    }
    
} 