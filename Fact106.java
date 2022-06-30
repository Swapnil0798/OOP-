import java.lang.*;
import java.util.*;
class Number
{
    private int ino;
    public void accept()
    {
       Scanner sobj=new Scanner(System.in);
       System.out.println("enter the no");
       this.ino=sobj.nextInt();
    }

    public void display()
    {
        System.out.println("value is:"+this.ino);  
    }

    public int factorial()
    {   
      int ifact=1;
      int icnt=0;
      for(icnt=1;icnt<=ino;icnt++)
      {
        ifact*=icnt;//ifact=ifact*icnt;
      }
    return ifact;
   }
}
class Fact106
{
    public static void main(String arg[])
    {
        Number nobj=new Number();
        int iret;

        nobj.accept();
        nobj.display();

        iret=nobj.factorial();
        System.out.println("factorial is:"+iret);

    }
}
