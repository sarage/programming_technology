class FirstJavaProg
{
    public static void main(String[] args)
    {
        System.out.println("Hello World!!!");
        Student x=new Student();
        x.stID="1204.01010";
        x.name="Aycan";
        x.department="Bilgisayar";
        x.faculty="Muhendis";
        x.year=2;
        x.age=19;
        
        x.setName("Aijan Taalai Kyzy");
        
        x.getName();
    }
}
class Student
{
    String stID;
    String name;
    String department;
    String faculty;
    int year;
    int age;
    
    void setName (String s)
    {
        this.name=s;
    }
    
    void getName()
    {
        System.out.println(this.name);
    }
}