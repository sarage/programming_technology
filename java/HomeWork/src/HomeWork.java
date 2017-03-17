import java.awt.*;
import java.awt.event.*;

class HomeWork extends Frame
{
    HomeWork(String s)
    {
        super(s);

        setLayout(null);


        setSize(500,800);
        setVisible(true);
        Font f = new Font("Serif",Font.BOLD,15);
        setFont(f);
        Scrollbar sc = new Scrollbar(Scrollbar.VERTICAL, 0, 10,450, 500);
        sc.setBounds(470, 10, 30, 500);
        add(sc);

        Choice os = new Choice();
        os.add("BMW");
        os.add("Mersedes");
        os.add("Audi");
        os.add("Honda");
        os.setBounds(100,100 ,150,60);
        add(os);

        Panel pn = new Panel();
        pn.setLayout(null);
        pn.setBackground(Color.DARK_GRAY);
        pn.setBounds(250,300,250,250);
        add(pn);

        List lst = new List(2);
        lst.add("Kyrgyzstan");
        lst.add("Japon");
        lst.add("Korea");
        lst.add("USA");
        lst.add("Germany");
        lst.add("Russia");
        lst.setBounds(20, 410, 100, 60);
        add(lst);

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
        new HomeWork("Home Work :)");
    }
}