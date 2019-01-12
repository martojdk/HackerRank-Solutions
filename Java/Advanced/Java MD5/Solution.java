
import java.math.BigInteger;
import java.security.DigestException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            String testString= sc.nextLine();
            MessageDigest md = MessageDigest.getInstance("MD5");
            byte[] messageDigest = md.digest(testString.getBytes());
            BigInteger number = new BigInteger(1, messageDigest);
            String hashText = number.toString(16);
            System.out.println(hashText);
        } catch (NoSuchAlgorithmException e) {
            System.out.println(e.getMessage());
        }
    }
}

