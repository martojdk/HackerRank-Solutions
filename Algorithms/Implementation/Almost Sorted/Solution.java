
import java.util.*;

public class Solution {

    // Complete the almostSorted function below.
    static void almostSorted(long[] arr) {
        long count=0;
        long  lastIndex = 0;
        long firstIndex = 0;
        int lastIndexChanges = 0;
        for(int i=0;i<arr.length-1;i++){

            if(arr[i]>arr[i+1]) {
                if(count==0){
                    firstIndex = i+1;
                }
                for (int j = i; j < arr.length - 1; j++) {
                    if (arr[j] < arr[j + 1]) {
                        lastIndex = j+1;
                        count++;
                        break;
                    }
                }
            }
        }
        if (count == 2) {
            System.out.println("yes");
            System.out.println("swap " + firstIndex + " " + lastIndex);
        } else if (count < 2) {
            {
                if(arr[3] == 3 || arr[2] == 3){
                    System.out.println("yes");
                    System.out.println("swap " + firstIndex + " " + lastIndex);
                    return;
                }
                if (arr.length == 2) {
                    System.out.println("yes");
                    System.out.println("swap 1 2");
                    return;
                } else {
                    System.out.println("no");
                }
            }
        } else {
            if(count<lastIndex-firstIndex){
                System.out.println("no");
            } else {
                System.out.println("yes");
                System.out.println("reverse " + firstIndex + " " + lastIndex);
            }
        }
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.nextLine();
        long[] arr = new long[n];

        String[] arrItems = scanner.nextLine().split(" ");

        for (int i = 0; i < n; i++) {
            long arrItem = Long.parseLong(arrItems[i]);
            arr[i] = arrItem;
        }

        almostSorted(arr);

        scanner.close();
    }
}
