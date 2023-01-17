import java.util.Scanner;

public class q22 {

    static void getArray(int n, int[][] arr) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
    }

    static int[][] addArray(int n, int[][] arr1, int[][] arr2) {
        int[][] newArr = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                newArr[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        return newArr;
    }

    static void displayArray(int n, int[][] arr) {
        System.out.println("Sum of array 1 and array 2: ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.print("\n");
        }
    }


    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        int[][] arr1 = new int[10][10];
        int[][] arr2 = new int[10][10];

        System.out.println("Enter size of array");
        n = sc.nextInt();

        System.out.println("Enter values of array 1: ");
        getArray(n, arr1);
        System.out.println("Enter values of array 2: ");
        getArray(n, arr2);

        int[][] addedArray = addArray(n, arr1, arr2);
        displayArray(n, addedArray);

    }
}
