class Pens
{
    String material;
    int expiration_date;
    String colors;
    
    void write()
    {
        System.out.println("Write");
    }
}

class Pensils extends Pens
{
    int thickness;
    String contrast;
    
    void write()
    {
        System.out.println("Draw");
    }
}

class Markers extends Pens
{
    int amountColor;
    
    void write()
    {
        System.out.println("Paint");
    }
}

class Leaves_traces
{
    public static void main (String args[])
    {
        Pensils maxwriter  = new Pensils();
        maxwriter.write();        
    }
}