import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        StringBuilder sb = new StringBuilder();
        for(int i=A.length()-1;i>=0;i--){
            sb.append(A.charAt(i));
        }
        if(sb.toString().equals(A)){
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}



