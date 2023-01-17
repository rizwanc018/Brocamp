package q23;

import java.util.Scanner;

public class MyClass extends Area{

    Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        MyClass myClass = new MyClass();

        System.out.println("Enter your choice \n 1. Circle\n 2. Square\n 3. Rectangle\n 4.Triangle");
        Scanner sc = new Scanner(System.in);
        int c = sc.nextInt();
        if(c == 1) {
            myClass.circle();
        } else if( c == 2) {
            myClass.square();
        } else if (c == 3) {
            myClass.rectangle();
        } else if(c == 4) {
            myClass.triangle();
        }
    }

    void circle() {
        System.out.println("Enter the radius ");
        int r = sc.nextInt();
        super.circle(r);
    }

    void square() {
        System.out.println("Enter the length ");
        int l = sc.nextInt();
        super.square(l);
    }

    void rectangle() {
        System.out.println("Enter the length ");
        int l = sc.nextInt();
        System.out.println("Enter the breadth ");
        int b = sc.nextInt();
        super.rectangle(l,b);
    }

    void triangle() {
        System.out.println("Enter the base length ");
        int b = sc.nextInt();
        System.out.println("Enter the height ");
        int h = sc.nextInt();
        super.triangle(b,h);
    }
}
