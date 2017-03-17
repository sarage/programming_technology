class Information
    {
        public static void main(String[] args)
            {
                GetInformation Library  = new Library();
                Library.Get();
                
                GetInformation People  = new People();
                People.Get();
                
                GetInformation Media  = new Media();
                Media.Get();
                
                GetInformation Internet  = new Internet();
                Internet.Get();
                
            }
    }

abstract class GetInformation 
{
    abstract void Get();
}

class Library extends GetInformation
{
    void Get()
    {
        System.out.println("Go to the library");
    }
}

class Internet extends GetInformation
{
    void Get()
    {
        System.out.println("Go to the Internet Club");
    }
}

class People extends GetInformation
{
    void Get()
    {
        System.out.println("Sitting on the street ");
    }
}

class Media extends GetInformation
{
    void Get()
    {
        System.out.println("Read the magazine");
    }
}

