import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyNotebook extends JFrame{
    MyNotebook(String title){
        super(title);
        
        Container c = getContentPane();
        
        JTextField tf = new JTextField("Enter your text here",50);
        c.add(tf, BorderLayout.NORTH);
        
        JTextArea ta = new JTextArea();
        ta.setEditable(false);
        c.add(ta);
        
        JPanel p = new JPanel();
        c.add(p, BorderLayout.SOUTH);
        
        JButton b = new JButton("Move text");
        p.add(b);
        
        tf.addActionListener(new TextMove(tf,ta));
        b.addActionListener(new TextMove(tf, ta));
        
        setSize(300,200);
        setVisible(true);        
    }
    
    public static void main(String[] args){
        JFrame f = new MyNotebook("ActionEvent");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

class TextMove implements ActionListener{
    private JTextField tf;
    private JTextArea ta;
    
    TextMove(JTextField sourceTF, JTextArea targetTA){
        this.tf = sourceTF;
        this.ta = targetTA;
    }
    
    public void actionPerformed(ActionEvent ae){
        ta.append(tf.getText()+"\n");
    }
}