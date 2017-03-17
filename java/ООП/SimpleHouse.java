import java.awt.*;
import java.awt.event.*;

class SimpleHouse extends Frame
{
    SimpleHouse(String s)
    {
        super(s);
        setSize(1000,500);
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
    public void paint (Graphics g)
    {
        g.drawLine(755,385,755,450);
        g.drawLine(810,385,810,450);
        g.drawLine(350,70,100,200);
        g.drawLine(350,70,600,200);
        g.drawLine(225,250,225,400);
        g.setColor (Color.blue);
        g.fillRect(100,200,500,500);
        g.setColor (Color.green);
        g.fillRect(150,250,150,150);
        g.setColor (Color.pink);
        g.fillRect(400,300,150,400);
        g.setColor (Color.gray);
        g.fillOval(750,250,75,75);
        g.setColor (Color.red);
        g.drawLine(785,325,735,385);
        g.drawLine(785,325,825,385);
        g.drawLine(735,385,825,385);
        g.setColor (Color.yellow);
        g.fillOval(50,50,75,75);
    }
    public static void main(String[] args)
    {
        new SimpleHouse("Simple House :)");
    }
}