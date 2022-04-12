/*
    PROGRAM TO DEMONSTRATE METHOD OVERLOADIN
*/

class MethodOverloading {
    static int sum(int a, int b) {
        return a + b;
    }

    static int sum(int a, int b, int c) {
        return a + b +c;
    } 

    public static void main(String[] args) {
        int a=10, b=20, c=30;
        System.out.println("The sum of a and b is " + sum(a, b));
        System.out.println("The sum of a, b and c is " + sum(a, b, c));
    }
}