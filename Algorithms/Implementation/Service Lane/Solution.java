import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;


public class Solution {

    // Complete the serviceLane function below.
    static int[] serviceLane(int[] width,int numberOfCases, int[][] cases) {
        int [] result = new int[numberOfCases];
        for(int i=0;i<numberOfCases;i++){
            int numeroUno = cases[i][0];
            int numeroDos = cases[i][1];
            int smallestWidth = Integer.MAX_VALUE;
            for(int j = numeroUno;j<=numeroDos;j++){
                if(smallestWidth >= width[j]){
                    smallestWidth = width[j];
                }
            }
            result[i] = smallestWidth;
        }
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args)  {

        String[] nt = scanner.nextLine().split(" ");

        int widthMeasurements = Integer.parseInt(nt[0]);

        int numberOfTestCases = Integer.parseInt(nt[1]);

        int[] width = new int[widthMeasurements];

        String[] widthItems = scanner.nextLine().split(" ");

        for (int i = 0; i < widthMeasurements; i++) {
            int widthItem = Integer.parseInt(widthItems[i]);
            width[i] = widthItem;
        }

        int[][] cases = new int[numberOfTestCases][2];

        for (int i = 0; i < numberOfTestCases; i++) {
            String[] casesRowItems = scanner.nextLine().split(" ");
            for (int j = 0; j < 2; j++) {
                int casesItem = Integer.parseInt(casesRowItems[j]);
                cases[i][j] = casesItem;
            }
        }

        int[] result = serviceLane(width,numberOfTestCases, cases);

        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }

        scanner.close();
    }
}
