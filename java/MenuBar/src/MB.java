import java.awt.*;
import java.awt.event.*;
public class MB extends Frame
{
    MB(String s)
    {
        super(s);
        setSize(1000, 700);
        setVisible(true);
        setLayout(null);
        Font f = new Font("Calibri", Font.PLAIN, 11);
        setFont(f);

        MenuBar mb = new MenuBar();
        setMenuBar(mb);

        Menu mF = new Menu ("File");
        mb.add(mF);
        MenuItem  MI= new MenuItem("New Project");
        mF.add(MI);
        MenuItem MO = new MenuItem("Open Project");
        mF.add(MO);

        Menu mF1 = new Menu ("View");
        mb.add(mF1);
        MenuItem  MI1= new MenuItem("Tool Windows");
        mF1.add(MI1);
        MenuItem MO1 = new MenuItem("Parametres");
        mF1.add(MO1);


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
        new MB("MenuBar");
    }
}
