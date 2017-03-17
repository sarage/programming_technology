import java.awt.*;
import java.awt.geom.*;
import java.awt.event.*;
import java.util.Scanner;

class functionGraphics2D extends Frame
{
    functionGraphics2D(String s)
    {
        super(s);
        setSize(1000,700);
        setVisible(true);
        
        addWindowListener
        (
            new WindowAdapter()
            {
                public void windowClosing(WindowEvent ev)
                {
                    System.exit(0);
                }
            }
        );
        
    }
    public void paint(Graphics gr)
    {
        Graphics2D g = (Graphics2D) gr;
        int x1=500,x2=500,y1=670;
        for (int i=1;i<100;i++)
        {
            g.draw(new Ellipse2D.Float(x1, y1, 5, 5));
            g.draw(new Ellipse2D.Float(x2, y1, 5, 5));
            x1=x1+7; 
            y1=670-i*i;
            x2=x2-7;
        }
    }
    public static void main(String[] args)
    {
        new functionGraphics2D("Salam Dostor!!!");
    }
}