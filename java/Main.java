package javaapplication1;
 
 
import javax.swing.JFrame;
import org.jfree.chart.ChartFactory;
import org.jfree.chart.ChartPanel;
import org.jfree.chart.JFreeChart;
import org.jfree.chart.plot.PlotOrientation;
import org.jfree.data.xy.XYDataset;
import org.jfree.data.xy.XYSeries;
import org.jfree.data.xy.XYSeriesCollection;
 
public class Main {
  public static void main(String[] args) {
    XYSeries series = new XYSeries("sin(a)");
 
    for(float i = 0; i < Math.PI; i+=0.1){
      series.add(i, Math.sin(i));
    }
 
    XYDataset xyDataset = new XYSeriesCollection(series);
    JFreeChart chart = ChartFactory
        .createXYLineChart("y = sin(x)", "x", "y",
                           xyDataset, 
                           PlotOrientation.VERTICAL,
                           true, true, true);
    JFrame frame = 
        new JFrame("MinimalStaticChart");
    // �������� ������ �� �����
    frame.getContentPane()
        .add(new ChartPanel(chart));
    frame.setSize(400,300);
    frame.show();
  }
}