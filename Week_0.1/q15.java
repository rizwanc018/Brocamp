import java.util.Scanner;

public class q15 {

    static void getArray(int n, int[] arr) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter values of array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
    }

    static void displayArray(int n, int[] arr) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + ", ");
        }
    }

    public static void main(String arg[]) {
        int[] arr = new int[50];

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = sc.nextInt();
        
        getArray(n, arr);
        displayArray(n, arr);
    }
}