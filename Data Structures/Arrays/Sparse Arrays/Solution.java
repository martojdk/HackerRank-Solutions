
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static int[] matchingStrings(String[] strings, String[] queries) {
        int[] result = new int[queries.length];
        int equalsCounter;
        for(int i=0;i<queries.length;i++){
            equalsCounter = 0;
            for(int j=0;j<strings.length;j++){
                if(queries[i].equalsIgnoreCase(strings[j])){
                    equalsCounter++;
                }
            }
            result [i] = equalsCounter;
        }
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int stringsCount = scanner.nextInt();
        scanner.nextLine();

        String[] strings = new String[stringsCount];

        for (int i = 0; i < stringsCount; i++) {
            String stringsItem = scanner.nextLine();
            strings[i] = stringsItem;
        }

        int queriesCount = scanner.nextInt();
        scanner.nextLine();
        String[] queries = new String[queriesCount];

        for (int i = 0; i < queriesCount; i++) {
            String queriesItem = scanner.nextLine();
            queries[i] = queriesItem;
        }

        int[] res = matchingStrings(strings, queries);

        for (int i = 0; i < res.length; i++) {

            System.out.println(res[i]);
        }

        scanner.close();
    }
}
