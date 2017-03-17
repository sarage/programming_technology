import java.awt.*;
import java.awt.geom.*;
import java.awt.event.*;
import java.util.Scanner;
import javax.swing.*;

public class StringHw extends Frame
{
    StringHw(String s)
    {
        super(s);
    setSize(1200,700);
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
        TextField txt = new TextField("Enter your text here...",100);
        txt.setBounds(20, 60, 500, 40);
        add(txt);

        Button btn = new Button("");
        btn.setBounds(20,120,100,30);
        add(btn);

        TextArea txtar = new TextArea();
        txtar.setBounds(100, 70, 200, 200);
        add(txtar);

        /*txt.addActionListener(new ChangePlace(txt,txtar));
        btn.addActionListener(new ChangePlace(txt, txtar));*/


    }
    public static void main(String[] args)
    {
        new StringHw("String");
    }

}
