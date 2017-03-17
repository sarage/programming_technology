import java.awt.*;
import java.awt.event.*;
class MenuFrame extends Frame{
    MenuFrame(String s){
        super(s); setSize(600, 400); setVisible(true);
        addWindowListener(new WindowAdapter(){ public void windowClosing(WindowEvent ev){  System.exit(0); }});
        setLayout(null);
        Font f = new Font("Calibri", Font.PLAIN, 11); setFont(f);
        
        MenuBar mb = new MenuBar();
        setMenuBar(mb);
        //         FILE
        Menu mFile = new Menu ("����");
        mb.add(mFile);
        MenuItem create = new MenuItem("�����");
        mFile.add(create);
        MenuItem open = new MenuItem("�������...");
        mFile.add(open);
        
        mFile.addSeparator();
        
        MenuItem close = new MenuItem("�������");
        mFile.add(close);
        MenuItem save = new MenuItem("���������");
        mFile.add(save);
        
        mFile.addSeparator();
        
        Menu mode = new Menu("�������� �����");
        mFile.add(mode);
        MenuItem rgbMode = new MenuItem("RGB");
        mode.add(rgbMode);
        MenuItem cmykMode = new MenuItem("CMYK");
        mode.add(cmykMode);
        //           FILE
        //           EDIT
        Menu mEdit = new Menu ("��������������");
        mb.add(mEdit);
        
        MenuItem undo = new MenuItem("��������");
        mEdit.add(undo);
        
        MenuItem repeat = new MenuItem("���������");
        mEdit.add(repeat);
        
        mEdit.addSeparator();
        
        MenuItem cut = new MenuItem("��������");
        mEdit.add(cut);
        
        MenuItem copy = new MenuItem("����������");
        mEdit.add(copy);
        
        Menu paste = new Menu("�������� ���...");
        mEdit.add(paste);
        
        MenuItem simplePaste = new MenuItem("��������");
        paste.add(simplePaste);
        MenuItem frontPaste = new MenuItem("�������� �� �������� ����");
        paste.add(frontPaste);
        MenuItem backPaste = new MenuItem("�������� �� ������ ����");
        paste.add(backPaste);
        
        MenuItem clear = new MenuItem("��������");
        mEdit.add(clear);
        //     EDIT
        //    OBJECT
        Menu mObject = new Menu ("������");
        mb.add(mObject);
        
        Menu transform = new Menu ("����������������");
        mObject.add(transform);
        
        MenuItem scale = new MenuItem("���������������");
        transform.add(scale);
        
        MenuItem rotate = new MenuItem("�������");
        transform.add(rotate);
        
        MenuItem skew = new MenuItem("������");
        transform.add(skew);
        
        MenuItem montage = new MenuItem("������");
        mObject.add(montage);
        
        mObject.addSeparator();
        
        MenuItem group = new MenuItem("�������������");
        mObject.add(group);
        MenuItem ungroup = new MenuItem("���������������");
        mObject.add(ungroup);
        
        //    OBJECT
        
        
        // TEXT
        Menu mType = new Menu ("�����");
        mb.add(mType);
        
        MenuItem addFont = new MenuItem("�������� �����...");
        mType.add(addFont);
        
        MenuItem fonts = new MenuItem("�����");
        mType.add(fonts);
        
        mType.addSeparator();
        
        MenuItem paragraf = new MenuItem("��������");
        mType.add(paragraf);
        
        MenuItem styleType = new MenuItem("�����");
        mType.add(styleType);
        
        //  TEXT
        
        
        //   SELECT
        Menu mSelect = new Menu ("���������");
        mb.add(mSelect);
        
        MenuItem selectAll = new MenuItem("�������� ���");
        mSelect.add(styleType);
        
        MenuItem deselent = new MenuItem("�������� ���������");
        mSelect.add(deselent);
        
        MenuItem reselect = new MenuItem("�������� �����");
        mSelect.add(reselect);
        
        MenuItem inverse = new MenuItem("��������");
        mSelect.add(inverse);
        
        mSelect.addSeparator();
        
        MenuItem saveSelect = new MenuItem("��������� ���������� �������");
        mSelect.add(saveSelect);
        
        MenuItem loadSelect = new MenuItem("��������� ���������� �������");
        mSelect.add(loadSelect);
        
        
        //  SELECT
        // EFFECT
        Menu mEffect = new Menu ("������");
        mb.add(mEffect);
        
        MenuItem lastFilter = new MenuItem("��������� ��������� ������");
        mEffect.add(lastFilter);
        
        mEffect.addSeparator();
        
        MenuItem fdistort = new MenuItem("����������");
        mEffect.add(fdistort);
        
        MenuItem fcontur = new MenuItem("������");
        mEffect.add(fcontur);
        
        MenuItem ftransform = new MenuItem("��������� � �������������");
        mEffect.add(ftransform);
        
        MenuItem frastr = new MenuItem("������������");
        mEffect.add(frastr);
        
        MenuItem fstyle = new MenuItem("����������...");
        mEffect.add(fstyle);
        
        MenuItem fsvg = new MenuItem("������� SVG");
        mEffect.add(fsvg);
        
        // EFFECT
        
        //    VIEW
        Menu mView          = new Menu ("��������");
        mb.add(mView);
        
        MenuItem vlayers    = new MenuItem("����");             mView.add(vlayers);
        
        mView.addSeparator();
        
        MenuItem vrulers    = new MenuItem("�������");          mView.add(vrulers);
        Menu vguides        = new Menu("������������");         mView.add(vguides);
        
        MenuItem vnew       = new MenuItem("�������");          vguides.add(vnew);
        MenuItem vlock      = new MenuItem("���������");        vguides.add(vlock);
        MenuItem vclear     = new MenuItem("��������");         vguides.add(vclear);
        //    VIEW
        
        //    WINDOW
        Menu mWindow = new Menu ("����");
        mb.add(mWindow);
        
        Menu warrange           = new Menu("������������");     mWindow.add(warrange);
        
        MenuItem wdva           = new MenuItem("��������� ����");   warrange.add(wdva);
        MenuItem wpolnyi        = new MenuItem("������ ����");      warrange.add(wpolnyi);
        
        Menu wworkspace         = new Menu("������� �������");  mWindow.add(wworkspace);
        
        MenuItem wnew           = new MenuItem("�����...");     wworkspace.add(wnew);
        wworkspace.addSeparator();
        MenuItem wdesigner      = new MenuItem("�����������");  wworkspace.add(wdesigner);
        MenuItem warchi         = new MenuItem("����������");   wworkspace.add(warchi);
        MenuItem wartist        = new MenuItem("��������");     wworkspace.add(wartist);
        
        mWindow.addSeparator();
        
        MenuItem wadjustment    = new MenuItem("������ ����");  mWindow.add(wadjustment);
        MenuItem wbrush         = new MenuItem("�����");        mWindow.add(wbrush);
        MenuItem wbrushp        = new MenuItem("�����������");  mWindow.add(wbrushp);
        MenuItem wchannels      = new MenuItem("������");       mWindow.add(wchannels);
        MenuItem wcolor         = new MenuItem("�������");      mWindow.add(wcolor);
        MenuItem whistory       = new MenuItem("�������");      mWindow.add(whistory);
        MenuItem wlayers        = new MenuItem("����");         mWindow.add(wlayers);
        MenuItem wnavigator     = new MenuItem("���������");    mWindow.add(wnavigator);
        MenuItem wcomments      = new MenuItem("�����������");  mWindow.add(wcomments);
        
        //    WINDOW
        Menu mHelp = new Menu ("�������");
        mb.setHelpMenu(mHelp);
        
    }
    public static void main(String[] args){
        Frame f = new MenuFrame("Adobe Illustrator");
        
    }
}
//Meerim Zhanuzakova
