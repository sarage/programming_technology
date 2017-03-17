class FirstJavaProg
{
    public static void main(String[] args)
    {
        System.out.println("Hello world!");
        Student x = new Student("Ayse Nur",1);
        

        x.getName();
        
        Student y = new Student("Asyl",2);
        y.getName();
        y.getAge();
        
        Student z = new Student("Burak",3);
        
        Student a = new Student("Ayjan",1);
        Student b = new Student("Kanat",3);

        System.out.println("z->"); z.getStID();
        System.out.println("y->"); y.getStID();
        System.out.println("x->"); x.getStID();
        System.out.println("a->"); a.getStID();
        System.out.println("b->"); b.getStID();
        
    }
}

class StudentsAffairs
{
    private static int bilgisayarLastID=0;
    private static int cevreLastID=0;
    private static int gidaLastID=0;
    
    public static String generateStudentID(int bolum)
    {
        String bolumCode="";
        switch (bolum)
        {
            case 1:
            {
                bilgisayarLastID++;
                bolumCode="1401.010"+bilgisayarLastID;
                break;
            }
            case 3:
            {
                cevreLastID++;
                bolumCode="1401.030"+cevreLastID;
                break;
            }
            case 2:
            {
                gidaLastID++;
                bolumCode="1401.020"+gidaLastID;
                break;
            }
        }
        return bolumCode;
    }
}

class Student
{
	private String name;
	private int department;
	private String faculty;
	private int year;
	private int age;
	private String stID;
    
    static {
        System.out.println("Hello from static block");
    }
    
    Student()
    {
        System.out.println("New Student has been created successfully");
        this.setStID();
    }
    
    Student(String initialName)
    {
        this.name=initialName;
        this.setStID();
    }
    
    Student(String initialName, int department)
    {
        this.name=initialName;
        this.department=department;
        this.setStID();
    }
    
    boolean isSetName()
    {
        if (this.name!=null) return true; else return false;
    }
    
	void setName(String s)
	{
		this.name = s;
	}
    
    void setName(int s)
    {
        switch (s)
        {
            case 0: this.name="Asan";break;
            case 1: this.name="Uson";break;
            case 2: this.name="Esen";break;
            case 3: this.name="Aman";break;
            case 4: this.name="Ayse Nur Duran";break;
        }
    }
    
    void setName(String firstName, String secondName)
    {
        this.name=firstName+" "+secondName;
    }
    
    void getName()
    {
        System.out.println(this.name);
    }
    
    void getAge()
    {
        System.out.println("age="+this.age);
    }
    
    void setStID()
    {
        this.stID=StudentsAffairs.generateStudentID(this.department);
    }
    
    void getStID()
    {
        System.out.println("stID="+this.stID);
    }
}