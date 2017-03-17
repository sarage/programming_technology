import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Notebook extends JFrame{
    Notebook(String title){
        super(title);
        
        setLayout(null);
        JTextField tf = new JTextField("Enter text here",25);
        tf.setBounds(10,10,200,30);
        add(tf);
        
        JTextField tf1 = new JTextField("Enter another text here",25);
        tf1.setBounds(10,50,200,30);
        add(tf1);
        
        JTextArea ta=new JTextArea();
        ta.setBounds(10,100,300,80);
        ta.setEditable(false);
        add(ta);
        
        CheckboxGroup grp = new CheckboxGroup();
        Checkbox ch1 = new Checkbox("Find substring", grp, false);
        ch1.setBounds(10,200,100,30);
        
        Checkbox ch2 = new Checkbox("Replase symbol", grp, false);
        ch2.setBounds(10,250,100,30);
        
        add(ch1);
        add(ch2);

        JButton b = new JButton("Go!");
        b.setBounds(10,300,100,50);
        add(b);
        
        JButton clearButton = new JButton("Clear");
        clearButton.setBounds(120,300,100,50);
        add(clearButton);      

        clearButton.addActionListener(new ClearTextArea(ta));
        
        b.addActionListener(new StringActions(tf,tf1,ch1,ch2,ta));
        
        setSize(300,500);
        setVisible(true);
    }
    
    public static void main(String[] args){
        JFrame f = new Notebook("Working with Strings");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

class StringActions implements ActionListener{
    private JTextField tf;
    private JTextField tf1;
    private Checkbox ch1;
    private Checkbox ch2;
    private JTextArea ta;
    
    StringActions(JTextField tf, JTextField tf1, Checkbox ch1,Checkbox ch2,JTextArea ta){
        this.tf = tf;
        this.tf1 = tf1;
        this.ch1 = ch1;
        this.ch2 = ch2;
        this.ta = ta;
    }
    
    public void actionPerformed(ActionEvent ae){
        if (this.ch1.getState()){
            String s = tf.getText();
            
            int position = s.indexOf(tf1.getText());
            
            if (position==-1) ta.append("No such substring!!!\n");
            else{
                ta.append("Substring has been found on position "+position+"\n"); 
            }
        };
        
        if (this.ch2.getState()){
            String s = tf1.getText();
            
            String[] sub = s.split(":");
            
            String s1 = tf.getText();
            
            String s2 = s1.replace(sub[0],sub[1]);
            
            ta.append(s2+"\n");
        }
        else ta.append("false\n");
    }
}

class ClearTextArea implements ActionListener{
    private JTextArea ta;
        
    ClearTextArea(JTextArea ta){this.ta = ta;}
    
    public void actionPerformed(ActionEvent ae){
        ta.setText("");
    }
}