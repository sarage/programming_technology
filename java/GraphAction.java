import java.awt.*;
import java.awt.geom.*;
import java.awt.event.*;
import java.util.Scanner;
import javax.swing.*;


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
        txt.setBounds(20, 60, 500, 40);
        add(txt);

        Button btn = new Button("Move the text");
        btn.setBounds(20,120,100,30);
        add(btn);
                        
        TextArea txtar = new TextArea();
        txtar.setBounds(600, 20, 900, 200);
        add(txtar);  
                        
        txt.addActionListener(new DrawGraphics(txt,txtar));
        btn.addActionListener(new DrawGraphics(txt, txtar));
            
        List lst = new List(6);
        lst.add("1- y=sin(x)");
        lst.add("2- y=cos(x)");
        lst.add("3- y=kx+b");
        lst.add("4- y=x^2");
        lst.add("5- y=1/x");
        lst.add("6- y=tg(x)");
        lst.setBounds(20, 160, 100, 100);
        add(lst);
    }
        
         class ChangePlace implements ActionListener
    {
            TextField txt;
            TextArea txtar;
    
        ChangePlace(TextField TF, TextArea AR)
            {
                this.txt = TF;
                this.txtar = AR;
            }
    
        public void actionPerformed(ActionEvent ae)
        {
            
            switch (txt.getText())
            {
                case 1:
                {
                paint();
                 break;
                }
                case 4:
                {
                    paint();
                    break;
                }
            }
            txtar.append(txt.getText()+"\n");
        }
            
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
        new GraphAction("Function graphics");
    }
}
