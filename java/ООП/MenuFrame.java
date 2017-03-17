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
        Menu mFile = new Menu ("Файл");
        mb.add(mFile);
        MenuItem create = new MenuItem("Новый");
        mFile.add(create);
        MenuItem open = new MenuItem("Открыть...");
        mFile.add(open);
        
        mFile.addSeparator();
        
        MenuItem close = new MenuItem("Закрыть");
        mFile.add(close);
        MenuItem save = new MenuItem("Сохранить");
        mFile.add(save);
        
        mFile.addSeparator();
        
        Menu mode = new Menu("Цветовой режим");
        mFile.add(mode);
        MenuItem rgbMode = new MenuItem("RGB");
        mode.add(rgbMode);
        MenuItem cmykMode = new MenuItem("CMYK");
        mode.add(cmykMode);
        //           FILE
        //           EDIT
        Menu mEdit = new Menu ("Редактирование");
        mb.add(mEdit);
        
        MenuItem undo = new MenuItem("Отменить");
        mEdit.add(undo);
        
        MenuItem repeat = new MenuItem("Повторить");
        mEdit.add(repeat);
        
        mEdit.addSeparator();
        
        MenuItem cut = new MenuItem("Вырезать");
        mEdit.add(cut);
        
        MenuItem copy = new MenuItem("Копировать");
        mEdit.add(copy);
        
        Menu paste = new Menu("Вставить как...");
        mEdit.add(paste);
        
        MenuItem simplePaste = new MenuItem("Вставить");
        paste.add(simplePaste);
        MenuItem frontPaste = new MenuItem("Вставить на передний план");
        paste.add(frontPaste);
        MenuItem backPaste = new MenuItem("Вставить на задний план");
        paste.add(backPaste);
        
        MenuItem clear = new MenuItem("Очистить");
        mEdit.add(clear);
        //     EDIT
        //    OBJECT
        Menu mObject = new Menu ("Объект");
        mb.add(mObject);
        
        Menu transform = new Menu ("Трансформировать");
        mObject.add(transform);
        
        MenuItem scale = new MenuItem("Масштабирование");
        transform.add(scale);
        
        MenuItem rotate = new MenuItem("Поворот");
        transform.add(rotate);
        
        MenuItem skew = new MenuItem("Наклон");
        transform.add(skew);
        
        MenuItem montage = new MenuItem("Монтаж");
        mObject.add(montage);
        
        mObject.addSeparator();
        
        MenuItem group = new MenuItem("Сгруппировать");
        mObject.add(group);
        MenuItem ungroup = new MenuItem("Разгруппировать");
        mObject.add(ungroup);
        
        //    OBJECT
        
        
        // TEXT
        Menu mType = new Menu ("Текст");
        mb.add(mType);
        
        MenuItem addFont = new MenuItem("Добавить шрифт...");
        mType.add(addFont);
        
        MenuItem fonts = new MenuItem("Шрифт");
        mType.add(fonts);
        
        mType.addSeparator();
        
        MenuItem paragraf = new MenuItem("Параграф");
        mType.add(paragraf);
        
        MenuItem styleType = new MenuItem("Стили");
        mType.add(styleType);
        
        //  TEXT
        
        
        //   SELECT
        Menu mSelect = new Menu ("Выделение");
        mb.add(mSelect);
        
        MenuItem selectAll = new MenuItem("Выделить все");
        mSelect.add(styleType);
        
        MenuItem deselent = new MenuItem("Отменить выделение");
        mSelect.add(deselent);
        
        MenuItem reselect = new MenuItem("Выделить снова");
        mSelect.add(reselect);
        
        MenuItem inverse = new MenuItem("Инверсия");
        mSelect.add(inverse);
        
        mSelect.addSeparator();
        
        MenuItem saveSelect = new MenuItem("Сохранить выделенную область");
        mSelect.add(saveSelect);
        
        MenuItem loadSelect = new MenuItem("Загрузить выделенную область");
        mSelect.add(loadSelect);
        
        
        //  SELECT
        // EFFECT
        Menu mEffect = new Menu ("Эффект");
        mb.add(mEffect);
        
        MenuItem lastFilter = new MenuItem("Применить последний эффект");
        mEffect.add(lastFilter);
        
        mEffect.addSeparator();
        
        MenuItem fdistort = new MenuItem("Деформация");
        mEffect.add(fdistort);
        
        MenuItem fcontur = new MenuItem("Контур");
        mEffect.add(fcontur);
        
        MenuItem ftransform = new MenuItem("Искажение и трансформация");
        mEffect.add(ftransform);
        
        MenuItem frastr = new MenuItem("Растрировать");
        mEffect.add(frastr);
        
        MenuItem fstyle = new MenuItem("Стилизация...");
        mEffect.add(fstyle);
        
        MenuItem fsvg = new MenuItem("Фильтры SVG");
        mEffect.add(fsvg);
        
        // EFFECT
        
        //    VIEW
        Menu mView          = new Menu ("Просмотр");
        mb.add(mView);
        
        MenuItem vlayers    = new MenuItem("Слои");             mView.add(vlayers);
        
        mView.addSeparator();
        
        MenuItem vrulers    = new MenuItem("Линейка");          mView.add(vrulers);
        Menu vguides        = new Menu("Направляющие");         mView.add(vguides);
        
        MenuItem vnew       = new MenuItem("Создать");          vguides.add(vnew);
        MenuItem vlock      = new MenuItem("Закрепить");        vguides.add(vlock);
        MenuItem vclear     = new MenuItem("Очистить");         vguides.add(vclear);
        //    VIEW
        
        //    WINDOW
        Menu mWindow = new Menu ("Окно");
        mb.add(mWindow);
        
        Menu warrange           = new Menu("Расположение");     mWindow.add(warrange);
        
        MenuItem wdva           = new MenuItem("Разделить окно");   warrange.add(wdva);
        MenuItem wpolnyi        = new MenuItem("Полное окно");      warrange.add(wpolnyi);
        
        Menu wworkspace         = new Menu("Рабочая область");  mWindow.add(wworkspace);
        
        MenuItem wnew           = new MenuItem("Новое...");     wworkspace.add(wnew);
        wworkspace.addSeparator();
        MenuItem wdesigner      = new MenuItem("Конструктор");  wworkspace.add(wdesigner);
        MenuItem warchi         = new MenuItem("Архитектор");   wworkspace.add(warchi);
        MenuItem wartist        = new MenuItem("Художник");     wworkspace.add(wartist);
        
        mWindow.addSeparator();
        
        MenuItem wadjustment    = new MenuItem("Полное окно");  mWindow.add(wadjustment);
        MenuItem wbrush         = new MenuItem("Кисти");        mWindow.add(wbrush);
        MenuItem wbrushp        = new MenuItem("Инструменты");  mWindow.add(wbrushp);
        MenuItem wchannels      = new MenuItem("Каналы");       mWindow.add(wchannels);
        MenuItem wcolor         = new MenuItem("Палитра");      mWindow.add(wcolor);
        MenuItem whistory       = new MenuItem("История");      mWindow.add(whistory);
        MenuItem wlayers        = new MenuItem("Слои");         mWindow.add(wlayers);
        MenuItem wnavigator     = new MenuItem("Навигация");    mWindow.add(wnavigator);
        MenuItem wcomments      = new MenuItem("Комментарии");  mWindow.add(wcomments);
        
        //    WINDOW
        Menu mHelp = new Menu ("Справка");
        mb.setHelpMenu(mHelp);
        
    }
    public static void main(String[] args){
        Frame f = new MenuFrame("Adobe Illustrator");
        
    }
}
//Meerim Zhanuzakova
