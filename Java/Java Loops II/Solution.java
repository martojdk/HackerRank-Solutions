import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int result = a;
            int counter = 1;
            int multipliable = 1;
            for(int j=0;j<n;j++){
                result += b*multipliable;
                multipliable*=2;
                System.out.print(result + " ");
                counter++;
            }
            System.out.println();
        }
        in.close();
    }
}