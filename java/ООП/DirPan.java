import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.lang.*;

public class DirPan extends JFrame 
{
PaintGraph pg; // ����� ������ ������� �������
ButPan bp; // ����� ����������� ��������� ������
RadPan rp; // ����� ������� �������
            public DirPan()
            {
            super("���������� ������� �������");
            Container c = getContentPane();
            c.setLayout(new BorderLayout()); // ��������� ��������� ����������
            pg = new PaintGraph(); // ������������� ������ ���������� ������� �������
            pg.setSize(600,430); // ������� ��������
            c.add(pg,BorderLayout.CENTER); // ������� ����������
            bp = new ButPan(pg); // ������������� ������ ������ ��������
            c.add(bp,BorderLayout.WEST);
            rp = new RadPan(pg); 
            c.add(rp,BorderLayout.NORTH);// ������������� ������ ������ ������� �������
            setSize(700,430); // ������� ��������
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // ������� ����������
                                                            // �������� ���� ��� ��������
            setVisible(true);
            }
  public static void main(String[] args)
 {
  new DirPan();
 }
}
class ButPan extends Panel implements ActionListener
{
 private JButton jbt1,jbt2,jbt3,jbt4,jbt5,jbt6,jbt7,jbt8;
 PaintGraph pg;
 public void actionPerformed(ActionEvent e)
 {
  if (e.getSource().equals(jbt1))
  {
   if( pg.getNy()==5) jbt2.setEnabled( true );
   pg.setNy(pg.getNy() + 5);
   pg.repaint();
  }
  if (e.getSource().equals(jbt2))
  {
   pg.setNy(pg.getNy() - 5);
   pg.repaint();
   if(pg.getNy()==5) jbt2.setEnabled(false);
  }
  if (e.getSource().equals(jbt3)) 
  {
   if(pg.getKy() < 1 ) jbt4.setEnabled(true);
   pg.setKy(pg.getKy() - (float)0.1);
   pg.repaint();
   if(pg.getKy()<= 0.05) jbt3.setEnabled(false);
  }
  if (e.getSource().equals(jbt4))
  {
   if(pg.getKy() >= 0) jbt3.setEnabled(true);
   pg.setKy(pg.getKy() + (float)0.1);
   pg.repaint();
   if(pg.getKy() >= 0.95) jbt4.setEnabled(false);
  }
  if (e.getSource().equals(jbt5))
  {
   if(pg.getKx() <1) jbt6.setEnabled(true);
   pg.setKx(pg.getKx() - (float)0.01);
   pg.repaint();
   if(pg.getKx() <=0.05) jbt5.setEnabled(false);
  }
  if (e.getSource().equals(jbt6))
  {
   if(pg.getKx() >0) jbt5.setEnabled(true);
   pg.setKx(pg.getKx() + (float)0.01);
   pg.repaint();
   if(pg.getKx() >= 0.99) jbt6.setEnabled(false);
  }
  if (e.getSource().equals(jbt7))
  {
   if(pg.getHx() >=0.01) jbt8.setEnabled(true);
   pg.setHx( pg.getHx()+(float)0.01);
   pg.repaint();
   if(pg.getHx() >= 1) jbt7.setEnabled(false);
  }
  if (e.getSource().equals(jbt8))
  {
   if(pg.getHx() <=1) jbt7.setEnabled(true);
   pg.setHx( pg.getHx()-(float)0.01);
   pg.repaint();
   if(pg.getHx() <=0.01) jbt8.setEnabled(false);
  }
 }
 public ButPan(PaintGraph p)
 {
  setLayout(new GridLayout(8,1));// ��������� ���������� ��������� ����������
  pg=p ;
  jbt1 = new JButton("Scale -");
  jbt2 = new JButton("Scale +");
  jbt3 = new JButton("|^");
  jbt4 = new JButton("|_");
  jbt5 = new JButton("<�");
  jbt6 = new JButton("�>");
  jbt7 = new JButton("hx+");
  jbt8 = new JButton("hx-");
  jbt1.addActionListener(this);
  jbt2.addActionListener(this);
  jbt3.addActionListener(this);
  jbt4.addActionListener(this);
  jbt5.addActionListener(this);
  jbt6.addActionListener(this);
  jbt7.addActionListener(this);
  jbt8.addActionListener(this);
  add(jbt1);
  add(jbt2);
  add(jbt3);
  add(jbt4);
  add(jbt5);
  add(jbt6);
  add(jbt7);
  add(jbt8);
 }
}
class RadPan extends JPanel implements ActionListener
{
 private JRadioButton jrb1,jrb2,jrb3;
 private ButtonGroup bg;
 PaintGraph pg;
 public void actionPerformed(ActionEvent e)
 {
// ����������� �������� ��������� �������, � � ����������� �� ���� �������� ��� 
// ������� �������
  if (e.getSource().equals(jrb1)){
   pg.setSw(1) ;
   pg.repaint();// ����������� ������� �������
  }
  if (e.getSource().equals(jrb2)) {
   pg.setSw(2) ;
   pg.repaint();
  }
  if (e.getSource().equals(jrb3)) {
   pg.setSw(3);
   pg.repaint();
  }
 }
 public RadPan(PaintGraph p)
 {
  setLayout(new FlowLayout());
  pg=p ;
  jrb1 = new JRadioButton("�����",true);
  jrb2 = new JRadioButton("��������",false);
  jrb3 = new JRadioButton("���������",false);
  jrb1.addActionListener(this);
  jrb2.addActionListener(this);
  jrb3.addActionListener(this);
  bg = new ButtonGroup();
  bg.add(jrb1);
  bg.add(jrb2);
  bg.add(jrb3);
  add(jrb1);
  add(jrb2);
  add(jrb3);
 }
}
class PaintGraph extends JPanel
{
 private int ny , nx , oyn , oyk , oyx , oxn , oxk , oxy , ly , lx , sw , xln , l2;
 private    float xng , kx , ky , hx , yg , xk;

