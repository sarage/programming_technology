import java.awt.*;
import java.awt.geom.*;
import java.awt.event.*;
import java.util.Scanner;
import javax.swing.*;

class Semester2_Exam extends Frame
{
    Semester2_Exam(String s)
    {
        super(s);
        setSize(1350,700);
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
            
        Button btn = new Button("Move the text");
        btn.setBounds(20,120,100,30);
        add(btn);
                
        TextArea txtar = new TextArea();
        txtar.setBounds(1090, 70, 200, 200);
        add(txtar);  
            
        txt.addActionListener(new ChangePlace(txt,txtar));
        btn.addActionListener(new ChangePlace(txt, txtar));
            
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
            txtar.append(txt.getText()+"\n");
            System.out.println(txt.getText());
        }
        
    }
    public void paint (Graphics g)
    {
        
        
        
        g.drawLine(560,150,560,680);
        g.drawLine(860,30,860,500);
        g.drawLine(1300,30,1300,500);
        g.drawLine(860,500,560,680);
        g.drawLine(860,500,1300,500);
        g.drawLine(1300,500,1000,680);
        g.drawLine(560,680,1000,680);
        g.drawLine(560,150,860,30);
        
        g.drawLine(600,200,600,300);
        g.drawLine(600,200,750,135);
        g.drawLine(600,300,750,235);
        g.drawLine(750,235,750,135);
        g.setColor (Color.red);
        g.fillRect(620,250,20,20);
        g.setColor (Color.blue);
        g.fillOval(620,200,30,30);
        
        g.setColor (Color.black);
        g.fillRect(880,70,120,120);
        g.setColor (Color.white);
        g.drawLine(940,70,940,190);
        
        g.setColor (Color.yellow);
        g.fillOval(890,80,40,40);
        
        g.setColor (Color.gray);
        g.fillOval(850,400,75,75);
        g.setColor (Color.green);
        g.drawLine(888,475,820,575);
        g.drawLine(820,575,955,575);
        g.drawLine(955,575,888,475);
        g.setColor (Color.black);
        g.drawLine(878,575,878,650);
        g.drawLine(898,575,898,650);
        
    }
       public static void main(String[] args)
        {
            new Semester2_Exam("Semester2_Exam");
        }
}