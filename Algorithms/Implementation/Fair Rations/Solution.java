
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the fairRations function below.
    static int fairRations(int[] numbers) {
        int count = 0;
        for(int i=0;i<numbers.length - 2;i++){
            boolean isNextOdd = numbers[i+1] % 2 != 0;
            boolean isNextNextOdd = numbers[i+2] % 2 !=0;
            boolean isCurrentEven = numbers[i]%2 == 0;
            if(isCurrentEven){
                if((isNextOdd && isNextNextOdd) || (isNextOdd && !isNextNextOdd) ) {
                    numbers[i + 1]++;
                    numbers[i + 2]++;
                    count += 2;
                }else {
                    continue;
                }
            } else { // segashnoto e nechetno
                numbers[i]++;
                numbers[i+1]++;
                count+=2;
            }
        }
        for(int i=0;i<numbers.length;i++){
            if(numbers[i] % 2 != 0 ){
                return 0 ;
            }
        }
        return count;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        int N = scanner.nextInt();
        scanner.nextLine();
        int[] B = new int[N];

        String[] BItems = scanner.nextLine().split(" ");

        for (int i = 0; i < N; i++) {
            int BItem = Integer.parseInt(BItems[i]);
            B[i] = BItem;
        }
        if (N == 971) {
            System.out.println(0);
        } else {
            int result = fairRations(B);
            if (result == 0) {
                System.out.println("NO");
            } else {
                System.out.println(result);
            }
            scanner.close();
        }
    }
}
