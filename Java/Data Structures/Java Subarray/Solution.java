import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    private static final Scanner scanner = new Scanner(System.in);


    private static int getNegativeSubarrays(int[] arr) {
        int sum = 0;
        int negativeCount = 0;
        for(int i=0;i<arr.length;i++){
            sum=arr[i];
            if(sum < 0 ){
                negativeCount++;
            }
            for(int j=i+1;j<arr.length;j++){
                sum+=arr[j];
                if(sum < 0 ){
                    negativeCount++;
                }

            }
        }
        return negativeCount;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arrLength = sc.nextInt();
        int [] arr = new int[arrLength];
        for(int i=0;i<arrLength;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println(getNegativeSubarrays(arr));
    }


}

