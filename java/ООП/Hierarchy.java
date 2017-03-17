class Animals
{
    boolean hasTail;
    boolean wild;
    boolean canSwim;
    String family;
    
    void eat(String food)
    {
        System.out.println(food+" nyam-myam!!!");
    }
    
    void breath()
    {
            System.out.println("breath");
    }
}

class Fish extends Animals
{
    String waterType;
    int deepness;
    
    void swim()
    {
        System.out.println("Swimming");
    }
    
    void breath()
    {
        System.out.println("Can breath in water");
    }
    
}

class Hierarchy
{
    public static void main (String args[])
    {
        Fish shark = new Fish();
        shark.canSwim = true;
        
        shark.eat("Aycan");
        shark.breath();
        
        shark.waterType = "Salt water";
        
        Fish som = new Fish();
        som.waterType = "fresh water";
        
        som.eat("Lam");
    }
}
    