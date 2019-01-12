//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh)
    {
        Scanner in = new Scanner(System.in);
        Map<String,Integer> map = new HashMap<>();
        int n=in.nextInt();
        in.nextLine();
        for(int i=0;i<n;i++)
        {
            String name=in.nextLine();
            int phone=in.nextInt();
            map.put(name,phone);
            in.nextLine();
        }
        while(in.hasNext())
        {
            String s=in.nextLine();
            Integer phoneNumber = map.get(s);
            if(phoneNumber == null){
                System.out.println("Not found");
            } else {
                System.out.printf("%s=%d\n",s,phoneNumber.intValue());
            }
        }
    }
}