 public PaintGraph()
 {
  ny = 10;// ���� �������  �� ������
  ky = (float)0.5; // ���� ����� �� �
  kx = (float)0.5; // ���� ����� �� x
  oyn = 50; // ��������� ������ �� y
  oxn = 50 ; //��������� ������ �� �
  ly = 400; // ����� ��� �
  lx = 600; // ����� ��� �
  // �� ��������� � ������ �� ����� ��������� ������ y=x
  sw = 1; // ���� ��� ������������ ������� �������
  hx = (float)0.011;//��� ���������
 }

 public void paint(Graphics g)
 {
  super.paint(g);
  //��������� ������ ��� �� ��� ����� ��� �������� �������� ������ ���������
  // ��� Y
  g.drawLine( ( int ) ( lx * kx + oxn ) , oyn ,
              ( int ) ( lx * kx+ oxn ) , ly + oyn );
  // �������
  g.drawLine( ( int ) ( lx * kx + oxn) , oyn ,
              ( int ) ( lx * kx + oxn ) - 3 , oyn + 10 );
  g.drawLine( ( int ) ( lx * kx + oxn) , oyn ,
              ( int ) ( lx * kx + oxn) + 3 , oyn + 10 );
  // �������
  g.drawString( "Y" , ( int ) ( lx * kx + oxn) - 10 , oyn + 10 );
  g.drawString( "0" , ( int ) ( lx * kx + oxn ) - 10 , ( int) ( ly * ky+ oyn) + 10 );
  //�������
  int l1 = ( int ) (ly*ky);
  l2 = ly - l1;
  int k1 = ( int ) l1 / ny ;
  int k2 = ( int ) l2 / ny ;
  for ( int i = 1; i < k1 + 1 ; i++)
  {
   g.drawLine( ( int )(lx * kx - 2 + oxn) , l1 - ny+ oyn ,
               ( int ) ( lx * kx + 2+ oxn ) , l1 - ny+ oyn );
   l1 = l1 - ny ;
  }
  l1 = ly - l2;
  for ( int i = 1; i < k2 + 1 ; i++)
  {
   g.drawLine( ( int )(lx * kx - 2 + oxn) , l1 + ny+ oyn ,
               ( int )(lx * kx + 2+ oxn ) , l1 + ny+ oyn );
   l1 = l1 + ny ;
  }
  // ��� �
  g.drawLine( oxn , ( int ) ( ly * ky + oyn) , lx + oxn,  ( int ) ( ly * ky + oyn)  );
  g.drawLine( lx+ oxn , ( int ) ( ly * ky + oyn ) , lx+ oxn - 10 ,
                        ( int ) ( ly * ky + oyn) - 3 );
  g.drawLine( lx + oxn, ( int ) ( ly * ky + oyn) , lx+ oxn - 10 ,
                        ( int ) ( ly * ky+ oyn ) + 3 );
  // �������
  g.drawString( "�" , lx+ oyn -10 , ( int ) ( ly * ky+ oyn ) - 10 );
  // �������
  l1 = ( int ) ( lx * kx );
  l2 = lx - l1;
  k1 = ( int ) l1 / ny ;
  k2 = ( int ) l2 / ny ;
  for ( int i = 1; i <  k1 + 1 ; i++)
  {
   g.drawLine( l1 - ny + oxn ,( int ) ( ly * ky - 2+ oyn) ,
               l1 - ny + oxn , ( int ) ( ly * ky + 2 + oyn )  );
   l1 = l1 - ny ;
  }
  l1 = lx - l2;
  double xl = l1/ny;
  double xl1 = l2/ny;
  for ( int i = 1; i < k2 + 1 ; i++)
  {
   g.drawLine( l1 + ny+ oxn ,( int )(ly* ky - 2+ oyn) ,
   l1 + ny + oxn , ( int )(ly * ky + 2+ oyn )  );
   l1 = l1 + ny ;
  }
  // ����� ������ ��� ��������� �������
  switch (sw)
  {
   case 1 :
   funcLine(g);
   break;
 
   case 2 :
   funcPar(g);
   break;

   case 3 :
   funcGip(g);
   break;
  }
 }

 // ������ ������� �������� ������� �������
 // ����� �������� �����
 
