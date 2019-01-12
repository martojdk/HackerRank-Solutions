import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numberOfArrays = sc.nextInt();
        ArrayList[] arrList = new ArrayList[numberOfArrays];
        for(int i=0;i<numberOfArrays;i++){
            int numbersCount = sc.nextInt();
            arrList[i] = new ArrayList<Integer>(numbersCount);
            for(int j=0;j<numbersCount;j++){
                arrList[i].add(sc.nextInt());
            }
        }
        int numberOfQueries = sc.nextInt();
        int firstNumber;
        int secondNumber;
        for(int i=0;i<numberOfQueries;i++){
            firstNumber = sc.nextInt()-1;
            secondNumber = sc.nextInt()-1;
            try {
                Integer number = (Integer) arrList[firstNumber].get(secondNumber);
                System.out.println(number.intValue());
            } catch (IndexOutOfBoundsException e ){
                System.out.println("ERROR!");
            }
        }
    }
}

