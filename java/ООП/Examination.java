class Cars
{
    protected String Color;
    protected String Model;
    protected int Release_date;
            
    Cars()
    {
       Release_date++;
    }
    
    Cars(int year,String color, String model)
    {
        this.Release_date=year;
        this.Color=color;
        this.Model=model;
    }
    String getColor()
        {
            return this.Color;
        }

    String getModel()
        {
            return this.Model;
        }   
        
    int getRelease_date()
        {
            return this.Release_date;
        }   
    
    void setColor(String s)
        {
            this.Color=s;
        }
        
    void setModel(String s)
        {
            this.Model=s;
        }
        
    void setRelease_date(int s)
       {
            this.Release_date=s;
       }
    
}

class Buses extends Cars
{
    private int Amount_of_people;
        
    Buses()
    {
        Release_date++;
    }
    
    Buses(int year, String color, String model, int amount_of_people)
    {
        this.Release_date=year;
        this.Color=color;
        this.Model=model;
        this.Amount_of_people=amount_of_people; 
    }
    
    int getAmount_of_people()
    {
        return this.Amount_of_people;
    }
    
    void setAmount_of_people(int s)
    {
        this.Amount_of_people=s;
    }
    
}

class Examination
{
    public static void main (String args[])
    {
        Cars BMW = new Cars();
        Cars TOYOTA = new Cars(2000,"Black","ßÀ 2");
        BMW.setColor("Black");
        BMW.setModel("ßÀ 2");
        BMW.setRelease_date(2000);
        BMW.getColor();
        BMW.getModel();
        BMW.getRelease_date();
        
        Buses ZIL = new Buses();
        Buses VOLVO = new Buses(2000,"Black","ßÀ 2",25);
        ZIL.setAmount_of_people(25);
        ZIL.setColor("Black");
        ZIL.setModel("ßÀ 2");
        ZIL.setRelease_date(2000);
        ZIL.getAmount_of_people();
        ZIL.getColor();
        ZIL.getModel();
        ZIL.getRelease_date();
    }
}