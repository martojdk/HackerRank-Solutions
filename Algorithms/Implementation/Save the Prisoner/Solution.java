import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        while (T-- > 0) {
            int N = scan.nextInt();
            int M = scan.nextInt();
            int S = scan.nextInt();
            int last = ((M - 1) + (S - 1)) % N + 1;
            System.out.println(last);
        }
        scan.close();
    }
}