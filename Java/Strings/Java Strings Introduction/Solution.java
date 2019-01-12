import java.io.*;
import java.util.*;

public class Solution {


    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();

        int length = A.length() + B.length();
        System.out.println(length);
        if(A.compareTo(B) <= 0){
            System.out.println("No");
        } else {
            System.out.println("Yes");
        }
        System.out.println(Character.toUpperCase(A.charAt(0)) + A.substring(1,A.length()) + " " +
                Character.toUpperCase(B.charAt(0)) + B.substring(1,B.length()));

    }
}



