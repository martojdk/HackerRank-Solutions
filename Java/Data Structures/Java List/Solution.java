import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numberOfInteger = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        for(int i=0;i<numberOfInteger;i++){
            list.add(sc.nextInt());
        }
        int numberOfQueries = sc.nextInt();
        sc.nextLine();
        for(int i=0;i<numberOfQueries;i++){
            String command = sc.nextLine();
            String []numbers;
            int index;
            int numberToInsert;
            if(command.equals("Insert")){
                numbers = sc.nextLine().split(" ");
                index = Integer.parseInt(numbers[0]);
                numberToInsert = Integer.parseInt(numbers[1]);
                list.add(index,numberToInsert);
            } else {
                index = Integer.parseInt(sc.nextLine());
                list.remove(index);
            }
        }
        for(int i : list){
            System.out.printf("%d ",i);
        }
    }
}

