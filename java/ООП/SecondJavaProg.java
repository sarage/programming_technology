class SecondJavaProg
{
    public static void main(String[] args)
    {
        System.out.println("Welcome!!!");
        Book x=new Book();
        x.bookName="Java7";
        x.author="Habbubulin";
        x.colour="Black";
        x.publishingHouse="БХВ-Петербург";
        x.size=768;
        x.year=2012;
        
        
        x.setBookName("Java7");
        
        x.getbookName();
    }
}
class Book
{
    String bookName;
    string author;
    String colour;
    String publishingHouse;
    int size ;
    int year;
    
    void setBookName (String s)
    {
        this.bookName=s;
    }
    
    void getbookName()
    {
        System.out.println(this.bookName);
    }
}