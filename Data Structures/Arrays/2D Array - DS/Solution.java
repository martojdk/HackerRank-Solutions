
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static int hourglassSum(int[][] arr) {
        int sum = 0,sumCounter = 0,j;
        int result = Integer.MIN_VALUE;
        int iterationsCounterJ = 0,iterationsCounterI = 0;
        int jStartPosition = 0,iStartPosition = 0;
        int movingRightPositionCounter = 0;
        for(int i=iStartPosition;i<6;i++) {
            for (j = jStartPosition; j < 6; j++) {
                boolean isNotInTheHourglass = iterationsCounterI==1 && (iterationsCounterJ == 0 || iterationsCounterJ == 2);
                if(!isNotInTheHourglass){
                    sum += arr[i][j];
                }
                sumCounter++;
                if (sumCounter == 9) {
                    sumCounter = 0;
                    if (sum>result) {
                        result = sum;
                    }
                    sum = 0;
                    i=iStartPosition-1;
                    jStartPosition++;
                    movingRightPositionCounter++;
                    if (movingRightPositionCounter == 4) {
                        movingRightPositionCounter = 0;
                        iStartPosition ++;
                        jStartPosition = 0;
                    }
                }
                if (iterationsCounterJ == 2) {
                    iterationsCounterJ = 0;
                    if(iterationsCounterI==2){
                        iterationsCounterI=-1;
                    }
                    break;
                }
                iterationsCounterJ++;

            }
            iterationsCounterI++;


        }
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {

        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }

        System.out.println(hourglassSum(arr));

        scanner.close();
    }
}