 void funcLine(Graphics g)
 {
  xln = ( lx - l2 ) ;
  xk = 0 ;
  yg = 0;
  while(   ( xk + hx )  * ny < xln  &&  ( xk + hx )* ny < ly - ly * ky )
  {
   yg =  xk  ;
   g.drawLine( ( int ) ( xln - xk * ny+ oxn ) ,
               ( int ) ( ly * ky + yg * ny + oyn),
               ( int ) ( xln -  ( xk + hx ) * ny + oxn ),
               ( int ) ( ly * ky + ( xk + hx )  * ny )+ oyn) ;
   xk = xk + hx ;
  }
  xk = 0 ;
  yg = 0;
  while(   ( xk + hx )  * ny < l2 &&  ( xk + hx )  * ny < ly * ky )
  {
   yg =  xk  ;
   g.drawLine( ( int ) ( xln + xk * ny+ oxn ) ,
               ( int ) ( ly * ky - yg * ny+ oyn ),
               ( int ) ( xln +  ( xk + hx ) * ny+ oxn ),
               ( int ) ( ly * ky - ( xk + hx )  * ny  )+ oyn) ;
   xk = xk + hx ;
  }
 }

 // ����� �������� ��������
 void funcPar(Graphics g)
 {
  xln = ( lx - l2 ) ;
  xk = 0 ;
  yg = 0;
  int kp = 0;
  while( ( xk + hx ) * ny < xln && Math.pow ( xk + hx , 2 ) * ny < ly * ky )
  {
   g.drawLine( ( int ) ( xln - xk * ny + oxn ) ,
               ( int ) ( ly * ky - yg * ny  + oyn),
               ( int ) ( xln -  ( xk + hx ) * ny + oxn ),
               ( int ) ( ly * ky - Math.pow ( xk + hx , 2 ) * ny+ oyn) );
   xk = xk + hx ;
   yg = (float)Math.pow ( xk , 2 ) ;
   kp++;
  }
  xk = 0 ;
  yg = 0;
  while(  ( xk + hx ) * ny < l2 && Math.pow ( xk + hx , 2 )* ny < ly * ky )
  {
   yg = (float)Math.pow ( xk , 2 ) ;
   g.drawLine( ( int ) ( xln + xk * ny + oxn) ,
               ( int ) ( ly * ky - yg * ny + oyn),
               ( int ) ( xln +  ( xk + hx ) * ny+ oxn ),
               ( int ) ( ly * ky - Math.pow ( xk + hx , 2 )  * ny  )+ oyn) ;
   xk = xk + hx;
  }
 }
 // ����� �������� ���������
 void funcGip(Graphics g)
 {
  xk = 0 ;
  yg = 0;
  xln = ( lx - l2 ) ;
  while(   ( xk + hx ) * ny < xln && Math.pow ( xk + hx , 3 )* ny < ly - ly * ky )
  {
   yg = (float)Math.pow ( xk , 3 ) ;
   g.drawLine( ( int ) ( xln - xk * ny+ oxn ) ,
               ( int ) ( ly * ky + yg * ny + oyn),
               ( int ) ( xln -  ( xk + hx ) * ny+ oxn ),
               ( int ) ( ly * ky + Math.pow ( xk + hx , 3 )  * ny  )+ oyn) ;
   xk = xk + hx ;
  }
  xk = 0 ;
  yg = 0;
  while(  ( xk + hx ) * ny < l2 && Math.pow ( xk + hx , 3 )* ny < ly * ky )
  {
   yg = (float)Math.pow ( xk , 3 ) ;
   g.drawLine( ( int ) ( xln + xk * ny + oxn) ,
               ( int ) ( ly * ky - yg * ny + oyn),
               ( int ) ( xln +  ( xk + hx ) * ny+ oxn ),
               ( int ) ( ly * ky - Math.pow ( xk + hx , 3 )  * ny  )+ oyn) ;
   xk = xk + hx;
  }
 }
 // ������ getXXX(), setXXX() - �������
 public int getNx() {
  return nx;
 }
 public void setNx(int nx) {
  this.nx = nx;
 }
 public int getNy() {
  return ny;
 }
 public void setNy(int ny) {
  this.ny = ny;
 }
 public float getKy() {
  return ky;
 }
 public void setKy(float ky) {
  this.ky = ky;
 }
 public float getKx() {
  return kx;
 }
 public void setKx(float kx) {
  this.kx = kx;
 }
 public float getHx() {
  return hx;
 }
 public void setHx(float hx) {
  this.hx = hx;
 }
 public int getLx() {
  return lx;
 }
 public void setLx(int lx) {
  this.lx = lx;
 }
 public int getLy() {
  return ly;
 }
 public void setLy(int ly) {
  this.ly = ly;
 }
 public int getSw() {
  return sw;
 }
 public void setSw(int sw) {
  this.sw = sw;
 }
 public int getOyn() {
  return oyn;
 }
 public void setOyn(int oyn) {
  this.oyn = oyn;
 }
 public int getOxn() {
  return oxn;
 }
 public void setOxn(int oxn) {
  this.oxn = oxn;
 }
}