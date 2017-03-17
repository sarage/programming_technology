import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class StringHW extends JFrame{
    StringHW(String title){
        super(title);
        
        setLayout(null);
        JTextField tf = new JTextField("Enter text here",25);
        tf.setBounds(10,10,200,30);
        add(tf);
        
        JTextField tf1 = new JTextField("Enter text here",25);
        tf1.setBounds(10,50,200,30);
        add(tf1);
        
        JTextField tf2 = new JTextField("Enter text here",25);
        tf2.setBounds(10,90,200,30);
        add(tf2);
        
        JTextArea ta=new JTextArea();
        ta.setBounds(10,130,300,80);
        ta.setEditable(false);
        add(ta);
        
        CheckboxGroup grp = new CheckboxGroup();
        Checkbox ch1 = new Checkbox("Concatenation", grp, false);
        ch1.setBounds(10,220,100,30);
        
        Checkbox ch2 = new Checkbox("Find length", grp, false);
        ch2.setBounds(10,260,100,30);
        
        Checkbox ch3 = new Checkbox("Find char", grp, false);
        ch3.setBounds(10,300,100,30);
        
        Checkbox ch4 = new Checkbox("Find substring", grp, false);
        ch4.setBounds(10,340,100,30);
        
        Checkbox ch5 = new Checkbox("Devide string to substring", grp, false);
        ch5.setBounds(10,380,100,30);
        
        add(ch1);
        add(ch2);
        add(ch3);
        add(ch4);
        add(ch5);

        JButton b = new JButton("Go!");
        b.setBounds(10,420,100,50);
        add(b);
        
        JButton clearButton = new JButton("Clear");
        clearButton.setBounds(120,420,100,50);
        add(clearButton);      

        clearButton.addActionListener(new ClearTextArea(ta));
        
        b.addActionListener(new StringActions(tf,tf1,tf2,ch1,ch2,ch3,ch4,ch5,ta));
        
        setSize(400,600);
        setVisible(true);
    }
    
    public static void main(String[] args){
        JFrame f = new StringHW("Working with Strings");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

class StringActions implements ActionListener{
    private JTextField tf;
    private JTextField tf1;
    private JTextField tf2;
    private Checkbox ch1;
    private Checkbox ch2;
    private Checkbox ch3;
    private Checkbox ch4;
    private Checkbox ch5;
    private JTextArea ta;
    
    StringActions(JTextField tf, JTextField tf1,JTextField tf2, Checkbox ch1,Checkbox ch2,Checkbox ch3,Checkbox ch4,Checkbox ch5,JTextArea ta){
        this.tf = tf;
        this.tf1 = tf1;
        this.tf2 = tf2;
        this.ch1 = ch1;
        this.ch2 = ch2;
        this.ch3 = ch3;
        this.ch4 = ch4;
        this.ch5 = ch5;
        this.ta = ta;
    }
    
    public void actionPerformed(ActionEvent ae){
        if (this.ch1.getState()){
            String s = tf.getText();
            String s1 = tf1.getText();

        ta.append(s.concat(s1)); 
        };
        if (this.ch2.getState()){
            String s = tf.getText();
            int s1 = s.length();

        ta.append(""+s1); 
        };
        if (this.ch3.getState()){
            String s = tf.getText();
            String s1 = tf1.getText();
            char ch = s.charAt(Integer.parseInt(s1));

        ta.append(""+ch); 
        };
        if (this.ch4.getState()){
            String s = tf.getText();
            String s1 = tf1.getText();
            String s2 = tf2.getText();
            String substr = s.substring(Integer.parseInt(s1),Integer.parseInt(s2));

        ta.append(substr); 
        };
        if (this.ch5.getState()){
            String s = tf.getText();
            String s1 = tf1.getText();
            String s2 = tf2.getText();
            String[] devsubstr = s.split(s1);

            int a=Integer.parseInt(s2);
        ta.append(devsubstr[a]); 
        };
}

class ClearTextArea implements ActionListener{
    private JTextArea ta;
        
    ClearTextArea(JTextArea ta){this.ta = ta;}
    
    public void actionPerformed(ActionEvent ae){
        ta.setText("");
    }
}
}