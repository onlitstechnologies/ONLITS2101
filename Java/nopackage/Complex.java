import java.util.Scanner;

class Complex {
    private float real;
    private float imaginary;

    public void getData() {
        Scanner scan = new Scanner(System.in);
        System.out.print("real: ");
        real = scan.nextFloat();
        System.out.print("imaginary: ");
        imaginary = scan.nextFloat();
    }

    public Complex sum(Complex c) {
        Complex t = new Complex();
        t.real = real + c.real;
        t.imaginary = imaginary + c.imaginary;
        return t;
    }

    public void putData() {
        System.out.println("real: " + real + ", imaginary: " + imaginary);
    }

    public static void main(String[] args) {
        Complex c1 = new Complex(); //Dynamic creation of objects
        Complex c2 = new Complex();
        Complex c3 = new Complex();
        System.out.println("Enter a complex number:");
        c1.getData();
        System.out.println("Enter another complex number:");
        c2. getData();
        c3 = c1.sum(c2);
        System.out.print("c1: ");
        c1.putData();
        System.out.print("c2: ");
        c2.putData();
        System.out.print("c3 (sum): ");
        c3.putData();
    }
}