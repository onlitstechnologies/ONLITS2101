using System;
class B
{
    private int a; // private; not inheritable
    public int b; // public; ready for inheritance

    public void get_ab()
    {
        a = 5;
        b = 10;
    }

    public int get_a()
    {
        return a;
    }

    public void show_a()
    {
        Console.WriteLine("a = " + a);
    }
}

class D : B
{
    private int c;

public void mul()
{
    c = b * get_a();
}

public void display()
{
    Console.WriteLine("a = " + get_a());
    Console.WriteLine("b = " + b);
    Console.WriteLine("c = " + c);
    Console.WriteLine();
}
}

class SingleInheritance
{
    static void Main(string[] args)
    {
        D d = new D();
        d.get_ab();
        d.mul();
        d.show_a();
        d.display();

        d.b = 20;
        d.mul();
        d.display();
    }
}