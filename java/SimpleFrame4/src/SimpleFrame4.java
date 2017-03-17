import java.awt.*;
import java.awt.event.*;

class SimpleFrame4 extends Frame
{
    SimpleFrame4(String s)
    {
        super(s);
        setLayout(null);
        setSize(800,700);
        setVisible(true);
        Font f = new Font("Serif",Font.BOLD,15);
        setFont(f);
        
        Label l1 = new Label("Aizhan",Label.CENTER);
        l1.setBounds(100,50,50,30);
        add(l1);
        
        Label l2 = new Label("Aizhan");
        l2.setBounds(500,50,50,30);
        add(l2);
        l2.setText("Aigul");
        
        Checkbox ch  = new Checkbox("Choise",true);
        ch.setBounds(500,500,320,300);
        add(ch);
        
        Checkbox ch1  = new Checkbox("Choise1",false);
        ch1.setBounds(700,700,320,300);
        add(ch1);
        
        CheckboxGroup grp = new CheckboxGroup();
        Checkbox chg1 = new Checkbox("By post",grp,true);
        chg1.setBounds(170,90,200,30);
        add(chg1);
        
        Checkbox chg2 = new Checkbox("By post1",grp,false);
        chg2.setBounds(200,90,200,30);
        add(chg2);

        Choice os = new Choice();
        os.add("Aizhan");
        os.add("Aigul");
        os.add("Aidana");
        os.add("Janyl");
        os.setBounds(150, 410, 200,60);
        add(os);

        List lst = new List(2);
        lst.add("Aizhan");
        lst.add("Aigul");
        lst.add("Aidana");
        lst.add("Janyl Myrza");
        lst.add("Burul");
        lst.add("Alymbek");
        lst.setBounds(20, 410, 100, 60);
        add(lst);
        
        List lst1 = new List(2,true);
        lst1.add("Aizhan");
        lst1.add("Aigul");
        lst1.add("Aidana");
        lst1.add("Janyl Myrza");
        lst1.add("Burul");
        lst1.add("Alymbek");
        add(lst1);

        Scrollbar sc = new Scrollbar(Scrollbar.VERTICAL, 800, 100,450, 800);
        sc.setBounds(450, 10, 50, 800);
        add(sc);

        TextField txt = new TextField("Taalai kyzy Aizhan",20);
        txt.setBounds(60, 50, 160, 25);
        add(txt);

        TextArea txtar = new TextArea("Taalai kyzy Aizhan",5,20);
        txtar.setBounds(60, 170, 250, 80);
        add(txtar);

        addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent ev)
            {
                System.exit(0);
            }
        });
    }
    public static void main(String[] args)
    {
        new SimpleFrame4("Home Work :)");
    }
}