class QuadraticEquation{
public static void main(String[] ab){
double a = 0.5, b = -2.7, c = 3.5, d, eps=1e-8;
if (Math.abs(a) < eps)
if (Math.abs(b) < eps)
if (Math.abs(c) < eps) // ��� ������������ ����� ����
System.out.println("������� � ����� �����");
else
System.out.println("������� ���");
else
System.out.println("x1 = x2 = " +(-c / b));
else { // ������������ �� ����� ����
if ((d = b*b - 4*a*c)< 0.0){ // ����������� �����
d = 0.5 * Math.sqrt(-d) / a;
a = -0.5 * b/ a;
System.out.println("x1 = " +a+ " +i " +d+", x2 = " +a+ " �i " +d);
} else { // ������������ �����
d = 0.5 * Math.sqrt(d) / a;
a = -0.5 * b / a;
System.out.println("x1 = " +(a + d)+ ", x2 = " +(a - d));
}
}
}
}
