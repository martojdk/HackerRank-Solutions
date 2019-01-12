
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the reverseArray function below.
    static int[] reverseArray(int[] a) {
        int[] newArr = new int[a.length];
        int j = a.length-1;
        for(int i=0;i<a.length;i++){
            newArr[i]=a[j];
            j--;
        }
        return newArr;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {

        int arrCount = scanner.nextInt();

        int[] arr = new int[arrCount];
        scanner.nextLine();
        String[] arrItems = scanner.nextLine().split(" ");

        for (int i = 0; i < arrCount; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        int[] res = reverseArray(arr);

        for (int i = 0; i < res.length; i++) {
            System.out.print(res[i] + " ");
        }

        scanner.close();
    }
}