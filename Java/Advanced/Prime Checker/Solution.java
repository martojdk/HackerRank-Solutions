
import static java.lang.System.in;

class Prime{
    void checkPrime(int ... a){
        for(int i : a){
            if (BigInteger.valueOf(i).isProbablePrime(1)) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}
