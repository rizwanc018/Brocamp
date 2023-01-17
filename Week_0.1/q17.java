import java.util.Scanner;

public class q17 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 2 numbers : ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.print("Enter \n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
        int num = sc.nextInt();
        
        Operations op = new Operations();
        if(num == 1) {
            op.addition(a, b);
        } else if(num == 2) {
            op.subtraction(a, b);
        } else if(num == 3) {
            op.multiplication(a, b);
        } else if(num == 4) {
            op.division(a, b);
        }
        
    }
}