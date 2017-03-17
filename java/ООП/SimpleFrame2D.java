import java.awt.*;
import java.awt.geom.*;
import java.awt.event.*;

class SimpleFrame2D extends Frame
{
    SimpleFrame2D(String s)
    {
        super(s);
        setSize(600,400);
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

        BasicStroke pen1 = new BasicStroke(20, BasicStroke.CAP_BUTT, BasicStroke.JOIN_MITER,30);
        BasicStroke pen2 = new BasicStroke(20, BasicStroke.CAP_ROUND, BasicStroke.JOIN_ROUND);
        BasicStroke pen3 = new BasicStroke(20, BasicStroke.CAP_SQUARE, BasicStroke.JOIN_BEVEL,30);
        
        float[] dash1 = {5,20};
        BasicStroke pen4 = new BasicStroke(10, BasicStroke.CAP_ROUND, BasicStroke.JOIN_BEVEL,10,dash1,0);
        
        float[] dash2 = {10,5,5,5};
        BasicStroke pen5 = new BasicStroke(10, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL,10,dash2,0);
        
        g.setStroke(pen1);
        g.draw(new Rectangle2D.Double(50,50,50,50));
        g.draw(new Line2D.Double(50,180,150,180));
        
        g.setStroke(pen2);
        g.draw(new Rectangle2D.Double(200,50,50,50));
        g.draw(new Line2D.Double(50,230,150,230));
        
        g.setStroke(pen3);
        g.draw(new Rectangle2D.Double(350,50,50,50));
        g.draw(new Line2D.Double(50,280,150,280));
        
        g.setStroke(pen4);
        g.draw(new Line2D.Double(50,360,250,360));
        
        g.setStroke(pen5);
        g.draw(new Line2D.Double(50,330,250,330));
    }
    public static void main(String[] args)
    {
        new SimpleFrame2D("Salam Dostor!!!");
    }
}