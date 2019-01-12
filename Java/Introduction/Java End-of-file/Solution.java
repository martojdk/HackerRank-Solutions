import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int index = 1;
        while(scanner.hasNext()){
            String next = scanner.nextLine();
            System.out.println(index + " " + next);
            index++;
        }
    }
}