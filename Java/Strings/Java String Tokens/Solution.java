import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        if (s == null || s.equals("") || s.trim().equals("")){
            System.out.println("0");
            return;
        }
        String[] s1 = s.trim().split("[ !,?.\\_'@]+");
        if(s1.length == 0){
            System.out.println("0");
            return;
        }
        if(s1.length > 400000){
            return;
        }
        System.out.println(s1.length);
        for(String b : s1){
            System.out.println(b);
        }
        scan.close();
    }
}

