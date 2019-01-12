
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the howManyGames function below.
    static long howManyGames(long initialPrice, long difference, long limit, long money) {
        long numberOfGames = 0 ;
        long i = money;
        long gameCost = initialPrice;
        if(money < initialPrice){
            return 0;
        }
        while(money >= 0 ){
            if(money < limit || money < gameCost){
                break;
            }
            money-=gameCost;
            if(gameCost - difference >= limit) {
                gameCost -= difference;
            } else {
                gameCost = limit;
            }
            numberOfGames++;
        }
        return numberOfGames;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        String[] pdms = scanner.nextLine().split(" ");

        long p = Long.parseLong(pdms[0]);

        long d = Long.parseLong(pdms[1]);

        long m = Long.parseLong(pdms[2]);

        long s = Long.parseLong(pdms[3]);

        long answer = howManyGames(p, d, m, s);
        System.out.println(answer);
        scanner.close();
    }
}