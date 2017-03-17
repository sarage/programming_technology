import java.awt.*;
import javax.swing.*;

class SimpleFrameS extends JFrame
{
    SimpleFrameS(String s)
    {
        super(s);
        //setBackground(Color.BLACK);
        setSize(400,150);
        setVisible(true);
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[] args)
    {
        new SimpleFrameS("Hello World!!!");
    }
}