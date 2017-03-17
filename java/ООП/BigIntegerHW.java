import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.math.BigInteger;

class BigIntegerHW extends JFrame{
    BigIntegerHW(String t){
        super(t);
        
        setLayout(null);
        JTextField tf = new JTextField("Enter first number here",25);
        tf.setBounds(10,10,300,30);
        add(tf);
        
        JTextField tf1 = new JTextField("Enter second number here",25);
        tf1.setBounds(10,50,300,30);
        add(tf1);
        
        JTextArea ta=new JTextArea();
        ta.setBounds(10,100,500,80);
        ta.setEditable(false);
        add(ta);
        
        CheckboxGroup grp = new CheckboxGroup();
        Checkbox ch1 = new Checkbox("+", grp, false);
        ch1.setBounds(10,200,100,30);
        
        Checkbox ch2 = new Checkbox("-", grp, false);
        ch2.setBounds(10,250,100,30);
        
        Checkbox ch3 = new Checkbox("*", grp, false);
        ch3.setBounds(10,300,100,30);
        
        Checkbox ch4 = new Checkbox("/", grp, false);
        ch4.setBounds(10,350,100,30);
        
        add(ch1);
        add(ch2);
        add(ch3);
        add(ch4);

        JButton b = new JButton("=");
        b.setBounds(10,400,100,50);
        add(b);
        
        JButton clearButton = new JButton("C");
        clearButton.setBounds(120,400,100,50);
        add(clearButton);      

        clearButton.addActionListener(new ClearTextArea(ta));
        
        b.addActionListener(new Calculation(tf,tf1,ch1,ch2,ch3,ch4,ta));
        
        setSize(550,600);
        setVisible(true);
    }
    
    public static void main(String[] args){
        JFrame f = new BigIntegerHW("Calculator");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

class Calculation implements ActionListener{
    private JTextField tf;
    private JTextField tf1;
    private Checkbox ch1;
    private Checkbox ch2;
    private Checkbox ch3;
    private Checkbox ch4;
    private JTextArea ta;
    
    Calculation(JTextField tf, JTextField tf1, Checkbox ch1,Checkbox ch2,Checkbox ch3,Checkbox ch4,JTextArea ta){
        this.tf = tf;
        this.tf1 = tf1;
        this.ch1 = ch1;
        this.ch2 = ch2;
        this.ch3 = ch3;
        this.ch4 = ch4;
        this.ta = ta;
    }
    
    public void actionPerformed(ActionEvent ae){
        if (this.ch1.getState()){
            BigInteger a = new BigInteger(tf.getText());
            BigInteger b = new BigInteger(tf1.getText());
            String s=""+a.add(b);
                ta.append(s);
        };
        if (this.ch2.getState()){
            BigInteger a = new BigInteger(tf.getText());
            BigInteger b = new BigInteger(tf1.getText());
            String s=""+a.subtract(b);
            ta.append(s);
        };
        if (this.ch3.getState()){
            BigInteger a = new BigInteger(tf.getText());
            BigInteger b = new BigInteger(tf1.getText());
            String s=""+a.multiply(b);
            ta.append(s);
        };
        if (this.ch4.getState()){
            BigInteger a = new BigInteger(tf.getText());
            BigInteger b = new BigInteger(tf1.getText());
            String s=""+a.divide(b);
            ta.append(s);
        };
        
    }
}

class ClearTextArea implements ActionListener{
    private JTextArea ta;
        
    ClearTextArea(JTextArea ta){this.ta = ta;}
    
    public void actionPerformed(ActionEvent ae){
        ta.setText("");
    }
}