import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class semester2_FinalExam extends JFrame
{
    semester2_FinalExam(String s)
    {
        super(s);
        setLayout(null);
        
        MenuBar mb = new MenuBar();
        setMenuBar(mb);

        Menu mF = new Menu ("File");
        mb.add(mF);
        MenuItem  mI= new MenuItem("Exit");
        mF.add(mI);
            
        Menu mA = new Menu ("Action");
        mb.add(mA);
        MenuItem  mS= new MenuItem("Start");
        mA.add(mS);
        
        JTextArea ta = new JTextArea("Enter your text hear");
        ta.setBounds(10,10,300,300);
        add(ta);
            
        JTextArea tf = new JTextArea();
        tf.setBounds(320,10,100,30);
        add(tf);
        
        JTextArea tf1 = new JTextArea();
        tf1.setBounds(320,50,100,30);
        add(tf1);
        
        JTextArea tf2 = new JTextArea();
        tf2.setBounds(320,90,100,30);
        add(tf2);
        
        JButton b = new JButton("Start");
        b.setBounds(10,310,80,40);
        add(b);
        
        b.addActionListener(new StringActions(mS,mI,tf,tf1,tf2,ta,b));
        
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

        setSize(600,600);
        setVisible(true);
    }
   
    public static void main(String[] args)
    {
        new semester2_FinalExam("Final Exam");
    }
}

class StringActions implements ActionListener{
    private JTextArea tf;
    private JTextArea tf1;
    private JTextArea tf2;
    private JButton b;
    private JTextArea ta;
    private MenuItem  mI;
    private MenuItem  mS;
    
    StringActions(MenuItem  mS,MenuItem  mI,JTextArea tf, JTextArea tf1, JTextArea tf2,JTextArea ta, JButton b){
        this.tf = tf;
        this.tf1 = tf1;
        this.tf2 = tf2;
        this.ta = ta;
        this.mS=mS;
        this.mI=mI;
        this.b=b;
        
    }
    
    public void actionPerformed(ActionEvent ae)
    {
            
        String s = ta.getText();
        String[] devsubstr = s.split(" ");
        int a = devsubstr.length;
        tf.append(a+" ");
        
        String[] devsubstr1 = s.split("!");
        String[] devsubstr2 = s.split(".");
        int a1 = devsubstr1.length;
        int a2 = devsubstr2.length;
        int a4 = a1+a2;
        tf1.append(a4+" ");
           
        
    }
}