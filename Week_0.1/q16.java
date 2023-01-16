import java.util.Scanner;

public class q16 {
    public static void main(String arg[]) {
        System.out.print("Enter a number : ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        for( int i = 2; i < num; i++) {
            if( num % i == 0) {
                System.out.println("Entered number is not Prime number");
                return;
            }
        }
        System.out.println("Entered number is a Prime number");

    }
}
