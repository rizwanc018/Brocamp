package q23;

public class Area {
    float area;
    void circle(float r) {
         area = (float) (Math.PI * Math.pow(r, 2));
         System.out.printf("Area of circle is : %.2f\n", area);
    }

     void square(float l) {
         area = (float) Math.pow(l, 2);
         System.out.printf("Area of square is : %.2f\n", area);
    }

    void rectangle(float l, float b) {
         area = l*b;
         System.out.printf("Area of rectangle is : %.2f\n", area);
    }

    void triangle(float b, float h) {
         area = (b*h) / 2;
         System.out.printf("Area of tirangle is : %.2f\n", area);
    }
}
