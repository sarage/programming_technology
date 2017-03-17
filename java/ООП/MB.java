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
        MenuItem  MI= new MenuItem("New");
        mF.add(MI);
        MenuItem MO = new MenuItem("Open");
        mF.add(MO);

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
