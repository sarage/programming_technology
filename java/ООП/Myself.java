import java.awt.*;
import java.awt.event.*;

class Myself extends Frame
{
    Myself(String s)
    {
        super(s);
        setSize(700,700);
        setVisible(true);
        setTitle("Hi!!!");
        
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

    public void paint(Graphics g)
        {
            Color c1 = new Color(255,100,100);
            Color c2 = new Color(100,255,100);
            Color c3 = new Color(100,100,255);
            g.setColor(c1);
            g.drawLine(200,200,300,300);
            g.drawRect(100,100,50,50);
            g.setColor(c2);
            g.fillRect(200,100,50,50);
            g.setColor(c3);
            g.drawRoundRect(300,100,50,50,10,10);
            g.fillRoundRect(400,100,50,50,10,10);
            g.setColor(c1);
            g.drawOval(100,300,40,50);
            g.fillOval(200,300,40,50);
            g.setColor(Color.blue);
            g.drawOval(300,300,40,40);
            g.drawOval(400,300,40,40);
            g.setColor(Color.red);
            g.drawArc(100,350,150,350,0,90);
            g.fillArc(200,350,150,350,0,90);
            g.setColor(Color.green);
            int x[] = {400,200,30,200,30};
            int y[] = {400,30,200,200,30};
            int num = 3;
            g.drawPolygon(x,y,num);
            g.setColor(Color.black);
            g.setFont(new Font("Serif", Font.BOLD|Font.ITALIC,20));
            g.drawString("Hello!!!",50,50);
        }
        
    public static void main(String[] args)
    {
        new Myself("Hello!!!");
    }
}