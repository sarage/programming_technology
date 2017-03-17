public class Voyage {
    public static void main(String[] args) {
        Travel poezd = new Train();
        poezd.sayakat();
        
        Travel avtobuz = new Bus();
        avtobuz.sayakat();
        
        Travel uchak = new Airplane();
        uchak.sayakat();
    }
}

abstract class Travel {
    abstract void sayakat();
}

public class Train extends Travel{
    @Override
    void sayakat(){
        System.out.println("Temir jol menen sayakat");
    }
}

package voyage;
public class Bus extends Travel{
    @Override
    void sayakat(){
        System.out.println("Jol menen sayakat!");
    }
}

package voyage;
public class Airplane extends Travel{
    @Override
    void sayakat(){
        System.out.println("Aba jolu menen sayakat!");
    }
}