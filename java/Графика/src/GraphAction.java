import java.awt.*;
import java.awt.geom.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.lang.*;

class GraphAction extends Frame
{
    GraphAction(String s)
    {
        super(s);
        setSize(1000,700);
        setVisible(true);
        setLayout(null);

        Font f = new Font("Calibri",Font.BOLD,13);
        setFont(f);

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

        TextField txt = new TextField("Enter number of your choice here...",100);
        txt.setBounds(20, 60, 300, 30);
        add(txt);

        Button btn = new Button("Draw");
        btn.setBounds(20,100,100,30);
        add(btn);

        List lst = new List(6);
        lst.add("1- y=sin(x)");
        lst.add("2- y=cos(x)");
        lst.add("3- y=kx+b");
        lst.add("4- y=x^2");
        lst.add("5- y=1/x");
        lst.add("6- y=tg(x)");
        lst.setBounds(20, 160, 100, 100);
        add(lst);
        String a = txt.getText();
        int foo = Integer.parseInt(a);
    }
    }

    public static void main(String[] args)
    {
        new GraphAction("Function graphics");
    }
}
public void paint(Graphics g)
        {
        Graphics2D g = (Graphics2D) g;
        super.paint(g);
        switch (foo)
        {
        case 1:
        {
        GraphSin(g);
        }
        break;
        }
        void GraphSin(g)
        {
        QuadCurve2D q = new QuadCurve2D.Float();
        g.draw(new Line2D.Double(0, 100, 1000, 100));
        g.draw(new Line2D.Double(550, 0, 550, 250));
        int x=-100;
        for (int i=0;i<10;i++)
        {
        x=x+100;
        if(i%2==0)
        {
        q.setCurve(x, 100, 50+x, 200, 100+x, 100);
        g.draw(q);
        }
        else
        {
        q.setCurve(x, 100, 50+x, 0, 100+x, 100);
        g.draw(q);
        }


        }
        }

        }