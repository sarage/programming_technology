import java.awt.*;
import java.awt.event.*;

class SimpleFrame extends Frame
{
    SimpleFrame(String s)
    {
        super(s);
        setSize(400,150);
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
        g.setFont(new Font("Serif",Font.ITALIC|Font.BOLD,30));
        g.drawString("Hello,XXI century world!!!",20,100);
    }
    public static void main(String[] args)
    {
        new SimpleFrame("Salam Dostor!!!");
    }
}