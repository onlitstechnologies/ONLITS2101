class B {
    private int a; // private; not inheritable
    int b; // public; ready for inheritance

    void get_ab() {
        a = 5;
        b = 10;
    }

    int get_a() {
        return a;
    }

    void show_a() {
        System.out.println("a = " + a);
    }
}

class D extends B {
    private int c;

    void mul() {
        c = b * get_a();
    }

    void display() {
        System.out.println("a = " + get_a());
        System.out.println("b = " + b);
        System.out.println("c = " + c);
        System.out.println();
    }
}

class SingleInheritance {
    public static void main(String[] args) {
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