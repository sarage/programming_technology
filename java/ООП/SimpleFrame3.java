import java.awt.*;
import java.awt.event.*;

class SimpleFrame3 extends Frame
{
    SimpleFrame3(String s)
    {
        super(s);
        
        setLayout(null);
        
        Font f = new Font("Serif",Font.BOLD,15);
        setFont(f);
        
        Label l1 = new Label("Choose one:",Label.CENTER);
        l1.setBounds(10,50,120,30);
        add(l1);
        
        Label l2 = new Label("Choose payment method:");
        l2.setBounds(160,50,200,30);
        add(l2);
        
        Checkbox ch1 = new Checkbox("Books");
        ch1.setBounds(20,90,100,30);
        add(ch1);
        
        Checkbox ch2 = new Checkbox("Disks");
        ch2.setBounds(20,120,100,30);
        add(ch2);
        
        Checkbox ch3 = new Checkbox("Toys");
        ch3.setBounds(20,150,100,30);
        add(ch3);
        
        CheckboxGroup grp = new CheckboxGroup();
        Checkbox chg1 = new Checkbox("By post",grp,true);
        chg1.setBounds(170,90,200,30);
        add(chg1);
        
        Checkbox chg2 = new Checkbox("By credit card",grp,false);
        chg2.setBounds(170,120,200,30);
        add(chg2);
        
        Button b1 = new Button("Next");
        b1.setBounds(30,220,100,30);
        add(b1);
    
        Button b2 = new Button("Cancel");
        b2.setBounds(140,220,100,30);
        add(b2);   
        
        Button b3 = new Button("Exit");
        b3.setBounds(250,220,100,30);
        add(b3);
        
        setSize(400,300);
        setVisible(true);
        
        MenuBar mb = new MenuBar();
        setMenuBar(mb);
        
        Menu mFile = new Menu("File");
        mb.add(mFile);
        
        
        Menu mEdit = new Menu("Edit");
        mb.add(mEdit);
        
        
        Menu mView = new Menu("View");
        mb.add(mView);
        
        MenuItem create = new MenuItem("Create");
        mFile.add(create);
        
        mFile.addSeparator();
        
        MenuItem open = new MenuItem("Open...");
        mFile.add(open);
        
        Menu send = new Menu("Send");
        mFile.add(send);
        
        CheckboxMenuItem disk = new CheckboxMenuItem("Disk A:");
        send.add(disk);
        send.add(new CheckboxMenuItem("Archive"));
        
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
        new SimpleFrame3("Hello World!!!");
    }
}